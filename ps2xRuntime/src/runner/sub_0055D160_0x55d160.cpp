#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055D160
// Address: 0x55d160 - 0x55d1a0
void sub_0055D160_0x55d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055D160_0x55d160");
#endif

    switch (ctx->pc) {
        case 0x55d178u: goto label_55d178;
        case 0x55d184u: goto label_55d184;
        case 0x55d18cu: goto label_55d18c;
        default: break;
    }

    ctx->pc = 0x55d160u;

    // 0x55d160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x55d164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x55d164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x55d168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x55d16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55d16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d170: 0xc157468  jal         func_55D1A0
    ctx->pc = 0x55D170u;
    SET_GPR_U32(ctx, 31, 0x55D178u);
    ctx->pc = 0x55D174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D170u;
            // 0x55d174: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D1A0u;
    if (runtime->hasFunction(0x55D1A0u)) {
        auto targetFn = runtime->lookupFunction(0x55D1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D178u; }
        if (ctx->pc != 0x55D178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D1A0_0x55d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D178u; }
        if (ctx->pc != 0x55D178u) { return; }
    }
    ctx->pc = 0x55D178u;
label_55d178:
    // 0x55d178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x55d178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d17c: 0xc0b38a0  jal         func_2CE280
    ctx->pc = 0x55D17Cu;
    SET_GPR_U32(ctx, 31, 0x55D184u);
    ctx->pc = 0x55D180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D17Cu;
            // 0x55d180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE280u;
    if (runtime->hasFunction(0x2CE280u)) {
        auto targetFn = runtime->lookupFunction(0x2CE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D184u; }
        if (ctx->pc != 0x55D184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE280_0x2ce280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D184u; }
        if (ctx->pc != 0x55D184u) { return; }
    }
    ctx->pc = 0x55D184u;
label_55d184:
    // 0x55d184: 0xc0b389c  jal         func_2CE270
    ctx->pc = 0x55D184u;
    SET_GPR_U32(ctx, 31, 0x55D18Cu);
    ctx->pc = 0x55D188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D184u;
            // 0x55d188: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE270u;
    if (runtime->hasFunction(0x2CE270u)) {
        auto targetFn = runtime->lookupFunction(0x2CE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D18Cu; }
        if (ctx->pc != 0x55D18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE270_0x2ce270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D18Cu; }
        if (ctx->pc != 0x55D18Cu) { return; }
    }
    ctx->pc = 0x55D18Cu;
label_55d18c:
    // 0x55d18c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x55d18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55d190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x55d194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55d194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55d198: 0x3e00008  jr          $ra
    ctx->pc = 0x55D198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55D19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D198u;
            // 0x55d19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55D1A0u;
}
