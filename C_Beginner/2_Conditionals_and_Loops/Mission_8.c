/*

######## INPUT ########

######## TASK ########

Let's make our previous program interactive!
We need to change it, to take the number of tickets ordered from input.
The price should remain declared with the given value.

######## HINT ########

Remember to use the correct format specifier when taking input, 
and use the & symbol before the variable name in the scanf() function.

######## OUTPUT ########

if input is = 123
then output is = Total: 916.349976 

*/

#include <stdio.h>

int main() {
    // number of tickets ordered
    int tickets; // take it from input

    // price per ticket
    float price = 7.45;

    float total = tickets*price;

    printf("Total: %f", total);

    return 0;
}