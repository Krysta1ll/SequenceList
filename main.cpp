#include <iostream>
#include"sequenceList.h"
using namespace std;
int main() {
sequenceList<int> temp;
temp.initList();
temp.insertData(5);
temp.insertData(6);
temp.insertData(3,8);
for(int i=0;i<temp.listLength();i++){
    cout<<temp.getElem(i)<<endl;
}
cout<<temp.listLength()<<endl;
temp.deleteData(2);
    for(int i=0;i<temp.listLength();i++){
        cout<<temp.getElem(i)<<endl;
    }
    return 0;
}
