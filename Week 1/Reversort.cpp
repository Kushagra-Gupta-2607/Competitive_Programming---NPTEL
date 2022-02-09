#include <bits/stdc++.h>
using namespace std;


/* Problem - Reversort (Google Code Jam 2021)
https://bit.ly/NPTEL-cs99-W01-Mod1-problem

The cost of the reverse operation is the length of the sub-array being reversed.
Our task is to compute the "total cost" of reverse sorting an array.
*/

int reversort(vector<int> v){

  int cost = 0, n = v.size();
  
  for(int i = 0; i<n-1; i++){
    // index of the minimum element in the "rest of the array":
    auto idx = min_element(v.begin()+i, v.end());

    reverse(v.begin()+i, idx+1);
    cost += idx-v.begin() -i+1;

  }
  return cost;
}


int main(){

    std::ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for(int k = 0; k<t; k++){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++)
            cin >> v[i];

        cout << "Case #" << k+1 << ": " << reversort(v) << endl;

    }
}
