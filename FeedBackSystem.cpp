namespace Minimarket{
	class FeedBackSystem : protected Customer {
	protected:
		std::string Feedback;
		int Rate;
	public:
		FeedBackSystem(const std::string& CustomerId, const std::string& Name, const std::string& Email, std::string Feedback, int Rate)
			: Customer(CustomerId, Name, Email), Feedback(Feedback), Rate(Rate) {}
		void ReceivedFeedback();
	};
}
