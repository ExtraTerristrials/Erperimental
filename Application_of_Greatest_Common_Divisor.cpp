#include<iostream>
using namespace std;
long int Euclid(long int dividend,long int divisor){
    if(dividend%divisor!=0)
    {
        Euclid(divisor,dividend%divisor!);
    }
    else
    {
        return divisor;
    }
}
int main()
{
    long int a,b;
    cout<<"Enter Upper Part of The Fraction=";cin>>a;
    cout<<"Enter Lower Part of The Fraction=";cin>>b;
    if(a<b)
    {
        swap(a,b);
    }
    long int d=Euclid(a,b);

    cout<<a/d<<"/"<<b/d<<endl;
    cout<<"The Aspect Ratio "<<a/d<<" : "<<b/d<<endl;

    return 0;
}
