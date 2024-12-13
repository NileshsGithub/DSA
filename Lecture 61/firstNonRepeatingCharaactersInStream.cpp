#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

string firstNonRepating(string str)
{
    unordered_map<char, int> count;
    queue<char> q;
    string ans;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // Increase count
        count[ch]++;

        // Push in queue
        q.push(ch);

        while (!q.empty())
        {
            if (count[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}
int main()
{
    string str = "aabc";
    string result = firstNonRepating(str);
    cout << "Result: " << result << endl;  // Output the result
    return 0;
}