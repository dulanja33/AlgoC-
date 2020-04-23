#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class AKString {
    char arr[1001];
    int freq[26] = {0};
public:
    void solve(istream &in, ostream &out) {

        int n;

        in >> n;

        in >> arr;

        int len = strlen(arr);

        for (int i = 0; i < len; ++i) {
            freq[arr[i] - 'a']++;
        }


        bool found = false;
        string s;
        for (int j = 0; j < 26; ++j) {
            if (freq[j] % n != 0) {
                out << -1 << endl;
                found = true;
                break;
            } else {
                for (int i = 0; i < freq[j] / n; ++i) {
                    s.push_back(j + 'a');
                }
            }
        }


        if (!found) {
            for (int i = 0; i < n; ++i) {
                out << s;
            }
            out << endl;
        }


    }
};
