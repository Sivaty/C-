//
//  main.cpp
//  04-类和对象
//
//  Created by ShuaiBin on 2018/10/25.
//  Copyright © 2018年 ShuaiBin. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

class Person {
    
public:
    int age;
    string name;
    void speak() {
        cout << "hello" << endl;
    }
};


class Student:Person {
public:
    int id;
    void test() {
        cout << "age:" << this->age << " name:" << this->name << " id:" << this->id << endl;
    }
    
    Student(int n,string str,int number) {
        age = n;
        name = str;
        id = number;
        cout << "i`m coming" << endl;
    }
    ~Student() {
        cout << "an bu xing l" << endl;
    }
    
    Student(Student &A) {
        cout << "i have coping" << endl;
    }
};

//void Student::run() {
//    cout << "i have run" << endl;
//}


class Point {
private:
    double x;
    double y;
    
public:
    Point(double a, double b){
        this->x = a;
        this->y = b;
    }
    virtual double area(){
        return 0.0;
    }
    friend double Distance(Point a, Point b);
    virtual ~Point(){
        cout << "Point bu xing l" << endl;
    }
};

double Distance(Point a, Point b) {
    double xx;
    double yy;
    xx = a.x - b.x;
    yy = a.y - b.y;
    return sqrt(pow(xx, 2) + pow(yy, 2));
}

class Circle:public Point {
    double r;
public:
    
    double area(){
        return 3.14159*r*r;
    }
    Circle(double x, double y,double R):Point(x,y){
        r = R;
    }
    ~Circle(){
        cout << "Circle bu xing l" << endl;
    }
};

class CustomView {
    const int age;
    const string name;
    static const bool isShow;
public:
    CustomView(int a , string n): age(a),name(n) {
        cout << this->age << "," << this->name << endl;
    }
};


//虚基类
class A {
    
public:
    int key;
};

class B:virtual public A {
public:
    
};

class C:virtual public A {
public:
    
};

class D:public B,public C {
public:
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Student tom(22, "tom", 1626);
    tom.test();
    cout << tom.id << endl;
    
    Student jerry(tom);
    jerry.test();
    
//    Point A(1.0, 3.5);
//    Point B(2.3, 5.5);
//    double distance = Distance(A, B);
//    cout << "distance = " << distance << endl;
//
//    CustomView view(233, "just a view");
//
//    D d = D();
//    d.key = 2;
    
//    Point aPoint(10,10);
//    Circle aCircle(10, 10, 20);
//
//    cout << aPoint.area() << endl;
//    cout << aCircle.area() << endl;
    
    Point* P;
    P = new Circle(10,10,20);
    delete P;
//
//    Point &Pp = aCircle;
//    cout << Pp.area() << endl;
    
    
    
    return 0;
}
