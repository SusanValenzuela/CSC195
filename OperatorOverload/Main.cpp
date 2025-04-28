#include <iostream>
#include "Point.h"
using namespace ost;
using namespace std;

//Point& operator + (Point& p1, Point& p2)
//{
//	Point point;
//	point.x = p1.x + p2.x;
//	point.y = p1.y + p2.y;
//	return point;
//}
//void operator << (ostream& ostream, Point& point) 
//{
//	ostream << x << " : " << y << std::endl;
//}

int main()
{
	Point point1(10, 14);
	point1.Write(cout);

	Point point2(5, 8);

	//point1.Add(point2);
	Point point3 = (point1 + point2) * 3.0f;	//Makes it look prettier (syntactical sugar, gives operaotors user defined meaning)

	//point3.Write(cout); 
	cout << point3;



}

