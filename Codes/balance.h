//
// Created by 阮颖 on 2019/3/28.
//

#ifndef MYCPPNOTE_BALANCE_H
#define MYCPPNOTE_BALANCE_H

#include <iostream>
#include <fstream>
using namespace std;

class balance {

private:
    ifstream fin;
    int currentLine;
    int Errors;

    struct Symbol{
        char Token;
        int TheLine;
    };

    enum CommentType{ SlashSlash, SlashStar };//C++注释与C注释

    bool CheckMatch(char Symb1, char Symb2, int Line1, int Line2);
    char GetNextSymbol();
    void PutBackChar(char ch);
    void SkipComment(enum CommentType type);
    void SkipQuote(char type);
    char NextChar();

public:
    balance(const char * s);
    int CheckBalance();//检查fin中的括号是否匹配
};


#endif //MYCPPNOTE_BALANCE_H
