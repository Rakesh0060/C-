#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,i,s=0;
	cout<<"enter the num=";
	cin>>a;
	for(i=1;i<a;i++){
		if(a%i==0){
			s+=i;	
			
		}
		
	
	}
	if(a==s){
		cout<<"perfect number";
	
	}
	else{
		cout << "not perfect nuumeber";
	}
}//rakesh
