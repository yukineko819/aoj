#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  double r;
  cin >> r;

  printf("%.6lf %.6lf\n", r*r*M_PI, 2*r*M_PI);

  return 0;
}
