#include<iostream>
#include<string>
 using namespace std ;

 // Enum to represent student status
 enum StudentStatus {
 ACTIVE ,
 DROPPED ,
 GRADUATED
 };

 // Structure to group student data
 struct Student {
 string name ;
 string entryNumber ;
 float marks ;
 StudentStatus status ;
 };

 int main () {
 Student s1 ;
 s1 . name = " Alice ";
 s1 . entryNumber = " 2022 CSE001 ";
 s1 . marks = 85.5;
 s1 . status = ACTIVE ;

 cout << s1 . name << endl ;
 cout << s1 . marks << endl ;


 return 0;
 }
