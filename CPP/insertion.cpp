#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i = 1; i< n ; i++)
    {
        int current = arr[i];
        int previous = i - 1;
        while(previous >= 0 && arr[previous]>current){
            arr[previous+1]= arr[previous];
            previous -=1;
        }
        arr[previous+1]= current;
    }
    for(int i= 0; i<n; i++)

    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={5,3,2,1,4};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);
    return 0;
}