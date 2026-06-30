#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8388
// Address: 0x1b8388 - 0x1b8500
void sub_001B8388_0x1b8388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8388_0x1b8388");
#endif

    ctx->pc = 0x1b8388u;

    // 0x1b8388: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b8388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b838c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b838cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b8390: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b8390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b8394: 0xc4409b38  lwc1        $f0, -0x64C8($v0)
    ctx->pc = 0x1b8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b839c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1b839cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1b83a0: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b83a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1b83a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b83a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b83a8: 0x0  nop
    ctx->pc = 0x1b83a8u;
    // NOP
    // 0x1b83ac: 0x0  nop
    ctx->pc = 0x1b83acu;
    // NOP
    // 0x1b83b0: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1b83b0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x1b83b4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b83b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b83b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B83B8u;
    {
        const bool branch_taken_0x1b83b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B83BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83B8u;
            // 0x1b83bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83b8) {
            ctx->pc = 0x1B83F0u;
            goto label_1b83f0;
        }
    }
    ctx->pc = 0x1B83C0u;
    // 0x1b83c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b83c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b83c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b83c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b83c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b83c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b83cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b83ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b83d0: 0x0  nop
    ctx->pc = 0x1b83d0u;
    // NOP
    // 0x1b83d4: 0x0  nop
    ctx->pc = 0x1b83d4u;
    // NOP
    // 0x1b83d8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b83d8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1b83dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b83dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b83e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b83e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b83e4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1b83e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1b83e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B83E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B83ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83E8u;
            // 0x1b83ec: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B83F0u;
label_1b83f0:
    // 0x1b83f0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1b83f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1b83f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b83f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b83f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b83f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b83fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B83FCu;
    {
        const bool branch_taken_0x1b83fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83FCu;
            // 0x1b8400: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83fc) {
            ctx->pc = 0x1B8410u;
            goto label_1b8410;
        }
    }
    ctx->pc = 0x1B8404u;
    // 0x1b8404: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1B8404u;
    {
        const bool branch_taken_0x1b8404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8404u;
            // 0x1b8408: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8404) {
            ctx->pc = 0x1B84D0u;
            goto label_1b84d0;
        }
    }
    ctx->pc = 0x1B840Cu;
    // 0x1b840c: 0x0  nop
    ctx->pc = 0x1b840cu;
    // NOP
label_1b8410:
    // 0x1b8410: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1b8414: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b8414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1b8418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b841c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b841cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8420: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8420u;
    {
        const bool branch_taken_0x1b8420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8420u;
            // 0x1b8424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8420) {
            ctx->pc = 0x1B8438u;
            goto label_1b8438;
        }
    }
    ctx->pc = 0x1B8428u;
    // 0x1b8428: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b8428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1b842c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B842Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B842Cu;
            // 0x1b8430: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8434u;
    // 0x1b8434: 0x0  nop
    ctx->pc = 0x1b8434u;
    // NOP
label_1b8438:
    // 0x1b8438: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b843c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b843cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8440: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b8440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8444: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8444u;
    {
        const bool branch_taken_0x1b8444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8444u;
            // 0x1b8448: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8444) {
            ctx->pc = 0x1B8458u;
            goto label_1b8458;
        }
    }
    ctx->pc = 0x1B844Cu;
    // 0x1b844c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B844Cu;
    {
        const bool branch_taken_0x1b844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B844Cu;
            // 0x1b8450: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b844c) {
            ctx->pc = 0x1B84D0u;
            goto label_1b84d0;
        }
    }
    ctx->pc = 0x1B8454u;
    // 0x1b8454: 0x0  nop
    ctx->pc = 0x1b8454u;
    // NOP
label_1b8458:
    // 0x1b8458: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1b8458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1b845c: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b845cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1b8460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8464: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b8464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8468: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8468u;
    {
        const bool branch_taken_0x1b8468 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8468u;
            // 0x1b846c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8468) {
            ctx->pc = 0x1B8478u;
            goto label_1b8478;
        }
    }
    ctx->pc = 0x1B8470u;
    // 0x1b8470: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B8470u;
    {
        const bool branch_taken_0x1b8470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8470u;
            // 0x1b8474: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8470) {
            ctx->pc = 0x1B84D0u;
            goto label_1b84d0;
        }
    }
    ctx->pc = 0x1B8478u;
label_1b8478:
    // 0x1b8478: 0x3c01401c  lui         $at, 0x401C
    ctx->pc = 0x1b8478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16412 << 16));
    // 0x1b847c: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b847cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1b8480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b8480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8484: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b8484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8488: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8488u;
    {
        const bool branch_taken_0x1b8488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8488u;
            // 0x1b848c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8488) {
            ctx->pc = 0x1B8498u;
            goto label_1b8498;
        }
    }
    ctx->pc = 0x1B8490u;
    // 0x1b8490: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B8490u;
    {
        const bool branch_taken_0x1b8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8490u;
            // 0x1b8494: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8490) {
            ctx->pc = 0x1B84D0u;
            goto label_1b84d0;
        }
    }
    ctx->pc = 0x1B8498u;
label_1b8498:
    // 0x1b8498: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
    // 0x1b849c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b849cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b84a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b84a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b84a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B84A4u;
    {
        const bool branch_taken_0x1b84a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B84A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84A4u;
            // 0x1b84a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84a4) {
            ctx->pc = 0x1B84B8u;
            goto label_1b84b8;
        }
    }
    ctx->pc = 0x1B84ACu;
    // 0x1b84ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B84ACu;
    {
        const bool branch_taken_0x1b84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84ACu;
            // 0x1b84b0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84ac) {
            ctx->pc = 0x1B84D0u;
            goto label_1b84d0;
        }
    }
    ctx->pc = 0x1B84B4u;
    // 0x1b84b4: 0x0  nop
    ctx->pc = 0x1b84b4u;
    // NOP
label_1b84b8:
    // 0x1b84b8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1b84b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1b84bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b84bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b84c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b84c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b84c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B84C4u;
    {
        const bool branch_taken_0x1b84c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B84C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84C4u;
            // 0x1b84c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84c4) {
            ctx->pc = 0x1B84E0u;
            goto label_1b84e0;
        }
    }
    ctx->pc = 0x1B84CCu;
    // 0x1b84cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b84d0:
    // 0x1b84d0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1b84d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B84D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B84D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84D4u;
            // 0x1b84d8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B84DCu;
    // 0x1b84dc: 0x0  nop
    ctx->pc = 0x1b84dcu;
    // NOP
label_1b84e0:
    // 0x1b84e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b84e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b84e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b84e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1b84ec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b84ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b84f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b84f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b84f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B84F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84F4u;
            // 0x1b84f8: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B84FCu;
    // 0x1b84fc: 0x0  nop
    ctx->pc = 0x1b84fcu;
    // NOP
}
