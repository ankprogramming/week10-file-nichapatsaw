#include <iostream>
#include <fstream>
using namespace std;

int main() {
        /* code */
        ofstream myfile ("example.txt");
        if (myfile.is_open())
        {
            myfile << "This is a line.\n";
            myfile << "This is a another line.\n";
            myfile.close();
        }
        else cout << "Unable to open file";
        return 0;
}

