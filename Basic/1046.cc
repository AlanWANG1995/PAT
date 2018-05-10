#include <iostream>
using namespace std;
int main(int argc, char const* argv[]){
	int N;
	scanf("%d", &N);
	int a,b,c,d;
	int ca=0,cb=0;
	while(N--){
		scanf("%d%d%d%d",&b,&a,&d,&c);
		if(a==c) continue;
		int s = b+d;
		if(s==a){
			cb++;
		}else if(s==c){
			ca++;
		}
	}
	printf("%d %d\n",ca,cb);
	
	return 0;
}
