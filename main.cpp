#include <iostream>
#include <fstream>
#include <string>

std::string getFilter(std::string subreddit) {
	return "reddit.com##.Post:has([href$='/r/" + subreddit + "/'])";
}

int main(int argc, char * * argv) {
	if (argc < 2) {
		std::cout << "You need to give the file name for the list of subreddits (one per line).\n";
		return -1;
	}

	std::ifstream input = std::ifstream(argv[1]);
	std::ofstream output = std::ofstream(argc == 3 ? argv[2] : "filters");
	for (std::string subreddit; std::getline(input, subreddit);) {
		output << getFilter(subreddit) + '\n';
	}
}