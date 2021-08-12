#include <iostream>
using namespace std;
int main() {
    int m1[10][10],m2[10][10],result[10][10];
    int row,column;
    cout<<"Enter row : ";cin>>row;
    cout<<"Enter column : ";cin>>column;
    cout<<"Enter element of matrix 1 : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>m1[i][j];}
    }
    cout<<"Enter element of matrix 2 : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>m2[i][j];}
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
             result[i][j]=0;
        for(int k=0;k<column;k++){
            result[i][j] += m1[i][j]*m2[i][j];}}}
    cout<<"Multiplication of matrices is : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<result[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
