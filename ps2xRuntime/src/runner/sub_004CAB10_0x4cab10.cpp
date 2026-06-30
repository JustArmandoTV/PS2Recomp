#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CAB10
// Address: 0x4cab10 - 0x4cab40
void sub_004CAB10_0x4cab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAB10_0x4cab10");
#endif

    ctx->pc = 0x4cab10u;

    // 0x4cab10: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4cab10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4cab14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cab14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cab18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4cab18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4cab1c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4cab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4cab20: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4cab20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x4cab24: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4cab24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4cab28: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4cab28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4cab2c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4cab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4cab30: 0x3e00008  jr          $ra
    ctx->pc = 0x4CAB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAB30u;
            // 0x4cab34: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CAB38u;
    // 0x4cab38: 0x0  nop
    ctx->pc = 0x4cab38u;
    // NOP
    // 0x4cab3c: 0x0  nop
    ctx->pc = 0x4cab3cu;
    // NOP
}
