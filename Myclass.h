//
// Created by 阮颖 on 2018/11/29.
//

#ifndef UNTITLED_STOCK00_H
#define UNTITLED_STOCK00_H

#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;

// Stock class
class Stock{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

//Rational class
class Rational {
private:
    int num;
    int den;
public:
    Rational(int n = 0, int d = 1){};
    void printRational(){
        cout << num << "/" << den;
    }
    Rational operator+(const Rational &rational){ Rational rational1; return rational1;};

    Rational operator*(const Rational &rational);
};

//LongLongInt class
class LongLongInt{
private:
    int * integer;
    int length;
public:
    LongLongInt(char *a);

    LongLongInt(int len):length(len){ integer = new int[length]; }

    LongLongInt(const LongLongInt &longLongInt):integer(longLongInt.integer), length(longLongInt.length){}

    void display();

    void showLength(){ cout << length << endl; }

    LongLongInt operator+(const LongLongInt &longLongInt);

    LongLongInt operator=(const LongLongInt &longLongInt);

    int & operator[](int index);

    LongLongInt operator()(int start, int end);

    friend ostream& operator<<(ostream &ostream1, const LongLongInt& longLongInt);

    friend istream& operator>>(istream &istream1, LongLongInt &longLongInt){ return istream1;};
};

//Date class
class Date{

public:
    Date();
    Date(int y, int m, int d);
    Date(const Date &d):year(d.year),month(d.month),day(d.day){}
    void showDate(){ cout << "Date: " << year << "-" << month << "-" << day << endl; }

private:
    int year;
    int month;
    int day;
};

//SavingAccount class
class SavingAccount{
public:
    SavingAccount(double Amount = 0);
    void setRate(double newRate){ rate = newRate; }
    void showAmount(){ cout << "Under " << months << " months, the amount of No." << account << " is $" << amount << endl; }
    void showDate(){ date.showDate(); }
    void computeAmount();

private:
    int account;
    Date date;
    double amount;
    static double rate;
    static int accountNum;
    int months;
};

class Commodity{
private:
    string name;
    double costPrice;
    double sellPrice;
    int number;
public:
    Commodity(){};
    Commodity(string Name, double cost, double sell, int num):name(Name),costPrice(cost*num),sellPrice(sell*num),number(num){}
    friend ostream&operator<<(ostream &ostream1, const Commodity& commodity);
    Commodity operator+(const Commodity& commodity);
    friend void avg(const Commodity & g1);
};

// String class
class String{
public:
    String(){ p = NULL; };
    String(const char *s);
    String(const String & string1);
    ~String(){};

    String operator+(const String & string1);
    String operator=(const String & string1);
    String operator+=(const String & string1);
    bool operator>(const String & string1);
    bool operator>=(const String & string1);
    bool operator<(const String & string1);
    bool operator<=(const String & string1);
    bool operator==(const String & string1);
    bool operator!=(const String & string1);
    friend ostream&operator<<(ostream &ostream1, const String & string1);
    friend istream&operator>>(istream &istream1, String & string1);

private:
    char *p;
};


class DivideByZeroException {
public:
    DivideByZeroException():message("attempted to divide by zero"){}
    const char * what() const { return message; }

private:
    const char *message;
};

#endif //UNTITLED_STOCK00_H