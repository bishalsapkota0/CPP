#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //creating vector
      //vector<int> arr={1,2,3,4,5};

    //Fill constructor
     vector<int> arr(10,7);
     //ten element with all of 7


    //deleting last element
    arr.pop_back();
    
    
    //adding element at the end
    arr.push_back(12);


    //size of the vector(no. of element)
    cout<<arr.size()<<endl;


    //capacity (actual number of memory allocated)
    cout<<arr.capacity()<<endl;

    //Printing all eelement
    for(int x : arr){
        cout<<x<<" ,";
    }
    cout<<endl;

    //printing ith element
    cout<<arr[3]<<endl;

    
    return 0;
}