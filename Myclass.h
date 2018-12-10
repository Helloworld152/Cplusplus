//
// Created by 阮颖 on 2018/11/29.
//

#ifndef UNTITLED_STOCK00_H
#define UNTITLED_STOCK00_H

#include <iostream>
#include <cstring>
#include <string>
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
    Rational(int n = 0, int d = 1);
    void printRational(){
        cout << num << "/" << den;
    }
    Rational operator+(const Rational &rational);

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

#endif //UNTITLED_STOCK00_H

