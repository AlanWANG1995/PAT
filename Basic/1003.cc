#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int total;
  vector<string> res;
  cin >> total;
  for(auto i =0;i<total;i++){
    string s;
    cin >> s;
    int pos = 0;
    int a[3] = {0,0,0};
    for(auto c : s){
      if(c == 'A') a[pos] ++;
      else if(c == 'P' && pos == 0) pos ++;
      else if(c == 'T' && pos == 1) pos ++ ;
      else break; 
    }
    if(a[1] && (a[0] * a[1] == a[2]) && pos == 2){
      res.push_back(string("YES"));
      continue;
    }
    res.push_back(string("NO"));
  }
  for (auto s : res){
    cout << s << endl;
  }
  return 0;
}