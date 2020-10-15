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

void showdata()
{
cout<<"The sum is"<<endl;
cout<<real<<"+i"<<imag<<endl;
}
friend complex operator +(complex,complex);
};
complex operator +(complex cc1,complex cc2)
{
complex temp;
temp.real=cc1.real+cc2.real;
temp.imag=cc1.imag+cc2.imag;
return temp;
}
int main()
{
complex c1(1,2),c2(1.1,2.2),c3;
c3=c1+c2; //c3=operator+(c1,c2);
c3.showdata();
return 0;
}

