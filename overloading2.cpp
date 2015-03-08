#include <iostream>

/*
 * Basic description of class "Classroom"
 * It's a class to describe a classroom
 * There are desks
 * There are blackboards
 * There are chairs
 * 
 * All the basic constructors are implemented for you
 * You need to overload the following operators
 *  + (classroom) => add all the desks/chairs/blackboards
 *  - (classroom) => subtract all the desks/chairs/blackboards
 *  && (classroom) => return true if the # of chairs/desks/blackboards are all the same. Otherwise, return false
 *  || (classroom) => return true if the # of either chairs/desks/blackboards are the same. If they are all different, return false
 */

class Classroom
{
    private:
        int desks;
        int blackboards;
        int chairs;

    public:
        void Classroom() {
            this->desks = 0;
            this->blackboards = 0;
            this->chairs = 0;
        }
        void Classroom(int d, int b, int c) {
            this->desks = d;
            this->blackboards = b;
            this->chairs = c;
        }
        void Classroom(Classroom c) {
            this->desks = c.get_desks();
            this->blackboards = c.get_blackboards();
            this->chairs = c.get_chairs();
        }
        int get_desks() {
            return this->desks;
        }
        int get_blackboards() {
            return this->blackboards;
        }
        int get_chairs() {
            return this->chairs;
        }
        void set_desks(int num) {
            this->desks = num;
        }
        void set_blackboards(int num) {
            this->blackboards = num;
        }
        void set_chairs(int num) {
            this->chairs = num;
        }

        /* write your operator overloading functions here */
}
