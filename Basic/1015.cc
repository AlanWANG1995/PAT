#include <iostream>
#include <queue>

struct student {
  int id;
  int a;
  int b;
  int low;
  int high;

  student(int a, int b, int c, int d, int e)
      : id(a), a(b), b(c), low(d), high(e){};

  int level() const {
    if(a >= high && b>=high) return 4;
    if(a >=high && b >=low) return 3;
    if(a>=low && b>= low && a >= b) return 2;
    if(a>=low && b>= low) return 1;
    return 0;
  };
  bool pass() const { return this->level() > 0; };
  int sum() const { return a + b; };
  bool operator<(const student& another) const {
    if (this->level() < another.level()) {
      return true;
    }
    if ((this->level() == another.level()) && (this->sum() < another.sum()))
      return true;
    if ((this->level() == another.level()) && (this->sum() == another.sum()) &&
        (this->a < another.a))
      return true;
    if ((this->level() == another.level()) && (this->sum() == another.sum()) &&
        (this->a == another.a) && (this->id > another.id))
      return true;
    return false;
  }
};



int main() {
  int total, low, high;
  std::priority_queue<student> q;
  scanf("%d%d%d",&total,&low,&high);
  for (auto i = 0; i < total; i++) {
    int id, a, b;
    scanf("%d%d%d",&id,&a,&b);
    student s(id, a, b, low, high);
    if (s.pass()) q.push(s);
  }
  printf("%d\n", (int)q.size());
  while (!q.empty()) {
    auto top = q.top();
    printf("%d %d %d\n",top.id, top.a, top.b);
    q.pop();
  }

  return 0;
}