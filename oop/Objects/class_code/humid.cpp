
#include <iostream>

class Humidity;
class Temperature
{
	private:
		int m_nTemp;
	public:
		Temperature(int nTemp){m_nTemp = nTemp;}
		
		friend void printWeather(const Temperature &ctemp, const Humidity &chumid);
};

class Humidity
{
	private:
		int m_nHumid;
	public:
		Humidity(int nHumid){m_nHumid = nHumid;}
		friend void printWeather(const Temperature &ctemp, const Humidity &chumid);

};

void printWeather(const Temperature &ctemp, const Humidity &chumid)
{
	std::cout << "Temperature is: " << ctemp.m_nTemp << " and Humidity is " << chumid.m_nHumid << "\n";
}

int main()
{
	Temperature dude1(101);
	Humidity dude2(21);
	
	printWeather(dude1,dude2);
}
