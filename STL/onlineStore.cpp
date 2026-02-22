#include<iostream>
#include<vector>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<list>
#include<ctime>
#include<unordered_set>
#include<unordered_map>

using namespace std;

struct Product{
    int productId;
    string name;
    string category;
};

struct Order{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "iPhone", "Electronics"},
        {103, "Whey Protein", "Fitness"},
        {104, "Car", "Automobile"},
        {105, "T-Shirt", "Clothing"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;
    for(const auto &product : products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 25},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order : orderHistory){
        customerOrders.insert({order.customerId, order});
    }
    
    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Charlie"},
        {"C004", "David"},
        {"C005", "Eve"},
    };

    unordered_set<string> uniqueProducts;
    for(const auto &product : products){
        uniqueProducts.insert(product.name);
    }

    // ================= PRINTING SECTION =================

    cout << "\nProducts:\n";
    for(const auto &p : products){
        cout << p.productId << " - " << p.name 
             << " (" << p.category << ")\n";
    }

    cout << "\nRecent Customers (Deque):\n";
    for(const auto &c : recentCustomers){
        cout << c << " ";
    }

    cout << "\n\nOrder History:\n";
    for(const auto &o : orderHistory){
        cout << "Order ID: " << o.orderId
             << ", Product ID: " << o.productId
             << ", Quantity: " << o.quantity
             << ", Customer: " << o.customerId
             << ", Date: " << ctime(&o.orderDate);
    }

    cout << "\nCategories (Set - Unique & Sorted):\n";
    for(const auto &cat : categories){
        cout << cat << " ";
    }

    cout << "\n\nProduct Stock (Map):\n";
    for(const auto &stock : productStock){
        cout << "Product ID: " << stock.first
             << " -> Stock: " << stock.second << endl;
    }

    cout << "\nCustomer Orders (Multimap):\n";
    for(const auto &entry : customerOrders){
        cout << "Customer: " << entry.first
             << ", Order ID: " << entry.second.orderId << endl;
    }

    cout << "\nCustomer Data (Unordered Map):\n";
    for(const auto &data : customerData){
        cout << data.first << " -> " << data.second << endl;
    }

    cout << "\nUnique Products (Unordered Set):\n";
    for(const auto &name : uniqueProducts){
        cout << name << " ";
    }

    return 0;
}