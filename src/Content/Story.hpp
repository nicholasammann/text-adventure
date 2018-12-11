#include <list>

#include "Content/Chapter.hpp"

class Story
{
public:
  Story();

private:
  std::list<Chapter> mChapters;

};