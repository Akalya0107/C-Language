#include <stdio.h>

int main() {
    char name[30], dept[20], college[50];
    int age, roll;
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Department: ");
    scanf("%s", dept);
    printf("Enter College Name: ");
    scanf("%s", college);
    printf("\n=====================================\n");
    printf("          STUDENT PROFILE\n");
    printf("=====================================\n");
    printf("Name        : %s\n", name);
    printf("Age         : %d\n", age);
    printf("Roll Number : %d\n", roll);
    printf("Department  : %s\n", dept);
    printf("College     : %s\n", college);
    printf("=====================================\n");
    return 0;
}
