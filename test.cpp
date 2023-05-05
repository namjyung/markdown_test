#include <iostream>
using namespace std;

/*
알파벳 소문자로만 이루어진 단어 S
각 알파벳이 단어에 몇 개 포함되어있는지 구하기

*/

int main()
{
    string s;
    cin >> s; //문자열 입력받음    
   /* int arr[27];

    for(int i=0; i<26; i++){
        arr[s[i]-96]=1;
    }
    
    for(int i=1; i<27; i++){
        cout<<arr[i]<<' ';
     }*/
     for(int i=0; i<s.length(); i++){
        cout<<s[i];
     }
}