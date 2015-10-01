
#ifndef
#define


class Date
{
	private:
		int m_month;
		int m_date;
		int m_year;
		
		Date(){}

	public:
		Date(int month, int date, int year);
		
		void setDate(int month, int date, int year);
			
		int get_date(){return m_date;}
		int get_month(){return m_month;}
		int get_year(){return m_year;}
		
};

		

#endif
