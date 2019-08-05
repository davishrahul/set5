#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }      
    int min=arr[0];
    for(int j=0;j<number;j++)
    {
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }
    cout<<min<<" ";
     int max=arr[0];
     for(int j=0;j<number;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    cout<<max;
    return 0;
}
