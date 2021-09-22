//print subarray ...diff between whose elements is less than or equal to 1
#include "iostream"
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    int difference = 1;
    int counter = 1;
    int i = n - 1;
    int j = 1;
    while(i>=0){
        while(j<i){
        
        if((arr[i]-arr[i-j]<=difference&&arr[i]-arr[i-j]>=0)){
            counter++;
        }
        else if((arr[i]-arr[i-j]>=-1*difference&&arr[i-j]-arr[i]>=0)){
            counter++;
        }
        j++;
    }
        i--;
    }

    cout << counter;
    return 0;
}