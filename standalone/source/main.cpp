#include <gateway/gateway.h>
#include <gateway/version.h>

#include <cxxopts.hpp>
#include <iostream>
#include <string>

auto main(int argc, char** argv) -> int {
  
  cxxopts::Options options(*argv, "LoRa gateway application");

  std::string name;

  // clang-format off
  options.add_options()
    ("h,help", "Show help")
    ("v,version", "Print the current version number")
    ("n,name", "Name to greet", cxxopts::value(name)->default_value("World"))
  ;
  // clang-format on

  auto result = options.parse(argc, argv);

  if (result["help"].as<bool>()) {
    std::cout << options.help() << std::endl;
    return 0;
  }

  if (result["version"].as<bool>()) {
    std::cout << "Lora gateway, version " << GATEWAY_VERSION << std::endl;
    return 0;
  }

  gateway::Gateway gateway(name);
  std::cout << gateway.test() << std::endl;

  return 0;
}
