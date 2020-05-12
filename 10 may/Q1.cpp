#include <iostream> 
using namespace std; 
  
int findSingle(int ar[], int ar_size) 
    { 
        //XOR of all the elements 
        int once = ar[0]; 
        for (int i = 1; i < ar_size; i++) 
            once = once ^ ar[i]; 
  
        return once; 
    }  
int main() 
    { 
        int ar[] = {2,4,5,3,2,5,4}; 
        int n = sizeof(ar) / sizeof(ar[0]); 
        cout << "Element occurring once is " << findSingle(ar, n); 
        return 0; 
    } 
