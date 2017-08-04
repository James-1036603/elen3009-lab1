#include <iostream>
#include <complex>
#include <math.h>

using namespace std;

typedef complex<float> comType;//Typedef for complex tpye

int main(void){
	char cont='y';//Char whether the user wants to continue
	float a,b,c; //Variables to hold values of equation
	comType ans1, ans2, det;//Complex type variables

while(cont=='y'){//Answer yes, another equation will be solced
	cout<<"Enter A them B then C:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<a<<"x^2 "<<b<<"x "<<c<<" = 0"<<endl;
	det = pow(b,2) - (4*a*c);//finding the determinit
	det = sqrt(det);
	ans1=(-b + det)/(2*a);//Solving the quadtratic equation
	ans2=(-b - det)/(2*a);
	cout<<ans1<<"\t"<<ans2<<endl;
	cout<<"Compute another? y or n: ";//Ask if the user would like to solve another equation
	cin>>cont;
	}
return 0;
}
