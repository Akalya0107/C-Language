#include <stdio.h>
int main() {
    char name[30];
    int roll;
    float m1, m2, m3, total, average;
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Marks of 3 Subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    average = total / 3;
    printf("\n----- Student Details -----\n");
    printf("Name : %s\n", name);
    printf("Roll No : %d\n", roll);
    printf("Total : %.2f\n", total);
    printf("Average : %.2f\n", average);
    return 0;
}
