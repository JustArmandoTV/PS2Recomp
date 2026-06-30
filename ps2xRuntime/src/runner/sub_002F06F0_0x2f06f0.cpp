#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F06F0
// Address: 0x2f06f0 - 0x2f0700
void sub_002F06F0_0x2f06f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06F0_0x2f06f0");
#endif

    ctx->pc = 0x2f06f0u;

    // 0x2f06f0: 0x9082000f  lbu         $v0, 0xF($a0)
    ctx->pc = 0x2f06f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x2f06f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f06f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f06f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F06F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F06FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06F8u;
            // 0x2f06fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0700u;
}
