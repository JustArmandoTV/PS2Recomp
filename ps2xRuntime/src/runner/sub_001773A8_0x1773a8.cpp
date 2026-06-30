#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001773A8
// Address: 0x1773a8 - 0x1775b0
void sub_001773A8_0x1773a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001773A8_0x1773a8");
#endif

    switch (ctx->pc) {
        case 0x1773a8u: goto label_1773a8;
        case 0x1773acu: goto label_1773ac;
        case 0x1773b0u: goto label_1773b0;
        case 0x1773b4u: goto label_1773b4;
        case 0x1773b8u: goto label_1773b8;
        case 0x1773bcu: goto label_1773bc;
        case 0x1773c0u: goto label_1773c0;
        case 0x1773c4u: goto label_1773c4;
        case 0x1773c8u: goto label_1773c8;
        case 0x1773ccu: goto label_1773cc;
        case 0x1773d0u: goto label_1773d0;
        case 0x1773d4u: goto label_1773d4;
        case 0x1773d8u: goto label_1773d8;
        case 0x1773dcu: goto label_1773dc;
        case 0x1773e0u: goto label_1773e0;
        case 0x1773e4u: goto label_1773e4;
        case 0x1773e8u: goto label_1773e8;
        case 0x1773ecu: goto label_1773ec;
        case 0x1773f0u: goto label_1773f0;
        case 0x1773f4u: goto label_1773f4;
        case 0x1773f8u: goto label_1773f8;
        case 0x1773fcu: goto label_1773fc;
        case 0x177400u: goto label_177400;
        case 0x177404u: goto label_177404;
        case 0x177408u: goto label_177408;
        case 0x17740cu: goto label_17740c;
        case 0x177410u: goto label_177410;
        case 0x177414u: goto label_177414;
        case 0x177418u: goto label_177418;
        case 0x17741cu: goto label_17741c;
        case 0x177420u: goto label_177420;
        case 0x177424u: goto label_177424;
        case 0x177428u: goto label_177428;
        case 0x17742cu: goto label_17742c;
        case 0x177430u: goto label_177430;
        case 0x177434u: goto label_177434;
        case 0x177438u: goto label_177438;
        case 0x17743cu: goto label_17743c;
        case 0x177440u: goto label_177440;
        case 0x177444u: goto label_177444;
        case 0x177448u: goto label_177448;
        case 0x17744cu: goto label_17744c;
        case 0x177450u: goto label_177450;
        case 0x177454u: goto label_177454;
        case 0x177458u: goto label_177458;
        case 0x17745cu: goto label_17745c;
        case 0x177460u: goto label_177460;
        case 0x177464u: goto label_177464;
        case 0x177468u: goto label_177468;
        case 0x17746cu: goto label_17746c;
        case 0x177470u: goto label_177470;
        case 0x177474u: goto label_177474;
        case 0x177478u: goto label_177478;
        case 0x17747cu: goto label_17747c;
        case 0x177480u: goto label_177480;
        case 0x177484u: goto label_177484;
        case 0x177488u: goto label_177488;
        case 0x17748cu: goto label_17748c;
        case 0x177490u: goto label_177490;
        case 0x177494u: goto label_177494;
        case 0x177498u: goto label_177498;
        case 0x17749cu: goto label_17749c;
        case 0x1774a0u: goto label_1774a0;
        case 0x1774a4u: goto label_1774a4;
        case 0x1774a8u: goto label_1774a8;
        case 0x1774acu: goto label_1774ac;
        case 0x1774b0u: goto label_1774b0;
        case 0x1774b4u: goto label_1774b4;
        case 0x1774b8u: goto label_1774b8;
        case 0x1774bcu: goto label_1774bc;
        case 0x1774c0u: goto label_1774c0;
        case 0x1774c4u: goto label_1774c4;
        case 0x1774c8u: goto label_1774c8;
        case 0x1774ccu: goto label_1774cc;
        case 0x1774d0u: goto label_1774d0;
        case 0x1774d4u: goto label_1774d4;
        case 0x1774d8u: goto label_1774d8;
        case 0x1774dcu: goto label_1774dc;
        case 0x1774e0u: goto label_1774e0;
        case 0x1774e4u: goto label_1774e4;
        case 0x1774e8u: goto label_1774e8;
        case 0x1774ecu: goto label_1774ec;
        case 0x1774f0u: goto label_1774f0;
        case 0x1774f4u: goto label_1774f4;
        case 0x1774f8u: goto label_1774f8;
        case 0x1774fcu: goto label_1774fc;
        case 0x177500u: goto label_177500;
        case 0x177504u: goto label_177504;
        case 0x177508u: goto label_177508;
        case 0x17750cu: goto label_17750c;
        case 0x177510u: goto label_177510;
        case 0x177514u: goto label_177514;
        case 0x177518u: goto label_177518;
        case 0x17751cu: goto label_17751c;
        case 0x177520u: goto label_177520;
        case 0x177524u: goto label_177524;
        case 0x177528u: goto label_177528;
        case 0x17752cu: goto label_17752c;
        case 0x177530u: goto label_177530;
        case 0x177534u: goto label_177534;
        case 0x177538u: goto label_177538;
        case 0x17753cu: goto label_17753c;
        case 0x177540u: goto label_177540;
        case 0x177544u: goto label_177544;
        case 0x177548u: goto label_177548;
        case 0x17754cu: goto label_17754c;
        case 0x177550u: goto label_177550;
        case 0x177554u: goto label_177554;
        case 0x177558u: goto label_177558;
        case 0x17755cu: goto label_17755c;
        case 0x177560u: goto label_177560;
        case 0x177564u: goto label_177564;
        case 0x177568u: goto label_177568;
        case 0x17756cu: goto label_17756c;
        case 0x177570u: goto label_177570;
        case 0x177574u: goto label_177574;
        case 0x177578u: goto label_177578;
        case 0x17757cu: goto label_17757c;
        case 0x177580u: goto label_177580;
        case 0x177584u: goto label_177584;
        case 0x177588u: goto label_177588;
        case 0x17758cu: goto label_17758c;
        case 0x177590u: goto label_177590;
        case 0x177594u: goto label_177594;
        case 0x177598u: goto label_177598;
        case 0x17759cu: goto label_17759c;
        case 0x1775a0u: goto label_1775a0;
        case 0x1775a4u: goto label_1775a4;
        case 0x1775a8u: goto label_1775a8;
        case 0x1775acu: goto label_1775ac;
        default: break;
    }

    ctx->pc = 0x1773a8u;

label_1773a8:
    // 0x1773a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1773a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1773ac:
    // 0x1773ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1773acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1773b0:
    // 0x1773b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1773b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1773b4:
    // 0x1773b4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1773b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1773b8:
    // 0x1773b8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1773b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1773bc:
    // 0x1773bc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1773bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1773c0:
    // 0x1773c0: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1773c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1773c4:
    // 0x1773c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1773c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1773c8:
    // 0x1773c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1773c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1773cc:
    // 0x1773cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1773ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1773d0:
    // 0x1773d0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1773d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1773d4:
    // 0x1773d4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1773d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1773d8:
    // 0x1773d8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1773d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1773dc:
    // 0x1773dc: 0xc05ba82  jal         func_16EA08
label_1773e0:
    if (ctx->pc == 0x1773E0u) {
        ctx->pc = 0x1773E0u;
            // 0x1773e0: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x1773E4u;
        goto label_1773e4;
    }
    ctx->pc = 0x1773DCu;
    SET_GPR_U32(ctx, 31, 0x1773E4u);
    ctx->pc = 0x1773E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773DCu;
            // 0x1773e0: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EA08u;
    if (runtime->hasFunction(0x16EA08u)) {
        auto targetFn = runtime->lookupFunction(0x16EA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773E4u; }
        if (ctx->pc != 0x1773E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA08_0x16ea08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773E4u; }
        if (ctx->pc != 0x1773E4u) { return; }
    }
    ctx->pc = 0x1773E4u;
label_1773e4:
    // 0x1773e4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1773e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_1773e8:
    // 0x1773e8: 0x0  nop
    ctx->pc = 0x1773e8u;
    // NOP
label_1773ec:
    // 0x1773ec: 0xc05c04c  jal         func_170130
label_1773f0:
    if (ctx->pc == 0x1773F0u) {
        ctx->pc = 0x1773F0u;
            // 0x1773f0: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x1773F4u;
        goto label_1773f4;
    }
    ctx->pc = 0x1773ECu;
    SET_GPR_U32(ctx, 31, 0x1773F4u);
    ctx->pc = 0x1773F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773ECu;
            // 0x1773f0: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773F4u; }
        if (ctx->pc != 0x1773F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170130_0x170130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773F4u; }
        if (ctx->pc != 0x1773F4u) { return; }
    }
    ctx->pc = 0x1773F4u;
label_1773f4:
    // 0x1773f4: 0xc0599d2  jal         func_166748
label_1773f8:
    if (ctx->pc == 0x1773F8u) {
        ctx->pc = 0x1773F8u;
            // 0x1773f8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1773FCu;
        goto label_1773fc;
    }
    ctx->pc = 0x1773F4u;
    SET_GPR_U32(ctx, 31, 0x1773FCu);
    ctx->pc = 0x1773F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773F4u;
            // 0x1773f8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773FCu; }
        if (ctx->pc != 0x1773FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773FCu; }
        if (ctx->pc != 0x1773FCu) { return; }
    }
    ctx->pc = 0x1773FCu;
label_1773fc:
    // 0x1773fc: 0x1ae00014  blez        $s7, . + 4 + (0x14 << 2)
label_177400:
    if (ctx->pc == 0x177400u) {
        ctx->pc = 0x177400u;
            // 0x177400: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->pc = 0x177404u;
        goto label_177404;
    }
    ctx->pc = 0x1773FCu;
    {
        const bool branch_taken_0x1773fc = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x177400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1773FCu;
            // 0x177400: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773fc) {
            ctx->pc = 0x177450u;
            goto label_177450;
        }
    }
    ctx->pc = 0x177404u;
label_177404:
    // 0x177404: 0x26d10018  addiu       $s1, $s6, 0x18
    ctx->pc = 0x177404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_177408:
    // 0x177408: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17740c:
    // 0x17740c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17740cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_177410:
    // 0x177410: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x177410u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_177414:
    // 0x177414: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_177418:
    // 0x177418: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17741c:
    // 0x17741c: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x17741cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_177420:
    // 0x177420: 0x3b03821  addu        $a3, $sp, $s0
    ctx->pc = 0x177420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_177424:
    // 0x177424: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_177428:
    // 0x177428: 0x40f809  jalr        $v0
label_17742c:
    if (ctx->pc == 0x17742Cu) {
        ctx->pc = 0x17742Cu;
            // 0x17742c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177430u;
        goto label_177430;
    }
    ctx->pc = 0x177428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177430u);
        ctx->pc = 0x17742Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177428u;
            // 0x17742c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177430u; }
            if (ctx->pc != 0x177430u) { return; }
        }
        }
    }
    ctx->pc = 0x177430u;
label_177430:
    // 0x177430: 0x297202a  slt         $a0, $s4, $s7
    ctx->pc = 0x177430u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_177434:
    // 0x177434: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_177438:
    // 0x177438: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x177438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_17743c:
    // 0x17743c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177440:
    // 0x177440: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x177440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_177444:
    // 0x177444: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x177444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_177448:
    // 0x177448: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_17744c:
    if (ctx->pc == 0x17744Cu) {
        ctx->pc = 0x17744Cu;
            // 0x17744c: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->pc = 0x177450u;
        goto label_177450;
    }
    ctx->pc = 0x177448u;
    {
        const bool branch_taken_0x177448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177448u;
            // 0x17744c: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177448) {
            ctx->pc = 0x177408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177408;
        }
    }
    ctx->pc = 0x177450u;
label_177450:
    // 0x177450: 0x1ae00024  blez        $s7, . + 4 + (0x24 << 2)
label_177454:
    if (ctx->pc == 0x177454u) {
        ctx->pc = 0x177454u;
            // 0x177454: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177458u;
        goto label_177458;
    }
    ctx->pc = 0x177450u;
    {
        const bool branch_taken_0x177450 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x177454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177450u;
            // 0x177454: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177450) {
            ctx->pc = 0x1774E4u;
            goto label_1774e4;
        }
    }
    ctx->pc = 0x177458u;
label_177458:
    // 0x177458: 0x15f040  sll         $fp, $s5, 1
    ctx->pc = 0x177458u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_17745c:
    // 0x17745c: 0x26d30018  addiu       $s3, $s6, 0x18
    ctx->pc = 0x17745cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_177460:
    // 0x177460: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x177460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_177464:
    // 0x177464: 0x0  nop
    ctx->pc = 0x177464u;
    // NOP
label_177468:
    // 0x177468: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_17746c:
    // 0x17746c: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x17746cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_177470:
    // 0x177470: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_177474:
    // 0x177474: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x177474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_177478:
    // 0x177478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17747c:
    // 0x17747c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x17747cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_177480:
    // 0x177480: 0xc061c20  jal         func_187080
label_177484:
    if (ctx->pc == 0x177484u) {
        ctx->pc = 0x177484u;
            // 0x177484: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177488u;
        goto label_177488;
    }
    ctx->pc = 0x177480u;
    SET_GPR_U32(ctx, 31, 0x177488u);
    ctx->pc = 0x177484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177480u;
            // 0x177484: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177488u; }
        if (ctx->pc != 0x177488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177488u; }
        if (ctx->pc != 0x177488u) { return; }
    }
    ctx->pc = 0x177488u;
label_177488:
    // 0x177488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17748c:
    // 0x17748c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x17748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_177490:
    // 0x177490: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x177490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_177494:
    // 0x177494: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x177494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_177498:
    // 0x177498: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x177498u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17749c:
    // 0x17749c: 0xc04a576  jal         func_1295D8
label_1774a0:
    if (ctx->pc == 0x1774A0u) {
        ctx->pc = 0x1774A0u;
            // 0x1774a0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1774A4u;
        goto label_1774a4;
    }
    ctx->pc = 0x17749Cu;
    SET_GPR_U32(ctx, 31, 0x1774A4u);
    ctx->pc = 0x1774A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17749Cu;
            // 0x1774a0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774A4u; }
        if (ctx->pc != 0x1774A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774A4u; }
        if (ctx->pc != 0x1774A4u) { return; }
    }
    ctx->pc = 0x1774A4u;
label_1774a4:
    // 0x1774a4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1774a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1774a8:
    // 0x1774a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1774a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1774ac:
    // 0x1774ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1774acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1774b0:
    // 0x1774b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1774b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1774b4:
    // 0x1774b4: 0x40f809  jalr        $v0
label_1774b8:
    if (ctx->pc == 0x1774B8u) {
        ctx->pc = 0x1774B8u;
            // 0x1774b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1774BCu;
        goto label_1774bc;
    }
    ctx->pc = 0x1774B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1774BCu);
        ctx->pc = 0x1774B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774B4u;
            // 0x1774b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1774BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1774BCu; }
            if (ctx->pc != 0x1774BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1774BCu;
label_1774bc:
    // 0x1774bc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1774bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1774c0:
    // 0x1774c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1774c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1774c4:
    // 0x1774c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1774c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1774c8:
    // 0x1774c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1774c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1774cc:
    // 0x1774cc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1774d0:
    // 0x1774d0: 0x40f809  jalr        $v0
label_1774d4:
    if (ctx->pc == 0x1774D4u) {
        ctx->pc = 0x1774D4u;
            // 0x1774d4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x1774D8u;
        goto label_1774d8;
    }
    ctx->pc = 0x1774D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1774D8u);
        ctx->pc = 0x1774D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774D0u;
            // 0x1774d4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1774D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1774D8u; }
            if (ctx->pc != 0x1774D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1774D8u;
label_1774d8:
    // 0x1774d8: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x1774d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1774dc:
    // 0x1774dc: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1774e0:
    if (ctx->pc == 0x1774E0u) {
        ctx->pc = 0x1774E0u;
            // 0x1774e0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1774E4u;
        goto label_1774e4;
    }
    ctx->pc = 0x1774DCu;
    {
        const bool branch_taken_0x1774dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1774E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774DCu;
            // 0x1774e0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774dc) {
            ctx->pc = 0x177468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177468;
        }
    }
    ctx->pc = 0x1774E4u;
label_1774e4:
    // 0x1774e4: 0x8ec200a8  lw          $v0, 0xA8($s6)
    ctx->pc = 0x1774e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_1774e8:
    // 0x1774e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1774e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1774ec:
    // 0x1774ec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1774ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1774f0:
    // 0x1774f0: 0xc0599d8  jal         func_166760
label_1774f4:
    if (ctx->pc == 0x1774F4u) {
        ctx->pc = 0x1774F4u;
            // 0x1774f4: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x1774F8u;
        goto label_1774f8;
    }
    ctx->pc = 0x1774F0u;
    SET_GPR_U32(ctx, 31, 0x1774F8u);
    ctx->pc = 0x1774F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1774F0u;
            // 0x1774f4: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774F8u; }
        if (ctx->pc != 0x1774F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1774F8u; }
        if (ctx->pc != 0x1774F8u) { return; }
    }
    ctx->pc = 0x1774F8u;
label_1774f8:
    // 0x1774f8: 0x1ae0000e  blez        $s7, . + 4 + (0xE << 2)
label_1774fc:
    if (ctx->pc == 0x1774FCu) {
        ctx->pc = 0x177500u;
        goto label_177500;
    }
    ctx->pc = 0x1774F8u;
    {
        const bool branch_taken_0x1774f8 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x1774f8) {
            ctx->pc = 0x177534u;
            goto label_177534;
        }
    }
    ctx->pc = 0x177500u;
label_177500:
    // 0x177500: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x177500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_177504:
    // 0x177504: 0x26d00018  addiu       $s0, $s6, 0x18
    ctx->pc = 0x177504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_177508:
    // 0x177508: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17750c:
    // 0x17750c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17750cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_177510:
    // 0x177510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177514:
    // 0x177514: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x177514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_177518:
    // 0x177518: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x177518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17751c:
    // 0x17751c: 0x40f809  jalr        $v0
label_177520:
    if (ctx->pc == 0x177520u) {
        ctx->pc = 0x177520u;
            // 0x177520: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->pc = 0x177524u;
        goto label_177524;
    }
    ctx->pc = 0x17751Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177524u);
        ctx->pc = 0x177520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17751Cu;
            // 0x177520: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177524u; }
            if (ctx->pc != 0x177524u) { return; }
        }
        }
    }
    ctx->pc = 0x177524u;
label_177524:
    // 0x177524: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x177524u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_177528:
    // 0x177528: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x177528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_17752c:
    // 0x17752c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
label_177530:
    if (ctx->pc == 0x177530u) {
        ctx->pc = 0x177530u;
            // 0x177530: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->pc = 0x177534u;
        goto label_177534;
    }
    ctx->pc = 0x17752Cu;
    {
        const bool branch_taken_0x17752c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x177530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17752Cu;
            // 0x177530: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17752c) {
            ctx->pc = 0x177508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177508;
        }
    }
    ctx->pc = 0x177534u;
label_177534:
    // 0x177534: 0xc05ba82  jal         func_16EA08
label_177538:
    if (ctx->pc == 0x177538u) {
        ctx->pc = 0x177538u;
            // 0x177538: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->pc = 0x17753Cu;
        goto label_17753c;
    }
    ctx->pc = 0x177534u;
    SET_GPR_U32(ctx, 31, 0x17753Cu);
    ctx->pc = 0x177538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177534u;
            // 0x177538: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EA08u;
    if (runtime->hasFunction(0x16EA08u)) {
        auto targetFn = runtime->lookupFunction(0x16EA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17753Cu; }
        if (ctx->pc != 0x17753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EA08_0x16ea08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17753Cu; }
        if (ctx->pc != 0x17753Cu) { return; }
    }
    ctx->pc = 0x17753Cu;
label_17753c:
    // 0x17753c: 0x8ec300a8  lw          $v1, 0xA8($s6)
    ctx->pc = 0x17753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_177540:
    // 0x177540: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x177540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_177544:
    // 0x177544: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_177548:
    // 0x177548: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
label_17754c:
    if (ctx->pc == 0x17754Cu) {
        ctx->pc = 0x17754Cu;
            // 0x17754c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x177550u;
        goto label_177550;
    }
    ctx->pc = 0x177548u;
    {
        const bool branch_taken_0x177548 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x177548) {
            ctx->pc = 0x17754Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177548u;
            // 0x17754c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177580u;
            goto label_177580;
        }
    }
    ctx->pc = 0x177550u;
label_177550:
    // 0x177550: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x177550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_177554:
    // 0x177554: 0xc05ba70  jal         func_16E9C0
label_177558:
    if (ctx->pc == 0x177558u) {
        ctx->pc = 0x177558u;
            // 0x177558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17755Cu;
        goto label_17755c;
    }
    ctx->pc = 0x177554u;
    SET_GPR_U32(ctx, 31, 0x17755Cu);
    ctx->pc = 0x177558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177554u;
            // 0x177558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9C0u;
    if (runtime->hasFunction(0x16E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17755Cu; }
        if (ctx->pc != 0x17755Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9C0_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17755Cu; }
        if (ctx->pc != 0x17755Cu) { return; }
    }
    ctx->pc = 0x17755Cu;
label_17755c:
    // 0x17755c: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x17755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_177560:
    // 0x177560: 0xc05ba76  jal         func_16E9D8
label_177564:
    if (ctx->pc == 0x177564u) {
        ctx->pc = 0x177564u;
            // 0x177564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177568u;
        goto label_177568;
    }
    ctx->pc = 0x177560u;
    SET_GPR_U32(ctx, 31, 0x177568u);
    ctx->pc = 0x177564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177560u;
            // 0x177564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D8u;
    if (runtime->hasFunction(0x16E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177568u; }
        if (ctx->pc != 0x177568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9D8_0x16e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177568u; }
        if (ctx->pc != 0x177568u) { return; }
    }
    ctx->pc = 0x177568u;
label_177568:
    // 0x177568: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x177568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_17756c:
    // 0x17756c: 0xc060ffa  jal         func_183FE8
label_177570:
    if (ctx->pc == 0x177570u) {
        ctx->pc = 0x177570u;
            // 0x177570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x177574u;
        goto label_177574;
    }
    ctx->pc = 0x17756Cu;
    SET_GPR_U32(ctx, 31, 0x177574u);
    ctx->pc = 0x177570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17756Cu;
            // 0x177570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183FE8u;
    if (runtime->hasFunction(0x183FE8u)) {
        auto targetFn = runtime->lookupFunction(0x183FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177574u; }
        if (ctx->pc != 0x177574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183FE8_0x183fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177574u; }
        if (ctx->pc != 0x177574u) { return; }
    }
    ctx->pc = 0x177574u;
label_177574:
    // 0x177574: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x177574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_177578:
    // 0x177578: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x177578u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_17757c:
    // 0x17757c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17757cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_177580:
    // 0x177580: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x177580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_177584:
    // 0x177584: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x177584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_177588:
    // 0x177588: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x177588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_17758c:
    // 0x17758c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x17758cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_177590:
    // 0x177590: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x177590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_177594:
    // 0x177594: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x177594u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_177598:
    // 0x177598: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x177598u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_17759c:
    // 0x17759c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x17759cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1775a0:
    // 0x1775a0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1775a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1775a4:
    // 0x1775a4: 0x3e00008  jr          $ra
label_1775a8:
    if (ctx->pc == 0x1775A8u) {
        ctx->pc = 0x1775A8u;
            // 0x1775a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1775ACu;
        goto label_1775ac;
    }
    ctx->pc = 0x1775A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1775A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1775A4u;
            // 0x1775a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1775ACu;
label_1775ac:
    // 0x1775ac: 0x0  nop
    ctx->pc = 0x1775acu;
    // NOP
}
