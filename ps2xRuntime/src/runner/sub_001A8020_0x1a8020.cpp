#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8020
// Address: 0x1a8020 - 0x1a80d8
void sub_001A8020_0x1a8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8020_0x1a8020");
#endif

    switch (ctx->pc) {
        case 0x1a8044u: goto label_1a8044;
        case 0x1a8058u: goto label_1a8058;
        case 0x1a806cu: goto label_1a806c;
        case 0x1a8080u: goto label_1a8080;
        case 0x1a8094u: goto label_1a8094;
        case 0x1a80a8u: goto label_1a80a8;
        case 0x1a80bcu: goto label_1a80bc;
        default: break;
    }

    ctx->pc = 0x1a8020u;

    // 0x1a8020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8024: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1a8024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1a8028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a802c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a802cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8030: 0x2445aa48  addiu       $a1, $v0, -0x55B8
    ctx->pc = 0x1a8030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
    // 0x1a8034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a803c: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A803Cu;
    SET_GPR_U32(ctx, 31, 0x1A8044u);
    ctx->pc = 0x1A8040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A803Cu;
            // 0x1a8040: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8044u; }
        if (ctx->pc != 0x1A8044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8044u; }
        if (ctx->pc != 0x1A8044u) { return; }
    }
    ctx->pc = 0x1A8044u;
label_1a8044:
    // 0x1a8044: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a8044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a8048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a8048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a804c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8050: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A8050u;
    SET_GPR_U32(ctx, 31, 0x1A8058u);
    ctx->pc = 0x1A8054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8050u;
            // 0x1a8054: 0x24a5aa98  addiu       $a1, $a1, -0x5568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8058u; }
        if (ctx->pc != 0x1A8058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8058u; }
        if (ctx->pc != 0x1A8058u) { return; }
    }
    ctx->pc = 0x1A8058u;
label_1a8058:
    // 0x1a8058: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a8058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a805c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a805cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a8060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8064: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A8064u;
    SET_GPR_U32(ctx, 31, 0x1A806Cu);
    ctx->pc = 0x1A8068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8064u;
            // 0x1a8068: 0x24a5aae8  addiu       $a1, $a1, -0x5518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A806Cu; }
        if (ctx->pc != 0x1A806Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A806Cu; }
        if (ctx->pc != 0x1A806Cu) { return; }
    }
    ctx->pc = 0x1A806Cu;
label_1a806c:
    // 0x1a806c: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a806cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a8070: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a8070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a8074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8078: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A8078u;
    SET_GPR_U32(ctx, 31, 0x1A8080u);
    ctx->pc = 0x1A807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8078u;
            // 0x1a807c: 0x24a5ab38  addiu       $a1, $a1, -0x54C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8080u; }
        if (ctx->pc != 0x1A8080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8080u; }
        if (ctx->pc != 0x1A8080u) { return; }
    }
    ctx->pc = 0x1A8080u;
label_1a8080:
    // 0x1a8080: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a8080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a8084: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a8084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a8088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a808c: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A808Cu;
    SET_GPR_U32(ctx, 31, 0x1A8094u);
    ctx->pc = 0x1A8090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A808Cu;
            // 0x1a8090: 0x24a5abd8  addiu       $a1, $a1, -0x5428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8094u; }
        if (ctx->pc != 0x1A8094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8094u; }
        if (ctx->pc != 0x1A8094u) { return; }
    }
    ctx->pc = 0x1A8094u;
label_1a8094:
    // 0x1a8094: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a8094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a8098: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a8098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a809c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80a0: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A80A0u;
    SET_GPR_U32(ctx, 31, 0x1A80A8u);
    ctx->pc = 0x1A80A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80A0u;
            // 0x1a80a4: 0x24a5ac28  addiu       $a1, $a1, -0x53D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80A8u; }
        if (ctx->pc != 0x1A80A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80A8u; }
        if (ctx->pc != 0x1A80A8u) { return; }
    }
    ctx->pc = 0x1A80A8u;
label_1a80a8:
    // 0x1a80a8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a80ac: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1a80acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1a80b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a80b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80b4: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A80B4u;
    SET_GPR_U32(ctx, 31, 0x1A80BCu);
    ctx->pc = 0x1A80B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80B4u;
            // 0x1a80b8: 0x24a5ac78  addiu       $a1, $a1, -0x5388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80BCu; }
        if (ctx->pc != 0x1A80BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80BCu; }
        if (ctx->pc != 0x1A80BCu) { return; }
    }
    ctx->pc = 0x1A80BCu;
label_1a80bc:
    // 0x1a80bc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1a80c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a80c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a80c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a80c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a80c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a80c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a80cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A80CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A80D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80CCu;
            // 0x1a80d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A80D4u;
    // 0x1a80d4: 0x0  nop
    ctx->pc = 0x1a80d4u;
    // NOP
}
