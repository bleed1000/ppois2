namespace Minimarket{
	class FeedBackSystem : protected Customer {
	protected:
		std::string feedback;
		int rate;
	public:
		FeedBackSystem(const std::string& customerId, const std::string& name, const std::string& email, std::string feedback, int rate)
			: Customer(customerId, name, email), feedback(feedback), rate(rate) {}
		void ReceivedFeedback();
	};
}
