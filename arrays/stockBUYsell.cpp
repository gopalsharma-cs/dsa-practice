class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int best = 0;
        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            best = max(best, prices[i] - minPrice);
        }
        return best;
    }
};

//     int maxProfit(vector<int>& prices) {
//         int mn = INT_MAX;
//         int mx = INT_MIN;
//         int j = 0;                          
//         for (int i = 0; i < prices.size(); i++) {   
//             if (prices[i] < mn) {
//                 mn = prices[i];
//                 j = i;                      
//             }
//         }
//         for (; j < prices.size(); j++) {    
//             if (prices[j] > mx) {
//                 mx = prices[j];
//             }
//         }
//         return mx - mn;
//     }
// };