#pragma once
#ifndef Base64_H
#define Base64_H

//B64 Encoding
#include <vector>
#include <string>

namespace Base64 {
	std::string base64_encode(const std::string &);

	const std::string &SALT1 = "LM::TB::BB";
	const std::string &SALT2 = "_:/_77";
	const std::string &SLAT3 = "line=wowC++";
}



#endif // !Base64_H
