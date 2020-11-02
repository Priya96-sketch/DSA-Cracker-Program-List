#include <iostream>
#include<cmath>
using namespace std;

void reverseArray(int arr[],int start, int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printArr(arr,n);
    
    reverseArray(arr,0,n-1);
    {
        cout<<"Reversed array is: "<<endl;
    }
    printArr(arr,n);
   
    return 0;
   }
