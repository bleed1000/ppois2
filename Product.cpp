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
}