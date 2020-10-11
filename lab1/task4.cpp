//program to illustrate the concepts of inline function //
# include<iostream>
using namespace std;

class line
{
    int l,b,r,ar;
    
    public:
    inline void area (int l, int b)
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
    line a, b;
    int x,y;
    for(int i=0; i<2;i++)
    {
        cout<<"enter length and breadth"<<endl;
        cin>>x>>y;
        a.area(x,y);
        a.showdata();
    }
    
    b.area(10);
    
    b.showdata();
    
}
