#include <iostream>
#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"
int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}
 
// int main()
// {
//     Warlock richard("Richard", "the Titled");

//     Dummy bob;
//     Fwoosh* fwoosh = new Fwoosh();

//     richard.learnSpell(fwoosh);
//     delete fwoosh;          // ensure Warlock stored a clone

//     richard.learnSpell(new Fwoosh());  // overwrite test
//     richard.learnSpell(new Fwoosh());  // overwrite again

//     richard.introduce();

//     // valid launch
//     richard.launchSpell("Fwoosh", bob);

//     // forget existing spell
//     richard.forgetSpell("Fwoosh");

//     // should do nothing now
//     richard.launchSpell("Fwoosh", bob);

//     // should do nothing (not known)
//     richard.launchSpell("Unknown", bob);

//     // should do nothing (not known)
//     richard.forgetSpell("Imaginary");

//     return 0;
// }
