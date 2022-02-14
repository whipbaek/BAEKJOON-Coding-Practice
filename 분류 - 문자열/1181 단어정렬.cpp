#include <bits/stdc++.h>
#define pp pair<string,int> 

using namespace std;

bool compare(pp &a, pp &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(void) {
    
    int t;
    string str;
    map<string, int> m;

    cin >> t;

    while (t--) {
        cin >> str;
        m.insert(make_pair(str, str.size()));
    }

    vector<pp> vp(m.begin(), m.end());
    sort(vp.begin(), vp.end(),compare);

    for (pp val : vp) cout << val.first << "\n";

    return 0;
}