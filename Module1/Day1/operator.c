#include<stdio.h>
int main()
{
        float a,b;
        char ch;
        printf("enter a and b : ");
        scanf("%f%f\n",&a,&b);
        printf("enter any operator:");
        scanf("%c",&ch);
        if (ch == '+')
        {
            // For Addition
            printf("%f + %f = %f\n",
                   a, b, a + b);
        }
        else if (ch == '-')
        {
            // For Subtraction
            printf("%f - %f = %f\n",
                   a, b, a - b);
        }
        else if (ch == '*')
        {
            // For Multiplication
            printf("%f * %f = %f\n",
                   a, b, a * b);
        }
        else if (ch == '/')
        {
            // For Division
            printf("%f / %f = %f\n",
                   a, b, a / b);
        }
        else
        {
                printf("Error! please write a valid operator\n");
        }

          printf("\n");
}
                                       
                                
