#pragma once
#include <cstdint>

namespace bt {

using Price = std::int64_t; // stored as multiples of tick size

Price spread(Price best_bid, Price best_ask); // bid-ask spread

}
