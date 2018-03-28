#include <iostream>
#include <list>
#include <string>
using namespace std;
const char *week[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
int main() {
  string a, b, c, d;
  int minute;
  cin >> a >> b >> c >> d;

  for (auto i = 0; i < min(c.size(), d.size()); i++) {
    if (c[i] == d[i] && isalpha(c[i])) {
      minute = i;
      break;
    }
  }
  int flag = -1;
  for(auto i=0;i < min(a.size(), b.size()); i++){
    if(flag == -1 && a[i] == b[i] && a[i] <= 'G' && a[i] >= 'A'){
      flag = a[i] - 'A';
      continue;
    }
    if(flag != -1 && a[i] == b[i]){
      if(a[i] >= '0' && a[i] <= '9'){
        printf("%3s %02d:%02d\n",week[flag], a[i]-'0', minute);
        break;
      }else if(a[i] >= 'A' && a[i] <= 'N'){
        printf("%3s %02d:%02d\n",week[flag], a[i]-'A'+10, minute);
        break;
      }
    }
  }
  return 0;

}