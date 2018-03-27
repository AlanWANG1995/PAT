#include <iostream>
#include <iomanip>
#include <queue>
int main(){
  int res[5] = {0,0,0,0,0};
  int f[5] = {0,0,0,0,0};
  int flag = 1;
  int count_mod3 = 0;
  int total;
  std::cin >> total;
  do{
    int i;
    std::cin >> i;
    switch(i % 5){
      case 0:
      if(i % 2 == 0){
        res[0] += i;
        f[0] = 1;
      }
      break;
      case 1:
      res[1] += (flag * i);
      flag *= -1;
      f[1] = 1;
      break;
      case 2:
      res[2] += 1;
      f[2] = 1;
      break;
      case 3:
      res[3] += i;
      count_mod3 ++;
      f[3] = 1;
      break;
      case 4:
      if(i > res[4]){
        res[4] = i;
      }
      f[4] = 1;
      break;
    }
  }while(std::cin.get()!='\n');
  for(auto i = 0;i < 5; i++){
    if(i != 0){
      std::cout << " ";
    }
    if(f[i]){
      if(i!=3){
        std::cout << res[i];
      }else{
        float p = (float)res[i] / count_mod3;
        std::cout<<std::setiosflags(std::ios::fixed) <<std::setprecision(1) << p;
      }
    }else{
      std::cout << "N";
    }
  }
  std::cout << std::endl; 
  std::cout << f[0] << f[1] << f[2] << f[3] << f[4] << std::endl;
  return 0;
}

