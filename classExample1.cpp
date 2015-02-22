/* Class Dog
  Dog has age, name, weight as variable.
  There are 2 constructor, one without any parameters, and one with all three parameters
*/
class Dog {
  private:
    int * age; 
    String * name;
    double * weight; 

  public: 
    // Default constructor
    void Dog() { 
      this->age = new int(0);
      this->name = new String();
      this->weight = new double(0.0);
    }
    // Constructor with instantiation
    void Dog(int age, String name, double weight) {
      this->age = new int(age);
      this->name = new String(name);
      this->weight = new double(weight);
    }
    // Destructor
    void ~Dog() { // Q: Why do you need this? 
      delete age;
      delete name;
      delete weight;
    }
    int getAge() {
      return *(this->age);
    }
    double getWeight() {
      return *(this->weight);
    }
    String getName() {
      return *(this->name);
    }
    void setAge(int age) {
      *(this->age) = age;
    }
    void setName(String name) {
      *(this->name) = name;
    }
    void setWeight(double weight) {
      *(this->weight) = weight;
    }
}

/* Class Human */
// All humans somehow have a pet and all the pets are dogs 
class human
{
  private:
    int * age;
    String * name;
    Dog * pet; // This is the dog class defined above being used.  

  public:
    // Default constructor
    void human() {
      age = new int(0);
      name = new String();
      pet = new Dog();
    }
    // Constructor with instantiation
    void human(int age, String name, Dog pet) {
      age = new int(age);
      name = new String(name);
      pet = new Dog(pet.getAge(), pet.getName(), pet.getWeight()); // You need this because there isn't a constructor for Dog that takes in an object Dog.
    }
    int getAge() {
      return *(this->age);
    }
    String getName() {
      return *(this->name);
    }
    Dog getPet() {
      return *(this->pet);
    }
    void setAge(int age) {
      *(this->age) = age;
    }
    void setName(String name) {
      *(this->name) = name;
    }
    void setPet(Pet dog) {
      *(this->dog) = dog;
    } 
}
