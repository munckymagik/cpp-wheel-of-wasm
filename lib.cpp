#include <emscripten.h>
#include <stdlib.h>
#include <time.h>

static const char* FOOD_PLACES[]  = {
  "Bar Burrito",
  "Burger Meets Face",
  "Dough",
  "Herbivore Kitchen",
  "Hula",
  "Let us eat",
  "Mama's",
  "Pizza Express",
  "Pret",
  "Pumpkin Brown",
  "Redbox",
  "Taquito",
  "The Red Squirrel",
  "Ting Thai Caravan",
  "The other Ting Thai Caravan",
  "Wagamamas",
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
