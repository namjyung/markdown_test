#include <iostream>
using namespace std;

int main()
{
    string s;
    int arr[27];
    
    cin >> s; //문자열 입력받음    
    for(int i=0; i<26; i++){
        arr[s[i]-96]=1;
    }
    
    for(int i=0; i<26; i++){
        cout<<arr[i]<<' ';
     }
}