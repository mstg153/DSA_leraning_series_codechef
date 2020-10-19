#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long int T;
    cin>>T;
    while(T--){
        long long int N;
        cin>>N;
        long int j=0;
        for(long int i=5;(N/i)>=1;i*=5){
            j+=(N/i);
        }
        cout<<j<<endl;
    }
	return 0;
}
