#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x1,x2,y1,y2,z1,z2,r1,r2,vx1,vx2,vy1,vy2,vz1,vz2;
        cin >> x1 >> y1 >> z1 >> r1 >> vx1 >> vy1 >> vz1;
        cin >> x2 >> y2 >> z2 >> r2 >> vx2 >> vy2 >> vz2;
        double vxDistance = vx1 - vx2, vyDistance = vy1 - vy2, vzDistance = vz1 - vz2;//gets the distance between the velocities
        double addedRadius = r1 + r2, xDistance = x1 - x2, yDistance = y1 - y2, zDistance = z1 - z2;//gets the distance between the x,y,z and adds the radius's
        //calculates the conversion to at^2 +bt + c <= 0
        double a = vxDistance * vxDistance + vyDistance * vyDistance + vzDistance * vzDistance;//dot product
        double b = 2 * (xDistance * vxDistance + yDistance * vyDistance + zDistance * vzDistance);
        double c = xDistance * xDistance + yDistance * yDistance + zDistance * zDistance - addedRadius*addedRadius;

        double d = b * b - 4 * a * c;
        double rootOne = (-b - sqrt(d)) / (2 * a);//calculates the roots
        double rootTwo = (-b + sqrt(d)) / (2 * a);
            if(a == 0){//isnt a quadratic function
                    cout << "No collision" << endl;
            }
            if(d < 0){
               cout << "No collision" << endl; 
            }
            if(rootOne > 0 || rootTwo > 0)//whatever the minimum is, is the shortest time it takes
                cout << setprecision(3) << fixed << min(rootOne,rootTwo) << endl;
            else if (rootTwo < 0)
                cout << "No collision" << endl;
        }
    return 0;
}