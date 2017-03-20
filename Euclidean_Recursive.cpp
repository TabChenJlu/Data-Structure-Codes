#include <iostream>
using namespace std;

int egcd_gcd(int a, int b){

	if(a%b==0){//这里来判断的时候应该用余数
		return b;
	}else{
	  return egcd_gcd(b%a,a);//之前单纯用a或者b来判断可能会导致被除数为0从而导致无法进行下一次递归，从而出现问题
	}
}

void egcd(int a,int b){
	cout<<egcd_gcd(a,b)<<endl;

}
