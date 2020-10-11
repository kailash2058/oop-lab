// program to show the concept of function overloading//
# include<iostream>
using namespace std;

class loading
{
    int l,b,r,ar;
    
    public:
    void area (int l, int b)
    {
        ar=l*b;
        
    }
    void area (int r)
    {
        ar=3.14*r*r;
    }
    void showdata()
    {
        cout<<"output is"<< ar<<endl;
    }
};

int main()
{
    loading a, b;
    a.area(5,10);
    b.area(10);
    a.showdata();
    b.showdata();
    
}
