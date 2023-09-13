class Solution {
public:
    vector<int> plusOne(vector<int>& numbers) {
        int n = numbers.size();

        for (int i = n - 1; i >= 0; --i) {
            if (numbers[i] == 9) {

                numbers[i] = 0;
            } else {

                numbers[i]++;
                return numbers;
            }
        }
        
        numbers.insert(numbers.begin(), 1);
        return numbers;
    }
};