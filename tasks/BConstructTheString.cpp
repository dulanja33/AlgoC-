#include <bits/stdc++.h>

#include "../library/lib.hpp"


class BConstructTheString {
public:
    void solve(istream &in, ostream &out) {
        int T;
        in >> T;

        while (T--) {
            int n, a, b;
            in >> n >> a >> b;

            vector<int> arr(a + 1);
            arr[0] = b - 1;
            for (int i = 1; i <= b; ++i) {
                arr[i] = i - 1;
            }

            for (int i = b + 1; i < a; ++i) {
                arr[i] = b - 1;
            }

            for (int j = 1; j <= n; ++j) {
                out << (char) (arr[j % a] + 'a');
            }

            out << endl;
        }
    }
};
