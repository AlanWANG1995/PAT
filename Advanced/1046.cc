#include <iostream>
#include <vector>
#include <iomanip>
#include <list>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
static int x=[](){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();
int main(int argc, char const* argv[]){
	int N, M;
	cin >> N;
	vector<int> dis;
	dis.push_back(0);
	for(int i=0;i<N;i++){
		int t;
		cin >> t;
		t+=dis.back();
		dis.push_back(t);
	}

	cin >> M;
	int i,j;
	while(M--){
		int i, j;
		cin >> i >> j;
		i--;j--;
		int high, low;
		if(i>j){
			high = i; low =j;
		}else{
			high = j; low =i;
		}
		int d = dis[high] - dis[low];
		cout << min(d, dis.back()-d) << endl;

	}
	return 0;
}
