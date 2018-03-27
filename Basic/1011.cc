#include <iostream>
using namespace std;
int main() {
  int total;
  cin >> total;

  for (auto i = 0; i < total; i++) {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << "Case #" << (i + 1) << ": " << (((a + b) > c) ? "true" : "false")
         << endl;
  }
  return 0;
}