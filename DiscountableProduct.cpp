namespace Minimarket{
	class DiscountableProduct : public IDiscountable {
	private:
		double discountRate;

	public:
		DiscountableProduct(double discountRate)
			: DiscountRate(discountRate) {}
		double ApplyDiscount(double originalPrice) override;
	};
}
