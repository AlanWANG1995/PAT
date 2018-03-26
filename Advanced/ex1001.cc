#include <cstdio>
#include <vector>
int hashO(const char *str){
    int res = 0;
    for(int i=0; i<3;i++){
        res = res * 26 + str[i] - 'A';
    }
    res = res * 10 + str[3] - '0';
    return res;
}
int main(){
    using namespace std;
    printf("%d", hashO("HGK8"));
    return 0;
}