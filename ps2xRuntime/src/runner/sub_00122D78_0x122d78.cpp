#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122D78
// Address: 0x122d78 - 0x122df8
void sub_00122D78_0x122d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122D78_0x122d78");
#endif

    switch (ctx->pc) {
        case 0x122d98u: goto label_122d98;
        default: break;
    }

    ctx->pc = 0x122d78u;

    // 0x122d78: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x122d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x122d7c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x122d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d80: 0x244b16e8  addiu       $t3, $v0, 0x16E8
    ctx->pc = 0x122d80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 5864));
    // 0x122d84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x122d84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122d88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d94: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x122d94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_122d98:
    // 0x122d98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x122d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x122d9c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x122d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x122da0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x122da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122da4: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x122da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x122da8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122DA8u;
    {
        const bool branch_taken_0x122da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122DA8u;
            // 0x122dac: 0x1034026  xor         $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122da8) {
            ctx->pc = 0x122DBCu;
            goto label_122dbc;
        }
    }
    ctx->pc = 0x122DB0u;
    // 0x122db0: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x122db0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x122db4: 0x1465026  xor         $t2, $t2, $a2
    ctx->pc = 0x122db4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 6));
    // 0x122db8: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x122db8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_122dbc:
    // 0x122dbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x122dc0: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x122dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x122dc4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x122DC4u;
    {
        const bool branch_taken_0x122dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122dc4) {
            ctx->pc = 0x122DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122DC4u;
            // 0x122dc8: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122D98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122d98;
        }
    }
    ctx->pc = 0x122DCCu;
    // 0x122dcc: 0x81027  nor         $v0, $zero, $t0
    ctx->pc = 0x122dccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x122dd0: 0x92027  nor         $a0, $zero, $t1
    ctx->pc = 0x122dd0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x122dd4: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x122dd4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x122dd8: 0x30420077  andi        $v0, $v0, 0x77
    ctx->pc = 0x122dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)119);
    // 0x122ddc: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x122de0: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x122de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x122de4: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x122de4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x122de8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x122de8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x122dec: 0x3e00008  jr          $ra
    ctx->pc = 0x122DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122DECu;
            // 0x122df0: 0xa0a40001  sb          $a0, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122DF4u;
    // 0x122df4: 0x0  nop
    ctx->pc = 0x122df4u;
    // NOP
}
