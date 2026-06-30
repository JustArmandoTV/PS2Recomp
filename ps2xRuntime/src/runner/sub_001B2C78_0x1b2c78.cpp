#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2C78
// Address: 0x1b2c78 - 0x1b2cd8
void sub_001B2C78_0x1b2c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2C78_0x1b2c78");
#endif

    switch (ctx->pc) {
        case 0x1b2cc8u: goto label_1b2cc8;
        default: break;
    }

    ctx->pc = 0x1b2c78u;

    // 0x1b2c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2c7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b2c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2c88: 0x8ca30a44  lw          $v1, 0xA44($a1)
    ctx->pc = 0x1b2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2628)));
    // 0x1b2c8c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B2C8Cu;
    {
        const bool branch_taken_0x1b2c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C8Cu;
            // 0x1b2c90: 0x24a60d88  addiu       $a2, $a1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c8c) {
            ctx->pc = 0x1B2CCCu;
            goto label_1b2ccc;
        }
    }
    ctx->pc = 0x1B2C94u;
    // 0x1b2c94: 0x8ca30a20  lw          $v1, 0xA20($a1)
    ctx->pc = 0x1b2c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2592)));
    // 0x1b2c98: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B2C98u;
    {
        const bool branch_taken_0x1b2c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c98) {
            ctx->pc = 0x1B2C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C98u;
            // 0x1b2c9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2CD0u;
            goto label_1b2cd0;
        }
    }
    ctx->pc = 0x1B2CA0u;
    // 0x1b2ca0: 0x8cc302b0  lw          $v1, 0x2B0($a2)
    ctx->pc = 0x1b2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 688)));
    // 0x1b2ca4: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2CA4u;
    {
        const bool branch_taken_0x1b2ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ca4) {
            ctx->pc = 0x1B2CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CA4u;
            // 0x1b2ca8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2CD0u;
            goto label_1b2cd0;
        }
    }
    ctx->pc = 0x1B2CACu;
    // 0x1b2cac: 0x8cc302cc  lw          $v1, 0x2CC($a2)
    ctx->pc = 0x1b2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 716)));
    // 0x1b2cb0: 0x8ca50ac0  lw          $a1, 0xAC0($a1)
    ctx->pc = 0x1b2cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2752)));
    // 0x1b2cb4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1b2cb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b2cb8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2CB8u;
    {
        const bool branch_taken_0x1b2cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cb8) {
            ctx->pc = 0x1B2CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CB8u;
            // 0x1b2cbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2CD0u;
            goto label_1b2cd0;
        }
    }
    ctx->pc = 0x1B2CC0u;
    // 0x1b2cc0: 0xc06ccac  jal         func_1B32B0
    ctx->pc = 0x1B2CC0u;
    SET_GPR_U32(ctx, 31, 0x1B2CC8u);
    ctx->pc = 0x1B32B0u;
    if (runtime->hasFunction(0x1B32B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B32B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CC8u; }
        if (ctx->pc != 0x1B2CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B32B0_0x1b32b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CC8u; }
        if (ctx->pc != 0x1B2CC8u) { return; }
    }
    ctx->pc = 0x1B2CC8u;
label_1b2cc8:
    // 0x1b2cc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b2cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b2ccc:
    // 0x1b2ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2cd0:
    // 0x1b2cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CD0u;
            // 0x1b2cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2CD8u;
}
