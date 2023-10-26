#include<iostream>
using namespace std;

int main()
{
    int x,ans=0;
    cout<<"Enter the integer value: ";
    cin>>x;

    while(x!=0)
    {
        int dig=x%10;
        ans=(ans*10)+dig;
        x=x/10;
    }
    cout<<"The reverse integer is "<<ans;
    return 0;
}