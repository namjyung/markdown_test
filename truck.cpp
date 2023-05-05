#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int arr[110];
    int sum=0;

    for(int i=0; i<100; i++){
        arr[i]=0;
    }
    
    for(int i=0; i<3; i++){
        int a,b; //a는 도착시간, b는 떠난시간 (a<b, 1<=a,b<=100)
        cin>>a>>b;
        for(int j=a; j<=b; j++){
            arr[j]++;
        }
    }
    for(int i=0; i<100; i++){
        if(arr[i]==1){
            sum+=60*A;
        }
        else if(arr[i]==2){
            sum+=60*B;
        }
        else sum+=60*C;
    }
    for(int i=0; i<100; i++){
        cout<<arr[i]<<' ';
    }
    cout<<sum;
}