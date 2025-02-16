#include<iostream>
#include<vector>
#include <fstream> 

using namespace std;


class Student{
    private:
        string name;
        string studentID;

    public:
        Student(string n, string ID)
        {
            name = n;
            studentID = ID;
        }

        //accessor methods
        string getName()
        {
            return name;
        }

        string getStudentID()
        {
            return studentID;
        }

        //mutator methods
        void setStudentID(string ID)
        {
            studentID = ID;
        }

        void setName(string n)
        {
            name = n;
        }

};

class CourseSection{
    private:
        string courseName;
        string teacher;
        vector<Student> classRoster;

    public:
        int roomNo;

        CourseSection(string currCourseName, string teacherName, int room)
        {
            courseName = currCourseName;
            teacher = teacherName;
            roomNo = room;
        }

        void addStudent(string n, string ID)
        {
            Student currStudent(n, ID);
            classRoster.push_back(currStudent);
        }

        //accessor methods
        string getCourseName()
        {
            return courseName;
        }

        string getTeacherName()
        {
            return teacher;
        }

        vector<Student> getClassRoster()
        {
            return classRoster;
        }


        int getRoomNo()
        {
            return roomNo;
        }

};

class HonorsStudent : public Student {
    string academy;
    
    public:
        HonorsStudent(string n, string id, string acad) : Student(n, id)
        {
            academy = acad;
        }

        string getAcademy()
        {
            return academy;
        }
};


int main()
{
    CourseSection myCourse("Computer Science", "Whiteley", 1703);
    cout << myCourse.roomNo << endl;
    ifstream FileName;
    FileName.open("classRoster.txt", ios::in);
    int currID = 1000;

    //adding students to the roster via a file
    string x;
    if (!FileName) {                        
        cout<<"File doesn’t exist.";          
    }
    else 
    {                     
        while (!FileName.eof()){  
            currID ++;      
            getline(FileName, x);
            myCourse.addStudent(x, to_string(currID));
        }
    }
    FileName.close();  

    vector<Student> myCourseRoster = myCourse.getClassRoster();
    cout << "My student roster: " << endl;
    for(auto student : myCourseRoster)
    {
        cout << student.getName() << endl;
    }                
    HonorsStudent myStudent("Juan's Dress", "A58642","STEM");
    cout << myStudent.getName();
    return 0;


}