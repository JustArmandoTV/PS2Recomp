#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7130
// Address: 0x2b7130 - 0x2b7190
void sub_002B7130_0x2b7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7130_0x2b7130");
#endif

    switch (ctx->pc) {
        case 0x2b7154u: goto label_2b7154;
        case 0x2b7164u: goto label_2b7164;
        case 0x2b7174u: goto label_2b7174;
        default: break;
    }

    ctx->pc = 0x2b7130u;

    // 0x2b7130: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b7130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b7134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b7134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b7138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b7138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b713c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b7140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b7140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7148: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b7148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b714c: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x2B714Cu;
    SET_GPR_U32(ctx, 31, 0x2B7154u);
    ctx->pc = 0x2B7150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B714Cu;
            // 0x2b7150: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7154u; }
        if (ctx->pc != 0x2B7154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7154u; }
        if (ctx->pc != 0x2B7154u) { return; }
    }
    ctx->pc = 0x2B7154u;
label_2b7154:
    // 0x2b7154: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b7154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7158: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2b7158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b715c: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x2B715Cu;
    SET_GPR_U32(ctx, 31, 0x2B7164u);
    ctx->pc = 0x2B7160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B715Cu;
            // 0x2b7160: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7164u; }
        if (ctx->pc != 0x2B7164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7164u; }
        if (ctx->pc != 0x2B7164u) { return; }
    }
    ctx->pc = 0x2B7164u;
label_2b7164:
    // 0x2b7164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b7164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7168: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b7168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b716c: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x2B716Cu;
    SET_GPR_U32(ctx, 31, 0x2B7174u);
    ctx->pc = 0x2B7170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B716Cu;
            // 0x2b7170: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7174u; }
        if (ctx->pc != 0x2B7174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7174u; }
        if (ctx->pc != 0x2B7174u) { return; }
    }
    ctx->pc = 0x2B7174u;
label_2b7174:
    // 0x2b7174: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b7174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b7178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b717c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b717cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7184: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7184u;
            // 0x2b7188: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B718Cu;
    // 0x2b718c: 0x0  nop
    ctx->pc = 0x2b718cu;
    // NOP
}
