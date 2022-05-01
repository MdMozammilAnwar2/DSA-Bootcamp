#include<iostream>
using namespace std;
int findElementPosition(int arr[],int size,int num){
    
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int element[]={10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    //search for the element which is available in array
    int elementSize=sizeof(element)/sizeof(element[0]);
    int find;
    cout<<"Please enter the element you want to search"<<endl;
    cin>>find;
    int result=findElementPosition(element,elementSize,find);
    if(result == -1){
        cout<<find<<" is not present int the given array"<<endl;
        
    }
    else{
        cout<<find<<" is present at index:"<<result<<endl;
    }

    return 0;
}
