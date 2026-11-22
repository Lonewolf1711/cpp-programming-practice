/*From a Given string remove star and the character that came before star and print the remaining string*/


#include<bits/stdc++.h>
using namespace std;

string removeStars(string s){
    string res = "";
    for(char c : s){
        if(c == '*'){
            if(!res.empty()){
                res.pop_back();
            }
        }else{
            res.push_back(c);
        }
    }
    return res;
}

int main(){
    string n;
    cin >> n;
    cout << "Result : " << removeStars(n) << endl;
    return 0;
}
