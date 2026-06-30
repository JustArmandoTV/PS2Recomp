#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003854A0
// Address: 0x3854a0 - 0x385510
void sub_003854A0_0x3854a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003854A0_0x3854a0");
#endif

    switch (ctx->pc) {
        case 0x3854d4u: goto label_3854d4;
        default: break;
    }

    ctx->pc = 0x3854a0u;

    // 0x3854a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3854a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3854a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3854a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3854a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3854a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3854ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3854acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3854b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3854b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3854b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3854b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3854b8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3854b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3854bc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3854bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x3854c0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3854c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3854c4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3854C4u;
    {
        const bool branch_taken_0x3854c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3854C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3854C4u;
            // 0x3854c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3854c4) {
            ctx->pc = 0x3854D4u;
            goto label_3854d4;
        }
    }
    ctx->pc = 0x3854CCu;
    // 0x3854cc: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x3854CCu;
    SET_GPR_U32(ctx, 31, 0x3854D4u);
    ctx->pc = 0x3854D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3854CCu;
            // 0x3854d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3854D4u; }
        if (ctx->pc != 0x3854D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3854D4u; }
        if (ctx->pc != 0x3854D4u) { return; }
    }
    ctx->pc = 0x3854D4u;
label_3854d4:
    // 0x3854d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3854d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3854d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3854d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3854dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3854dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3854e0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3854e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3854e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3854e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3854e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3854e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3854ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3854ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3854f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3854f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x3854f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3854f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3854f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3854f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3854fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3854fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385500: 0x3e00008  jr          $ra
    ctx->pc = 0x385500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385500u;
            // 0x385504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385508u;
    // 0x385508: 0x0  nop
    ctx->pc = 0x385508u;
    // NOP
    // 0x38550c: 0x0  nop
    ctx->pc = 0x38550cu;
    // NOP
}
