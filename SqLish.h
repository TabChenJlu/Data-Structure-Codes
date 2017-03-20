#ifndef SQLISH_H_INCLUDED
#define SQLISH_H_INCLUDED
typedef int ElemType;
typedef struct {
    ElemType *elem;
    int length;
    int Max;
    int increment;

} SqList;
void ErrorMessage(char *s);
void InitList(SqList &l,int max,int add_size);
int LocateElem(SqList l,ElemType e);
void increment(SqList &l);
void insert_item(SqList &l,int i,ElemType e);
void delete_item(SqList &l,int i,ElemType &e);
void list_all(SqList l);
void flip(SqList &l,int a,int b);


#endif // SQLISH_H_INCLUDED
