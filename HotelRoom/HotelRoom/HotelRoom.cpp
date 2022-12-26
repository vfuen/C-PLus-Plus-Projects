// HotelRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <exception>
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>

class HotelRoom {

private:
	int number;
	double rate;
public:
	HotelRoom() {

		number = 0;
		rate = 0.00;

	}

	HotelRoom( int number,  double rate) {

		

		try
		{
			this->number = number;
			this->rate = rate;
			if (number < 0 || rate < 0) {
				throw std::invalid_argument(("Negative Parameter(s)"));
				
			}
		}
		catch (std::invalid_argument& ex) {
			std::cout << ex.what() << std::endl;
		}
	}

	void setNumber(int number) {
		try {
			
			if (number < 0) {
				throw std::invalid_argument("Negative Parameter");
				this->number = number;
			}
		}


		catch (std::invalid_argument& ex) {
			std::cout << ex.what() << std::endl;
		}
	}


	int getNumber() { 
		return number; 
	}

	void setRate(double rate) {
		try {

			if (rate < 0) {
				throw std::invalid_argument("Negative Parameter");
				this->rate = rate;
			}
		}

		catch (std::invalid_argument& ex) {
			std::cout << ex.what() << std::endl;
		}
	}

	double getRate() { return rate; }
 
	std::string virtual toString() {
		std::stringstream sstream;


		sstream <<"Room number:"<< getNumber()<<" Rate: $"<< getRate();


	
		return sstream.str(); 
	}

	virtual double calculateBill() {
		return 0.00;

	}
	

	

};



class GuestRoom : public HotelRoom {


private:
	int capacity;
	int status;
	int days;

public:

	GuestRoom(int number, double rate, int capacity, int status, int days) :HotelRoom(number, rate)
	{
		this->capacity = capacity;
		this->status = status;
		this->days = days;
	}
	void setCapacity(int capacity)
	{
		this->capacity = capacity;
	}
	int getCapacity()
	{
		return capacity;
	}
	void setStatus(int status)
	{
		try
		{
			if (status > capacity)
				throw std::out_of_range::out_of_range("Not within range");
			this->status = status;
		}
		catch (std::out_of_range& ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	void setDays(int days)
	{
		this->days = days;
	}
	int getDays()
	{
		return days;
	}
	double calculateBill()
	{
		return days * getRate();
	}
	std::string toString()
	{
		std::stringstream sstream;
		sstream << "Guest Room Number: " << getNumber() << " Rate: $" << getRate() << " Days: " << getDays() << " ";
		return sstream.str();
	}
};
	class MeetingRoom : public HotelRoom {

	private:
		int seats;
		int status;

	public:
		MeetingRoom(int number, double rate, int seats, int status) :HotelRoom(number, rate)
		{
			this->seats = seats;
			this->status = status;
			
		}
		void setSeats(int numOfSeats)
		{
			this->seats = seats;
		}
		int getSeats()
		{
			return seats;
		}
		void setStatus(int status)
		{
			this->status = status;
		}
		int getStatus()
		{
			return status;
		}
		std::string toString()
		{
			std::stringstream sstream;
			sstream << "Meeting Room Number: " << getNumber() << " Rate: $" << getRate() << " Seats: " << getSeats() << " Status: " << getStatus();
			return sstream.str();
		}
		double calculateBill()
		{
			return getSeats() * 10.00 + 500.00;
		}





	};

	void displayHotelRoom(HotelRoom* r) {

		std::cout<<r->toString()<<std::endl;
		std::cout<< "Bill: $" << r->calculateBill()<<std::endl;

}


int main()
{
	
	HotelRoom hr1(7,88.9);
	GuestRoom gr1(8, 88.9,10,0,1);
	MeetingRoom mr1(7, 99.98, 1, 15);
std::cout<<"---------------------POLYMORPHISM--VERSION------------------------------"<<std::endl<<"\n";
	
	displayHotelRoom(&hr1);
	displayHotelRoom(&gr1);
	displayHotelRoom(&mr1);



}

