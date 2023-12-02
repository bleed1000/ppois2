namespace Minimarket{
	class PaymentProcessor : protected ShoppingCart {
	protected:
		double SumOnCard;
	public:
		PaymentProcessor(double SumOnCard)
			: SumOnCard(SumOnCard) {}
		double RemainingMoney();
	};	
}
