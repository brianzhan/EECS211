#include <iostream>

class wallet
{
    private:
        int one_dollar_bill_count;
        int five_dollar_bill_count;
        int ten_dollar_bill_count;
        int twenty_dollar_bill_count;
        int fifty_dollar_bill_count;
        int hundred_dollar_bill_count;

    public:
        void wallet() {
            // default constructor
            // Set everything to zero
            // Write it later
        }
        // Also write copy constructor
        // Also write a constructor with initialization that takes in 6 parameters up above.
        
        void print_wallet() {
            // display your wallet info
        }

        int print_total_money() {
            // print the amount of money you have in dollars
        }

        void add(wallet w)
        {
            // You have to add the money from w into your money.
        }

}

// main function for testing purposes.
int main()
{
}
