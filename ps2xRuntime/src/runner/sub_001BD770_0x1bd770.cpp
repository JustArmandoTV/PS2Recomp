#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD770
// Address: 0x1bd770 - 0x1bd7a8
void sub_001BD770_0x1bd770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD770_0x1bd770");
#endif

    ctx->pc = 0x1bd770u;

    // 0x1bd770: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd774: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1bd778: 0x10860009  beq         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD778u;
    {
        const bool branch_taken_0x1bd778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BD77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD778u;
            // 0x1bd77c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd778) {
            ctx->pc = 0x1BD7A0u;
            goto label_1bd7a0;
        }
    }
    ctx->pc = 0x1BD780u;
    // 0x1bd780: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x1bd780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1bd784: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD784u;
    {
        const bool branch_taken_0x1bd784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BD788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD784u;
            // 0x1bd788: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd784) {
            ctx->pc = 0x1BD7A0u;
            goto label_1bd7a0;
        }
    }
    ctx->pc = 0x1BD78Cu;
    // 0x1bd78c: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x1bd78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x1bd790: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bd790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd794: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bd798: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x1bd798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x1bd79c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1bd79cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1bd7a0:
    // 0x1bd7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD7A8u;
}
