#include <iostream>
#include <vector>
using namespace std;
int main(){
  int ori;
  vector<int> flags;
  cin >> ori;
  int flag = 0;
  for(;ori != 0; ori=ori / 10){
    for(auto i = 0; i < ori % 10;i++){
      flags.push_back(flag);
    }
    flag ++;
  }

  // output
  int i = 1;
  while(!flags.empty()){
    int temp = flags.back();
    if(temp == 0){
      cout << i++;
    }else if(temp == 1){
      cout << 'S';
    }else{
      cout << 'B';
    }
    flags.pop_back();
  }
  cout << endl;
  
  return 0;
}