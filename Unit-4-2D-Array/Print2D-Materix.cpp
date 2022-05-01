#include<iostream>
using namespace std;
void printMatrix(int arr[2][4],int row,int col){
    //print 2 D matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr1[3][3]={0};
    int arr2[2][3]={1};
    int arr3[2][4]={{1,2,3,4},{5,6,7,8}};
   // printMatrix(arr2,2,3);
    printMatrix(arr3,2,4);
    return 0;
}