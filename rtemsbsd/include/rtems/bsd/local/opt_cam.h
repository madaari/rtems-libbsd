#define CAMDEBUG 1
#define CAM_DEBUG_FLAGS (CAM_DEBUG_INFO|CAM_DEBUG_PROBE|CAM_DEBUG_PERIPH)
#include <rtems/bsd/modules.h>
#ifdef RTEMS_BSD_MODULE_MMCCAM
	#define MMCCAM 1
#endif
