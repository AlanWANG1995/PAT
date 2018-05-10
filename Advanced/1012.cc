#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct Score{
  string id;
  int score;
  Score(){};
  Score(string id, int score):id(id), score(score){};
  bool operator < (Score another){
    return this->score > another.score;
  }
};
int main(){
  int students_count, index_count;
  std::cin >> students_count >> index_count;
  std::fflush(stdin);
  vector<Score> list[4];
  int s[4] = {0};
  string id;
  for(;0 < students_count;students_count --){
    cin >>  id >> s[2] >> s[1] >> s[0];
    s[3] = s[0] + s[1] + s[2];
    for(int j = 0; j< 4;j++){
      list[j].push_back(Score(id, s[j]));
    }
  }
  for(int i = 0;i < 4; i++){
    sort(list[i].begin(), list[i].end());
  }

  // index segment
  string current_id;
  int rank;
  int level;
  const char rank_level[4] = {'E', 'M', 'C', 'A'};
  for(;index_count > 0; index_count --){
      std::cin >> current_id;
      rank = 0;
      for(auto i = 0;i < 4; i++){
        for(size_t index = 0; index < list[i].size();index ++){
          if (list[i][index].id == current_id){
            if(rank == 0 || index < rank){
              rank = index + 1;
              level = i;
            }
          }
        }
      }
      if(rank == 0){
        cout << "N/A" << endl;
      }else{
        cout << rank << " " << rank_level[level] << endl;
      }
  }

  return 0;
}