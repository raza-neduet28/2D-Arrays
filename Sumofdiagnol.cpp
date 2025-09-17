#include<iostream>
using namespace std;
int main(){
    int n,primarysum=0,secondarysum=0;
cin>>n;
int arr[n][n];

for(int i =0 ;i<n;i++){
    for(int j =0 ;j<n;j++){
    cin>>arr[i][j];
}
}
  for(int i =0 ;i<n;i++){
    primarysum+=arr[i][i];
    secondarysum+=arr[i][n-i-1];
    
}  
cout<<"The absolute difference between the diagnals are : "<<abs(primarysum-secondarysum);

}