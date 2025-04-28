#include <iostream>
#pragma once

namespace ost
{
	class Point
	{
	private: 
		float x, y;

	public:
		Point() : x{0}, y{0} {}
		Point (float x, float y) : x{ 0 }, y{ 0 } {}

		void Write(std::ostream& ostream);
		friend std::ostream& operator << (std::ostream& ostream, Point& point);

		void Add(Point& point);
		Point& operator + (Point& point);

		Point* operator*(float s);

	};


}