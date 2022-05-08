#include<iostream>
#include<algorithm>
using namespace std;

int main(){ 

    int arr[]={1,2,4,5,6,7,8,9};
    int n=8;
    int result1=binary_search(arr,arr+n,8);
    cout<<"Result1 :"<<result1<<endl;
    //if not present value
    int result2=binary_search(arr,arr+n,88);
    cout<<"Result2 :"<<result2<<endl;

}