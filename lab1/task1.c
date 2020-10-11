#include<stdio.h>
struct complex 
{
    float real;
    float imag;
};

int main()
{
    struct complex cnum1 , cnum2 , sum ;
    printf("a+ i b");
    scanf ("%f %f , &cnum1.real , &cnum1.imag");
    printf("x+ i b");
    scanf ("%f %f , &cnum2.real , &cnum2.imag");
    sum.real=cnum1.real + cnum2.real ;
    sum.imag=cnum1.imag=cnum2.imag;
    printf("%f %f" , sum.real , sum.imag);
    return 0;
    
    
}
