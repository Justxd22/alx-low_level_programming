#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <elf.h>


/**
 * closef - close passed files
 * @ff: file1
 * @s: status
 * Return: 0
 */
int closef(int ff, int s)
{
	if (close(ff) == -1)
		dprintf(2, "Error: Can't close fd %d\n", ff), exit(100);
	if (s)
		exit(98);
	return (0);
}


/**
 * display_osabi - print OS/ABI
 * @osabi: var
 * Return: the right osabi
 */
const char *display_osabi(const unsigned char *osabi)
{
	switch (osabi[EI_OSABI])
	{
	case ELFOSABI_LINUX:
		return ("UNIX - Linux");
	case ELFOSABI_NONE:
		return ("UNIX - System V");
	case ELFOSABI_HPUX:
		return ("UNIX - HP-UX");
	case ELFOSABI_NETBSD:
		return ("UNIX - NetBSD");
	case ELFOSABI_SOLARIS:
		return ("UNIX - Solaris");
	case ELFOSABI_IRIX:
		return ("UNIX - IRIX");
	case ELFOSABI_FREEBSD:
		return ("UNIX - FreeBSD");
	case ELFOSABI_TRU64:
		return ("UNIX - TRU64");
	case ELFOSABI_ARM:
		return ("ARM");
	case ELFOSABI_STANDALONE:
		return ("Standalone App");
	default:
		printf("<unknown: %x>", osabi[EI_OSABI]);
		return ("");
	}
}


/**
 * display_data - print Data
 * @data: var
 * Return: the right data
 */
const char *display_data(const unsigned char *data)
{
	switch (data[EI_DATA])
	{
	case ELFDATA2LSB:
		return ("2's complement, little endian");
	case ELFDATA2MSB:
		return ("2's complement, big endian");
	default:
		return ("unknown");
	}
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
		dprintf(2, "Error: Can't read from file %s\n", elf_filename), closef(ff, 1);

	if (elf_header.e_ident[EI_MAG0] != 0x7f)
		dprintf(2, "Error: Not a valid ELF file: %s\n", elf_filename), closef(ff, 1);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", elf_header.e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n'
);
	printf("  Class:                             %s\n",
elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
display_data(elf_header.e_ident));
	printf("  Version:                           %d %s\n",
elf_header.e_ident[EI_VERSION], elf_header.e_ident[EI_VERSION] == EV_CURRENT ?
"(current)" : "");
	printf("  OS/ABI:                            %s\n",
display_osabi(elf_header.e_ident));
	printf("  ABI Version:                       %d\n",
elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s (%s)\n",
elf_header.e_type == ET_EXEC ? "EXEC" : (elf_header.e_type == ET_DYN ?
"DYN" : "Unknown"),
elf_header.e_type == ET_EXEC ? "Executable file" : (elf_header.e_type ==
ET_DYN ? "Shared object file" : "Unknown"));
	printf("  Entry point address:               0x%lx\n", (unsigned long)
(elf_header.e_entry & 0xFFFFFFFF));

	closef(ff, 0);
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



