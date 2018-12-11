#ifdef _MSC_VER
#  pragma comment(linker, "/SUBSYSTEM:CONSOLE")
#endif

#include <cstdlib>
#include <chrono>
#include <iostream>
#include <thread>

void cr()
{
  std::cout << "\r                                                                                    \r";
}

void pr(std::string text)
{
  for (char &c : text)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(75));
    std::cout << c;
  }
  std::cout << '\n';
}

void clear()
{
#ifdef _WIN64 || _WIN32
  std::system("cls");
#else
  // Assume POSIX
  std::system ("clear");
#endif
}

int main()
{
  bool running = true;

  while (running)
  {
    cr();
    std::cout << "Tales From Afyr";

    std::this_thread::sleep_for(std::chrono::seconds(3));

    cr();

    pr("Corth knew he didn't have much time.");
    pr("Glancing around cautiously at the massive fyr trees,");
    pr("he shouldered his pack and trudged on. Beams of");
    pr("moonlight penetrated the canopy overhead, illuminating");
    pr("the rigid carpet of gnarled roots under his feet. The wide");
    pr("trunks of the fyr trees formed a protective cloak that");
    pr("hid him from the hawk - eyed gaze of his pursuers while");
    pr("all around, the forest floor rose and fell in gentle slopes");
    pr("that offered the illusion of safety - a promise Corth knew");
    pr("to be a lie.");

    std::this_thread::sleep_for(std::chrono::seconds(10));
    clear();

  }

  return 0;
}

