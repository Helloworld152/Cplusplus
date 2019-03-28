//
// Created by 阮颖 on 2019/3/28.
//

#include "balance.h"

balance::balance(const char *s) {

    fin.open(s);
    if (!fin) throw noFile();

    currentLine = 1;
    Errors = 0;
}

int balance::CheckBalance() {

    struct Symbol node;
}