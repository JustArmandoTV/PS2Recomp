#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DD070
// Address: 0x3dd070 - 0x3dd0d0
void sub_003DD070_0x3dd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD070_0x3dd070");
#endif

    switch (ctx->pc) {
        case 0x3dd094u: goto label_3dd094;
        case 0x3dd0a0u: goto label_3dd0a0;
        default: break;
    }

    ctx->pc = 0x3dd070u;

    // 0x3dd070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dd070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dd074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dd074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3dd078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dd078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dd07c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dd07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dd080: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dd080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dd088: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x3dd088u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dd08c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3dd08cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3dd090: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3dd090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_3dd094:
    // 0x3dd094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd098: 0xc0f7bf8  jal         func_3DEFE0
    ctx->pc = 0x3DD098u;
    SET_GPR_U32(ctx, 31, 0x3DD0A0u);
    ctx->pc = 0x3DD09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD098u;
            // 0x3dd09c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEFE0u;
    if (runtime->hasFunction(0x3DEFE0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD0A0u; }
        if (ctx->pc != 0x3DD0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEFE0_0x3defe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD0A0u; }
        if (ctx->pc != 0x3DD0A0u) { return; }
    }
    ctx->pc = 0x3DD0A0u;
label_3dd0a0:
    // 0x3dd0a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dd0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3dd0a4: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x3dd0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x3dd0a8: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DD0A8u;
    {
        const bool branch_taken_0x3dd0a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd0a8) {
            ctx->pc = 0x3DD094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dd094;
        }
    }
    ctx->pc = 0x3DD0B0u;
    // 0x3dd0b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dd0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd0b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dd0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dd0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD0C0u;
            // 0x3dd0c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DD0C8u;
    // 0x3dd0c8: 0x0  nop
    ctx->pc = 0x3dd0c8u;
    // NOP
    // 0x3dd0cc: 0x0  nop
    ctx->pc = 0x3dd0ccu;
    // NOP
}
