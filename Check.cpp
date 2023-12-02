namespace Minimarket{
	class Check : protected PaymentProcessor {
	public:
		Check(double SumOnCard) : PaymentProcessor(SumOnCard) {}
		void Printing();
	};
}
