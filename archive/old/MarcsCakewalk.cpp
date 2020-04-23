#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class MarcsCakewalk {
public:
    void solve(istream &in, ostream &out) {
        int n;
        in >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            in >> arr[i];
        }

        sort(arr, arr + n);
        reverse(arr, arr + n);

        long min = 0;
        long mul = 1;
        for (int j = 0; j < n; ++j) {
            min += arr[j] * mul;
            mul *= 2;
        }

        out << min << endl;

    }

};
