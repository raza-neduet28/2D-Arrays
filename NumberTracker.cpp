#include<iostream>
using namespace std;
int main(){
int key,r,c;
cout<<"Enter key: ";
cin>>key;
cout<<"ROws :";
cin>>r;
cout<<"Coloums :";
cin>>c;
int arr[r][c];
for(int i=0 ;i<r ;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    
    cout<<endl;
}}
bool ifMatch=false;
for(int i=0 ;i<r ;i++){
    for(int j=0;j<c;j++){
        if(arr[i][j]==key){
            ifMatch=true;
        }
        
    }
    
}
cout<<boolalpha<<ifMatch<<endl;
}