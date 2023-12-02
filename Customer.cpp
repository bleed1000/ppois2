namespace Minimarket{
	class Customer
	{
	protected:
		std::string CustomerId;
		std::string name;
		std::string email;
	public:
		Customer(const std::string& CustomerCustomerId, const std::string& CustomerName, const std::string& CustomerEmail)
			: CustomerId(CustomerCustomerId), name(CustomerName), email(CustomerEmail) {}
		void place_order(const Product& product);

		std::string GetName() const { return name; }
	};
}
