#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00435400
// Address: 0x435400 - 0x435660
void sub_00435400_0x435400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435400_0x435400");
#endif

    switch (ctx->pc) {
        case 0x435400u: goto label_435400;
        case 0x435404u: goto label_435404;
        case 0x435408u: goto label_435408;
        case 0x43540cu: goto label_43540c;
        case 0x435410u: goto label_435410;
        case 0x435414u: goto label_435414;
        case 0x435418u: goto label_435418;
        case 0x43541cu: goto label_43541c;
        case 0x435420u: goto label_435420;
        case 0x435424u: goto label_435424;
        case 0x435428u: goto label_435428;
        case 0x43542cu: goto label_43542c;
        case 0x435430u: goto label_435430;
        case 0x435434u: goto label_435434;
        case 0x435438u: goto label_435438;
        case 0x43543cu: goto label_43543c;
        case 0x435440u: goto label_435440;
        case 0x435444u: goto label_435444;
        case 0x435448u: goto label_435448;
        case 0x43544cu: goto label_43544c;
        case 0x435450u: goto label_435450;
        case 0x435454u: goto label_435454;
        case 0x435458u: goto label_435458;
        case 0x43545cu: goto label_43545c;
        case 0x435460u: goto label_435460;
        case 0x435464u: goto label_435464;
        case 0x435468u: goto label_435468;
        case 0x43546cu: goto label_43546c;
        case 0x435470u: goto label_435470;
        case 0x435474u: goto label_435474;
        case 0x435478u: goto label_435478;
        case 0x43547cu: goto label_43547c;
        case 0x435480u: goto label_435480;
        case 0x435484u: goto label_435484;
        case 0x435488u: goto label_435488;
        case 0x43548cu: goto label_43548c;
        case 0x435490u: goto label_435490;
        case 0x435494u: goto label_435494;
        case 0x435498u: goto label_435498;
        case 0x43549cu: goto label_43549c;
        case 0x4354a0u: goto label_4354a0;
        case 0x4354a4u: goto label_4354a4;
        case 0x4354a8u: goto label_4354a8;
        case 0x4354acu: goto label_4354ac;
        case 0x4354b0u: goto label_4354b0;
        case 0x4354b4u: goto label_4354b4;
        case 0x4354b8u: goto label_4354b8;
        case 0x4354bcu: goto label_4354bc;
        case 0x4354c0u: goto label_4354c0;
        case 0x4354c4u: goto label_4354c4;
        case 0x4354c8u: goto label_4354c8;
        case 0x4354ccu: goto label_4354cc;
        case 0x4354d0u: goto label_4354d0;
        case 0x4354d4u: goto label_4354d4;
        case 0x4354d8u: goto label_4354d8;
        case 0x4354dcu: goto label_4354dc;
        case 0x4354e0u: goto label_4354e0;
        case 0x4354e4u: goto label_4354e4;
        case 0x4354e8u: goto label_4354e8;
        case 0x4354ecu: goto label_4354ec;
        case 0x4354f0u: goto label_4354f0;
        case 0x4354f4u: goto label_4354f4;
        case 0x4354f8u: goto label_4354f8;
        case 0x4354fcu: goto label_4354fc;
        case 0x435500u: goto label_435500;
        case 0x435504u: goto label_435504;
        case 0x435508u: goto label_435508;
        case 0x43550cu: goto label_43550c;
        case 0x435510u: goto label_435510;
        case 0x435514u: goto label_435514;
        case 0x435518u: goto label_435518;
        case 0x43551cu: goto label_43551c;
        case 0x435520u: goto label_435520;
        case 0x435524u: goto label_435524;
        case 0x435528u: goto label_435528;
        case 0x43552cu: goto label_43552c;
        case 0x435530u: goto label_435530;
        case 0x435534u: goto label_435534;
        case 0x435538u: goto label_435538;
        case 0x43553cu: goto label_43553c;
        case 0x435540u: goto label_435540;
        case 0x435544u: goto label_435544;
        case 0x435548u: goto label_435548;
        case 0x43554cu: goto label_43554c;
        case 0x435550u: goto label_435550;
        case 0x435554u: goto label_435554;
        case 0x435558u: goto label_435558;
        case 0x43555cu: goto label_43555c;
        case 0x435560u: goto label_435560;
        case 0x435564u: goto label_435564;
        case 0x435568u: goto label_435568;
        case 0x43556cu: goto label_43556c;
        case 0x435570u: goto label_435570;
        case 0x435574u: goto label_435574;
        case 0x435578u: goto label_435578;
        case 0x43557cu: goto label_43557c;
        case 0x435580u: goto label_435580;
        case 0x435584u: goto label_435584;
        case 0x435588u: goto label_435588;
        case 0x43558cu: goto label_43558c;
        case 0x435590u: goto label_435590;
        case 0x435594u: goto label_435594;
        case 0x435598u: goto label_435598;
        case 0x43559cu: goto label_43559c;
        case 0x4355a0u: goto label_4355a0;
        case 0x4355a4u: goto label_4355a4;
        case 0x4355a8u: goto label_4355a8;
        case 0x4355acu: goto label_4355ac;
        case 0x4355b0u: goto label_4355b0;
        case 0x4355b4u: goto label_4355b4;
        case 0x4355b8u: goto label_4355b8;
        case 0x4355bcu: goto label_4355bc;
        case 0x4355c0u: goto label_4355c0;
        case 0x4355c4u: goto label_4355c4;
        case 0x4355c8u: goto label_4355c8;
        case 0x4355ccu: goto label_4355cc;
        case 0x4355d0u: goto label_4355d0;
        case 0x4355d4u: goto label_4355d4;
        case 0x4355d8u: goto label_4355d8;
        case 0x4355dcu: goto label_4355dc;
        case 0x4355e0u: goto label_4355e0;
        case 0x4355e4u: goto label_4355e4;
        case 0x4355e8u: goto label_4355e8;
        case 0x4355ecu: goto label_4355ec;
        case 0x4355f0u: goto label_4355f0;
        case 0x4355f4u: goto label_4355f4;
        case 0x4355f8u: goto label_4355f8;
        case 0x4355fcu: goto label_4355fc;
        case 0x435600u: goto label_435600;
        case 0x435604u: goto label_435604;
        case 0x435608u: goto label_435608;
        case 0x43560cu: goto label_43560c;
        case 0x435610u: goto label_435610;
        case 0x435614u: goto label_435614;
        case 0x435618u: goto label_435618;
        case 0x43561cu: goto label_43561c;
        case 0x435620u: goto label_435620;
        case 0x435624u: goto label_435624;
        case 0x435628u: goto label_435628;
        case 0x43562cu: goto label_43562c;
        case 0x435630u: goto label_435630;
        case 0x435634u: goto label_435634;
        case 0x435638u: goto label_435638;
        case 0x43563cu: goto label_43563c;
        case 0x435640u: goto label_435640;
        case 0x435644u: goto label_435644;
        case 0x435648u: goto label_435648;
        case 0x43564cu: goto label_43564c;
        case 0x435650u: goto label_435650;
        case 0x435654u: goto label_435654;
        case 0x435658u: goto label_435658;
        case 0x43565cu: goto label_43565c;
        default: break;
    }

    ctx->pc = 0x435400u;

label_435400:
    // 0x435400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_435404:
    // 0x435404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x435404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_435408:
    // 0x435408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43540c:
    // 0x43540c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435410:
    // 0x435410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x435410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_435414:
    // 0x435414: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_435418:
    if (ctx->pc == 0x435418u) {
        ctx->pc = 0x435418u;
            // 0x435418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43541Cu;
        goto label_43541c;
    }
    ctx->pc = 0x435414u;
    {
        const bool branch_taken_0x435414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x435418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435414u;
            // 0x435418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435414) {
            ctx->pc = 0x435548u;
            goto label_435548;
        }
    }
    ctx->pc = 0x43541Cu;
label_43541c:
    // 0x43541c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43541cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_435420:
    // 0x435420: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_435424:
    // 0x435424: 0x2463cbb0  addiu       $v1, $v1, -0x3450
    ctx->pc = 0x435424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953904));
label_435428:
    // 0x435428: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x435428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_43542c:
    // 0x43542c: 0x2442cbe8  addiu       $v0, $v0, -0x3418
    ctx->pc = 0x43542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953960));
label_435430:
    // 0x435430: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x435430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_435434:
    // 0x435434: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x435434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_435438:
    // 0x435438: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x435438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_43543c:
    // 0x43543c: 0xc0407c0  jal         func_101F00
label_435440:
    if (ctx->pc == 0x435440u) {
        ctx->pc = 0x435440u;
            // 0x435440: 0x24a55560  addiu       $a1, $a1, 0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21856));
        ctx->pc = 0x435444u;
        goto label_435444;
    }
    ctx->pc = 0x43543Cu;
    SET_GPR_U32(ctx, 31, 0x435444u);
    ctx->pc = 0x435440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43543Cu;
            // 0x435440: 0x24a55560  addiu       $a1, $a1, 0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435444u; }
        if (ctx->pc != 0x435444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435444u; }
        if (ctx->pc != 0x435444u) { return; }
    }
    ctx->pc = 0x435444u;
label_435444:
    // 0x435444: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x435444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_435448:
    // 0x435448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_43544c:
    if (ctx->pc == 0x43544Cu) {
        ctx->pc = 0x43544Cu;
            // 0x43544c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x435450u;
        goto label_435450;
    }
    ctx->pc = 0x435448u;
    {
        const bool branch_taken_0x435448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435448) {
            ctx->pc = 0x43544Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435448u;
            // 0x43544c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43545Cu;
            goto label_43545c;
        }
    }
    ctx->pc = 0x435450u;
label_435450:
    // 0x435450: 0xc07507c  jal         func_1D41F0
label_435454:
    if (ctx->pc == 0x435454u) {
        ctx->pc = 0x435454u;
            // 0x435454: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x435458u;
        goto label_435458;
    }
    ctx->pc = 0x435450u;
    SET_GPR_U32(ctx, 31, 0x435458u);
    ctx->pc = 0x435454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435450u;
            // 0x435454: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435458u; }
        if (ctx->pc != 0x435458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435458u; }
        if (ctx->pc != 0x435458u) { return; }
    }
    ctx->pc = 0x435458u;
label_435458:
    // 0x435458: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x435458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_43545c:
    // 0x43545c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_435460:
    if (ctx->pc == 0x435460u) {
        ctx->pc = 0x435460u;
            // 0x435460: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x435464u;
        goto label_435464;
    }
    ctx->pc = 0x43545Cu;
    {
        const bool branch_taken_0x43545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43545c) {
            ctx->pc = 0x435460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43545Cu;
            // 0x435460: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43548Cu;
            goto label_43548c;
        }
    }
    ctx->pc = 0x435464u;
label_435464:
    // 0x435464: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_435468:
    if (ctx->pc == 0x435468u) {
        ctx->pc = 0x43546Cu;
        goto label_43546c;
    }
    ctx->pc = 0x435464u;
    {
        const bool branch_taken_0x435464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435464) {
            ctx->pc = 0x435488u;
            goto label_435488;
        }
    }
    ctx->pc = 0x43546Cu;
label_43546c:
    // 0x43546c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_435470:
    if (ctx->pc == 0x435470u) {
        ctx->pc = 0x435474u;
        goto label_435474;
    }
    ctx->pc = 0x43546Cu;
    {
        const bool branch_taken_0x43546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43546c) {
            ctx->pc = 0x435488u;
            goto label_435488;
        }
    }
    ctx->pc = 0x435474u;
label_435474:
    // 0x435474: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x435474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_435478:
    // 0x435478: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43547c:
    if (ctx->pc == 0x43547Cu) {
        ctx->pc = 0x435480u;
        goto label_435480;
    }
    ctx->pc = 0x435478u;
    {
        const bool branch_taken_0x435478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x435478) {
            ctx->pc = 0x435488u;
            goto label_435488;
        }
    }
    ctx->pc = 0x435480u;
label_435480:
    // 0x435480: 0xc0400a8  jal         func_1002A0
label_435484:
    if (ctx->pc == 0x435484u) {
        ctx->pc = 0x435488u;
        goto label_435488;
    }
    ctx->pc = 0x435480u;
    SET_GPR_U32(ctx, 31, 0x435488u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435488u; }
        if (ctx->pc != 0x435488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435488u; }
        if (ctx->pc != 0x435488u) { return; }
    }
    ctx->pc = 0x435488u;
label_435488:
    // 0x435488: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x435488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_43548c:
    // 0x43548c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_435490:
    if (ctx->pc == 0x435490u) {
        ctx->pc = 0x435490u;
            // 0x435490: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x435494u;
        goto label_435494;
    }
    ctx->pc = 0x43548Cu;
    {
        const bool branch_taken_0x43548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43548c) {
            ctx->pc = 0x435490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43548Cu;
            // 0x435490: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4354BCu;
            goto label_4354bc;
        }
    }
    ctx->pc = 0x435494u;
label_435494:
    // 0x435494: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_435498:
    if (ctx->pc == 0x435498u) {
        ctx->pc = 0x43549Cu;
        goto label_43549c;
    }
    ctx->pc = 0x435494u;
    {
        const bool branch_taken_0x435494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435494) {
            ctx->pc = 0x4354B8u;
            goto label_4354b8;
        }
    }
    ctx->pc = 0x43549Cu;
label_43549c:
    // 0x43549c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4354a0:
    if (ctx->pc == 0x4354A0u) {
        ctx->pc = 0x4354A4u;
        goto label_4354a4;
    }
    ctx->pc = 0x43549Cu;
    {
        const bool branch_taken_0x43549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43549c) {
            ctx->pc = 0x4354B8u;
            goto label_4354b8;
        }
    }
    ctx->pc = 0x4354A4u;
label_4354a4:
    // 0x4354a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4354a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4354a8:
    // 0x4354a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4354ac:
    if (ctx->pc == 0x4354ACu) {
        ctx->pc = 0x4354B0u;
        goto label_4354b0;
    }
    ctx->pc = 0x4354A8u;
    {
        const bool branch_taken_0x4354a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4354a8) {
            ctx->pc = 0x4354B8u;
            goto label_4354b8;
        }
    }
    ctx->pc = 0x4354B0u;
label_4354b0:
    // 0x4354b0: 0xc0400a8  jal         func_1002A0
label_4354b4:
    if (ctx->pc == 0x4354B4u) {
        ctx->pc = 0x4354B8u;
        goto label_4354b8;
    }
    ctx->pc = 0x4354B0u;
    SET_GPR_U32(ctx, 31, 0x4354B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4354B8u; }
        if (ctx->pc != 0x4354B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4354B8u; }
        if (ctx->pc != 0x4354B8u) { return; }
    }
    ctx->pc = 0x4354B8u;
label_4354b8:
    // 0x4354b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4354b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4354bc:
    // 0x4354bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4354c0:
    if (ctx->pc == 0x4354C0u) {
        ctx->pc = 0x4354C4u;
        goto label_4354c4;
    }
    ctx->pc = 0x4354BCu;
    {
        const bool branch_taken_0x4354bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4354bc) {
            ctx->pc = 0x4354D8u;
            goto label_4354d8;
        }
    }
    ctx->pc = 0x4354C4u;
label_4354c4:
    // 0x4354c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4354c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4354c8:
    // 0x4354c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4354c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4354cc:
    // 0x4354cc: 0x2463cb98  addiu       $v1, $v1, -0x3468
    ctx->pc = 0x4354ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953880));
label_4354d0:
    // 0x4354d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4354d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4354d4:
    // 0x4354d4: 0xac400d10  sw          $zero, 0xD10($v0)
    ctx->pc = 0x4354d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3344), GPR_U32(ctx, 0));
label_4354d8:
    // 0x4354d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4354dc:
    if (ctx->pc == 0x4354DCu) {
        ctx->pc = 0x4354DCu;
            // 0x4354dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4354E0u;
        goto label_4354e0;
    }
    ctx->pc = 0x4354D8u;
    {
        const bool branch_taken_0x4354d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4354d8) {
            ctx->pc = 0x4354DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4354D8u;
            // 0x4354dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435534u;
            goto label_435534;
        }
    }
    ctx->pc = 0x4354E0u;
label_4354e0:
    // 0x4354e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4354e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4354e4:
    // 0x4354e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4354e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4354e8:
    // 0x4354e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4354e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4354ec:
    // 0x4354ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4354ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4354f0:
    // 0x4354f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4354f4:
    if (ctx->pc == 0x4354F4u) {
        ctx->pc = 0x4354F4u;
            // 0x4354f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4354F8u;
        goto label_4354f8;
    }
    ctx->pc = 0x4354F0u;
    {
        const bool branch_taken_0x4354f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4354f0) {
            ctx->pc = 0x4354F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4354F0u;
            // 0x4354f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43550Cu;
            goto label_43550c;
        }
    }
    ctx->pc = 0x4354F8u;
label_4354f8:
    // 0x4354f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4354f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4354fc:
    // 0x4354fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4354fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_435500:
    // 0x435500: 0x320f809  jalr        $t9
label_435504:
    if (ctx->pc == 0x435504u) {
        ctx->pc = 0x435504u;
            // 0x435504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x435508u;
        goto label_435508;
    }
    ctx->pc = 0x435500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435508u);
        ctx->pc = 0x435504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435500u;
            // 0x435504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x435508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435508u; }
            if (ctx->pc != 0x435508u) { return; }
        }
        }
    }
    ctx->pc = 0x435508u;
label_435508:
    // 0x435508: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x435508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_43550c:
    // 0x43550c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_435510:
    if (ctx->pc == 0x435510u) {
        ctx->pc = 0x435510u;
            // 0x435510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435514u;
        goto label_435514;
    }
    ctx->pc = 0x43550Cu;
    {
        const bool branch_taken_0x43550c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43550c) {
            ctx->pc = 0x435510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43550Cu;
            // 0x435510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435528u;
            goto label_435528;
        }
    }
    ctx->pc = 0x435514u;
label_435514:
    // 0x435514: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x435514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_435518:
    // 0x435518: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x435518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_43551c:
    // 0x43551c: 0x320f809  jalr        $t9
label_435520:
    if (ctx->pc == 0x435520u) {
        ctx->pc = 0x435520u;
            // 0x435520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x435524u;
        goto label_435524;
    }
    ctx->pc = 0x43551Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435524u);
        ctx->pc = 0x435520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43551Cu;
            // 0x435520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x435524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435524u; }
            if (ctx->pc != 0x435524u) { return; }
        }
        }
    }
    ctx->pc = 0x435524u;
label_435524:
    // 0x435524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x435524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_435528:
    // 0x435528: 0xc075bf8  jal         func_1D6FE0
label_43552c:
    if (ctx->pc == 0x43552Cu) {
        ctx->pc = 0x43552Cu;
            // 0x43552c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435530u;
        goto label_435530;
    }
    ctx->pc = 0x435528u;
    SET_GPR_U32(ctx, 31, 0x435530u);
    ctx->pc = 0x43552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435528u;
            // 0x43552c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435530u; }
        if (ctx->pc != 0x435530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435530u; }
        if (ctx->pc != 0x435530u) { return; }
    }
    ctx->pc = 0x435530u;
label_435530:
    // 0x435530: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x435530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_435534:
    // 0x435534: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x435534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_435538:
    // 0x435538: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43553c:
    if (ctx->pc == 0x43553Cu) {
        ctx->pc = 0x43553Cu;
            // 0x43553c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435540u;
        goto label_435540;
    }
    ctx->pc = 0x435538u;
    {
        const bool branch_taken_0x435538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x435538) {
            ctx->pc = 0x43553Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435538u;
            // 0x43553c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43554Cu;
            goto label_43554c;
        }
    }
    ctx->pc = 0x435540u;
label_435540:
    // 0x435540: 0xc0400a8  jal         func_1002A0
label_435544:
    if (ctx->pc == 0x435544u) {
        ctx->pc = 0x435544u;
            // 0x435544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435548u;
        goto label_435548;
    }
    ctx->pc = 0x435540u;
    SET_GPR_U32(ctx, 31, 0x435548u);
    ctx->pc = 0x435544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435540u;
            // 0x435544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435548u; }
        if (ctx->pc != 0x435548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435548u; }
        if (ctx->pc != 0x435548u) { return; }
    }
    ctx->pc = 0x435548u;
label_435548:
    // 0x435548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x435548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43554c:
    // 0x43554c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_435550:
    // 0x435550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_435554:
    // 0x435554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_435558:
    // 0x435558: 0x3e00008  jr          $ra
label_43555c:
    if (ctx->pc == 0x43555Cu) {
        ctx->pc = 0x43555Cu;
            // 0x43555c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x435560u;
        goto label_435560;
    }
    ctx->pc = 0x435558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435558u;
            // 0x43555c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435560u;
label_435560:
    // 0x435560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_435564:
    // 0x435564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x435564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_435568:
    // 0x435568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43556c:
    // 0x43556c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435570:
    // 0x435570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x435570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_435574:
    // 0x435574: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_435578:
    if (ctx->pc == 0x435578u) {
        ctx->pc = 0x435578u;
            // 0x435578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43557Cu;
        goto label_43557c;
    }
    ctx->pc = 0x435574u;
    {
        const bool branch_taken_0x435574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x435578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435574u;
            // 0x435578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435574) {
            ctx->pc = 0x43563Cu;
            goto label_43563c;
        }
    }
    ctx->pc = 0x43557Cu;
label_43557c:
    // 0x43557c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43557cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_435580:
    // 0x435580: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_435584:
    // 0x435584: 0x2463cc50  addiu       $v1, $v1, -0x33B0
    ctx->pc = 0x435584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954064));
label_435588:
    // 0x435588: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x435588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
label_43558c:
    // 0x43558c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43558cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_435590:
    // 0x435590: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x435590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_435594:
    // 0x435594: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x435594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_435598:
    // 0x435598: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x435598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_43559c:
    // 0x43559c: 0x320f809  jalr        $t9
label_4355a0:
    if (ctx->pc == 0x4355A0u) {
        ctx->pc = 0x4355A4u;
        goto label_4355a4;
    }
    ctx->pc = 0x43559Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4355A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4355A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4355A4u; }
            if (ctx->pc != 0x4355A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4355A4u;
label_4355a4:
    // 0x4355a4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4355a8:
    if (ctx->pc == 0x4355A8u) {
        ctx->pc = 0x4355A8u;
            // 0x4355a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4355ACu;
        goto label_4355ac;
    }
    ctx->pc = 0x4355A4u;
    {
        const bool branch_taken_0x4355a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4355a4) {
            ctx->pc = 0x4355A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4355A4u;
            // 0x4355a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435628u;
            goto label_435628;
        }
    }
    ctx->pc = 0x4355ACu;
label_4355ac:
    // 0x4355ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4355acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4355b0:
    // 0x4355b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4355b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4355b4:
    // 0x4355b4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4355b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4355b8:
    // 0x4355b8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4355b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4355bc:
    // 0x4355bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4355bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4355c0:
    // 0x4355c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4355c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4355c4:
    // 0x4355c4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4355c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4355c8:
    // 0x4355c8: 0xc0aecc4  jal         func_2BB310
label_4355cc:
    if (ctx->pc == 0x4355CCu) {
        ctx->pc = 0x4355CCu;
            // 0x4355cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4355D0u;
        goto label_4355d0;
    }
    ctx->pc = 0x4355C8u;
    SET_GPR_U32(ctx, 31, 0x4355D0u);
    ctx->pc = 0x4355CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4355C8u;
            // 0x4355cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4355D0u; }
        if (ctx->pc != 0x4355D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4355D0u; }
        if (ctx->pc != 0x4355D0u) { return; }
    }
    ctx->pc = 0x4355D0u;
label_4355d0:
    // 0x4355d0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4355d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4355d4:
    // 0x4355d4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4355d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4355d8:
    // 0x4355d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4355dc:
    if (ctx->pc == 0x4355DCu) {
        ctx->pc = 0x4355DCu;
            // 0x4355dc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4355E0u;
        goto label_4355e0;
    }
    ctx->pc = 0x4355D8u;
    {
        const bool branch_taken_0x4355d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4355d8) {
            ctx->pc = 0x4355DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4355D8u;
            // 0x4355dc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4355F4u;
            goto label_4355f4;
        }
    }
    ctx->pc = 0x4355E0u;
label_4355e0:
    // 0x4355e0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4355e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4355e4:
    // 0x4355e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4355e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4355e8:
    // 0x4355e8: 0x320f809  jalr        $t9
label_4355ec:
    if (ctx->pc == 0x4355ECu) {
        ctx->pc = 0x4355ECu;
            // 0x4355ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4355F0u;
        goto label_4355f0;
    }
    ctx->pc = 0x4355E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4355F0u);
        ctx->pc = 0x4355ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4355E8u;
            // 0x4355ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4355F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4355F0u; }
            if (ctx->pc != 0x4355F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4355F0u;
label_4355f0:
    // 0x4355f0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4355f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4355f4:
    // 0x4355f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4355f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4355f8:
    // 0x4355f8: 0xc0aec9c  jal         func_2BB270
label_4355fc:
    if (ctx->pc == 0x4355FCu) {
        ctx->pc = 0x4355FCu;
            // 0x4355fc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x435600u;
        goto label_435600;
    }
    ctx->pc = 0x4355F8u;
    SET_GPR_U32(ctx, 31, 0x435600u);
    ctx->pc = 0x4355FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4355F8u;
            // 0x4355fc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435600u; }
        if (ctx->pc != 0x435600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435600u; }
        if (ctx->pc != 0x435600u) { return; }
    }
    ctx->pc = 0x435600u;
label_435600:
    // 0x435600: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x435600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_435604:
    // 0x435604: 0xc0aec88  jal         func_2BB220
label_435608:
    if (ctx->pc == 0x435608u) {
        ctx->pc = 0x435608u;
            // 0x435608: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x43560Cu;
        goto label_43560c;
    }
    ctx->pc = 0x435604u;
    SET_GPR_U32(ctx, 31, 0x43560Cu);
    ctx->pc = 0x435608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435604u;
            // 0x435608: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43560Cu; }
        if (ctx->pc != 0x43560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43560Cu; }
        if (ctx->pc != 0x43560Cu) { return; }
    }
    ctx->pc = 0x43560Cu;
label_43560c:
    // 0x43560c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x43560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_435610:
    // 0x435610: 0xc0aec0c  jal         func_2BB030
label_435614:
    if (ctx->pc == 0x435614u) {
        ctx->pc = 0x435614u;
            // 0x435614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435618u;
        goto label_435618;
    }
    ctx->pc = 0x435610u;
    SET_GPR_U32(ctx, 31, 0x435618u);
    ctx->pc = 0x435614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435610u;
            // 0x435614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435618u; }
        if (ctx->pc != 0x435618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435618u; }
        if (ctx->pc != 0x435618u) { return; }
    }
    ctx->pc = 0x435618u;
label_435618:
    // 0x435618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x435618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43561c:
    // 0x43561c: 0xc0aeaa8  jal         func_2BAAA0
label_435620:
    if (ctx->pc == 0x435620u) {
        ctx->pc = 0x435620u;
            // 0x435620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435624u;
        goto label_435624;
    }
    ctx->pc = 0x43561Cu;
    SET_GPR_U32(ctx, 31, 0x435624u);
    ctx->pc = 0x435620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43561Cu;
            // 0x435620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435624u; }
        if (ctx->pc != 0x435624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435624u; }
        if (ctx->pc != 0x435624u) { return; }
    }
    ctx->pc = 0x435624u;
label_435624:
    // 0x435624: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x435624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_435628:
    // 0x435628: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x435628u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43562c:
    // 0x43562c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_435630:
    if (ctx->pc == 0x435630u) {
        ctx->pc = 0x435630u;
            // 0x435630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435634u;
        goto label_435634;
    }
    ctx->pc = 0x43562Cu;
    {
        const bool branch_taken_0x43562c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43562c) {
            ctx->pc = 0x435630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43562Cu;
            // 0x435630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435640u;
            goto label_435640;
        }
    }
    ctx->pc = 0x435634u;
label_435634:
    // 0x435634: 0xc0400a8  jal         func_1002A0
label_435638:
    if (ctx->pc == 0x435638u) {
        ctx->pc = 0x435638u;
            // 0x435638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43563Cu;
        goto label_43563c;
    }
    ctx->pc = 0x435634u;
    SET_GPR_U32(ctx, 31, 0x43563Cu);
    ctx->pc = 0x435638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435634u;
            // 0x435638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43563Cu; }
        if (ctx->pc != 0x43563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43563Cu; }
        if (ctx->pc != 0x43563Cu) { return; }
    }
    ctx->pc = 0x43563Cu;
label_43563c:
    // 0x43563c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43563cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_435640:
    // 0x435640: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x435640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_435644:
    // 0x435644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_435648:
    // 0x435648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43564c:
    // 0x43564c: 0x3e00008  jr          $ra
label_435650:
    if (ctx->pc == 0x435650u) {
        ctx->pc = 0x435650u;
            // 0x435650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x435654u;
        goto label_435654;
    }
    ctx->pc = 0x43564Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43564Cu;
            // 0x435650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435654u;
label_435654:
    // 0x435654: 0x0  nop
    ctx->pc = 0x435654u;
    // NOP
label_435658:
    // 0x435658: 0x0  nop
    ctx->pc = 0x435658u;
    // NOP
label_43565c:
    // 0x43565c: 0x0  nop
    ctx->pc = 0x43565cu;
    // NOP
}
