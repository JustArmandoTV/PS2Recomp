#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F468
// Address: 0x20f468 - 0x20f508
void sub_0020F468_0x20f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F468_0x20f468");
#endif

    switch (ctx->pc) {
        case 0x20f498u: goto label_20f498;
        default: break;
    }

    ctx->pc = 0x20f468u;

    // 0x20f468: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x20f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20f46c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f470: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x20f470u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f474: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x20f474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20f478: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x20f478u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20f47c: 0x4e0001e  bltz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x20F47Cu;
    {
        const bool branch_taken_0x20f47c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x20F480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F47Cu;
            // 0x20f480: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f47c) {
            ctx->pc = 0x20F4F8u;
            goto label_20f4f8;
        }
    }
    ctx->pc = 0x20F484u;
    // 0x20f484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20f484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20f488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20f488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20f48c: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x20f48cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f490: 0x240c000d  addiu       $t4, $zero, 0xD
    ctx->pc = 0x20f490u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x20f494: 0x0  nop
    ctx->pc = 0x20f494u;
    // NOP
label_20f498:
    // 0x20f498: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20f498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f49c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x20f49cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20f4a0: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x20f4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x20f4a4: 0xd95e0000  lqc2        $vf30, 0x0($t2)
    ctx->pc = 0x20f4a4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x20f4a8: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x20f4a8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20f4ac: 0x4a0046f8  vcallms     0x8D8
    ctx->pc = 0x20f4acu;
    {     ctx->vu0_tpc = 0x8D8;     runtime->executeVU0Microprogram(rdram, ctx, 0x8D8); }
    // 0x20f4b0: 0xcd400040  pref        0x00, 0x40($t2)
    ctx->pc = 0x20f4b0u;
    // PREF instruction (ignored)
    // 0x20f4b4: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x20f4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f4b8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f4bc: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20f4bcu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20f4c0: 0xf85e0000  sqc2        $vf30, 0x0($v0)
    ctx->pc = 0x20f4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20f4c4: 0xf85f0010  sqc2        $vf31, 0x10($v0)
    ctx->pc = 0x20f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20f4c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f4c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f4cc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x20f4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x20f4d0: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x20f4d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20f4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x20f4d8: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x20f4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x20f4dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f4e0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x20f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f4e4: 0xa06c0000  sb          $t4, 0x0($v1)
    ctx->pc = 0x20f4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x20f4e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20f4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20f4ec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x20f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x20f4f0: 0x4e1ffe9  bgez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20F4F0u;
    {
        const bool branch_taken_0x20f4f0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x20F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4F0u;
            // 0x20f4f4: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f4f0) {
            ctx->pc = 0x20F498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f498;
        }
    }
    ctx->pc = 0x20F4F8u;
label_20f4f8:
    // 0x20f4f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x20f4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F4FCu;
            // 0x20f500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F504u;
    // 0x20f504: 0x0  nop
    ctx->pc = 0x20f504u;
    // NOP
}
