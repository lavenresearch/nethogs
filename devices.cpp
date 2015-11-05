#include "devices.h"

device * determine_default_device()
{
	return new device("enp1s0f0");
}

