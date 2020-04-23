#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class BikeTour {
public:
    void solve(istream &in, ostream &out) {
        int T;
        in >> T;
        int t = 1;
        while (t <= T) {
            out << "Case #" << t << ": ";
            t++;
            int n;
            in >> n;
            int arr[n];
            for (int j = 0; j < n; ++j) {
                in >> arr[j];
            }

            int count = 0;
            for (int i = 1; i < n - 1; ++i) {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                    count++;
                }
            }

            out << count << endl;
        }
    }
};
