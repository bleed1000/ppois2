namespace Minimarket{
	class Check : protected PaymentProcessor {
	public:
		Check(double sum_on_card) : PaymentProcessor(sum_on_card) {}
		void Printing();
	};
}
