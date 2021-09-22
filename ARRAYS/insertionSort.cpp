#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"size of array = ";
    cin>>n;

    int arr[n];


    for (int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout << "Array input is "<<endl;
    for (int i = 1 ; i < n ; i++){
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout << "Sorted array is "<<endl;
    for(int k = 0 ; k < n ; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}