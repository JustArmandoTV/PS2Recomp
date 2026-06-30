#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B67F8
// Address: 0x1b67f8 - 0x1b6898
void sub_001B67F8_0x1b67f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B67F8_0x1b67f8");
#endif

    ctx->pc = 0x1b67f8u;

    // 0x1b67f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1b67f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b67fc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1b67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1b6800: 0x8d060294  lw          $a2, 0x294($t0)
    ctx->pc = 0x1b6800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 660)));
    // 0x1b6804: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6804u;
    {
        const bool branch_taken_0x1b6804 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6804u;
            // 0x1b6808: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6804) {
            ctx->pc = 0x1B6818u;
            goto label_1b6818;
        }
    }
    ctx->pc = 0x1B680Cu;
    // 0x1b680c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B680Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B680Cu;
            // 0x1b6810: 0xad0a0294  sw          $t2, 0x294($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6814u;
    // 0x1b6814: 0x0  nop
    ctx->pc = 0x1b6814u;
    // NOP
label_1b6818:
    // 0x1b6818: 0x1463823  subu        $a3, $t2, $a2
    ctx->pc = 0x1b6818u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1b681c: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B681Cu;
    {
        const bool branch_taken_0x1b681c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B681Cu;
            // 0x1b6820: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b681c) {
            ctx->pc = 0x1B688Cu;
            goto label_1b688c;
        }
    }
    ctx->pc = 0x1B6824u;
    // 0x1b6824: 0x8d03029c  lw          $v1, 0x29C($t0)
    ctx->pc = 0x1b6824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 668)));
    // 0x1b6828: 0x8d0202a0  lw          $v0, 0x2A0($t0)
    ctx->pc = 0x1b6828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 672)));
    // 0x1b682c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1b682cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1b6830: 0xe3302a  slt         $a2, $a3, $v1
    ctx->pc = 0x1b6830u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b6834: 0x8d090298  lw          $t1, 0x298($t0)
    ctx->pc = 0x1b6834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 664)));
    // 0x1b6838: 0x47202a  slt         $a0, $v0, $a3
    ctx->pc = 0x1b6838u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b683c: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x1b683cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1b6840: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x1b6840u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1b6844: 0xad0a0294  sw          $t2, 0x294($t0)
    ctx->pc = 0x1b6844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
    // 0x1b6848: 0xad03029c  sw          $v1, 0x29C($t0)
    ctx->pc = 0x1b6848u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 3));
    // 0x1b684c: 0x1125000e  beq         $t1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B684Cu;
    {
        const bool branch_taken_0x1b684c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B6850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B684Cu;
            // 0x1b6850: 0xad0202a0  sw          $v0, 0x2A0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b684c) {
            ctx->pc = 0x1B6888u;
            goto label_1b6888;
        }
    }
    ctx->pc = 0x1B6854u;
    // 0x1b6854: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x1b6854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1b6858: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B6858u;
    {
        const bool branch_taken_0x1b6858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6858) {
            ctx->pc = 0x1B685Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6858u;
            // 0x1b685c: 0xad070298  sw          $a3, 0x298($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B688Cu;
            goto label_1b688c;
        }
    }
    ctx->pc = 0x1B6860u;
    // 0x1b6860: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1b6864: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x1b6864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1b6868: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b6868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b686c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b686cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b6870: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1b6874: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6874u;
    {
        const bool branch_taken_0x1b6874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6874u;
            // 0x1b6878: 0x1221023  subu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6874) {
            ctx->pc = 0x1B6888u;
            goto label_1b6888;
        }
    }
    ctx->pc = 0x1B687Cu;
    // 0x1b687c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B687Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B687Cu;
            // 0x1b6880: 0xad020298  sw          $v0, 0x298($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6884u;
    // 0x1b6884: 0x0  nop
    ctx->pc = 0x1b6884u;
    // NOP
label_1b6888:
    // 0x1b6888: 0xad070298  sw          $a3, 0x298($t0)
    ctx->pc = 0x1b6888u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
label_1b688c:
    // 0x1b688c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B688Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6894u;
    // 0x1b6894: 0x0  nop
    ctx->pc = 0x1b6894u;
    // NOP
}
