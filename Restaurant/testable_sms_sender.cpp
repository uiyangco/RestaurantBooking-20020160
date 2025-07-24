#include <iostream>
#include "sms_sender.cpp"

class TestableSmsSender : public SmsSender
{
public:
	void send(Schedule* schedule) override
	{
		std::cout << "테스트용 SmsSender class의 method 수행됨\n";
		sendMethodIsCalled = true;
	}

	bool isSendMethodIsCalled()
	{
		return sendMethodIsCalled;
	}

private:
	bool sendMethodIsCalled;
};