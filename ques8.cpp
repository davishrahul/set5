#include<iostream>
using namespace std;
int main()
{
    int number,sum=0;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<number;j++)
    {
             sum+=arr[j];
    }
    int avg=sum/number;
    cout<<avg;
    return 0;
}
