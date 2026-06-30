#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116CE0
// Address: 0x116ce0 - 0x116d28
void sub_00116CE0_0x116ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116CE0_0x116ce0");
#endif

    switch (ctx->pc) {
        case 0x116d00u: goto label_116d00;
        default: break;
    }

    ctx->pc = 0x116ce0u;

    // 0x116ce0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x116ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x116ce4: 0xc  syscall     0
    ctx->pc = 0x116ce4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x116CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116CF0u;
    // 0x116cf0: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x116cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x116cf4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x116CF4u;
    {
        const bool branch_taken_0x116cf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CF4u;
            // 0x116cf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cf4) {
            ctx->pc = 0x116D20u;
            goto label_116d20;
        }
    }
    ctx->pc = 0x116CFCu;
    // 0x116cfc: 0x0  nop
    ctx->pc = 0x116cfcu;
    // NOP
label_116d00:
    // 0x116d00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x116d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116d04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x116d08: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x116d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x116d0c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x116d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x116d10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x116d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x116d14: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x116d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x116d18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116D18u;
    {
        const bool branch_taken_0x116d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116d18) {
            ctx->pc = 0x116D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116d00;
        }
    }
    ctx->pc = 0x116D20u;
label_116d20:
    // 0x116d20: 0x3e00008  jr          $ra
    ctx->pc = 0x116D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116D20u;
            // 0x116d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116D28u;
}
