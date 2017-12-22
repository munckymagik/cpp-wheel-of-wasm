#include <emscripten.h>
#include <stdlib.h>
#include <time.h>

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
static const auto FOOD_PLACES_LEN = sizeof(FOOD_PLACES) / sizeof(char*);

extern "C" {
  EMSCRIPTEN_KEEPALIVE
  const char* make_suggestion() {
    srand(time(nullptr));
    auto rand_index = rand();
    return FOOD_PLACES[rand_index % FOOD_PLACES_LEN];
  }
}
