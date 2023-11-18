#include "pch.h"
#include "..\Minimarket\Minimarket.cpp"

TEST(ProductTest, GetProductDetails) {
    Minimarket::Product product("TestProduct", 10.0, 5);
    testing::internal::CaptureStdout();
    product.GetProductDetaitls();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Product details: \nName: TestProduct\nPrice: $10\nQuantity 5\n");
}

TEST(CustomerTest, PlaceOrder) {
    Minimarket::Customer customer("C123", "John Doe", "john.doe@example.com");
    Minimarket::Product product("TestProduct", 10.0, 5);

    testing::internal::CaptureStdout();
    customer.place_order(product);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Customer John Doe with C123 id ordered TestProduct");
}

TEST(DiscountableProductTest, ApplyDiscount) {
    Minimarket::DiscountableProduct discountedProduct(20.0);
    double discountedPrice = discountedProduct.ApplyDiscount(100.0);

    EXPECT_DOUBLE_EQ(discountedPrice, 80.0);
}

TEST(ShoppingCartTest, AddToCart) {
    Minimarket::ShoppingCart cart;
    Minimarket::Product product("TestProduct", 10.0, 5);
    cart.AddToCart(product);

    EXPECT_EQ(cart.CalculateThePrice(), 50.0);
}

TEST(FeedBackSystemTest, ReceivedFeedback) {
    Minimarket::FeedBackSystem feedback("C123", "John Doe", "john.doe@example.com", "Good service", 5);

    testing::internal::CaptureStdout();
    feedback.ReceivedFeedback();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Customer: John DoeSaid: Good serviceAnd rated: 5");
}

TEST(StockTest, StockInfo) {
    Minimarket::Stock stock("TestProduct", "P123", 10);

    testing::internal::CaptureStdout();
    stock.StockInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Name: TestProduct Id: P123 Quantity: 10");
}

TEST(SubscriptionTest, SubscriptionInfo) {
    Minimarket::Customer customer("C123", "John Doe", "john.doe@example.com");
    Minimarket::Subscription subscription;
    subscription.SubscriptionInfo(customer, 6);

    testing::internal::CaptureStdout();
    subscription.SubscriptionInfo(customer, 6);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Customer John Doe has 6 moths subscription");
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}