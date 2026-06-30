#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001367B0
// Address: 0x1367b0 - 0x1369d0
void sub_001367B0_0x1367b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001367B0_0x1367b0");
#endif

    switch (ctx->pc) {
        case 0x1368f4u: goto label_1368f4;
        case 0x136980u: goto label_136980;
        default: break;
    }

    ctx->pc = 0x1367b0u;

    // 0x1367b0: 0x460c7201  sub.s       $f8, $f14, $f12
    ctx->pc = 0x1367b0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1367b4: 0x3c023780  lui         $v0, 0x3780
    ctx->pc = 0x1367b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14208 << 16));
    // 0x1367b8: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x1367b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
    // 0x1367bc: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1367bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1367c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1367c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1367c4: 0x460d7981  sub.s       $f6, $f15, $f13
    ctx->pc = 0x1367c4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
    // 0x1367c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1367c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1367cc: 0x0  nop
    ctx->pc = 0x1367ccu;
    // NOP
    // 0x1367d0: 0x46080042  mul.s       $f1, $f0, $f8
    ctx->pc = 0x1367d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1367d4: 0x46083140  add.s       $f5, $f6, $f8
    ctx->pc = 0x1367d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x1367d8: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x1367d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1367dc: 0x0  nop
    ctx->pc = 0x1367dcu;
    // NOP
    // 0x1367e0: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x1367e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1367e4: 0x460601c1  sub.s       $f7, $f0, $f6
    ctx->pc = 0x1367e4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x1367e8: 0x460d2801  sub.s       $f0, $f5, $f13
    ctx->pc = 0x1367e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
    // 0x1367ec: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1367ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1367f0: 0x0  nop
    ctx->pc = 0x1367f0u;
    // NOP
    // 0x1367f4: 0x46001982  mul.s       $f6, $f3, $f0
    ctx->pc = 0x1367f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1367f8: 0x460c8001  sub.s       $f0, $f16, $f12
    ctx->pc = 0x1367f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[12]);
    // 0x1367fc: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x1367fcu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x136800: 0x460d1942  mul.s       $f5, $f3, $f13
    ctx->pc = 0x136800u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x136804: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x136804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x136808: 0x0  nop
    ctx->pc = 0x136808u;
    // NOP
    // 0x13680c: 0x46065818  adda.s      $f11, $f6
    ctx->pc = 0x13680cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[6]);
    // 0x136810: 0x46003a1c  madd.s      $f8, $f7, $f0
    ctx->pc = 0x136810u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x136814: 0x46055818  adda.s      $f11, $f5
    ctx->pc = 0x136814u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x136818: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x136818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13681c: 0x46106101  sub.s       $f4, $f12, $f16
    ctx->pc = 0x13681cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[16]);
    // 0x136820: 0x4608021c  madd.s      $f8, $f0, $f8
    ctx->pc = 0x136820u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
    // 0x136824: 0x46045818  adda.s      $f11, $f4
    ctx->pc = 0x136824u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x136828: 0x4608029c  madd.s      $f10, $f0, $f8
    ctx->pc = 0x136828u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
    // 0x13682c: 0x460a5242  mul.s       $f9, $f10, $f10
    ctx->pc = 0x13682cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x136830: 0x46010a02  mul.s       $f8, $f1, $f1
    ctx->pc = 0x136830u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x136834: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x136834u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x136838: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x136838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13683c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13683Cu;
    {
        const bool branch_taken_0x13683c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13683Cu;
            // 0x136840: 0x46061082  mul.s       $f2, $f2, $f6 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13683c) {
            ctx->pc = 0x13684Cu;
            goto label_13684c;
        }
    }
    ctx->pc = 0x136844u;
    // 0x136844: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x136844u;
    {
        const bool branch_taken_0x136844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136844) {
            ctx->pc = 0x1369BCu;
            goto label_1369bc;
        }
    }
    ctx->pc = 0x13684Cu;
label_13684c:
    // 0x13684c: 0x46025818  adda.s      $f11, $f2
    ctx->pc = 0x13684cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x136850: 0x46001a1c  madd.s      $f8, $f3, $f0
    ctx->pc = 0x136850u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x136854: 0x46055818  adda.s      $f11, $f5
    ctx->pc = 0x136854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x136858: 0x4608021c  madd.s      $f8, $f0, $f8
    ctx->pc = 0x136858u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
    // 0x13685c: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x13685cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136860: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x136860u;
    {
        const bool branch_taken_0x136860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x136860) {
            ctx->pc = 0x136884u;
            goto label_136884;
        }
    }
    ctx->pc = 0x136868u;
    // 0x136868: 0x460b5034  c.lt.s      $f10, $f11
    ctx->pc = 0x136868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13686c: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x13686Cu;
    {
        const bool branch_taken_0x13686c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13686c) {
            ctx->pc = 0x136870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13686Cu;
            // 0x136870: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1368E0u;
            goto label_1368e0;
        }
    }
    ctx->pc = 0x136874u;
    // 0x136874: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x136874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x136878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13687c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13687Cu;
    {
        const bool branch_taken_0x13687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13687Cu;
            // 0x136880: 0x3c022f80  lui         $v0, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13687c) {
            ctx->pc = 0x1368E4u;
            goto label_1368e4;
        }
    }
    ctx->pc = 0x136884u;
label_136884:
    // 0x136884: 0x0  nop
    ctx->pc = 0x136884u;
    // NOP
    // 0x136888: 0x0  nop
    ctx->pc = 0x136888u;
    // NOP
    // 0x13688c: 0x46085283  div.s       $f10, $f10, $f8
    ctx->pc = 0x13688cu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[10] * 0.0f); } else ctx->f[10] = ctx->f[10] / ctx->f[8];
    // 0x136890: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x136890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x136894: 0x460a5242  mul.s       $f9, $f10, $f10
    ctx->pc = 0x136894u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x136898: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x136898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x13689c: 0x0  nop
    ctx->pc = 0x13689cu;
    // NOP
    // 0x1368a0: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x1368a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1368a4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1368A4u;
    {
        const bool branch_taken_0x1368a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368a4) {
            ctx->pc = 0x1368A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1368A4u;
            // 0x1368a8: 0x460a0001  sub.s       $f0, $f0, $f10 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1368B4u;
            goto label_1368b4;
        }
    }
    ctx->pc = 0x1368ACu;
    // 0x1368ac: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1368ACu;
    {
        const bool branch_taken_0x1368ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1368ac) {
            ctx->pc = 0x1369BCu;
            goto label_1369bc;
        }
    }
    ctx->pc = 0x1368B4u;
label_1368b4:
    // 0x1368b4: 0x460b0034  c.lt.s      $f0, $f11
    ctx->pc = 0x1368b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1368b8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1368B8u;
    {
        const bool branch_taken_0x1368b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368b8) {
            ctx->pc = 0x1368BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1368B8u;
            // 0x1368bc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1368C8u;
            goto label_1368c8;
        }
    }
    ctx->pc = 0x1368C0u;
    // 0x1368c0: 0x46005806  mov.s       $f0, $f11
    ctx->pc = 0x1368c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[11]);
    // 0x1368c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1368c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1368c8:
    // 0x1368c8: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x1368c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1368cc: 0x0  nop
    ctx->pc = 0x1368ccu;
    // NOP
    // 0x1368d0: 0x46080036  c.le.s      $f0, $f8
    ctx->pc = 0x1368d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1368d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1368D4u;
    {
        const bool branch_taken_0x1368d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368d4) {
            ctx->pc = 0x1368E0u;
            goto label_1368e0;
        }
    }
    ctx->pc = 0x1368DCu;
    // 0x1368dc: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x1368dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
label_1368e0:
    // 0x1368e0: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x1368e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_1368e4:
    // 0x1368e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1368e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1368e8: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x1368e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1368ec: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1368ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1368f0: 0x46065818  adda.s      $f11, $f6
    ctx->pc = 0x1368f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[6]);
label_1368f4:
    // 0x1368f4: 0x46003a5c  madd.s      $f9, $f7, $f0
    ctx->pc = 0x1368f4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x1368f8: 0x46055818  adda.s      $f11, $f5
    ctx->pc = 0x1368f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x1368fc: 0x4609025c  madd.s      $f9, $f0, $f9
    ctx->pc = 0x1368fcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[9]));
    // 0x136900: 0x46045818  adda.s      $f11, $f4
    ctx->pc = 0x136900u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x136904: 0x4609029c  madd.s      $f10, $f0, $f9
    ctx->pc = 0x136904u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[9]));
    // 0x136908: 0x46025818  adda.s      $f11, $f2
    ctx->pc = 0x136908u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[2]);
    // 0x13690c: 0x46001a5c  madd.s      $f9, $f3, $f0
    ctx->pc = 0x13690cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x136910: 0x46055818  adda.s      $f11, $f5
    ctx->pc = 0x136910u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x136914: 0x4609025c  madd.s      $f9, $f0, $f9
    ctx->pc = 0x136914u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[9]));
    // 0x136918: 0x46014834  c.lt.s      $f9, $f1
    ctx->pc = 0x136918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13691c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x13691Cu;
    {
        const bool branch_taken_0x13691c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13691c) {
            ctx->pc = 0x136960u;
            goto label_136960;
        }
    }
    ctx->pc = 0x136924u;
    // 0x136924: 0x0  nop
    ctx->pc = 0x136924u;
    // NOP
    // 0x136928: 0x0  nop
    ctx->pc = 0x136928u;
    // NOP
    // 0x13692c: 0x46095283  div.s       $f10, $f10, $f9
    ctx->pc = 0x13692cu;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[10] * 0.0f); } else ctx->f[10] = ctx->f[10] / ctx->f[9];
    // 0x136930: 0x0  nop
    ctx->pc = 0x136930u;
    // NOP
    // 0x136934: 0x460a5242  mul.s       $f9, $f10, $f10
    ctx->pc = 0x136934u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x136938: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x136938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13693c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x13693Cu;
    {
        const bool branch_taken_0x13693c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13693c) {
            ctx->pc = 0x136940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13693Cu;
            // 0x136940: 0x460a0001  sub.s       $f0, $f0, $f10 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13694Cu;
            goto label_13694c;
        }
    }
    ctx->pc = 0x136944u;
    // 0x136944: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x136944u;
    {
        const bool branch_taken_0x136944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136944) {
            ctx->pc = 0x1369BCu;
            goto label_1369bc;
        }
    }
    ctx->pc = 0x13694Cu;
label_13694c:
    // 0x13694c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136950: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x136950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x136954: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x136954u;
    {
        const bool branch_taken_0x136954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136954) {
            ctx->pc = 0x136958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136954u;
            // 0x136958: 0x46065818  adda.s      $f11, $f6 (Delay Slot)
        ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[6]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1368F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1368f4;
        }
    }
    ctx->pc = 0x13695Cu;
    // 0x13695c: 0x0  nop
    ctx->pc = 0x13695cu;
    // NOP
label_136960:
    // 0x136960: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x136960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x136964: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x136964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x136968: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x136968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13696c: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x13696cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x136970: 0x0  nop
    ctx->pc = 0x136970u;
    // NOP
    // 0x136974: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x136974u;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
    // 0x136978: 0x46004046  mov.s       $f1, $f8
    ctx->pc = 0x136978u;
    ctx->f[1] = FPU_MOV_S(ctx->f[8]);
    // 0x13697c: 0x460048c6  mov.s       $f3, $f9
    ctx->pc = 0x13697cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[9]);
label_136980:
    // 0x136980: 0x46061818  adda.s      $f3, $f6
    ctx->pc = 0x136980u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x136984: 0x4600389c  madd.s      $f2, $f7, $f0
    ctx->pc = 0x136984u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x136988: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x136988u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x13698c: 0x4602009c  madd.s      $f2, $f0, $f2
    ctx->pc = 0x13698cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x136990: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x136990u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x136994: 0x4602009c  madd.s      $f2, $f0, $f2
    ctx->pc = 0x136994u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x136998: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x136998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13699c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13699Cu;
    {
        const bool branch_taken_0x13699c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13699c) {
            ctx->pc = 0x1369A8u;
            goto label_1369a8;
        }
    }
    ctx->pc = 0x1369A4u;
    // 0x1369a4: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x1369a4u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
label_1369a8:
    // 0x1369a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1369a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1369ac: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x1369acu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x1369b0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1369b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1369b4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1369B4u;
    {
        const bool branch_taken_0x1369b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1369B4u;
            // 0x1369b8: 0x46084800  add.s       $f0, $f9, $f8 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369b4) {
            ctx->pc = 0x136980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136980;
        }
    }
    ctx->pc = 0x1369BCu;
label_1369bc:
    // 0x1369bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1369BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1369C4u;
    // 0x1369c4: 0x0  nop
    ctx->pc = 0x1369c4u;
    // NOP
    // 0x1369c8: 0x0  nop
    ctx->pc = 0x1369c8u;
    // NOP
    // 0x1369cc: 0x0  nop
    ctx->pc = 0x1369ccu;
    // NOP
}
