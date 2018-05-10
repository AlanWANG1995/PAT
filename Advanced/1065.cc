#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <stack>
#include <algorithm>
using namespace std;
static int x=[](){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();
int main(int argc, char const* argv[]){
	int N;
	cin >> N;
	int T = N;
	while(N--){
		long long a,b,c;
		cin >> a >> b >> c;
		long long res = a + b;
		if(a>0 && b > 0&& res < 0){
			cout <<"Case #"<<T-N<<": true" << endl;
		}else if(a < 0&& b < 0&& res >=0){
			cout <<"Case #"<<T-N<<": false" << endl;
		}else if(res > c){
			cout <<"Case #"<<T-N<<": true" << endl;
		}else{
			cout <<"Case #"<<T-N<<": false" << endl;
		}
	}
	return 0;
}
