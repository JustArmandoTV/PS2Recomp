#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB900
// Address: 0x2bb900 - 0x2bba30
void sub_002BB900_0x2bb900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB900_0x2bb900");
#endif

    switch (ctx->pc) {
        case 0x2bb900u: goto label_2bb900;
        case 0x2bb904u: goto label_2bb904;
        case 0x2bb908u: goto label_2bb908;
        case 0x2bb90cu: goto label_2bb90c;
        case 0x2bb910u: goto label_2bb910;
        case 0x2bb914u: goto label_2bb914;
        case 0x2bb918u: goto label_2bb918;
        case 0x2bb91cu: goto label_2bb91c;
        case 0x2bb920u: goto label_2bb920;
        case 0x2bb924u: goto label_2bb924;
        case 0x2bb928u: goto label_2bb928;
        case 0x2bb92cu: goto label_2bb92c;
        case 0x2bb930u: goto label_2bb930;
        case 0x2bb934u: goto label_2bb934;
        case 0x2bb938u: goto label_2bb938;
        case 0x2bb93cu: goto label_2bb93c;
        case 0x2bb940u: goto label_2bb940;
        case 0x2bb944u: goto label_2bb944;
        case 0x2bb948u: goto label_2bb948;
        case 0x2bb94cu: goto label_2bb94c;
        case 0x2bb950u: goto label_2bb950;
        case 0x2bb954u: goto label_2bb954;
        case 0x2bb958u: goto label_2bb958;
        case 0x2bb95cu: goto label_2bb95c;
        case 0x2bb960u: goto label_2bb960;
        case 0x2bb964u: goto label_2bb964;
        case 0x2bb968u: goto label_2bb968;
        case 0x2bb96cu: goto label_2bb96c;
        case 0x2bb970u: goto label_2bb970;
        case 0x2bb974u: goto label_2bb974;
        case 0x2bb978u: goto label_2bb978;
        case 0x2bb97cu: goto label_2bb97c;
        case 0x2bb980u: goto label_2bb980;
        case 0x2bb984u: goto label_2bb984;
        case 0x2bb988u: goto label_2bb988;
        case 0x2bb98cu: goto label_2bb98c;
        case 0x2bb990u: goto label_2bb990;
        case 0x2bb994u: goto label_2bb994;
        case 0x2bb998u: goto label_2bb998;
        case 0x2bb99cu: goto label_2bb99c;
        case 0x2bb9a0u: goto label_2bb9a0;
        case 0x2bb9a4u: goto label_2bb9a4;
        case 0x2bb9a8u: goto label_2bb9a8;
        case 0x2bb9acu: goto label_2bb9ac;
        case 0x2bb9b0u: goto label_2bb9b0;
        case 0x2bb9b4u: goto label_2bb9b4;
        case 0x2bb9b8u: goto label_2bb9b8;
        case 0x2bb9bcu: goto label_2bb9bc;
        case 0x2bb9c0u: goto label_2bb9c0;
        case 0x2bb9c4u: goto label_2bb9c4;
        case 0x2bb9c8u: goto label_2bb9c8;
        case 0x2bb9ccu: goto label_2bb9cc;
        case 0x2bb9d0u: goto label_2bb9d0;
        case 0x2bb9d4u: goto label_2bb9d4;
        case 0x2bb9d8u: goto label_2bb9d8;
        case 0x2bb9dcu: goto label_2bb9dc;
        case 0x2bb9e0u: goto label_2bb9e0;
        case 0x2bb9e4u: goto label_2bb9e4;
        case 0x2bb9e8u: goto label_2bb9e8;
        case 0x2bb9ecu: goto label_2bb9ec;
        case 0x2bb9f0u: goto label_2bb9f0;
        case 0x2bb9f4u: goto label_2bb9f4;
        case 0x2bb9f8u: goto label_2bb9f8;
        case 0x2bb9fcu: goto label_2bb9fc;
        case 0x2bba00u: goto label_2bba00;
        case 0x2bba04u: goto label_2bba04;
        case 0x2bba08u: goto label_2bba08;
        case 0x2bba0cu: goto label_2bba0c;
        case 0x2bba10u: goto label_2bba10;
        case 0x2bba14u: goto label_2bba14;
        case 0x2bba18u: goto label_2bba18;
        case 0x2bba1cu: goto label_2bba1c;
        case 0x2bba20u: goto label_2bba20;
        case 0x2bba24u: goto label_2bba24;
        case 0x2bba28u: goto label_2bba28;
        case 0x2bba2cu: goto label_2bba2c;
        default: break;
    }

    ctx->pc = 0x2bb900u;

label_2bb900:
    // 0x2bb900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bb904:
    // 0x2bb904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bb908:
    // 0x2bb908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bb90c:
    // 0x2bb90c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bb910:
    // 0x2bb910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bb914:
    // 0x2bb914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb918:
    // 0x2bb918: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_2bb91c:
    if (ctx->pc == 0x2BB91Cu) {
        ctx->pc = 0x2BB91Cu;
            // 0x2bb91c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB920u;
        goto label_2bb920;
    }
    ctx->pc = 0x2BB918u;
    {
        const bool branch_taken_0x2bb918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB918u;
            // 0x2bb91c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb918) {
            ctx->pc = 0x2BBA08u;
            goto label_2bba08;
        }
    }
    ctx->pc = 0x2BB920u;
label_2bb920:
    // 0x2bb920: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bb924:
    // 0x2bb924: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb928:
    // 0x2bb928: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2bb928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2bb92c:
    // 0x2bb92c: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2bb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2bb930:
    // 0x2bb930: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bb930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bb934:
    // 0x2bb934: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bb934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bb938:
    // 0x2bb938: 0x8e32009c  lw          $s2, 0x9C($s1)
    ctx->pc = 0x2bb938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2bb93c:
    // 0x2bb93c: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
label_2bb940:
    if (ctx->pc == 0x2BB940u) {
        ctx->pc = 0x2BB940u;
            // 0x2bb940: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB944u;
        goto label_2bb944;
    }
    ctx->pc = 0x2BB93Cu;
    {
        const bool branch_taken_0x2bb93c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb93c) {
            ctx->pc = 0x2BB940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB93Cu;
            // 0x2bb940: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB978u;
            goto label_2bb978;
        }
    }
    ctx->pc = 0x2BB944u;
label_2bb944:
    // 0x2bb944: 0xc04008c  jal         func_100230
label_2bb948:
    if (ctx->pc == 0x2BB948u) {
        ctx->pc = 0x2BB948u;
            // 0x2bb948: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2BB94Cu;
        goto label_2bb94c;
    }
    ctx->pc = 0x2BB944u;
    SET_GPR_U32(ctx, 31, 0x2BB94Cu);
    ctx->pc = 0x2BB948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB944u;
            // 0x2bb948: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB94Cu; }
        if (ctx->pc != 0x2BB94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB94Cu; }
        if (ctx->pc != 0x2BB94Cu) { return; }
    }
    ctx->pc = 0x2BB94Cu;
label_2bb94c:
    // 0x2bb94c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2bb94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2bb950:
    // 0x2bb950: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bb950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bb954:
    // 0x2bb954: 0xc0407c0  jal         func_101F00
label_2bb958:
    if (ctx->pc == 0x2BB958u) {
        ctx->pc = 0x2BB958u;
            // 0x2bb958: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x2BB95Cu;
        goto label_2bb95c;
    }
    ctx->pc = 0x2BB954u;
    SET_GPR_U32(ctx, 31, 0x2BB95Cu);
    ctx->pc = 0x2BB958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB954u;
            // 0x2bb958: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB95Cu; }
        if (ctx->pc != 0x2BB95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB95Cu; }
        if (ctx->pc != 0x2BB95Cu) { return; }
    }
    ctx->pc = 0x2BB95Cu;
label_2bb95c:
    // 0x2bb95c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2bb95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2bb960:
    // 0x2bb960: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bb960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bb964:
    // 0x2bb964: 0xc0407c0  jal         func_101F00
label_2bb968:
    if (ctx->pc == 0x2BB968u) {
        ctx->pc = 0x2BB968u;
            // 0x2bb968: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x2BB96Cu;
        goto label_2bb96c;
    }
    ctx->pc = 0x2BB964u;
    SET_GPR_U32(ctx, 31, 0x2BB96Cu);
    ctx->pc = 0x2BB968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB964u;
            // 0x2bb968: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB96Cu; }
        if (ctx->pc != 0x2BB96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB96Cu; }
        if (ctx->pc != 0x2BB96Cu) { return; }
    }
    ctx->pc = 0x2BB96Cu;
label_2bb96c:
    // 0x2bb96c: 0xc0400a8  jal         func_1002A0
label_2bb970:
    if (ctx->pc == 0x2BB970u) {
        ctx->pc = 0x2BB970u;
            // 0x2bb970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB974u;
        goto label_2bb974;
    }
    ctx->pc = 0x2BB96Cu;
    SET_GPR_U32(ctx, 31, 0x2BB974u);
    ctx->pc = 0x2BB970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB96Cu;
            // 0x2bb970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB974u; }
        if (ctx->pc != 0x2BB974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB974u; }
        if (ctx->pc != 0x2BB974u) { return; }
    }
    ctx->pc = 0x2BB974u;
label_2bb974:
    // 0x2bb974: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x2bb974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_2bb978:
    // 0x2bb978: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x2bb978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_2bb97c:
    // 0x2bb97c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bb980:
    if (ctx->pc == 0x2BB980u) {
        ctx->pc = 0x2BB980u;
            // 0x2bb980: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x2BB984u;
        goto label_2bb984;
    }
    ctx->pc = 0x2BB97Cu;
    {
        const bool branch_taken_0x2bb97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb97c) {
            ctx->pc = 0x2BB980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB97Cu;
            // 0x2bb980: 0x26220050  addiu       $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB998u;
            goto label_2bb998;
        }
    }
    ctx->pc = 0x2BB984u;
label_2bb984:
    // 0x2bb984: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2bb984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2bb988:
    // 0x2bb988: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bb988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bb98c:
    // 0x2bb98c: 0x320f809  jalr        $t9
label_2bb990:
    if (ctx->pc == 0x2BB990u) {
        ctx->pc = 0x2BB990u;
            // 0x2bb990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BB994u;
        goto label_2bb994;
    }
    ctx->pc = 0x2BB98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB994u);
        ctx->pc = 0x2BB990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB98Cu;
            // 0x2bb990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB994u; }
            if (ctx->pc != 0x2BB994u) { return; }
        }
        }
    }
    ctx->pc = 0x2BB994u;
label_2bb994:
    // 0x2bb994: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2bb994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2bb998:
    // 0x2bb998: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2bb99c:
    if (ctx->pc == 0x2BB99Cu) {
        ctx->pc = 0x2BB99Cu;
            // 0x2bb99c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9A0u;
        goto label_2bb9a0;
    }
    ctx->pc = 0x2BB998u;
    {
        const bool branch_taken_0x2bb998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB998u;
            // 0x2bb99c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb998) {
            ctx->pc = 0x2BB9CCu;
            goto label_2bb9cc;
        }
    }
    ctx->pc = 0x2BB9A0u;
label_2bb9a0:
    // 0x2bb9a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb9a4:
    // 0x2bb9a4: 0x24422280  addiu       $v0, $v0, 0x2280
    ctx->pc = 0x2bb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8832));
label_2bb9a8:
    // 0x2bb9a8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bb9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bb9ac:
    // 0x2bb9ac: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2bb9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2bb9b0:
    // 0x2bb9b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bb9b4:
    if (ctx->pc == 0x2BB9B4u) {
        ctx->pc = 0x2BB9B4u;
            // 0x2bb9b4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB9B8u;
        goto label_2bb9b8;
    }
    ctx->pc = 0x2BB9B0u;
    {
        const bool branch_taken_0x2bb9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb9b0) {
            ctx->pc = 0x2BB9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9B0u;
            // 0x2bb9b4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB9CCu;
            goto label_2bb9cc;
        }
    }
    ctx->pc = 0x2BB9B8u;
label_2bb9b8:
    // 0x2bb9b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb9bc:
    // 0x2bb9bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bb9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bb9c0:
    // 0x2bb9c0: 0x320f809  jalr        $t9
label_2bb9c4:
    if (ctx->pc == 0x2BB9C4u) {
        ctx->pc = 0x2BB9C4u;
            // 0x2bb9c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BB9C8u;
        goto label_2bb9c8;
    }
    ctx->pc = 0x2BB9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB9C8u);
        ctx->pc = 0x2BB9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9C0u;
            // 0x2bb9c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB9C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB9C8u; }
            if (ctx->pc != 0x2BB9C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BB9C8u;
label_2bb9c8:
    // 0x2bb9c8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2bb9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2bb9cc:
    // 0x2bb9cc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bb9d0:
    if (ctx->pc == 0x2BB9D0u) {
        ctx->pc = 0x2BB9D0u;
            // 0x2bb9d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BB9D4u;
        goto label_2bb9d4;
    }
    ctx->pc = 0x2BB9CCu;
    {
        const bool branch_taken_0x2bb9cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb9cc) {
            ctx->pc = 0x2BB9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9CCu;
            // 0x2bb9d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB9F4u;
            goto label_2bb9f4;
        }
    }
    ctx->pc = 0x2BB9D4u;
label_2bb9d4:
    // 0x2bb9d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb9d8:
    // 0x2bb9d8: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2bb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2bb9dc:
    // 0x2bb9dc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2bb9e0:
    if (ctx->pc == 0x2BB9E0u) {
        ctx->pc = 0x2BB9E0u;
            // 0x2bb9e0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BB9E4u;
        goto label_2bb9e4;
    }
    ctx->pc = 0x2BB9DCu;
    {
        const bool branch_taken_0x2bb9dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9DCu;
            // 0x2bb9e0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9dc) {
            ctx->pc = 0x2BB9F0u;
            goto label_2bb9f0;
        }
    }
    ctx->pc = 0x2BB9E4u;
label_2bb9e4:
    // 0x2bb9e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb9e8:
    // 0x2bb9e8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bb9ec:
    // 0x2bb9ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bb9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bb9f0:
    // 0x2bb9f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bb9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bb9f4:
    // 0x2bb9f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bb9f8:
    // 0x2bb9f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bb9fc:
    if (ctx->pc == 0x2BB9FCu) {
        ctx->pc = 0x2BB9FCu;
            // 0x2bb9fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA00u;
        goto label_2bba00;
    }
    ctx->pc = 0x2BB9F8u;
    {
        const bool branch_taken_0x2bb9f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb9f8) {
            ctx->pc = 0x2BB9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB9F8u;
            // 0x2bb9fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBA0Cu;
            goto label_2bba0c;
        }
    }
    ctx->pc = 0x2BBA00u;
label_2bba00:
    // 0x2bba00: 0xc0400a8  jal         func_1002A0
label_2bba04:
    if (ctx->pc == 0x2BBA04u) {
        ctx->pc = 0x2BBA04u;
            // 0x2bba04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA08u;
        goto label_2bba08;
    }
    ctx->pc = 0x2BBA00u;
    SET_GPR_U32(ctx, 31, 0x2BBA08u);
    ctx->pc = 0x2BBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA00u;
            // 0x2bba04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA08u; }
        if (ctx->pc != 0x2BBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBA08u; }
        if (ctx->pc != 0x2BBA08u) { return; }
    }
    ctx->pc = 0x2BBA08u;
label_2bba08:
    // 0x2bba08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bba08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bba0c:
    // 0x2bba0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bba0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bba10:
    // 0x2bba10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bba10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bba14:
    // 0x2bba14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bba14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bba18:
    // 0x2bba18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bba18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bba1c:
    // 0x2bba1c: 0x3e00008  jr          $ra
label_2bba20:
    if (ctx->pc == 0x2BBA20u) {
        ctx->pc = 0x2BBA20u;
            // 0x2bba20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2BBA24u;
        goto label_2bba24;
    }
    ctx->pc = 0x2BBA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBA1Cu;
            // 0x2bba20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBA24u;
label_2bba24:
    // 0x2bba24: 0x0  nop
    ctx->pc = 0x2bba24u;
    // NOP
label_2bba28:
    // 0x2bba28: 0x0  nop
    ctx->pc = 0x2bba28u;
    // NOP
label_2bba2c:
    // 0x2bba2c: 0x0  nop
    ctx->pc = 0x2bba2cu;
    // NOP
}
