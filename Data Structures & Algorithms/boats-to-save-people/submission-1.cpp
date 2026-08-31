class Solution {
   public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int s = 0, l = people.size() - 1;
        int count = 0;
        while (s <= l) {
            if (people[s] + people[l] <= limit) {
                count++;
                s++;
                l--;
            } else if (people[s] + people[l] > limit) {
                count++;

                l--;
            }
        }
        return count;
    }
};