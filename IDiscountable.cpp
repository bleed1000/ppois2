namespace Minimarket{
	class IDiscountable {
	public:
		virtual double ApplyDiscount(double OriginalPrice) = 0;
		virtual ~IDiscountable() = default;
	};
}
