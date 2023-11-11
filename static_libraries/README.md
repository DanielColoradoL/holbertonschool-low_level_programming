General
This README provides an overview of static libraries, explaining what they are, how they work, and the steps to create and use them. Additionally, it covers basic usage of the ar, ranlib, and nm commands.

What is a Static Library?
A static library, also known as an archive, is a collection of object files that are linked with a program during compilation. Unlike dynamic libraries, static libraries are included in the final executable, resulting in a standalone and self-contained binary.

How Does it Work?
When you create a static library, it contains precompiled object files (compiled source code). During the linking phase of compilation, the linker pulls in the necessary object files from the library and includes them in the final executable. This means that the entire code of the library becomes part of the executable, resulting in a single, monolithic binary.

How to Create a Static Library
To create a static library, you can use the ar (archive) command. The basic syntax is as follows:

bash
Copy code
ar rcs libexample.a file1.o file2.o file3.o
ar: The archive command.
rcs: Options for creating a static library (r for insert or replace, c for create, s for index or symbol table).
Replace libexample.a with the desired library name and file1.o, file2.o, etc., with the object files you want to include in the library.

How to Use a Static Library
To use a static library in your program, include its header files in your source code, and during compilation, link against the library. For example:

bash
Copy code
gcc -o my_program my_program.c -L/path/to/library -lexample
-L/path/to/library: Specifies the directory containing the library.
-lexample: Links against the libexample.a library.
Basic Usage of ar, ranlib, nm
ar - Archive Command
The ar command is used to create and modify static libraries. Some common options include:

r: Add files to the archive.
c: Create a new archive if it doesn't exist.
s: Write an index or symbol table.
Example usage:

bash
Copy code
ar rcs libexample.a file1.o file2.o
ranlib - Archive Indexing Command
The ranlib command is used to generate an index (or symbol table) for an archive. It enhances the performance of the linker when accessing symbols within the library.

Example usage:

bash
Copy code
ranlib libexample.a
nm - Symbol Table Listing
The nm command displays the symbol table of an object file or a static library. It shows information about functions and variables defined or used in the compiled code.

Example usage:

bash
Copy code
nm libexample.a
This README provides a basic understanding of static libraries, how to create them, and how to use the ar, ranlib, and nm commands. Further details can be found in the respective manual pages for each command (man ar, man ranlib, man nm).
