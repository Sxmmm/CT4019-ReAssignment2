#include "Vector3.h"
#include "Matrix33.h"

#include <math.h>
#include <iostream>
using namespace std;

//Constructor/Destructor//
void Vector3::initialise()
{
	x = 0;
	y = 0;
	z = 0;
}
Vector3::Vector3(float m_x, float m_y, float m_z)
{
	x = m_x;
	y = m_y;
	z = m_z;
}
Vector3::~Vector3()
{

}


//Functions//
//This is the cross product of Vector3
//	This is used to work out the perpendicular vector
Vector3 Vector3::crossProduct(const Vector3 &v1, const Vector3 &v2)
{
	Vector3 vCrossProduct;

	vCrossProduct.x = v1.y * v2.z - v1.z * v2.y;
	vCrossProduct.y = v1.z * v2.x - v1.x * v2.z;
	vCrossProduct.z = v1.x * v2.y - v1.y * v2.x;

	return vCrossProduct;
}
float Vector3::dotProduct(const Vector3 &v1, const Vector3 &v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}
float Vector3::distance(const Vector3 &v1, const Vector3 &v2)
{
	float dx = v1.x - v2.x;
	float dy = v1.y - v2.y;
	float dz = v1.z - v2.z;

	return (float)sqrt(dx * dx + dy * dy + dz * dz);
}
void Vector3::printVector()
{
	cout << x << ", " << y << ", " << z << "\n";
}


//Overload Operations//
const Vector3 & Vector3::operator+=(const Vector3 & v1)
{
	x += v1.x;
	y += v1.y;
	z += v1.z;
	return *this;
}
const Vector3 & Vector3::operator-=(const Vector3 & v1)
{
	x -= v1.x;
	y -= v1.y;
	z -= v1.z;
	return *this;
}
const Vector3 & Vector3::operator*=(const float & v1)
{
	x = x * v1;
	y = y * v1;
	z = z * v1;
	return *this;
}
const Vector3 & Vector3::operator*=(const Vector3 & v1)
{
	x = x * v1.x;
	y = y * v1.y;
	z = z * v1.z;
	return *this;
}
const Vector3 & Vector3::operator/=(const Vector3 & v1)
{
	x = x / v1.x;
	y = y / v1.y;
	z = z / v1.z;
	return *this;
}
const Vector3 & Vector3::operator/=(const float & v1)
{
	x = x / v1;
	y = y / v1;
	z = z / v1;
	return *this;
}
const Vector3 & Vector3::operator+(const Vector3 &v1)
{
	return Vector3::Vector3((x + v1.x), (y + v1.y), (z + v1.z));
}
const Vector3 & Vector3::operator-(const Vector3 &v1)
{
	return Vector3::Vector3((x - v1.x), (y - v1.y), (z - v1.z));
}
const Vector3 & Vector3::operator*(const float & v1)
{
	return Vector3::Vector3((x * v1), (y * v1), (z * v1));
}
const Vector3 & Vector3::operator*(const Vector3 & v1)
{
	return Vector3::Vector3((x * v1.x), (y * v1.y), (z * v1.z));
}
const Vector3 & Vector3::operator*(const Matrix33 &matB)
{
	return Vector3::Vector3((matB.m[0] * x) + (matB.m[1] * y) + (matB.m[2] * z),
		(matB.m[3] * x) + (matB.m[4] * y) + (matB.m[5] * z),
		(matB.m[6] * x) + (matB.m[7] * y) + (matB.m[8] * z));
}
const Vector3 & Vector3::operator/(const Vector3 & v1)
{
	return Vector3::Vector3((x / v1.x), (y / v1.y), (z / v1.z));
}
const Vector3 & Vector3::operator/(const float & v1)
{
	return Vector3::Vector3((x / v1), (y / v1), (z / v1));
}
const Vector3 & Vector3::operator=(const Vector3 &v1)
{
	x = v1.x;
	y = v1.y;
	z = v1.z;
	return *this;
}