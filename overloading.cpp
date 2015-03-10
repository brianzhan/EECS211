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

    
        
public: {
        // Also write copy constructor
        // Also write a constructor with initialization that takes in 6 parameters up above.

        void wallet() {
            one_dollar_bill_count = 0;
            five_dollar_bill_count = 0;
            ten_dollar_bill_count = 0;
            twenty_dollar_bill_count = 0;
            fifty_dollar_bill_count = 0;
            hundred_dollar_bill_count = 0;
        }
        void wallet (wallet anotherWallet) {
            string one_dollar_bill_count = anotherWallet.get_one_dollar_bill_count();
            string five_dollar_bill_count = anotherWallet.get_five_dollar_bill_count();
            //etc.
        }
        int total_money = one_dollar_bill_count * 1 + five_dollar_bill_count * 5;

        void get_one_dollar_bill_count() {
            return one_dollar_bill_count;
        } //etc.

        void print_wallet() {
            cout << "one-dollar bill count is " << one_dollar_bill_count << "five_dollar_bill acount is " << five_dollar_bill_count;
        }

        int print_total_money() {
            cout << total_money;
        }


        void add(wallet w) {
            original + w.total_money;
            // You have to add the money from w into your money.
        }


    
        int operator+(wallet w) =
            return (this->total_money) + w.total_money;
        }
        int operator-(wallet w) {
            return (this->total_money) - w.total_money;
        }
        string operator<<(wallet w) {
            return "I have " + atoi(w.total_money);
        }
   
        bool operator > (wallet w) { //
            return this->total.money > w.total_money;
        }
        bool operator > (int amount) { // w > 300 ??
            return (wallet.total_money w > amount);
        }
        

        void operator>> (wallet w) {
            this->total_money = w.total_money;
            w.total_money = this->total_money;
        }
    
}


// main function for testing purposes.
int main()
{
    wallet w = wallet(10);
    wallet w2 = wallet(20);
    int total_money = w + w2;
    int subtracted_money = w - w2;
    int overloadPrint = << w;
    bool orOperator = wallet || anotherWallet;
    // int total_money = w.total_money + w2.total_money;
    if ( w > w2 ) {
        cout << "w is greater than w2!!" << endl;
    }
    cout << w;
    // cout << cout << w.total_money;
    // cout << "I have " + w.total_money;
}
