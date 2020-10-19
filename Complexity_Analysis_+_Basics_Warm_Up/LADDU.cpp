#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int act,k=0;
        string s;
        cin>>act>> s;
        for(int i=0;i<act;i++){
            string st;
            cin>>st;
            if(st=="CONTEST_WON"){
                int r;
                cin>>r;
                if(r<20)
                    k=k+(20-r);
                k+=300;
            }
            if(st=="TOP_CONTRIBUTOR")
                k+=300;
            if(st=="BUG_FOUND"){
                int sev;
                cin>>sev;
                k+=sev;
            }
            if(st=="CONTEST_HOSTED"){
                k+=50;
            }
        }
        if(s=="INDIAN")
            cout<<k/200<<endl;
        else
            cout<<k/400<<endl;
    }
	return 0;
}