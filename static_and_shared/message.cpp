#include "message.hpp"

Message::Message(std::string msg){
	val = msg;
}

Message::Message(){
	val= "Default msg";
}

Message::~Message(){
}

std::ostream& operator<<(std::ostream& os, const Message& msg){

	os << "The Message: " << msg.val << std::endl;
	return os;
}


