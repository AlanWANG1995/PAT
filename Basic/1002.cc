#include <iostream>
#include <vector>
const char* number[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
using namespace std;
int main(){
  string ori;
  int sum = 0;
  string res = "";
  vector<const char*> t;
  cin >> ori;
  for(auto c:ori){
    sum += c - '0';
  }
  //handle if sum is 0
  if(sum == 0){
    cout << "zero" << endl;
    return 0;
  }
  while(sum != 0){
    int current = sum % 10;
    t.push_back(number[current]);
    sum /= 10;
  }
  while(!t.empty()){
    const char* top = t.back();
    t.pop_back();
    res.append(top);
    if(!t.empty()){
      res.append(" ");
    }
  }
  cout << res << endl;
  return 0;
}
