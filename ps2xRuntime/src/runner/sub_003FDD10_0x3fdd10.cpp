#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FDD10
// Address: 0x3fdd10 - 0x3fdd80
void sub_003FDD10_0x3fdd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FDD10_0x3fdd10");
#endif

    switch (ctx->pc) {
        case 0x3fdd44u: goto label_3fdd44;
        case 0x3fdd68u: goto label_3fdd68;
        default: break;
    }

    ctx->pc = 0x3fdd10u;

    // 0x3fdd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fdd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3fdd14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdd18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fdd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3fdd1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fdd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fdd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3fdd24: 0x8c83010c  lw          $v1, 0x10C($a0)
    ctx->pc = 0x3fdd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x3fdd28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fdd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd2c: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x3fdd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x3fdd30: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdd30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdd34: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdd38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdd3c: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDD3Cu;
    SET_GPR_U32(ctx, 31, 0x3FDD44u);
    ctx->pc = 0x3FDD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDD3Cu;
            // 0x3fdd40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDD44u; }
        if (ctx->pc != 0x3FDD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDD44u; }
        if (ctx->pc != 0x3FDD44u) { return; }
    }
    ctx->pc = 0x3FDD44u;
label_3fdd44:
    // 0x3fdd44: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x3fdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x3fdd48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3fdd4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fdd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdd50: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x3fdd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x3fdd54: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3fdd54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x3fdd58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3fdd5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fdd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fdd60: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FDD60u;
    SET_GPR_U32(ctx, 31, 0x3FDD68u);
    ctx->pc = 0x3FDD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDD60u;
            // 0x3fdd64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDD68u; }
        if (ctx->pc != 0x3FDD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDD68u; }
        if (ctx->pc != 0x3FDD68u) { return; }
    }
    ctx->pc = 0x3FDD68u;
label_3fdd68:
    // 0x3fdd68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fdd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3fdd6c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3fdd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x3fdd70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fdd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fdd74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fdd74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdd78: 0x3e00008  jr          $ra
    ctx->pc = 0x3FDD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDD78u;
            // 0x3fdd7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FDD80u;
}
