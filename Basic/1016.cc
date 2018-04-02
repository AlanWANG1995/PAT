#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
  string a,b;
  char ac, bc;
  cin >> a >> ac >> b >>bc;
  stringstream isa(""), isb("");
  for(char c : a){
    if(c == ac){
      isa << c;
    }
  }
  for (char c: b){
    if(c == bc){
      isb << c;
    }
  }
  int ai =0, bi=0;
  isa >> ai;
  isb >> bi;
  printf("%d\n", ai + bi);
  return 0;
}