#ifndef _CHAINE_HPP_
#define _CHAINE_HPP_

#include <exception>
#include <string>
#include <sstream>
#include "demangle.hpp"
#include "exception.hpp"

template <typename T> constexpr bool isTuple = false;
template <typename... ARGS> constexpr bool isTuple<std::tuple<ARGS...>> = true;

template <typename T,size_t... Is>
std::string chaine_bis(const T & t,std::index_sequence<Is...>);


std::string chaine(){
	return "";
}

template <typename T>
std::string chaine(const T x){
	if constexpr (isTuple<T>){
		return chaine_bis(x,std::make_index_sequence<std::tuple_size_v<T>>());
	}else{
		throw ExceptionChaine(x);
	}
}

template <typename T>
std::string conv(const T x){
	return std::to_string(x);
	/*std::stringstream ss;
	ss << x;
	return ss.str();*/
}

template <>
std::string chaine<int>(const int x){
	return conv(x);
}
template <>
std::string chaine<double>(const double x){
	return conv(x);
}
template <>
std::string chaine<std::string>(const std::string x){
	return x;
}

template <typename T,typename... TYPES>
std::string chaine(const T x ,const TYPES... obj){
	return chaine(x) + " " + chaine(obj...);
}

template <typename T,size_t... Is>
std::string chaine_bis(const T & t,std::index_sequence<Is...>){ 
	return chaine(std::get<Is>(t)...);
}

template <typename... ARGS>
std::string chaine(const std::tuple<ARGS...> & t){
	return chaine_bis(t,std::make_index_sequence<sizeof...(ARGS)>()); 
}

#endif
