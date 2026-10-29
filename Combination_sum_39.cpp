
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& candidates, int target, int index,
           vector<int>& current, vector<vector<int>>& result) {

    // Base case
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = index; i < candidates.size(); i++) {

        // Stop if candidate exceeds target
        if (candidates[i] > target)
            break;

        // Choose the candidate
        current.push_back(candidates[i]);

        // Same candidate can be reused
        solve(candidates, target - candidates[i],
              i, current, result);

        // Backtrack
        current.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> current;

    sort(candidates.begin(), candidates.end());

    solve(candidates, target, 0, current, result);

    return result;
}

int main() {
    int n, target;

    cout << "Enter number of candidates: ";
    cin >> n;

    vector<int> candidates(n);

    cout << "Enter candidates: ";
    for (int i = 0; i < n; i++) {
        cin >> candidates[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<vector<int>> result = combinationSum(candidates, target);

    cout << "Combinations: ";

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";

        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];

            if (j < result[i].size() - 1)
                cout << ",";
        }

        cout << "]";

        if (i < result.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

