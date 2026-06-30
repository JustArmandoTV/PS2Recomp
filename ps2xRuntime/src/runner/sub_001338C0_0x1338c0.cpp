#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001338C0
// Address: 0x1338c0 - 0x133940
void sub_001338C0_0x1338c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001338C0_0x1338c0");
#endif

    switch (ctx->pc) {
        case 0x1338f8u: goto label_1338f8;
        case 0x133910u: goto label_133910;
        case 0x133928u: goto label_133928;
        default: break;
    }

    ctx->pc = 0x1338c0u;

    // 0x1338c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1338c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1338c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1338c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1338c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1338c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1338cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1338ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1338d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1338d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1338d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1338d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1338d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338dc: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1338DCu;
    {
        const bool branch_taken_0x1338dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1338E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1338DCu;
            // 0x1338e0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338dc) {
            ctx->pc = 0x1338ECu;
            goto label_1338ec;
        }
    }
    ctx->pc = 0x1338E4u;
    // 0x1338e4: 0x12450004  beq         $s2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1338E4u;
    {
        const bool branch_taken_0x1338e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x1338e4) {
            ctx->pc = 0x1338F8u;
            goto label_1338f8;
        }
    }
    ctx->pc = 0x1338ECu;
label_1338ec:
    // 0x1338ec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1338ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338f0: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x1338F0u;
    SET_GPR_U32(ctx, 31, 0x1338F8u);
    ctx->pc = 0x1338F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1338F0u;
            // 0x1338f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338F8u; }
        if (ctx->pc != 0x1338F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338F8u; }
        if (ctx->pc != 0x1338F8u) { return; }
    }
    ctx->pc = 0x1338F8u;
label_1338f8:
    // 0x1338f8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1338F8u;
    {
        const bool branch_taken_0x1338f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338f8) {
            ctx->pc = 0x133910u;
            goto label_133910;
        }
    }
    ctx->pc = 0x133900u;
    // 0x133900: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x133900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133908: 0xc04cdb0  jal         func_1336C0
    ctx->pc = 0x133908u;
    SET_GPR_U32(ctx, 31, 0x133910u);
    ctx->pc = 0x13390Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133908u;
            // 0x13390c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133910u; }
        if (ctx->pc != 0x133910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133910u; }
        if (ctx->pc != 0x133910u) { return; }
    }
    ctx->pc = 0x133910u;
label_133910:
    // 0x133910: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x133910u;
    {
        const bool branch_taken_0x133910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x133910) {
            ctx->pc = 0x133914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133910u;
            // 0x133914: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13392Cu;
            goto label_13392c;
        }
    }
    ctx->pc = 0x133918u;
    // 0x133918: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x133918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13391c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133920: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x133920u;
    SET_GPR_U32(ctx, 31, 0x133928u);
    ctx->pc = 0x133924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133920u;
            // 0x133924: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133928u; }
        if (ctx->pc != 0x133928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133928u; }
        if (ctx->pc != 0x133928u) { return; }
    }
    ctx->pc = 0x133928u;
label_133928:
    // 0x133928: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x133928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13392c:
    // 0x13392c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13392cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133938: 0x3e00008  jr          $ra
    ctx->pc = 0x133938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133938u;
            // 0x13393c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133940u;
}
