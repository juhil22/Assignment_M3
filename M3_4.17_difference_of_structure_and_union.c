//WAP to show difference between Structure and Union.

#include <stdio.h>
struct s_info_struct {
    int roll_no, age, per;
    char name[25], grade;
} su;

union s_info_union {
    int roll_no;
    float percentage;
    char grade;
    char name[25];
} uu;

main() {
    printf("\n\n\t Enter Student Details Using Structure:\n");
    printf("\n\n\t Name: ");
    scanf("%s",&su.name);
    printf("\n\n\t Roll No: ");
    scanf("%d",&su.roll_no);
    printf("\n\n\t Age: ");
    scanf("%d",&su.age);
    printf("\n\n\t Percentage: ");
    scanf("%d",&su.per);
    printf("\n\n\t Grade: ");
    scanf(" %c",&su.grade);

    printf("\n\n\t Enter Student Details Using Union:\n");
    printf("\n\n\t Name: ");
    scanf("%s",&uu.name);
    printf("\n\n\t Roll No: ");
    scanf("%d",&uu.roll_no);
    printf("\n\n\t Percentage: ");
    scanf("%f",&uu.percentage); 
    printf("\n\n\t Grade: ");
    scanf(" %c",&uu.grade);

    printf("\n\n\t Student Details Using Structure:\n");
    printf("\n\t Name: %s\n", su.name);
    printf("\n\t Roll No: %d\n", su.roll_no);
    printf("\n\t Age: %d\n", su.age);
    printf("\n\t Percentage: %d\n", su.per);
    printf("\n\t Grade: %c\n", su.grade);

    printf("\n\n\t Student Details Using Union:\n");
    printf("\n\t Name: %s\n", uu.name);
    printf("\n\t Roll No: %d\n", uu.roll_no);
    printf("\n\t Percentage: %.2f\n", uu.percentage); 
    printf("\n\t Grade: %c\n", uu.grade);

}

