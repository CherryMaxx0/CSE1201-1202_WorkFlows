#include<iostream>
using namespace std;

// //Arithmetic Operator Overloading
// class Add{
// public:
//     int a;
//     Add(){
//         cin>>a;
//     }
//     void operator+(Add yy){
//         a+=yy.a;
//     }
// };
// class Substract{
// public:
//     int a;
//     Substract(){
//         cin>>a;
//     }
//     void operator-(Substract bb){
//         a-=bb.a;
//     }
// };
// class Multiply{
// public:
//     int a;
//     Multiply(){
//         cin>>a;
//     }
//     void operator*(Multiply kk){
//         a*=kk.a;
//     }
// };
// class Divide{
// public:
//     int a;
//     Divide(){
//         cin>>a;
//     }
//     void operator/(Divide nn){
//         a/=nn.a;
//     }
// };

// int main(void){
//     Add xx,yy;
//     xx+yy; cout<<"Addition: "<<xx.a<<endl;
//     Substract aa,bb;
//     aa-bb; cout<<"Substraction: "<<aa.a<<endl;
//     Multiply hh,kk;
//     hh*kk; cout<<"Multplication: "<<hh.a<<endl;
//     Divide mm,nn;
//     mm/nn; cout<<"Division: "<<mm.a<<endl;
// }

//"=" Assignment Operator Overloading
class Assign{
public:
    int a;
    Assign(){
        cin>>a;
    }
    void operator=(Assign nn){
        a=nn.a;
    }
};
int main(void){
    Assign xx,yy;
    cout<<"XX object then: "<<xx.a<<endl;
    xx=yy;
    cout<<"XX object after assigning: "<<xx.a<<endl;
}