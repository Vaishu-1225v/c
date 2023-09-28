#include <iostream>
using namespace std;
struct Student
{
    int rollNo;
    char name[50];
    int marks;
};
void gateInformation(struct Student *sobj)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i + 1 << "th student roll no\n";
        cin >> sobj[i].rollNo;
        cout << "Enter the " << i + 1 << "th student name\n";
        cin >> sobj[i].name;
        cout << "Enter the " << i + 1 << "th student marks\n";
        cin >> sobj[i].marks;
    }
}
void DisplayInformation(struct Student *sobj)
{

    for (int i = 0; i < 10; i++)
    {
        cout << "Student rollNo:" << sobj[i].rollNo << endl;
        cout << "Student name:" << sobj[i].name << endl;
        cout << "Stduent marks:" << sobj[i].marks << endl;
        cout << "----------------------------------\n";
    }
}
void AvgMarks(struct Student *sobj)
{
    int Total = 0;
    float fAvg=0;
    for (int i = 0; i < 10; i++)
    {
        Total = Total + sobj[i].marks;
    }
    fAvg=Total/10;
    cout << "Average marks of 10 student is " << fAvg<<endl;
}
int main()
{
    struct Student sobj[10];
    int iChoice = 0;
    while (1)
    {

        cout << "Enter the your choise\n";
        cout << "press 1 for input\n";
        cout << "press 2 for display info\n";
        cout << "press 3 for avg marks of each student\n";
        cout << "press 4 for exit from program\n";
        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            gateInformation(sobj);
            cout<<"-----------------------------\n";
            break;
        case 2:
            DisplayInformation(sobj);
            cout<<"-----------------------------\n";
            break;
        case 3:
            AvgMarks(sobj);
            cout<<"-----------------------------\n";
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Enter the write choice\n";
        }
    }
    return 0;
}