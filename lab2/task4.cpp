#include<iostream>
using namespace std;

class interest 
{ int p,t,r ;
 
 public:
  interest()
   {
      cout<<"i am inside default constructor"<<endl;         //default constructor//
      p=10;
      t=5;
      r=2;
    }
    
    interest (int p, int t, int r)                           // parameretized constructor//
    {
        cout<<"i am inside parameretized constructor"<<endl;
        cout<<p<<t<<r<<endl;
    }
    
    interest (interest &i)
    {
        cout<<"we are inside copy constructor"<<endl;       //copy constructor//
        int principal=i.p;
        int tim=i.t;
        int rate=i.r;
        cout<<principal<<tim<<rate<<endl;
        
    }
    
    ~interest()
    {
        cout<<"values are destroyed"<<endl;                 //distructor//
    }
    
    void showdata()
    {
    cout<<p<<t<<r<<endl;
    }
    
};

int main()
{
    interest i1,i2(65,65,98),i3(i1) ;
    i1.showdata();
    i2.showdata();
    i3.showdata();
}
