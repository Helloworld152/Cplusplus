//
// Created by ruanying on 18-12-26.
//
#include <iostream>
using namespace std;
#include <bitset>
#include <fstream>
//void translate(int i){
//    if (i == 0)
//        return;
//    else{
//        translate(i / 10);
//        cout << i%10;
//        return;
//    }
//}
//int main(){
//    translate(4038);
//}

//int main(){
//    int a = 5, *p = &a;
//    double x = 1234.56;
//    char ch = 'a';
//
//    cout << "a = " << a << endl;
//    cout << "x = " << x << endl;
//}
//
//int main(){
//    char a = '1', b = '2';
//    cout << b++ << ",";
//    cout << b-a << endl;
//}


//int main(){
//    int x = 6, y = 3;
//    cout << (x++, y) << endl;
//}

//void fun(int & i){
//    try {
//        if (i == 0)
//            throw "divide by zero!";
//        else i /= i;
//    }
//    catch (const char *a){
//        cout << "In fun:" << a << endl;
//        throw ;
//    }
//    cout << "fun finished!" << endl;
//    return;
//}
//
//int main(){
//    int j = 0;
//    try {
//        fun(j);
//    }
//    catch (char const *){
//        cout << "In main." << endl;
//    }
//    cout << "finished." << endl;
//}

//class A{
//    const int a;
//public:
//    A(int num):a(num){}
//    void printNum(){
//        cout << a;
//    }
//};
//
//int main(){
//    A a(0);
//    A a1(a);
//    A a2(1);
//}

//class T{
//    void operator()(const T &t){
//        return;
//    }
//};
//int main(){
//    return 0;
//}


#include <iostream>
using namespace std;

class Rational{
    friend istream&operator>>(istream &istream1, Rational & obj);
    friend ostream&operator<<(ostream &ostream1, const Rational & obj);
    friend Rational operator+(const Rational&rational, const Rational&rational1);
    friend Rational operator*(const Rational&rational, const Rational&rational1);
    friend bool operator>(const Rational&rational, const Rational&rational1);
    friend bool operator<(const Rational&rational, const Rational&rational1);
    friend bool operator==(const Rational&rational, const Rational&rational1);

private:
    int num;
    int den;

    void ReductFraction();

public:
    Rational(int n = 0, int d = 1):num(n), den(d){ReductFraction();}
    operator double () const { return (double)num / den; }
};

Rational operator+(const Rational &rational, const Rational &rational1){
}