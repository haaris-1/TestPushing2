#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0 ; i<n ; i++)
    {
        cin>>array[i];

    }
    for (int i = 0 ; i <n ; i++)
    {
        cout << array[i]<<" ";
        
    }  
    cout << endl; 

    int maxNo , minNo;
    maxNo = INT_MIN; 
    minNo = INT_MAX;
    
    for ( int i = 0 ; i<n ; i++)
    {
        maxNo=max(array[i],maxNo);
        minNo=min(array[i],minNo);
    }

    cout << "maximum no. "<<maxNo<<endl;
    cout << "minimum no. "<< minNo<<endl;

    return 0;
}