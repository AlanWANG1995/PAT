#include <iostream>
#include <vector>
#include <queue>
class OctNode{
  private:
  std::vector<int> child;
  public:
  int origin;
  OctNode(int ori){
    this->origin = ori;
    for(int temp = ori; temp != 1; temp=(temp % 2==0)?(temp /2):((3 * temp + 1) / 2)){
      this->child.push_back(temp);
    } 
  }
  ~OctNode(){};
  bool contains(int a){
    for(auto i: this->child){
      if(i == a) return true;
    }
    return false;
  }
};

int main(){
  int total;
  std::cin >> total;
  std::vector<OctNode> nodes;
  std::priority_queue<int> res;
  for(auto i =0;i<total;i++){
    int temp;
    std::cin >> temp;
    int flag = 0;
    for(auto node: nodes){
      if(node.contains(temp)){
        flag = 1;
        break;
      } 
    }
    if(flag == 0){
      nodes.push_back(OctNode(temp));
    }
  }
  for (auto it=nodes.begin(); it != nodes.end(); it++){
    int flag = 0;
    auto current_node = *it;
    for(auto it2 = it+1;it2 != nodes.end(); it2++){
      if(it2->contains(current_node.origin)){
        flag = 1;
        break;
      }
    }
    
    if(flag == 0){
      res.push(current_node.origin);
    }
  }

  do{
    std::cout<< res.top();
    res.pop();
    if(!res.empty()){
      std::cout << " ";
    }else{
      std::cout << std::endl;
    }
  } while(!res.empty());
}