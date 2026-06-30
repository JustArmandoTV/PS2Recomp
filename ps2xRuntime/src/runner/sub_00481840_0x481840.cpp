#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481840
// Address: 0x481840 - 0x4818a0
void sub_00481840_0x481840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481840_0x481840");
#endif

    ctx->pc = 0x481840u;

    // 0x481840: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x481840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x481844: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x481844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x481848: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x481848u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x48184c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x48184Cu;
    {
        const bool branch_taken_0x48184c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48184c) {
            ctx->pc = 0x481850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48184Cu;
            // 0x481850: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x481860u;
            goto label_481860;
        }
    }
    ctx->pc = 0x481854u;
    // 0x481854: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x481854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x481858: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x481858u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x48185c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x48185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_481860:
    // 0x481860: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x481860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481864: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x481864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x481868: 0x24640048  addiu       $a0, $v1, 0x48
    ctx->pc = 0x481868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x48186c: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x48186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x481870: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x481870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x481874: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x481874u;
    {
        const bool branch_taken_0x481874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x481878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481874u;
            // 0x481878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481874) {
            ctx->pc = 0x481884u;
            goto label_481884;
        }
    }
    ctx->pc = 0x48187Cu;
    // 0x48187c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48187Cu;
    {
        const bool branch_taken_0x48187c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48187c) {
            ctx->pc = 0x48188Cu;
            goto label_48188c;
        }
    }
    ctx->pc = 0x481884u;
label_481884:
    // 0x481884: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x481884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x481888: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x481888u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48188c:
    // 0x48188c: 0x3e00008  jr          $ra
    ctx->pc = 0x48188Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481894u;
    // 0x481894: 0x0  nop
    ctx->pc = 0x481894u;
    // NOP
    // 0x481898: 0x0  nop
    ctx->pc = 0x481898u;
    // NOP
    // 0x48189c: 0x0  nop
    ctx->pc = 0x48189cu;
    // NOP
}
