#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
       int midElement=arr[mid];
       if(target == midElement){
           return mid;
       }
      if(target<midElement){
          end=mid-1;
      }
      else{
          start=mid+1;
      }
      mid=(start+end)/2;
    }
    return -1;

}
int main(){ 

    int arr[]={1,3,5,8,34,78,90};
    int result=binarySearch(arr,7,1);
    if(result == -1){
        cout<<"Sorry, given element is not there int the array"<<endl;
    }
    else{
        cout<<"Element is present at = "<< result<<endl;
    }
}