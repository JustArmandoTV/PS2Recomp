#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003488A0
// Address: 0x3488a0 - 0x348900
void sub_003488A0_0x3488a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003488A0_0x3488a0");
#endif

    switch (ctx->pc) {
        case 0x3488c4u: goto label_3488c4;
        case 0x3488d0u: goto label_3488d0;
        default: break;
    }

    ctx->pc = 0x3488a0u;

    // 0x3488a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3488a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3488a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3488a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3488a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3488a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3488ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3488acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3488b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3488b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3488b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3488b8: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x3488b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3488bc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3488bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3488c0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3488c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_3488c4:
    // 0x3488c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3488c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3488c8: 0xc0d25ec  jal         func_3497B0
    ctx->pc = 0x3488C8u;
    SET_GPR_U32(ctx, 31, 0x3488D0u);
    ctx->pc = 0x3488CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3488C8u;
            // 0x3488cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3497B0u;
    if (runtime->hasFunction(0x3497B0u)) {
        auto targetFn = runtime->lookupFunction(0x3497B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3488D0u; }
        if (ctx->pc != 0x3488D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003497B0_0x3497b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3488D0u; }
        if (ctx->pc != 0x3488D0u) { return; }
    }
    ctx->pc = 0x3488D0u;
label_3488d0:
    // 0x3488d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3488d4: 0x26100240  addiu       $s0, $s0, 0x240
    ctx->pc = 0x3488d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x3488d8: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3488D8u;
    {
        const bool branch_taken_0x3488d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3488d8) {
            ctx->pc = 0x3488C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3488c4;
        }
    }
    ctx->pc = 0x3488E0u;
    // 0x3488e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3488e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3488e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3488e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3488e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3488e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3488ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3488ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3488f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3488F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3488F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3488F0u;
            // 0x3488f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3488F8u;
    // 0x3488f8: 0x0  nop
    ctx->pc = 0x3488f8u;
    // NOP
    // 0x3488fc: 0x0  nop
    ctx->pc = 0x3488fcu;
    // NOP
}
