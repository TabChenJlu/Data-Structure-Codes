#ifndef LINEARLIST_H_INCLUDED
#define LINEARLIST_H_INCLUDED
#include <iostream>
using namespace std;
typedef int T;
class LinearList {
private:
    int MaxSize;
    int length;
    T *element;
public :
    LinearList(int MaxListSize) {
        MaxSize=MaxListSize;
        length=0;
        element=new T[MaxListSize];
    }
    bool find_item(int k,T &item) {
        if(k<0||k>length-1||length==0) {
            cout<<"元素不存在"<<endl;
            return false;
        }
        item=element[k];
        return true;
    }
    int search_item(const T &item) {
        for(int i=0; i<length; i++)
            if(element[i]==item)return i;
        return -1;
    }
    void delete_item(int k, T &item) {
        if(find_item(k,item)) {
            for(int i=k+1; i<length; i++)
                element[i-1]=element[i];
            length--;
        }

    }

    void insert_item(int k,const T &item) {
        if(IsFull()) {
            cout<<"注意表已经满了！！"<<endl;
            return;
        }



        for(int i=length-1; i>=k+1; i--)
            element[i+1]=element[i];
        element[k+1]=item;


        length++;




    }
    bool IsFull() {
        return length>=MaxSize;
    }
    void list_all() {
        cout<<"下面是所有元素:"<<endl;
        for(int i=2; i<length+2; i++)
            cout<<(element[i])<<endl;
    }

};


#endif // LINEARLIST_H_INCLUDED
