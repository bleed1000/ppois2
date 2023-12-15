namespace Minimarket{
	class Customer
	{
	protected:
		std::string customerId;
		std::string name;
		std::string email;
	public:
		Customer(const std::string& customerCustomerId, const std::string& customerName, const std::string& customerEmail)
			: customerId(CustomerCustomerId), name(CustomerName), email(customerEmail) {}
		void place_order(const Product& product);

		std::string GetName() const { return name; }
	};
}
