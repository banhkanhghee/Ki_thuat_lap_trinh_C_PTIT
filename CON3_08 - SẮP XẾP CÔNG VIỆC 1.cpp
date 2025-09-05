#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> si(n), fi(n);
        for (int i = 0; i < n; i++) cin >> si[i];
        for (int i = 0; i < n; i++) cin >> fi[i];

        vector<pair<int,int>> activities;
        for (int i = 0; i < n; i++) {
            activities.push_back({si[i], fi[i]});
        }

        // sắp xếp theo thời gian kết thúc
        sort(activities.begin(), activities.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });

        int count = 1;
        int last_finish = activities[0].second;
        for (int i = 1; i < n; i++) {
            if (activities[i].first >= last_finish) {
                count++;
                last_finish = activities[i].second;
            }
        }

        cout << count << endl;
    }
}
