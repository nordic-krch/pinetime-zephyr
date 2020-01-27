/*
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef PINETIME_INCLUDE_HRS3300_H
#define PINETIME_INCLUDE_HRS3300_H

#include <device.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HRS3300_HWT_800MS 0x0
#define HRS3300_HWT_400MS 0x1
#define HRS3300_HWT_200MS 0x2
#define HRS3300_HWT_100MS 0x3
#define HRS3300_HWT_75MS 0x4
#define HRS3300_HWT_50MS 0x5
#define HRS3300_HWT_12_5MS 0x6
#define HRS3300_HWT_0MS 0x7

#define HRS3300_PDRIVE_12_5 0
#define HRS3300_PDRIVE_20 1
#define HRS3300_PDRIVE_30 2
#define HRS3300_PDRIVE_40 3

int hrs3300_enable(struct device *dev);
int hrs3300_disable(struct device *dev);

int hrs3300_hgain_set(struct device *dev, u32_t val);
int hrs3300_hgain_get(struct device *dev, u32_t *val);

int hrs3300_hwt_set(struct device *dev, u32_t val);
int hrs3300_hwt_get(struct device *dev, u32_t *val);

int hrs3300_pdrive_set(struct device *dev, u32_t val);
int hrs3300_pdrive_get(struct device *dev, u32_t *val);

#ifdef __cplusplus
}
#endif

#endif /* PINETIME_INCLUDE_HRS3300_H */
