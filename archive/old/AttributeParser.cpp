#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class AttributeParser {
public:
    void solve(istream &in, ostream &out) {
        int n, q;
        map<string, string> mp;
        in >> n >> q;
        in.ignore();

        string N[n];
        string Q[q];

        for (auto &s:N) getline(in, s);
        for (auto &s:Q) getline(in, s);

        vector<string> v;
        for (int i = 0; i < n; ++i) {
            stringstream ss(N[i]);
            string token;
            bool valFound = false;
            string vkey;
            while (getline(ss, token, ' ')) {
                if (token[0] == '<' && token[1] != '/') { //open tag
                    if(token[token.size()-1] == '>')
                        v.push_back(token.substr(1,token.size()-2));
                    else
                        v.push_back(token.substr(1, token.size()-1));
                } else if (token.substr(0, 2) == "</") { //end tag
                    v.pop_back();
                } else if (token == "=") {
                    valFound = true;
                } else {
                    if (valFound) {
                        string t;
                        for (int j = 0; j < v.size(); ++j) {
                            t += v[j];
                            if (j != v.size() - 1) t += ".";
                        }
                        string val;
                        if (token[token.size() - 1] == '>') val = token.substr(1, token.size() - 3);
                        else val = token.substr(1, token.size() - 2);
                        string key = t.append("~").append(vkey);
                        mp[key] = val;
                        valFound = false;
                    } else {
                        vkey = token;
                        valFound = true;
                    }
                }
            }
        }

        for (int k = 0; k < q; ++k) {
            if (mp.find(Q[k]) == mp.end()){
                out << "Not Found!" << endl;
            }else{
                out << mp[Q[k]] << endl;
            }
        }

    }
};
