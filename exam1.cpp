#include <iostream>
using namespace std;
int main() {
        int a,b,cmd,reusult_1,reusult_2,reusult_3,reusult_4;
        cout<<"welcome to CLI Calculator V1.00"<<endl;
        cout<<"number 1 : ";
        cout<<a;
        cout<<"number 2 : ";
        cin <<b;
        do {
                cout<<"menu\n1.+\n2.-\n3.*\n4./\n5.quit"<<endl;
        cin<<cmd;
        if(cmd==1){
                reusult_1=a+b;
                cout<<"Result = "<<result_1<<endl;
        }else if (cmd==2){
                reusult_1=a-b;
                cout<<"Result = "<<result_2<<endl;
        }else if (cmd==3){
                 reusult_1=a*b;
                cout<<"Result = "<<result_3<<endl;
        }else if (cmd==4){
                reusult_1=a/b;
                cout<<"Result = "<<result_4<<endl;
        }(break;)
    }while (1);
    return 0;
    }
