#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CCF8
// Address: 0x17ccf8 - 0x17cd30
void sub_0017CCF8_0x17ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CCF8_0x17ccf8");
#endif

    switch (ctx->pc) {
        case 0x17cd08u: goto label_17cd08;
        default: break;
    }

    ctx->pc = 0x17ccf8u;

    // 0x17ccf8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ccfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ccfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd00: 0x244358d0  addiu       $v1, $v0, 0x58D0
    ctx->pc = 0x17cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x17cd04: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x17cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_17cd08:
    // 0x17cd08: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17cd08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cd0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17cd10: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x17cd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x17cd14: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x17cd14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x17cd18: 0x0  nop
    ctx->pc = 0x17cd18u;
    // NOP
    // 0x17cd1c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17CD1Cu;
    {
        const bool branch_taken_0x17cd1c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17CD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD1Cu;
            // 0x17cd20: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd1c) {
            ctx->pc = 0x17CD08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17cd08;
        }
    }
    ctx->pc = 0x17CD24u;
    // 0x17cd24: 0x3e00008  jr          $ra
    ctx->pc = 0x17CD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CD24u;
            // 0x17cd28: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CD2Cu;
    // 0x17cd2c: 0x0  nop
    ctx->pc = 0x17cd2cu;
    // NOP
}
