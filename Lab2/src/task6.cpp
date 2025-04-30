#include <iostream>
#include <limits>
using namespace std;

//defining base for defining a new student
struct Student {
    char name[50];
    int  id;
    float grade;
};

int main() {

    //Setting a limit for how many students can be in the system
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];

    //some variables used by the program
    int count = 0;
    int choice;

    do {
        //printing the main menu and using \n to make new lines for making it simpler
        cout << "\n=== Student Records Menu ===\n"
             << "1) Add a student\n"
             << "2) Display all students\n"
             << "3) Search student by ID\n"
             << "4) Exit\n"
             << "Enter choice (1-4): ";

        //recording the user choice
        cin >> choice;

        //using swich case structure to use different functions of the program
        switch (choice) {

          //choice 1 adding a new student to the system
          case 1:

            //cheking if there are space left for new students
            if (count >= MAX_STUDENTS) {
              cout << "Cannot add more students (limit reached!)" << endl;
            } else {

              //if there are space continue to ask all the details
              //fixing the infinite loop that is caused by empty spaces
              cin.ignore(numeric_limits<streamsize>::max(), '\n');
              cout << "Enter name: ";

              //preventing the user to write over 50 characters long name
              cin.getline(students[count].name, 50);

              //asking to create a id for the student
              cout << "Enter ID: ";
              cin  >> students[count].id;

              //entering the current grade for the student
              cout << "Enter grade: ";
              cin  >> students[count].grade;

              //counting the new student
              ++count;
              cout << "Student added." << endl;
            }
            break;
          
          //choice 2 display all of the student if there are any
          case 2:
            if (count == 0) {
              cout << "No students in the record." << endl;
            } else {
              cout << "\nAll students:\n";

              //printing out all of the students and their detaild fom the struct
              for (int i = 0; i < count; ++i) {
                cout << i+1 << ". Name: "  << students[i].name << ", ID: " << students[i].id << ", Grade: "<< students[i].grade << "\n";
              }
            }
            break;
          
          //choice 3 searching a student by id
          case 3:
            if (count == 0) {
              cout << "No students to search." << endl;
            } else {

              //asking for id
              int targetId;
              cout << "Enter ID to search: ";
              cin  >> targetId;

              bool found = false;

              //looping through the struct if the correct id is found print out all of the students details
              for (int i = 0; i < count; ++i) {
                if (students[i].id == targetId) {
                  cout << "Found student:\n"
                       << "  Name: "  << students[i].name << "\n"
                       << "  ID: "    << students[i].id   << "\n"
                       << "  Grade: " << students[i].grade<< "\n";
                  found = true;
                  break;
                }
              }

              //if no student was found give an error message
              if (!found)
                cout << "No student with ID " << targetId << " found." << endl;
            }
            break;
          
          //choice 4 exit the program
          case 4:
            cout << "Exiting program. Goodbye!" << endl;
            break;
          
          //if none of the choices match give the error meessage
          default:
            cout << "Invalid choice. Please enter 1-4." << endl;
        }
    } while (choice != 4);

    return 0;
}
