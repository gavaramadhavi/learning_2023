#include<stdio.h>
int main()
{
    int roll_no;
    char name[100];
    float phys,math,chem,total,percentage;
    printf("enter roll no:\n");
    scanf("%d",&roll_no);
    printf("enter name of the student:\n");
    scanf("%s",name);
    printf("enter physics marks:\n ");
    scanf("%f",&phys);
    printf("enter maths marks:\n ");
    scanf("%f",&math);
    printf("enter chemistry marks:\n ");
    scanf("%f",&chem);
    total=phys+math+chem;
    printf("%f\n",total);
    percentage=total/100;
    printf("%f\n",percentage);
}
