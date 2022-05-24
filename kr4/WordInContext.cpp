#include "WordInContext.h"

int WordInContext::GetNUmberOfPermutations()
{
    return words_2.size() - 1;
}

bool WordInContext::CompareContext(std::string word1, std::string word3)
{
    return word_1 == word1 && word3 == word_3;
}

void WordInContext::AddPermutation(std::string word2)
{
    words_2.push_back(word2);
}

std::string WordInContext::ReturnPermutations()
{
    std::string result;
    if (words_2.size() - 1 > 0)
    {
        for (int i = 0; i < words_2.size(); i++)
            result += word_1 + "\t" + words_2[i] + "\t" + word_3 + "\n";
        result += "Prmutation count = " + std::to_string(words_2.size() - 1) + "\n";
    }
        
    return result;
}

void WordInContext::Show()
{
    if (words_2.size() - 1 > 0)
    {
        for (int i = 0; i < words_2.size(); i++)
            std::cout << word_1 << "\t" << words_2[i] << "\t" << word_3 << std::endl;
        std::cout << "Prmutation count = " << words_2.size() - 1 << "\n" << std::endl;
    }
}
