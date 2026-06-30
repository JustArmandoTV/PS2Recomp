#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111278
// Address: 0x111278 - 0x111370
void sub_00111278_0x111278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111278_0x111278");
#endif

    switch (ctx->pc) {
        case 0x111278u: goto label_111278;
        case 0x11127cu: goto label_11127c;
        case 0x111280u: goto label_111280;
        case 0x111284u: goto label_111284;
        case 0x111288u: goto label_111288;
        case 0x11128cu: goto label_11128c;
        case 0x111290u: goto label_111290;
        case 0x111294u: goto label_111294;
        case 0x111298u: goto label_111298;
        case 0x11129cu: goto label_11129c;
        case 0x1112a0u: goto label_1112a0;
        case 0x1112a4u: goto label_1112a4;
        case 0x1112a8u: goto label_1112a8;
        case 0x1112acu: goto label_1112ac;
        case 0x1112b0u: goto label_1112b0;
        case 0x1112b4u: goto label_1112b4;
        case 0x1112b8u: goto label_1112b8;
        case 0x1112bcu: goto label_1112bc;
        case 0x1112c0u: goto label_1112c0;
        case 0x1112c4u: goto label_1112c4;
        case 0x1112c8u: goto label_1112c8;
        case 0x1112ccu: goto label_1112cc;
        case 0x1112d0u: goto label_1112d0;
        case 0x1112d4u: goto label_1112d4;
        case 0x1112d8u: goto label_1112d8;
        case 0x1112dcu: goto label_1112dc;
        case 0x1112e0u: goto label_1112e0;
        case 0x1112e4u: goto label_1112e4;
        case 0x1112e8u: goto label_1112e8;
        case 0x1112ecu: goto label_1112ec;
        case 0x1112f0u: goto label_1112f0;
        case 0x1112f4u: goto label_1112f4;
        case 0x1112f8u: goto label_1112f8;
        case 0x1112fcu: goto label_1112fc;
        case 0x111300u: goto label_111300;
        case 0x111304u: goto label_111304;
        case 0x111308u: goto label_111308;
        case 0x11130cu: goto label_11130c;
        case 0x111310u: goto label_111310;
        case 0x111314u: goto label_111314;
        case 0x111318u: goto label_111318;
        case 0x11131cu: goto label_11131c;
        case 0x111320u: goto label_111320;
        case 0x111324u: goto label_111324;
        case 0x111328u: goto label_111328;
        case 0x11132cu: goto label_11132c;
        case 0x111330u: goto label_111330;
        case 0x111334u: goto label_111334;
        case 0x111338u: goto label_111338;
        case 0x11133cu: goto label_11133c;
        case 0x111340u: goto label_111340;
        case 0x111344u: goto label_111344;
        case 0x111348u: goto label_111348;
        case 0x11134cu: goto label_11134c;
        case 0x111350u: goto label_111350;
        case 0x111354u: goto label_111354;
        case 0x111358u: goto label_111358;
        case 0x11135cu: goto label_11135c;
        case 0x111360u: goto label_111360;
        case 0x111364u: goto label_111364;
        case 0x111368u: goto label_111368;
        case 0x11136cu: goto label_11136c;
        default: break;
    }

    ctx->pc = 0x111278u;

label_111278:
    // 0x111278: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x111278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11127c:
    // 0x11127c: 0x80430e0  j           func_10C380
label_111280:
    if (ctx->pc == 0x111280u) {
        ctx->pc = 0x111280u;
            // 0x111280: 0x8c44e444  lw          $a0, -0x1BBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960196)));
        ctx->pc = 0x111284u;
        goto label_111284;
    }
    ctx->pc = 0x11127Cu;
    ctx->pc = 0x111280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11127Cu;
            // 0x111280: 0x8c44e444  lw          $a0, -0x1BBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960196)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C380_0x10c380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x111284u;
label_111284:
    // 0x111284: 0x0  nop
    ctx->pc = 0x111284u;
    // NOP
label_111288:
    // 0x111288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_11128c:
    // 0x11128c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_111290:
    // 0x111290: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_111294:
    // 0x111294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x111294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_111298:
    // 0x111298: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x111298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11129c:
    // 0x11129c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11129cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1112a0:
    // 0x1112a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1112a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1112a4:
    // 0x1112a4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1112a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1112a8:
    // 0x1112a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1112a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1112ac:
    // 0x1112ac: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1112acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_1112b0:
    // 0x1112b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1112b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1112b4:
    // 0x1112b4: 0xc044492  jal         func_111248
label_1112b8:
    if (ctx->pc == 0x1112B8u) {
        ctx->pc = 0x1112B8u;
            // 0x1112b8: 0x2614cbc0  addiu       $s4, $s0, -0x3440 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953920));
        ctx->pc = 0x1112BCu;
        goto label_1112bc;
    }
    ctx->pc = 0x1112B4u;
    SET_GPR_U32(ctx, 31, 0x1112BCu);
    ctx->pc = 0x1112B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1112B4u;
            // 0x1112b8: 0x2614cbc0  addiu       $s4, $s0, -0x3440 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112BCu; }
        if (ctx->pc != 0x1112BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112BCu; }
        if (ctx->pc != 0x1112BCu) { return; }
    }
    ctx->pc = 0x1112BCu;
label_1112bc:
    // 0x1112bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1112bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1112c0:
    // 0x1112c0: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x1112c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
label_1112c4:
    // 0x1112c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1112c8:
    if (ctx->pc == 0x1112C8u) {
        ctx->pc = 0x1112CCu;
        goto label_1112cc;
    }
    ctx->pc = 0x1112C4u;
    {
        const bool branch_taken_0x1112c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1112c4) {
            ctx->pc = 0x1112D4u;
            goto label_1112d4;
        }
    }
    ctx->pc = 0x1112CCu;
label_1112cc:
    // 0x1112cc: 0xc0444dc  jal         func_111370
label_1112d0:
    if (ctx->pc == 0x1112D0u) {
        ctx->pc = 0x1112D4u;
        goto label_1112d4;
    }
    ctx->pc = 0x1112CCu;
    SET_GPR_U32(ctx, 31, 0x1112D4u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112D4u; }
        if (ctx->pc != 0x1112D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112D4u; }
        if (ctx->pc != 0x1112D4u) { return; }
    }
    ctx->pc = 0x1112D4u;
label_1112d4:
    // 0x1112d4: 0xc045968  jal         func_1165A0
label_1112d8:
    if (ctx->pc == 0x1112D8u) {
        ctx->pc = 0x1112DCu;
        goto label_1112dc;
    }
    ctx->pc = 0x1112D4u;
    SET_GPR_U32(ctx, 31, 0x1112DCu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112DCu; }
        if (ctx->pc != 0x1112DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112DCu; }
        if (ctx->pc != 0x1112DCu) { return; }
    }
    ctx->pc = 0x1112DCu;
label_1112dc:
    // 0x1112dc: 0x8e11cbc0  lw          $s1, -0x3440($s0)
    ctx->pc = 0x1112dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953920)));
label_1112e0:
    // 0x1112e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1112e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1112e4:
    // 0x1112e4: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x1112e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_1112e8:
    // 0x1112e8: 0xae13cbc0  sw          $s3, -0x3440($s0)
    ctx->pc = 0x1112e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953920), GPR_U32(ctx, 19));
label_1112ec:
    // 0x1112ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1112f0:
    if (ctx->pc == 0x1112F0u) {
        ctx->pc = 0x1112F0u;
            // 0x1112f0: 0xac7ccc00  sw          $gp, -0x3400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953984), GPR_U32(ctx, 28));
        ctx->pc = 0x1112F4u;
        goto label_1112f4;
    }
    ctx->pc = 0x1112ECu;
    {
        const bool branch_taken_0x1112ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1112ECu;
            // 0x1112f0: 0xac7ccc00  sw          $gp, -0x3400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953984), GPR_U32(ctx, 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112ec) {
            ctx->pc = 0x1112FCu;
            goto label_1112fc;
        }
    }
    ctx->pc = 0x1112F4u;
label_1112f4:
    // 0x1112f4: 0xc04597c  jal         func_1165F0
label_1112f8:
    if (ctx->pc == 0x1112F8u) {
        ctx->pc = 0x1112FCu;
        goto label_1112fc;
    }
    ctx->pc = 0x1112F4u;
    SET_GPR_U32(ctx, 31, 0x1112FCu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112FCu; }
        if (ctx->pc != 0x1112FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1112FCu; }
        if (ctx->pc != 0x1112FCu) { return; }
    }
    ctx->pc = 0x1112FCu;
label_1112fc:
    // 0x1112fc: 0xc04449e  jal         func_111278
label_111300:
    if (ctx->pc == 0x111300u) {
        ctx->pc = 0x111304u;
        goto label_111304;
    }
    ctx->pc = 0x1112FCu;
    SET_GPR_U32(ctx, 31, 0x111304u);
    ctx->pc = 0x111278u;
    goto label_111278;
    ctx->pc = 0x111304u;
label_111304:
    // 0x111304: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x111304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111308:
    // 0x111308: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x111308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11130c:
    // 0x11130c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_111310:
    // 0x111310: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x111310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111314:
    // 0x111314: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_111318:
    // 0x111318: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11131c:
    // 0x11131c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11131cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111320:
    // 0x111320: 0x3e00008  jr          $ra
label_111324:
    if (ctx->pc == 0x111324u) {
        ctx->pc = 0x111324u;
            // 0x111324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x111328u;
        goto label_111328;
    }
    ctx->pc = 0x111320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111320u;
            // 0x111324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111328u;
label_111328:
    // 0x111328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11132c:
    // 0x11132c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11132cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_111330:
    // 0x111330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_111334:
    // 0x111334: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_111338:
    if (ctx->pc == 0x111338u) {
        ctx->pc = 0x111338u;
            // 0x111338: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x11133Cu;
        goto label_11133c;
    }
    ctx->pc = 0x111334u;
    {
        const bool branch_taken_0x111334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111334u;
            // 0x111338: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111334) {
            ctx->pc = 0x111354u;
            goto label_111354;
        }
    }
    ctx->pc = 0x11133Cu;
label_11133c:
    // 0x11133c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x11133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_111340:
    // 0x111340: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x111340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_111344:
    // 0x111344: 0x8c5ccc00  lw          $gp, -0x3400($v0)
    ctx->pc = 0x111344u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953984)));
label_111348:
    // 0x111348: 0x60f809  jalr        $v1
label_11134c:
    if (ctx->pc == 0x11134Cu) {
        ctx->pc = 0x11134Cu;
            // 0x11134c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = 0x111350u;
        goto label_111350;
    }
    ctx->pc = 0x111348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x111350u);
        ctx->pc = 0x11134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111348u;
            // 0x11134c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x111350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x111350u; }
            if (ctx->pc != 0x111350u) { return; }
        }
        }
    }
    ctx->pc = 0x111350u;
label_111350:
    // 0x111350: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111354:
    // 0x111354: 0xf  sync
    ctx->pc = 0x111354u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_111358:
    // 0x111358: 0x42000038  ei
    ctx->pc = 0x111358u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_11135c:
    // 0x11135c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11135cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111360:
    // 0x111360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111364:
    // 0x111364: 0x3e00008  jr          $ra
label_111368:
    if (ctx->pc == 0x111368u) {
        ctx->pc = 0x111368u;
            // 0x111368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11136Cu;
        goto label_11136c;
    }
    ctx->pc = 0x111364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111364u;
            // 0x111368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11136Cu;
label_11136c:
    // 0x11136c: 0x0  nop
    ctx->pc = 0x11136cu;
    // NOP
}
