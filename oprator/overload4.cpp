
#include <iostream>

using namespace std;
class Point
{

	private:
		double m_dx, m_dy, m_dz;
		
	public:
		Point(double dx = 0.0, double dy = 1.0, double dz = 2.0)
		{
			m_dx = dx;
			m_dy = dy;
			m_dz = dz;
		}
		friend ostream& operator << (ostream &out, Point &cPoint);
		friend istream& operator >> (istream &in, Point &cPoint);
		friend bool operator== (Point &c1, Point &c2);
		friend bool operator!= (Point &c1, Point &c2);
	
		double get_x(){return m_dx;}
		double get_y(){return m_dy;}
		double get_z(){return m_dz;}
		
		//friend istream& operator << (istream &in, Point &cPoint);
};

ostream& operator << (ostream &out, Point &cPoint)
{

	out << cPoint.m_dx << " " << cPoint.m_dy << " " << cPoint.m_dz << endl;
	return out;
}

istream& operator>> (istream &in, Point &cPoint)
{	
	in >> cPoint.m_dx;
	in >> cPoint.m_dy;
	in >> cPoint.m_dz;
	return in;
}

bool operator== (Point &c1, Point &c2)
{
	return (c1.m_dx == c2.m_dy &&
		c1.m_dy == c2.m_dy && 
		c1.m_dz == c2.m_dz);
}

bool operator!= (Point &c1, Point &c2)
{
	return (c1.m_dx != c2.m_dx &&
		c1.m_dy != c2.m_dy &&
		c1.m_dz != c2.m_dz);
}
int main()
{

	cout << "enter a point: " << endl;
	Point cPoint;
	cin >> cPoint;

	Point cPoint1(2.0,3.0,4.0);
	Point cPoint2(10.0,11.0,12.0);
	
	cout << cPoint1;
	cout << cPoint2;
	cout << cPoint;	

	return 0;

}

