#include<iostream>
using namespace std;
int main()
{
	float a,b,c,i,n;
	cout<<"Enter the no. of numbers to be checked = ";
	cin>>n;
	if (n==3)
		{
	        cout<<"Enter three numbers =";
	        cin>>a>>b>>c;
	        if(a==b && a==c)
	        {
	        cout<<"Enter different values";
			}
	        else 
	            {
	            if(a >= b && a >= c)
                    cout << "Largest number: " << a;
                if(b >= a && b >= c)
                    cout << "Largest number: " << b;
                if(c >= a && c >= b)
                    cout << "Largest number: " << c;
               }
        }
    else
	    cout<<"Invalid! Have to enter only 3 numbers";    
	return 0;
}
