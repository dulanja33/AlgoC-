#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class AUltraFastMathematician {
public:
    void solve(istream &in, ostream &out) {
        char arr1[101];
        char arr2[101];

        in >> arr1;
        in >> arr2;

        for (int i = 0; i < strlen(arr1); ++i) {
            if (arr1[i] != arr2[i]) {
                out << '1';
            } else {
                out << '0';
            }
        }

        out << endl;
    }
};
