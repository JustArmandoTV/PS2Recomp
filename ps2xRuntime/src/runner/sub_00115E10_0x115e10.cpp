#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115E10
// Address: 0x115e10 - 0x115e58
void sub_00115E10_0x115e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115E10_0x115e10");
#endif

    switch (ctx->pc) {
        case 0x115e30u: goto label_115e30;
        default: break;
    }

    ctx->pc = 0x115e10u;

    // 0x115e10: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x115e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x115e14: 0xc  syscall     0
    ctx->pc = 0x115e14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x115e18: 0x3e00008  jr          $ra
    ctx->pc = 0x115E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115E20u;
    // 0x115e20: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x115e20u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x115e24: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x115E24u;
    {
        const bool branch_taken_0x115e24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115E24u;
            // 0x115e28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e24) {
            ctx->pc = 0x115E50u;
            goto label_115e50;
        }
    }
    ctx->pc = 0x115E2Cu;
    // 0x115e2c: 0x0  nop
    ctx->pc = 0x115e2cu;
    // NOP
label_115e30:
    // 0x115e30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x115e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x115e34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115e38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x115e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x115e3c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x115e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x115e40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x115e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x115e44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x115e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x115e48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x115E48u;
    {
        const bool branch_taken_0x115e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115e48) {
            ctx->pc = 0x115E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115e30;
        }
    }
    ctx->pc = 0x115E50u;
label_115e50:
    // 0x115e50: 0x3e00008  jr          $ra
    ctx->pc = 0x115E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115E50u;
            // 0x115e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115E58u;
}
