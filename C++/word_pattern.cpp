#include <stdio.h>
#include <string.h>
using namespace std;

bool wordPattern(string wordPattern, string str)
{
    std::vector<string> words(26, "");
    std::unordered_map<string, int> wordDictonary;
    int start = 0;
    int end = 0;
    for (int i = 0; i < wordPattern.size(); ++i)
    {
        end = start;
        while (end < str.size() && str[end] != ' ')
            ++end;
        std::string currentWord = str.substr(start, end - start);
        if (words[wordPattern[i] - 'a'] == "")
        {
            if (wordDictonary.find(currentWord) != wordDictonary.end())
                return false;
            words[wordPattern[i] - 'a'] = currentWord;
            wordDictonary[currentWord] = 1;
        }
        else
        {
            if (words[wordPattern[i] - 'a'] != currentWord)
            {
                return false;
            }
        }
        start = end + 1;
        if (start >= str.size())
        {
            if (i == wordPattern.size() - 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}
