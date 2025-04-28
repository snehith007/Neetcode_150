//#include <iostream>
//#include <vector>
//#include <string>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> count(26, 0); // 26 letters a-z

        for (char c : s) count[c - 'a']++;
        for (char c : t) count[c - 'a']--;

        for (int freq : count) {
            if (freq != 0) return false;
        }

        return true;
    }
};

int main() {
    Solution sol;

    string s = "racecar";
    string t = "carrace";

    if (sol.isAnagram(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    string s2 = "jar";
    string t2 = "jam";

    if (sol.isAnagram(s2, t2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
