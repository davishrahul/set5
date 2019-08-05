#include<iostream>
using namespace std;
int main()
{
    int number,count=0,num;
    cin>>number;
    while(number>0)
    {
        num=number%10;
        count++;
        number=number/10;
    }
    cout<<count;
    return 0;
}
