#include<iostream>
#include<string>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a=b;
    b=temp;
}
// int fib(int n) {
//     if (n==0 || n==1) return n;
//     return fib(n-1)+fib(n-2);
// }
// void fibSerialP(int n){
//     for (int i=0;i<n;i++) cout<<fib(i)<<" ";
// }

int main(void) {
    // fibSerialP(5);
    int *a = new int(2);
      
}

// struct student{
//     string name;
// };
// void updateStd(student s[]){
//     s[1].name="cherry";
//     s[0].name="cat";
// }

// int main(void){
//     student s[10];
//     updateStd(s);
//     cout<<s[0].name;
//     cout<<s[1].name;
// }
// struct Box {
// public:
//     float height=5.2;
//     float width;
//     float depth;
//     Box(){
//         cout<<"run"<<endl;
//     }
//     Box(int h, int w, int d, int v) : Box() {
//         cout<<"run2"<<endl;
//     }
//     Box(int h, int w, int d) : Box(2,3,4,6){
//         cout<<"Constructor Running"<<endl;

//     }

// };

// int main(void) {
    
//    Box box1(1,2,3);
// }
