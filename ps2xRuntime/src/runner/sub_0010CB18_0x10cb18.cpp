#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CB18
// Address: 0x10cb18 - 0x10cb38
void sub_0010CB18_0x10cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CB18_0x10cb18");
#endif

    switch (ctx->pc) {
        case 0x10cb30u: goto label_10cb30;
        default: break;
    }

    ctx->pc = 0x10cb18u;

    // 0x10cb18: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10cb1c: 0xfca00048  sd          $zero, 0x48($a1)
    ctx->pc = 0x10cb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
    // 0x10cb20: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10cb24: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB24u;
            // 0x10cb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB2Cu;
    // 0x10cb2c: 0x0  nop
    ctx->pc = 0x10cb2cu;
    // NOP
label_10cb30:
    // 0x10cb30: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB30u;
            // 0x10cb34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB38u;
}
