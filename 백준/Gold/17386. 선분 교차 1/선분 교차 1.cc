#include<iostream>
 
using ll = long long;
struct Point {
    ll x;
    ll y;
};
 
ll CCW(Point A, Point B, Point C) {
    ll result = (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
 
    if (result > 0) {
        return 1;
    }
    else if (result < 0) {
        return -1;
    }
    return 0;
}
 
int main() {
    Point A, B, C, D;
 
    //L1== AB
    //L2== CD
    std::cin >> A.x >> A.y >> B.x >> B.y;
    std::cin >> C.x >> C.y >> D.x >> D.y;
 
    ll ABC = CCW(A, B, C);
    ll ABD = CCW(A, B, D);
    ll CDA = CCW(C, D, A);
    ll CDB = CCW(C, D, B);
 
 
    if ((ABC * ABD) == 0 && (CDA * CDB) == 0) {
        ll a, b, c, d;
        a = A.x;
        b = B.x;
        c = C.x;
        d = D.x;
        //B---A
        if (B.x < A.x) {
            a = B.x;
            b = A.x;
        }
        //D---C
        if (D.x < C.x) {
            c = D.x;
            d = C.x;
        }
        if (a <= d && c <= d)
            std::cout << "1\n";
        else
            std::cout << "0\n";
    }
    else if ((ABC * ABD) <= 0 && (CDA * CDB) <= 0) {
        std::cout << "1\n";
    }
    else {
        std::cout << "0\n";
    }
}
 
