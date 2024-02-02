/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2019 Intel Corporation. All rights reserved.
 *
 * Author: Seppo Ingalsuo <seppo.ingalsuo@linux.intel.com>
 */

#include <stdint.h>

const int32_t src_int32_2_3_4535_5000_fir[272] = {
	12509,
	72682,
	-101869,
	-17280,
	183342,
	-158327,
	-119196,
	349975,
	-169398,
	-329727,
	550177,
	-72811,
	-672059,
	727777,
	204767,
	-1138655,
	789333,
	730569,
	-1673889,
	610057,
	1541427,
	-2161669,
	51471,
	2615925,
	-2423245,
	-1009160,
	3848623,
	-2229493,
	-2640451,
	5033026,
	-1329621,
	-4815201,
	5859570,
	504991,
	-7372894,
	5932721,
	3426684,
	-9994160,
	4807613,
	7454958,
	-12192929,
	2041743,
	12426558,
	-13327185,
	-2748154,
	17959816,
	-12620967,
	-9839704,
	23435231,
	-9176106,
	-19392145,
	27981320,
	-1923372,
	-31506635,
	30423816,
	10615562,
	-46452494,
	29061753,
	31167738,
	-65379735,
	20731500,
	66976180,
	-93159250,
	-4040632,
	148926012,
	-159346832,
	-116662167,
	809519577,
	1163363281,
	295779779,
	-262536181,
	34641155,
	116254553,
	-97461622,
	-11663647,
	77494206,
	-46298250,
	-26089299,
	55267881,
	-19617737,
	-30360472,
	38589212,
	-3561933,
	-29554449,
	25120800,
	6103395,
	-25889530,
	14302105,
	11302322,
	-20753072,
	5993711,
	13257315,
	-15155986,
	79990,
	12938746,
	-9841278,
	-3655758,
	11183063,
	-5307918,
	-5548334,
	8702095,
	-1824981,
	-6017518,
	6062230,
	541139,
	-5514076,
	3666426,
	1883231,
	-4463894,
	1752448,
	2398900,
	-3222926,
	410043,
	2334127,
	-2050083,
	-386635,
	1933479,
	-1100011,
	-738424,
	1403443,
	-433305,
	-780271,
	891991,
	-38753,
	-646785,
	483954,
	139046,
	-448521,
	208930,
	173025,
	-260361,
	56816,
	132607,
	-120702,
	-4244,
	70735,
	70735,
	-4244,
	-120702,
	132607,
	56816,
	-260361,
	173025,
	208930,
	-448521,
	139046,
	483954,
	-646785,
	-38753,
	891991,
	-780271,
	-433305,
	1403443,
	-738424,
	-1100011,
	1933479,
	-386635,
	-2050083,
	2334127,
	410043,
	-3222926,
	2398900,
	1752448,
	-4463894,
	1883231,
	3666426,
	-5514076,
	541139,
	6062230,
	-6017518,
	-1824981,
	8702095,
	-5548334,
	-5307918,
	11183063,
	-3655758,
	-9841278,
	12938746,
	79990,
	-15155986,
	13257315,
	5993711,
	-20753072,
	11302322,
	14302105,
	-25889530,
	6103395,
	25120800,
	-29554449,
	-3561933,
	38589212,
	-30360472,
	-19617737,
	55267881,
	-26089299,
	-46298250,
	77494206,
	-11663647,
	-97461622,
	116254553,
	34641155,
	-262536181,
	295779779,
	1163363281,
	809519577,
	-116662167,
	-159346832,
	148926012,
	-4040632,
	-93159250,
	66976180,
	20731500,
	-65379735,
	31167738,
	29061753,
	-46452494,
	10615562,
	30423816,
	-31506635,
	-1923372,
	27981320,
	-19392145,
	-9176106,
	23435231,
	-9839704,
	-12620967,
	17959816,
	-2748154,
	-13327185,
	12426558,
	2041743,
	-12192929,
	7454958,
	4807613,
	-9994160,
	3426684,
	5932721,
	-7372894,
	504991,
	5859570,
	-4815201,
	-1329621,
	5033026,
	-2640451,
	-2229493,
	3848623,
	-1009160,
	-2423245,
	2615925,
	51471,
	-2161669,
	1541427,
	610057,
	-1673889,
	730569,
	789333,
	-1138655,
	204767,
	727777,
	-672059,
	-72811,
	550177,
	-329727,
	-169398,
	349975,
	-119196,
	-158327,
	183342,
	-17280,
	-101869,
	72682,
	12509

};

const struct src_stage src_int32_2_3_4535_5000 = {
	1, 1, 2, 136, 272, 3, 2, 0, 0,
	src_int32_2_3_4535_5000_fir};
