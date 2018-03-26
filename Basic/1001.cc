// (3n+1)猜想
#include <cstdio>
void process(int& a){
    int count = 0;
    while((a != 1)){
        if(a % 2 ==0){
            a /= 2;
        }else{
            a = (3*a+1)/2;
        }
        count++;
    }
    printf("%d", count);
}
int main(){
    int a;
    scanf("%d", &a);
    // a = 809;
    process(a);
    return 0;
}