#include<iostream>
using namespace std;
int main()
{
    short height;
    cout<<height<<endl;
    cin>>height;
    for(int i=0;i<height;i++) //Floyd Triangle Was Given to draw in first job interview of my life, i failed to draw
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //Can You Do It By Using Only One Loop.
    return 0;
}
