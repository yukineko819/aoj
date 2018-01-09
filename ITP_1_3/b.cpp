#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  vector<int> a;
  while (true) {
    int tmp;
    cin >> tmp;
    if (tmp == 0) break;
    else a.push_back(tmp);
  }

  for (int i=0; i<a.size(); i++) {
    printf("Case %d: %d\n", i+1, a[i]);
  }
  return 0;
}
