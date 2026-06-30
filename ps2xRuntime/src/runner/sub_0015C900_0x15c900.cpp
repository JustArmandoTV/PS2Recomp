#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C900
// Address: 0x15c900 - 0x15c930
void sub_0015C900_0x15c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C900_0x15c900");
#endif

    ctx->pc = 0x15c900u;

    // 0x15c900: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15c904: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x15c904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c908: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x15c908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x15c90c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x15c90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x15c910: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x15c910u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x15c914: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15c918: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x15c918u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x15c91c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x15c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x15c920: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x15c920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x15c924: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x15c924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x15c928: 0x3e00008  jr          $ra
    ctx->pc = 0x15C928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C928u;
            // 0x15c92c: 0xfc830018  sd          $v1, 0x18($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C930u;
}
