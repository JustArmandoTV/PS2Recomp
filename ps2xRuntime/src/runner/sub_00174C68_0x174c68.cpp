#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174C68
// Address: 0x174c68 - 0x174ca0
void sub_00174C68_0x174c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174C68_0x174c68");
#endif

    switch (ctx->pc) {
        case 0x174c7cu: goto label_174c7c;
        case 0x174c84u: goto label_174c84;
        case 0x174c8cu: goto label_174c8c;
        default: break;
    }

    ctx->pc = 0x174c68u;

    // 0x174c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174c70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174c74: 0xc0599de  jal         func_166778
    ctx->pc = 0x174C74u;
    SET_GPR_U32(ctx, 31, 0x174C7Cu);
    ctx->pc = 0x174C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C74u;
            // 0x174c78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C7Cu; }
        if (ctx->pc != 0x174C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C7Cu; }
        if (ctx->pc != 0x174C7Cu) { return; }
    }
    ctx->pc = 0x174C7Cu;
label_174c7c:
    // 0x174c7c: 0xc05d328  jal         func_174CA0
    ctx->pc = 0x174C7Cu;
    SET_GPR_U32(ctx, 31, 0x174C84u);
    ctx->pc = 0x174C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C7Cu;
            // 0x174c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174CA0u;
    if (runtime->hasFunction(0x174CA0u)) {
        auto targetFn = runtime->lookupFunction(0x174CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C84u; }
        if (ctx->pc != 0x174C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174CA0_0x174ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C84u; }
        if (ctx->pc != 0x174C84u) { return; }
    }
    ctx->pc = 0x174C84u;
label_174c84:
    // 0x174c84: 0xc0599e0  jal         func_166780
    ctx->pc = 0x174C84u;
    SET_GPR_U32(ctx, 31, 0x174C8Cu);
    ctx->pc = 0x174C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C84u;
            // 0x174c88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C8Cu; }
        if (ctx->pc != 0x174C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C8Cu; }
        if (ctx->pc != 0x174C8Cu) { return; }
    }
    ctx->pc = 0x174C8Cu;
label_174c8c:
    // 0x174c8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174c90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c98: 0x3e00008  jr          $ra
    ctx->pc = 0x174C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C98u;
            // 0x174c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174CA0u;
}
