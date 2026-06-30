#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223780
// Address: 0x223780 - 0x2237f0
void sub_00223780_0x223780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223780_0x223780");
#endif

    ctx->pc = 0x223780u;

    // 0x223780: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x223780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223784: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x223784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223788: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x223788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22378c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22378Cu;
    {
        const bool branch_taken_0x22378c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22378Cu;
            // 0x223790: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22378c) {
            ctx->pc = 0x22379Cu;
            goto label_22379c;
        }
    }
    ctx->pc = 0x223794u;
    // 0x223794: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223794u;
    {
        const bool branch_taken_0x223794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223794) {
            ctx->pc = 0x2237A0u;
            goto label_2237a0;
        }
    }
    ctx->pc = 0x22379Cu;
label_22379c:
    // 0x22379c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x22379cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2237a0:
    // 0x2237a0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2237a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2237a4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2237A4u;
    {
        const bool branch_taken_0x2237a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2237a4) {
            ctx->pc = 0x2237A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2237A4u;
            // 0x2237a8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2237ACu;
            goto label_2237ac;
        }
    }
    ctx->pc = 0x2237ACu;
label_2237ac:
    // 0x2237ac: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2237acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2237b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2237b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2237b4: 0x0  nop
    ctx->pc = 0x2237b4u;
    // NOP
    // 0x2237b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2237b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2237bc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2237BCu;
    {
        const bool branch_taken_0x2237bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2237bc) {
            ctx->pc = 0x2237C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2237BCu;
            // 0x2237c0: 0x3c033dcc  lui         $v1, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2237E0u;
            goto label_2237e0;
        }
    }
    ctx->pc = 0x2237C4u;
    // 0x2237c4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2237c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2237c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2237c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2237cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2237ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2237d0: 0x0  nop
    ctx->pc = 0x2237d0u;
    // NOP
    // 0x2237d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2237d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2237d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2237D8u;
    {
        const bool branch_taken_0x2237d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2237DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2237D8u;
            // 0x2237dc: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237d8) {
            ctx->pc = 0x2237E8u;
            goto label_2237e8;
        }
    }
    ctx->pc = 0x2237E0u;
label_2237e0:
    // 0x2237e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2237e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2237e4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2237e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_2237e8:
    // 0x2237e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2237E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2237F0u;
}
