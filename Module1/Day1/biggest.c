#include<stdio.h>  
int big(int, int);
int main()  
{  
    int a, b,z;  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &a, &b);
    z=big(a,b);
    printf("Biggest of %d and %d is %d\n", a, b, z);  
    return 0;  
}  
  
//function definition  
int big(int x, int y)  
{  
    return( x>y?x:y );  
}  

