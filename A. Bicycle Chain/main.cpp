#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,ag[55],b,bg[55],ans=0,mgr=0;
    cin>>a;
    for(int i=0;i<a;i++) cin>>ag[i];
    cin>>b;
    for(int i=0;i<b;i++) cin>>bg[i];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            int rt=(bg[j]/ag[i]);
            if(mgr<rt&&(bg[j]%ag[i]==0)){
                mgr=rt;
                ans=1;
            }
            else if(mgr==rt&&(bg[j]%ag[i]==0)) ans++;
        }
    }
    cout <<ans<<endl;
    return 0;
}
