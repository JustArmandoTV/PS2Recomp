#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175EA0
// Address: 0x175ea0 - 0x175ef0
void sub_00175EA0_0x175ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175EA0_0x175ea0");
#endif

    switch (ctx->pc) {
        case 0x175eccu: goto label_175ecc;
        case 0x175ed4u: goto label_175ed4;
        case 0x175edcu: goto label_175edc;
        default: break;
    }

    ctx->pc = 0x175ea0u;

    // 0x175ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175ea8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x175ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175eb0: 0x805c0fc  j           func_1703F0
    ctx->pc = 0x175EB0u;
    ctx->pc = 0x175EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EB0u;
            // 0x175eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1703F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1703F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x175EB8u;
    // 0x175eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175ec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175ec4: 0xc0599de  jal         func_166778
    ctx->pc = 0x175EC4u;
    SET_GPR_U32(ctx, 31, 0x175ECCu);
    ctx->pc = 0x175EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EC4u;
            // 0x175ec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175ECCu; }
        if (ctx->pc != 0x175ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175ECCu; }
        if (ctx->pc != 0x175ECCu) { return; }
    }
    ctx->pc = 0x175ECCu;
label_175ecc:
    // 0x175ecc: 0xc05d7bc  jal         func_175EF0
    ctx->pc = 0x175ECCu;
    SET_GPR_U32(ctx, 31, 0x175ED4u);
    ctx->pc = 0x175ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175ECCu;
            // 0x175ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175EF0u;
    if (runtime->hasFunction(0x175EF0u)) {
        auto targetFn = runtime->lookupFunction(0x175EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175ED4u; }
        if (ctx->pc != 0x175ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EF0_0x175ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175ED4u; }
        if (ctx->pc != 0x175ED4u) { return; }
    }
    ctx->pc = 0x175ED4u;
label_175ed4:
    // 0x175ed4: 0xc0599e0  jal         func_166780
    ctx->pc = 0x175ED4u;
    SET_GPR_U32(ctx, 31, 0x175EDCu);
    ctx->pc = 0x175ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175ED4u;
            // 0x175ed8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EDCu; }
        if (ctx->pc != 0x175EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EDCu; }
        if (ctx->pc != 0x175EDCu) { return; }
    }
    ctx->pc = 0x175EDCu;
label_175edc:
    // 0x175edc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175ee0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x175EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175EE8u;
            // 0x175eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175EF0u;
}
