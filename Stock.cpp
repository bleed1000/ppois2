namespace Minimarket{
	class Stock {
	protected:
		std::string product_name;
		std::string product_id;
		int quantity;
	public:
		Stock(std::string product_name_s, std::string product_id_s, int quantity_s)
			: product_name(product_name_s), product_id(product_id_s), quantity(quantity_s) {}

		void StockInfo();
	};
}
