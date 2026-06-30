#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169A90
// Address: 0x169a90 - 0x169ac8
void sub_00169A90_0x169a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169A90_0x169a90");
#endif

    switch (ctx->pc) {
        case 0x169aa4u: goto label_169aa4;
        case 0x169aacu: goto label_169aac;
        case 0x169ab4u: goto label_169ab4;
        default: break;
    }

    ctx->pc = 0x169a90u;

    // 0x169a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169a98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169a9c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x169A9Cu;
    SET_GPR_U32(ctx, 31, 0x169AA4u);
    ctx->pc = 0x169AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169A9Cu;
            // 0x169aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AA4u; }
        if (ctx->pc != 0x169AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AA4u; }
        if (ctx->pc != 0x169AA4u) { return; }
    }
    ctx->pc = 0x169AA4u;
label_169aa4:
    // 0x169aa4: 0xc05a6b2  jal         func_169AC8
    ctx->pc = 0x169AA4u;
    SET_GPR_U32(ctx, 31, 0x169AACu);
    ctx->pc = 0x169AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AA4u;
            // 0x169aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169AC8u;
    if (runtime->hasFunction(0x169AC8u)) {
        auto targetFn = runtime->lookupFunction(0x169AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AACu; }
        if (ctx->pc != 0x169AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169AC8_0x169ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AACu; }
        if (ctx->pc != 0x169AACu) { return; }
    }
    ctx->pc = 0x169AACu;
label_169aac:
    // 0x169aac: 0xc05adca  jal         func_16B728
    ctx->pc = 0x169AACu;
    SET_GPR_U32(ctx, 31, 0x169AB4u);
    ctx->pc = 0x169AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AACu;
            // 0x169ab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AB4u; }
        if (ctx->pc != 0x169AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AB4u; }
        if (ctx->pc != 0x169AB4u) { return; }
    }
    ctx->pc = 0x169AB4u;
label_169ab4:
    // 0x169ab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169ab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x169AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169AC0u;
            // 0x169ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169AC8u;
}
