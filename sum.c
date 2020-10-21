#include <stdio.h>

int main(void){
    
    long n=0;
    long sum=0;
    printf("for文で1からnまでの値を求めます。\n");
    printf("nの値:"); scanf("%ld",&n);
    //繰り返しでnまでの和を求める
    for(long i=1;i<=n;i++){
        sum+=i;
    }
    printf("1から%ldまでの値は%ldです。\n",n,sum);

    n=0;
    sum=0;
    printf("ガウスの方法で1からnまでの値を求めます。\n");
    printf("nの値:"); scanf("%ld",&n);

    sum=n*(n+1)/2; //ガウスの方法
    printf("1から%ldまでの和は%ldです。\n",n,sum);
    return 0;
}