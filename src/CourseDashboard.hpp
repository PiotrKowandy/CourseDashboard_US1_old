#pragma once
#include "Student.hpp"
#include "Trainer.hpp"
#include <vector>
#include <map>

class CourseDashboard
{
public:
    CourseDashboard();
	~CourseDashboard();

	void addStudent();
	void showStudents();
	void removeStudent(int);
	void login();
	void run();
	void panel(Trainer &);
	void panel(Student &);
	//bool checklog(std::string,std::string);

	std::vector <Student> listOfStudents;
	std::vector <Trainer> ListOfGoldFathers; 

	std::map<Student, std::vector<int>> rating;
};
