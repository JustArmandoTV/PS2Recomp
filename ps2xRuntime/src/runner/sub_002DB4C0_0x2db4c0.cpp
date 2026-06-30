#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB4C0
// Address: 0x2db4c0 - 0x2db4e0
void sub_002DB4C0_0x2db4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB4C0_0x2db4c0");
#endif

    ctx->pc = 0x2db4c0u;

    // 0x2db4c0: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2db4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db4c8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB4C8u;
    {
        const bool branch_taken_0x2db4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db4c8) {
            ctx->pc = 0x2DB4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB4C8u;
            // 0x2db4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB4D8u;
            goto label_2db4d8;
        }
    }
    ctx->pc = 0x2DB4D0u;
    // 0x2db4d0: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x2db4d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2db4d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2db4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2db4d8:
    // 0x2db4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB4E0u;
}
