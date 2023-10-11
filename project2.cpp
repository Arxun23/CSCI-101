// Luis Sanjuan-Cruz
// CSCI-1010 Section 1
// Project 2: Student Database

#include<iostream>
#include<string>

using namespace std;

// Gets the highest number
int highest(int a[], int s)
{
    int highest;
    for (int i = 0; i < s; i++)
    {
        if (i == 0)
        {
            highest = a[i];
        }
        if ( a[i] > highest)
        {
            highest = a[i];
        }
    }
    return highest;
}

// Gets the lowest number
int lowest(int a[], int s)
{
    int lowest;
    for(int i = 0; i < s; i++)
    {
        if(i == 0)
        {
            lowest = a[i];
        }
        if ( a[i] < lowest)
        {
            lowest = a[i];
        }
    }
    return lowest;
}

//Gets the average
int average(int a[], int s)
{
    int average = 0;
    int sum = 0;
    for ( int i = 0; i < s; i++)
    {
        sum = sum + a[i];
    }
    average = sum / s;
    return average;
}

int main()
{
    // Data that needs to be stored
    const int MAX = 100;
    int students[MAX];
    int grades[MAX];
    int ID[MAX];
    string first_name[MAX];
    string last_name[MAX];
    int choice;
    int used = 0;

    while(true)
    {
        // display menu
        cout << "***********ECU CompSci Student Database***********" << endl;
        cout << "***********Select a menu option***********" << endl;
        cout << "Currently has " << used << " students." << endl;
        cout << "1. Add Student " << endl;
        cout << "2. Search by ID" << endl;
        cout << "3. Grade statistic" << endl;
        cout << "4. Remove a Student" << endl;
        cout << "5. Print all system" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;
        if (choice == 6)
        {
            break;
        }

        //Choices starting with 1
       switch (choice)
       {
        case 1: 
        {
            if (used < 100)
            {
            int i = used;
            cout << "The Student ID is " << i + 1<< endl;
            ID[i] = i + 1 ;
            cout << "Please enter the student's name (Last Name, First Name) ";
            cin >> last_name[i] >> first_name[i];
            cout << "Please enter the grade of the student: ";
            cin >> grades[i];
            used += 1;
            break;
            }
            else if (used == 100)
            {
                cout << "Too many students!";
                break;
            }
        }
        // Choice 2
        case 2:
        {
            int id_num;
            cout << "To find a student, enter their ID: ";
            cin >> id_num;
            for (int i = 0; i < MAX; i++)
            {
                if (ID[i] == id_num)
                {
                    cout << "Student ID " << ID[i] << endl;
                    cout << "Name (First Name, Last Name): " << first_name[i] << ", " << last_name[i] << endl; 
                    cout << "Grade: " << grades[i] << endl;
                    break;
                }
                else if (i == MAX-1)
                {
                    cout << "Student not found!!" << endl;
                    break;
                }
            }
            break;
        }
        // Choice 3
        case 3:
        {
            cout << "Grade Statistics: " << endl << endl;
            cout << "The Highest Grade " << highest(grades, used) << endl;
            cout << "The Lowest Grade " << lowest(grades, used) << endl;
            cout << "Average Grade: " << average(grades, used) << endl;
            break;
        }
        // Choice 4
        case 4:
        {
            int removal;
            cout << "Enter the ID for the person you would like to remove" << endl;
            cin >> removal;
            for ( int i = 0; i < MAX; i++)
            {
                if (ID[i] == ID[removal-1])
                {
                    for( int s = i; s < MAX; s++)
                    {
                        ID[s] = ID[s + 1];
                        last_name[s] = last_name[s + 1];
                        first_name[s] = first_name[s + 1];
                        grades[s] = grades[s + 1];
                    }
                    cout << first_name[removal] << " " << last_name[removal] << " has been removed from database.";
                }
                else if (i == MAX-1)
                {
                    cout << "Student not found!!" << endl;
                    break;
                }
            }
        }
        case 5:
        {
            cout << "ID\t" << "Name\t" << "\tGrade" << endl;
            for (int i = 0; i < used; i++)
            {
                cout << ID[i] << "\t" << first_name[i] << " "  << last_name[i] << "\t" << grades[i] << endl;
            } 
            break;
        }
       }

        
    }   

    return 0;
}