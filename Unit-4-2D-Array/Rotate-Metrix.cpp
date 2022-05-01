#include<iostream>
using namespace std;
void transposeMetrix(int arr[3][4],int row, int col){
    for(int i=0;i<col;i++){
        for (int j = 0; j < row; j++)
        {   
           swap(arr[i][j],arr[j][i]);
           //cout<<arr[j][i]<<"";
        }
        cout<<endl;
        
    }
    //print
    for(int x=0;x<col;x++){
        for(int y=0;y<row;y++){
            cout<<arr[y][x]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<"--------Before transpose-----------"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    transposeMetrix(arr,3,4);
    //lets print the transposed materix
    cout<<"--------After transpose-----------"<<endl;
    
    return 0;
}
