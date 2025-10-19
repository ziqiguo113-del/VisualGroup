#include <iostream>
#include <algorithm>
using namespace std;
int my_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min_side = min(a, min(b, c));
    int max_side = max(a, max(b, c));

    int gcd_val = my_gcd(min_side, max_side);

    cout << min_side / gcd_val << "/" << max_side / gcd_val << endl;

    return 0;
}
