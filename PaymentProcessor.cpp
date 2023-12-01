namespace Minimarket{
	class PaymentProcessor : protected ShoppingCart {
	protected:
		double sum_on_card;
	public:
		PaymentProcessor(double sum_on_card)
			: sum_on_card(sum_on_card) {}
		double RemainingMoney();
	};	
}
