# 2. Conditionals and Loops

You are doind a Great job! Keep is up!

# 📃 Taking Input

- Your programs may take user input. For example, these can be commands in a game, or values for an app to process and generate the output.

```
💡 In this chapter we will learn how to take user input in C!
```

- The ```scanf()``` function is used to take user input based on the given format specifier. It works similar to the ```printf()``` function.
- For example, let's take an integer from input:

```c
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    printf("You entered: %d", num);

    return 0;
}
```

- We first declare the variable that will hold our input value.
- Then we use it in the ```scanf()``` function.

```
💡 Note the syntax: the & sign before the variable name is the address operator. It gives the address, or location in memory, of a variable. We will learn more about this in future lessons, for now, just remember that the scanf() function needs to use the variable name with the & sign.
```

## 📊 Multiple Inputs 📊

- You can take multiple inputs throughout your program. 
- For example, let's take two integers as input and output their sum:

```c
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", x+y);

    return 0;
}
```

```
💡 Run the code yourself to see how it works. The program will prompt for input and wait till the user provides the required inputs.
```

## #️⃣ Variables #️⃣

- Also, note how we declared the variables: 

```c
int x, y;
```

- In case the variables have the same type, you can declare them on a single line, by separating them with commas.

## 😫 TLDR 😆
```
💡 First, declare a variable that will store the input. Then, use it in the scanf() function.
💡 scanf() is similar to printf(): it uses a format specifier to prompt the user for the corresponding input. 
💡 Remember, you need to use the & sign before the variable name in the scanf() function - it is used to get the address of the variable, which tells scanf() where to store the given value.
💡 It is important to use the correct type for the variable that will store the input.
```

# ⭐ It is time to do a coding challenge ⭐

- Now is your time to solve **Mission 8**!
- You can access it at **2_Conditionals_and_Loops/Mission_8.c**

# ⁉️ Conditionals ⁉️

## ❗ Decision Making ❗


- ```Conditional``` statements are used to perform different actions based on different conditions. 
- For example, a game can choose the opponents based on the level of the player, or a banking app can provide benefits based on the balance of the client.
- Let's learn how to create such programs.

```c
if(condition) {
  //code to run
}
```

The ```if``` statement allows you to run a specified code if a given condition holds.

```
💡 Note that the condition is enclosed in parentheses, and code of the if statement is enclosed in curly brackets { }.
```

## ⁉️ if Statement ⁉️

The following comparison operators may be used to form the condition:

&lt; less than

&gt; greater than

!= not equal to

== equal to

&lt;= less than or equal to

&gt;= greater than or equal to

For example: 

```c
#include <stdio.h>

int main() {
    int score = 142;
    if(score >= 100) {
        printf("Level Completed!");
    }

    return 0;
}
```

```
💡 The message will be output only if the condition is satisfied.
💡 Try this code and change the value of the score variable to see how it works.
```

- Remember that you need to use two equal signs ```==``` to test for equality, since a single equal sign is the assignment operator.
- For example, let's check the ```position``` value for equality:

```c
#include <stdio.h>

int main() {
    int position = 2;
    
    if(position == 2) {
        printf("Silver");
    }

    return 0;
}
```

## 🔀 else Statement 🔀

- You can use the ```else``` statement after an ```if``` statement, if you want to run a code in case the condition is not satisfied.
- For example:

```c
#include <stdio.h>

int main() {
    int score = 87;
    if(score >= 100) {
        printf("Level Completed!");
    }
    else {
        printf("Game Over");
    }

    return 0;
}
```

```
💡 Try changing the score value and see how the output will change!
```

## 🔀 else if Statement 🔀

- In case you need to check for multiple different values, you can use ```else if``` statements. 
- For example, let's check the ```position``` variable and output the corresponding medal:

```c
#include <stdio.h>

int main() {
    int position = 2;
    if(position == 1) {
        printf("Gold");
    }
    else if(position == 2) {
        printf("Silver");
    }
    else {
        printf("Something else");
    }

    return 0;
}
```

```
💡 You can include as many else if statements as you need.
```

## 😫 TLDR 😆

- You can check for a condition using the if statement.
- In case the condition does not hold, the code in an else statement can be executed.
- Here is a generic structure of if-else statements:

```c
if(condition) {
  //some code
} 
else if(condition) {
//some other code
} 
else {
  //some other code
}
```

# ⭐ It is time to do a coding challenge ⭐

- Now is your time to solve **Mission 9**!
- You can access it at **2_Conditionals_and_Loops/Mission_9.c**

# ↕️ The switch Statements ↕️

## 🔛 Conditionals 🔛

- As we have seen, we can check for multiple conditions using ```if-else-if``` statements.
- For example, consider the following program, that checks the position value and outputs the corresponding medal:

```c
#include <stdio.h>

int main() {
    int position = 2;
    
    if(position == 1) {
        printf("Gold");
    } else if(position == 2) {
        printf("Silver");
    } else if(position == 3) {
        printf("Bronze");
    }
    else {
        printf("No medal");
    }

    return 0;
}
```

```
💡 When we have a lot of conditions to check, the code becomes hard to read and understand. Let's learn how to make it shorter!
```

## 🔛 switch 🔛

- The ```switch``` statement can be used to check for equality against a list of values, instead of multiple ```else if``` statements.

- Here is the previous example using a ```switch```: 

```c
#include <stdio.h>

int main() {
    int position = 2;

    switch(position) {
        case 1:
            printf("Gold");
            break;
        case 2:
            printf("Silver");
            break;
        case 3:
            printf("Bronze");
            break;
        default:
            printf("No medal");
    }

    return 0;
}
```

- Each ```case``` has a value to compare with. When the switch variable's value is equal to a ```case``` value, the code inside it is executed, until a ```break``` statement is reached.
- Each ```case``` has to have a ```value``` and a ```colon```.

- The ```break``` statement is used to terminate the switch, when the case it matched.

- If you forget to add the ```break``` after each case, the program will continue to execute the code in the next ```case``` statements, even if their value does not match the variable's value.

- Run the next example yourself, to see what happens:

```c
#include <stdio.h>

int main() {
    int position = 2;

    switch(position) {
        case 1:
            printf("Gold");
        case 2:
            printf("Silver");
        case 3:
            printf("Bronze");
        default:
            printf("No medal");
    } 

    return 0;
}
```

```
💡 This type of behavior is called fall-through. It usually occurs due to errors, when the programmer forgets to add the break statements for each case.
```

## ⏩ default ⏪

- There is a ```default``` case at the end of the ```switch``` statement.
- It is used to run code, when none of the cases match:

```c
#include <stdio.h>

int main() {
    int position = 8;

    switch(position) {
        case 1:
            printf("Gold");
        case 2:
            printf("Silver");
        case 3:
            printf("Bronze");
        default:
            printf("No medal");
    } 
    

    return 0;
}
```

```
💡 No break is needed in the default case, as it is always the last statement in the switch.
```

## 😫 TLDR 😆

- The ```switch``` statement is a handy way to check for multiple values.

```
💡 Remember, that each case is followed by a value and a colon.
💡 Each case needs a break statement, or the code of the other cases will continue to get executed, even if they do not match. 
💡 The default case can be used to run code if none of the cases match. 
```

# ⭐ It is time to do a coding challenge ⭐

- Now is your time to solve **Mission 10**!
- You can access it at **2_Conditionals_and_Loops/Mission_10.c**

# 🔠 Multiple Conditions 🔠

## 🔠 Combining Conditions 🔠

- In some scenarios we need to combine multiple conditions. Let's say we want to check that the ```age``` value is between ```18``` and ```45```.
- This can be done using the ```&&``` operator:

```c
#include <stdio.h>

int main() {
    int age = 24;

    if(age >= 18 && age <= 45) {
        printf("OK");
    }

    return 0;
}
```

```
💡 The && operator is also referred to as the logical AND operator.
```

## ↔️ OR ↔️

- The logical ```OR``` operator, written as ```||``` combines conditions. The code will run if any one of the conditions is satisfied.
- For example:

```c
#include <stdio.h>

int main() {
    int balance = 500;
    int level = 5;

    if(balance > 1000 || level > 3) {
        printf("Gold Tier");
    }

    return 0;
}
```

## 🚫 NOT 🚫

- The logical ```NOT``` operator ```!``` reverses the condition.
- For example:

```c
#include <stdio.h>

int main() {
    int age = 31;

    if( !(age < 18) ) {
        printf("Adult");
    }

    return 0;
}
```

```
💡 !(age < 18) reads as "age is not less than 18".
```

## 🔠 Multiple Conditions 🔠

- You can chain multiple conditions using parentheses and the logical operators.
- For example:

```c
#include <stdio.h>

int main() {
    int balance = 200;
    int level = 8;
    char type = 'V';

    if(balance > 1000 || (level > 2 && type == 'V')) {
        printf("Welcome");
    }

    return 0;
}
```

## 😫 TLDR 😆

- Logical operators allow you to combine multiple conditions.
```
💡 The AND operator && combines two conditions.
💡 The OR operator || check if any of the conditions hold.
💡 The NOT operator ! reverses the condition.
💡 You can combine and chain conditions using parentheses and logical operators.
```

# ⭐ It is time to do a coding challenge ⭐

- Now is your time to solve **Mission 11**!
- You can access it at **2_Conditionals_and_Loops/Mission_11.c**

# 🔁 Loops 🔁

- A ```loop``` allows you to repeat a block of code multiple times.

```
💡 For example, a banking app can loop through all transactions, or a shopping app can loop through all products in the shopping cart to calculate the total.
```

## 🔁 while Loop 🔁

- The ```while``` loop takes a condition and repeats its statements while the condition is satisfied.
- For example: 

```c
#include <stdio.h>

int main() {
    int num = 1;
    while (num < 5) {
        printf("%d \n", num);
        num = num + 1;
    }

    return 0;
}
```

- The statement ```num = num + 1``` increases the value of num by 1 each time the loop runs. 
- This is important, as without it the loop would run forever.
- The loop stops as soon as the value of ```num``` reaches the value ```5```.

## ➕➕ Increment & Decrement ➖➖

- As it's common to increment and decrement a variable's value by 1 in loops, C provides special ```increment``` and ```decrement``` operators.
- For example, ```num=num+1``` can be shortened to ```num++```:

```c
#include <stdio.h>

int main() {
    int num = 1;
    while (num < 5) {
        printf("%d \n", num);
        num++;
    }

    return 0;
}
```

- Similarly, ```num--``` will decrease the value of ```num``` by 1:

```c
#include <stdio.h>

int main() {
    int num = 10;
    while (num > 0) {
        printf("%d \n", num);
        num--;
    }

    return 0;
}
```

```
💡 This will output the numbers 10 to 1.
```

## ➕✖️ Shorthand Operators ➖➗

- Sometimes you might need to increase or decrease the value of a variable by a different value than 1. 
- For these cases, C provides shorthand operators, too!
- For example, ```num=num+3``` can be shortened to ```num+=3```:

```c
#include <stdio.h>

int main() {
    int num = 0;
    while (num < 10) {
        printf("%d \n", num);
        num += 3;
    }

    return 0;
}
```

```
💡 This will output only the numbers 0, 3, 6 and 9.
💡 Similarly, there are shorthand operators for other mathematical operations, such as -= for subtraction, *= for multiplication, etc.
```

## 🔁 do while 🔁

- Another variation of the while loop is ```do-while```.
- Here is an example:

```c
#include <stdio.h>

int main() {
    int num = 0;
    do {
        printf("%d \n", num);
        num += 3;  
    } while (num < 10);

    return 0;
}
```

- The difference with a ```while``` loop is that the condition is checked after the code, meaning the code in the ```do``` is executed at least once, even if the condition is not satisfied.
- Also, note the ```semicolon``` after the ```while``` condition.

```
💡 Try changing the condition in the code above to num > 50 and see the result.
```

## 😫 TLDR 😆

```
💡 The code in the while loop runs as long as the condition holds.
💡 The ++ and -- operators are used to increase and decrease the value of a variable by one.
💡 C provides shorthand operators to perform mathematical operations on a variable, for example num=num * 5 can be written as num *= 5.
💡 The do-while loop is similar to a while loop, but it is guaranteed to run at least once. 
```

# ⭐ It is time to do a coding challenge ⭐

- Now is your time to solve **Mission 12**!
- You can access it at **2_Conditionals_and_Loops/Mission_12.c**

# 🔂 The for Loop 🔂

- Another loop structure is the ```for``` loop. It has the following form:
```c
#include <stdio.h>

int main() {
    for(int i=1; i<10; i++) {
        printf("%d \n", i);
    }
    
    return 0;
}
```
```
💡 This will output the numbers 1 to 9, each number on a new line.
```

- The ```for``` loop has 3 components in the parentheses:

    - The first part runs once when we enter the loop and initializes the variable.
    - The second part is the condition of the loop.
    - The third part runs every time the loop runs.

```
💡 Note the semicolons between the components.
````

- You can have any type of condition and any type of increment statements in the ```for``` loop.
- For example, let's output the even numbers from 2 to 100:

```c
#include <stdio.h>

int main() {
    for(int i=2; i<=100; i+=2) {
        printf("%d \n", i);
    }
    
    return 0;
}
```

## 🚫 Break 🚫

- Remember the ```break;``` statement that was used in ```switch``` to stop it when a ```case``` was matched?
- It can also be used to stop a loop. 
- For example:

```c
#include <stdio.h>

int main() {
    for(int i=1; i<10; i++) {
        if(i == 5) {
            break;
        }
        printf("%d \n", i);
    }
    
    return 0;
}
```

```
💡 The loop will stop when i reaches the value 5.
```

## ▶️ continue ▶️

- The ```continue``` statement skips the current loop iteration and continues with the next one.
- For example:

```c
#include <stdio.h>

int main() {
    for(int i=1; i<10; i++) {
        if(i == 5) {
            continue;
        }
        printf("%d \n", i);
    }
    
    return 0;
}
```

```
💡This will skip the number 5 but will run until i reaches 10.
💡Run the code yourself to see the result.
```

## 😫 TLDR 😆

The ```for``` loop has the following syntax:
```c
for(init; condition; increment) {
   //code
}
```
```
💡 The break statement can be used to stop a loop.
💡 The continue statement can be used to skip the current iteration of the loop and jump to the next one. 
```

# ⭐ It is time to do a coding challenge ⭐

- Now is your time to solve **Mission 13**!
- You can access it at **2_Conditionals_and_Loops/Mission_13.c**

# 💀 Great Job. Are you ready for the BOSS of this module? 💀

- Try to solve **Boss 2**
- You can access it at **2_Conditionals_and_Loops/Mission_BOSS_2.c**

# Did you beat the first BOSS?

- Avesome! Now it is time for you to move forward!