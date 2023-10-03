#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <elf.h>


/**
 * closeffs - close passed files
 * @ff: file1
 * Return: 0
 */
int closeffs(int ff)
{
	if (close(ff) == -1)
		dprintf(2, "Error: Can't close fd %d\n", ff), exit(100);
	return (0);
}



/**
 * display_elf_header - print elf info
 * @elf_filename: elf name
 * No Return
 */
void display_elf_header(const char *elf_filename)
{
	int ff, i;
	Elf64_Ehdr elf_header;
	ssize_t rr;

	ff = open(elf_filename, O_RDONLY);
	if (ff == -1)
		dprintf(2, "Error: Can't open file %s\n", elf_filename), exit(98);

	rr = read(ff, &elf_header, sizeof(elf_header));
	if (rr == -1)
		dprintf(2, "Error: Can't read from file %s\n", elf_filename), closeffs(ff),
exit(98);

	if (rr < (ssize_t)sizeof(Elf64_Ehdr))
		dprintf(2, "Error: Not a valid ELF file: %s\n", elf_filename), closeffs(ff),
exit(98);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", elf_header.e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n'
);
	printf("  Class:                             %s\n",
elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA
] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
	printf("  Version:                           %d (current)\n",
elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", elf_header.e_ident
[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
	printf("  ABI Version:                       %d\n",
elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s (%s)\n",
elf_header.e_type == ET_EXEC ? "EXEC" : (elf_header.e_type == ET_DYN ?
"DYN" : "Unknown"),
elf_header.e_type == ET_EXEC ? "Executable file" : (elf_header.e_type ==
ET_DYN ? "Shared object file" : "Unknown"));
	printf("  Entry point address:               0x%lx\n", (unsigned long)
elf_header.e_entry);

	closeffs(ff);
}

/**
 * main - display info about elf files
 * @ac: args len
 * @av: args array
 * Return: 0
 */
int main(int ac, char *av[])
{
	if (ac != 2)
		dprintf(2, "Usage: %s elf_filename\n", av[0]), exit(98);

	display_elf_header(av[1]);

	return (0);
}



