#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170C10
// Address: 0x170c10 - 0x170c30
void sub_00170C10_0x170c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C10_0x170c10");
#endif

    ctx->pc = 0x170c10u;

    // 0x170c10: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x170c14: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x170c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x170c18: 0x45282a  slt         $a1, $v0, $a1
    ctx->pc = 0x170c18u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x170c1c: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x170C1Cu;
    {
        const bool branch_taken_0x170c1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x170c1c) {
            ctx->pc = 0x170C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170C1Cu;
            // 0x170c20: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170C24u;
            goto label_170c24;
        }
    }
    ctx->pc = 0x170C24u;
label_170c24:
    // 0x170c24: 0x3e00008  jr          $ra
    ctx->pc = 0x170C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170C24u;
            // 0x170c28: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170C2Cu;
    // 0x170c2c: 0x0  nop
    ctx->pc = 0x170c2cu;
    // NOP
}
