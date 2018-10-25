//
//  main.cpp
//  03-函数
//
//  Created by ShuaiBin on 2018/10/25.
//  Copyright © 2018年 ShuaiBin. All rights reserved.
//

#include <iostream>
using namespace std;


int add(int a = 5,int b = 10) {
    return a+b;
}

//内联函数，调用函数的地方，在编译的时候会替换掉
inline void speak() {
    cout << "hi" << endl;
}

template <class T1 ,class T2>
T1 add1(T1 x, T2 y) {
    return x+y;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << add(10,20) << endl;
    cout << add() << endl;
    cout << add1(3.3, 2.2) << endl;
    speak();
    return 0;
}



