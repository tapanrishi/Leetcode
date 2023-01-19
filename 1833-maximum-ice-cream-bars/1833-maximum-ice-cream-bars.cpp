class Solution
{
    public:
        int maxIceCream(vector<int> &costs, int coins)
        {
            sort(costs.begin(), costs.end());
            int ans = 0;
            int i = 0;
            int sum = 0;
            for (int i = 0; i < costs.size(); i++)
            {
                sum += costs[i];
                if (sum <= coins)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
            return ans;
        }
};