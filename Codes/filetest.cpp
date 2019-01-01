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


//#include <iostream>
//using namespace std;
//
//class Rational{
//    friend istream&operator>>(istream &istream1, Rational & obj);
//    friend ostream&operator<<(ostream &ostream1, const Rational & obj);
//    friend Rational operator+(const Rational&rational, const Rational&rational1);
//    friend Rational operator*(const Rational&rational, const Rational&rational1);
//    friend bool operator>(const Rational&rational, const Rational&rational1);
//    friend bool operator<(const Rational&rational, const Rational&rational1);
//    friend bool operator==(const Rational&rational, const Rational&rational1);
//
//private:
//    int num;
//    int den;
//
//    void ReductFraction();
//
//public:
//    Rational(int n = 0, int d = 1):num(n), den(d){ReductFraction();}
//    operator double () const { return (double)num / den; }
//};
//
//Rational operator+(const Rational &rational, const Rational &rational1){
//}


//template <class T>
//class Array{
//    int low;
//    int high;
//    T *storage;
//
//public:
//    Array(int lh = 0, int rh = 0):low(lh), high(rh){
//        storage = new T [high - low + 1];
//    }
//
//    Array(const Array & array);
//
//    Array& operator=(const Array & array);
//
//    T&operator[](int index);
//
//    ~Array(){
//        if (storage)
//            delete[]storage;
//    }
//};
//
//template <class T>
//Array<T>::Array(const Array<T> &array) {
//
//}
//template <class T>
//Array<T>& Array<T>::operator=(const Array &array) {}


//template <class T> class B;
//template <class T> void f(const T &);
//template <class type>
//class A{
//    friend class B <type>;
//    friend void f(const type &);
//};


//template <class T> class Array;
//template <class T> ostream& operator<<(ostream& ostream1, const Array<T>& array);
//
//template <class T>
//class Array{
//    friend ostream&operator<<(ostream& ostream1, const Array<T> &array);
//};

void f(int a, int b = 3, char c = '*'){
    return;
    return;
}
int main(){
    f(6,'#');
}