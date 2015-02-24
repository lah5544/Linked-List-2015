//   void reserve(size_type new_capacity)
//     Postcondition: The bag's current capacity is changed to the
//     new_capacity (but not less than the number of items already in the
//     bag). The insert function will work efficiently (without allocating
//     new memory) until the new capacity is reached.
//
//   size_type erase(const string target);
//     Postcondition: All copies of target have been removed from the bag.
//     The return value is the number of copies removed (which could be zero).
//
//   void erase_one(const string target)
//     Postcondition: If target was in the bag, then one copy has been removed;
//     otherwise the bag is unchanged. A true return value indicates that one
//     copy was removed; false indicates that nothing was removed.
//
//   void insertResource(string entry);
//     Postcondition: A new copy of entry has been inserted into the bag(resource).
//
//   
#ifndef OBJECTIVE_H
#define OBJECTIVE_H

#include <iomanip>
#include <string>


using namespace std;
class objective
{
public:
	typedef std::size_t size_type;
	//constructor and deconstructor
	objective();
	objective(const objective& source);
	~objective();
	//member functions
	void setObj(string nObj);				//sets objective
	void setDescription(string nDesc);		//sets descriptoin
	void setCategory(int nCate);			//sets category
	void setPriority(int nPrior);			//sets priority
	void setTime(double nTime);				//sets time, military
	void setSdate(int, int, int); // member function to assign a date
	void getSdate();            // member function to display a date
	void setEdate(int, int, int); // member function to assign a date
	void getEdate();            // member function to display a date
	void insertResource(string entry);
	void setStatus(bool);
	void write(string filename);
	void read(string filename);
	void display();
	void reserve(size_type new_capacity);
	bool erase_one(const string target);
	size_type erase(const string target);

	string getObj();
	string getDescription();
	int getCategory();
	int getPriority();
	double getTime();
	bool getStatus();



private:
	string obj, description;
	int category, priority;
	double time;
	int sMonth;
	int sDay;
	int sYear;
	int eMonth;
	int eDay;
	int eYear;
	string *resources;
	size_type capacity;
	bool status;

};



#endif
