#include "message.hpp"


int main(){

	Message say_hi("Anil says Hi");
	Message say_bye;// imp note if say_bye constructed like  say_bye() then the class is not called, if only say_bye is called then def for Message() is called

	std::cout << say_hi << say_bye;

	return 0;
}
