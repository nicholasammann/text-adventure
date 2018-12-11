// TextAdventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

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

    pr("Corth knew he didn't have much time.\n");
    pr("Glancing around cautiously at the massive fyr trees,\n");
    pr("he shouldered his pack and trudged on. Beams of \n");
    pr("moonlight penetrated the canopy overhead, illuminating\n");
    pr("the rigid carpet of gnarled roots under his feet. The wide\n");
    pr("trunks of the fyr trees formed a protective cloak that\n");
    pr("hid him from the hawk - eyed gaze of his pursuers while\n");
    pr("all around, the forest floor rose and fell in gentle slopes\n");
    pr("that offered the illusion of safety - a promise Corth knew\n");
    pr("to be a lie.");


    std::this_thread::sleep_for(std::chrono::seconds(10));
    system("CLS");

  }

  return 0;
}

