#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029C810
// Address: 0x29c810 - 0x29c850
void sub_0029C810_0x29c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C810_0x29c810");
#endif

    ctx->pc = 0x29c810u;

    // 0x29c810: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x29c810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29c814: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29c814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c818: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x29c818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x29c81c: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x29c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x29c820: 0xac89000c  sw          $t1, 0xC($a0)
    ctx->pc = 0x29c820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 9));
    // 0x29c824: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x29c824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x29c828: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x29c828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c82c: 0xac8b0014  sw          $t3, 0x14($a0)
    ctx->pc = 0x29c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 11));
    // 0x29c830: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c834: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x29c834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x29c838: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c83c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x29c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x29c840: 0x3e00008  jr          $ra
    ctx->pc = 0x29C840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C840u;
            // 0x29c844: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C848u;
    // 0x29c848: 0x0  nop
    ctx->pc = 0x29c848u;
    // NOP
    // 0x29c84c: 0x0  nop
    ctx->pc = 0x29c84cu;
    // NOP
}
