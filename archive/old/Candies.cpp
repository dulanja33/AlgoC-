#include <bits/stdc++.h>

#include "../../library/lib.hpp"

//int testNumber = 0;
void Candies(std::istream &in, std::ostream &out) {
    //out << "Case #" << ++testNumber << ": ";
    int n;
    in >> n;
    in.ignore();
    long arr[n];
    vector<long> sum;
    for (int i = 0; i < n; ++i) {
        in >> arr[i];
        in.ignore();
        sum.push_back(1);
    }


    for (int j = 1; j < n; ++j) {
        if (arr[j - 1] < arr[j]) {
            sum[j] += sum[j - 1];
        }
    }

    for (int j = n - 2; j >= 0; --j) {
        if (arr[j] > arr[j + 1] && sum[j] <= sum[j + 1]) {
            sum[j] = sum[j + 1] + 1;
        }
    }

    long s = 0;
    for (int k = 0; k < n; ++k) {
        s += sum[k];
    }

    out << s << endl;


}
