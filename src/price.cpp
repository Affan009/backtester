#include "bt/price.hpp"

namespace bt {

Price spread(Price best_bid, Price best_ask) {
    return best_ask - best_bid;
}

}
