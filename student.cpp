#include <iostream>
using namespace std;

struct Student{
    int id;
	int age;
	int score;
	char name[20];
	string gender;
};
struct Student stu[]={
{3280,22,33,"张三","男"},
{3321,23,99,"李四","男"},
{3320,23,70,"王一","男"},
{3320,34,88,"陈二","男"},
{3320,21,98,"马九","男"},
{3320,20,78,"猴四","男"},
{3320,23,89,"鸡七","男"},
{3320,23,92,"龙五","男"},
{3320,23,77,"蛇十","男"},
{3320,34,80,"猪六","男"},
};

void student(){
	int number=sizeof(stu)/sizeof(stu[0]);
//排序
    cout<<"学号:\t"<<"年龄:\t"<<"姓名:\t"<<"分数:\t"<<"性别:\t"<<endl;
	for(int a=0;a<number;a++){

		 int max=stu[a].score;
		 int maxNumber=a;

		 for(int j=a;j<number;j++){

			 if(max<=stu[j].score){
				 max=stu[j].score;
				 maxNumber=j;
			 }
		 }
		 struct Student temp=stu[a];
		 stu[a]=stu[maxNumber];
		 stu[maxNumber]=temp;
	}
    for(int s=0;s<number;s++){//输出
	    cout<<stu[s].id<<"\t"<<stu[s].age<<"\t"<<stu[s].name<<"\t"<<stu[s].score<<"\t"<<stu[s].gender<<endl;
	}

 }

