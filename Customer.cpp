namespace Minimarket{
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
}