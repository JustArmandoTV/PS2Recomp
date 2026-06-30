#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004816C0
// Address: 0x4816c0 - 0x481720
void sub_004816C0_0x4816c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004816C0_0x4816c0");
#endif

    ctx->pc = 0x4816c0u;

    // 0x4816c0: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x4816c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x4816c4: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x4816c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x4816c8: 0xc1082b  sltu        $at, $a2, $at
    ctx->pc = 0x4816c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4816cc: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4816CCu;
    {
        const bool branch_taken_0x4816cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4816cc) {
            ctx->pc = 0x4816D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4816CCu;
            // 0x4816d0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4816E0u;
            goto label_4816e0;
        }
    }
    ctx->pc = 0x4816D4u;
    // 0x4816d4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x4816d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x4816d8: 0x34468d7f  ori         $a2, $v0, 0x8D7F
    ctx->pc = 0x4816d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36223);
    // 0x4816dc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4816dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4816e0:
    // 0x4816e0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4816e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4816e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4816e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4816e8: 0x24640108  addiu       $a0, $v1, 0x108
    ctx->pc = 0x4816e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
    // 0x4816ec: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x4816ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x4816f0: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x4816f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4816f4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4816F4u;
    {
        const bool branch_taken_0x4816f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4816F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4816F4u;
            // 0x4816f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4816f4) {
            ctx->pc = 0x481704u;
            goto label_481704;
        }
    }
    ctx->pc = 0x4816FCu;
    // 0x4816fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4816FCu;
    {
        const bool branch_taken_0x4816fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4816fc) {
            ctx->pc = 0x48170Cu;
            goto label_48170c;
        }
    }
    ctx->pc = 0x481704u;
label_481704:
    // 0x481704: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x481704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x481708: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x481708u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48170c:
    // 0x48170c: 0x3e00008  jr          $ra
    ctx->pc = 0x48170Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481714u;
    // 0x481714: 0x0  nop
    ctx->pc = 0x481714u;
    // NOP
    // 0x481718: 0x0  nop
    ctx->pc = 0x481718u;
    // NOP
    // 0x48171c: 0x0  nop
    ctx->pc = 0x48171cu;
    // NOP
}
