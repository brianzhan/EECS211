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
    protected:
      String name;
      int age;
      String major;

    public:
      void Student() {
          name = "";
          age = 0;
          major = "";
      }
    void Student (string name, int age, string major) {
        this->name = name;
        this-> age =  age;
        this -> major = major;
    }
    void Student(Student anotherStudent) {
        string anotherMajor = anotherStudent.getMajor();
        string anotherName = anotherStudent.getName();
        int anotherAge = anotherStudent.getAge();

    }
    
    void printStudent() {
        cout << "My name is " << this->name <<". I am " << this->age << " years old. My major is " << this->major << "." << endl;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getMajor() {
        return major;
    }
    void changeName(string name) {
        this->name = name;
    }
    
    void changeAge (int age) {
        this->age = age;
    }
    
    void changeMajor(string major) {
        this->major = major;
    }
  
}

// Try to finish this by tomorrow's session, and I can provide you another task that follows this. Good luck and make sure you ask questions when you don't know what's going on. - James

// Now write a class for NorthwesternStudent
// 1. Inherit from Student class
// 2. On top of Students, Northwestern Students also have:
//  - NetID (String)
//  - Class (Int)
class NorthwesternStudent : Student() {
private:
    string NetID;
    int myClass;
    // name (inherited the protected properties from Student class)
    // age
    // major
public:
    void NorthwesternStudent() {
        // Student(); // A child's constructor calls its parent's constructor before anything. - only true for default constructor
        NetID = "";
        myClass = 0;
    }
    
    /*void printStudent() {
        cout << "My name is " << this->name <<". I am " << this->age << " years old. My major is " << this->major << "." << endl;
    }*/ // This is still included because you inhertied from the student class.
    
    void printStudent() { // You can also have a overloading when you define the same function with the same name and same parameters in an inherited class.
        cout << "My name is " << this->name << ". I am " << this->age << " years old. My major is " << this->major << ". My Net ID is " << this->NetID << " and my class is " << this->class;
        
    }
    
    void NorthwesternStudent (string NetID, int myClass, int age, string name, int age, string major) {
        this-> NetID = NetID;
        this-> myClass = myClass;
        this -> age = age;
        this -> name = name;
        this -> age = age;
        this ->major = major;
    }
    
    string getNetID() {
        return NetID;
    }
    int returnClass() {
        return myClass;
    }
    void changeNetID(string NetID) {
        (this->NETID) = NetID;
    }
    void changeClass(int myClass) {
        (this->myClass) = myClass
    }
}

