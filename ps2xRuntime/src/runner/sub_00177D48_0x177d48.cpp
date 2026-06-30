#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177D48
// Address: 0x177d48 - 0x177d78
void sub_00177D48_0x177d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177D48_0x177d48");
#endif

    switch (ctx->pc) {
        case 0x177d58u: goto label_177d58;
        default: break;
    }

    ctx->pc = 0x177d48u;

    // 0x177d48: 0xa4870038  sh          $a3, 0x38($a0)
    ctx->pc = 0x177d48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 7));
    // 0x177d4c: 0xa4850034  sh          $a1, 0x34($a0)
    ctx->pc = 0x177d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x177d50: 0x3e00008  jr          $ra
    ctx->pc = 0x177D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D50u;
            // 0x177d54: 0xa4860036  sh          $a2, 0x36($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177D58u;
label_177d58:
    // 0x177d58: 0x94820034  lhu         $v0, 0x34($a0)
    ctx->pc = 0x177d58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x177d5c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x177d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x177d60: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x177d60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x177d64: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x177d64u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x177d68: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x177d68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x177d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x177D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177D6Cu;
            // 0x177d70: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177D74u;
    // 0x177d74: 0x0  nop
    ctx->pc = 0x177d74u;
    // NOP
}
