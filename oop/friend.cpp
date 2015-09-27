

#include <iostream>

class Humidity;
class Temperature
{
	private:
		int m_ntemp;
	public:
		Temperature(int n_temp){m_ntemp = n_temp;}
	friend void PrintWeather(const Temperature &ctemp, const Humidity &chumid);

};

class Humidity
{
	private:
		int m_humidity;
	public:
		Humidity(int humid) { m_humidity = humid;}
	
	friend void PrintWeather (const Temperature &ctemp, const Humidity &chumid);
};

void PrintWeather(const Temperature &ctemp, const Humidity &chumid){

	std::cout << "temperature: " << ctemp.m_ntemp << " humidity " << chumid.m_humidity << "\n";

}

/*
class Accumulator
{

	private:
		int m_nValue;
	public:
		Accumulator(){m_nValue = 0;}
		void Add(int nValue) { m_nValue += nValue;}

	friend void Reset()(Accumulator &cAccumulator);
	
};

void Reset(Accumulator &cAccumulator)
{
	cAccumulator.m_nValue = 0;

}
*/


int main(){


}
