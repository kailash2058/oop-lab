#include<iostream>
using namespace std;
class complex
{
float real;
float imag;
public:
complex()
{
real=0;
imag=0;
}
complex(float r,float i)
{
real=r;
imag=i;
}


complex operator ++() //prefix
{
complex temp;
temp.real=++real;
temp.imag=++imag;
return temp;
}
complex operator ++(int) //postfix
{
complex temp;
temp.real=real++;
temp.imag=imag++;
return temp;
}
void showdata()
{
cout<<real<<"+i"<<imag<<endl;
}
};



int main()
{
complex c1(1,2),c2(1.1,2.2),c3;
c2=++c1; //c2=c1.operator++();
c3=c2++; //c3=c2.operator++(int);
c1.showdata();
c2.showdata();
c3.showdata();
return 0;
}
