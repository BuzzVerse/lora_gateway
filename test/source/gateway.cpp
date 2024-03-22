#include <doctest/doctest.h>
#include <gateway/gateway.h>
#include <gateway/version.h>

#include <string>

TEST_CASE("Gateway") {
  using namespace gateway;

  Gateway gateway("Tests");

  CHECK(gateway.test() == "Hello, Tests!");
}

TEST_CASE("Gateway version") {
  static_assert(std::string_view(GATEWAY_VERSION) == std::string_view("0.1"));
  CHECK(std::string(GATEWAY_VERSION) == std::string("0.1"));
}
