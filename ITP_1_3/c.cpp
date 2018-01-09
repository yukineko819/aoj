#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  vector<vector<int> > v;
  while (true) {
    int x,y;
    vector<int> a;
    cin >> x >> y;
    if (x == 0 && y == 0) {
      break;
    } else {
      a.push_back(x);
      a.push_back(y);
      sort(a.begin(),a.end());
      v.push_back(a);
    }
  }

  for (int i=0; i<v.size(); i++) {
    printf("%d %d\n", v[i][0], v[i][1]);
  }
  return 0;
}
