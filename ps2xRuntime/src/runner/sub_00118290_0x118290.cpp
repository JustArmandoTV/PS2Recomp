#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118290
// Address: 0x118290 - 0x118788
void sub_00118290_0x118290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118290_0x118290");
#endif

    switch (ctx->pc) {
        case 0x1182d8u: goto label_1182d8;
        case 0x118304u: goto label_118304;
        case 0x118318u: goto label_118318;
        case 0x118344u: goto label_118344;
        case 0x11836cu: goto label_11836c;
        case 0x118374u: goto label_118374;
        case 0x118384u: goto label_118384;
        case 0x1183c0u: goto label_1183c0;
        case 0x118430u: goto label_118430;
        case 0x118474u: goto label_118474;
        case 0x11847cu: goto label_11847c;
        case 0x1184d4u: goto label_1184d4;
        case 0x118500u: goto label_118500;
        case 0x118518u: goto label_118518;
        case 0x11853cu: goto label_11853c;
        case 0x11859cu: goto label_11859c;
        case 0x1185d0u: goto label_1185d0;
        case 0x11861cu: goto label_11861c;
        case 0x118644u: goto label_118644;
        case 0x118654u: goto label_118654;
        case 0x118678u: goto label_118678;
        case 0x1186ecu: goto label_1186ec;
        case 0x118710u: goto label_118710;
        case 0x118730u: goto label_118730;
        default: break;
    }

    ctx->pc = 0x118290u;

    // 0x118290: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118294: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x118294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x118298: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x118298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11829c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11829cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1182a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1182a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1182a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1182a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1182ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1182acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1182b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1182b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1182b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1182b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1182b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1182bc: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1182BCu;
    {
        const bool branch_taken_0x1182bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1182C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1182BCu;
            // 0x1182c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182bc) {
            ctx->pc = 0x1182D0u;
            goto label_1182d0;
        }
    }
    ctx->pc = 0x1182C4u;
    // 0x1182c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1182c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1182c8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1182C8u;
    {
        const bool branch_taken_0x1182c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1182C8u;
            // 0x1182cc: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182c8) {
            ctx->pc = 0x118394u;
            goto label_118394;
        }
    }
    ctx->pc = 0x1182D0u;
label_1182d0:
    // 0x1182d0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1182D0u;
    SET_GPR_U32(ctx, 31, 0x1182D8u);
    ctx->pc = 0x1182D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1182D0u;
            // 0x1182d4: 0x3c12006c  lui         $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182D8u; }
        if (ctx->pc != 0x1182D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182D8u; }
        if (ctx->pc != 0x1182D8u) { return; }
    }
    ctx->pc = 0x1182D8u;
label_1182d8:
    // 0x1182d8: 0x8e500700  lw          $s0, 0x700($s2)
    ctx->pc = 0x1182d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1792)));
    // 0x1182dc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1182DCu;
    {
        const bool branch_taken_0x1182dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1182DCu;
            // 0x1182e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182dc) {
            ctx->pc = 0x1182ECu;
            goto label_1182ec;
        }
    }
    ctx->pc = 0x1182E4u;
    // 0x1182e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1182e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1182e8: 0xae420700  sw          $v0, 0x700($s2)
    ctx->pc = 0x1182e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 2));
label_1182ec:
    // 0x1182ec: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1182ECu;
    {
        const bool branch_taken_0x1182ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1182ec) {
            ctx->pc = 0x118310u;
            goto label_118310;
        }
    }
    ctx->pc = 0x1182F4u;
    // 0x1182f4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1182F4u;
    {
        const bool branch_taken_0x1182f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1182f4) {
            ctx->pc = 0x118304u;
            goto label_118304;
        }
    }
    ctx->pc = 0x1182FCu;
    // 0x1182fc: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1182FCu;
    SET_GPR_U32(ctx, 31, 0x118304u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118304u; }
        if (ctx->pc != 0x118304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118304u; }
        if (ctx->pc != 0x118304u) { return; }
    }
    ctx->pc = 0x118304u;
label_118304:
    // 0x118304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118308: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x118308u;
    {
        const bool branch_taken_0x118308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118308u;
            // 0x11830c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118308) {
            ctx->pc = 0x118394u;
            goto label_118394;
        }
    }
    ctx->pc = 0x118310u;
label_118310:
    // 0x118310: 0xc045e12  jal         func_117848
    ctx->pc = 0x118310u;
    SET_GPR_U32(ctx, 31, 0x118318u);
    ctx->pc = 0x117848u;
    if (runtime->hasFunction(0x117848u)) {
        auto targetFn = runtime->lookupFunction(0x117848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118318u; }
        if (ctx->pc != 0x118318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117848_0x117848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118318u; }
        if (ctx->pc != 0x118318u) { return; }
    }
    ctx->pc = 0x118318u;
label_118318:
    // 0x118318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11831c: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x11831Cu;
    {
        const bool branch_taken_0x11831c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x11831c) {
            ctx->pc = 0x118320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11831Cu;
            // 0x118320: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11834Cu;
            goto label_11834c;
        }
    }
    ctx->pc = 0x118324u;
    // 0x118324: 0x8e420700  lw          $v0, 0x700($s2)
    ctx->pc = 0x118324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1792)));
    // 0x118328: 0xae500700  sw          $s0, 0x700($s2)
    ctx->pc = 0x118328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 16));
    // 0x11832c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118330: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x118330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x118334: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x118334u;
    {
        const bool branch_taken_0x118334 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x118338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118334u;
            // 0x118338: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118334) {
            ctx->pc = 0x118394u;
            goto label_118394;
        }
    }
    ctx->pc = 0x11833Cu;
    // 0x11833c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x11833Cu;
    SET_GPR_U32(ctx, 31, 0x118344u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118344u; }
        if (ctx->pc != 0x118344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118344u; }
        if (ctx->pc != 0x118344u) { return; }
    }
    ctx->pc = 0x118344u;
label_118344:
    // 0x118344: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x118344u;
    {
        const bool branch_taken_0x118344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118344u;
            // 0x118348: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118344) {
            ctx->pc = 0x118394u;
            goto label_118394;
        }
    }
    ctx->pc = 0x11834Cu;
label_11834c:
    // 0x11834c: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11834cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x118350: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x118350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x118354: 0x24c68230  addiu       $a2, $a2, -0x7DD0
    ctx->pc = 0x118354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935088));
    // 0x118358: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x118358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x11835c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118364: 0xc045fee  jal         func_117FB8
    ctx->pc = 0x118364u;
    SET_GPR_U32(ctx, 31, 0x11836Cu);
    ctx->pc = 0x118368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118364u;
            // 0x118368: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117FB8u;
    if (runtime->hasFunction(0x117FB8u)) {
        auto targetFn = runtime->lookupFunction(0x117FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11836Cu; }
        if (ctx->pc != 0x11836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117FB8_0x117fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11836Cu; }
        if (ctx->pc != 0x11836Cu) { return; }
    }
    ctx->pc = 0x11836Cu;
label_11836c:
    // 0x11836c: 0xc045ec0  jal         func_117B00
    ctx->pc = 0x11836Cu;
    SET_GPR_U32(ctx, 31, 0x118374u);
    ctx->pc = 0x118370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11836Cu;
            // 0x118370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117B00u;
    if (runtime->hasFunction(0x117B00u)) {
        auto targetFn = runtime->lookupFunction(0x117B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118374u; }
        if (ctx->pc != 0x118374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117B00_0x117b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118374u; }
        if (ctx->pc != 0x118374u) { return; }
    }
    ctx->pc = 0x118374u;
label_118374:
    // 0x118374: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x118374u;
    {
        const bool branch_taken_0x118374 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x118378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118374u;
            // 0x118378: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118374) {
            ctx->pc = 0x118388u;
            goto label_118388;
        }
    }
    ctx->pc = 0x11837Cu;
    // 0x11837c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x11837Cu;
    SET_GPR_U32(ctx, 31, 0x118384u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118384u; }
        if (ctx->pc != 0x118384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118384u; }
        if (ctx->pc != 0x118384u) { return; }
    }
    ctx->pc = 0x118384u;
label_118384:
    // 0x118384: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x118384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_118388:
    // 0x118388: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x118388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x11838c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x118390: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x118390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_118394:
    // 0x118394: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118398: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x118398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11839c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11839cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1183a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1183a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1183a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1183a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1183a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1183a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1183ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1183acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1183b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1183b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1183B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1183B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183B4u;
            // 0x1183b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1183BCu;
    // 0x1183bc: 0x0  nop
    ctx->pc = 0x1183bcu;
    // NOP
label_1183c0:
    // 0x1183c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1183c4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1183c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1183c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1183c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1183cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1183ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1183d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1183d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1183d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1183d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1183dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1183dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1183e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1183e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1183e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1183e8: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1183E8u;
    {
        const bool branch_taken_0x1183e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1183ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183E8u;
            // 0x1183ec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183e8) {
            ctx->pc = 0x1183FCu;
            goto label_1183fc;
        }
    }
    ctx->pc = 0x1183F0u;
    // 0x1183f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1183f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1183f4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1183F4u;
    {
        const bool branch_taken_0x1183f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183F4u;
            // 0x1183f8: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183f4) {
            ctx->pc = 0x11848Cu;
            goto label_11848c;
        }
    }
    ctx->pc = 0x1183FCu;
label_1183fc:
    // 0x1183fc: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x1183fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x118400: 0x8e500700  lw          $s0, 0x700($s2)
    ctx->pc = 0x118400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1792)));
    // 0x118404: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118404u;
    {
        const bool branch_taken_0x118404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x118404) {
            ctx->pc = 0x118414u;
            goto label_118414;
        }
    }
    ctx->pc = 0x11840Cu;
    // 0x11840c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118410: 0xae420700  sw          $v0, 0x700($s2)
    ctx->pc = 0x118410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 2));
label_118414:
    // 0x118414: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118414u;
    {
        const bool branch_taken_0x118414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118414) {
            ctx->pc = 0x118428u;
            goto label_118428;
        }
    }
    ctx->pc = 0x11841Cu;
    // 0x11841c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118420: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x118420u;
    {
        const bool branch_taken_0x118420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118420u;
            // 0x118424: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118420) {
            ctx->pc = 0x11848Cu;
            goto label_11848c;
        }
    }
    ctx->pc = 0x118428u;
label_118428:
    // 0x118428: 0xc045df6  jal         func_1177D8
    ctx->pc = 0x118428u;
    SET_GPR_U32(ctx, 31, 0x118430u);
    ctx->pc = 0x1177D8u;
    if (runtime->hasFunction(0x1177D8u)) {
        auto targetFn = runtime->lookupFunction(0x1177D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118430u; }
        if (ctx->pc != 0x118430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001177D8_0x1177d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118430u; }
        if (ctx->pc != 0x118430u) { return; }
    }
    ctx->pc = 0x118430u;
label_118430:
    // 0x118430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118434: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118434u;
    {
        const bool branch_taken_0x118434 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x118434) {
            ctx->pc = 0x118438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118434u;
            // 0x118438: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118454u;
            goto label_118454;
        }
    }
    ctx->pc = 0x11843Cu;
    // 0x11843c: 0x8e430700  lw          $v1, 0x700($s2)
    ctx->pc = 0x11843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1792)));
    // 0x118440: 0xae500700  sw          $s0, 0x700($s2)
    ctx->pc = 0x118440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 16));
    // 0x118444: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118448: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x118448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11844c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11844Cu;
    {
        const bool branch_taken_0x11844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11844Cu;
            // 0x118450: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11844c) {
            ctx->pc = 0x118490u;
            goto label_118490;
        }
    }
    ctx->pc = 0x118454u;
label_118454:
    // 0x118454: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x118454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x118458: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x118458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x11845c: 0x24c68230  addiu       $a2, $a2, -0x7DD0
    ctx->pc = 0x11845cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935088));
    // 0x118460: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x118460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x118464: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x118464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11846c: 0xc045faa  jal         func_117EA8
    ctx->pc = 0x11846Cu;
    SET_GPR_U32(ctx, 31, 0x118474u);
    ctx->pc = 0x118470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11846Cu;
            // 0x118470: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117EA8u;
    if (runtime->hasFunction(0x117EA8u)) {
        auto targetFn = runtime->lookupFunction(0x117EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118474u; }
        if (ctx->pc != 0x118474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117EA8_0x117ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118474u; }
        if (ctx->pc != 0x118474u) { return; }
    }
    ctx->pc = 0x118474u;
label_118474:
    // 0x118474: 0xc045e94  jal         func_117A50
    ctx->pc = 0x118474u;
    SET_GPR_U32(ctx, 31, 0x11847Cu);
    ctx->pc = 0x118478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118474u;
            // 0x118478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117A50u;
    if (runtime->hasFunction(0x117A50u)) {
        auto targetFn = runtime->lookupFunction(0x117A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11847Cu; }
        if (ctx->pc != 0x11847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117A50_0x117a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11847Cu; }
        if (ctx->pc != 0x11847Cu) { return; }
    }
    ctx->pc = 0x11847Cu;
label_11847c:
    // 0x11847c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x11847cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x118480: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x118480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x118484: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x118488: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x118488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_11848c:
    // 0x11848c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11848cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_118490:
    // 0x118490: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x118490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118494: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118498: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11849c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11849cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1184a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1184a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1184a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1184a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1184a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1184A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1184ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1184A8u;
            // 0x1184ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1184B0u;
    // 0x1184b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1184b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1184b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1184b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1184b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1184b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1184bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1184c0: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x1184c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1184c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1184c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1184c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1184cc: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1184CCu;
    SET_GPR_U32(ctx, 31, 0x1184D4u);
    ctx->pc = 0x1184D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184CCu;
            // 0x1184d0: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184D4u; }
        if (ctx->pc != 0x1184D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184D4u; }
        if (ctx->pc != 0x1184D4u) { return; }
    }
    ctx->pc = 0x1184D4u;
label_1184d4:
    // 0x1184d4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1184D4u;
    {
        const bool branch_taken_0x1184d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1184D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1184D4u;
            // 0x1184d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184d4) {
            ctx->pc = 0x1184F0u;
            goto label_1184f0;
        }
    }
    ctx->pc = 0x1184DCu;
    // 0x1184dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1184dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1184e0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x1184e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1184e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1184e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1184e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1184E8u;
    {
        const bool branch_taken_0x1184e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1184e8) {
            ctx->pc = 0x11850Cu;
            goto label_11850c;
        }
    }
    ctx->pc = 0x1184F0u;
label_1184f0:
    // 0x1184f0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1184F0u;
    {
        const bool branch_taken_0x1184f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1184f0) {
            ctx->pc = 0x118500u;
            goto label_118500;
        }
    }
    ctx->pc = 0x1184F8u;
    // 0x1184f8: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1184F8u;
    SET_GPR_U32(ctx, 31, 0x118500u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118500u; }
        if (ctx->pc != 0x118500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118500u; }
        if (ctx->pc != 0x118500u) { return; }
    }
    ctx->pc = 0x118500u;
label_118500:
    // 0x118500: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118504: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x118504u;
    {
        const bool branch_taken_0x118504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118504u;
            // 0x118508: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118504) {
            ctx->pc = 0x118540u;
            goto label_118540;
        }
    }
    ctx->pc = 0x11850Cu;
label_11850c:
    // 0x11850c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x11850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x118510: 0xc045e54  jal         func_117950
    ctx->pc = 0x118510u;
    SET_GPR_U32(ctx, 31, 0x118518u);
    ctx->pc = 0x117950u;
    if (runtime->hasFunction(0x117950u)) {
        auto targetFn = runtime->lookupFunction(0x117950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118518u; }
        if (ctx->pc != 0x118518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117950_0x117950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118518u; }
        if (ctx->pc != 0x118518u) { return; }
    }
    ctx->pc = 0x118518u;
label_118518:
    // 0x118518: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x118518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x11851c: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x11851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
    // 0x118520: 0xac710700  sw          $s1, 0x700($v1)
    ctx->pc = 0x118520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 17));
    // 0x118524: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x118524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x118528: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x118528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x11852c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11852Cu;
    {
        const bool branch_taken_0x11852c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11852Cu;
            // 0x118530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11852c) {
            ctx->pc = 0x118540u;
            goto label_118540;
        }
    }
    ctx->pc = 0x118534u;
    // 0x118534: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x118534u;
    SET_GPR_U32(ctx, 31, 0x11853Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11853Cu; }
        if (ctx->pc != 0x11853Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11853Cu; }
        if (ctx->pc != 0x11853Cu) { return; }
    }
    ctx->pc = 0x11853Cu;
label_11853c:
    // 0x11853c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11853cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118540:
    // 0x118540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118544: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118548: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11854c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11854cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118550: 0x3e00008  jr          $ra
    ctx->pc = 0x118550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118550u;
            // 0x118554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118558u;
    // 0x118558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11855c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x11855cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x118560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118568: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118568u;
    {
        const bool branch_taken_0x118568 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11856Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118568u;
            // 0x11856c: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118568) {
            ctx->pc = 0x118584u;
            goto label_118584;
        }
    }
    ctx->pc = 0x118570u;
    // 0x118570: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x118570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118574: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x118574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x118578: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x118578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11857c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11857Cu;
    {
        const bool branch_taken_0x11857c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11857c) {
            ctx->pc = 0x118590u;
            goto label_118590;
        }
    }
    ctx->pc = 0x118584u;
label_118584:
    // 0x118584: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118588: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x118588u;
    {
        const bool branch_taken_0x118588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118588u;
            // 0x11858c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118588) {
            ctx->pc = 0x1185C0u;
            goto label_1185c0;
        }
    }
    ctx->pc = 0x118590u;
label_118590:
    // 0x118590: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x118590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118594: 0xc045e24  jal         func_117890
    ctx->pc = 0x118594u;
    SET_GPR_U32(ctx, 31, 0x11859Cu);
    ctx->pc = 0x117890u;
    if (runtime->hasFunction(0x117890u)) {
        auto targetFn = runtime->lookupFunction(0x117890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11859Cu; }
        if (ctx->pc != 0x11859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117890_0x117890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11859Cu; }
        if (ctx->pc != 0x11859Cu) { return; }
    }
    ctx->pc = 0x11859Cu;
label_11859c:
    // 0x11859c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11859cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185a0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1185A0u;
    {
        const bool branch_taken_0x1185a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1185A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1185A0u;
            // 0x1185a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185a0) {
            ctx->pc = 0x1185C0u;
            goto label_1185c0;
        }
    }
    ctx->pc = 0x1185A8u;
    // 0x1185a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1185a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1185ac: 0x8c430700  lw          $v1, 0x700($v0)
    ctx->pc = 0x1185acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
    // 0x1185b0: 0xac500700  sw          $s0, 0x700($v0)
    ctx->pc = 0x1185b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1792), GPR_U32(ctx, 16));
    // 0x1185b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1185b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1185b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1185b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1185bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1185bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1185c0:
    // 0x1185c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1185c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1185c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1185c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1185c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1185C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1185CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1185C8u;
            // 0x1185cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1185D0u;
label_1185d0:
    // 0x1185d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1185d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1185d4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1185d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1185d8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1185d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1185dc: 0xac40fa70  sw          $zero, -0x590($v0)
    ctx->pc = 0x1185dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965872), GPR_U32(ctx, 0));
    // 0x1185e0: 0xac60fa74  sw          $zero, -0x58C($v1)
    ctx->pc = 0x1185e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965876), GPR_U32(ctx, 0));
    // 0x1185e4: 0x24840708  addiu       $a0, $a0, 0x708
    ctx->pc = 0x1185e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1800));
    // 0x1185e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1185e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185ec: 0x804a576  j           func_1295D8
    ctx->pc = 0x1185ECu;
    ctx->pc = 0x1185F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1185ECu;
            // 0x1185f0: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1185F4u;
    // 0x1185f4: 0x0  nop
    ctx->pc = 0x1185f4u;
    // NOP
    // 0x1185f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1185f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1185fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1185fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118608: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11860c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118610: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118614: 0xc045968  jal         func_1165A0
    ctx->pc = 0x118614u;
    SET_GPR_U32(ctx, 31, 0x11861Cu);
    ctx->pc = 0x118618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118614u;
            // 0x118618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11861Cu; }
        if (ctx->pc != 0x11861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11861Cu; }
        if (ctx->pc != 0x11861Cu) { return; }
    }
    ctx->pc = 0x11861Cu;
label_11861c:
    // 0x11861c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x11861cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x118620: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x118620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x118624: 0x8c73fa70  lw          $s3, -0x590($v1)
    ctx->pc = 0x118624u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965872)));
    // 0x118628: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11862c: 0xacb1fa74  sw          $s1, -0x58C($a1)
    ctx->pc = 0x11862cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965876), GPR_U32(ctx, 17));
    // 0x118630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118634: 0xac70fa70  sw          $s0, -0x590($v1)
    ctx->pc = 0x118634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965872), GPR_U32(ctx, 16));
    // 0x118638: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x118638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11863c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x11863Cu;
    SET_GPR_U32(ctx, 31, 0x118644u);
    ctx->pc = 0x118640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11863Cu;
            // 0x118640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118644u; }
        if (ctx->pc != 0x118644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118644u; }
        if (ctx->pc != 0x118644u) { return; }
    }
    ctx->pc = 0x118644u;
label_118644:
    // 0x118644: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x118644u;
    {
        const bool branch_taken_0x118644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118644u;
            // 0x118648: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118644) {
            ctx->pc = 0x118658u;
            goto label_118658;
        }
    }
    ctx->pc = 0x11864Cu;
    // 0x11864c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x11864Cu;
    SET_GPR_U32(ctx, 31, 0x118654u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118654u; }
        if (ctx->pc != 0x118654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118654u; }
        if (ctx->pc != 0x118654u) { return; }
    }
    ctx->pc = 0x118654u;
label_118654:
    // 0x118654: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x118654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_118658:
    // 0x118658: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11865c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11865cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118660: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118664: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11866c: 0x3e00008  jr          $ra
    ctx->pc = 0x11866Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11866Cu;
            // 0x118670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118674u;
    // 0x118674: 0x0  nop
    ctx->pc = 0x118674u;
    // NOP
label_118678:
    // 0x118678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11867c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118680: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118684: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x118684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11868c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11868cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118690: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118698: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118698u;
    {
        const bool branch_taken_0x118698 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11869Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118698u;
            // 0x11869c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118698) {
            ctx->pc = 0x1186BCu;
            goto label_1186bc;
        }
    }
    ctx->pc = 0x1186A0u;
    // 0x1186a0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1186a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1186a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1186a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1186a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1186a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1186ac: 0x24710708  addiu       $s1, $v1, 0x708
    ctx->pc = 0x1186acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1800));
    // 0x1186b0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1186b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1186b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1186B4u;
    {
        const bool branch_taken_0x1186b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186B4u;
            // 0x1186b8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186b4) {
            ctx->pc = 0x1186CCu;
            goto label_1186cc;
        }
    }
    ctx->pc = 0x1186BCu;
label_1186bc:
    // 0x1186bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1186bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1186c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1186c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1186c4: 0x8c51fa70  lw          $s1, -0x590($v0)
    ctx->pc = 0x1186c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965872)));
    // 0x1186c8: 0x8c62fa74  lw          $v0, -0x58C($v1)
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965876)));
label_1186cc:
    // 0x1186cc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1186ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1186d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1186D0u;
    {
        const bool branch_taken_0x1186d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1186d0) {
            ctx->pc = 0x1186E4u;
            goto label_1186e4;
        }
    }
    ctx->pc = 0x1186D8u;
    // 0x1186d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1186dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1186DCu;
    {
        const bool branch_taken_0x1186dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186DCu;
            // 0x1186e0: 0x34420069  ori         $v0, $v0, 0x69 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186dc) {
            ctx->pc = 0x118714u;
            goto label_118714;
        }
    }
    ctx->pc = 0x1186E4u;
label_1186e4:
    // 0x1186e4: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1186E4u;
    SET_GPR_U32(ctx, 31, 0x1186ECu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186ECu; }
        if (ctx->pc != 0x1186ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186ECu; }
        if (ctx->pc != 0x1186ECu) { return; }
    }
    ctx->pc = 0x1186ECu;
label_1186ec:
    // 0x1186ec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1186ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1186f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1186f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1186f4: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1186f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1186f8: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x1186f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x1186fc: 0x380202d  daddu       $a0, $gp, $zero
    ctx->pc = 0x1186fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118700u;
    {
        const bool branch_taken_0x118700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118700u;
            // 0x118704: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118700) {
            ctx->pc = 0x118710u;
            goto label_118710;
        }
    }
    ctx->pc = 0x118708u;
    // 0x118708: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x118708u;
    SET_GPR_U32(ctx, 31, 0x118710u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118710u; }
        if (ctx->pc != 0x118710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118710u; }
        if (ctx->pc != 0x118710u) { return; }
    }
    ctx->pc = 0x118710u;
label_118710:
    // 0x118710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118714:
    // 0x118714: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118718: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11871c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11871cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118720: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118728: 0x3e00008  jr          $ra
    ctx->pc = 0x118728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118728u;
            // 0x11872c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118730u;
label_118730:
    // 0x118730: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118730u;
    {
        const bool branch_taken_0x118730 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x118730) {
            ctx->pc = 0x118734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118730u;
            // 0x118734: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118754u;
            goto label_118754;
        }
    }
    ctx->pc = 0x118738u;
    // 0x118738: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x118738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11873c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x11873cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x118740: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x118740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x118744: 0x24650708  addiu       $a1, $v1, 0x708
    ctx->pc = 0x118744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1800));
    // 0x118748: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x118748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11874c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11874Cu;
    {
        const bool branch_taken_0x11874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11874Cu;
            // 0x118750: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11874c) {
            ctx->pc = 0x118760u;
            goto label_118760;
        }
    }
    ctx->pc = 0x118754u;
label_118754:
    // 0x118754: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x118754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x118758: 0x8c45fa70  lw          $a1, -0x590($v0)
    ctx->pc = 0x118758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965872)));
    // 0x11875c: 0x8c62fa74  lw          $v0, -0x58C($v1)
    ctx->pc = 0x11875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965876)));
label_118760:
    // 0x118760: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x118760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x118764: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118764u;
    {
        const bool branch_taken_0x118764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118764u;
            // 0x118768: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118764) {
            ctx->pc = 0x118774u;
            goto label_118774;
        }
    }
    ctx->pc = 0x11876Cu;
    // 0x11876c: 0x3e00008  jr          $ra
    ctx->pc = 0x11876Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11876Cu;
            // 0x118770: 0x2402ff97  addiu       $v0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118774u;
label_118774:
    // 0x118774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118778: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x118778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11877c: 0x3e00008  jr          $ra
    ctx->pc = 0x11877Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11877Cu;
            // 0x118780: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118784u;
    // 0x118784: 0x0  nop
    ctx->pc = 0x118784u;
    // NOP
}
