#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004814A0
// Address: 0x4814a0 - 0x4814e0
void sub_004814A0_0x4814a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004814A0_0x4814a0");
#endif

    ctx->pc = 0x4814a0u;

    // 0x4814a0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x4814a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4814a4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x4814a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4814a8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x4814a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4814ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4814acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4814b0: 0x24850517  addiu       $a1, $a0, 0x517
    ctx->pc = 0x4814b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1303));
    // 0x4814b4: 0x90840517  lbu         $a0, 0x517($a0)
    ctx->pc = 0x4814b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1303)));
    // 0x4814b8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4814b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4814bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4814BCu;
    {
        const bool branch_taken_0x4814bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4814C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4814BCu;
            // 0x4814c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4814bc) {
            ctx->pc = 0x4814CCu;
            goto label_4814cc;
        }
    }
    ctx->pc = 0x4814C4u;
    // 0x4814c4: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x4814c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x4814c8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x4814c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4814cc:
    // 0x4814cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4814CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4814D4u;
    // 0x4814d4: 0x0  nop
    ctx->pc = 0x4814d4u;
    // NOP
    // 0x4814d8: 0x0  nop
    ctx->pc = 0x4814d8u;
    // NOP
    // 0x4814dc: 0x0  nop
    ctx->pc = 0x4814dcu;
    // NOP
}
