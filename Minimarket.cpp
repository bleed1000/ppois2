#include "Minimarket.h"

using namespace std;

namespace Minimarket {

	void Product::GetProductDetaitls() {
		cout << "Product details: " << endl;
		cout << "Name: " << name << endl;
		cout << "Price: $" << price << endl;
		cout << "Quantity " << quantity << endl;
	}

	void Customer::place_order(const Product& product) {
		cout << "Customer " << name << " with " << CustomerId << " id ordered " << product.GetName();
	}

	double DiscountableProduct::ApplyDiscount(double originalPrice) {
		return originalPrice - (originalPrice * discountRate / 100.0);
	}

	void ShoppingCart::AddToCart(const Product& product) {
		products.push_back(product);
	}

	double ShoppingCart::CalculateThePrice() {
		double total = 0.0;
		for (size_t i = 0; i != products.size(); ++i) {
			total += products[i].GetPrice() * products[i].GetQuantity();
		}
		return total;
	}

	double PaymentProcessor::RemainingMoney() {
		return SumOnCard -= total;
	}

	void Check::Printing() {
		for (size_t i = 0; i < products.size(); i++)
		{
			cout << "Name: " << products[i].GetName() << "Quantity: " << products[i].GetQuantity() << "Price: " << products[i].GetQuantity() * products[i].GetPrice();
			cout << endl;
		}
	}

	void FeedBackSystem::ReceivedFeedback() {
		cout << "Customer: " << name << "Said: " << feedback << "And rated: " << rate;
	}

	void Stock::StockInfo() {
		cout << "Name: " << ProductName << " Id: " << ProductId << " Quantity: " << Quantity;
	}

	void Subscription::SubscriptionInfo(const Customer& customer, int duration) {
		cout << "Customer " << customer.GetName() << " has " << duration << " moths subscription";
	}
}
