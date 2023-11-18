#pragma once

#include <string>
#include <iostream>
#include <vector>

namespace Minimarket {
	class Product {
	public:
		Product(const std::string& productName, double productPrice, int productQuantity)
			: name(productName), price(productPrice), quantity(productQuantity) {}

		void GetProductDetaitls();

		const std::string& GetName() const { return name; }
		double GetPrice() const { return price; }
		int GetQuantity() const { return quantity; }
	private:
		std::string name;
		double price;
		int quantity;


	};

	class Customer
	{
	protected:
		std::string customer_id;
		std::string name;
		std::string email;
	public:
		Customer(const std::string& CustomerCustomer_id, const std::string& CustomerName, const std::string& CustomerEmail)
			: customer_id(CustomerCustomer_id), name(CustomerName), email(CustomerEmail) {}
		void place_order(const Product& product);

		std::string GetName() const { return name; }
	};

	class IDiscountable {
	public:
		virtual double ApplyDiscount(double originalPrice) = 0;
		virtual ~IDiscountable() = default;
	};

	class DiscountableProduct : public IDiscountable {
	private:
		double discountRate;

	public:
		DiscountableProduct(double discountRate)
			: discountRate(discountRate) {}
		double ApplyDiscount(double originalPrice);
	};

	class ShoppingCart {
	protected:
		std::vector<Product> products;
		double total = CalculateThePrice();
	public:
		void AddToCart(const Product& product);

		double CalculateThePrice();
	};

	class PaymentProcessor : protected ShoppingCart {
	protected:
		double sum_on_card;
	public:
		PaymentProcessor(double sum_on_card)
			: sum_on_card(sum_on_card) {}
		double RemainingMoney();
	};

	class Check : protected PaymentProcessor {
	public:
		Check(double sum_on_card) : PaymentProcessor(sum_on_card) {}
		void Printing();
	};

	class FeedBackSystem : protected Customer {
	protected:
		std::string feedback;
		int rate;
	public:
		FeedBackSystem(const std::string& Customer_id, const std::string& Name, const std::string& Email, std::string feedback, int rate)
			: Customer(Customer_id, Name, Email), feedback(feedback), rate(rate) {}
		void ReceivedFeedback();
	};

	class Stock {
	protected:
		std::string product_name_s;
		std::string product_id_s;
		int quantity_s;
	public:
		Stock(std::string product_name_s, std::string product_id_s, int quantity_s)
			: product_name_s(product_name_s), product_id_s(product_id_s), quantity_s(quantity_s) {}

		void StockInfo();
	};


	class Subscription {
	protected:
		int duration;
	public:
		void SubscriptionInfo(const Customer& customer, int duration);
	};
}
