namespace Minimarket{
	class PaymentProcessor : protected ShoppingCart {
	protected:
		double sumOnCard;
	public:
		PaymentProcessor(double sumOnCard)
			: SumOnCard(sumOnCard) {}
		double RemainingMoney();
	};	
}
