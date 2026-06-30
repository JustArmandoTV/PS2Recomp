#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00273160
// Address: 0x273160 - 0x273190
void sub_00273160_0x273160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273160_0x273160");
#endif

    ctx->pc = 0x273160u;

    // 0x273160: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x273160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x273164: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x273164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x273168: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x273168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x27316c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27316cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273170: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x273170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x273174: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x273174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x273178: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x273178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x27317c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x27317cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x273180: 0x3e00008  jr          $ra
    ctx->pc = 0x273180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273180u;
            // 0x273184: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273188u;
    // 0x273188: 0x0  nop
    ctx->pc = 0x273188u;
    // NOP
    // 0x27318c: 0x0  nop
    ctx->pc = 0x27318cu;
    // NOP
}
