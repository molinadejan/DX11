#include "Framework.h"
#include "FreeCam.h"

FreeCam::FreeCam()
	: move(20)
	, rotation(2)
{

}

FreeCam::~FreeCam()
{
}

void FreeCam::Update()
{
	if (Mouse::Get()->Press(1) == false)
		return;

	const Vector3& f = Forward();
	const Vector3& r = Right();
	const Vector3& u = Up();

	Vector3 position;
	Position(&position);

	if (Keyboard::Get()->Press('W'))
		position += f * move * Time::Delta();
	else if (Keyboard::Get()->Press('S'))
		position -= f * move * Time::Delta();

	if (Keyboard::Get()->Press('D'))
		position += r * move * Time::Delta();
	else if (Keyboard::Get()->Press('A'))
		position -= r * move * Time::Delta();

	if (Keyboard::Get()->Press('E'))
		position += u * move * Time::Delta();
	else if (Keyboard::Get()->Press('Q'))
		position -= u * move * Time::Delta();
}

void FreeCam::Speed(float move, float rotation)
{
	this->move = move;
	this->rotation = rotation;
}
