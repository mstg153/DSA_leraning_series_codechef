#include <iostream>
#include<string.h>
using namespace std;

bool islap(int arr1[],int arr2[]){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i])
            return false;
    }
    return true;
}

int main() {
    int T;
    cin>>T;
    while(T--){
        string in;
        cin>>in;
        int arr1[26],arr2[26];
        for(int i=0;i<26;i++){
            arr1[i]=0;
            arr2[i]=0;
        }
        int k=in.size();
        if (k%2==0){
            for(int i=0;i<k/2;i++){
                arr1[in[i]-'a']++;
            }
            for(int i=(k/2);i<k;i++)
                arr2[in[i]-'a']++;
            if (islap(arr1,arr2))
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        }
        else{
            for(int i=0;i<(k/2);i++){
                arr1[in[i]-'a']++;
            }
            for(int i=(k/2)+1;i<k;i++)
                arr2[in[i]-'a']++;
            if (islap(arr1,arr2))
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        }
    }
	return 0;
}
