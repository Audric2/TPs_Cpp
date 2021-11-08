#ifndef _EXCEPTION_HPP_
#define _EXCEPTION_HPP_

#include <exception>
#include <string>
#include "demangle.hpp"

class ExceptionChaine : public std::exception {
	private:
		std::string _type;
		std::string _msg;
	
	public :
		ExceptionChaine():
			_type(""),
			_msg("")
		{}
		template <typename T>
		ExceptionChaine(T obj) :
			_type(demangle(typeid(obj).name())),
			_msg("Conversion en chaine impossible pour '" + _type + "'")
		{}
		
		const char* what() const noexcept {
			return _msg.c_str();
		}
};

#endif
