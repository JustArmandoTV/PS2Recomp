#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174228
// Address: 0x174228 - 0x174278
void sub_00174228_0x174228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174228_0x174228");
#endif

    switch (ctx->pc) {
        case 0x174254u: goto label_174254;
        case 0x17425cu: goto label_17425c;
        case 0x174264u: goto label_174264;
        default: break;
    }

    ctx->pc = 0x174228u;

    // 0x174228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17422c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17422cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174230: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x174234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174238: 0x805c0d0  j           func_170340
    ctx->pc = 0x174238u;
    ctx->pc = 0x17423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174238u;
            // 0x17423c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170340u;
    {
        auto targetFn = runtime->lookupFunction(0x170340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x174240u;
    // 0x174240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174248: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17424c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17424Cu;
    SET_GPR_U32(ctx, 31, 0x174254u);
    ctx->pc = 0x174250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17424Cu;
            // 0x174250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174254u; }
        if (ctx->pc != 0x174254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174254u; }
        if (ctx->pc != 0x174254u) { return; }
    }
    ctx->pc = 0x174254u;
label_174254:
    // 0x174254: 0xc05d09e  jal         func_174278
    ctx->pc = 0x174254u;
    SET_GPR_U32(ctx, 31, 0x17425Cu);
    ctx->pc = 0x174258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174254u;
            // 0x174258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174278u;
    if (runtime->hasFunction(0x174278u)) {
        auto targetFn = runtime->lookupFunction(0x174278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17425Cu; }
        if (ctx->pc != 0x17425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174278_0x174278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17425Cu; }
        if (ctx->pc != 0x17425Cu) { return; }
    }
    ctx->pc = 0x17425Cu;
label_17425c:
    // 0x17425c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17425Cu;
    SET_GPR_U32(ctx, 31, 0x174264u);
    ctx->pc = 0x174260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17425Cu;
            // 0x174260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174264u; }
        if (ctx->pc != 0x174264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174264u; }
        if (ctx->pc != 0x174264u) { return; }
    }
    ctx->pc = 0x174264u;
label_174264:
    // 0x174264: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174268: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17426c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17426cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174270: 0x3e00008  jr          $ra
    ctx->pc = 0x174270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174270u;
            // 0x174274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174278u;
}
