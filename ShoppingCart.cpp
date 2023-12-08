namespace Minimarket{
	class ShoppingCart {
	protected:
		std::vector<Product> Products;
		double Total = CalculateThePrice();
	public:
		void AddToCart(const Product& Product);

		double CalculateThePrice();
	};
}
