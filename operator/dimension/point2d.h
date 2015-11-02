

#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2D
{

private:
	int m_nX;
	int m_nY;
public:
	Point2D():m_nX(0),m_nY(0)
	{
	}
	
	Point2D(int nx, int ny):m_nX(nx),m_nY(ny)
	{
	}
	

	friend std::ostream& operator<<(std::ostream& out, const Point2D &cPoint)
	{
		out << "(" << cPoint.GetX() << ", " << cPoint.GetY() << ")";
		return out;
	}

	void SetPoint(int nx, int ny)
	{
		m_nX = nx;
		m_nX = ny;
	}
	
	int GetX() const {return m_nX;}
	int GetY() const {return m_nY;}
};

#endif
