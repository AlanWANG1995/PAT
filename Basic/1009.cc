#include <list>
#include <iostream>
#include <string>
using namespace std;
int main(){
  list<string> lis;
  do{
    string s;
    cin >> s;
    lis.push_front(s);
  }while(cin.get() != '\n');
  for(auto s: lis){
    cout << s;
    if(lis.back() != s){
      cout<<" ";
    }else{
      cout << endl;
    }
  }
  
  return 0;
}