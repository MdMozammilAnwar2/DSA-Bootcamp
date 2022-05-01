#include<iostream>
using namespace std;
void columnWiseSum(int arr[2][4],int row,int col){
   //first iterate the column
   for(int i=0;i<col;i++){
       //iterate the row
       int sum=0;
       for(int j=0;j<row;j++){
           sum=sum+arr[j][i];
       }
       cout<<"sum of "<<i<<"Column :" <<sum<<endl;
   }
}
void rowWiseSum(int arr[2][4],int row,int col){
   //first iterate the row
   for(int i=0;i<row;i++){
       //iterate the col
       int sum=0;
       for(int j=0;j<col;j++){
           sum=sum+arr[i][j];
       }
       cout<<"sum of "<<i<<" row :" <<sum<<endl;
   }
}

int main(){
    int arr[2][4]={{1,2,3,4},{5,6,7,8}};
    columnWiseSum(arr,2,4);
    rowWiseSum(arr,2,4);
    return 0;   
}