#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class BeautifulPairs {

public:
    void solve(istream &in, ostream &out) {
        int n;
        in >> n;

        int arr[n];
        int arr2[n];

        for (int i = 0; i < n; ++i) {
            int k;
            in >> k;
            arr[i] = k;
        }

        for (int i = 0; i < n; ++i) {
            int k;
            in >> k;
            arr2[i] = k;
        }

        sort(arr, arr + n);
        sort(arr2, arr2 + n);

        int count = 0;
        int j = 0;
        int i = 0;
        while (i < n && j < n) {
            if (arr[i] == arr2[j]) {
                j++;
                i++;
                count++;
            } else if (arr[i] < arr2[j]) {
                i++;
            } else if (arr[i] > arr2[j]) {
                j++;
            }
        }

        if (n == count) out << count - 1 << endl;
        else out << count + 1 << endl;
    }
};
