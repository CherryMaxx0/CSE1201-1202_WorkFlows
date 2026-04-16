#include <iostream>
using namespace std;

void HW(int count) {
    if (count==0) return;
    cout<<"Hello World"<<endl;
    HW(count-1);
}

int factorial(int n) {
    if(n==1) return 1;
    else return n*factorial(n-1);
}



int fibonacci(int n) {
    if(n==0 || n==1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}


int main(void) {
    for (int i=0;i<=5;i++) cout<<fibonacci(i)<<" ";
}



