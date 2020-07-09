/* The count-and-say sequence is the sequence of integers with the first five terms as following:

1. 1

2. 11

3. 21

4. 1211

5. 111221

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. You can do so recursively, in other words from the previous member read off the digits, counting the number of digits in groups of the same digit.

Note: Each term of the sequence of integers will be represented as a string.
*/

#include<bits/stdc++.h>
using namespace std;
string count_and_say(int n) {
    string ans("1");
    if (n == 1)
        return ans;

    while (--n) {
        string temp = ans;
        ans.clear();
        int count = 1;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == temp[i + 1])
                count++;
            else {
                ans.push_back(count + '0');
                ans.push_back(temp[i]);
                count = 1;
            }
        }
    }
    return ans;
}

int main()
{
	int n;
	cin>>n;
	cout<<count_and_say(n);
}