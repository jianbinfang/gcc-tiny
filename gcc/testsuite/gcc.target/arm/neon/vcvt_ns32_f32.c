/* Test the `vcvt_ns32_f32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vcvt_ns32_f32 (void)
{
  int32x2_t out_int32x2_t;
  float32x2_t arg0_float32x2_t;

  out_int32x2_t = vcvt_n_s32_f32 (arg0_float32x2_t, 1);
}

/* { dg-final { scan-assembler "vcvt\.s32.f32\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
