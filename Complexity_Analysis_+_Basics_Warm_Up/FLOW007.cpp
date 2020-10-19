#include <iostream>
using namespace std;

int main() {
	int T;
	cin>> T;
	while (T--){
	    long long N;
	    cin>> N;
	    long long S=0;
	    while(N>0){
	        S=S*10+(N%10);
	        N/=10;
	    }
	    cout<< S<<endl;
	}
	return 0;
}
