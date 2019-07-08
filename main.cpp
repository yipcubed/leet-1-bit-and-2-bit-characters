#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/1-bit-and-2-bit-characters/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if (bits.size() == 0) return false;
        int n = 0;
        bool onebit = false;
        while (n < bits.size()) {
            if (bits[n] == 1) {
                onebit = false;
                n += 2;
            } else {
                onebit = true;
                n += 1;
            }
        }
        return onebit;
    }
};

void test1() {
    vector<int> v1{1, 0, 0};

    cout << "1 ? " << Solution().isOneBitCharacter(v1) << endl;

    vector<int> v2{1, 1, 1, 0};

    cout << "0 ? " << Solution().isOneBitCharacter(v2) << endl;
}

void test2() {

}

void test3() {

}