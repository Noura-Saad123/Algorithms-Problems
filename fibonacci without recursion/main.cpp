#include <iostream>
using namespace std;
int fibonacci(int number){
    int n1=0,n2=1;
    if(number==0)
        return n1;
    for(int i=2;i<=number;i++){
        int n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return n2;
}
int main() {
    int n;
    cout<<"Enter number to get fibonacci  : ";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
