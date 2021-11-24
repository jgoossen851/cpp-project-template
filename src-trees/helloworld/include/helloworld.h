
/// A Hello World Example
namespace helloworld {

  /**
   * @brief Function to print "Hello World" in a bold font
   *
   * No only that, but this function shows how to embed an image
   * in the source code documentation.
   * \image html Gthumb.svg
   * 
   * @return int Flag to indicate success (0) or failure (1)
   */
  int sayHelloWorld(void);

  /**
   * @brief Function to print a personalized welome message.
   * 
   * See [the other page](@ref MoreInfoLink) for more info.
   *
   * @param name Name to personalize the message
   * @return int Flag to indicate success (0) or failure (1)
   */
  int sayWelcome(char* name);

}
