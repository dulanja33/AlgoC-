#include <bits/stdc++.h>

#include "../../library/lib.hpp"


void CManagement(std::istream &in, std::ostream &out) {
    int n;
    in >> n;
    map<int, int> mp;
    for (int i = 0; i < n - 1; ++i) {
        int k;
        in >> k;
        mp[k]++;
    }

    for (int j = 1; j <= n; ++j) {
        out << mp[j] << endl;
    }
}
