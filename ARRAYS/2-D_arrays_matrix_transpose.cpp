#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n];

    for (int i =0 ; i < n ; i++)
    {
        for (int j=0 ; j<n ; j++)
            cin>>a[i][j];
    }

    cout<<"Given matrix is "<<endl;

    for (int i =0 ; i < n ; i++)
    {
        for (int j=0 ; j<n ; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    cout<<"Transpose of given matrix is"<<endl;
    for (int i =0 ; i <n ; i++)
    {
        //swap element other than 
        for (int j=i ; j<n ; j++)
        {  
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            
        }
        
    }

    for (int i = 0 ; i<n ; i++)
    {
        for (int j = 0 ; j<n ; j++)
                cout<<a[i][j]<<" ";

        cout<<endl;
    }
    
    return 0;
}