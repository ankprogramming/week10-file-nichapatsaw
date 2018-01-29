#include <iostream>
#include <fstream>
using namespace std;
        /* code */
        /*
    เขียนโปรแกรมรับค่าจำนวนเต็มบวกจากคีย์บอร์ด 2 จำนวน เก็บไว้ในตัวแปร และสลับค่าข้อมูลระหว่างตัวแปรดังกล่าว
    โดยกำหนดให้โปรแกรมสลับค่าข้อมูลจนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรมและแบ่งการทำงานของโปรแกรมเป็นโปรแกรมย่อย
    */
    float cArea (float r){
        float area;
        area = 3.1416*r*r;

        return area;}

int main() {
    float r, cmd;
    do {
        cin >> cmd;
        if (cmd == 1) {
            cin >> r;
            cout << cArea (r) <<endl;
        } else {break;}
        } while(1);
        return 0;
    }


