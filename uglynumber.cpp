//ugly number means a positive number whose prime factors have only 2,3,5
#include<bits/stdc++.h>
using namespace std;
int ugly(int n){
	if(n<=0){
		return false;
	}
	while(n%2==0){
		n=n/2;
	}
	while(n%3==0){
		n=n/3;
	}
	while(n%5==0){
		n=n/5;
	}
	if(n==1){
		return true;
	}
	return false;
}
int main(){
	int n,x;
	cin>>n;
	x=ugly(n);
	if(x==1){
		cout<<"Ugly Number";
	}
	else{
		cout<<"Not Ugly Number";
	}
}