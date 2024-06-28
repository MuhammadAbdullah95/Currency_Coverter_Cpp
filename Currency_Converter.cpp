#include <iostream>

using namespace std;

class CurrencyConverter
{
private:
    double number;
    double rate;

public:
    double convert_pkr_to_usd();
    double convert_usd_to_pkr();
    double convert_BehrainiDinar_to_pkr();
    double convert_pkr_to_BehrainiDinar();
    double convert_chineseYuan_to_pkr();
    double convert_pkr_to_chineseYuan();
    double convert_chineseYuan_to_Euro();
    double convert_pound_to_pkr();
};
double CurrencyConverter::convert_pkr_to_usd()
{
    cout << "Enter Pakistani Rupee: ";
    cin >> number;
    rate = 0.0036;
    return number * rate;
}
double CurrencyConverter::convert_BehrainiDinar_to_pkr()
{
    cout << "Enter Behraini Dinar: ";
    cin >> number;
    rate = 738.96;
    return number * rate;
}
double CurrencyConverter::convert_chineseYuan_to_Euro()
{
    cout << "Enter Chinese Yuan: ";
    cin >> number;
    rate = 0.13;
    return number * rate;
}
double CurrencyConverter::convert_chineseYuan_to_pkr()
{
    cout << "Enter Chinese Yuan: ";
    cin >> number;
    rate = 38.35;
    return number * rate;
}
double CurrencyConverter::convert_pkr_to_BehrainiDinar()
{
    cout << "Enter Pakistani Rupee: ";
    cin >> number;
    rate = 0.0014;
    return number * rate;
}
double CurrencyConverter::convert_pkr_to_chineseYuan()
{
    cout << "Enter Pakistani Rupee: ";
    cin >> number;
    rate = 0.026;
    return number * rate;
}
double CurrencyConverter::convert_pound_to_pkr()
{
    cout << "Enter amount in Pound: ";
    cin >> number;
    rate = 353.42;
    return number * rate;
}
double CurrencyConverter::convert_usd_to_pkr()
{
    cout << "Enter amount in USD: ";
    cin >> number;
    rate = 278.50;
    return number * rate;
}
int main()
{
    cout << "\t\t\t\t----------||Currency Converter!||----------" << endl;
    cout << endl;
    CurrencyConverter curr;
    int option;
    do
    {
        cout << "Select What you Want: " << endl;
        cout << "Convert:\n"
             << "1. PKR to USD\n"
             << "2. Behraini Dinar to PKR\n"
             << "3. Chinese Yuan to Euro\n"
             << "4. Chinese Yuan to PKR\n"
             << "5. PKR to Behraini Dinar\n"
             << "6. PKR to Chinese Yuan\n"
             << "7. Pound to PKR\n"
             << "8. USD to PKR\n"
             << "9. Exit\n";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << curr.convert_pkr_to_usd() << " USD" << endl;
            cout << endl;
            break;
        case 2:
            cout << curr.convert_BehrainiDinar_to_pkr() << " PKR" << endl;
            cout << endl;
            break;
        case 3:
            cout << curr.convert_chineseYuan_to_Euro() << " EURO" << endl;
            cout << endl;
            break;
        case 4:
            cout << curr.convert_chineseYuan_to_pkr() << " PKR" << endl;
            cout << endl;
            break;
        case 5:
            cout << curr.convert_pkr_to_BehrainiDinar() << " Behranini Dinar" << endl;
            cout << endl;
            break;
        case 6:
            cout << curr.convert_pkr_to_chineseYuan() << " Yuan" << endl;
            cout << endl;
            break;
        case 7:
            cout << curr.convert_pound_to_pkr() << " PKR" << endl;
            cout << endl;
            break;
        case 8:
            cout << curr.convert_usd_to_pkr() << " PKR" << endl;
            cout << endl;
            break;
        case 9:
            cout << "Thank You!" << endl;
            break;
        default:
            cout << "Invalid Option" << endl;
            cout << endl;
            break;
        }
    } while (option != 9);
}
