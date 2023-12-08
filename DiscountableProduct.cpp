namespace Minimarket{
	class DiscountableProduct : public IDiscountable {
	private:
		double DiscountRate;

	public:
		DiscountableProduct(double DiscountRate)
			: DiscountRate(DiscountRate) {}
		double ApplyDiscount(double OriginalPrice) override;
	};
}
