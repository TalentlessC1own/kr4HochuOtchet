#pragma once
#include <iostream>
#include <vector>
#include <string>
class WordInContext 
{
private:
	std::string word_1;
	std::vector<std::string> words_2;
	std::string word_3;

public:
	WordInContext(std::string word1, std::string word2, std::string word3)
		: word_1(word1), word_3(word3)
	{
		words_2.push_back(word2);
	}

	int GetNUmberOfPermutations();

	bool  CompareContext(std::string word1, std::string word3);

	void AddPermutation(std::string word2);

	std::string ReturnPermutations();

	void Show();
	
	~WordInContext () = default;

};

