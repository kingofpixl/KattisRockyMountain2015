#include <bits/stdc++.h>
using namespace std;
//done and accepted
bool cmp(pair<long long int, string> p1, pair<long long int, string> p2){
    if(p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first > p2.first;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<pair<long long int, string>> ranking;
        string name, standing, theRest;
        for(int i = 0; i < n; i++){
            cin >> name >> standing >> theRest;
            name.pop_back();//gets rid of the colon
            vector<int> scoring;
            for(int j = 0; j < standing.size(); j++){
                if(standing[j] == 'u'){//if its upper class push back a 3
                    scoring.push_back(3);
                    j+=5;
                }
                else if(standing[j] == 'm'){//if its middle class push back a 2
                    scoring.push_back(2);
                    j+=6;
                }
                else if(standing[j] == 'l'){//if its lower  class push back a 1
                    scoring.push_back(1);
                    j+=5;
                }
            }
            reverse(scoring.begin(), scoring.end());//reverse it because we are looking at the reverce order for the rank
            while(scoring.size() < 10){//fill it with 2's to make it easy to compare across any result
                scoring.push_back(2);
            }
                long long score = 0;
                for(int k = 0; k < 10; k++){
                    score *= 10;
                    score += scoring[k];
                }
                ranking.push_back({score,name});
        }
        sort(ranking.begin(), ranking.end(), cmp);//sorts the scores
        for(int i = 0; i < ranking.size(); i++){
            cout << ranking[i].second << endl;
        }
        cout << "==============================" << endl;
    }
    return 0;
}