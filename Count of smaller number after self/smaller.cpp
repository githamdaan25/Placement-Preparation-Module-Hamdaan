class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> counts(nums.size(), 0);
        vector<pair<int, int>> elements;

        for (int i = 0; i < nums.size(); ++i)
       {
            elements.emplace_back(nums[i], i);
        }



        function<void(int, int)> mergeSort = [&](int left, int right) {
            if (left >= right) return;

            int mid = left + (right - left) / 2;
            mergeSort(left, mid);
            
            mergeSort(mid + 1, right);

            int j = mid + 1;
            for (int i = left; i <= mid; ++i) 
            {
                while (j <= right && elements[i].first > elements[j].first) 
                {
                   
                    j++;
                }
                counts[elements[i].second] += j - (mid + 1);
            }

            inplace_merge(elements.begin() + left, elements.begin() + mid + 1, elements.begin() + right + 1);
        };


        mergeSort(0, nums.size() - 1);


        return counts;
    }
};
