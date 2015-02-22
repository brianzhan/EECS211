class Dog {
  private:
    int * age; 
    String * name;
    double * weight; 

  public: 
    // Default constructor
    void Dog() { 
      this->age = 0;
      this->name = NULL;
      this->weight = 0.0;
    }
    // Constructor with instantiation
    void Dog(int age, String name, double weight) {
      this->age = age;
      this->name = name;
      this->weight = weight;
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
