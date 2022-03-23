//================================================================================================
// *************   CREALITY PRINTERS with BIGREETECH SKR E3 Turbo board (ARM M3)   ***************
//================================================================================================

/* 
 * Uncomment the correct 3D Printer below
*/
//#define CR10_MINI
#define ENDER3


#if ENABLED(CR10_MINI)
  #include "../config/CR10Mini/Configuration.h"
#endif
#if ENABLED(ENDER3)
  #include "../config/Ender3/Configuration.h"
#endif 