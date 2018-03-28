#include <iostream>
using namespace std;
int main(){
  for(auto i = 'A'; i <= 'z';i++){
    printf("%s", &i);
  }
  return 0;
}