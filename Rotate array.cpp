#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;    cin>>k;
    
     k=k%n;
        
        reverse(arr.begin() , arr.begin()+k);
        reverse(arr.begin()+k , arr.end());
        reverse(arr.begin() , arr.end());
    
    
    for (int it : arr){
        cout << it <<" ";
    }
    
    
    
    return 0;
}
