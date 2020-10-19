#include <iostream>
using namespace std;

int main() {
    int T;
    cin>> T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int min=arr[0];
        int count=1;
        for(int i=1;i<N;i++){
            if(arr[i]<=min){
                count++;
                min=arr[i];
            }
            //else if(arr[i]<=arr[i-1])
              //  count++;
        }
        std::cout << count << std::endl;
    }
	return 0;
}
