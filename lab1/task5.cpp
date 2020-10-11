//PROGRAM TO ILLUSTRATE THE CONCEPT OF DEFAULT ARGUMENT//
# include<iostream>
using namespace std;

class interest
{
    int p,t,r,i;
    
    public:
    void calculate (int p=500, int t=1 , int r=2)
    {
        i=p*t*r/100;
        
    }
    
    void showdata()
    {
        cout<<"output is"<< i<<endl;
    }
};

int main()
{
    interest a;
    int p,t,r;
    cout<<"enter principle time and rate"<<endl;
    cin>>p>>t>>r;
    a.calculate(p,t,20);
    a.showdata();
    return 0;
}
