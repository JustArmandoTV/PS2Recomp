#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4CD0
// Address: 0x4e4cd0 - 0x4e4d30
void sub_004E4CD0_0x4e4cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CD0_0x4e4cd0");
#endif

    switch (ctx->pc) {
        case 0x4e4d00u: goto label_4e4d00;
        case 0x4e4d08u: goto label_4e4d08;
        default: break;
    }

    ctx->pc = 0x4e4cd0u;

    // 0x4e4cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4CD0u;
            // 0x4e4cd4: 0x8c8200e8  lw          $v0, 0xE8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4CD8u;
    // 0x4e4cd8: 0x0  nop
    ctx->pc = 0x4e4cd8u;
    // NOP
    // 0x4e4cdc: 0x0  nop
    ctx->pc = 0x4e4cdcu;
    // NOP
    // 0x4e4ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e4ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e4ce4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4e4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x4e4ce8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e4ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e4cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e4cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e4cf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e4cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e4cf4: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x4e4cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4e4cf8: 0xac8200e4  sw          $v0, 0xE4($a0)
    ctx->pc = 0x4e4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
    // 0x4e4cfc: 0x24900130  addiu       $s0, $a0, 0x130
    ctx->pc = 0x4e4cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
label_4e4d00:
    // 0x4e4d00: 0xc13934c  jal         func_4E4D30
    ctx->pc = 0x4E4D00u;
    SET_GPR_U32(ctx, 31, 0x4E4D08u);
    ctx->pc = 0x4E4D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4D00u;
            // 0x4e4d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4D30u;
    if (runtime->hasFunction(0x4E4D30u)) {
        auto targetFn = runtime->lookupFunction(0x4E4D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4D08u; }
        if (ctx->pc != 0x4E4D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4D30_0x4e4d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4D08u; }
        if (ctx->pc != 0x4E4D08u) { return; }
    }
    ctx->pc = 0x4E4D08u;
label_4e4d08:
    // 0x4e4d08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4e4d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4e4d0c: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x4e4d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x4e4d10: 0x0  nop
    ctx->pc = 0x4e4d10u;
    // NOP
    // 0x4e4d14: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E4D14u;
    {
        const bool branch_taken_0x4e4d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e4d14) {
            ctx->pc = 0x4E4D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e4d00;
        }
    }
    ctx->pc = 0x4E4D1Cu;
    // 0x4e4d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e4d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e4d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e4d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4d28: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4D28u;
            // 0x4e4d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4D30u;
}
