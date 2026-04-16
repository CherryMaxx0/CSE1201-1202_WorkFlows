#include <iostream>
using namespace std;

// class Box {
// private:
//     float height;
//     float width;
//     float depth;
// public:
//     Box(float h, float w, float d) {    //Constructor 
//         cout<<"This is a default constructor"<<endl;
//         height=h;
//         width=w;
//         depth=d;

//         cout<<height<<endl;
//         cout<<width<<endl;
//         cout<<depth<<endl;
//         cout<<calcVolume()<<endl;  //Order of function position doesnt matter or not need be declare before Box() constructor
//     }
//     float calcVolume(){
//         return height*width*depth;
//     }
// };

// // class Box {
// // public:
// //     float height;
// //     float width;
// //     float depth;.

// //     float calcVolume(){
// //         return height*width*depth;
// //     }
// // };


// int main(void) {
//     Box myBox={5.0,4.0,3.0};
//     // Box myBox;
//     // myBox.setValue(5.0,4.0,3.0);
//     // cout<<myBox.calcVolume()<<endl;
// }


class Box {
private:
    int pass;
public:
    void setPass (int p) {
        pass=p;
    }
    int getPass() {
        return pass;
    }
    
};
int main(void) {
    int num=1234;
    Box myBox;
    myBox.setPass(num);
    cout<<myBox.getPass()<<endl;
}