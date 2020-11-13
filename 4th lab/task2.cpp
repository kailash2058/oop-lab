#include<iostream>
using namespace std;
class Distance
{
private:
float feet;
float inch;
public:
Distance()
{
feet = 0.00;
inch = 0.00;
}
void getdata()
{
cout<<"Enter feet:";
cin>>feet;
cout<<"Enter inches";
cin>>inch;
}


operator float()
{
float m = inch/12;
m = m + feet;
return (m/3.2808);
}
};

int main()
{
Distance d;
float meters;
d.getdata();
meters = d; //d.operator float();
cout<<"The distance in meters is:"<<meters<<"Meters";
return 0;
}
