#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB770
// Address: 0x2ab770 - 0x2ab7a0
void sub_002AB770_0x2ab770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB770_0x2ab770");
#endif

    ctx->pc = 0x2ab770u;

    // 0x2ab770: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2ab770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ab774: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2ab774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ab778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ab778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab77c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ab77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab780: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ab780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ab784: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ab784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ab788: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ab788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ab78c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2ab78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2ab790: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2ab790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ab794: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2ab794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2ab798: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB798u;
            // 0x2ab79c: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB7A0u;
}
