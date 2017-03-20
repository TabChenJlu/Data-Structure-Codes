#ifndef LINEAR_LIST_H
#define LINEAR_LIST_H
#include <iostream>
using namespace std;

class linear_list {
private :
    int  date[100];
    int length;
    int max;
    int id;
    int temp;
public:
    linear_list(int size) {
        max=size;
        length=0;

        for(temp=0; temp<max; temp++) {
            date[temp]=-89;
        }
    }

public:
    void insert(int id,int value) {
        length++;
        max++;
        int j=0;
        for(temp=id;temp<max;temp++){
            date[max-j]=date[max-1-j];
            j++;

        }
        date[id]=value;
    }
    void change(int id,int value) {
        date[id]=value;
    }
    void delete_item(int id) {
        if(date[id]==-1){
        cout<<"����û�ж�������~~"<<endl;
        return;
        }
        length--;
        max--;
        int j=0;
        for(temp=id;temp<max;temp++){
            date[id+j]=date[id+1+j];
            j++;
        }




    }
    void search(int value) {

        for(temp=0; temp<max; temp++) {
            if(date[temp]!=-1&&date[temp]==value) {

                cout<<"���ҵ�ֵΪ: "<<value<<"\tλ���ǣ�"<<temp<<endl;
                return;
            }
        }
        cout<<"û���ҵ�"<<endl;

    }
    void list_all() {
        cout<<"Follow are all items:"<<endl;


        for(temp=0; temp<max; temp++) {
            //if(date[temp]!=-1) {
                cout<<date[temp]<<endl;
//            }
        }
    }
    void getlength() {
        cout<<"�ܳ����ǣ�"<<length;
    }
};

#endif // LINEAR_LIST_H
