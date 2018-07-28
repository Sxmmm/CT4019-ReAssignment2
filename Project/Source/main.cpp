#include "Matrix44.h"
#include "Matrix33.h"
#include "Vector3.h"
#include "Vector2.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	
	/*float matrixA[16] = { 1.0, 0.0, 0.0, 30.0,
		0.0, 1.0, 0.0, 30.0,
		0.0, 0.0, 1.0, 30.0,
		0.0, 0.0, 0.0, 1.0 };

	float matrixB[16] = { 23.0, 21.0, 0.0, 1.0,
		10.0, 9.0, 1.0, 0.0,
		1.0, 2.0, 1.0, 0.0,
		3.0, 2.0, 9.0, 9.0 };*/

	float x1 = 0.0f;
	float y1 = 0.0f;
	float z1 = 0.0f;
	float x2 = 0.0f;
	float y2 = 0.0f;
	float z2 = 0.0f;

	//Asking user for the input of the first Vector3
	cout << "Vector3 Demonstration.\n";
	cout << "Enter Vector 1 x.\n";
	cin >> x1;
	cout << "Enter Vector 1 y.\n";
	cin >> y1;
	cout << "Enter Vector 1 z.\n";
	cin >> z1;

	//Asking user for the input of the second Vector3
	cout << "Enter Vector 2 x.\n";
	cin >> x2;
	cout << "Enter Vector 2 y.\n";
	cin >> y2;
	cout << "Enter Vector 2 z.\n";
	cin >> z2;

	cin.get();
	cout << "\n\n\n\n";

	//Setting up the v1 Vector3 inputted by the user
	Vector3 v1;
	v1 = Vector3::Vector3(x1, y1, z1);

	//Setting up the v2 Vector3 inputted by the user
	Vector3 v2;
	v2 = Vector3::Vector3(x2, y2, z2);

	//Seting up a Vector3 to hold the value of the cross product
	Vector3 crP;
	crP = Vector3::crossProduct(v1, v2);

	//Setting up a float to hold the value of the dot product
	float dP;
	dP = Vector3::dotProduct(v1, v2);

	//Setting up a float to hold the value of the distance
	float dis;
	dis = Vector3::distance(v1, v2);

	//Setting up a Vector3 to hold the Vectors added together
	Vector3 addition;
	addition + v1;
	addition + v2;

	//Setting up a vector to hold v1 multiplied
	Vector3 multi;
	multi = v1;
	multi *= 3;

	//Setting up a vector to hold v2 multiplied
	Vector3 multi1;
	multi1 = v2;
	multi1 *= 3;

	Vector3 total;
	total = v1;
	total *= v2;

	//Print out the inputs from the user
	cout << "///////////////////\n";
	cout << "Vector1: ";
	v1.printVector();
	cout << "Vector2: ";
	v2.printVector();
	cout << "///////////////////\n";

	cout << "The Cross Product of Vector1 and Vector2 =  ";
	crP.printVector();
	cout << "The Dot Product of Vector1 and Vector2 =  " << dP << "\n";
	cout << "The Distance Between Vector1 and Vector2 =  " << dis << "\n";
	cout << "Vector1 + Vector2 =  ";
	addition.printVector();
	cout << "Vector1 multiplied by 3 =  ";
	multi.printVector();
	cout << "Vector2 multiplied by 3 =  ";
	multi1.printVector();
	cout << "The two vectors multiplied are: ";
	total.printVector();
	cout << "\n\n";
	cout << "Press 'Enter' to go to Vector2 demonstration...";
	cin.get();

	cout << "\n\n\n\n";

	float xx1 = 0.0f;
	float yy1 = 0.0f;
	float xx2 = 0.0f;
	float yy2 = 0.0f;


	//Asking user for the input of the first Vector2
	cout << "Vector2 Demonstration.\n";
	cout << "Enter Vector 1 x.\n";
	cin >> xx1;
	cout << "Enter Vector 1 y.\n";
	cin >> yy1;

	//Asking user for the input of the second Vector2
	cout << "Enter Vector 2 x.\n";
	cin >> xx2;
	cout << "Enter Vector 2 y.\n";
	cin >> yy2;


	cin.get();
	cout << "\n\n\n\n";

	//Setting up the v1 Vector2 inputted by the user
	Vector2 vv1;
	vv1 = Vector2::Vector2(xx1, yy1);

	//Setting up the v2 Vector2 inputted by the user
	Vector2 vv2;
	vv2 = Vector2::Vector2(xx2, yy2);

	//Setting up a float to hold the value of the dot product
	float dP1;
	dP1 = Vector2::dotProduct(vv1, vv2);

	//Setting up a float to hold the value of the distance
	float dis1;
	dis1 = Vector2::distance(vv1, vv2);

	//Setting up a Vector3 to hold the Vectors added together
	Vector2 addition1;
	addition1 + vv1;
	addition1 + vv2;

	//Setting up a vector to hold v1 multiplied
	Vector2 multi11;
	multi11 = vv1;
	multi11 *= 3;

	//Setting up a vector to hold v2 multiplied
	Vector2 multi12;
	multi12 = vv2;
	multi12 *= 3;

	Vector2 total1;
	total1 = vv1;
	total1 *= vv2;

	//Print out the inputs from the user
	cout << "///////////////////\n";
	cout << "Vector1: ";
	vv1.printVector();
	cout << "Vector2: ";
	vv2.printVector();
	cout << "///////////////////\n";

	cout << "The Dot Product of Vector1 and Vector2 =  " << dP1 << "\n";
	cout << "The Distance Between Vector1 and Vector2 =  " << dis1 << "\n";
	cout << "Vector1 + Vector2 =  ";
	addition1.printVector();
	cout << "Vector1 multiplied by 3 =  ";
	multi11.printVector();
	cout << "Vector2 multiplied by 3 =  ";
	multi12.printVector();
	cout << "The two vectors multiplied are: ";
	total1.printVector();
	cout << "\n\n";
	cout << "Press 'Enter' to go to Matrix3 demonstration...";
	cin.get();

	cout << "\n\n\n\n";

	////Print Matrix A
	//p = 0;
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << "\n";
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << matrixA[p] << " ";
	//		p++;
	//	}
	//}

	//cout << "\n";

	////Print Matrix B
	//p = 0;
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << "\n";
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << matrixB[p] << " ";
	//		p++;
	//	}
	//}

	

}