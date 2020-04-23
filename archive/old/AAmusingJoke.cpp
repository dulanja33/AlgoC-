#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class AAmusingJoke {
public:
    void solve(istream &in, ostream &out) {

        char arr[101];
        char arr2[101];
        char arr3[101];


        int f1[26] = {0};
        int f2[26] = {0};
        int p[26] = {0};

        in >> arr;
        in >> arr2;
        in >> arr3;

        for (int i = 0; i < strlen(arr); ++i) {
            f1[arr[i] - 'A']++;
        }


        for (int i = 0; i < strlen(arr2); ++i) {
            f2[arr2[i] - 'A']++;
        }


        for (int i = 0; i < strlen(arr3); ++i) {
            p[arr3[i] - 'A']++;
        }

        for (int j = 0; j < 26; ++j) {
            if (p[j] != f1[j] + f2[j]) {
                out << "NO" << endl;
                return;
            }
        }

        out << "YES" << endl;


    }
};
