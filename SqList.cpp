#include <iostream>

#include <stdlib.h>
using namespace std;
typedef int ElemType;
//定义结构体
typedef struct {
    ElemType *elem;
    int length;
    int Max;
    int increment;

} SqList;
void ErrorMessage(char *s) {
    cout<<s<<endl;
    exit(0);
}
//初始化表
void InitList(SqList &l,int max,int add_size) {
    l.elem=new ElemType[max];
    l.Max=max;
    l.length=0;
    l.increment=add_size;
    for(int i=0; i<l.Max; i++)
        l.elem[i]=0;


}
//查找元素
int LocateElem(SqList l,ElemType e) {
    int i=1;
    int *p=l.elem;

    while(i<=l.length&&l.elem[i]!=e) {
        p++;
        i++;
    }
    if(i<=l.length)
        return i+1;
    else return 0;

}
//新增元速度
void increment(SqList &l) {
    ElemType *elem=new ElemType[l.increment+l.length];
    for(int i=0; i<l.length; i++) {
        elem[i]=l.elem[i];
    }
    l.elem=elem;
    l.Max=l.length+l.increment;
}
//插入元素。i指的是,把第i后的全后移一个然后将e放入
void insert_item(SqList &l,int i,ElemType e) {
    if(i<1||i>l.length+1) {
        ErrorMessage("Error Input");
        return;
    }
    if(l.length>=l.Max) increment(l);
    int *q,*p;
    q=&(l.elem[i-1]);
    for(p=&(l.elem[l.length-1]); p>=q; --p) *(p+1)=*p;
    *q=e;
    l.length++;
}
//删除元素
void delete_item(SqList &l,int i,ElemType &e) {
    e=l.elem[i-1];
    int *p=&l.elem[i-1],*q;
    for(q=&l.elem[l.length-1]; q>p;) {
        *(p)=*(p+1);
        p++;
    }
    l.length--;

}
//输出表
void list_all(SqList l) {
    for( int i=0; i<l.length; i++)
        cout<<l.elem[i]<<endl;
}
//就地逆置
void flip(SqList &l,int a,int b) {

    if(b<a) {
        int tempa=a;
        b=a;
        a=tempa;
    }
    ElemType temp;
    for(int i=0; i<(b-a)/2; i++) {
        temp=l.elem[a+i-1];
        l.elem[a+i-1]=l.elem[b-i-1];
        l.elem[b-i-1]=temp;
    }
}
//调试代码
//int main() {
//    SqList me;
//    ElemType a;
//    InitList(me,5,5);
//    cout<<"The Max Length Is:"<<me.Max<<endl;
//    insert_item(me,1,1);
//    insert_item(me,1,2);
//    insert_item(me,1,3);
//    insert_item(me,1,4);
//    insert_item(me,1,5);
//    insert_item(me,1,6);
//    insert_item(me,1,7);
//    insert_item(me,1,8);
//    insert_item(me,1,9);
//    insert_item(me,1,10);
//    insert_item(me,1,11);
//    //a=3;
//    //delete_item(me,1,a);
//    list_all(me);
//    //cout<<"Delete Item Is :"<<a<<endl;
//    cout<<"The Max Length Is:"<<me.Max<<endl;
//    return 0;
//}


