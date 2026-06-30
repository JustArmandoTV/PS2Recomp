#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B8B8
// Address: 0x17b8b8 - 0x17b930
void sub_0017B8B8_0x17b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8B8_0x17b8b8");
#endif

    switch (ctx->pc) {
        case 0x17b8dcu: goto label_17b8dc;
        case 0x17b8ecu: goto label_17b8ec;
        case 0x17b908u: goto label_17b908;
        case 0x17b910u: goto label_17b910;
        default: break;
    }

    ctx->pc = 0x17b8b8u;

    // 0x17b8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b8c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b8d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17b8d4: 0xc05ed74  jal         func_17B5D0
    ctx->pc = 0x17B8D4u;
    SET_GPR_U32(ctx, 31, 0x17B8DCu);
    ctx->pc = 0x17B8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8D4u;
            // 0x17b8d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B5D0u;
    if (runtime->hasFunction(0x17B5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17B5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8DCu; }
        if (ctx->pc != 0x17B8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B5D0_0x17b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8DCu; }
        if (ctx->pc != 0x17B8DCu) { return; }
    }
    ctx->pc = 0x17B8DCu;
label_17b8dc:
    // 0x17b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8e4: 0xc0447ae  jal         func_111EB8
    ctx->pc = 0x17B8E4u;
    SET_GPR_U32(ctx, 31, 0x17B8ECu);
    ctx->pc = 0x17B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8E4u;
            // 0x17b8e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111EB8u;
    if (runtime->hasFunction(0x111EB8u)) {
        auto targetFn = runtime->lookupFunction(0x111EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8ECu; }
        if (ctx->pc != 0x17B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111EB8_0x111eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8ECu; }
        if (ctx->pc != 0x17B8ECu) { return; }
    }
    ctx->pc = 0x17B8ECu;
label_17b8ec:
    // 0x17b8ec: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b8f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8f4: 0x24845b70  addiu       $a0, $a0, 0x5B70
    ctx->pc = 0x17b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23408));
    // 0x17b8f8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B8F8u;
    {
        const bool branch_taken_0x17b8f8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8F8u;
            // 0x17b8fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8f8) {
            ctx->pc = 0x17B908u;
            goto label_17b908;
        }
    }
    ctx->pc = 0x17B900u;
    // 0x17b900: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B900u;
    SET_GPR_U32(ctx, 31, 0x17B908u);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B908u; }
        if (ctx->pc != 0x17B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B908u; }
        if (ctx->pc != 0x17B908u) { return; }
    }
    ctx->pc = 0x17B908u;
label_17b908:
    // 0x17b908: 0xc05ed82  jal         func_17B608
    ctx->pc = 0x17B908u;
    SET_GPR_U32(ctx, 31, 0x17B910u);
    ctx->pc = 0x17B608u;
    if (runtime->hasFunction(0x17B608u)) {
        auto targetFn = runtime->lookupFunction(0x17B608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B910u; }
        if (ctx->pc != 0x17B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B608_0x17b608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B910u; }
        if (ctx->pc != 0x17B910u) { return; }
    }
    ctx->pc = 0x17B910u;
label_17b910:
    // 0x17b910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b914: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b91c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b920: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17b920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b924: 0x3e00008  jr          $ra
    ctx->pc = 0x17B924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B924u;
            // 0x17b928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B92Cu;
    // 0x17b92c: 0x0  nop
    ctx->pc = 0x17b92cu;
    // NOP
}
