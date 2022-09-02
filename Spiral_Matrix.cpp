#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(int arr[3][3], int row, int col)
{
    int i, k = 0, l = 0;
    /* k - starting row
    l - starting column
    */

   while(k < row && l < col)
   {
    for(int i = l; i < col; i++)
    {
        cout << arr[k][i] <<" ";
    }
    k++;
    for(int i = k; i < row; i++)
    {
        cout << arr[i][col - 1] << " ";
    }
    col--;
    if(k < row)
    {
        for( i = col - 1; i >=l; i--)
        {
            cout <<arr[row - 1][i] << " ";
        }
        row--;
    }

    if(l < col)
    {
        for(i = row - 1; i >=k; i--)
        {
            cout <<arr[i][l] << " ";
        }
        l++;
    }

   }
    

    
    }

 int main()
 { 
      int arr[3][3] = {{3,6,7},{2,8,9},{1,8,3}};
      spiralMatrix(arr, 3, 3);
      return 0;
    

 }
