#ifndef GETTEXTPP_HPP
#define GETTEXTPP_HPP

#include <map>
#include <string>

namespace gettextpp
{
	template <class Iterator>
	std::map <std::string, std::string> parse(const Iterator begin, Iterator end)
	{
		return {};
	}

	std::map <std::string, std::string> parse(const std::string& s)
	{
		return parse(s.begin(), s.end());
	}
}

#endif
