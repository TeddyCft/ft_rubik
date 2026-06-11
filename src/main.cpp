#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "utils.hpp"
#include <vector>
#include "Cube.hpp"

bool parsing_mix(char **av, std::vector<e_move_type> &mix)
{
	std::string arg = av[1];
	std::string token;
	std::istringstream iss(arg);
	while (iss >> token)
	{
		e_move_type ret = check_mv_type(token);
		if (ret == MV_NONE)
			return (true);
		mix.push_back(ret);
	}
	return (false);
}

int main (int ac, char **av)
{
	std::vector<e_move_type> mix;
	Cube cube;
	if (ac != 2 || parsing_mix(av, mix))
	{
		std::cerr << "Error : wrong arguments." << std::endl;
		return (1);
	}
	cube.display_cube();
}