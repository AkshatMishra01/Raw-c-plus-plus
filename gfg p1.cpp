#include<iostream>
using namespace std;
int Prob_search(int array[],int size,int k)
{
    int array2[size];
    int repeat = size/k;
    for(int i; i<size; i++)
    {
        array[i] = array2[i];
        array2[i] = 
    }
}
int main()
{
    int array[100];
    int size;
    cin >> size;
    for(int i; i<size; i++)
    {
        cin>>array[i];
    }
    int k = 4;
    cout<<"Elements that repeat more than n/k times are:"<<Prob_search(array,size,k);
}
