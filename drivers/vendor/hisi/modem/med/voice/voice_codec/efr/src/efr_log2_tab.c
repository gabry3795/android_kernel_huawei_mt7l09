/*-----------------------------------------------------*
 | Table for routine Log2().                           |
 -----------------------------------------------------*/
#include "codec_op_etsi.h"

static const Word16 table[33] =
{
    0, 1455, 2866, 4236, 5568, 6863, 8124, 9352, 10549, 11716,
    12855, 13967, 15054, 16117, 17156, 18172, 19167, 20142, 21097, 22033,
    22951, 23852, 24735, 25603, 26455, 27291, 28113, 28922, 29716, 30497,
    31266, 32023, 32767
};