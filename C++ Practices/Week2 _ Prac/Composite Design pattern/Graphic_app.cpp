#include "Graphic.h"

int main()
{
  Line line;
  Rectangle rect;
  Text text;

  line.draw();
  rect.draw();
  text.draw();

  Picture pic;
  pic.add(&line);
  pic.add(&rect);
  pic.add(&text);
  pic.add(&rect);
  pic.draw();

  return 0;
}