//Question- Reverse the array
#include<iostream>
using namespace std;
void reverseIntegerArray(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
        if(i==j ){

        }
    }
} 
void reverseString(string str,int size){
    int i=0;
    int j=size-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}
int main()
{
    /* code */
    int array[]={1,2,3,4,5,6};
    int arraySize=sizeof(array)/sizeof(array[0]);
    cout<<"Array before reverse"<<endl;
    for(int i=0;i<arraySize;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    reverseIntegerArray(array,arraySize);
    //print 
    cout<<"Array after reverse"<<endl;
    for(int i=0;i<arraySize;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    string name="Mozammil";
    //reverse(name.begin,name.end);
    
    // cout<<"Before reverse name = "<<name<<endl;
    // int stringSize=sizeof(name)/sizeof(name[0]);
    // reverseString(name,stringSize);
    // cout<<"After reverse name"<<name<<endl;
    
    cout<<endl;
    return 0;
}
