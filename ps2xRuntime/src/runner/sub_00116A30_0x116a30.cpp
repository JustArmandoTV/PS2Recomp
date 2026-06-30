#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116A30
// Address: 0x116a30 - 0x116a70
void sub_00116A30_0x116a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116A30_0x116a30");
#endif

    switch (ctx->pc) {
        case 0x116a48u: goto label_116a48;
        default: break;
    }

    ctx->pc = 0x116a30u;

    // 0x116a30: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x116a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x116a34: 0xc  syscall     0
    ctx->pc = 0x116a34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116a38: 0x3e00008  jr          $ra
    ctx->pc = 0x116A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116A40u;
    // 0x116a40: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x116A40u;
    {
        const bool branch_taken_0x116a40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116A40u;
            // 0x116a44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a40) {
            ctx->pc = 0x116A68u;
            goto label_116a68;
        }
    }
    ctx->pc = 0x116A48u;
label_116a48:
    // 0x116a48: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x116a48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116a4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x116a50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116a54: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x116a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x116a58: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x116a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x116a5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116a60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116A60u;
    {
        const bool branch_taken_0x116a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116a60) {
            ctx->pc = 0x116A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116a48;
        }
    }
    ctx->pc = 0x116A68u;
label_116a68:
    // 0x116a68: 0x3e00008  jr          $ra
    ctx->pc = 0x116A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116A68u;
            // 0x116a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116A70u;
}
