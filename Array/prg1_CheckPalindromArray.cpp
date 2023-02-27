#include<iostream>
#include<bits/stdc++.h>
using namespace std; 


/*    ***Krishna the Coder***   
      Problem => creating a Array 
      Task1) Creating  Character array 
      Task2) finding length 
      Task3) Reversing 
      Task4) Check Palindrom 
      Resultent => Character array is palindrom ya not 

      */
 char tolowercase(char ch){
    if (ch>='a'&& ch<='z'){
        return ch;
    } else{
        char temp= ch-'A'+'a';
    return temp;
    }
 };
bool chekpalindrom(char name[], int n){
   int s=0;
   int e=n-1;
   while(s<=e){
    if(tolowercase(name[s])!=tolowercase(name[e])){
 return 0;
    } 
    else{s++;
    e--;
    } 
    return 1;
   }
};
void reverse(char name[], int n){
int s=0;
int e=n-1;
while(s<e){
    swap(name[s++],name[e--]);
}
};
int getLength(char name[]){ 
    int count=0;
for(int i=0;name[i] != '\0';i++){
    count++;
} return count;
};
int main(){
    char name[20];
    cout<<"enter your name:  ";
    cin>>name;
    cout<<" your name is "<<name<<endl;
    
  cout<<" length is :"<<getLength(name)<<endl; 

  int len=getLength(name);
  reverse(name,len);
 cout<< "your ulta name is   "<<name<<endl;

 cout<<" palindrom or not "<<chekpalindrom(name,len);
    return 0;
}
