#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int w,h,x,y,r;
  cin >> w >> h >> x >> y >> r;
  if (r<=x && r<=y && x+r<=w && y+r<=h) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}
