# ifndef RBK_UTILS_H
# define RBK_UTILS_H

#include <iostream>

typedef enum t_move_type
{
	MV_NONE,
	MV_UP,
	MV_DOWN,
	MV_LEFT,
	MV_RIGHT,
	MV_FRONT,
	MV_BEHIND,
	MV_UP_R,
	MV_DOWN_R,
	MV_LEFT_R,
	MV_RIGHT_R,
	MV_FRONT_R,
	MV_BEHIND_R

}	e_move_type;

e_move_type check_mv_type(std::string str);
std::string mv_type_to_str(e_move_type type);

# endif