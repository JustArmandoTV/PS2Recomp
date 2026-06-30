#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00353470
// Address: 0x353470 - 0x3534d0
void sub_00353470_0x353470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353470_0x353470");
#endif

    ctx->pc = 0x353470u;

    // 0x353470: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x353470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x353474: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x353474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353478: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x353478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x35347c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x35347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x353480: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x353480u;
    {
        const bool branch_taken_0x353480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x353484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353480u;
            // 0x353484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353480) {
            ctx->pc = 0x3534BCu;
            goto label_3534bc;
        }
    }
    ctx->pc = 0x353488u;
    // 0x353488: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x353488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x35348c: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x35348cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x353490: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x353490u;
    {
        const bool branch_taken_0x353490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x353494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x353490u;
            // 0x353494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353490) {
            ctx->pc = 0x3534B0u;
            goto label_3534b0;
        }
    }
    ctx->pc = 0x353498u;
    // 0x353498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x353498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35349c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x35349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3534a0: 0x30420441  andi        $v0, $v0, 0x441
    ctx->pc = 0x3534a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1089);
    // 0x3534a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3534A4u;
    {
        const bool branch_taken_0x3534a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3534a4) {
            ctx->pc = 0x3534B0u;
            goto label_3534b0;
        }
    }
    ctx->pc = 0x3534ACu;
    // 0x3534ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3534acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3534b0:
    // 0x3534b0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3534B0u;
    {
        const bool branch_taken_0x3534b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3534b0) {
            ctx->pc = 0x3534B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3534B0u;
            // 0x3534b4: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3534C0u;
            goto label_3534c0;
        }
    }
    ctx->pc = 0x3534B8u;
    // 0x3534b8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x3534b8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3534bc:
    // 0x3534bc: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x3534bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3534c0:
    // 0x3534c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3534c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3534c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3534c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3534c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3534C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3534CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3534C8u;
            // 0x3534cc: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3534D0u;
}
