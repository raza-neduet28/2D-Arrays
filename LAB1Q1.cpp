#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no of rows :";
    cin>>r;
    cout<<"Enter no of column :";
    cin>>c;
    int arr[r][c],onearr[r*c],n=0;
    for(int i=0;i<r;i++){
        for(int j=0 ;j<c;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0 ;j<c;j++){
            onearr[n++]=arr[j][i];
        }
    }
     for(int i=0;i<n;i++){
        cout<<onearr[i]<<" ";
        }
}