#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    int m;
    int t;
    int s;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0 << endl;
        return 0;
    }
   
    int num = m - s / t;
    
    cout << num << endl;



    return 0;
}
