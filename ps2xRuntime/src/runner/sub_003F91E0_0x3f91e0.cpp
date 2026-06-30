#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F91E0
// Address: 0x3f91e0 - 0x3f9230
void sub_003F91E0_0x3f91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F91E0_0x3f91e0");
#endif

    switch (ctx->pc) {
        case 0x3f91f8u: goto label_3f91f8;
        case 0x3f920cu: goto label_3f920c;
        default: break;
    }

    ctx->pc = 0x3f91e0u;

    // 0x3f91e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f91e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f91e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f91e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f91e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f91e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f91ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f91ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91f0: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x3F91F0u;
    SET_GPR_U32(ctx, 31, 0x3F91F8u);
    ctx->pc = 0x3F91F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F91F0u;
            // 0x3f91f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F91F8u; }
        if (ctx->pc != 0x3F91F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F91F8u; }
        if (ctx->pc != 0x3F91F8u) { return; }
    }
    ctx->pc = 0x3F91F8u;
label_3f91f8:
    // 0x3f91f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f91f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f91fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f91fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9204: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3F9204u;
    SET_GPR_U32(ctx, 31, 0x3F920Cu);
    ctx->pc = 0x3F9208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9204u;
            // 0x3f9208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F920Cu; }
        if (ctx->pc != 0x3F920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F920Cu; }
        if (ctx->pc != 0x3F920Cu) { return; }
    }
    ctx->pc = 0x3F920Cu;
label_3f920c:
    // 0x3f920c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f920cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f9210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f9214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f9214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f9218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f921c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F921Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F921Cu;
            // 0x3f9220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F9224u;
    // 0x3f9224: 0x0  nop
    ctx->pc = 0x3f9224u;
    // NOP
    // 0x3f9228: 0x0  nop
    ctx->pc = 0x3f9228u;
    // NOP
    // 0x3f922c: 0x0  nop
    ctx->pc = 0x3f922cu;
    // NOP
}
