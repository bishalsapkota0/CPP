#include<iostream>
using namespace std;
void selection(int arr[],int n ){
    for(int pos = 0; pos<n-1 ; pos++){
        int current = pos;
        int min_postion = pos;
        for(int j = pos; j<n; j++){
              if( arr[j]< arr[min_postion])
              min_postion =j;
        }
        swap(arr[min_postion], arr[pos]);
    }
    for(int i =0; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{  int n =5;
    int arr[5]= {3,4,2,1,5};
    selection(arr, n);
    return 0;
}