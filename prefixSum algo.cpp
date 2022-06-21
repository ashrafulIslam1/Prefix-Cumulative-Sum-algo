#include<bits/stdc++.h>
using namespace std;

// Time complexity: 0(n) + 0(q) = 0(q+n)

int main(){

    int n;  // Range of the main array
    cin>>n;
    int arr[n];  // Main array
    int prefixsumArray[n];  // All Prefix Sum array

    for(int i=1; i<=n; i++){
        cin>>arr[i];
        prefixsumArray[i] = prefixsumArray[i-1] + arr[i];
    }

    int q;  // How many test case
    cin>>q;
    int maxx = 0;
    while(q--){
        int l; cin>>l;  // left, starting point for calculating sum
        int r; cin>>r;  // right, last point for calculating sum

        int sum = prefixsumArray[r] - prefixsumArray[l-1];  // here, for finding sum we use prefixsumArray.
        cout<<"Sum: "<<sum<<endl;

        maxx =  max(sum, maxx); // Here I am trying to get the maximum sum from all of the sum.
    }
    cout<<"Maximum sum: "<<maxx<<endl;

    return 0;
}
