#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  int min = 1000000;
  int max = -1000000;
  long int sum = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;

    // 最大値
    if (max < a) {
      max = a;
    }
    if (a < min) {
      min = a;
    }
    sum += a;
  }

  printf("%d %d %ld\n", min, max, sum);

  return 0;
}
