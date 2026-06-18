// 0208 Implement Trie (Prefix Tree)
// Trie, Tree, Hash Table
// TC : O(N)
// SC : O(N)

#include <bits/stdc++.h>
using namespace std;

typedef struct TrieNode
{
    bool hasWord = false;
    TrieNode* nodes[26] = { nullptr };
} TrieNode;

class Trie {
public:
    TrieNode* root;

    Trie() 
    {
        root = new TrieNode();
    }
    
    ~Trie()
    {
        delete root;
    }

    void insert(string word) 
    {
        TrieNode* current = root;
        for (int i = 0; i < word.size(); i++)
        {
            if (current->nodes[word[i] - 'a'] == nullptr)
            {
                TrieNode* temp = new TrieNode();

                current->nodes[word[i] - 'a'] = temp;
                current = temp;
            }
            else
            {
                current = current->nodes[word[i] - 'a'];
            }
        }
        current->hasWord = true;
    }
    
    bool search(string word) 
    {
        TrieNode* current = root;

        for (int i = 0; i < word.size(); i++)
        {
            if (current->nodes[word[i] - 'a'] == nullptr)
            {
                return false;
            }
            else
            {
                current = current->nodes[word[i] - 'a'];
            }
        }
        
        return (current->hasWord);
    }
    
    bool startsWith(string prefix) 
    {
        TrieNode* current = root;

        for (int i = 0; i < prefix.size(); i++)
        {
            if (current->nodes[prefix[i] - 'a'] == nullptr)
            {
                return false;
            }
            else
            {
                current = current->nodes[prefix[i] - 'a'];
            }
        }
        
        return true;
    }
};

int main()
{

    return 0;
}
