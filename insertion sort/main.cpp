#include <iostream>
using namespace std;
void insertionSort(int array[],int size){
    for(int i=0;i<size;i++){
        int key=array[i] , j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }}
void Print(int array[],int size){
    for(int i=0;i<size;i++) {
        cout << array[i] << "  ";
        cout << endl; }}
int main() {
int array[5];
for(int i=0;i<5;i++){
    cin>>array[i];
}
insertionSort(array,5);
Print(array,5);
    return 0;
}
