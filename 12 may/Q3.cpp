#include <iostream> 
#include<stdio.h>
using namespace std;   
#define col 4
#define row 3 
int oddColumn(int arr[row][col]) 
{  
    int count = 0;
    int sum[col] = { 0 }; 
    
    for (int i = 0; i < col; i++)
        for (int j = 0; j < row; j++)
            sum[i] += arr[j][i];   
    
    for (int i = 0; i < col; i++)
        if (sum[i] % 2 == 1)
            count++;    
    return count; 
} 
int main() 
{ 
    int arr[row][col] = { { 0, 0, 1, 0 }, { 1, 0, 1, 0 }, { 0, 1, 0, 1 } }; 
    cout << "Sum of columns having odd 1's is : "<<oddColumn((arr)); 
    return 0; 
} 
