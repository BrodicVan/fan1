#include <iostream>
using namespace std;



int mod(int a, int b) {
  return a - (a / b) * b;
}

int do_work(int n) {
  int x1, x2, x3;
  n = mod(n, 5);
  x1 = 2 * n;
  x2 = n + n;
  x3 = 4 * 4;
  x1 = x3 + x2 + x1;
  x2 = x1 + (x1 + 1) * (x2 + 1) * (x3 + 1);
  x3 = x1 * (x1 + 1) + (x2 + 1) * (x2 + 1) + (x3 + 1) * (x3 + 1);
  x1 = (x1 + 1) + (x2 + 1) + (x3 + 1);
  return x1 + x2 + x3;
}

int main() {
  int t1 = 2;
  int t2 = 5;
  int t3 = 10;
  int i = 3 * (t2 * t3) - 100 / 5;
  int j = 42 - (t1 * t2) * (t1 * (t2 * t3) / 32) + 100;
  int k = 3 * 4 * 5 - 10 - (-(t1 * t2) * 3) - (t1 * t2) - (t1 * t2) + 3 + 2 + 1;
  int cnt = 0;
  int sum = 0;
  int len = t1 * t2;
  int array[10];
  int brray[10];
  while (cnt < k) {
    sum = sum + 1;
    array[mod(cnt, len)] = i;
    i = i + 1;
    cnt = cnt + 1;
  }
  cnt = 0;
  while (cnt < 100) {
    brray[mod(cnt, len)] = i;
    i = i + 1;
    cnt = cnt + 1;
  }

  cnt = 0;
  while (cnt < mod(do_work(10), 30)) {
    j = array[mod(cnt, len)];
    sum = sum + (-1) * cnt + do_work(j);
    j = j + 2 * cnt;
    j = j + 2 * cnt;
    j = j + 2 * cnt;
    if (mod(do_work(10), 10) == mod(do_work(j), 10)) {
      j = mod(j, 10);
    } else {
      j = mod(j, 20);
    }
    array[mod(cnt, len)] = j * j;
    cnt = cnt + 1;
  }
  j = j + array[0] + array[1];
  j = j + array[0] + array[1];
  j = j + array[0] + array[1];
  j = j + array[0] + array[1];
  cout<<j<<endl;
  cout<<array[0]<<endl;
  cout<<array[1]<<endl;
  cout<<array[2]<<endl;
  cout<<array[3]<<endl;
  cout<<array[4]<<endl;
  return 0;
}