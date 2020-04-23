#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class BSortedAdjacentDifferences {
public:
    void solve(istream &in, ostream &out) {


        int T;
        in >> T;
        while (T--) {
            int n;
            in >> n;
            long arr[n];
            for (int i = 0; i < n; ++i) {
                in >> arr[i];
            }

            sort(arr, arr + n);
            vector<int> ans;
            int p = 0;
            int q = n - 1;
            while (p <= q) {
                ans.push_back(arr[p]);
                if (p < q) ans.push_back(arr[q]);
                p++;
                q--;
            }

            reverse(ans.begin(), ans.end());

            for (int j = 0; j < n; ++j) {
                out << ans[j];
                if (j != n) out << " ";
            }

            out << endl;

        }
    }
};
