#include<iostream>
using namespace std;
int main(){
    int n,m,i,arr[300000];
    cin >> n >> m;
    arr[0]=0;
    for(i=1;i<=m;i++){
        cin >> arr[i];
    }
    long long ctr=0,c=0;
    for(i=1;i<m;i++){
        if(arr[i]>arr[i+1]){
            ctr=ctr+n-1+c;
            c=1;
        }
    }
    if(arr[m-1]<=arr[m]){
        ctr=ctr+arr[m]-1+c;
    }
    else{
        ctr=ctr+arr[m];
    }
    cout << ctr;
    return 0;
}
