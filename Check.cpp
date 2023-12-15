namespace Minimarket{
	class Check : protected PaymentProcessor {
	public:
		Check(double sumOnCard) : PaymentProcessor(sumOnCard) {}
		void Printing();
	};
}
