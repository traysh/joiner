#ifndef JOINER_HPP
#define JOINER_HPP

#include <sstream>

#include <type_traits>

namespace Luvitronics {
	
	class Joiner {
	public:
		template <typename T>
		Joiner& operator<< (const T& t) {
			if (std::is_class<T>::value)
				_streamer << std::to_string(t);
			else
				_streamer << t;
			
			return *this;
		}
		
		template <typename T>
		Joiner& operator<< (const T* t) {
			_streamer << t;
			return *this;
		}
		
		operator std::string() {
			auto str = _streamer.str();
			_streamer.str("");
			return str;
		}
		
	private:
		std::stringstream _streamer;
	};
	
	extern Joiner joiner;
}

#endif //JOINER_HPP
