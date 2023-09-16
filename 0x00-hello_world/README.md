# 0-preprocessoer

1. #!/bin/bash: This is called a shebang and specifies that the script should be run using the Bash shell.
2. gcc -E $CFILE -o c: This line invokes the gcc command with the -E option, which tells it to perform only the preprocessing stage of compilation. $CFILE is a placeholder for the input C source file, and -o c specifies that the output should be saved to a file named "c".

# 1-compiler

1. #!/bin/bash : This is called a shebang, and it specifies that the script should be executed using the bash shell.
2. gcc -c $CFILE : This line invokes the gcc compiler with the -c flag. The -c flag tells gcc to compile the source file into an object file without linking it. $CFILE is a variable that holds the name of the C source file to be compiled. The script assumes that the variable has been defined somewhere before this line.

# 2-assembler

1.  #!/bin/bash : This is called a shebang and it specifies the interpreter for the script, in this case, it's the bash shell. 
2.  gcc $CFILE -S : This line invokes the gcc (GNU Compiler Collection) command to compile the C source file. The  $CFILE  variable is used to represent the name of the C file to be compiled. The  -S  option tells gcc to generate assembly code instead of object code or an executable

# 3-name

1.  #!/bin/bash : This is called a shebang and specifies the interpreter for the script, in this case, it's the bash shell. 
2.  gcc $CFILE -o cisfun : This line invokes the gcc (GNU Compiler Collection) command to compile the C source file represented by the  $CFILE  variable. The  -o  option is used to specify the output file name, which in this case is "cisfun". The output file will be an executable file that can be run.

# 4-puts

1.  #include <stdio.h> : This line includes the standard input/output library ( stdio.h ) in the program. This library provides functions for input and output operations. 
2.  int main(void) : This is the main function, which serves as the entry point of the program. It has a return type of  int , indicating that it will return an integer value. The  void  inside the parentheses means that the main function takes no arguments. 
3.  puts("\"Programming is like building a multilingual puzzle") : The  puts  function is used to print a string to the console. In this case, it prints the message "Programming is like building a multilingual puzzle". The backslashes ( \`) before the double quotes ( " ) are used to escape the quotes and include them as part of the printed message. 
4.  return (0) : This line returns an integer value of 0, indicating that the program executed successfully. The value 0 conventionally represents success in C programs.

# 5-printf

1.  #include <stdio.h> : This line includes the standard input/output library ( stdio.h ) in the program. This library provides functions for input and output operations.  
2.  int main(void) : This is the main function, which serves as the entry point of the program. It has a return type of  int , indicating that it will return an integer value. The  void  inside the parentheses means that the main function takes no arguments.  
3.  printf("with proper grammar, but the outcome is a piece of art,\n"); : The  printf  function is used to print a formatted string to the console. In this case, it prints the message "with proper grammar, but the outcome is a piece of art,". The  \n  at the end represents a newline character, causing the next output to appear on a new line.  
4.  return (0) : This line returns an integer value of 0, indicating that the program executed successfully. The value 0 conventionally represents success in C programs.

# 6-size

1.  #include <stdio.h> : This line includes the standard input/output library ( stdio.h ) in the program. This library provides functions for input and output operations. 
2.  int main(void) : This is the main function, which serves as the entry point of the program. It has a return type of  int , indicating that it will return an integer value. The  void  inside the parentheses means that the main function takes no arguments. 
3.  int a; ,  long int b; ,  long long int c; ,  char d; ,  float f; : These lines declare variables of different data types ( int ,  long int ,  long long int ,  char , and  float ).  
4.  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d)); : The  printf  function is used to print formatted output to the console. In this case, it prints the size of the  char  data type using the  sizeof  operator. The  (unsigned long)  typecast is used to ensure that the size is correctly printed as an unsigned long integer. 
5. Similarly, the next four  printf  statements print the sizes of the  int ,  long int ,  long long int , and  float  data types, respectively. 
6.  return (0); : This line returns an integer value of 0, indicating that the program executed successfully. The value 0 conventionally represents success in C programs.

# 100-intel

1.  #!/bin/bash : This is called a shebang and specifies the interpreter for the script, in this case, it's the bash shell.  
2.  gcc -S -masm=intel $CFILE : This line invokes the gcc (GNU Compiler Collection) command with certain options to generate assembly code in Intel syntax. The  -S  option tells gcc to generate assembly code instead of object code or an executable. The  -masm=intel  option specifies that the assembly code should be written using Intel syntax, which is one of the two commonly used assembly language syntaxes (the other being AT&T syntax). The  $CFILE  variable represents the name of the C source file to be compiled.

# 101-quote

1.  #include <stdio.h> : This line includes the standard input/output library ( stdio.h ) in the program. This library provides functions for input and output operations.  
2.  #include <unistd.h> : This line includes the unistd library ( unistd.h ) in the program. This library provides access to various POSIX (Portable Operating System Interface) functions, including the  write  function used in this code.  
3.  int main(void) : This is the main function, which serves as the entry point of the program. It has a return type of  int , indicating that it will return an integer value. The  void  inside the parentheses means that the main function takes no arguments.  
4.  write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59); : The  write  function is used to write data to a file descriptor. In this case, it writes the specified message to the standard output (stdout). The number  1  represents the file descriptor for stdout, and the string argument is the message to be written. The number  59  represents the length of the message.  
5.  return (1); : This line returns an integer value of 1, indicating an error or abnormal termination of the program. Typically, a return value of 0 is used to indicate success, but in this case, the code intentionally returns 1
