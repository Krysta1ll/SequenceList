//
// Created by 王天钰 on 2022/3/31.
//
#include<iostream>
#include<cmath>
#define maxLength 100
using namespace std;
template<class DataType>//創建一個數組模板，規定數據類型為dataType
 class sequenceList{
 private:
     DataType *data;
     int length;
 //以下是定义的使用方法
 public:
     void initList(){
         this->data=new DataType[maxLength];//初始化數組
         this->length=0;
     }
     void clearList(){      //清空线性表
         this->length=0;
     }
     bool isEmpty(){          //判断是否为空表
         if(this->length==0)return true;
         else return false;
     }
     int listLength(){        //获取表长
         return length;
     }
     DataType getElem(int num){    //获取表中某一元素
         return data[num];
     }
     DataType priorElem(int num){     //获取表中某一元素的前驱
return data[num-1];
     }
     void insertData(DataType temp){    //向表中顺序添加元素
         this->data[length++]=temp;
     }
     void insertData(int num,DataType temp){   //向表中具体位置添加元素
         if(num<1||num>length+1)cout<<"ERROR"<<endl;
             DataType *q=&(data[num-1]);
             for(DataType *p=&(data[length-1]);p>=q;--p)
                 *(p+1)=*p;
                 *q=temp;
                 ++length;
     }
void deleteData(int num){    //删除表中某一元素
         if(num<1||num>length+1)cout<<"ERROR"<<endl;
         DataType *q=&(data[num-1]);
         for(DataType *p=&(data[length-1]);p>=q;++q){
             *q=*(q+1);
         }--length;
     }

     void mergeList(sequenceList<DataType>sq1,sequenceList<DataType>sq2,sequenceList<DataType>&sq3){
         DataType pa=sq1.data;
         DataType pb=sq2.data;
         sq3.length=sq1.length+sq2.length;
         DataType pc=sq3.data=new DataType[sq3.length];
         if(!sq3.data)exit(OVERFLOW);
         DataType pa_last=sq1.data+sq1.length-1;
         DataType pb_last=sq2.data+sq2.length-1;
         while(pa<=pa_last&&pb<=pb_last){
             if(*pa<=*pb)*pc++=*pa++;
             else *pc++=*pb++;
         }while(pa<=pa_last)*pc++=*pa++;
         while(pb<=pb_last)*pc++=*pb++;

     }

};

#ifndef __SEQUENCELIST_H
#define __SEQUENCELIST_H

#endif //__SEQUENCELIST_H
