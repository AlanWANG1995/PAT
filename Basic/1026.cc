#include <iostream>
using namespace std;
int main(int argc, char const* argv[]){
	int a,b;
	scanf("%d%d",&a,&b);
	int diff= (b-a+50)/100;
	printf("%02d:%02d:%02d\n",diff/3600,(diff/60)%60, diff%60);
	return 0;
}
