/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1

22

333

4444

55555

Print the pattern in the function given to you.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void Pattern4(int n){
        for(int i = 1; i < n; ++i){
            for(int j = 1; j <= i; ++j){
                cout << i;
            }
            cout << endl;
        }
    }
};


int main(){
    int n;
    cin >> n;

    Solution sol;
    sol.Pattern4(n);
    return 0;
}