#ifndef CUBE_HPP
#define CUBE_HPP

#include <array>

#define RBK_FACE std::array<e_rbk_clr, 9>
#define RBK_CUBE std::array<RBK_FACE, 6>

typedef enum t_rbk_pos
{
	POS_TOP_LEFT = 0,
	POS_TOP = 1,
	POS_TOP_RIGHT = 2,
	POS_LEFT = 3,
	POS_MID = 4,
	POS_RIGHT = 5,
	POS_BOT_LEFT = 6,
	POS_BOT = 7,
	POS_BOT_RIGHT = 8

}	e_rbk_pos;

typedef enum t_rbk_clr
{
	CLR_W,
	CLR_Y,
	CLR_R,
	CLR_O,
	CLR_B,
	CLR_G

} e_rbk_clr;

typedef enum t_rbk_faces
{
	FACE_F,
	FACE_B,
	FACE_U,
	FACE_D,
	FACE_L,
	FACE_R
}	e_rbk_faces;


typedef struct FaceSlice
{
	e_rbk_faces face;
	std::array<e_rbk_pos, 3> positions;
} s_FaceSlice;

class Cube
{
	private:

	RBK_CUBE _face;
	public:

	Cube(void);
	Cube(const Cube &copy);
	Cube &operator=(const Cube &og);
	~Cube(void);

	void display_cube(void);
	void rotate_face(e_rbk_faces face, bool isRevert);
	void in_face_rotation(RBK_FACE &face, bool isResvert);
}		;

#endif
