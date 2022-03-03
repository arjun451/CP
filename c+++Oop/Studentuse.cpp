#include<iostream>
using namespace std ;
#include"studentClass.cpp"
int main()
{

//     // Object are created by two method
//     // 1.Ststicaly ,2.Dynamicaly
//     Student s1;   // Ststicsly
//     Student *s2=new Student;  // Dynamicaly
//    // s1.rollNo=12;
//   //  cout<<s1.rollNo<<endl;
//  //   s1.hight = 56;
//    // s1.weight=57;
//    // cout<<s1.hight<<endl;
//  //   cout<<s1.weight<<endl;
//  //   s2->hight = 67;
//  //   s2->rollNo = 45;
//    // s2->weight = 78;
//   //  cout<<s2->hight<<" "<<s2->rollNo<<" "<<s2->weight<<endl;
   

//     s1.setHight(34);
//     s1.setRoll(21);
//     s2->setWeight(56);
//     s1.display();
//     s2->display();

// Student s1;
// Student *s2 = new Student(23);
// Student s3(34,56);
// Student *s4 = new Student(39,50,70);
// s4->display();
// s3.display();
// s2->display();
//copy constructor
/*
Student s5(10,10001);
Student s6(s5);
s5.display();
s6.display();
*/
// copy Assiment operator and destructor
Student s1(20,40),s2(50,60);
s2=s1;
s1.display();
s2.display();
Student *s3= new Student(12,13);
*s3=s1;
s3->display();

return 0;
}