#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//#include <iostream>
//using namespace std;
//
//int main() {
//    cout << "��ã����磡" << endl;
//    return 0;
//}


////�����ĸA-Z������

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    for (char ch = 'A'; ch <= 'Z'; ++ch){
//        cout << ch << '(' << int(ch) << ')' << " ";
//    }
//    return 0;
//}


////����1-100֮���������

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    int sum = 2;
//    cout << 2 << " ";
//
//    for (int num = 3; num <= 100; num += 2){
//        int n = 0;
//        for (int i = 2; i <= sqrt(num); i++){
//            if (num % i == 0)
//                n++;
//        }
//        if (n == 0){
//            cout << num << " ";
//            sum += num;
//        }
//    }
//    cout << "\n" << sum;
//}


////�������������������

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    int num, i;
//    cin >> num;
//
//    for (i = num / 2; num % i != 0; i--);
//    cout << i;
//}


////��ӡ9x9�˷���

//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main(){
//    for(int i = 1; i <= 9; i++){
//        for(int j = 1; j <= i; j++)
//            printf("%dx%d=%2d ", j, i, j*i);
//        cout << endl;
//    }
//}


////ͳ�ƿ��Գɼ��е���߷֣���ͷֺ�ƽ����

//#include <iostream>
//using namespace std;
//
//int main(){
//    int value, total, max, min, noOfInput;
//
//    total = 0;
//    max = 0;
//    min = 100;
//    noOfInput = 0;
//
//    cout << "�������1λѧ���ĳɼ���";
//    cin >> value;
//    while (value != -1){
//        noOfInput++;
//        total += value;
//        if (value > max) max = value;
//        if (value < min) min = value;
//        cout << "�������" << noOfInput + 1 << "���˵ĳɼ���";
//        cin >> value;
//    }
//
//    cout << "\n��߷֣�" << max << endl;
//    cout << "\n��ͷ֣�" << min << endl;
//    cout << "\nƽ���֣�" << total / noOfInput << endl;
//}


////ͳ�ƾ����и����ַ����ֵĴ���

//#include <iostream>
//using namespace std;
//
//int main(){
//    char ch;
//    int numVowel = 0, numCons = 0, numSpace = 0, numDigit = 0, numOther = 0;
//
//    cout << "��������ӣ�";
//    cin.get(ch);
//    while (ch != '.'){
//        if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';//��д��ĸתΪСд��ĸ
//        if (ch >= 'a' && ch <= 'z')
//            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//                numVowel++;
//            else numCons++;
//        else if (ch == ' ') numSpace++;
//        else if (ch >= '0' && ch <= '9') numDigit++;
//        else  numOther++;
//        cin.get(ch);
//    }
//    cout << numVowel << " " << numCons << " " << numSpace << " " << numDigit << " " << numOther;
//}


////�ڶ�����ҵ ��һ��
//#include <iostream>
//using namespace std;
//
//int main(){
//    char ch;
//    int judge;
//    cin >> ch;
//    if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
//    if (ch >= 'a' && ch <= 'z')
//        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//            judge = 1;
//        else
//            judge = 0;
//    else
//        judge = -1;
//    cout << judge;
//}


////�ڶ�����ҵ �ڶ���
//#include <iostream>
//using namespace std;
//
//bool JudgeYear(int year){
//    bool judge = true;
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        judge = false;
//    return judge;
//}
//
//int main(){
//    int month, year, days;
//    cin >> year >> month;
//    if (month == 2){
//        if (JudgeYear(year) == true)
//            days = 28;
//        else{
//            days = 29;
//        }
//    }
//    else if (month == 4 || month == 6 || month == 9 || month == 11)
//        days = 30;
//    else {
//        days = 31;
//    }
//    cout << days;
//}


////�ڶ�����ҵ ������
//#include <iostream>
//using namespace std;
//
//int main(){
//    int number, reminder, sum = 0;
//    cin >> number;
//    if (number < 0)
//        number = -number;
//    while (number){
//        reminder = number % 10;
//        sum = sum + reminder;
//        number = number / 10;
//    }
//    cout << sum;
//}


////2018-9-29 ������ϰ1
//#include <iostream>
//using namespace std;
//
//int main(){
//    int n;
//    cin >> n;
//    if (n < 0)
//        cout << "n < 0" << endl;
//    else if (n >= 0 && n <= 100)
//        cout << "0<=n<=100" << endl;
//    else
//        cout << "n > 100" << endl;
//}


////2018-9-29 ������ϰ2
//#include <iostream>
//using namespace std;
//
//int main(){
//    char grade;
//    cin >> grade;
//    if (grade >= 'a' && grade <= 'z') grade = grade - 'a' + 'A';
//    switch (grade){
//        case 'A':cout << "excellent" << endl;break;
//        case 'B':cout << "good" << endl;break;
//        case 'C':cout << "passing" << endl;break;
//        case 'D':
//        case 'F':cout << "not good" << endl;break;
//        default:cout << "not a possible grade" << endl;
//    }
//}


////���ֲ���
//#include <iostream>
//using namespace std;
//
//int main(){
//    int low, high, mid, x;
//    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//
//    low = 0;
//    high = 9;
//    cin >> x;
//
//    while (low <= high){
//        mid = (low + high) / 2;
//        if (x == array[mid])
//            break;
//        if (x <= array[mid])
//            high = mid - 1;
//        else
//            low = mid + 1;
//    }
//
//    if (low > high)
//        cout << "False" << endl;
//    else
//        cout << x << " is in " << mid << endl;
//}


//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    int i, number;
//    int num[10];
//    int judge = 1;
//    cin >> number;
//    for(i = 0; number != 0; i++){
//        num[i] = number % 10;
//        number = number / 10;
//    }
//    for(int j = 0; j <= (i-1)/2; j++){
//        if (num[j] != num[i - 1 - j]){
//            judge = 0;
//            break;
//        }
//    }
//    cout << judge;
//}

//#include <iostream>
//#include <sstream>
//using namespace std;
//
//int main(){
//    string str;
//    int sum1 = 1, sum2 = 1, sum3 = 1, sum4 = 1, sum5 = 1;
//    for (int i = 1; i <= 25; i = i + 6){
//        sum1 = sum1 * i;
//        sum2 = sum2 * (i + 1);
//        sum3 = sum3 * (i + 2);
//        sum4 = sum4 * (i + 3);
//        sum5 = sum5 * (i + 4);
//    }
//    cout << sum1 <<endl;
//    cout << sum2 <<endl;
//    cout << sum3 <<endl;
//    cout << sum4 <<endl;
//    cout << sum5 <<endl;
//
//    stringstream ss;
//    ss << (sum1 * sum2* sum3 * sum4 * sum5);
//    ss >> str;
//    cout << str;
//}
//


//#include <iostream>
//using namespace std;
//
//int main(){
//    int n, value, i;
//    cin >> n >> value;
//    for(i = 0; value != 2*i + 5*(n-i); i++);
//    cout << i;
//}


////��������ҵ�ڶ���
//#include <iostream>
//using namespace std;
//
//int main(){
//    int number[4], num, min = 999;
//    cin >> number[0] >> number[1] >> number[2] >> number[3];
//    for(int j = 0; j <= 3; j++){
//        if(number[j] == 0) continue;
//        for(int k = 0; k <= 3; k++){
//            if(k == j) continue;
//            for(int l = 0; l <= 3; l++){
//                if(l == j || l == k) continue;
//                num = number[j]*100 + number[k]*10 + number[l];
//                if(num < min) min = num;
//            }
//        }
//    }
//    cout << min;
//}


////�����������
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//#include <cstdio>
//using namespace std;
//const int M = 5;
//const int N = 6;
//const int P = 7;
//
//int main(){
//    srand((unsigned)time(0));
//    int Matrice_A[M][N];
//    int Matrice_B[N][P];
//    int Matrice_C[M][P];
//
//    for (int i = 0; i < M; ++i)
//        for (int j = 0; j < N; j++)
//            Matrice_A[i][j] = rand()%10;
//    for (int i = 0; i < N; ++i)
//        for (int j = 0; j < P; j++)
//            Matrice_B[i][j] = rand()%10;
//
//    for (int i = 0; i < M; i++){
//        cout << "|";
//        for (int j = 0; j < P; j++){
//            Matrice_C[i][j] = 0;
//            for (int num = 0; num < N; num++){
//                Matrice_C[i][j] += Matrice_A[i][num] * Matrice_B[num][j];
//            }
//            printf("%4d", Matrice_C[i][j]);
//        }
//        cout << "|" << endl;
//    }
//}


////ͳ���ַ����еĸ�����ĸ�ĸ���
//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//using namespace std;
//
//int main(){
//    char num[26] = {0};
//    char ch;
//    cin.get(ch);
//    while (ch != '\r' && ch != '\n'){
//        if (ch >= 'A' && ch <= 'Z')
//            ch = ch - 'A' + 'a';
//        for (int i = 0; i < 26; i++){
//            if (int(ch - 'a') == i)
//                num[i]++;
//        }
//        cin.get(ch);
//    }
//    for (int i = 0; i < 26; i++){
//        printf("%c %d\n", char(i + 'a'), num[i]);
//    }
//}


//// 1
//#include <iostream>
//using namespace std;
//
//int main(){
//    int n, k, sum = 0;
//    int judge[1001];
//
//    cin >> n >> k;
//
//    for (int i = 1; i <= n; i++)
//        judge[i] = -1;
//    for (int i = 1; i <= k; i++){
//        for (int j = 1; j <= n; j++){
//            if (j % i == 0)
//                judge[j] = -judge[j];
//        }
//    }
//
//    for (int i = 1; i <= n; i++){
//        if (judge[i] > 0)
//            sum += i;
//    }
//    cout << sum;
//}


//#include <iostream>
//using namespace std;
//struct Row_Max{
//    int max;
//    int column;
//};
//int main(){
//    int m, n;
//    cin >> m >> n;
//    int Matrice[11][11];
//    Row_Max row_max[11];
//    int judge[11];
//
//    for (int i = 1; i <= m; i++){
//        for (int j = 1; j <= n; j++){
//            cin >> Matrice[i][j];
//        }
//    }
//    for (int i = 1; i <= m; i++){
//        row_max[i].max = Matrice[i][1];
//        row_max[i].column = 1;
//        for (int j = 2; j <= n; j++){
//            if (Matrice[i][j] > row_max[i].max){
//                row_max[i].max = Matrice[i][j];
//                row_max[i].column = j;
//            }
//        }
//    }
//    for (int i = 1; i <= m; i++){
//        judge[i] = 1;
//        for (int j = 1; j <= m; j++){
//            if (Matrice[j][row_max[i].column] < row_max[i].max){
//                judge[i] = 0;
//                break;
//            }
//        }
//        if (judge[i] == 1){
//            judge[0] = 1;
//            cout << row_max[i].max;
//            break;
//        }
//    }
//    if (judge[0] != 1)
//        cout << 0;
//}

//#include <iostream>
//#define N 11
//using namespace std;
//
//bool Judge_Row_Max(int num[N][N], int n, int row, int column){
//    bool judge = true;
//    for (int j = 1; j <= n; j++){
//        if (num[row][j] > num[row][column]){
//            judge = false;
//            break;
//        }
//    }
//    return judge;
//}
//
//bool Judge_Col_Min(int num[N][N], int m, int row, int column){
//    bool judge = true;
//    for (int i = 1; i <= m; i++){
//        if (num[i][column] < num[row][column]){
//            judge = false;
//            break;
//        }
//    }
//    return judge;
//}
//
//int main(){
//    bool judge = false;
//    int Matrice[N][N];
//    int m, n;
//    cin >> m >> n;
//    for (int i = 1; i <= m; i++){
//        for (int j = 1; j <= n; j++){
//            cin >> Matrice[i][j];
//        }
//    }
//    for (int i = 1; i <= m; i++){
//        for (int j = 1; j <= n; j++){
//            if (Judge_Col_Min(Matrice, m, i, j) && Judge_Row_Max(Matrice, n, i, j)){
//                cout << Matrice[i][j];
//                judge = true;
//                break;
//            }
//        }
//        if (judge == true){
//            break;
//        }
//    }
//    if (!judge)
//        cout << 0;
//    return 0;
//}


//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//#define N 1000
//#define M 1000
//// ָ�뽻����ֵ
//void swap(int *p, int *q){
//    int temp = *p;
//    *p = *q;
//    *q = temp;
//}
//// ���ý�����ֵ
//void swap1(int &p, int &q){
//    int temp = p;
//    p = q;
//    q = temp;
//}

//
//int main(){
//    srand((unsigned)time(0));
//    bool judge;
//    int data[N];
//    for (int i = 0; i < N; i++)
//        data[i] = rand()%M;
//    for (int i = 1; i < N; i++){
//        judge = false;
//        for (int j = 0; j < N+1-i; j++){
//            if (data[j+1] < data[j]){
//                swap(data[j+1], data[j]);
//                judge = true;
//            }
//        }
//        if (!judge)
//            break;
//    }
//    for (int i = 0; i < N; i++){
//        cout << data[i] << " ";
//    }
//}


//#include <iostream>
//using namespace std;
//#define N 10
//
//struct Odd_Even{
//    int odd;
//    int even;
//};
//Odd_Even judge(int num[N]){
//    Odd_Even odd_even;
//    odd_even.odd = 0;
//    odd_even.even = 0;
//    for (int i = 0; i < N; i++){
//        if (num[i]%2 == 0)
//            odd_even.even ++;
//        else
//            odd_even.odd ++;
//    }
//    return odd_even;
//}
//int main(){
//
//}

//#include <iostream>
//#define N 51
//using namespace std;
//
//int main(){
//    char Numpy_int[N];
//    cin >> Numpy_int;
//    int n;
//    for (n = 0; Numpy_int[n] != '\0'; n++);
//    for (int i = n-1; i >= 0; i--){
//        if (Numpy_int[i] != '9'){
//            Numpy_int[i] += '1' - '0';
//            break;
//        } else
//            Numpy_int[i] = '0';
//    }
//    if (Numpy_int[0] == '0')
//        cout << '1' << Numpy_int;
//    else
//        cout << Numpy_int;
//}

//// ��������
//#include <iostream>
//#include <algorithm>
//#define N 100
//using namespace std;
//
//int main(){
//    int n, sum = 0;
//    int Time[N];
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> Time[i];
//    sort(Time, Time + n);
//    while(n >= 4)
//    {
//        if(2*Time[0] + Time[n-1] + Time[n-2] > 2*Time[1] + Time[0] + Time[n-1])
//            sum += 2*Time[1] + Time[0] + Time[n-1];
//        else
//            sum += 2*Time[0] + Time[n-1] + Time[n-2];
//        n -= 2;
//    }
//    if(n == 3)
//        sum += Time[0] + Time[1] + Time[2];
//    else if(n == 2)
//        sum += Time[1];
//    else
//        sum += Time[0];
//    cout << sum;
//}

//// ��ŵ������
//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//using namespace std;
//void Hanoi(char a, char b, char c, int n){
//    if (n == 0)
//        return;
//    Hanoi(a, c, b, n-1);
//    printf("Take the %dth from %c to %c", n, a, c);
//    Hanoi(b, a, c,n-1);
//}
//int main(){
//    Hanoi('A', 'B', 'C', 8);
//
//}


//// ָ��
//#include <iostream>
//using namespace std;
//
//int main(){
//    float *floatp;
//    float f = 1.5;
//
//    int *intp;
//    int x = 1;
//
//    intp = &x;
//
//    floatp = &f;
//    cout << *floatp << endl;
//    cout << *intp << endl;
//
//    floatp = (float *)intp;
//
//    cout << *floatp << endl;
//}


//// �ں����ڲ���ָ��ı������ֵ
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//
//void Process(int num[], int n, int *even_num, int *odd_num){
//    *even_num = *odd_num = 0;
//    for (int i = 0; i < n; ++i) {
//        if (num[i] % 2 == 0)
//            (*even_num)++;
//        else
//            (*odd_num)++;
//    }
//}
//
//int main(){
//    srand((unsigned)time(NULL));
//    int n, even_num, odd_num;
//
//    cin >> n;
//    int Num[n];
//    for (int i = 0; i < n; ++i) {
//        Num[i] = rand()%100;
//        cout << Num[i] << " ";
//    }
//    Process(Num, n, &even_num, &odd_num);
//    cout << "\n" << even_num << " " << odd_num;
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//    wchar_t bob = L'P';
//    wcout << L"tall" << endl;
//}


//#include <iostream>
//#include "MyLibrary_RY.h"
//using namespace std;
//
//int main(){
//    const int Size = 15;
//    char name1[Size];
//    char name2[Size] = "C++owboy";
//    int num1[10], num2[10] = {3,4,5,9,0,7,8,1,2,6};
//    merge_sort(num2, 0, 9, num1);
//    for (int i = 0; i < 9; ++i) {
//        cout << num1[i] << endl;
//    }
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//    int n;
//    cin >> n;
//    huiwen(n);
//    return 0;
//}
//
//void huiwen(int n){
//
//}

//#include <windows.h>
//int main(){
//    MessageBoxA(0, "hello,world", "first C", 1);
//    return 0;
//}

//// ��̬�ڴ����
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main(){
//    int *score, num, i;
//    double average = 0, variance = 0;
//
//    cin >> num;
//    score = new int[num];
//
//    for (i = 0; i < num; i++)
//        cin >> score[i];
//
//    for (i = 0; i < num; ++i)
//        average = average + score[i];
//    average = average / num;
//
//    for (i = 0; i < num; i++)
//        variance = variance + (average - score[i]) * (average - score[i]);
//    variance = sqrt(variance) / num;
//
//    cout << average << " " << variance;
//}


//#include <iostream>
//using namespace std;
//
//void f(int arr[]);
//
//int main(){
//    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//
//    cout << sizeof(array) << endl;
//    f(array);
//}
//
//void f(int arr[]){
//    cout << sizeof(arr) << endl;
//}

//#include <iostream>
//#include <sstream>
//using namespace std;
//const int N = 20;
//
//template <class Type>
//Type stringToNum(const string& str)
//{
//    istringstream iss(str);
//    Type num;
//    iss >> num;
//    return num;
//}
//
//int main(){
//    string num;
//    cin >> num;
//    cout << stringToNum<float>(num) << endl;
//    return 0;
//}


//// Լɪ������
//#include <iostream>
//using namespace std;
//
//struct Node{
//    int data;
//    Node *next;
//};
//
//int main(){
//    Node *head, *p, *q;
//    int n, i;
//    cin >> n;
//    head = p = new Node;
//    p->data = 1;
//    for (i = 1; i <= n; ++i) {
//        q = new Node;
//        q->data = i;
//        p->next = q;
//        p = q;
//    }
//    p->next = head;
//    while (q->next != q){
//        p = q->next;
//        q = p->next;
//        p->next = q->next;
//        cout << q->data << "\t";
//        delete q;
//        q = p->next;
//    }
//    cout << endl << q->data << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void copyString(char *str1, char *str2) {
//    while (*str2 != '\0') {
//        *str1 = *str2;
//        str1++;
//        str2++;
//    }
//}
//// �ж��ַ�����������
//bool inString(char *str1, char *str2) {
//    bool judge = true;
//    while (*str1 == *str2 || str2) str2++;
//    while (*str1 != '\0' && *str2 != '\0') {
//        if (*str1 == *str2){
//            str1++;str2++;
//        }
//        else {
//            judge = false;
//            break;
//        }
//    }
//    return judge;
//}
//
//int main() {
//    char str1[] = "one";
//    char str2[] = "do one more";
//    cout << inString(str1, str2);
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(){
//    const char *str[3] = {"morning", "afternoon", "apple"};
//    const char *temp;
//    int i, j;
//
//    for (i = 0; i < 3; i++){
//        for (j = i + 1; j < 3; j++){
//            if (strcmp(str[i], str[j]) > 0){
//                temp = str[i];
//                str[i] = str[j];
//                str[j] = temp;
//            }
//        }
//    }
//    for (i = 0; i < 3; i++)
//        cout << str[i]<< endl;
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//    const char *city[] = {"aaa", "bbb", "ccc", "ddd", "eee"};
//    char **p;
//
//    for (p = city; p < city + 5; ++p){
//        cout << *p << endl;
//    }
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//    int **a;
//    a = new int *[3];
//    for (int i = 0; i < 3; ++i)
//        a[i] = new int[4];
//}


//#include <iostream>
//using namespace std;
//
//int main(){
//    int (*p)[4], *q;
//    int a[3][4];
//    for (p = a; p < a + 3; p++)
//        for (q = *p; q < *p + 4; ++q)
//            cout << *q << endl;
//        cout << endl;
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(int argv, char *argv[]){
//    char *
//    char *temp = NULL;
//    for (int i = 0; i < argv; i++){
//        for (int j = i + 1; j < argv; j++){
//            if (strcmp(argv[i], argv[j]) < 0){
//                temp = argv[i];
//                argv[i] = argv[j];
//                argv[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < argv; i++)
//        cout << argv[i];
//    return 0;
//}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <cstdio>
//using namespace std;
//
//
//struct treeNode {
//    int id;
//    int payload;
//    treeNode *left;
//    treeNode *right;
//};
//
//void insert(treeNode* tree, int id, int payload){
//    if (!tree){
//        tree = new treeNode;
//        tree->id = rand() % 10;
//        tree->payload = rand() % 1000;
//    }
//    else if (id == tree->id)
//        tree->payload = payload;
//    else if (id < tree->id)
//        insert(tree->left, id, payload);
//    else
//        insert(tree->right, id, payload);
//}
//
//int main(){
//    srand((unsigned)time(NULL));
//    treeNode *tree = NULL, *list;
//    for (int i = 0; i < 1; i++){
//        insert(tree, rand()%10, rand() % 1000);
//    }
//    cout << tree->payload;
//    for (list = tree; list != NULL; ){
//        printf("%2d:%3d  ", list->id, list->payload);
//        if (list->left != NULL)
//            list = list->left;
//        else if (list->right != NULL)
//            list = list->right;
//    }
//    return 0;
//}



////指向结构体的指针
//#include <cstring>
//#include <iostream>
//#include "MyLibrary_RY.h"
//using namespace std;
//
//struct inflatable {
//    char name[20];
//    float volume;
//    double price;
//};
//
//int main(){
//    inflatable * ps = new inflatable;
//    cin.get(ps->name, 20);
//    cin >> ps->volume;
//    cin >> ps->price;
//    cout << (*ps).name << " " << ps->volume << " " << ps->price;
//    delete(ps);
//    return 0;
//}


//char * getname(void);
//
//int main(){
//    char * name;
//
//    name = getname();
//    cout << name << " at " << (int *) name << endl;
//    delete [] name;
//
//    name = getname();
//    cout << name << " at " << (int *) name << endl;
//    delete [] name;
//    return 0;
//}
//
//char * getname(){
//    char temp[80];
//    cout << "Enter last name:";
//    cin >> temp;
//    char * pn = new char[strlen(temp) + 1];
//    strcpy(pn, temp);
//
//    return pn;
//}


//struct City {
//    string cityName;
//    int population;
//    City *next;
//};
//
//int main(){
//    City * head, * p, * q;
//    head = p = new City;
//    string x;
//    while (strncmp(cin >> x, )){
//        q = new City;
//        q->cityName = x;
//        cin >> q->population;
//        p->next = q;
//        p = q;
//    }
//    cout << head->cityName;
//    cout << head->population;
//}

/*define the struct City*/
struct City {
    string cityName;
    int population;
    City * next;
};

void bubbleSort(City *head){
    City * pp, *qq, *t, *m = NULL, *temp = NULL;
    do {
        pp = head;
        qq = pp->next->next;
        do {
            if (pp->next->population < qq->population){
                t = pp->next;
                pp->next = qq;
                m = qq->next;
                qq->next = t;
                pp->next->next = m;
            }
            pp = pp->next;
            qq = qq->next;
        }while (qq != NULL);

        pp->next->next = NULL;
        qq->next = temp;
        temp = qq;
    }while (temp != head->next->next);
}



//采用头插法对链表进行排序
void sort(City *l) {
    City *p = l->next, *pre;
    City *r = p->next;
    p->next = NULL;
    p = r;
    while (p != NULL) {
        r = p->next;
        pre = l;
        while (pre->next != NULL && pre->next->population > p->population) {
            pre = pre->next;
        }
        p->next = pre->next;
        pre->next = p;
        p = r;
    }
}



//int main(){
//    City * head, * p, * rear;
//    head = rear = new City;
//    while (true) {
//        p = new City;
//        cin >> p->cityName;
//        if (p->cityName == "@"){
//            delete p;
//            break;
//        }
//        cin >> p->population;
//        rear->next = p;
//        rear = p;
//    }
//    rear->next = NULL;
//    sort(head);
//    City *pp = head->next;
//    while (pp->next->next != NULL){
//        pp = pp->next;
//    }
//    pp = NULL;
//    head = head->next;
//    do {
//        cout << head->cityName << head->population << " ";
//        head = head->next;
//    }while (head->next != NULL);
//}


#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int encrypyNum[] = {8, 7, 3, 4, 9, 6, 2};
    string inputStr, inputStr1;
    getline(cin, inputStr);
    inputStr1 = inputStr;
    for (int i = 0, j = 0; i < inputStr.size(); i++, j++){
        inputStr[i] = char(inputStr[i] + encrypyNum[j]);
        inputStr1[i] = char(inputStr1[i] - encrypyNum[j]);
        if (inputStr[i] > 122)
            inputStr[i] = char(inputStr[i]%91);
        if (inputStr1[i] < 32)
            inputStr1[i] = char(inputStr1[i]+91);
        if (j == 6)
            j = -1;
    }
    cout << inputStr << endl << inputStr1;
    return 0;
}