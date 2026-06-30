#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D430
// Address: 0x15d430 - 0x15d480
void sub_0015D430_0x15d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D430_0x15d430");
#endif

    ctx->pc = 0x15d430u;

    // 0x15d430: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15d434: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15d438: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x15d438u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15d43c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D43Cu;
    {
        const bool branch_taken_0x15d43c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d43c) {
            ctx->pc = 0x15D440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D43Cu;
            // 0x15d440: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D44Cu;
            goto label_15d44c;
        }
    }
    ctx->pc = 0x15D444u;
    // 0x15d444: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D444u;
    {
        const bool branch_taken_0x15d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D444u;
            // 0x15d448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d444) {
            ctx->pc = 0x15D474u;
            goto label_15d474;
        }
    }
    ctx->pc = 0x15D44Cu;
label_15d44c:
    // 0x15d44c: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x15d44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15d450: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x15d450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d454: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x15d454u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x15d458: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15d458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15d45c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15d460: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x15d460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x15d464: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x15d464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15d468: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x15d468u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x15d46c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15d46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d470: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x15d470u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
label_15d474:
    // 0x15d474: 0x3e00008  jr          $ra
    ctx->pc = 0x15D474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D47Cu;
    // 0x15d47c: 0x0  nop
    ctx->pc = 0x15d47cu;
    // NOP
}
