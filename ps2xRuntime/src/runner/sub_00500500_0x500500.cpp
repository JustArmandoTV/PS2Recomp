#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500500
// Address: 0x500500 - 0x500520
void sub_00500500_0x500500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500500_0x500500");
#endif

    ctx->pc = 0x500500u;

    // 0x500500: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x500500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500504: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x500504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500508: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x500508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x50050c: 0x3e00008  jr          $ra
    ctx->pc = 0x50050Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50050Cu;
            // 0x500510: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500514u;
    // 0x500514: 0x0  nop
    ctx->pc = 0x500514u;
    // NOP
    // 0x500518: 0x0  nop
    ctx->pc = 0x500518u;
    // NOP
    // 0x50051c: 0x0  nop
    ctx->pc = 0x50051cu;
    // NOP
}
