#include<iostream>
using namespace std;
Binary_search(int arr,int l,int r,int key){
if (r>=l)
{
    int mid = l + r-l/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key)
    {
        return Binary_search(arr,l,mid -1, key)
    }
    return Binary_search(arr,l,mid+1,key);
}
return -1;

}
int main()
{
    int ar1[100],size,key;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>size;
    cout<<"ENTER THE ARRAY ELEMANTS:";
    for(int i; i<size; i++)
    {
        cin >> arr[i];
    }
    cout<<"ENTER THE NUMBER TO BE SEARCHED";
    cin>>key;
    cout<<"Element is at index:"<<Binary_search(arr,0,size-1,key);
    return 0;
}