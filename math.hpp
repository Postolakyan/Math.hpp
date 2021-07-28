#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;
double log(double a, double b) { //This Function Calculates the logarithm of a number
		assert(b>0&&b!=1);
		assert(a>0);
		int sum, precision =5;
		double	res=0;
		for(int i=0;i<precision;i++) {
			sum=0;
			while(a>=b) {
			a/=b;
			sum++;
			}
			res+=sum* pow(10,(-1)*i);
			a = pow(a,10);
		}
			return res;
	}
int Diskr(int a, int b, int c) { //This function counts the discrimination
	int D;
       D=b*b-(4*a*c);
	if (D<0){
		cout<<"no soluction"<<endl;
		return 1;
 	} else if (D==0){
		int x=(-1*b)/2*a;
		return x;
		cout<<x<<endl;
	} else {
		int x1=((-1*b)-(sqrt(D)))/2*a;
		cout<<x1<<endl;
		return x1;
		int x2= ((-1*b)+(sqrt(D)))/2*a;
		cout<<x2<<endl;
		return x2;
		}
		return 0;
}
long long int factorial(int n) { //This Function  returns the factorial of the number
	long long int result=1;
	for(int i=1;i<=n;i++){
	result= result*i;
	}
	
	if (n==0) {
		return 1;
	}else {	
		return result;
	}
}
double radical(double x){ //This function calculates the radical of the number
	double i;
	for( i=1;i<=x/2;){
	if(x/i==i){

	return i;
			break;	
	}		
		else if(i++);
		}				
	
		return i;
}	
	
double enumber(int q) {	//This function calculates the number e with the accuracy we entered
		long double res=0;
		for(int i=0;i<q;i++) {
				res+= 1/double(factorial(i));
		}
		cout<<res<<endl;
		return res;
	}
void PI() {          //This function calculates the PI number to our given accuracy
		int n;
		long double res=0;
		cout<<"insert the precision of PI "<<endl; cin>>n;
		
		for(int i=0;i<n;i++) {
			 res+=pow(-1,i)/(2*i+1);
		}
		cout<<4*res;
	}
int radical3(int x) {  //This function calculates the cube radical of number


		int i;
		for( i=1;i<=x;){
		
			if(x== i*i*i){
			return i;
			}	else {
					i++;
				}
		}
		return 0;	
}
int Modul(int n) { // This function return the Module of Number
	if( n < 0 ) {
	n*=-1;
	}else{
	
	return n;
	}		
return n;
}
