#include <stdio.h>

/* 
   Due to its declaration,the union may seem very similar to a structure.
   However, they are data types with very antagonistic characteristics.

    a)Struct:
        - The members of a structs have their own memory space. 
        - The size of the struct is the sum of the size of all members.
        - Structs can store and access several members simultaneously.

    b)Union: 
        - In the union all members share the same location in memory.
        - The size of the union is the size of the largest member.
        - Data contained in different members can overlap.
        - In the union you can only store and access one member at a time.

*/

/*
  This example reflects on the characteristics of the union, with data overlapping.
  To solve this problem it would be necessary to declare and store one member at a time.
*/
typedef union 
{
    int   intN;
    float floatF;
} Data; 

int main() {
    Data data;

    data.intN = 5;
    data.floatF = 3.4;

    printf("%d\n", data.intN); 
    printf("%f\n", data.floatF);

    return(0);
}