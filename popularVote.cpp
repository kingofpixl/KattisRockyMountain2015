#include <bits/stdc++.h>
using namespace std;
//submitted and accepted
int main(){
    int T, n, vote;
    cin >> T;
    while(T--){
        int bestVote = 0, index, sum = 0;
        bool tie = true;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> vote;
            sum += vote;
            if(vote > bestVote){
                bestVote = vote;
                index = i;
                tie = false;
            }
            else if(bestVote == vote)
                tie = true;
        }
        if(tie == true)
            cout << "no winner" << endl;
        else if(bestVote > sum/2)
            cout << "majority winner " << index+1 << endl;
        else
            cout << "minority winner " << index+1 << endl;
    }
}