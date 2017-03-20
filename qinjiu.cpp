#include<iostream>
using namespace std;//这里可以加也可以不加，这里默认是了！
int qinjiu_gcd(int a, int b){
	int temp=0;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
    temp=a-b;
	while(temp!=0){
        if(temp<b){
           a=b;
           b=temp;
		   temp=a-b;
		}else{
         a=temp;
		 temp=a-b;
		}
	}
	return a;
}
void qinjiu(){
		int a= qinjiu_gcd(8,41);
	    cout<<a<<endl;


}
