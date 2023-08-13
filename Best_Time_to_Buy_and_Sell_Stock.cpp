#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int maxProfit(vector<int> & prices)
{
    int buy_price = prices[0];
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
        if (prices[i] < buy_price)
        {
            buy_price = prices[i];
        }
        else
        {
            int current_profit = prices[i] - buy_price;
            profit = max(current_profit, profit);
        }
    return profit;
}

int main()
{
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);
    cout<<"The maximum profit is "<<maxProfit(prices)<<endl;
    return 0;
}
