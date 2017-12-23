#include <stdio.h>
int gcd(int a, int b);

int main()
{
    int i, N,j;
    long sum;

    while(1){
    scanf("%d", &N);
    if(N==0)
        break;

    sum=0;
    for(i=1;i<N;i++)
    for(j=i+1;j<=N;j++){
            sum+=gcd(i,j);
            }
        printf("%ld\n", sum);

    }
}

int gcd(int a, int b)
{
    int t;
    while(a>0){

        if(a<b){
        t=a; a=b; b=t;
        }
        a=a-b;
    }

    return b;
}
