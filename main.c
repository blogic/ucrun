#include "ucrun.h"

static struct ucrun ucrun;

int main(int argc, const char **argv)
{
	if (argc < 2)
		return -1;

	uloop_init();
	ucode_init(&ucrun, argv[1]);
	uloop_run();

	return 0;
}
