//
//  main.cpp
//  01-命名空间
//
//  Created by ShuaiBin on 2018/10/24.
//  Copyright © 2018年 ShuaiBin. All rights reserved.
//

#include <iostream>

//方式一

//using namespace std;
//int main(int argc, const char * argv[]) {
//
//    int a = 10;
//
//    // insert code here...
//    cout << "input a number:" << endl;
//    cin >> a;
//    cout << "this number is " << a << endl;
//
//    return 0;
//}


//方式二

//int main() {
//    std::cout << "my name is tom" << std::endl;
//}


//方式三

using std::cout;
using std::endl;
int main() {
    cout << "hello" << endl;
}
