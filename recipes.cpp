#include <bits/stdc++.h>
using namespace std;
//done and accepted
struct Ingredient{
    string name;
    double weight;
    double percentage;
};

int main(){
    int T;
    cin >> T;
    int recipes = 1;
    while(T--){
        int R;
        double P, D;
        double scaling;
        vector<Ingredient> items;
        cin >> R >> P >> D;
        for(int i = 0; i < R; i++){
            Ingredient ing;
            cin >> ing.name >> ing.weight >> ing.percentage;
            if(ing.percentage == 100.0){
                scaling = (D/P) * ing.weight;//gets scaling factor
            }
            items.push_back(ing);
      }
      cout << "Recipe # " << recipes++ << endl;
      for(int j = 0; j < R; j++){
          cout << setprecision(1) << fixed << items[j].name <<" ";
          cout << scaling * (items[j].percentage/100) << endl;
      }
      cout << "----------------------------------------" << endl;
    }
}