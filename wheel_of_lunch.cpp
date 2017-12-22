#include <emscripten.h>

static const char* FOOD_PLACES[]  = {
  "Bar Burrito",
  // "Bento Ya",
  "Dough",
  "Herbivore Kitchen",
  "Hula",
  "Let us eat",
  // "Maki and Ramen",
  "Mama's",
  "Pizza Express",
  "Pumpkin Brown",
  "Redbox",
  "Söderberg",
  "Taquito",
  "The Red Squirrel",
  "Ting Thai Caravan",
  "Wagamama",
  "Wildman Wood",
  "Zizzi's",
};

extern "C" {
  EMSCRIPTEN_KEEPALIVE
  const char* make_suggestion() {
    return FOOD_PLACES[1];
  }
}
