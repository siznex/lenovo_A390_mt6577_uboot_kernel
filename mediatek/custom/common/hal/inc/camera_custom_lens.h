#ifndef __CAMERA_CUSTOM_LENS_H_
#define __CAMERA_CUSTOM_LENS_H_

//#include "../../../../inc/MediaTypes.h"
//#include "msdk_nvram_camera_exp.h"
//#include "camera_custom_nvram.h"

#define MAX_NUM_OF_SUPPORT_LENS                 16

#define DUMMY_SENSOR_ID                      0xFFFF


/* LENS ID */
#define DUMMY_LENS_ID                        0xFFFF
#define FM50AF_LENS_ID                       0x0001
#define MT9P017AF_LENS_ID                    0x0002
#define A8141AF_LENS_ID                    0x0003
#define A5141AF_LENS_ID                    0x0004

#define SENSOR_DRIVE_LENS_ID                 0x1000



/* AF LAMP THRESHOLD*/
#define AF_LAMP_LV_THRES 60


typedef UINT32(*PFUNC_GETLENSDEFAULT)(VOID*, UINT32);

typedef struct
{
    UINT32 SensorId;
    UINT32 LensId;
    UINT8  LensDrvName[32];
    UINT32 (*getLensDefault)(VOID *pDataBuf, UINT32 size);

} MSDK_LENS_INIT_FUNCTION_STRUCT, *PMSDK_LENS_INIT_FUNCTION_STRUCT;


UINT32 GetLensInitFuncList(PMSDK_LENS_INIT_FUNCTION_STRUCT pLensList);

#endif /* __MSDK_LENS_EXP_H */




