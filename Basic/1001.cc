#include <stdio.h>
int main(){
  //从控制台读取输入值
  int input;
  scanf("%d", &input);
  
  //初始化步数
  int steps = 0;
  
  // 奇偶判断
  while(input != 1){
    if (input % 2 == 0){
      input = input /2;
    }else if(input % 2 == 1){
      input = (3 * input + 1) / 2;
    }
    steps = steps + 1;
  }
  
  //输出步数
  printf("%d", steps);
  return 0;
}

