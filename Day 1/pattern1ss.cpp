/*Print upside down pyramid*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    void PatternSS(int n){
        for(int i = n; i >= 1; --i){
            for(int j = 0; j < n - i; ++j){
                cout << " ";
            }
            
            for(int j = 1; j <= 2 * i - 1; ++j){
                cout << "*";
            }
            cout << endl;
        }
    }
};


int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.PatternSS(n);

    return 0;
}