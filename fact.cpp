#include<iostream>
using namespace std;
long long fact(long n)
{
    if(n==1)
    {
        return 1;
    }
    else
    return n*fact(n-1);
}
int main()
{
    int i,j,count=0,temp,sum=0;
    long long number;
    cin>>number;
    cout<<fact(number);

    return 0;
}