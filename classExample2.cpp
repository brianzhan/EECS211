// So now you kind of know how to write classes.
// This is going to be some more exercise for you to do. 

// Exercise 1. 
// Writing a class for students
// A student class has 3 member variables:
// 1. Name
// 2. Age
// 3. Major 

// A student also has the regular Getter and Setter functions
// I want a default constructor that doesn't take in any argument
// I also want another constructor where I can pass these three values to initialize the member variables.
// On top of this, I also want a copy constructor 

// I'll provide a skeleton code for you so that you can fill them up.
// This will be more barren than the one I gave you last week!

class Student{
private:
  String name;
  int age;
  String major;

public:
  Student() {
    // Default Constructor
    // Fill this in.. 
  }
  Student(String name, int age, String major) {
    // Another constructor that initializes all of them
    // Fill this in...
  }
  Student(Student anotherStudent) {
    // Copy constructor
    // Fill this in...
  }

  String getName() {
    // Fill this in..
  }
  
  int getAge() {
     // Fill this in...
  }

  String getMajor() {
    // Fill this in...
  }

  void setName(String name) {
    // Fill this in..
  }

  void setAge(int age) {
    // Fill this in..
  }

  void setMajor(String major) {
    // Fill this in..
  }
}

// Try to finish this by tomorrow's session, and I can provide you another task that follows this. Good luck and make sure you ask questions when you don't know what's going on. - James
