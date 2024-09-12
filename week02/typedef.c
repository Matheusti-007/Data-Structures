#include <stdio.h>
#define LEN 40

// Redefining float and int types

typedef float grade;
typedef int integer;

// Redefining a struct (shortens the command in the declaration)
typedef struct
{
    char studentID[11];
    grade test1;
    grade test2;
    char cpf[12];
    char telephone[10];


}Student;

int main(){

    Student student [LEN];
    grade average [LEN];

    for(integer i = 0; i < LEN; i++){
        printf("Student ID: \n");
        scanf("%s", student[i].studentID);
        printf("CPF: \n");
        scanf("%s", student[i].cpf);
        printf("Telephone: \n");
        scanf("%s", student[i].telephone);
        printf("First test grade: \n");
        scanf("%f", &student[i].test1);
        printf("Second test grade:  \n");
        scanf("%f", &student[i].test2);
        
        printf("\n");
        average[i] = (student[i].test1 + student[i].test2) / 2.0;

    }

    for(integer i = 0; i < LEN; i++){
        printf("ID.....: %s\n", student[i].studentID);
        printf("CPF.....: %s\n", student[i].cpf);
        printf("Telephone.....: %s\n", student[i].telephone);
        printf("Student average: %.1f\n", average[i]);
        printf("\n");
        
    }

    return 0;
}

