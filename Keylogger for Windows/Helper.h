
#ifndef HELPER_H
#define HELPER_H

#include <ctime>
#include <string>
#include <sstream>

namespace Helper {
	template <class T> 

	std::string ToString(const T&);

	struct DateTime
	{
		DateTime() {
			time_t ms;
			time(&ms);
		}
	};
}


#endif // !HELPER_H

