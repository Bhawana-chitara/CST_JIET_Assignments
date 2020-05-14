#include<stdio.h>
#include<iostream>
using namespace std; 
int search(int mat[3][3], int n, int x) 
{ 
    if (n == 0) 
        return -1; 
        
    for(int i = 0; i < n; i++) 
    { 
        for(int j = 0; j < n; j++)  
        if(mat[i][j] == x) 
        { 
            cout<<"Element found at ("<<i<<", "<<j<<")"<<endl; 
            return 1; 
        } 
    }  
    cout <<n<<" Element not found"; 
    return 0;  
} 
int main() 
{ 
    int mat[3][3] = { { 10, 20, 30 }, 
                      { 25, 35, 45 }, 
                      { 27, 37, 48 }};                       
    search(mat, 3, 37);  
    return 0; 
} 
