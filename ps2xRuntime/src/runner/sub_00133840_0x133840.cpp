#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133840
// Address: 0x133840 - 0x1338c0
void sub_00133840_0x133840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133840_0x133840");
#endif

    switch (ctx->pc) {
        case 0x133878u: goto label_133878;
        case 0x133890u: goto label_133890;
        case 0x1338a8u: goto label_1338a8;
        default: break;
    }

    ctx->pc = 0x133840u;

    // 0x133840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x133844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x133848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13384c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133850: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x133850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133858: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x133858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13385c: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13385Cu;
    {
        const bool branch_taken_0x13385c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x133860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13385Cu;
            // 0x133860: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13385c) {
            ctx->pc = 0x13386Cu;
            goto label_13386c;
        }
    }
    ctx->pc = 0x133864u;
    // 0x133864: 0x12450004  beq         $s2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133864u;
    {
        const bool branch_taken_0x133864 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x133864) {
            ctx->pc = 0x133878u;
            goto label_133878;
        }
    }
    ctx->pc = 0x13386Cu;
label_13386c:
    // 0x13386c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x13386cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133870: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x133870u;
    SET_GPR_U32(ctx, 31, 0x133878u);
    ctx->pc = 0x133874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133870u;
            // 0x133874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133878u; }
        if (ctx->pc != 0x133878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133878u; }
        if (ctx->pc != 0x133878u) { return; }
    }
    ctx->pc = 0x133878u;
label_133878:
    // 0x133878: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133878u;
    {
        const bool branch_taken_0x133878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x133878) {
            ctx->pc = 0x133890u;
            goto label_133890;
        }
    }
    ctx->pc = 0x133880u;
    // 0x133880: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x133880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133888: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x133888u;
    SET_GPR_U32(ctx, 31, 0x133890u);
    ctx->pc = 0x13388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133888u;
            // 0x13388c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133890u; }
        if (ctx->pc != 0x133890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133890u; }
        if (ctx->pc != 0x133890u) { return; }
    }
    ctx->pc = 0x133890u;
label_133890:
    // 0x133890: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x133890u;
    {
        const bool branch_taken_0x133890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x133890) {
            ctx->pc = 0x133894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133890u;
            // 0x133894: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1338ACu;
            goto label_1338ac;
        }
    }
    ctx->pc = 0x133898u;
    // 0x133898: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x133898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13389c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338a0: 0xc04cdb0  jal         func_1336C0
    ctx->pc = 0x1338A0u;
    SET_GPR_U32(ctx, 31, 0x1338A8u);
    ctx->pc = 0x1338A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1338A0u;
            // 0x1338a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338A8u; }
        if (ctx->pc != 0x1338A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1338A8u; }
        if (ctx->pc != 0x1338A8u) { return; }
    }
    ctx->pc = 0x1338A8u;
label_1338a8:
    // 0x1338a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1338a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1338ac:
    // 0x1338ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1338acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1338b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1338b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1338b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1338b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1338b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1338B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1338BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1338B8u;
            // 0x1338bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1338C0u;
}
