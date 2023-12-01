namespace Minimarket{
	class IDiscountable {
	public:
		virtual double ApplyDiscount(double originalPrice) = 0;
		virtual ~IDiscountable() = default;
	};
}