/******************************************************************************

    Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       : Tds_MeasReturnRslt.h
  Description     : Tds_MeasReturnRslt.h header file
  History         :
     1.xiaojun 58160       2012-12-13     Draft Enact
     2.
******************************************************************************/

#ifndef __TDS_MEASRETURNRSLT_H__
#define __TDS_MEASRETURNRSLT_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 Include Headfile
*****************************************************************************/

#include  "type_define.h"



/*#pragma pack(4)*/

/*****************************************************************************
  2 macro
*****************************************************************************/


/*****************************************************************************
  3 Massage Declare
*****************************************************************************/


/*****************************************************************************
  4 Enum
*****************************************************************************/

/*****************************************************************************
 ö����    : TDS_MEAS_ERR_CODE_ENUM_UINT32
 Э�����  :
 ö��˵��  : TDS����ģ��ͳһ�Ĵ���ԭ��ֵ
*****************************************************************************/

enum TDS_MEAS_ERR_CODE_ENUM
{
    TDS_MEAS_SUCC               = 0,
    TDS_MEAS_FAIL               = 1, /* ͨ�õĴ���*/
    TDS_MEAS_NUM_OVER_FLOW      = 2, /*��Խ��*/
    TDS_MEAS_MAIL_BOX_FAIL      = 3,
    TDS_MEAS_SAVE_IE_FAIL       = 4,
    TDS_MEAS_PTR_NULL           = 5, /*ָ��Ϊ��*/
    TDS_MEAS_TIMER_OVER_LEN     = 6, /*ʱ�ӳ��ȳ�������󳤶�*/
    TDS_MEAS_TIMER_EXHAUST,          /*ʱ����Դ�ľ��������Ѿ��������*/
    TDS_MEAS_TIMER_START_FAIL,       /*ʱ������ʧ��*/
    TDS_MEAS_TIMER_STOP_FAIL,        /*ʱ��ֹͣʧ��*/
    TDS_MEAS_TIMER_EXPIRE,           /*10,ʱ�ӳ�ʱ*/
    TDS_MEAS_OCCASION_TOO_MIN,       /*11,occaions̫��*/
    TDS_MEAS_GET_AGC_GAIN_FAIL,      /*12,��ȡAGCʧ��*/

    TDS_MEAS_DATA_PATH_ABNORM_CB,    /*13,data pathģ��ص�ʧ�ܺ���*/
    TDS_MEAS_FIFO_FULL,              /*14*/

    TDS_MEAS_WRONG_PRIME_MODE,       /*15*/
    TDS_MEAS_WRONG_IRAT_MODE,        /*16*/

    TDS_MEAS_CONN_IRAT_SUBFRM_INFO_ERR,/*17*/

    TDS_MEAS_STATE_MACHINE_ERR,       /*18*/
    TDS_MEAS_SLAVE_SLEEP,              /*19*/
	TDS_MEAS_PHY_STATE_ERR,           /*20,�������״̬ics,idle,acc,dch��״̬����*/
	TDS_MEAS_PERIOD_SRCH_FAIL,        /*21�����ѷ��ش���*/
	TDS_MEAS_CFG_RCV_FAIL,            /*22�����ѷ��ش���*/
	TDS_MEAS_NO_CELL,                 /*23�����ѷ��ش���*/
    /* �����������Ĵ���ԭ��ֵ*/

    TDS_MEAS_ERR_CODE_BUTT
};
typedef UINT32 TDS_MEAS_ERR_CODE_ENUM_UINT32;


/*****************************************************************************
   5 STRUCT
*****************************************************************************/


/*****************************************************************************
  6 UNION
*****************************************************************************/


/*****************************************************************************
  7 Extern Global Variable
*****************************************************************************/


/*****************************************************************************
  8 Fuction Extern
*****************************************************************************/


/*****************************************************************************
  9 OTHERS
*****************************************************************************/










/*#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif*/




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of Tds_MeasReturnRslt.h */