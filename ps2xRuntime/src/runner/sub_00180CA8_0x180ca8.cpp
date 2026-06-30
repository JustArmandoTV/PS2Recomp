#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180CA8
// Address: 0x180ca8 - 0x180cd0
void sub_00180CA8_0x180ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180CA8_0x180ca8");
#endif

    ctx->pc = 0x180ca8u;

    // 0x180ca8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180CA8u;
    {
        const bool branch_taken_0x180ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180CA8u;
            // 0x180cac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ca8) {
            ctx->pc = 0x180CC0u;
            goto label_180cc0;
        }
    }
    ctx->pc = 0x180CB0u;
    // 0x180cb0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x180cb4: 0xac406c58  sw          $zero, 0x6C58($v0)
    ctx->pc = 0x180cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27736), GPR_U32(ctx, 0));
    // 0x180cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x180CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180CB8u;
            // 0x180cbc: 0xac606c5c  sw          $zero, 0x6C5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180CC0u;
label_180cc0:
    // 0x180cc0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x180cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x180cc4: 0xac446c58  sw          $a0, 0x6C58($v0)
    ctx->pc = 0x180cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27736), GPR_U32(ctx, 4));
    // 0x180cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x180CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180CC8u;
            // 0x180ccc: 0xac656c5c  sw          $a1, 0x6C5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27740), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180CD0u;
}
