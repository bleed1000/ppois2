namespace Minimarket{
	class FeedBackSystem : protected Customer {
	protected:
		std::string feedback;
		int rate;
	public:
		FeedBackSystem(const std::string& Customer_id, const std::string& Name, const std::string& Email, std::string feedback, int rate)
			: Customer(Customer_id, Name, Email), feedback(feedback), rate(rate) {}
		void ReceivedFeedback();
	};
}
