#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  vector<int> res;
  while (true) {
    int a,b;
    char op;
    cin >> a >> op >> b;
    if (op == '?') {
      break;
    } else if(op == '+') {
      res.push_back(a+b);
    } else if(op == '-') {
      res.push_back(a-b);
    } else if(op == '*') {
      res.push_back(a*b);
    } else if(op == '/') {
      res.push_back(a/b);
    }
  }

  for (int i=0; i<res.size(); i++) {
    printf("%d\n", res[i]);  
  }

  return 0;
}
