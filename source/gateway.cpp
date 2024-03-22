#include <fmt/format.h>
#include <gateway/gateway.h>

using namespace gateway;

Gateway::Gateway(std::string _name) : name(std::move(_name)) {}

std::string Gateway::test() const {
    return fmt::format("Hello, {}!", name);
}
