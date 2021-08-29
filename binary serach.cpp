#include<iostream>
using namespace std;
int binary_Search(int arr[],int low,int high,int key)
{
    if (high >= low)
    {
        int mid = low + (high-low)/2;
        
        if(arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            return binary_Search(arr,low,mid-1,key);
        }
        return binary_Search(arr,mid+1,high,key);
    }
    return -1;
}
int main()
{
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int index = binary_Search(arr,0,size-1,key);
    cout<<"Element is present at index:"<<index<<endl;
}
