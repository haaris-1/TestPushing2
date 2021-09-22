#include "bits/stdc++.h"
using namespace std;
void mergeArray(int a1[],int a2[],int n,int m){
    sort(a1, a1 + n);
    sort(a2, a2 + m);

    float N=n+m;
    int i=0;
    while(N>=1){

    }



}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;

    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }cout<<endl;

    return 0;
}