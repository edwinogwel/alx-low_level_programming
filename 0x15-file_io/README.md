# 0x15. C - File I/O

## Tasks
#### [ 0. Tread lightly, she is near](0-read_textfile.c)
Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: ```ssize_t read_textfile(const char *filename, size_t letters);```

#### [ 1. Under the snow](1-create_file.c)
Create a function that creates a file.

- Prototype: ```int create_file(const char *filename, char *text_content);```

#### [ 2. Speak gently, she can hear](2-append_text_to_file.c)
Write a function that appends text at the end of a file.

- Prototype: ```int append_text_to_file(const char *filename, char *text_content);```

#### [ 3. cp](3-cp.c)
Write a program that copies the content of a file to another file.

Usage: ```cp file_from file_to```

#### [4. elf](100-elf_header.c)
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: ```elf_header elf_filename```
