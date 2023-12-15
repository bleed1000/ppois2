namespace Minimarket{
	class Stock {
	protected:
		std::string productName;
		std::string productId;
		int quantity;
	public:
		Stock(std::string productName, std::string productId, int quantity)
			: productName(productName), productId(productId), quantity(quantity) {}

		void StockInfo();
	};
}
