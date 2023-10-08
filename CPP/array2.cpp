
#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
void return_pair(int arr[], int n )
{
    for(int i = 0 ; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
          std::  cout<<arr[i]<<" "<<arr[j]<<std::endl;
        }
    }
    std::cout<<std::endl;
    
}
void print_pairs(int arr[],int n){
    int max_sum =0;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            //printing pairs means min and maxtop member of an subarray
           //std:: cout<<"("<<i<<" ,"<<j<<")"<<std::endl;
           int subArraySum = 0;
              for(int k = i; k<=j ; k++)
                  {
                     subArraySum += arr[k];
                     
                      max_sum = std:: max(subArraySum,max_sum);
                       std::cout<<arr[k]<<", ";
                  }
             std::cout<<std::endl;
    }
    }
    std::cout<<max_sum<<std::endl;
    std::cout<<std::endl;
}

int main() {
    int arr[5]={1,2,3,4,5};
    int n  = sizeof(arr)/sizeof(int);
    return_pair(arr,n);
    print_pairs(arr,n);
    
    return 0;
}