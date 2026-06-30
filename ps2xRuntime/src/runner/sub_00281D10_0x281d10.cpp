#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281D10
// Address: 0x281d10 - 0x281d60
void sub_00281D10_0x281d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281D10_0x281d10");
#endif

    ctx->pc = 0x281d10u;

    // 0x281d10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x281d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281d14: 0x0  nop
    ctx->pc = 0x281d14u;
    // NOP
    // 0x281d18: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x281d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281d1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x281D1Cu;
    {
        const bool branch_taken_0x281d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x281D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D1Cu;
            // 0x281d20: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d1c) {
            ctx->pc = 0x281D30u;
            goto label_281d30;
        }
    }
    ctx->pc = 0x281D24u;
    // 0x281d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281d28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x281D28u;
    {
        const bool branch_taken_0x281d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D28u;
            // 0x281d2c: 0x460d0341  sub.s       $f13, $f0, $f13 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d28) {
            ctx->pc = 0x281D58u;
            goto label_281d58;
        }
    }
    ctx->pc = 0x281D30u;
label_281d30:
    // 0x281d30: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x281d30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281d34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x281D34u;
    {
        const bool branch_taken_0x281d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281d34) {
            ctx->pc = 0x281D48u;
            goto label_281d48;
        }
    }
    ctx->pc = 0x281D3Cu;
    // 0x281d3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281D3Cu;
    {
        const bool branch_taken_0x281d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281d3c) {
            ctx->pc = 0x281D58u;
            goto label_281d58;
        }
    }
    ctx->pc = 0x281D44u;
    // 0x281d44: 0x0  nop
    ctx->pc = 0x281d44u;
    // NOP
label_281d48:
    // 0x281d48: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x281d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x281d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281d50: 0x0  nop
    ctx->pc = 0x281d50u;
    // NOP
    // 0x281d54: 0x460d0341  sub.s       $f13, $f0, $f13
    ctx->pc = 0x281d54u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
label_281d58:
    // 0x281d58: 0x3e00008  jr          $ra
    ctx->pc = 0x281D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D58u;
            // 0x281d5c: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281D60u;
}
