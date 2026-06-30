#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8FD0
// Address: 0x4b8fd0 - 0x4b8ff0
void sub_004B8FD0_0x4b8fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8FD0_0x4b8fd0");
#endif

    ctx->pc = 0x4b8fd0u;

    // 0x4b8fd0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4b8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4b8fd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b8fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8fd8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b8fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4b8fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8FDCu;
            // 0x4b8fe0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8FE4u;
    // 0x4b8fe4: 0x0  nop
    ctx->pc = 0x4b8fe4u;
    // NOP
    // 0x4b8fe8: 0x0  nop
    ctx->pc = 0x4b8fe8u;
    // NOP
    // 0x4b8fec: 0x0  nop
    ctx->pc = 0x4b8fecu;
    // NOP
}
