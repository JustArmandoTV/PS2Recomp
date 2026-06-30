#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5C88
// Address: 0x1b5c88 - 0x1b5d10
void sub_001B5C88_0x1b5c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5C88_0x1b5c88");
#endif

    switch (ctx->pc) {
        case 0x1b5cf8u: goto label_1b5cf8;
        default: break;
    }

    ctx->pc = 0x1b5c88u;

    // 0x1b5c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5c90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b5c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b5c94: 0x8c903720  lw          $s0, 0x3720($a0)
    ctx->pc = 0x1b5c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14112)));
    // 0x1b5c98: 0x8e020dd0  lw          $v0, 0xDD0($s0)
    ctx->pc = 0x1b5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3536)));
    // 0x1b5c9c: 0x5c400017  bgtzl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B5C9Cu;
    {
        const bool branch_taken_0x1b5c9c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b5c9c) {
            ctx->pc = 0x1B5CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C9Cu;
            // 0x1b5ca0: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CA4u;
    // 0x1b5ca4: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x1b5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x1b5ca8: 0x8e060dc8  lw          $a2, 0xDC8($s0)
    ctx->pc = 0x1b5ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3528)));
    // 0x1b5cac: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5CACu;
    {
        const bool branch_taken_0x1b5cac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B5CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CACu;
            // 0x1b5cb0: 0x8e050dcc  lw          $a1, 0xDCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cac) {
            ctx->pc = 0x1B5CBCu;
            goto label_1b5cbc;
        }
    }
    ctx->pc = 0x1B5CB4u;
    // 0x1b5cb4: 0x1cc0000e  bgtz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5CB4u;
    {
        const bool branch_taken_0x1b5cb4 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1b5cb4) {
            ctx->pc = 0x1B5CF0u;
            goto label_1b5cf0;
        }
    }
    ctx->pc = 0x1B5CBCu;
label_1b5cbc:
    // 0x1b5cbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b5cc0: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5CC0u;
    {
        const bool branch_taken_0x1b5cc0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b5cc0) {
            ctx->pc = 0x1B5CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CC0u;
            // 0x1b5cc4: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CC8u;
    // 0x1b5cc8: 0x58800001  blezl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5CC8u;
    {
        const bool branch_taken_0x1b5cc8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b5cc8) {
            ctx->pc = 0x1B5CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CC8u;
            // 0x1b5ccc: 0x8e040dac  lw          $a0, 0xDAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CD0u;
            goto label_1b5cd0;
        }
    }
    ctx->pc = 0x1B5CD0u;
label_1b5cd0:
    // 0x1b5cd0: 0x1cc00003  bgtz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5CD0u;
    {
        const bool branch_taken_0x1b5cd0 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1b5cd0) {
            ctx->pc = 0x1B5CE0u;
            goto label_1b5ce0;
        }
    }
    ctx->pc = 0x1B5CD8u;
    // 0x1b5cd8: 0x8e060db0  lw          $a2, 0xDB0($s0)
    ctx->pc = 0x1b5cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x1b5cdc: 0x8e050db4  lw          $a1, 0xDB4($s0)
    ctx->pc = 0x1b5cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_1b5ce0:
    // 0x1b5ce0: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5CE0u;
    {
        const bool branch_taken_0x1b5ce0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b5ce0) {
            ctx->pc = 0x1B5CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CE0u;
            // 0x1b5ce4: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CE8u;
    // 0x1b5ce8: 0x58c00004  blezl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5CE8u;
    {
        const bool branch_taken_0x1b5ce8 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1b5ce8) {
            ctx->pc = 0x1B5CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CE8u;
            // 0x1b5cec: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5CFCu;
            goto label_1b5cfc;
        }
    }
    ctx->pc = 0x1B5CF0u;
label_1b5cf0:
    // 0x1b5cf0: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B5CF0u;
    SET_GPR_U32(ctx, 31, 0x1B5CF8u);
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CF8u; }
        if (ctx->pc != 0x1B5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CF8u; }
        if (ctx->pc != 0x1B5CF8u) { return; }
    }
    ctx->pc = 0x1B5CF8u;
label_1b5cf8:
    // 0x1b5cf8: 0xae020da8  sw          $v0, 0xDA8($s0)
    ctx->pc = 0x1b5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
label_1b5cfc:
    // 0x1b5cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5d00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b5d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5d04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D04u;
            // 0x1b5d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5D0Cu;
    // 0x1b5d0c: 0x0  nop
    ctx->pc = 0x1b5d0cu;
    // NOP
}
