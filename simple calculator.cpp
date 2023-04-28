#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double p,q;
    int a,b;
    char operation,redo;
 
     cout<<"Welcome to the calculater program vesion 1.0 by Arnab Sarkar"<<endl;
    cout<<"*****************************************************************"<<endl;
    cout<<endl<<endl<<endl;
   
    do
    {
   	    cout<<" Please enter an operation which you like to calculate (+,-,*,/,m,p,s,r)";
        cout<<"[s = swap]/[p = power of]/[m = mod]/[r = root of]:";
        cin>>operation ;
        cout<<endl<<endl;
        if(operation == 'm')
        {
        	cout<<" Please enter two numbers to apply your requested operation(";
        	cout<<operation<<"):"<<endl<<"1st num:";
        	cin>>a;
        	cout<<"2nd num:" ;
        	cin>>b;
        	cout<<endl;
    	}
    	else
    	{
    		cout<<" Please enter two numbers to apply your requested operation(";
        	cout<<operation<<"):"<<endl<<"1st num:";
       	 	cin>>p;
       		cout<<"2nd num:" ;
        	cin>>q;
        	cout<<endl;
		}

        switch (operation)
        {
        case'+':
            cout<<"The addition of two numbers ("<<p<<","<<q<<"):";
            cout<<p+q<<endl;
            break;
        case'-':
            cout<<"The substraction of two numbers ("<<p<<","<<q<<"):";
            cout<<p-q<<endl;
            break;
        case'*':
            cout<<"The multiplication of two numbers ("<<p<<","<<q<<"):";
            cout<<p*q<<endl;
            break;
        case'/':
            cout<<"The division of two numbers ("<<p<<","<<q<<"):";
            if(q==0)
            {
                cout<<"Invalid"<<endl;
            }
            cout<<(p/q)<<endl;
            break;
        case'm':
            cout<<"The modulo of two numbers ("<<a<<","<<b<<"):";
            if(b==0)
            {
                cout<<"Invalid "<<endl;
            }
            cout<<a%b<<endl;
            break;
        case'p':
            cout<<"The number"<<p<<" to the power of "<<q<<":";
            cout<<pow(p,q)<<endl;
            break;
        case's':
            cout<<"The swap of two numbers ("<<p<<","<<q<<"):";
            swap(p,q);
            cout<<"1stnumber="<<p<<"and 2nd number="<<q<<endl<<endl;
            break;
        case'r':
            cout<<"The "<<q<<"th root of number "<<p<<":";
            cout<<pow(p,(1/q))<<endl;
            break;
        default:
            cout<<"unknown command"<<endl;

        }
     
        cout<<"enter y or Y to continue:";
        cin>>redo;
        cout<<endl<<endl;
    }
    while(redo=='y'||redo=='Y');

    return 0;

}

