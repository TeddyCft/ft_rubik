#include "utils.hpp"

e_move_type check_mv_type(std::string str)
{
	std::string set[13];
	set[MV_FRONT] = "F";
	set[MV_FRONT_R] = "F'";
	set[MV_BEHIND] = "B";
	set[MV_BEHIND_R] = "B'";
	set[MV_UP] = "U";
	set[MV_UP_R] = "U'";
	set[MV_DOWN] = "D";
	set[MV_DOWN_R] = "D'";
	set[MV_LEFT] = "L";
	set[MV_LEFT_R] = "L'";
	set[MV_RIGHT] = "R";
	set[MV_RIGHT_R] = "R'";
	for (size_t i = 1; i < 13; i++)
	{
		if (str == set[i])
			return ((e_move_type)i);
	}
	return (MV_NONE);
}

std::string mv_type_to_str(e_move_type type)
{
	std::string set[13];
	set[MV_FRONT] = "F";
	set[MV_FRONT_R] = "F'";
	set[MV_BEHIND] = "B";
	set[MV_BEHIND_R] = "B'";
	set[MV_UP] = "U";
	set[MV_UP_R] = "U'";
	set[MV_DOWN] = "D";
	set[MV_DOWN_R] = "D'";
	set[MV_LEFT] = "L";
	set[MV_LEFT_R] = "L'";
	set[MV_RIGHT] = "R";
	set[MV_RIGHT_R] = "R'";
	return (set[type]);
}