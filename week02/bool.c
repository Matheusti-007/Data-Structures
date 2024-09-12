#include <stdio.h>
#include <stdbool.h>

/*
Boolean data type is used to represent logical values.It can therefore assume two values ​​true or false.

In C, the bool type was not a native keyword and programmers often used integers (int) to represent logical values, 
where 0 represents false and 1 represents true.
The inclusion of the header from c99 allowed the use of a more direct and intuitive boolean data type. 

In code, the boolean data type can be used mainly:
    
    a)Decision making,being useful together with control structures to control the execution flow based on logical conditions.
    b)Status signaling,whether or not a task has been completed, as in functions that return true or false to indicate success or failure.
    c)Code simplification,Improves code readability by using true and false instead of integers like 1 or 0.
 

*/

//Very simple example of how the boolean data type works
int main() {
    bool inCrash = true; 

    if(!inCrash)
        printf("System OK!\n");
    else
        printf("System in CRASH!\n");

    return (0);
}