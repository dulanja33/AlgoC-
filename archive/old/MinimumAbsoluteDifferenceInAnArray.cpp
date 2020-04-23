#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class MinimumAbsoluteDifferenceInAnArray {
public:
    void solve(istream &in, ostream &out) {
        int n;
        in >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            in >> arr[i];
        }

        sort(arr, arr + n);

        int min = 1e9 + 1;
        for (int j = 1; j < n - 1; ++j) {
            min = fmin(min, arr[j + 1] - arr[j]);
        }

        out << min;

    }
};
