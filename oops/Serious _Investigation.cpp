/*After completing some serious investigation, Arif and Simon are now chilling themselves in the Ooty Hills.*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float b,leftside,rs1,rs2;
    cin>>b>>leftside;
    rs1 = sqrt((leftside*leftside)-(b*b));
    rs2 = sqrt((leftside*leftside)+(b*b));
    cout<<fixed<<setprecision(5)<<rs1<<" "<<rs2;
    return 0;
}
