// BoostLog.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

#include <boost/log/trivial.hpp>

int _tmain(int argc, _TCHAR* argv[])
{
	BOOST_LOG_TRIVIAL( trace ) << "A trace severity message";
	BOOST_LOG_TRIVIAL( debug ) << "A debug severity message";
	BOOST_LOG_TRIVIAL( info ) << "An informational severity message";
	BOOST_LOG_TRIVIAL( warning ) << "A warning severity message";
	BOOST_LOG_TRIVIAL( error ) << "An error severity message";
	BOOST_LOG_TRIVIAL( fatal ) << "A fatal severity message";

	getchar();
	return 0;
}

