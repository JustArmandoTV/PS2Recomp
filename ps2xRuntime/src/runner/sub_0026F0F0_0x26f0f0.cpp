#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F0F0
// Address: 0x26f0f0 - 0x26f160
void sub_0026F0F0_0x26f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F0F0_0x26f0f0");
#endif

    switch (ctx->pc) {
        case 0x26f128u: goto label_26f128;
        case 0x26f150u: goto label_26f150;
        default: break;
    }

    ctx->pc = 0x26f0f0u;

    // 0x26f0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f0f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26f0fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26F0FCu;
    {
        const bool branch_taken_0x26f0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0fc) {
            ctx->pc = 0x26F130u;
            goto label_26f130;
        }
    }
    ctx->pc = 0x26F104u;
    // 0x26f104: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x26f108: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26F108u;
    {
        const bool branch_taken_0x26f108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f108) {
            ctx->pc = 0x26F150u;
            goto label_26f150;
        }
    }
    ctx->pc = 0x26F110u;
    // 0x26f110: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x26f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x26f114: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x26F114u;
    {
        const bool branch_taken_0x26f114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f114) {
            ctx->pc = 0x26F150u;
            goto label_26f150;
        }
    }
    ctx->pc = 0x26F11Cu;
    // 0x26f11c: 0x8ce60040  lw          $a2, 0x40($a3)
    ctx->pc = 0x26f11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x26f120: 0xc09b704  jal         func_26DC10
    ctx->pc = 0x26F120u;
    SET_GPR_U32(ctx, 31, 0x26F128u);
    ctx->pc = 0x26F124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F120u;
            // 0x26f124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26DC10u;
    if (runtime->hasFunction(0x26DC10u)) {
        auto targetFn = runtime->lookupFunction(0x26DC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F128u; }
        if (ctx->pc != 0x26F128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DC10_0x26dc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F128u; }
        if (ctx->pc != 0x26F128u) { return; }
    }
    ctx->pc = 0x26F128u;
label_26f128:
    // 0x26f128: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26F128u;
    {
        const bool branch_taken_0x26f128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f128) {
            ctx->pc = 0x26F150u;
            goto label_26f150;
        }
    }
    ctx->pc = 0x26F130u;
label_26f130:
    // 0x26f130: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x26f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x26f134: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26F134u;
    {
        const bool branch_taken_0x26f134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f134) {
            ctx->pc = 0x26F150u;
            goto label_26f150;
        }
    }
    ctx->pc = 0x26F13Cu;
    // 0x26f13c: 0x8ce60040  lw          $a2, 0x40($a3)
    ctx->pc = 0x26f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x26f140: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F140u;
    {
        const bool branch_taken_0x26f140 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F140u;
            // 0x26f144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f140) {
            ctx->pc = 0x26F150u;
            goto label_26f150;
        }
    }
    ctx->pc = 0x26F148u;
    // 0x26f148: 0xc09b704  jal         func_26DC10
    ctx->pc = 0x26F148u;
    SET_GPR_U32(ctx, 31, 0x26F150u);
    ctx->pc = 0x26DC10u;
    if (runtime->hasFunction(0x26DC10u)) {
        auto targetFn = runtime->lookupFunction(0x26DC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F150u; }
        if (ctx->pc != 0x26F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026DC10_0x26dc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F150u; }
        if (ctx->pc != 0x26F150u) { return; }
    }
    ctx->pc = 0x26F150u;
label_26f150:
    // 0x26f150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f154: 0x3e00008  jr          $ra
    ctx->pc = 0x26F154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F154u;
            // 0x26f158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F15Cu;
    // 0x26f15c: 0x0  nop
    ctx->pc = 0x26f15cu;
    // NOP
}
