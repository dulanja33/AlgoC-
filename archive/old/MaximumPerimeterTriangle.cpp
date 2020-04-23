#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class MaximumPerimeterTriangle {
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

        int min = arr[0];
        int found = false;
        for (int j = 1; j < n - 1; ++j) {
            if (min < arr[j] + arr[j + 1]) {
                out << arr[j + 1] << " " << arr[j] << " " << min << endl;
                found = true;
                break;
            } else {
                min = arr[j];
            }
        }

        if (!found) out << -1 << endl;
    }
};
