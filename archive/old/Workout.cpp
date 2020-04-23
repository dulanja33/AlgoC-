#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class Workout {
public:
    void solve(istream &in, ostream &out) {
        int T;
        in >> T;
        int t = 1;
        while (t <= T) {
            out << "Case #" << t << ": ";
            t++;

            int n, k;
            in >> n >> k;
            long m[n];
            for (int i = 0; i < n; ++i) {
                in >> m[i];
            }

            long diff[n - 1];
            long maxDiff = -1;
            for (int j = 0; j < n - 1; ++j) {
                diff[j] = m[j + 1] - m[j];
                maxDiff = fmax(maxDiff, diff[j]);
            }


            long lb = 1;
            long up = maxDiff;
            while (lb <= up) {
                long mid = lb + (up - lb) / 2;
                long sum = 0;
                for (int i = 0; i < n - 1; ++i) {
                    sum += (long) ceil((long double) diff[i] / mid) - 1;
                }

                if (sum < k) {
                    up = mid - 1;
                } else if (sum > k) {
                    lb = mid + 1;
                } else {
                    lb = mid - 1;
                }
            }


            out << lb << endl;

        }

    }
};
