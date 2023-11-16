// Online C++ compiler to run C++ program online
#include <iostream>
#include<limits.h>
using namespace std;

void findSum(int arr[][4], int row, int col){
    int sum = 0;
    
    for(int i=0;i<col;i++){
       for(int j=0;j<row;j++){
           sum = sum + arr[j][i];
           }
           cout<<"Sum of row "<<i<<" is:"<<sum<<endl;
       }
}
int main() {
   int arr[3][4];
   int row = 3;
   int col = 4;
   cout<<"Taking input for array\n";
   
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           cout<<"Enter the element for("<<i<<","<<j<<"):";
           cin>>arr[i][j];
       }
       cout<<endl;
   }
   
   findSum(arr,row,col);

    return 0;
}
