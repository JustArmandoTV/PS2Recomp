#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B860
// Address: 0x17b860 - 0x17b8b8
void sub_0017B860_0x17b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B860_0x17b860");
#endif

    switch (ctx->pc) {
        case 0x17b874u: goto label_17b874;
        case 0x17b87cu: goto label_17b87c;
        case 0x17b898u: goto label_17b898;
        case 0x17b8a0u: goto label_17b8a0;
        default: break;
    }

    ctx->pc = 0x17b860u;

    // 0x17b860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b868: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17b86c: 0xc05ed74  jal         func_17B5D0
    ctx->pc = 0x17B86Cu;
    SET_GPR_U32(ctx, 31, 0x17B874u);
    ctx->pc = 0x17B870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B86Cu;
            // 0x17b870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B5D0u;
    if (runtime->hasFunction(0x17B5D0u)) {
        auto targetFn = runtime->lookupFunction(0x17B5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B874u; }
        if (ctx->pc != 0x17B874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B5D0_0x17b5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B874u; }
        if (ctx->pc != 0x17B874u) { return; }
    }
    ctx->pc = 0x17B874u;
label_17b874:
    // 0x17b874: 0xc0446c0  jal         func_111B00
    ctx->pc = 0x17B874u;
    SET_GPR_U32(ctx, 31, 0x17B87Cu);
    ctx->pc = 0x17B878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B874u;
            // 0x17b878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B87Cu; }
        if (ctx->pc != 0x17B87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B87Cu; }
        if (ctx->pc != 0x17B87Cu) { return; }
    }
    ctx->pc = 0x17B87Cu;
label_17b87c:
    // 0x17b87c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b884: 0x24845b50  addiu       $a0, $a0, 0x5B50
    ctx->pc = 0x17b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23376));
    // 0x17b888: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B888u;
    {
        const bool branch_taken_0x17b888 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B888u;
            // 0x17b88c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b888) {
            ctx->pc = 0x17B898u;
            goto label_17b898;
        }
    }
    ctx->pc = 0x17B890u;
    // 0x17b890: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17B890u;
    SET_GPR_U32(ctx, 31, 0x17B898u);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B898u; }
        if (ctx->pc != 0x17B898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B898u; }
        if (ctx->pc != 0x17B898u) { return; }
    }
    ctx->pc = 0x17B898u;
label_17b898:
    // 0x17b898: 0xc05ed82  jal         func_17B608
    ctx->pc = 0x17B898u;
    SET_GPR_U32(ctx, 31, 0x17B8A0u);
    ctx->pc = 0x17B608u;
    if (runtime->hasFunction(0x17B608u)) {
        auto targetFn = runtime->lookupFunction(0x17B608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8A0u; }
        if (ctx->pc != 0x17B8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B608_0x17b608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B8A0u; }
        if (ctx->pc != 0x17B8A0u) { return; }
    }
    ctx->pc = 0x17B8A0u;
label_17b8a0:
    // 0x17b8a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17b8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b8a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8ACu;
            // 0x17b8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B8B4u;
    // 0x17b8b4: 0x0  nop
    ctx->pc = 0x17b8b4u;
    // NOP
}
