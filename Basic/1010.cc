#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;
struct poly{
  int ce, index;
  poly(int e, int i):ce(e),index(i){};
  bool empty(){return ce == 0&& index == 0;};
};
int main(){
  ostringstream oss("");
  vector<poly> res;
  do{
    int e,i;
    cin >> e >> i;
    res.push_back(poly(e * i,(i==0)?0:(i-1)));
  }while(cin.get() != '\n');
  for (auto i=0; i<res.size();++i){
    if(!res[i].empty()){
      if(i != 0) oss << " ";
      oss << res[i].ce << " "<<res[i].index;
    }
  }
  if(oss.str().empty()){
    cout << "0 0" <<endl;
  }else{
    cout << oss.str() << endl;
  }
}