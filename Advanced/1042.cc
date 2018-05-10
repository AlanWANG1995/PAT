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

const char mp[5] = {'S','H','C','D','J'};
void ou(int i){
	printf("%c%d",mp[i/13],(i%13)+1);
}
int main(int argc, char const* argv[]){
	int p[54], e[54], t[54];
	int K;
	scanf("%d",&K);
	for (int i = 0; i < 54; i++) {
		p[i] = i;
		e[i] = i;
		scanf("%d",&t[i]);
	}
	while(K--){
		for (int i = 0; i < 54; i++) {
			e[t[i]-1] = p[i];
		}	
		for(int i = 0; i < 54; i++) p[i]=e[i];
	}
	for (int i = 0; i < 54; i++) {
		if(i>0) printf(" ");
		ou(p[i]);
	}
	return 0;
}
