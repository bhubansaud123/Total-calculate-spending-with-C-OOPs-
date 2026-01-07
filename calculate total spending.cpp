#include <iostream>
#include <vector>
using namespace std;

class Expense {
    string name;
    double amount;
public:
    Expense(string n, double a) : name(n), amount(a) {}
    double getAmount() const { return amount; }
};

class ExpenseTracker {
    vector<Expense> expenses;
public:
    void addExpense(const Expense& e) {
        expenses.push_back(e);
    }
    void showTotal() const {
        double total = 0;
        for (const auto& e : expenses)
            total += e.getAmount();
        cout << "Total Expense: " << total << endl;
    }
};

int main() {
    ExpenseTracker tracker;
    tracker.addExpense(Expense("Food", 150));
    tracker.addExpense(Expense("Transport", 80));
    tracker.showTotal();
    return 0;
}
