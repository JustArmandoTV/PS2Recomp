#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE090
// Address: 0x1ae090 - 0x1ae0a8
void sub_001AE090_0x1ae090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE090_0x1ae090");
#endif

    ctx->pc = 0x1ae090u;

    // 0x1ae090: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x1ae090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1ae094: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ae094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae09c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1ae09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ae0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0A0u;
            // 0x1ae0a4: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE0A8u;
}
