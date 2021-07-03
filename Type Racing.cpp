/*|In The Name Of Allah|*/
#include <Windows.h>
#include <bits/stdc++.h>

using namespace std;

const unsigned short MSB = 0x8000;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int backcolor;

//Green 10
//Red 12
//SetConsoleTextAttribute(hConsole, i);

int n;
vector < string > sentences[100];

int main(){
    SetConsoleTextAttribute(hConsole, 14);
    cout << "Maro | Studio - Type Racing\n";
    cout << "How Many Sentences you have now?\n";
    cin >> n;
    cout << "Great! so put them one by one to start the game.\n";
    for(int i = 0; i < n; i++){
        string me = "";
        while(cin >> me){
            sentences[i].push_back(me);
            if(me.back() == '.')
                break;
        }
    }
    cout << "Woohooo! Press any key to start playing!\n";
    system("PAUSE");
    system("CLS");
    cout << clock() << endl;
    for(int i = 0; i < n; i++){
        for(int target = 0; target < sentences[i].size(); target++){
            system("CLS");
            SetConsoleTextAttribute(hConsole, 14);
            cout << "Maro | Studio - Type Racing\n";
            for(int x = 0; x < sentences[i].size(); x++){
                if(x == target){
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << sentences[i][x] << " ";
                    SetConsoleTextAttribute(hConsole, 12);
                } else {
                    SetConsoleTextAttribute(hConsole, 12);
                    cout << sentences[i][x] << " ";
                }
            }
            puts("");
            string input;
            cin >> input;
            if(input == sentences[i][target]){
                Beep(555 , 55);
                continue;
            } else {
                target--;
            }
        }

    }
}


