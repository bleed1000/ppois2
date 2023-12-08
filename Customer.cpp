namespace Minimarket{
	class Customer
	{
	protected:
		std::string CustomerId;
		std::string Name;
		std::string Email;
	public:
		Customer(const std::string& CustomerCustomerId, const std::string& CustomerName, const std::string& CustomerEmail)
			: CustomerId(CustomerCustomerId), Name(CustomerName), Email(CustomerEmail) {}
		void place_order(const Product& product);

		std::string GetName() const { return Name; }
	};
}
