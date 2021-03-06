//
// Created by 阮颖 on 2018/12/3.
//

#include "Myclass.h"


/*
 * Stock class function
 */
void Stock::acquire(const std::string &co, long n, double pr) {
    company = co;

    if (n < 0) {
        cout << "Number of shares can't be negative; " << company << " shares set to 0.\n";
        shares = 0;
    } else
        shares = n;

    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0){
        cout << "Number of shares purchased can't be negative. " << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        cout << "Number of shares sold can't be negative. " << "Transaction is aborted.\n";
    } else if (num > shares) {
        cout << "You can't sell more than you have! " << "Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    std::cout << "Company: " << company
              << "  Shares: "  << shares << std::endl
              << "  Share Price: $" << share_val
              << "  Total Worth: $" << total_val << std::endl;
}


//Rational class function


Rational Rational::operator*(const Rational &rational) {
    Rational rational1;
    rational1.num = num * rational.num;
    rational1.den = den * rational.den;
    return rational1;
}


//LongLongInt class function

LongLongInt::LongLongInt(char *a) {
    length = static_cast<int>(strlen(a));
    integer = new int[length];
    for (int i = 0; i < length; i++)
        integer[i] = a[length - 1 - i] - '0';
}

void LongLongInt::display() {
    if (integer[length - 1])
        cout << integer[length - 1];
    for (int i = length - 2; i >= 0; i--){
        cout << integer[i];
    }
    cout << endl;
}

LongLongInt LongLongInt::operator+(const LongLongInt &longLongInt) {
    LongLongInt longLongInt1(((length > longLongInt.length)?length:longLongInt.length)+1);
    int carry = 0;
    int temp = 0;
    int i;

    for (i = 0; i < length || i < longLongInt.length; i++){
        if (i >= length)
            temp = longLongInt.integer[i] + carry;
        else if (i >= longLongInt.length)
            temp = integer[i] + carry;
        else
            temp = integer[i] + longLongInt.integer[i] + carry;

        longLongInt1.integer[i] = temp % 10;
        carry = temp / 10;
    }

    if (carry != 0){
        longLongInt1.integer[i] = carry;
    }
    else
        longLongInt1.integer[i] = 0;

    return longLongInt1;
}

LongLongInt & LongLongInt::operator=(const LongLongInt &longLongInt) {

    if (this == &longLongInt) return *this;
    delete [] integer;
    length = longLongInt.length;
    integer = new int[length];
    for (int i = 0; i < length; i++)
        integer[i] = longLongInt.integer[i];
    return *this;
}

int & LongLongInt::operator[](int index) {
    if (index < 0 || index > length - 1){
        cout << "ERROR!";
    }
    return integer[index];
}
//subLongLongInt
LongLongInt LongLongInt::operator()(int start, int end) {
    if (start < 0 || end > length)
        cout << "Error!" << endl;
    LongLongInt longLongInt(end - start);
    for(int i = 0; i < end - start; i += 1)
        longLongInt.integer[i] = integer[start + i];
    return longLongInt;
}

ostream& operator<<(ostream &ostream1, const LongLongInt & longLongInt){
    for (int i = longLongInt.length - 1; i >= 0; i--)
        ostream1 << longLongInt.integer[i];
    return ostream1;
}


//String class function

String::String(const char *s) {
    if (s != NULL) {
        p = new char[strlen(s) + 1];
        strcpy(p, s);
    }
}

String::String(const String &string1) {
    p = new char[strlen(string1.p) + 1];
    strcpy(p, string1.p);
}

String String::operator=(const String &string1) {
    if (this == &string1)
        return *this;
    else {
        delete p;
        p = new char[strlen(string1.p) + 1];
        strcpy(p, string1.p);
        return *this;
    }
}

String String::operator+=(const String &string1) {
    *this = *this + string1;
    return *this;
}

bool String::operator!=(const String &string1) {
    if (strcmp(p, string1.p) != 0)
        return true;
    else
        return false;
}

bool String::operator==(const String &string1) {
    if (strcmp(p, string1.p) == true)
        return true;
    else
        return false;
}

bool String::operator>(const String &string1) {
    if (strcmp(p, string1.p) > 0)
        return true;
    else
        return false;
}

bool String::operator>=(const String &string1) {
    if (strcmp(p, string1.p) >= 0)
        return true;
    else
        return false;
}

bool String::operator<(const String &string1) {
    if (strcmp(p, string1.p) < 0)
        return true;
    else
        return false;
}

bool String::operator<=(const String &string1) {
    if (strcmp(p, string1.p) <= 0)
        return true;
    else
        return false;
}

String String::operator+(const String &string1) {
    String string2;
    int len = static_cast<int>(strlen(p) + strlen(string1.p) + 1);
    string2.p = new char[len];
    for (int i = 0; i < len - 1; i++){
        if (i < strlen(p)){
            string2.p[i] = p[i];
        }
        else if (i >= strlen(p)){
            string2.p[i] = string1.p[i - strlen(p)];
        }
    }
    return string2;
}

ostream&operator<<(ostream &ostream1, const String&string1) {
    ostream1 << string1.p;
    return ostream1;
}

istream& operator>>(istream &istream1, String &string1) {
    string1.p = new char[1024];
    istream1 >> string1.p;
    return istream1;
}

//Date class function

Date::Date() { year = 2018; month = 12; day = 5; }

Date::Date(int y, int m, int d) {
    if (d > 30){
        day = d - 30;
        m = m + 1;
    }
    if (m > 12){
        m = m - 12;
        y = y + 1;
    }
    month = m; year = y;
}


//SavingAccount class function

int SavingAccount::accountNum = 0;    //静态成员accountNum定义及初始化
double SavingAccount::rate = 0.05;

SavingAccount::SavingAccount(double Amount) {
    months = 0;
    amount = Amount;
    accountNum = accountNum + 1;
    account = accountNum;
}

void SavingAccount::computeAmount() {
    amount = amount * (1 + rate);
    months = months + 1;
}

ostream&operator<<(ostream &ostream1, const Commodity& commodity){
    ostream1 << commodity.name << " "
             << commodity.costPrice << " "
             << commodity.sellPrice << " "
             << commodity.number << endl;
    return ostream1;
}

Commodity Commodity::operator+(const Commodity &commodity) {
    Commodity commodity1;
    commodity1.name = "inAll";
    commodity1.number = number + commodity.number;
    commodity1.sellPrice = sellPrice + commodity.sellPrice;
    commodity1.costPrice = costPrice + commodity.costPrice;
    return commodity1;
}