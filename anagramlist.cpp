#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string, vector<string>> groups;

    for (string word : strs)
    {
        cout << "\nProcessing word: " << word << endl;

        vector<int> count(26, 0);

        // Count characters
        for (char c : word)
        {
            count[c - 'a']++;
        }

        // Print frequency array (only non-zero for clarity)
        cout << "Character frequency: ";
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
                cout << char(i + 'a') << ":" << count[i] << " ";
        }
        cout << endl;

        // Build key
        string key = "";
        for (int i = 0; i < 26; i++)
        {
            key += to_string(count[i]) + "#";
        }

        cout << "Generated key: " << key << endl;

        // Insert into map
        groups[key].push_back(word);

        // Print current map state
        cout << "Current map state:\n";
        for (auto &entry : groups)
        {
            cout << "Key: " << entry.first << " -> [ ";
            for (string w : entry.second)
                cout << w << " ";
            cout << "]\n";
        }
    }

    cout << "\n===== FINAL GROUPED ANAGRAMS =====\n";
    for (auto &g : groups)
    {
        cout << "[ ";
        for (string w : g.second)
            cout << w << " ";
        cout << "]\n";
    }

    return 0;
}
