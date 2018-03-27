#include <iostream>
#include <string>
#include <vector>
struct student{
  std::string name;
  std::string id;
  int grade;
};
int main(){
  int total;
  std::vector<student> list;
  std::cin >> total;
  int flag = 0;
  for(auto i=0;i<total;i++){
    student current;
    flag = 0;
    std::cin >> current.name >> current.id >> current.grade;
    for(auto it=list.begin();it != list.end(); it++){
      if(current.grade > (it->grade)){
        list.insert(it,current);
        flag = 1;
        break;
      }
    }
    if(flag) continue;
    list.push_back(current);
  }
  std::cout << list.front().name << " " << list.front().id << std::endl;
  std::cout << list.back().name << " " << list.back().id << std::endl;
  return 0;
}
