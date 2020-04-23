#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class GridChallenge {
public:
    void solve(istream &in, ostream &out) {
        int t;
        in >> t;
        while (t--) {
            int n;
            in >> n;
            vector<vector<int>> arr;
            for (int i = 0; i < n; ++i) {
                vector<int> a;
                for (int j = 0; j < n; ++j) {
                    char k;
                    in >> k;
                    a.push_back(k);
                }
                sort(a.begin(), a.end());
                arr.push_back(a);
            }

            int found = false;

            for (int k = 0; k < n; ++k) {
                for (int i = 0; i < n - 1; ++i) {
                    if (arr[i + 1][k] < arr[i][k]) {
                        found = true;
                        out << "NO" << endl;
                        break;
                    }
                }

                if (found) break;
            }

            if (!found) out << "YES" << endl;
        }
    }
};
