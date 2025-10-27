# ex00

The task is simple, just a program called "Megaphone" that takes some strings and convert them to all capital letters.

# Code Structure

The main() function looks identical to C language

```c
int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		str_to_upper(argv[i]);
	std::cout << std::endl;
	return (0);
}
```

But its inside is not exactly the same.

Normally, in C language, this program can just use **toupper()** and iterates to all characters of the string. But this project stated that we can only use standard library from C++ only and C is not allowed. So we need to know what library in C++ that we need to use.

## But how to **printf** ?? 

Yes, **printf** is the C function and you cannot use this function in this C++ exercise.

when we need to print something in cpp we do it like this

```c
#include <iostream>

int main(){
    std::cout << "Hello world";
}
```

Its knid of different from C we used to know **printf** like this

```c
#include <stdio.h>

int main(){
    printf("Hello World");
}
```

There are new symbols that we don't know
- the '**::**'
- the '**<<**'
- and also the **include** also different, the C++ use \<iostream\> instead.

## What is \<iostream\>?

I saw some post on the <u>cplusplus.com</u> and i think it helps understand easier. And also explain all through fundamentals. (Here is for the [source.](https://cplusplus.com/forum/beginner/175445/))

"This line starts with a **#**, it is called a preprocessor directive. The preprocessor reads youe program before it is compiled and only executes thise lines beginning with a **#** symbol. Think of the preprocessor as a program that 'sets up' your source code for the compiler.

The **#include** directive causes the preprocessor to include the contents of another file in the program. The word inside the brackets, **iostream**, is the name of the file that is to be included. The **iostream** file contains code that allows a C++ program to display output on the screen and read input from the keyboard. Because this program uses **cout** to display screen output, the **iostream** file must be included. The contents of the **iostream** file are included in the prograde at the point the **#include** statement appears. The **iostream** file is called a <u>header file</u>, so it should be included at the head, or top, of the program. "



