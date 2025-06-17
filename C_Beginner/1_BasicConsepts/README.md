# Introducing C 
**C** is a general-purpose programming language that has been around for nearly 50 years. 

**C** has been used to write everything from operating systems (including Windows and many others) to complex programs like the Python interpreter, Git, Oracle database, and more. 

# Welcome to C!
In this repository you will learn how to create real programs in C, perform various operations, solve real challenges, and much more!

# Output
Most computer programs are designed to produce outputs. Here are some examples:

- "You've got a new message" notifications
- "Game Over" displayed on the screen when playing video games
- Your account balance when checking your online banking app.

The simplest output consists of displaying a message on the screen.

Let's create our first C program that outputs a simple "Welcome to C" message to the screen.

```c
#include <stdio.h>

int main() {
    printf("Welcome to C");
    return 0;
}
```
```
💡 You can write code that generates outputs with the printf function.
💡 printf needs to include the text that you want to output inside parentheses.
```

# Statements

- A line of code is called a statement. A statement performs a specific task.
- Each statement in C needs to end with a semicolon ;.
- Without a semicolon, the output statement below will result in an error:

# Outputting Text
Text needs to be enclosed in double quotes:
```c
#include <stdio.h>

int main() {
    printf("I love coding");
    return 0;
}
```
```
💡 In programming, text in double quotes is called a string.
💡 Each statement in C needs to end with a semicolon ;
💡 Text needs to be enclosed in quotes
```

# ⭐ Try first your first coding challenge ⭐

- Now is your time to solve **Mission 1**!
- You can access it at **BasicConsepts/Mission_1_1.c**

# Program Structure
- Let's look at the code of the whole program and learn about all the code statements and what they do.

- Here is the code to output text:

```c
#include <stdio.h>

int main() {
    printf("Turtles are Cool!");
    return 0;
}
```

- The first line of the code adds the <stdio.h> header file to the program. 

```c
#include <stdio.h>
```

- A header is a file that contains functions and commands. 
- The <stdio.h> header contains the printf function, that we used for outputting text. This is why we need to include it in our program, to enable us to use the printf function.

```
💡 The #include command is used to add a header file to the program. Note the # symbol, it's necessary!
```

- Each C program has a entry point, or starting point, which is a function called main.
- Curly brackets ```{ }``` indicate the beginning and end of a function, which can also be called the function's body. The code inside the brackets indicates what the function does when executed.
- When we run the code, the printf command will be executed, as its inside the main() function.
- The last statement of the main() function is ```return 0;```
- It indicates that our program has successfully completed.

```c
int main() {
    printf("Hello");
    return 0;
}
```

- The ```main()``` function can contain a lot of statements, doing different things.
- As a simple example, let's use two different printf statements:

```c
#include <stdio.h>

int main() {
    printf("First");
    printf("Second");
    return 0;
}
```


- When you run this code, you'll notice that the output is on the same line. This is happening because the printf command does not add a new line at the end of the output.

- We will learn how to add new lines and format the output in the next lessons.


```
Remember the following important points:

💡 The #include statement is used to add a header file to the program.
💡 To use the printf command, you need to include the &lt;stdio.h&gt; header.
💡 The starting point of C programs is the function called main, which includes the code that you want to run inside curly braces.
💡 The last statement of the main() function is return 0;, which indicates the successful completion of the program.
```

# ⭐ Try your second coding challenge ⭐

- Now is your time to solve **Mission 2**!
- You can access it at **BasicConsepts/Mission_1_2.c**

# Output Formatting

## Output

- In all previous examples, we have output strings.
- A lot of programs work with numbers. For example, a game could output the score of the player.
- Try to output a number using printf and see what happens:

```c
#include <stdio.h>

int main() {
    printf(253);
    return 0;
}
```

- Running the code will result in an error, as printf is expecting a string in the parentheses.

## Numbers

- The printf function supports special format specifiers, which allow to output numbers and  output formatting.
- To output the number 253 from the previous example, we need the following code:

```c
#include <stdio.h>

int main() {
    printf("%d", 253);
    return 0;
}
```

- %d is the format specifier, which denotes that a whole number is expected. 
- The value of the number is given after a comma in printf.

## Output Formatting

- There are a number of format specifiers you can use.
- %f is used to output **floating point** numbers:

```c
#include <stdio.h>

int main() {
    printf("%f", 3.14);
    return 0;
}
```

- %c denotes a single character, while %s is used for strings:

```c
#include <stdio.h>

int main() {
    printf("%c", 'X');
    return 0;
}
```

```
💡 Single characters need to be enclosed in single quotes, while strings use double quotes.
```

- A great feature of the format specifiers is that you can use a combination of multiple specifiers and text in the printf() function.

- For example:

```c
#include <stdio.h>

int main() {
    printf("Score: %f. Level: %d", 42.8, 4);
    return 0;
}
```

- Each **format specifier** in replaced by the corresponding value, provided to **printf()** separated by **commas**.

```
💡 This is really handy, as you can format your output anyway you like.
```

- As we have seen in the previous lessons, printf() does not add a new line after the output. This means that when you use multiple printf() statements, they will get printed on the same line.

- For example:

```c
#include <stdio.h>

int main() {
    printf("Name: %s", "James");
    printf("Age: %d", 42);
    return 0;
}
```

## New Lines


The special character ```\n``` is used to create a new line in the output.

```c
#include <stdio.h>

int main() {
    printf("Name: %s\n", "James");
    printf("Age: %d", 42);
    return 0;
}
```

```
💡 You can use format specifiers in printf(), to insert different values in the given positions.
    💡 %d is for whole numbers
    💡 %f is for floating point numbers
    💡 %c is for single characters
    💡 %s is for strings
💡 You can combine multiple format specifiers in a single printf() statement. Remember to provide the corresponding values for each specifier, separated by commas.
💡 \n is a special character used to insert a new line into the output.
```

# ⭐ Try your third coding challenge ⭐

- Now is your time to solve **Mission 3**!
- You can access it at **BasicConsepts/Mission_1_3.c**

# Variables

- Every program works with values.
- ```A variable``` lets you store ```a value``` by assigning it to a name. The name can be used to refer to the value later in the program. 

```
💡 For example, in a game, you would use a variable to store the player's score.
```

- Every variable has ```a type```, which defines the type of the value it holds. 
- A variable can hold a ```text``` value, a ```number```, a ```decimal```, etc.
- Let's create a variable that stores a number:

```c
int score;
```

- ```int``` is the type that stores whole numbers, or as we call them in programming, ```integers```.

```
💡 In programming terms, the process of creating a variable is called declaration.
```

- After declaring our variable, we can assign it a value using the assignment = operator:

```c
int score;
score = 253;
```

- Now, after declaring and assigning a value, we can output the value of our variable:

```c
#include <stdio.h>

int main() {
    int score;
    score = 253;

    printf("%d", score);

    return 0;
}
```

```
💡 We used the %d format specifier, as score is an integer, and passed score to the printf function as the value to be inserted.
```

- We can also combine the declaration and assignment into one statement, like this:

```c
#include <stdio.h>

int main() {
    int score = 253;

    printf("%d", score);

    return 0;
}
```

```
💡 This is handy when we already know the value for our variable and makes the code shorter and more readable.
```

- A variable can change its value during the program multiple times. 
- For example, the ```score``` can change during a game:

```c
#include <stdio.h>

int main() {
    int score = 253;
    score = 280;

    printf("%d", score);

    return 0;
}
```

```
💡 A variable has a name and a type of the value it holds. 
💡 To declare a variable use the type followed by the name of the variable.
💡 The int type is used to store whole numbers.
💡 You can assign a value to the declared variable using the = operator.
💡 A variable can change its value during the program, by being assigned to a new value.
```

# ⭐ Try your fourth coding challenge ⭐

- Now is your time to solve **Mission 4**!
- You can access it at **BasicConsepts/Mission_1_4.c**

# Data Types

- Variables need to have their data type, which define the type of the value they store.
- We have seen the ```int``` data type in the previous examples, used to store whole numbers:

```c
#include <stdio.h>

int main() {
    int score = 851;

    printf("Score: %d", score);

    return 0;
}
```

## Decimals

- To store decimals (or floating point numbers), C provides the ```float``` and ```double``` data types.

- For example: 

```c
#include <stdio.h>

int main() {
    float height = 61.5;

    printf("%f", height);

    return 0;
}
```

```
💡 The format specifier for floats is %f.
```

- The ```double``` data type is also used to store decimals.

```c
#include <stdio.h>

int main() {
    double temp = 32.64;

    printf("%lf", temp);

    return 0;
}
```

- The format specifier for ```double``` is ```%lf```.

## 💥 float vs double 💥

- ```float``` uses less storage in the memory, but is not as precise as the ```double``` type.

- This means that calculations that use floats are faster than the ones that use double, however, the results are less accurate in terms of the decimal digits.

```
💡 Generally, float is sufficient for storing 7 decimal digits, while double can hold 15 decimal digits.
```

## 🅰️ Char 🅰️

- The ```char``` type is used to store a single character.
- It is similar to declaring a ```string```, but uses single quotes for the value:

```c
#include <stdio.h>

int main() {
    char letter = 'X';

    printf("%c", letter);

    return 0;
}
```

```
💡 %c is the format specifier for the char type.
```

## 🗻 Constants 🗻

- Variables can be defined as ```constants```. This means that they cannot be changed.
- To define a constant, use the ```const``` keyword before the data type of the variable, for example:


```c
#include <stdio.h>

int main() {
    const int num = 42;
    
    printf("%d", num);

    return 0;
}
```

- Now, ```num``` is a constant, and its value is read-only.
- Constants must be assigned a value when declared.
- Trying to declare it and then assign a value using a separated statement will result in an ```error```.
- For example:

```c
#include <stdio.h>

int main() {
    const int num;
    num = 42;
    printf("%d", num);

    return 0;
}
```

```
💡 int is used to hold whole numbers (integers)
💡 float and double store decimals.
💡 float is similar to double, but has less precision and requires less memory.
💡 char holds a single character.
💡 The const keyword is used to define a constant, which is a variable that cannot be changed (is read-only)
```

# ⭐ Try your fifth coding challenge ⭐

- Now is your time to solve **Mission 5**!
- You can access it at **BasicConsepts/Mission_1_5.c**

# ➕➖ Doing Math ✖️➗

- You can use arithmetic operators to perform calculations.
- Let's declare two variables and output their sum:

```c
#include <stdio.h>

int main() {
    int x = 8;
    int y = 4;
    printf("%d", x+y);

    return 0;
}
```

- The result of a calculation can be assigned to another variable.
- For example, let's use subtraction to demonstrate:

```c
#include <stdio.h>

int main() {
    int won = 8;
    int lost = 3;
    int score = won-lost;
    printf("%d", score);

    return 0;
}
```

## ✖️ Multiplication ✖️

- ```Multiplication``` is done using the ```*``` operator.
- For example:

```c
#include <stdio.h>

int main() {
    int width = 52;
    int height = 14;

    int area = width*height;
    printf("%d", area);

    return 0;
}
```

## ➗ Division ➗

- The division ```/``` operator performs differently depending on the data types of the operands. When both operands are integers, ```integer division```, (also called ```truncated division```), removes any remainder to result in an integer.
- For example, let's convert the given kilobytes value to megabytes:

```c
#include <stdio.h>

int main() {
    int kb = 35800;
    int mb = kb/1024;
    printf("%d", mb);

    return 0;
}
```

```
💡 The result will be an integer.
```

- In case we want a more precise result, we can use floats in our division:

```c
#include <stdio.h>

int main() {
    float kb = 35800;
    float mb = kb/1024;
    printf("%f", mb);

    return 0;
}
```

## 💯 Remainder 💯

- The ```%``` remainder operator (also called the ```modulo```) is used to find the remainder of a division.
- Let's find out how many of 100 items will be left over if we divide them into boxes of 8:

```c
#include <stdio.h>

int main() {
    int items = 100;
    int per_box = 8;
    int left_over = items % per_box;
    printf("%d", left_over);

    return 0;
}
```

```
💡Doing math with C is fun! Here are some key takeaways:
💡You can use basic math operators to perform calculations with values and variables.

    💡+ is addition
    💡- is subtraction
    💡/ is division
    💡Dividing integers results in an integer, while dividing floats results in a float.
    💡% finds the remainder of a division
```

# ⭐ Try your sixth coding challenge ⭐

- Now is your time to solve **Mission 6**!
- You can access it at **BasicConsepts/Mission_1_6.c**

# ⁉️ Comments ⁉️

```
💡 Great job, you have almost completed the first module! Let's understand how comments work in C.
```
- ```Comments``` are annotations in the code that explain what the code is doing.
- Code is for computers, while comments are for humans who read and work with the code.

- A ```single-line comment``` starts with two forward slashes and continues until it reaches the end of the line. 
- For example:

```c
#include <stdio.h>

int main() {
    // storing the age
    int age = 42; // some demo value
    printf("%d", age);

    return 0;
}
```

```
💡 Adding comments as you write code is a good practice, because they provide clarification and understanding when you need to refer back to it, as well as for others who might need to read it.
```

- You can also ```comment out``` lines of code, in case they are work-in-progress or you don't want to delete them yet:

```c
#include <stdio.h>

int main() {
    int age = 42;
    //age = 8;
    
    printf("%d", age);
    //printf("Some demo program");

    return 0;
}
```

```
💡 The commented lines of code will get ignored when you run the program.
```

## ⁉️ Multi-Line Comments ⁉️

- If you need to comment out multiple lines, or write a long, multi-line comment, you can use the ```/* */``` symbols, like this:

```c
#include <stdio.h>

int main() {
    /*  This is just a
  demo program
  that outputs a demo value */
    int age = 42;
    
    printf("%d", age);

    return 0;
}
```

```
💡 Anything between the /* and */ symbols becomes a comment.
```

```
💡Comments are explanatory statements that explain what the code is doing.
💡They can contain notes, todos as well as code that is work-in-progress.

    💡 // starts a single line comment.
    💡 /* */ is used for multi-line comments.
```

# ⭐ Try your last coding challenge for this module! ⭐

- Now is your time to solve **Mission 7**!
- You can access it at **BasicConsepts/Mission_1_7.c**

# 💀 Great Job. Are you ready for the BOSS of this module? 💀

- Try to solve **Boss 1**
- You can access it at **BasicConsepts/Mission_1_BOSS.c**