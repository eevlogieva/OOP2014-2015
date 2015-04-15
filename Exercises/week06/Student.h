#ifndef STUDENT_HH
#define STUDENT_HH

class Student
{
private:
    char* name;
    double averageGrades;
    unsigned facultyNumber;

public:
    Student();
    Student(const char*, double, unsigned);
    Student(const Student&);
    ~Student();

    const char* getName() const;
    double getAverageGrades() const;
    unsigned getFacultyNumber() const;

    void setName(const char*);
    void setAverageGrades(double);
    void setFacultyNumber(unsigned);

    void print() const;

};

#endif
