#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define MAX 500
int arr[MAX];

void sieve();

int main()
{
    sieve();

    for(int i = 2; i<MAX; i++){
        if(!arr[i])
            cout<<i<<" ";
    }

	return 0;
}


void sieve()
{
    for(int i = 4; i<MAX; i+=2)arr[i]=1;

    int temp = sqrt(MAX);

    for(int a = 3; a<temp; a+=2){
        for(int b = a*a; b<MAX; b+=a*2){
            arr[b]=1;
        }
    }
}
