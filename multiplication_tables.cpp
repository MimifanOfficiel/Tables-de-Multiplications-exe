#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
using namespace std;
int main(){
    int i = 0;
    int t = 0;
    ofstream tfile;
    _mkdir(".\\Tables");
    string fileName = ".txt";
    while(t <= 25){
        tfile.open(".\\Tables\\" + to_string(t) + fileName);
        while (i <= 50) {
            tfile << t << "*" << i << " = " << t*i << endl;
            i++;
        }
        tfile.close();
        i=0;
        t++;
    }
    cout << "tout a fonctionné sans soucis." << endl;
    return 0;
}