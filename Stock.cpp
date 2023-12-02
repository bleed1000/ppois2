namespace Minimarket{
	class Stock {
	protected:
		std::string ProductName;
		std::string ProductId;
		int Quantity;
	public:
		Stock(std::string ProductName, std::string ProductId, int Quantity)
			: ProductName(ProductName), ProductId(ProductId), Quantity(Quantity) {}

		void StockInfo();
	};
}
