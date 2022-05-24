#include "FileOutputResult.h"

void FileOutputREsult(std::vector<std::shared_ptr<WordInContext>>& context_case)
{
	if (context_case.empty())
	{
		std::cout << "No permutations found." << std::endl;
		system("pause");
		return;
	}
	std::ofstream FileRecorder = CheckFileOutput();
	for (int i = 0; i < context_case.size(); i++)
		FileRecorder << context_case[i]->ReturnPermutations();
}
