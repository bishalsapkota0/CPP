#include<iostream>
using namespace std;
int binary_search (int arr[],int n , int key ){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else 
        e = mid-1;
    }
    return -1;
}
int linear_search(int  arr[], int n, int key ){
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==key)
         return i;
    }
    return -1;
}
void reverse_array(int arr[],int n)
{
    int s = 0;
    int e =n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s = s+1;
        e=e-1;
    }
}

void printAllpairs(int arr[],int n ){
    
}
void printArray(int *marks,int n ){
    //cout<<"In function "<<sizeof(marks)<<endl;
    //int n = sizeof(arr)/sizeof(int);
   for(int x: marks){
     cout<<x;
   }
    
}
int main()
{
    int marks[100];
    int n = sizeof(marks)/sizeof(int);
    cout<<"Enter the no of students";
    cin>>n;
    //Input
    for(int i = 0 ; i< n ; i++){
        cin>>marks[i];
         //update 
       // marks[i] = marks[i]*2;
            }
     cout<<endl;
     int b_index = binary_search(marks, n , 9);
     if(b_index != -1)
     {
        cout<<" The key is in index "<<b_index<<endl;
     }
     else
     cout<<"The index is not found"<<endl;
     cout<<"Using linear Search"<<endl;
     int index = linear_search(marks,n,9);
     if(index!=-1)
     cout<<"the key is present at index : "<<index<<endl;
     else 
     cout<< "not present"<<endl;
     cout<<"Reversed format of the array"<<endl;
     reverse_array(marks,n);
     printArray(marks,n);
    return 0;
}