#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362890
// Address: 0x362890 - 0x3628b0
void sub_00362890_0x362890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362890_0x362890");
#endif

    ctx->pc = 0x362890u;

    // 0x362890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x362890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362894: 0x0  nop
    ctx->pc = 0x362894u;
    // NOP
    // 0x362898: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x362898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36289c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x36289Cu;
    {
        const bool branch_taken_0x36289c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36289c) {
            ctx->pc = 0x3628A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36289Cu;
            // 0x3628a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3628A8u;
            goto label_3628a8;
        }
    }
    ctx->pc = 0x3628A4u;
    // 0x3628a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3628a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3628a8:
    // 0x3628a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3628A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3628B0u;
}
