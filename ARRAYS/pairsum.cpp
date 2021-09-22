#include <iostream>
using namespace std;

bool pairsum(int arr[] , int n , int k)
{
    int low = 0;
    int high = n-1;
    for(int i=0; i<n-1 ; i++)
    {
        for (int j=i+1 ; j<n ; j++ )
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
            else if (arr[i]+arr[j]>k)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
    }
    return false;
}

int main()
{
    int n ; 
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int k = 12;
    

    cout<<pairsum(arr,n,k);

    return 0;
}