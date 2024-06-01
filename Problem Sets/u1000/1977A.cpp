#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    int inp[t][2];
    for(int i= 0; i<t;i++){
        for(int j=0; j<2;j++){
            cin >> inp[i][j];
        }
    }
    string result;

    for(int i=0; i<t;i++){
        if(inp[i][0] < inp[i][1]){
            result = "NO";
        }
        else{
            if(inp[i][0]%2 == inp[i][1]%2){
                result = "YES";
            }
            else {result  = "NO";}
        }
        cout << result <<endl;
    }
    
}