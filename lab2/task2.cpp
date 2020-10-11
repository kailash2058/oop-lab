#include<iostream>
using namespace std;

class details
{
  char name[50] ;
  int roll;
  int marks;
  char add[50] ;
  
  public:
  
  void getdata()
  {
      cout<<"enter name ,roll,marks,address"<<endl;
      cin>>name>>roll>>marks>>add;
  }
  
  void showdata()
  {
      cout<<"the output is"<<endl;
      cout<<name<<roll<<marks<<add<<endl;
  }
  
  
};

int main()
{
    details d[5];
    for (int i=0 ; i<2 ;i++)
    {
    d[i].getdata();
    }
    for (int i=0 ; i<2 ;i++)
    {
    d[i].showdata();
    }
return 0 ;
}
