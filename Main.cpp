#include <iostream>
#include "../Minimarket/Minimarket.h"

using namespace std;

int main() {
    Minimarket::Product product1("Apple", 1.5, 10);
    Minimarket::Product product2("Banana", 0.8, 20);

    product1.GetProductDetaitls();
    product2.GetProductDetaitls();

    Minimarket::Customer customer("C001", "John Doe", "john.doe@gmail.com");

    customer.place_order(product1);

    Minimarket::ShoppingCart cart;
    cart.AddToCart(product1);
    cart.AddToCart(product2);

    cout << "Total price in the shopping cart: $" << cart.CalculateThePrice() << endl;

    Minimarket::DiscountableProduct discountedProduct(10); 
    double discountedPrice = discountedProduct.ApplyDiscount(product1.GetPrice());
    cout << "Discounted Price: $" << discountedPrice << endl;

    Minimarket::PaymentProcessor paymentProcessor(50);
    double remainingMoney = paymentProcessor.RemainingMoney();
    cout << "Remaining money on the card: $" << remainingMoney << endl;

    Minimarket::Check check(50);
    check.Printing();

    Minimarket::FeedBackSystem feedback("C001", "John Doe", "john.doe@gmail.com", "Great service!", 5);
    feedback.ReceivedFeedback();

    Minimarket::Stock stock("Apple", "P001", 50);
    stock.StockInfo();

    Minimarket::Subscription subscription;
    subscription.SubscriptionInfo(customer, 6);

    return 0;
}
