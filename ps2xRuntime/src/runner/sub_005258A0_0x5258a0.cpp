#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005258A0
// Address: 0x5258a0 - 0x5258c0
void sub_005258A0_0x5258a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005258A0_0x5258a0");
#endif

    ctx->pc = 0x5258a0u;

    // 0x5258a0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x5258a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x5258a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x5258a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x5258a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5258a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5258ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x5258acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x5258b0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x5258b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x5258b4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x5258b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x5258b8: 0x3e00008  jr          $ra
    ctx->pc = 0x5258B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5258BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5258B8u;
            // 0x5258bc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5258C0u;
}
