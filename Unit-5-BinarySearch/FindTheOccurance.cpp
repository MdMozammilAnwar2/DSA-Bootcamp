#include<iostream>
using namespace std;
int firstOccurrence(int arr[], int size, int target){
    //[1,2,5,5,5,5,8,9]
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2; // 0+7/2
    int ans=-1;
    while(start<=end){
       int midElement=arr[mid];
       if(target == midElement){
           ans=mid;
           end=mid-1;
       }
      if(target<midElement){
          end=mid-1;
      }
      if(target > midElement){
          start=mid+1;
      }
      mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurrence(int arr[], int size, int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
       int midElement=arr[mid];
       if(target == midElement){
           ans=mid;
           start=mid+1;
       }
        if(target<midElement){
          end=mid-1;
      }
      if(target>midElement){
          start=mid+1;
      }
     
      mid=start+(end-start)/2;;
    }
    return ans;
}
int totalNumberOfOccurrence(int arr[], int size, int target){
    return lastOccurrence(arr, size, target)-firstOccurrence(arr, size, target)+1;
}
int main(){  
    int arr[]={1,2,5,5,5,5,8,9};
    int res1=firstOccurrence(arr,8,5);
    cout<<"First Occurrence :"<<res1<<endl;
    int res2=lastOccurrence(arr,8,5);
    cout<<"Last Occurrence :  "<<res2<<endl;
    cout<<"Total Number of occurrence = "<<totalNumberOfOccurrence(arr,8,5);
}