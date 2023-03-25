#include <bits/stdc++.h>
using namespace std;
//done and accepted
int main(){
    int N;
    cin >> N;
    while(N != 0){
        if(N == 3) // basse 4 works as the lowest
            cout << "4" << endl;
        else if(N < 7) // no base can work here to get a 3 in the end
            cout << "No such base" << endl;
        else{
            N -= 3;
            int result = N;
            for(int i = 2; i <= sqrt(N) ;i++){
                if(N%i == 0){
                    if(i > 3){//if i is greater than 3 we will know its i's base that works
                        result = i;
                        break;
                    }
                    else if(N/i > 3)//checks the other cases
                        result = N/i;
                }
            }
            cout << result << endl;
        }
        cin >> N;
    }
}