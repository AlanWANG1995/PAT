// 运行超时 优化算法
#include <iostream>
#include <list>
#include <cmath>
using namespace std;
list<int> getPrimeNumber(int max){
  list<int> res;
  for(auto i = 0; i< max; i++){
    res.push_back(i+1);
  }
  res.pop_front(); //remove 1 form list
  for(auto i = 2; i < sqrt(max); i++){
    res.remove_if([&](int n){return (n % i ==0) && (n / i != 1);});
  }
  return res;
}

int main(){
  int max;
  cin >> max;
  auto a = getPrimeNumber(max);
  if(a.empty()){
    cout << 0 << endl;
    return 0;
  }
  int count = 0;
  while(!a.empty()){
    int m = a.front();
    a.pop_front();
    if(a.empty()) break;
    int n = a.front();
    if (n -m ==2) count ++;
  }
  cout << count << endl;
  return 0;
}