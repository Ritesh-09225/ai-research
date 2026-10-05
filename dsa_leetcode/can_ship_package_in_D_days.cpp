class Solution {
public:
        bool canShip(vector<int> &weights, int days, int capacity)
        {
            int current_load = 0;
            int used_days = 1;
            for(int weight : weights)
            {
                current_load += weight;
                if(current_load > capacity)
                {
                    used_days ++;
                    current_load = weight;
                }
            }
            if(used_days > days) return false;
            else return true;
        }

        int shipWithinDays(vector<int>& weights, int D) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        
        while (low < high) {
            int mid = (low + high) / 2;
            if(canShip(weights, D, mid)) high = mid;
            else low = mid + 1;
        }

        return low;
        
    }
};