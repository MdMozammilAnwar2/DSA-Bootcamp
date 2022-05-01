#include<iostream>
using namespace std;
bool searchElement(int arr[3][4],int row,int col,int target){
  //find
  for(int i=0;i<row;i++){
      for (int j=0;j<col;j++){
          if(arr[i][j]==target){
              return true;
          }
      }
  }
  return false;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int result=searchElement(arr,3,4,9);
    //cout<<"Result"<<result;
    if(result == 1){
        cout<<"Yah, Element found";
    }
    else{
        cout<<"Opp, Sorry element is not there";
    }
    return 0;
}