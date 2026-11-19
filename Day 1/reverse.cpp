#include<iostream>
using namespace std;

void wwmyReverse(string &s) {

    int size = s.size();

    int left = 0;

    int right = size - 1;

    while(left < right){

        char temp = s[left];

        s[left] = s[right];

        s[right] = temp;

        ++left;
        --right;


    }

}

void reverse1(string s){

    int size = s.size();

    int left = 0;

    int right = size - 1;

    while(left < right){

        char temp = s[left];

        s[left] = s[right];

        s[right] = temp;

        ++left;
        --right;


    }

    cout << s << endl;



}

int main(){


    string s = "Hello, World!";
    cout << s << endl;
    wwmyReverse(s);
    cout << s << endl;
    reverse1(s);

    cout << s << endl; 


    return 0;
}