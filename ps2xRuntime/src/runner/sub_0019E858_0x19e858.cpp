#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E858
// Address: 0x19e858 - 0x19e988
void sub_0019E858_0x19e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E858_0x19e858");
#endif

    switch (ctx->pc) {
        case 0x19e880u: goto label_19e880;
        case 0x19e894u: goto label_19e894;
        case 0x19e8a0u: goto label_19e8a0;
        case 0x19e8b0u: goto label_19e8b0;
        case 0x19e8bcu: goto label_19e8bc;
        case 0x19e8d8u: goto label_19e8d8;
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e93cu: goto label_19e93c;
        case 0x19e968u: goto label_19e968;
        default: break;
    }

    ctx->pc = 0x19e858u;

    // 0x19e858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e860: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19e860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e864: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e868: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e86c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19e870: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19e870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e874: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19e878: 0xc067a9a  jal         func_19EA68
    ctx->pc = 0x19E878u;
    SET_GPR_U32(ctx, 31, 0x19E880u);
    ctx->pc = 0x19E87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E878u;
            // 0x19e87c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EA68u;
    if (runtime->hasFunction(0x19EA68u)) {
        auto targetFn = runtime->lookupFunction(0x19EA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E880u; }
        if (ctx->pc != 0x19E880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EA68_0x19ea68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E880u; }
        if (ctx->pc != 0x19E880u) { return; }
    }
    ctx->pc = 0x19E880u;
label_19e880:
    // 0x19e880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e884: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19e884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19e888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19e888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e88c: 0xc067ab2  jal         func_19EAC8
    ctx->pc = 0x19E88Cu;
    SET_GPR_U32(ctx, 31, 0x19E894u);
    ctx->pc = 0x19E890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E88Cu;
            // 0x19e890: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EAC8u;
    if (runtime->hasFunction(0x19EAC8u)) {
        auto targetFn = runtime->lookupFunction(0x19EAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E894u; }
        if (ctx->pc != 0x19E894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EAC8_0x19eac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E894u; }
        if (ctx->pc != 0x19E894u) { return; }
    }
    ctx->pc = 0x19E894u;
label_19e894:
    // 0x19e894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e898: 0xc067ae6  jal         func_19EB98
    ctx->pc = 0x19E898u;
    SET_GPR_U32(ctx, 31, 0x19E8A0u);
    ctx->pc = 0x19E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E898u;
            // 0x19e89c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EB98u;
    if (runtime->hasFunction(0x19EB98u)) {
        auto targetFn = runtime->lookupFunction(0x19EB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8A0u; }
        if (ctx->pc != 0x19E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EB98_0x19eb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8A0u; }
        if (ctx->pc != 0x19E8A0u) { return; }
    }
    ctx->pc = 0x19E8A0u;
label_19e8a0:
    // 0x19e8a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19e8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8a8: 0xc067aee  jal         func_19EBB8
    ctx->pc = 0x19E8A8u;
    SET_GPR_U32(ctx, 31, 0x19E8B0u);
    ctx->pc = 0x19E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E8A8u;
            // 0x19e8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EBB8u;
    if (runtime->hasFunction(0x19EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x19EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8B0u; }
        if (ctx->pc != 0x19E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EBB8_0x19ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8B0u; }
        if (ctx->pc != 0x19E8B0u) { return; }
    }
    ctx->pc = 0x19E8B0u;
label_19e8b0:
    // 0x19e8b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8b4: 0xc067b00  jal         func_19EC00
    ctx->pc = 0x19E8B4u;
    SET_GPR_U32(ctx, 31, 0x19E8BCu);
    ctx->pc = 0x19E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E8B4u;
            // 0x19e8b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EC00u;
    if (runtime->hasFunction(0x19EC00u)) {
        auto targetFn = runtime->lookupFunction(0x19EC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8BCu; }
        if (ctx->pc != 0x19E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EC00_0x19ec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8BCu; }
        if (ctx->pc != 0x19E8BCu) { return; }
    }
    ctx->pc = 0x19E8BCu;
label_19e8bc:
    // 0x19e8bc: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x19e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x19e8c0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x19e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19e8c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8c8: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x19e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x19e8cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8d0: 0xc067a62  jal         func_19E988
    ctx->pc = 0x19E8D0u;
    SET_GPR_U32(ctx, 31, 0x19E8D8u);
    ctx->pc = 0x19E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E8D0u;
            // 0x19e8d4: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E988u;
    if (runtime->hasFunction(0x19E988u)) {
        auto targetFn = runtime->lookupFunction(0x19E988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8D8u; }
        if (ctx->pc != 0x19E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E988_0x19e988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8D8u; }
        if (ctx->pc != 0x19E8D8u) { return; }
    }
    ctx->pc = 0x19E8D8u;
label_19e8d8:
    // 0x19e8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8dc: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x19e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x19e8e0: 0xc067a88  jal         func_19EA20
    ctx->pc = 0x19E8E0u;
    SET_GPR_U32(ctx, 31, 0x19E8E8u);
    ctx->pc = 0x19E8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E8E0u;
            // 0x19e8e4: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EA20u;
    if (runtime->hasFunction(0x19EA20u)) {
        auto targetFn = runtime->lookupFunction(0x19EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8E8u; }
        if (ctx->pc != 0x19E8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EA20_0x19ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E8E8u; }
        if (ctx->pc != 0x19E8E8u) { return; }
    }
    ctx->pc = 0x19E8E8u;
label_19e8e8:
    // 0x19e8e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8ec: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x19e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x19e8f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e8f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e8fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19e8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e900: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19e904: 0x8067a44  j           func_19E910
    ctx->pc = 0x19E904u;
    ctx->pc = 0x19E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E904u;
            // 0x19e908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E910u;
    goto label_19e910;
    ctx->pc = 0x19E90Cu;
    // 0x19e90c: 0x0  nop
    ctx->pc = 0x19e90cu;
    // NOP
label_19e910:
    // 0x19e910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e914: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19e914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e91c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e928: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x19e928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x19e92c: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19E92Cu;
    {
        const bool branch_taken_0x19e92c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e92c) {
            ctx->pc = 0x19E930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19E92Cu;
            // 0x19e930: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19E960u;
            goto label_19e960;
        }
    }
    ctx->pc = 0x19E934u;
    // 0x19e934: 0xc067a88  jal         func_19EA20
    ctx->pc = 0x19E934u;
    SET_GPR_U32(ctx, 31, 0x19E93Cu);
    ctx->pc = 0x19E938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E934u;
            // 0x19e938: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EA20u;
    if (runtime->hasFunction(0x19EA20u)) {
        auto targetFn = runtime->lookupFunction(0x19EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E93Cu; }
        if (ctx->pc != 0x19E93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EA20_0x19ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E93Cu; }
        if (ctx->pc != 0x19E93Cu) { return; }
    }
    ctx->pc = 0x19E93Cu;
label_19e93c:
    // 0x19e93c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19e93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e944: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E944u;
    {
        const bool branch_taken_0x19e944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E944u;
            // 0x19e948: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e944) {
            ctx->pc = 0x19E958u;
            goto label_19e958;
        }
    }
    ctx->pc = 0x19E94Cu;
    // 0x19e94c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19E94Cu;
    {
        const bool branch_taken_0x19e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E94Cu;
            // 0x19e950: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e94c) {
            ctx->pc = 0x19E95Cu;
            goto label_19e95c;
        }
    }
    ctx->pc = 0x19E954u;
    // 0x19e954: 0x0  nop
    ctx->pc = 0x19e954u;
    // NOP
label_19e958:
    // 0x19e958: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x19e958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_19e95c:
    // 0x19e95c: 0x8e11005c  lw          $s1, 0x5C($s0)
    ctx->pc = 0x19e95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_19e960:
    // 0x19e960: 0xc067a0c  jal         func_19E830
    ctx->pc = 0x19E960u;
    SET_GPR_U32(ctx, 31, 0x19E968u);
    ctx->pc = 0x19E964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E960u;
            // 0x19e964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E830u;
    if (runtime->hasFunction(0x19E830u)) {
        auto targetFn = runtime->lookupFunction(0x19E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E968u; }
        if (ctx->pc != 0x19E968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E830_0x19e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E968u; }
        if (ctx->pc != 0x19E968u) { return; }
    }
    ctx->pc = 0x19E968u;
label_19e968:
    // 0x19e968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e97c: 0x806f9f4  j           func_1BE7D0
    ctx->pc = 0x19E97Cu;
    ctx->pc = 0x19E980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E97Cu;
            // 0x19e980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E984u;
    // 0x19e984: 0x0  nop
    ctx->pc = 0x19e984u;
    // NOP
}
