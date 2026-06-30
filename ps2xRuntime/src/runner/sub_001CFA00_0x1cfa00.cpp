#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CFA00
// Address: 0x1cfa00 - 0x1cfa40
void sub_001CFA00_0x1cfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFA00_0x1cfa00");
#endif

    switch (ctx->pc) {
        case 0x1cfa10u: goto label_1cfa10;
        default: break;
    }

    ctx->pc = 0x1cfa00u;

    // 0x1cfa00: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x1cfa04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cfa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa08: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x1cfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x1cfa0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cfa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cfa10:
    // 0x1cfa10: 0x90a3002f  lbu         $v1, 0x2F($a1)
    ctx->pc = 0x1cfa10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 47)));
    // 0x1cfa14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cfa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cfa18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cfa1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cfa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cfa20: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1cfa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1cfa24: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CFA24u;
    {
        const bool branch_taken_0x1cfa24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA24u;
            // 0x1cfa28: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa24) {
            ctx->pc = 0x1CFA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfa10;
        }
    }
    ctx->pc = 0x1CFA2Cu;
    // 0x1cfa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CFA34u;
    // 0x1cfa34: 0x0  nop
    ctx->pc = 0x1cfa34u;
    // NOP
    // 0x1cfa38: 0x0  nop
    ctx->pc = 0x1cfa38u;
    // NOP
    // 0x1cfa3c: 0x0  nop
    ctx->pc = 0x1cfa3cu;
    // NOP
}
