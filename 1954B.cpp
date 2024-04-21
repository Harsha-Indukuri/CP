#include<iostream>

using namespace std;

int min_finder(int *gaps, int k){
    int min = *gaps; //initializing minimum to be the first element of the array
    for(int i =0; i<k;i++){
        if(*(gaps+i) < min){
            min = *(gaps+i);
        }
    }
    return min;
}

int ugly_maker(int *arr, int n){
    int c = *arr; //the number that repeats itself in the beautiful array; it also has to be the value of the array in the 0th entry
    int k = 0; //the number of entries that are not c
    for(int i=0;i<n;i++){ //counter to count how many entries are not c
        if(*(arr+i) != c){k++;}
    }
    if(k == 0){
        return -1;
    }
    else{
        int indices[k];
        int init = 0;
        for(int i=0;i<n;i++){
            if(*(arr+i)!=c){
                indices[init] = i+1;
                init ++;
            }
        }
        int gaps[k+1];
        gaps[0] = indices[0] - 1;
        gaps[k] = n - indices[k-1];
        int j = 1;
        while(j < k){
            gaps[j] = indices[j] - indices[j-1] - 1;
            j++;
        }
        return min_finder(gaps, k+1);
        }
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cout<<ugly_maker(arr, n)<<endl;
    }

    return 0;
}