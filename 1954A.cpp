#include<iostream>
//link to problem: https://codeforces.com/problemset/problem/1954/A

using namespace std;

void alice_wins(int n, int m, int k){
    int reps = n/m; //integer division always rounds down
    int max_reps;
    if(n % m == 0){
        max_reps = reps;
    }
    else{
        max_reps = reps+1;
    }
    if(k < n - max_reps){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    int inp[t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin >> inp[i][j];
        } 
    }
    for(int i=0; i<t; i++){
        alice_wins(inp[i][0], inp[i][1], inp[i][2]);
    }
    return 0;
}
