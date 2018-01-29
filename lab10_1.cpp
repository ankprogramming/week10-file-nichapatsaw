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
    เขียนโปรแกรมรับค่าจำนวนเต็มบวกจากคีย์บอร์ด 2 จำนวน เก็บไว้ในตัวแปร และสลับค่าข้อมูลระหว่างตัวแปรดังกล่าว
    โดยกำหนดให้โปรแกรมสลับค่าข้อมูลจนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรมและแบ่งการทำงานของโปรแกรมเป็นโปรแกรมย่อย
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
