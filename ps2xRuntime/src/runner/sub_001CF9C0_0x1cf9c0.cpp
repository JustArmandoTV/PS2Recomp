#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF9C0
// Address: 0x1cf9c0 - 0x1cfa00
void sub_001CF9C0_0x1cf9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF9C0_0x1cf9c0");
#endif

    switch (ctx->pc) {
        case 0x1cf9d0u: goto label_1cf9d0;
        default: break;
    }

    ctx->pc = 0x1cf9c0u;

    // 0x1cf9c0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1cf9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x1cf9c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9c8: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x1cf9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x1cf9cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cf9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf9d0:
    // 0x1cf9d0: 0x90a3001e  lbu         $v1, 0x1E($a1)
    ctx->pc = 0x1cf9d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x1cf9d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cf9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cf9d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cf9dc: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1cf9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1cf9e0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1cf9e4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1cf9e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cf9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cf9ec: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CF9ECu;
    {
        const bool branch_taken_0x1cf9ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9ECu;
            // 0x1cf9f0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9ec) {
            ctx->pc = 0x1CF9D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf9d0;
        }
    }
    ctx->pc = 0x1CF9F4u;
    // 0x1cf9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF9FCu;
    // 0x1cf9fc: 0x0  nop
    ctx->pc = 0x1cf9fcu;
    // NOP
}
