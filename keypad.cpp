#include <bits/stdc++.h>
using namespace std;
//done and checked
char keypad[12][12];
int rowWire[12];
int colWire[12];

int main(){
    int T;
    cin >> T;
    while(T--){
        int r,c;
        cin >> r >> c;
        for(int i = 0; i < r; i++){
            cin >> keypad[i];
            rowWire[i] = 0;
        }
        for(int i = 0; i < c; i++){
            colWire[i] = 0;
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(keypad[i][j] == '1'){//wire addition to check them later
                    rowWire[i]++;
                    colWire[j]++;
                }
            }
        }
        bool possible = true;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                    if(rowWire[i] && colWire[j] && keypad[i][j] == '0'){//checks to see if we can determine where the presses could be
                        possible = false;
                        break;
                    }
            }
        }
        if(possible == false){
            cout << "impossible" << endl;
        }
        else{
            for(int i = 0; i < r; i++){
                for(int j = 0; j < c; j++){
                    if(keypad[i][j] == '0')//if theres a 0 theres no combination
                        cout << 'N';
                    else if(rowWire[i] == 1 || colWire[j] == 1)//if all combinations 
                        cout << 'P';
                    else
                        cout << 'I';//some form of combination
                }
                cout << endl;
            }
        }
        cout << "----------" << endl;
    }
    return 0;
}