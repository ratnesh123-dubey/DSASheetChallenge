#include <bits/stdc++.h> 
void sort012(int *arr, int n){

    int s=0;
    int e=n-1;
    int m=0;

while(m<=e){
    
    if(arr[m]==0){
        swap(arr[s] , arr[m]);
            s++;
            m++;
            }
    
    else if(arr[m]==1){
            m++;
    }
            
     else if(arr[m]==2){
         swap(arr[m] , arr[e]);
            e--;    
     }
    
}

}
