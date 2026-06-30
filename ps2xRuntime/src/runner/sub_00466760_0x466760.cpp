#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00466760
// Address: 0x466760 - 0x466780
void sub_00466760_0x466760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466760_0x466760");
#endif

    ctx->pc = 0x466760u;

    // 0x466760: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x466760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x466764: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x466764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466768: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x466768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x46676c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x46676cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x466770: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x466770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x466774: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x466774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x466778: 0x3e00008  jr          $ra
    ctx->pc = 0x466778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466778u;
            // 0x46677c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466780u;
}
