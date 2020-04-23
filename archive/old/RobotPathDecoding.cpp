#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class RobotPathDecoding {

public:
    void solve(istream &in, ostream &out) {
        ll MD = 1e9;

        int T;
        in >> T;
        int t = 1;
        while (t <= T) {
            out << "Case #" << t << ": ";
            t++;

            string s;
            in >> s;
            ll r = 0, c = 0;

//            stack<char> ss;
//            stack<int> si;
//           // stack<char> vals;
//            string sss;
//
//            for (int j = 0; j < s.size(); ++j) {
//                if (s[j] <= '9' && s[j] >= '2')
//                    si.push(s[j] - '0');
//                else if (s[j] == '(')
//                    ss.push(s[j]);
//                else if (s[j] == ')') {
//                    string k;
//                    while (!ss.empty() && ss.top() != '(') {
//                        k.push_back(ss.top());
//                        ss.pop();
//                    }
//
//                    if (!ss.empty()) ss.pop();
//
//                    int kk = si.top();
//                    si.pop();
//                    reverse(k.begin(),k.end());
//                    while (kk > 0) {
//                        for (int i = 0; i < k.size(); ++i) {
//                            ss.push(k[i]);
//                        }
//                        kk--;
//                    }
//
//                } else if (ss.empty() && (s[j] > 'A' && s[j] < 'Z')) {
//                    ss.push(s[j]);
//                } else {
//                    ss.push(s[j]);
//                }
//            }
//
//            while(!ss.empty()){
//                sss.push_back(ss.top());
//                ss.pop();
//            }
//
//            reverse(sss.begin(),sss.end());
            //out << sss << endl;

            stack<vector<ll>> stack;
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] == 'N') {
                    c--;
                } else if (s[i] == 'S') {
                    c++;
                } else if (s[i] == 'W') {
                    r--;
                } else if (s[i] == 'E') {
                    r++;
                } else if (s[i] == '(') {
                    continue;
                } else if (s[i] == ')') {
                    vector<ll> v = stack.top();
                    r *= v[2];
                    c *= v[2];
                    r += v[0];
                    c += v[1];
                    stack.pop();
                } else {
                    ll k = s[i] - '0';
                    vector<ll> v;
                    v.push_back(r);
                    v.push_back(c);
                    v.push_back(k);
                    stack.push(v);
                    r = 0;
                    c = 0;
                }

                r = (MD + r % MD) % MD;
                c = (MD + c % MD) % MD;
            }


            out << r + 1 << " " << c + 1 << endl;
        }

    }
};
