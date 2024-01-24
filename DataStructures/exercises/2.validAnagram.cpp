//Difficult:WarmUp
// exercise : https://leetcode.com/problems/valid-anagram/description/
#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        multiset<char> dictionary;
        for (const auto &c : s)
        {

            dictionary.insert(c);
        }
        for (const auto &c : t)
        {
            auto iter = dictionary.find(c);

            if (iter == dictionary.end())
                return false;

            if (iter != dictionary.end())
            {
                dictionary.erase(iter);
            }
        }
        if (dictionary.empty())
        {
            return true;
        }
        return false;
    }
};

/* 
Here's the breakdown of the complexity:
1. loop 1 (for each character in 's')
    - Insert operation in the multiset: In the worst case, it is O(log(n))
    where n is the size of current multiset and this make n times  so O(nlog(n))
2. loop 2(for each caracter in t )
    -find operation in a multiset: in the worst case it's O(log(n)) and this make n times
    So O(nlog(n))
    -erase operation is equal a find in the worst case so O(log(n))
3. empty operation in a multiset is O(1)

complexity time O(nlog(n))

*/

//More efficient
/* class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int slen = s.length();
        int tlen = t.length();

        int arr[26] = {0};

        for(int i = 0; i < tlen; i++)
        {
            arr[t[i]-'a']++;
        }

        for(int i = 0; i < slen; i++)
        {
            arr[s[i]-'a']--;
        }

        for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
        {
            if(arr[i] != 0)
            {
                return false;
            }
        }
        if(slen == tlen)
        {
            return true;
        }
        return false;
    }
}; */



// driver Code
int main()
{
    Solution s;
    cout << s.isAnagram("anagram", "nagaram"); // true
    cout<<s.isAnagram("rat","car");
    return 0;
}