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
    void Dog(int age, string name, double weight) {
      this->age = new int(age);
      this->name = new string(name);
      this->weight = new double(weight);
    }
/*
 Basically a constructor that takes in an object of its own class type and then copy its values onto your own values
 So if you call Dog pet(pet2) pet will be an instance of Dog that has the same values for the member variables as pet2
*/
    // ADDED: Skeleton code for a Copy Constructor
    // Note: A copy constructor refers to a constructor that takes in itself as an argument (like an object of its class)
    void Dog(Dog anotherDog) {
      this->age = new int();
      this->name = new string();
      this->weight = new double(); 
      // Here I'm using anotherDog's public getter functions to access its age, name, and weight. 
      int thatDogsAge = anotherDog.getAge();
      string thatDogsName = anotherDog.getName();
      double thatDogsWeight = anotherDog.getWeight();
    
       // Fill this part in.. 
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
    
    string getName() {
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
    string * name;
    Dog * pet; // This is the dog class defined above being used.  

  public:
    // Default constructor
    void human() {
      age = new int(0);
      name = new string();
      pet = new Dog();
    }
    // Constructor with instantiation
    void human(int age, string name, Dog pet) {
      age = new int(age);
      name = new string(name);
      pet = new Dog(pet.getAge(), pet.getName(), pet.getWeight()); // You need this because there isn't a constructor for Dog that takes in an object Dog.
        //this->pet = new Dog(pet);
        /* coffee register */
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


class coffeeRegister {
    private:
        long* item_count;
        double* total_price;
    public :
        void coffeeRegister() {
            item_count = new int(0);
            total_price = new int(0);
        }
        void coffeeRegister(item_count, total_price) {
            item_count = new int (item_count);
            total_price = new int (total_price);
        }
        void addItems(coffeeRegister.getItem(), coffeeRegister.getName()) {
            *item_count = new int(item_count);
            *total_price = new int (price);
            }
        void setPrice(long price) {
            *(this ->total_price) =total_price;
        }
};
