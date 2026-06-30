#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004815A0
// Address: 0x4815a0 - 0x481600
void sub_004815A0_0x4815a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004815A0_0x4815a0");
#endif

    ctx->pc = 0x4815a0u;

    // 0x4815a0: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x4815a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x4815a4: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x4815a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x4815a8: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x4815a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4815ac: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4815ACu;
    {
        const bool branch_taken_0x4815ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4815ac) {
            ctx->pc = 0x4815B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4815ACu;
            // 0x4815b0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4815C0u;
            goto label_4815c0;
        }
    }
    ctx->pc = 0x4815B4u;
    // 0x4815b4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x4815b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x4815b8: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x4815b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x4815bc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4815bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4815c0:
    // 0x4815c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4815c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4815c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4815c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4815c8: 0x246401c8  addiu       $a0, $v1, 0x1C8
    ctx->pc = 0x4815c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 456));
    // 0x4815cc: 0x8c6301c8  lw          $v1, 0x1C8($v1)
    ctx->pc = 0x4815ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x4815d0: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x4815d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4815d4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4815D4u;
    {
        const bool branch_taken_0x4815d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4815D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4815D4u;
            // 0x4815d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4815d4) {
            ctx->pc = 0x4815E4u;
            goto label_4815e4;
        }
    }
    ctx->pc = 0x4815DCu;
    // 0x4815dc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4815DCu;
    {
        const bool branch_taken_0x4815dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4815dc) {
            ctx->pc = 0x4815ECu;
            goto label_4815ec;
        }
    }
    ctx->pc = 0x4815E4u;
label_4815e4:
    // 0x4815e4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4815e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x4815e8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x4815e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4815ec:
    // 0x4815ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4815ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4815F4u;
    // 0x4815f4: 0x0  nop
    ctx->pc = 0x4815f4u;
    // NOP
    // 0x4815f8: 0x0  nop
    ctx->pc = 0x4815f8u;
    // NOP
    // 0x4815fc: 0x0  nop
    ctx->pc = 0x4815fcu;
    // NOP
}
