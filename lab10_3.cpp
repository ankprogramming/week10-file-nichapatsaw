#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
        /* code */
        int cmd;
        string line;
        string name;
        ofstream writeFile;
        ifstream readFile;

        do
        {
            cout << "Menu" << endl;
            cout << "1.Add Student." << endl;
            cout << "2. List Student." << endl;
            cout << "3. Quit." << endl;
            cout << "Please Enter Menu :" ;
            cin >> cmd;

            if (cmd==1)
            {
               cout << "Enter Std Name :";
               cin >> name;
               writeFile.open("std.txt", fstream::app);
               if (writeFile.is_open())
               {
                   writeFile << name << endl;
                   writeFile.close();
               } else
               {
                   cout << "Unable to open file";
               }
            }else if (cmd==2){
                readFile.open("std.txt");
                if (readFile.is_open()){
                    while (getline (readFile, line)){
                        cout << line << endl;
                    }
                    readFile.close();
                }
            }else {
            break;}
        }while(1);

        return 0;
}
