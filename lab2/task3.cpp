#include<iostream>
using namespace std;

class complex
{
  int real;
  int imag;
 
  
  public:
  
  void getdata()
  {
      cout<<"enter a and b as a + b i"<<endl;
      cin>>real>>imag;
  }
  
  void sum(complex c1 , complex c2)
  {
      int sum;
      real = c1.real+c2.real ;
      imag =c1.imag+c2.imag ;
  }
  
  void showdata()
  {
      cout<<"the output is"<<endl;
      cout<<real<<"+"<<imag<<"i";
  }
  
  
};

int main()
{
    complex c1 , c2 , c3 ;
    c1.getdata();
    c2.getdata();
    c3.sum(c1,c2);
    c3.showdata();
return 0 ;
}
