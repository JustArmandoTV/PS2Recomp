#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00367770
// Address: 0x367770 - 0x3677f0
void sub_00367770_0x367770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367770_0x367770");
#endif

    switch (ctx->pc) {
        case 0x367794u: goto label_367794;
        case 0x3677a4u: goto label_3677a4;
        case 0x3677c0u: goto label_3677c0;
        case 0x3677d0u: goto label_3677d0;
        default: break;
    }

    ctx->pc = 0x367770u;

    // 0x367770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36777c: 0x8c8301b8  lw          $v1, 0x1B8($a0)
    ctx->pc = 0x36777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x367780: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x367780u;
    {
        const bool branch_taken_0x367780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x367784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367780u;
            // 0x367784: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367780) {
            ctx->pc = 0x3677A8u;
            goto label_3677a8;
        }
    }
    ctx->pc = 0x367788u;
    // 0x367788: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x367788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x36778c: 0xc112af4  jal         func_44ABD0
    ctx->pc = 0x36778Cu;
    SET_GPR_U32(ctx, 31, 0x367794u);
    ctx->pc = 0x367790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36778Cu;
            // 0x367790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367794u; }
        if (ctx->pc != 0x367794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367794u; }
        if (ctx->pc != 0x367794u) { return; }
    }
    ctx->pc = 0x367794u;
label_367794:
    // 0x367794: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x367794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x367798: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x367798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x36779c: 0xc112af4  jal         func_44ABD0
    ctx->pc = 0x36779Cu;
    SET_GPR_U32(ctx, 31, 0x3677A4u);
    ctx->pc = 0x3677A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36779Cu;
            // 0x3677a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3677A4u; }
        if (ctx->pc != 0x3677A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3677A4u; }
        if (ctx->pc != 0x3677A4u) { return; }
    }
    ctx->pc = 0x3677A4u;
label_3677a4:
    // 0x3677a4: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x3677a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_3677a8:
    // 0x3677a8: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x3677a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x3677ac: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3677ACu;
    {
        const bool branch_taken_0x3677ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3677ac) {
            ctx->pc = 0x3677B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3677ACu;
            // 0x3677b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3677D8u;
            goto label_3677d8;
        }
    }
    ctx->pc = 0x3677B4u;
    // 0x3677b4: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x3677b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x3677b8: 0xc112af4  jal         func_44ABD0
    ctx->pc = 0x3677B8u;
    SET_GPR_U32(ctx, 31, 0x3677C0u);
    ctx->pc = 0x3677BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3677B8u;
            // 0x3677bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3677C0u; }
        if (ctx->pc != 0x3677C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3677C0u; }
        if (ctx->pc != 0x3677C0u) { return; }
    }
    ctx->pc = 0x3677C0u;
label_3677c0:
    // 0x3677c0: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x3677c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x3677c4: 0x8e0401a8  lw          $a0, 0x1A8($s0)
    ctx->pc = 0x3677c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x3677c8: 0xc112af4  jal         func_44ABD0
    ctx->pc = 0x3677C8u;
    SET_GPR_U32(ctx, 31, 0x3677D0u);
    ctx->pc = 0x3677CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3677C8u;
            // 0x3677cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ABD0u;
    if (runtime->hasFunction(0x44ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x44ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3677D0u; }
        if (ctx->pc != 0x3677D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ABD0_0x44abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3677D0u; }
        if (ctx->pc != 0x3677D0u) { return; }
    }
    ctx->pc = 0x3677D0u;
label_3677d0:
    // 0x3677d0: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x3677d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x3677d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3677d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3677d8:
    // 0x3677d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3677d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3677dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3677DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3677E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3677DCu;
            // 0x3677e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3677E4u;
    // 0x3677e4: 0x0  nop
    ctx->pc = 0x3677e4u;
    // NOP
    // 0x3677e8: 0x0  nop
    ctx->pc = 0x3677e8u;
    // NOP
    // 0x3677ec: 0x0  nop
    ctx->pc = 0x3677ecu;
    // NOP
}
