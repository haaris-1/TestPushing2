#include <iostream>
using namespace std;

int binarySearch(int n , int arr[] , int key)
{
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid = (e+s)/2;
        if (arr[mid]==key)
            return mid;
        else if (arr[mid]>key)
            e = mid-1;
        else 
            s=mid+1;

         
    }
    return -1;
}

int main()
{
    int key;
    int n;
    cout << "size of array = ";
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i];
    }
    cin >> key;
    cout << binarySearch(n , arr , key) << endl;


    return 0;
}