

#include <iostream>
using namespace std;

const double EGGS = 2.99;
const double MILK = 3.67;
const double APPLES = 1.18;
const double CHICKEN_BREAST = 3.18;
const double RICE = 1.99;
const double MEMBER_DISCOUNT = 0.15;

void printTitle();
int getItemAmount(const string & prompt);
bool verifyDiscount();
int sumItems(int amountEggs, int amountMilk, int amountApples, int amountChickenBreast, int amountRice);
double calcCart(int amountEggs, int amountMilk, int amountApples, int amountChickenBreast, int amountRice);
double calcTotal(double discount, double subtotal);
double calcDiscount(double currentTotal, bool hasDiscount);
int calcBagsNeeded(int bagNumber, int numItems);
void printReceipt(double subtotal, double total, double savings);
void printNumBags(int num1Bags, int num2Bags);

int main()
{
    printTitle();

    int eggs = getItemAmount("Enter amount of eggs: ");
    cout << endl;
    int milk = getItemAmount("Enter amount of milk: ");
    cout << endl;
    int apples = getItemAmount("Enter amount of apples: ");
    cout << endl;
    int chickenBreast = getItemAmount("Enter amount of chicken breast: ");
    cout << endl;
    int rice = getItemAmount("Enter amount of rice: ");
    cout << endl;

    bool isDiscount = verifyDiscount();

    int num1Bags = calcBagsNeeded(1, eggs + milk + apples + chickenBreast + rice);
    int num2Bags = calcBagsNeeded(2, eggs + milk + apples + chickenBreast + rice);
    printNumBags(num1Bags, num2Bags);
    cout << endl;

    double subtotal = calcCart(eggs, milk, apples, chickenBreast, rice);
    double discount = calcDiscount(subtotal, isDiscount);
    double total = calcTotal(discount, subtotal);

    printReceipt(subtotal, total, discount);
    cout << endl;
    cout << "Thank you for shopping at the MEH Market! :)" << endl;

    return 0;
}

void printTitle()
{
    cout << "MEH Market" << endl;
    cout << "==========" << endl;
}

int getItemAmount(const string & prompt)
{
    int item;
    cout << prompt;
    cin >> item;
    return item;
}

bool verifyDiscount()
{
    char isDiscount;
    cout << "Do you have member discount? : ";
    cin >> isDiscount;
    if (isDiscount == 'y') return true;
    return false;
}

int sumItems(int amountEggs, int amountMilk, int amountApples, int amountChickenBreast, int amountRice)
{
    return amountEggs + amountMilk + amountApples + amountChickenBreast + amountRice;
}

double calcCart(int amountEggs, int amountMilk, int amountApples, int amountChickenBreast, int amountRice)
{
    return amountEggs * EGGS + amountMilk * MILK + amountApples * APPLES + amountChickenBreast * CHICKEN_BREAST + amountRice * RICE;
}

double calcTotal(double discount, double subtotal)
{
    return subtotal - discount;
}

double calcDiscount(double currentTotal, bool hasDiscount)
{
    if (hasDiscount) return currentTotal * MEMBER_DISCOUNT;
    return 0;
}

int calcBagsNeeded(int bagNumber, int numItems)
{
    int bagsNeeded = 0;
    if (bagNumber == 1)
    {
        bagsNeeded += numItems / 5;
        if (numItems % 5 > 3) ++bagsNeeded;
        return bagsNeeded;
    }
    if (numItems % 5 <= 3 && numItems % 5 > 0) return 1;
    return 0;
}

void printReceipt(double subtotal, double total, double savings)
{
    cout << "Subtotal: " << subtotal << endl;
    cout << "Total: " << total << endl;
    cout << "Savings: " << savings << endl;
}

void printNumBags(int num1Bags, int num2Bags)
{
    cout << "Bags required:" << endl;
    cout << "#1 Bags: " << num1Bags << endl;
    cout << "#2 Bags: " << num2Bags << endl;
}
