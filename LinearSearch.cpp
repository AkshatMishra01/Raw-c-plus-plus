#include<iostream>
using namespace std;
int linear_search(int arr[],int size,int key)
{
    for(int i =0; i<size;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int size;
    cin>>size;
    for(int i =0;i<size ;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<"Elemnt present at index: "<<linear_search(arr,size,key);
    return 0;
}
