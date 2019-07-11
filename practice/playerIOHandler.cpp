#include "playerIOHandler.h"

PlayerIOHandler::PlayerIOHandler()
{
}


PlayerIOHandler::~PlayerIOHandler()
{
}

IOHandler::KeyCode PlayerIOHandler::processInput()
{
	keyboardKeyCode = _getwch();
	return IOHandler::lookupKeyCode(keyboardKeyCode);
}

bool PlayerIOHandler::isPauseKey()
{
	return keyboardKeyCode == IOHandler::KeyCode::SPC;
}

bool PlayerIOHandler::isExitKey()
{
	return keyboardKeyCode == IOHandler::KeyCode::ESC;
}
