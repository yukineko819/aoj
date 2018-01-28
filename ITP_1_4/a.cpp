#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  printf("%d %d %.8lf\n", a/b, a%b, (double)a/b);

  return 0;
}
