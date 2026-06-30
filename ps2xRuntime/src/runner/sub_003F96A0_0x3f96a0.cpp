#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F96A0
// Address: 0x3f96a0 - 0x3f96f0
void sub_003F96A0_0x3f96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F96A0_0x3f96a0");
#endif

    switch (ctx->pc) {
        case 0x3f96b8u: goto label_3f96b8;
        case 0x3f96ccu: goto label_3f96cc;
        default: break;
    }

    ctx->pc = 0x3f96a0u;

    // 0x3f96a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f96a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f96a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f96a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f96a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f96ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f96acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f96b0: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x3F96B0u;
    SET_GPR_U32(ctx, 31, 0x3F96B8u);
    ctx->pc = 0x3F96B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F96B0u;
            // 0x3f96b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F96B8u; }
        if (ctx->pc != 0x3F96B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F96B8u; }
        if (ctx->pc != 0x3F96B8u) { return; }
    }
    ctx->pc = 0x3F96B8u;
label_3f96b8:
    // 0x3f96b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f96b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f96bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f96bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f96c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f96c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f96c4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3F96C4u;
    SET_GPR_U32(ctx, 31, 0x3F96CCu);
    ctx->pc = 0x3F96C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F96C4u;
            // 0x3f96c8: 0x240500f1  addiu       $a1, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F96CCu; }
        if (ctx->pc != 0x3F96CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F96CCu; }
        if (ctx->pc != 0x3F96CCu) { return; }
    }
    ctx->pc = 0x3F96CCu;
label_3f96cc:
    // 0x3f96cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f96ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f96d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f96d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f96d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f96d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f96d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f96d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f96dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F96DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F96E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F96DCu;
            // 0x3f96e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F96E4u;
    // 0x3f96e4: 0x0  nop
    ctx->pc = 0x3f96e4u;
    // NOP
    // 0x3f96e8: 0x0  nop
    ctx->pc = 0x3f96e8u;
    // NOP
    // 0x3f96ec: 0x0  nop
    ctx->pc = 0x3f96ecu;
    // NOP
}
