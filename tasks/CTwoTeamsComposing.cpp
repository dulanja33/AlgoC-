#include <bits/stdc++.h>

#include "../library/lib.hpp"


class CTwoTeamsComposing {
public:
    void solve(istream &in, ostream &out) {

        int T;
        in >> T;
        while (T--) {
            int n;
            in >> n;
            map<int, int> mp;

            for (int i = 0; i < n; ++i) {
                int k;
                in >> k;
                mp[k]++;
            }

            int mx = -1;
            for(auto n: mp){
                mx = fmax(mx,n.second);
            }

            if(mp.size() > mx) out << mx << endl;
            else if(mp.size() == mx) out << mx -1 << endl;
            else out << mp.size() << endl;

        }

    }
};
