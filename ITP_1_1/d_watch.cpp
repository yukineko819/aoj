#include <iostream>
using namespace std;

int main(){
  int t;
  std::cin >> t;
  std::cout << t/60/60 << ":" << t/60%60 << ":" << t%60 << std::endl;
  return 0;
}
