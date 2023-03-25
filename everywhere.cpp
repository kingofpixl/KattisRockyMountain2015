#include <bits/stdc++.h>
using namespace std;
//tested and passed
int main(){
    set<string> locations;//stores locations, because its a set itll only store different ones
    int T,workTrips;
    string cities;
    cin >> T;
    while(T--){
        cin >> workTrips;
        for(int i = 0; i < workTrips; i++){
            cin >> cities;
            locations.insert(cities);
        }
        cout << locations.size() << endl;
        locations.clear();
    }
    return 0;
}