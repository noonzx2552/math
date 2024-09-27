#include<stdio.h>
#include<math.h>
int main(){
    int k;
    char point;
    scanf("%d",&k);
    long long ki[k];
    for(int i=0;i<k;i++){
        scanf("%lld",&ki[i]);
    }
    for(int i=0;i<k;i++){
        printf("%lld\n",(ki[i]*567)+9);
    }
}