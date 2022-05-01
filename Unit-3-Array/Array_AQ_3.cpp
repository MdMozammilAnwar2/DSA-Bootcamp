#include<iostream>
using namespace std;
void reverseString(string& str){
    int strSize=str.length();
    for(int i=0;i<strSize/2;i++){
        swap(str[i],str[strSize-i-1]);
    }
}
int main()
{
    string str="Anwar";
    cout<<"Before reverse string ="<<str<<endl;
    reverseString(str);
    cout<<"after reverse string  ="<<str<<endl;
    return 0;
}
