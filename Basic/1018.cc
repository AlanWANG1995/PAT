#include <iostream>
const char sym[3] = {'B','C', 'J'};
void compare(int res[3][3], char& a, char& b){
  int wins = (b % 3 - a % 3 + 3) % 3;
  if(wins == 1){
    res[1][a % 3] ++;
  }else if(wins == 2){
    res[2][b % 3] ++;
  }
  res[0][wins] ++;
}

const char& amax(int arr[3]){
  int res = 0;
  if(arr[1] > arr[0]){
    res = 1;
  }
  if(arr[2] > arr[res]){
    res = 2;
  }
  return sym[res];
}

int main(){
  int total;
  int res[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
  int * const jia = res[1], * const yi = res[2];
  for(scanf("%d", &total); total > 0; total --){
    char a,b;
    std::cin >> a >> b;
    compare(res,a,b);
  }
  printf("%d %d %d\n", res[0][1], res[0][0],res[0][2]);
  printf("%d %d %d\n", res[0][2], res[0][0],res[0][1]);
  printf("%c %c\n",amax(jia), amax(yi));
  return 0;
}