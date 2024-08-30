class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int cnt = 0;
        for (int i = 0, j = 0; i < seats.size(), j < students.size();
             i++, j++) {
            cnt += abs(seats[i] - students[j]);
        }
        return cnt;
    }
};