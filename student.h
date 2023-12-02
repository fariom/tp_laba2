#pragma once

class Student {
public:
	Student();
	Student(char* n,char* grp,char* grds);
	Student(Student* orig);
	~Student();

	char* getName();
	void setName(char* n);
	char* getGroup();
	void setGroup(char* grp);
	int* getGrades();
	void setGrades(int* grds);
private:
	char* name;
	char* group;
	int* grades;
};