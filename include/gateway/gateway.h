#pragma once

#include <string>

namespace gateway {

  /**
   * @brief A class for saying hello in multiple languages
   */
  class Gateway {
    std::string name;

  public:
    /**
     * @brief Creates a new Gateway
     * @param name the name to greet
     */
    Gateway(std::string name);

    /**
     * @brief Just simple function to not leave the class empty
     * @return a string containing the greeting
     */
    std::string test() const;
  };

}  // namespace gateway
