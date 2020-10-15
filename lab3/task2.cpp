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
cout<<real<<"+i"<<imag<<endl;
}
friend complex operator ++(complex &);
friend complex operator ++(complex &,int);
};
complex operator ++(complex &c) //prefix
{
complex temp;
temp.real=++c.real;
temp.imag=++c.imag;
return temp;
}
complex operator ++(complex &c,int) //postfix
{
complex temp;
temp.real=c.real++;
temp.imag=c.imag++;
return temp;
}



int main()
{
complex c1(1,2),c2(1.1,2.2),c3;
c2=++c1; //c2=operator++(c1);
c3=c2++; //c3=operator++(c2,int);
c1.showdata();
c2.showdata();
c3.showdata();
return 0;
}
