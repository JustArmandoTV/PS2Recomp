#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC450
// Address: 0x2dc450 - 0x2dc470
void sub_002DC450_0x2dc450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC450_0x2dc450");
#endif

    ctx->pc = 0x2dc450u;

    // 0x2dc450: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2dc450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2dc454: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2dc454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2dc458: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2dc458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2dc45c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dc460: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC460u;
            // 0x2dc464: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC468u;
    // 0x2dc468: 0x0  nop
    ctx->pc = 0x2dc468u;
    // NOP
    // 0x2dc46c: 0x0  nop
    ctx->pc = 0x2dc46cu;
    // NOP
}
