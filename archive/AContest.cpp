#include <bits/stdc++.h>

#include "../library/lib.hpp"


class AContest {
public:
    void solve(istream &in, ostream &out) {
        int a, b, c, d;
        in >> a >> b >> c >> d;

        int mmax = fmax(3 * a / 10, a - a * c / 250);
        int vmax = fmax(3 * b / 10, b - b * d / 250);

        if (mmax > vmax) out << "Misha" << endl;
        else if (mmax < vmax) out << "Vasya" << endl;
        else out << "Tie" << endl;


    }
};
