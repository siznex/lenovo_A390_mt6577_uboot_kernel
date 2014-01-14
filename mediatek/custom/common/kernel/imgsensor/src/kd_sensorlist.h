//s_add new sensor driver here
//export funtions
UINT32 MT9P012SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9P015SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5647MIPISensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5647SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9P017SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9P017MIPISensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 HM3451SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV2650SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV2655_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV2659_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV3640SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV3640_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5650SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5650MIPISensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5640_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5642_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc); 
UINT32 HI542_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc); 
UINT32 OV5642_MIPI_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5642_MIPI_RGB_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5642_MIPI_JPG_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV5642_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);

UINT32 OV5642_YUV_SWI2C_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV7675_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 IMX073_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc); 
UINT32 A8141_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc); 
UINT32 MT9V113_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9V114_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9V115_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9M114_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9T113_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 MT9T113MIPI_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 HI253_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 SIV120B_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 SIV121D_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 PAS6180_SERIAL_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 SHARP3D_MIPI_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 HI704_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K4E1GA_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 A5141_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 A5142_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV7692_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV7690_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K4E1FX_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K5CAGXMIPI_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K5CAGX_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K4ECGX_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV8830SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 IMX105_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 OV9726_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT * pfFunc);
UINT32 SP2518_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC0329_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 GC0308_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);

//SW4-L1-HL-Camera-S1UMainCamFrontCamBringUp-00+{_20120705
UINT32 S5K8AAYX_YUV_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 S5K3H2YX_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);
UINT32 HI542_MIPI_RAW_SensorInit(PSENSOR_FUNCTION_STRUCT *pfFunc);


//! Add Sensor Init function here
//! Note:
//! 1. Add by the resolution from ""large to small"", due to large sensor 
//!    will be possible to be main sensor. 
//!    This can avoid I2C error during searching sensor. 
//! 2. This file should be the same as mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp 
ACDK_KD_SENSOR_INIT_FUNCTION_STRUCT kdSensorList[MAX_NUM_OF_SUPPORT_SENSOR+1] =
{
#if defined(OV8830_RAW)
    {OV8830_SENSOR_ID, SENSOR_DRVNAME_OV8830_RAW, OV8830SensorInit}, 
#endif
#if defined(IMX073_MIPI_RAW)
    {IMX073_SENSOR_ID, SENSOR_DRVNAME_IMX073_MIPI_RAW, IMX073_MIPI_RAW_SensorInit}, 
#endif
#if defined(S5K3H2YX_MIPI_RAW)
    {S5K3H2YX_SENSOR_ID, SENSOR_DRVNAME_S5K3H2YX_MIPI_RAW, S5K3H2YX_MIPI_RAW_SensorInit}, 
#endif
#if defined(A8141_MIPI_RAW)
    {A8141_SENSOR_ID, SENSOR_DRVNAME_A8141_MIPI_RAW, A8141_MIPI_RAW_SensorInit}, 
#endif

#if defined(S5K4E1GA_MIPI_RAW)
    {S5K4E1GA_SENSOR_ID, SENSOR_DRVNAME_S5K4E1GA_MIPI_RAW, S5K4E1GA_MIPI_RAW_SensorInit}, 
#endif
#if defined(S5K4E1FX_MIPI_RAW_NFC_ZTE)
    {S5K4E1FX_SENSOR_ID, SENSOR_DRVNAME_S5K4E1FX_MIPI_RAW, S5K4E1FX_MIPI_RAW_SensorInit}, 
#endif
#if defined(S5K5CAGX_MIPI_YUV_NFC_ZTE)
    {S5K5CAGXMIPI_SENSOR_ID, SENSOR_DRVNAME_S5K5CAGX_MIPI_YUV, S5K5CAGXMIPI_YUV_SensorInit}, 
#endif
#if defined(OV5640_YUV)
   {OV5640_SENSOR_ID, SENSOR_DRVNAME_OV5640_YUV,OV5640_YUV_SensorInit},
#endif
#if defined(OV5642_RAW)
    {OV5642_SENSOR_ID, SENSOR_DRVNAME_OV5642_RAW, OV5642_RAW_SensorInit}, 
#endif
#if defined(HI542_RAW)
    {HI542_SENSOR_ID, SENSOR_DRVNAME_HI542_RAW, HI542_RAW_SensorInit}, 
#endif
#if defined(HI542_MIPI_RAW)
    {HI542MIPI_SENSOR_ID, SENSOR_DRVNAME_HI542MIPI_RAW, HI542_MIPI_RAW_SensorInit}, 
#endif
#if defined(OV5642_MIPI_YUV)
    {OV5642_SENSOR_ID, SENSOR_DRVNAME_OV5642_MIPI_YUV, OV5642_MIPI_YUV_SensorInit}, 
#endif
#if defined(OV5642_MIPI_RGB)
    {OV5642_SENSOR_ID, SENSOR_DRVNAME_OV5642_MIPI_RGB, OV5642_MIPI_RGB_SensorInit}, 
#endif
#if defined(OV5642_MIPI_JPG)
    {OV5642_SENSOR_ID, SENSOR_DRVNAME_OV5642_MIPI_JPG, OV5642_MIPI_JPG_SensorInit}, 
#endif
#if defined(OV5642_YUV)
    {OV5642_SENSOR_ID, SENSOR_DRVNAME_OV5642_YUV, OV5642_YUV_SensorInit}, 
#endif
#if defined(OV5642_YUV_SWI2C)
    {OV5642_SENSOR_ID, SENSOR_DRVNAME_OV5642_YUV_SWI2C, OV5642_YUV_SWI2C_SensorInit}, 
#endif
#if defined(OV5647_MIPI_RAW)
    {OV5647MIPI_SENSOR_ID, SENSOR_DRVNAME_OV5647MIPI_RAW, OV5647MIPISensorInit}, 
#endif
#if defined(OV5647_RAW)
    {OV5647_SENSOR_ID, SENSOR_DRVNAME_OV5647_RAW, OV5647SensorInit}, 
#endif
#if defined(OV5650_RAW)
	{OV5650_SENSOR_ID, SENSOR_DRVNAME_OV5650_RAW,OV5650SensorInit},
#endif
#if defined(OV5650MIPI_RAW)
	{OV5650MIPI_SENSOR_ID, SENSOR_DRVNAME_OV5650MIPI_RAW,OV5650MIPISensorInit},
#endif
#if defined(MT9P012_RAW)
	{MT9P012_SENSOR_ID, SENSOR_DRVNAME_MT9P012_RAW,MT9P012SensorInit},
#endif
#if defined(MT9P015_RAW)
  {MT9P015_SENSOR_ID, SENSOR_DRVNAME_MT9P015_RAW,MT9P015SensorInit},
#endif
#if defined(MT9P017_RAW)
  {MT9P017_SENSOR_ID, SENSOR_DRVNAME_MT9P017_RAW,MT9P017SensorInit},
#endif
#if defined(MT9P017_MIPI_RAW)
  {MT9P017MIPI_SENSOR_ID, SENSOR_DRVNAME_MT9P017_MIPI_RAW,MT9P017MIPISensorInit},
#endif
#if defined(A5141_MIPI_RAW)
  {A5141MIPI_SENSOR_ID, SENSOR_DRVNAME_A5141_MIPI_RAW,A5141_MIPI_RAW_SensorInit},
#endif
#if defined(A5142_MIPI_RAW)
  {A5142MIPI_SENSOR_ID, SENSOR_DRVNAME_A5142_MIPI_RAW,A5142_MIPI_RAW_SensorInit},
#endif
#if defined(HM3451_RAW)
    {HM3451_SENSOR_ID, SENSOR_DRVNAME_HM3451_RAW, HM3451SensorInit}, 
#endif
#if defined(OV3640_RAW)
	{OV3640_SENSOR_ID, SENSOR_DRVNAME_OV3640_RAW,OV3640SensorInit},
#endif
#if defined(OV3640_YUV)
    {OV3640_SENSOR_ID, SENSOR_DRVNAME_OV3640_YUV, OV3640_YUV_SensorInit}, 
#endif
#if defined(OV3640_YUV_AF)
    {OV3640_SENSOR_ID, SENSOR_DRVNAME_OV3640_YUV, OV3640_YUV_SensorInit}, 
#endif
#if defined(MT9T113_YUV)
    {MT9T113_SENSOR_ID, SENSOR_DRVNAME_MT9T113_YUV, MT9T113_YUV_SensorInit}, 
#endif
#if defined(MT9T113_MIPI_YUV)
    {MT9T113MIPI_SENSOR_ID, SENSOR_DRVNAME_MT9T113_MIPI_YUV,MT9T113MIPI_YUV_SensorInit}, 
#endif
#if defined(S5K5CAGX_YUV)
    {S5K5CAGX_SENSOR_ID, SENSOR_DRVNAME_S5K5CAGX_YUV, S5K5CAGX_YUV_SensorInit}, 
#endif
#if defined(OV2650_RAW)
	{OV2650_SENSOR_ID, SENSOR_DRVNAME_OV2650_RAW,OV2650SensorInit},
#endif
#if defined(OV2655_YUV)
	{OV2650_SENSOR_ID, SENSOR_DRVNAME_OV2655_YUV,OV2655_YUV_SensorInit},
#endif
#if defined(SP2518_YUV)
    {SP2518_SENSOR_ID, SENSOR_DRVNAME_SP2518_YUV,SP2518_YUV_SensorInit},
#endif
#if defined(HI253_YUV)
    {HI253_SENSOR_ID, SENSOR_DRVNAME_HI253_YUV, HI253_YUV_SensorInit}, 
#endif
#if defined(OV2659_YUV)
	{OV2659_SENSOR_ID, SENSOR_DRVNAME_OV2659_YUV,OV2659_YUV_SensorInit},
#endif
#if defined(MT9M114_YUV)
	{MT9M114_SENSOR_ID, SENSOR_DRVNAME_MT9M114_YUV,MT9M114_YUV_SensorInit},
#endif
#if defined(OV7675_YUV)
    {OV7675_SENSOR_ID, SENSOR_DRVNAME_OV7675_YUV, OV7675_YUV_SensorInit}, 
#endif
#if defined(MT9V113_YUV)
    {MT9V113_SENSOR_ID, SENSOR_DRVNAME_MT9V113_YUV, MT9V113_YUV_SensorInit}, 
#endif
#if defined(MT9V114_YUV)
    {MT9V114_SENSOR_ID, SENSOR_DRVNAME_MT9V114_YUV, MT9V114_YUV_SensorInit}, 
#endif
#if defined(MT9V115_YUV)
	{MT9V115_SENSOR_ID,SENSOR_DRVNAME_MT9V115_YUV,MT9V115_YUV_SensorInit},
#endif
#if defined(SIV120B_YUV)
    {SIV120B_SENSOR_ID, SENSOR_DRVNAME_SIV120B_YUV, SIV120B_YUV_SensorInit}, 
#endif
#if defined(PAS6180_SERIAL_YUV)
    {PAS6180_SENSOR_ID, SENSOR_DRVNAME_PAS6180_SERIAL_YUV, PAS6180_SERIAL_YUV_SensorInit}, 
#endif
#if defined(SHARP3D_MIPI_YUV)
    {SHARP3D_SENSOR_ID, SENSOR_DRVNAME_SHARP3D_MIPI_YUV, SHARP3D_MIPI_YUV_SensorInit}, 
#endif
#if defined(HI704_YUV)
    {HI704_SENSOR_ID, SENSOR_DRVNAME_HI704_YUV, HI704_YUV_SensorInit}, 
#endif
#if defined(IMX105_MIPI_RAW)
    {IMX105_SENSOR_ID, SENSOR_DRVNAME_IMX105_MIPI_RAW, IMX105_MIPI_RAW_SensorInit}, 
#endif
#if defined(SIV121D_YUV)
    {SIV121D_SENSOR_ID, SENSOR_DRVNAME_SIV121D_YUV, SIV121D_YUV_SensorInit}, 
#endif
#if defined(OV7690_YUV)
    {OV7690_SENSOR_ID, SENSOR_DRVNAME_OV7690_YUV, OV7690_YUV_SensorInit}, 
#endif

#if defined(OV9726_RAW)
	{OV9726_SENSOR_ID,SENSOR_DRVNAME_0V9726_RAW,OV9726_RAW_SensorInit},
#endif
#if defined(OV7692_YUV_NFC_ZTE)
    {OV7692_SENSOR_ID, SENSOR_DRVNAME_OV7692_YUV, OV7692_YUV_SensorInit}, 
#endif
#if defined(OV7690_YUV_NFC_ZTE)
	{OV7690_SENSOR_ID, SENSOR_DRVNAME_OV7690_YUV,OV7690_YUV_SensorInit},
#endif
#if defined(GC0329_YUV)
    {GC0329_SENSOR_ID, SENSOR_DRVNAME_GC0329_YUV,GC0329_YUV_SensorInit},
#endif
#if defined(GC0308_YUV)
	{GC0308_SENSOR_ID,SENSOR_DRVNAME_GC0308_YUV,GC0308_YUV_SensorInit},
#endif

//SW4-L1-HL-Camera-S1UMainCamFrontCamBringUp-00+{_20120705
#if defined(S5K8AAYX_YUV)
    {S5K8AAYX_SENSOR_ID, SENSOR_DRVNAME_S5K8AAYX_YUV, S5K8AAYX_YUV_SensorInit},
#endif

/*  ADD sensor driver before this line */
    {0,{0},NULL}, //end of list
};
//e_add new sensor driver here


