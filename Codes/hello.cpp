//// Created by ruanying on 18-12-26.////#include <iostream>//#include <bitset>//using namespace std;////void translate(int i){//    if (i == 0)//        return;//    else{//        translate(i / 10);//        cout << i%10;//        return;//    }//}//int main(){//    translate(4038);//}//#include <iostream>//using namespace std;////int main(){//    int a = 5, *p = &a;//    double x = 1234.56;//    char ch = 'a';////    cout << "a = " << a << endl;//    cout << "x = " << x << endl;////}#include <iostream>#include <fstream>using namespace std;int main(){    ofstream out("file");    ifstream in;    int i;    if (!out){        cerr << "create file error\n";        return 1;    }    for (i = 1; i <= 10; i++)        cout << i << " ";    out.close();    in.open("file");    if (!in){        cerr << "open file error\n";        return 1;    }    while (in >> i)        cout << i << " ";    in.close();    return 0;}