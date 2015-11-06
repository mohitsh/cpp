
#include <iostream>

class Point
{
	private:
		double m_dx, m_dy, m_dz;
	public:
		Point(double dx, double dy, double dz)
		{
			m_dx = dx;
			m_dy = dy;
			m_dz = dz;
		}
		
		friend Point operator- (const Point &cpoint);
		friend bool operator! (const Point &cpoint);
		
		double getx() {return m_dx;}
		double gety() {return m_dy;}
		double getz() {return m_dz;}
};

Point operator- (const Point &cpoint)
{
	return Point(-cpoint.m_dx, -cpoint.m_dy, -cpoint.m_dz);
}

bool operator! (const Point &cpoint)
{
	return (cpoint.m_dx == 0.0 && 
		cpoint.m_dy == 0.0 &&
		cpoint.m_dz == 0.0);
}

int main()
{
	using namespace std;
	Point cpoint(0.0,0.0,0.0);
	if (!cpoint)
		cout << "Origin" << endl;
	else
		cout << "Not Origin" << endl; 
	Point pt(1.0,2.0,3.0);
	if (!pt)
		cout << "Origin" << endl;
	else
		cout << "Not Origin" << endl;
 
	return 0;
}
