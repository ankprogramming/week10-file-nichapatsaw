#include <iostream>
using namespace std;

void swap (int * a, int * b) {
        int Nicha;
        Nicha = * a;
        * a = * b;
        * b = Nicha;
    }
int main() {
        /* code */
    int  a,b,cmd;

    /*
    ��¹������Ѻ��Ҩӹǹ����ǡ�ҡ������� 2 �ӹǹ �����㹵���� �����Ѻ��Ң����������ҧ����ôѧ�����
    �¡�˹�����������Ѻ��Ң����Ũ����Ҽ����ҹ��ͧ����͡�ҡ��÷ӧҹ�ͧ���������觡�÷ӧҹ�ͧ����������������
    */
    cin >> a;
    cin >> b;
    do{
        cout << "menu\n1.swap()\n2.quit()"<< endl;
        cin >> cmd;
        if (cmd==1){
            swap (&a,&b);
            cout << a << b;
        }else {break;}
    }while(1);
        return 0;
}
