#include <iostream>
using namespace std;
int gcd_gcd(int a, int b){
	while(b==0){
		int temp=a%b;
		a=b;
		b=temp;
	}
return b;
}
void gcd(){
cout<<gcd_gcd(2,102)<<endl;

}
