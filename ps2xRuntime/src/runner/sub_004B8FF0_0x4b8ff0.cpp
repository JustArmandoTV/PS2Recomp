#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8FF0
// Address: 0x4b8ff0 - 0x4b9010
void sub_004B8FF0_0x4b8ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8FF0_0x4b8ff0");
#endif

    ctx->pc = 0x4b8ff0u;

    // 0x4b8ff0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4b8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4b8ff4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b8ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8ff8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b8ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4b8ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8FFCu;
            // 0x4b9000: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9004u;
    // 0x4b9004: 0x0  nop
    ctx->pc = 0x4b9004u;
    // NOP
    // 0x4b9008: 0x0  nop
    ctx->pc = 0x4b9008u;
    // NOP
    // 0x4b900c: 0x0  nop
    ctx->pc = 0x4b900cu;
    // NOP
}
