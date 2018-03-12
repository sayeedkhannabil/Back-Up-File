#include <cstdio>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
	ll inp1;
	ll inp2;

	while(cin>>inp1>>inp2){
        ll new_inp1 = inp1;
        ll new_inp2 = inp2;
		if(inp1>inp2)
			swap(inp1, inp2);

		int countmain = 0;

		for(int i = inp1; i<=inp2; i++){
			int count = 1;
			int n = i;
			while(n!=1){
				if(n%2 == 1){
					n = 3*n + 1;
				}
				else
					n = n/2;

				count++;
			}

			if(count>countmain){
				countmain = count;
			}
		}

		cout<<new_inp1<<" "<<new_inp2<<" "<<countmain<<"\n";
	}

	return 0;
}
