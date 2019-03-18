//
// Created by ?? on 2019/2/4.
//

//#include <iostream>
//#include <cstdio>
//#include <ctime>
//
//using namespace std;
//
//int main(){
//    time_t seconds;
//
//    seconds = time(NULL);
//    printf("? 1970-01-01 ????? = %ld\n", seconds/3600);
//
//    return 0;
//}

#include <iostream>
using namespace std;


class Shape{

protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0){
        width = a;
        height = b;
    }

    virtual int area() = 0;

    virtual int getArea() = 0;
};


class Rectangle: public Shape{
public:
    Rectangle(int a = 0, int b = 0):Shape(a, b){}

    int area(){
        cout << "Rectangle class area : " << endl;
        return (width * height / 2);
    }
};

int main(){
    cout << "ÄãºÃ" <<endl;
}
