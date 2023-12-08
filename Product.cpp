namespace Minimarket {
	class Product {
	public:
		Product(const std::string& ProductName, double ProductPrice, int ProductQuantity)
			: Name(ProductName), Price(ProductPrice), Quantity(ProductQuantity) {}

		void GetProductDetaitls();

		const std::string& GetName() const { return Name; }
		double GetPrice() const { return Price; }
		int GetQuantity() const { return Quantity; }
	private:
		std::string Name;
		double Price;
		int Quantity;


	};
}
