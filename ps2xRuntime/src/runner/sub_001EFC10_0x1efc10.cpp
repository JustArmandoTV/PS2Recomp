#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFC10
// Address: 0x1efc10 - 0x1efc50
void sub_001EFC10_0x1efc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFC10_0x1efc10");
#endif

    switch (ctx->pc) {
        case 0x1efc20u: goto label_1efc20;
        default: break;
    }

    ctx->pc = 0x1efc10u;

    // 0x1efc10: 0x90870032  lbu         $a3, 0x32($a0)
    ctx->pc = 0x1efc10u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x1efc14: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1EFC14u;
    {
        const bool branch_taken_0x1efc14 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1EFC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC14u;
            // 0x1efc18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc14) {
            ctx->pc = 0x1EFC48u;
            goto label_1efc48;
        }
    }
    ctx->pc = 0x1EFC1Cu;
    // 0x1efc1c: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1efc1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1efc20:
    // 0x1efc20: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x1efc20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1efc24: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFC24u;
    {
        const bool branch_taken_0x1efc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1EFC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC24u;
            // 0x1efc28: 0x24850034  addiu       $a1, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc24) {
            ctx->pc = 0x1EFC38u;
            goto label_1efc38;
        }
    }
    ctx->pc = 0x1EFC2Cu;
    // 0x1efc2c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1efc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efc30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFC30u;
    {
        const bool branch_taken_0x1efc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC30u;
            // 0x1efc34: 0xa0a00001  sb          $zero, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc30) {
            ctx->pc = 0x1EFC48u;
            goto label_1efc48;
        }
    }
    ctx->pc = 0x1EFC38u;
label_1efc38:
    // 0x1efc38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1efc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1efc3c: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x1efc3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1efc40: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EFC40u;
    {
        const bool branch_taken_0x1efc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC40u;
            // 0x1efc44: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc40) {
            ctx->pc = 0x1EFC20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1efc20;
        }
    }
    ctx->pc = 0x1EFC48u;
label_1efc48:
    // 0x1efc48: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFC50u;
}
