#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
  string s;
  int a;
  int mod = 0;
  stringstream res("");
  bool head = true;
  cin >> s >> a;
  for(auto c : s){
    int current = (c - '0' + 10 * mod);
    int d = current / a;
    mod = current % a;
    if(d == 0 && head) continue;
    res << d;
    head = false;
  }
  if(res.str().empty()) {
    cout << "0 "<< mod << endl;
  }else{
    cout << res.str() << " " << mod << endl;
  }
  return 0;
}