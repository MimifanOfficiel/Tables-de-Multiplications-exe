#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
#include<windows.h>

using namespace std;

string lang;
int tables;
int max_value;

void defineValues(string language){
    if(language == "en") {
        cout << "How many multiplication tables do you want ?" << endl;
        cin >> tables;
        cout << "How many values multiplicated do you want ?" << endl;
        cin >> max_value;
    } else if(language == "fr") {
        cout << "Combien de tables voulez vous creer ?" << endl;
        cin >> tables;
        cout << "Combien de valeurs multipliees voulez-vous ?" << endl;
        cin >> max_value;
    } else {
        cout << "Unknown languge. Please restart program." << endl;
        cout << "Program will exit in 5s" << endl;
        Sleep(1000);
        cout << "Program will exit in 4s" << endl;
        Sleep(1000);
        cout << "Program will exit in 3s" << endl;
        Sleep(1000);
        cout << "Program will exit in 2s" << endl;
        Sleep(1000);
        cout << "Program will exit in 1s" << endl;
        Sleep(1000);
        exit(3);
        return;
    }
}

int main(){
    ofstream tfile;

    cout << "Language ? (en/fr)" << endl;
    cin >> lang;
    defineValues(lang);

    int i = 1;
    int t = 1;

    _mkdir(".\\Tables");
    string fileName = ".txt";
    while(t <= tables){
        tfile.open(".\\Tables\\" + to_string(t) + fileName);
        while (i <= max_value) {
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

