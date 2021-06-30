// Library Management Project

// Header Files Included in Project

#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <string.h>
#include <iomap.h>


// Classes in the Project

class book 
{
  char bookNumber[6];
  char bookName[50];
  char authorName[20];
public:
  void create_book() 
  {
    cout << "\n NEW BOOK ENTRY... \n";
    cout << "\n Enter The Book Number: ";
    cin >> bookNumber;
    cout << "\n\n Enter The Name Of The Book: ";
    gets(bookNumber);
    cout << "\n\n Enter Author's Name: ";
    gets(authorName);
    cout << "\n\n Book Created...";
  }
  
  void show_book() 
  {
      cout << "\n Book Number: " << bookNumber;
      cout << "\n Book Name: ";
      puts(bookName);
      cout << "Author's Name: ";
      puts(authorName);
  }

  void modify_book()
  {
      cout << "\n Book Number: " << bookNumber;
      cout << "\n Modify Book Name: ";
      gets(bookName);
      cout << "\n Modify Author's Name: ";
      gets(authorName);
  }

  const char* returnBookNumber() 
  {
      return bookNumber;
  }

  void report() 
  {
      cout << bookNumber << setw(30) << bookName << setw(30) << authorName << endl;
  }

}



class student
{
    char admissionNumber[6];
    char studentName[20];
    char studentBookNumber[6];
    int token;
public:
    void create_student() 
    {
        clrscr();
        cout << "\n NEW STUDENT ENTRY...";
        cout << "\n Enter The Admission Number: ";
        cin >> admissionNumber;
        cout << "]n]n Enter The Name Of The Student: ";
        gets(studentName);
        token = 0;
        studentBookNumber[0] = '/0';
        cout << "\n\n Student Record Created...";
    }

    void show_student() 
    {
        cout << "\n Admission Number: " << admissionNumber;
        cout << "\n Student Name: ";
        puts(studentName);
        cout << "Number Of Book Issued: " << token;
        if (token == 1)
            cout << "\n Book Number:" << studentBookNumber;
    }

    void modify_student() 
    {
        cout << "\n Admission Number: " << admissionNumber;
        cout << "\n Modify Student Name: ";
        gets(studentName);
    }

    const char* returnAdmissionNumber() 
    {
        return admissionNumber;
    }

    const char* returnStudentBookNumber() 
    {
        return studentBookNumber;
    }

    const char* returnToken() 
    {
        return token;
    }

    void addToken() 
    {
        token = 1;
    }

    void resetToken() 
    {
        token = 0;
    }

    void getStudentBookNumber(char t[]) 
    {
        strcpy(studentBookNumber, t);
    }

    void report() 
    {
        cout << "\t" << admissionNumber << setw(20) << studentName << setw(10) << token << endl;
    }
}



fstream fp, fp2;
book bk;
student st;



void write_book() 
{

}
