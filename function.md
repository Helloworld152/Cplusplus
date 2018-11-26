# 函数

### 带有默认参数的函数

有默认值的参数必须放在形参表列的**最右边**（否则，赋值时易产生歧义）。

### 内联函数（inline）

用**函数代码代替函数调用**（即直接将函数代码复制转化到调用处执行）。

### 重载函数

参数个数不同或参数类型不同的函数，**取相同的函数名**。

### 函数模板

```C++
template<class T>
T max(T a, T b){
    return a > b ? a : b;
}
```

函数模板的使用:

```c++
int maxNum = max(3, 7);
double maxDouble = max(3.4, 5.4);
```

### 函数的递归

**Python Hanoi问题：**

```python
def Hanoi(a, b, c, n):
    if (n == 0):
        return
    Hanoi(a, c, b, n - 1)
    print("Take the %dth from %c to %c" %(n, a, c))
    Hanoi(b, a, c, n - 1)

Hanoi("A", "B", "C", 8)
```

**C++ Hanoi 问题：**

```c++
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

void Hanoi(char a, char b, char c, int n){
    //n=0时退出
    if (n == 0)
        return;
    
    Hanoi(a, c, b, n-1);
    printf("Take the %dth from %c to %c", n, a, c);
    Hanoi(b, a, c,n-1);
}

int main(){
    Hanoi('A', 'B', 'C', 8);
}
```

**递归：**

递归终止条件













