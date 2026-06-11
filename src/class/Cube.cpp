#include "Cube.hpp"
#include <iostream>

//= Operator overloader
Cube	&Cube::operator=(const Cube &og)
{
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 9; j++)
			this->_face[i][j] = og._face[i][j];
	}
	return (*this);
}

//Copy constructor
Cube::Cube(const Cube &copy)
{ *this = copy ; }

//Default constructor
Cube::Cube(void)// : args(0), ...
{
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 9; j++)
			this->_face[i][j] = (t_rbk_clr)i;
	}
}

//Destructor
Cube::~Cube(void)
{}

void	Cube::display_cube(void)
{
	const char clr[6] = {'W', 'Y', 'R', 'O', 'B', 'G'};
	std::array<e_rbk_clr, 9> f_f, f_b, f_u, f_d, f_l, f_r;
	f_f = this->_face[FACE_F];
	f_b = this->_face[FACE_B];
	f_u = this->_face[FACE_U];
	f_d = this->_face[FACE_D];
	f_l = this->_face[FACE_L];
	f_r = this->_face[FACE_R];

	std::cout << "       " << clr[f_u[POS_TOP_LEFT]] << " " << clr[f_u[POS_TOP]] << " " << clr[f_u[POS_TOP_RIGHT]] << std::endl;
	std::cout << "       " << clr[f_u[POS_LEFT]] << " " << clr[f_u[POS_MID]] << " " << clr[f_u[POS_RIGHT]] << std::endl;
	std::cout << "       " << clr[f_u[POS_BOT_LEFT]] << " " << clr[f_u[POS_BOT]] << " " << clr[f_u[POS_BOT_RIGHT]] << std::endl;
	
	std::cout << clr[f_l[POS_TOP_LEFT]] << " " << clr[f_l[POS_TOP]] << " " << clr[f_l[POS_TOP_RIGHT]] << "  " << clr[f_f[POS_TOP_LEFT]] << " " << clr[f_f[POS_TOP]] << " " << clr[f_f[POS_TOP_RIGHT]] << "  " << clr[f_r[POS_TOP_LEFT]] << " " << clr[f_r[POS_TOP]] << " " << clr[f_r[POS_TOP_RIGHT]] << "  " << clr[f_b[POS_TOP_LEFT]] << " " << clr[f_b[POS_TOP]] << " " << clr[f_b[POS_TOP_RIGHT]] << std::endl;
	std::cout << clr[f_l[POS_LEFT]] << " " << clr[f_l[POS_MID]] << " " << clr[f_l[POS_RIGHT]] << "  " << clr[f_f[POS_LEFT]] << " " << clr[f_f[POS_MID]] << " " << clr[f_f[POS_RIGHT]] << "  " << clr[f_r[POS_LEFT]] << " " << clr[f_r[POS_MID]] << " " << clr[f_r[POS_RIGHT]] << "  " << clr[f_b[POS_LEFT]] << " " << clr[f_b[POS_MID]] << " " << clr[f_b[POS_RIGHT]] << std::endl;
	std::cout << clr[f_l[POS_BOT_LEFT]] << " " << clr[f_l[POS_BOT]] << " " << clr[f_l[POS_BOT_RIGHT]] << "  " << clr[f_f[POS_BOT_LEFT]] << " " << clr[f_f[POS_BOT]] << " " << clr[f_f[POS_BOT_RIGHT]] << "  " << clr[f_r[POS_BOT_LEFT]] << " " << clr[f_r[POS_BOT]] << " " << clr[f_r[POS_BOT_RIGHT]] << "  " << clr[f_b[POS_BOT_LEFT]] << " " << clr[f_b[POS_BOT]] << " " << clr[f_b[POS_BOT_RIGHT]] << std::endl;

	std::cout << "       " << clr[f_d[POS_TOP_LEFT]] << " " << clr[f_d[POS_TOP]] << " " << clr[f_d[POS_TOP_RIGHT]] << std::endl;
	std::cout << "       " << clr[f_d[POS_LEFT]] << " " << clr[f_d[POS_MID]] << " " << clr[f_d[POS_RIGHT]] << std::endl;
	std::cout << "       " << clr[f_d[POS_BOT_LEFT]] << " " << clr[f_d[POS_BOT]] << " " << clr[f_d[POS_BOT_RIGHT]] << std::endl;
}