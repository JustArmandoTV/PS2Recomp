#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6E00
// Address: 0x2b6e00 - 0x2b6e20
void sub_002B6E00_0x2b6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6E00_0x2b6e00");
#endif

    ctx->pc = 0x2b6e00u;

    // 0x2b6e00: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x2b6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x2b6e04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6e08: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x2b6e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x2b6e0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b6e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e10: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x2b6e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x2b6e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E14u;
            // 0x2b6e18: 0xac8300cc  sw          $v1, 0xCC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6E1Cu;
    // 0x2b6e1c: 0x0  nop
    ctx->pc = 0x2b6e1cu;
    // NOP
}
