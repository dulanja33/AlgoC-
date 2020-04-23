#include <bits/stdc++.h>

#include "../../library/lib.hpp"

//int testNumber = 0;
void TaskA(std::istream &in, std::ostream &out) {
    //out << "Case #" << ++testNumber << ": ";

    ll n, k;
    in >> n >> k;

    if (k + (k - 1) > n) {
        ll f = k;
        while (f + (f - 1) > n) {
            f--;
        }

        f +=1;
        ll s = k - f + 1;
        out << s * 2 << endl;
    } else {
        out << k + (k - 1) << endl;
    }


}
