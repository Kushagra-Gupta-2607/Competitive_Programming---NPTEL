#include <bits/stdc++.h>
using namespace std;

/*
To be done
*/

list<int> construct(int n, int c, int a){

  
  
}


int main(){

    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for(int k = 0; k<t; k++){
        int n, c;
        cin >> n >> c;
        cout << "Case #" << k+1 << ": ";
        
        if(c<n || c>n*(n+1)/2-1)
            cout << "IMPOSSIBLE\n";
        else{
            list<int> ans = construct(n,c,1);
            logarr(ans);    //logarr is custom macro for printing stl containers
        }

    }
}
