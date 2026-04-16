#include <iostream>
using namespace std;
struct planetve{
    char name[50];
    float ve;
}s[7];

void display(planetve s) {
    cout<<"\n";
    cout<<s.name<<endl;
    cout<<s.ve<<"km/s\n"<<endl;
}

int main(void){
//     cout<<"Parameter,Return: ";
//     cout<<add(4,2)<<endl;

//     cout<<"None,Return: ";
//     cout<<sub()<<endl;

//     cout<<"Parameter,None: ";
//     multi(4,2);

//     cout<<"None,None: ";
//     div();

    for (int i=0;i<8;i++) {
        cout<<"Planet "<<i+1<<endl;
        cin>>s[i].name;
        cin>>s[i].ve;
        display(s[i]);
    }
    // s[2] = {"Earth",29.78};
}