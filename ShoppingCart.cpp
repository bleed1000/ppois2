namespace Minimarket{
	class ShoppingCart {
	protected:
		std::vector<Product> products;
		double total = CalculateThePrice();
	public:
		void AddToCart(const Product& product);

		double CalculateThePrice();
	};
}