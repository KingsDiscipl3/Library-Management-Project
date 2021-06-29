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
}
