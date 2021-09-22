#include "iostream"
using namespace std;

int minIdx(int arr[],int n,int i){
    if(i==n-1){
        return i;
    }

    int k = minIdx(arr, n, i + 1);

    if(arr[k]<arr[i]){
        return k;
    } else {
        return i;
    }
}

void selectionSortRec(int arr[],int n,int i){
    if(i==n-1){
        if(arr[i-1]>arr[n-1]){
            swap(arr[i - 1], arr[n - 1]);
        }
        return;
    }

    int k = minIdx(arr,n , i + 1);

    if(k!=i){
        swap(arr[k], arr[i]);
    }

    selectionSortRec(arr, n, i + 1);
}

int main(){

    int arr[] = {5, 3, 9, 4, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSortRec(arr, n, 0);

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}