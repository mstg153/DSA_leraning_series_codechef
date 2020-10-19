#include "bits/stdc++.h"
using namespace std;


int main() {
    long long N;
    cin>>N;
    vector <long long> arr(N);
    for(long long i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    long long pro=0;
    for(long long i=0;i<N;i++){
        if (pro<=arr[i]* (N-i))
            pro= arr[i]*(N-i);
    }
    cout<<pro;
    
	return 0;
}
