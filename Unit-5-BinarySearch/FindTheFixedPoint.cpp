#include<iostream>
using namespace std;
int findTheFixedPoint(int arr[],int size ){
    int start=0;
    int end=size-1;
    int mid=start+ (end-start)/2;
    while(start<=end){
        if(mid == arr[mid]){
            return mid;
        }
        if(mid>arr[mid]){
            start=mid+1;
        }
        if(mid<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    //int arr[]={-10,-5,1,13,6};
    int arr[]={-10,-5,1,3,6};
    int size=5;
    int result=findTheFixedPoint(arr,size);
    cout<<"Result : "<<result<<endl;
}
