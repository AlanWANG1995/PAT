#include <cmath>
#include <iostream>
#include <list>
#include <vector>
int main(){
  using namespace std;
  int min, max;
  cin >> min >> max;
  list<int> l;
  for(auto i = 2; i <= 105000; i++){
    l.push_back(i);
  }
  for(int i =2; i<= sqrt(105000);i++){
    l.remove_if([&](int n){
       return (n % i == 0) && ( n / i != 1); 
    });
  }
  l.sort();
  for(auto i=0; i<(min -1);i++){
    l.pop_front();
  }
  int count = 0;
  for(auto i = min; i<=max; i++){
    if(count != 0){
      cout << " ";
    }
    count ++;
    int p = l.front();
    l.pop_front();
    cout << p;
    if(count == 10){
      cout << endl;
    }
    count = count % 10;
  }
  return 0;
}
