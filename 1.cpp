#include <iostream>

using namespace std;

typedef int ElemType;
typedef struct {
    ElemType *elem;
    int length;
    int Max;
    int increment;

}SqList;

void init_list(SqList &l,int max,int add_size){
    l.elem=new ElemType[max];
    l.Max=max;
    l.length=0;
    l.increment=add_size;

}

//int LocateElem(SqList l,ElemType e){
//    int i=1;
//    p=l.elem;
//    while(i<=l.length&&*p++==e)
//        ++i;
//    if(i<=l.length)return i;
//    else return 0;
//
//}
//void insert_list(SqList &l,int i,ElemType e){
//    if(i<1||i>l.length){
//        cout<<"错误"<<endl;
//        return;
//    }
//    if(l.length>=l.Max) increment(l);
//
//}
//void increment(SqList &l){
//ElemType elem[l.length+l.increment];
//l.elem=elem;
//}
//void delete_list(){
//
//}
//void list_all(){
//}
