#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004145B0
// Address: 0x4145b0 - 0x414840
void sub_004145B0_0x4145b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004145B0_0x4145b0");
#endif

    switch (ctx->pc) {
        case 0x4145b0u: goto label_4145b0;
        case 0x4145b4u: goto label_4145b4;
        case 0x4145b8u: goto label_4145b8;
        case 0x4145bcu: goto label_4145bc;
        case 0x4145c0u: goto label_4145c0;
        case 0x4145c4u: goto label_4145c4;
        case 0x4145c8u: goto label_4145c8;
        case 0x4145ccu: goto label_4145cc;
        case 0x4145d0u: goto label_4145d0;
        case 0x4145d4u: goto label_4145d4;
        case 0x4145d8u: goto label_4145d8;
        case 0x4145dcu: goto label_4145dc;
        case 0x4145e0u: goto label_4145e0;
        case 0x4145e4u: goto label_4145e4;
        case 0x4145e8u: goto label_4145e8;
        case 0x4145ecu: goto label_4145ec;
        case 0x4145f0u: goto label_4145f0;
        case 0x4145f4u: goto label_4145f4;
        case 0x4145f8u: goto label_4145f8;
        case 0x4145fcu: goto label_4145fc;
        case 0x414600u: goto label_414600;
        case 0x414604u: goto label_414604;
        case 0x414608u: goto label_414608;
        case 0x41460cu: goto label_41460c;
        case 0x414610u: goto label_414610;
        case 0x414614u: goto label_414614;
        case 0x414618u: goto label_414618;
        case 0x41461cu: goto label_41461c;
        case 0x414620u: goto label_414620;
        case 0x414624u: goto label_414624;
        case 0x414628u: goto label_414628;
        case 0x41462cu: goto label_41462c;
        case 0x414630u: goto label_414630;
        case 0x414634u: goto label_414634;
        case 0x414638u: goto label_414638;
        case 0x41463cu: goto label_41463c;
        case 0x414640u: goto label_414640;
        case 0x414644u: goto label_414644;
        case 0x414648u: goto label_414648;
        case 0x41464cu: goto label_41464c;
        case 0x414650u: goto label_414650;
        case 0x414654u: goto label_414654;
        case 0x414658u: goto label_414658;
        case 0x41465cu: goto label_41465c;
        case 0x414660u: goto label_414660;
        case 0x414664u: goto label_414664;
        case 0x414668u: goto label_414668;
        case 0x41466cu: goto label_41466c;
        case 0x414670u: goto label_414670;
        case 0x414674u: goto label_414674;
        case 0x414678u: goto label_414678;
        case 0x41467cu: goto label_41467c;
        case 0x414680u: goto label_414680;
        case 0x414684u: goto label_414684;
        case 0x414688u: goto label_414688;
        case 0x41468cu: goto label_41468c;
        case 0x414690u: goto label_414690;
        case 0x414694u: goto label_414694;
        case 0x414698u: goto label_414698;
        case 0x41469cu: goto label_41469c;
        case 0x4146a0u: goto label_4146a0;
        case 0x4146a4u: goto label_4146a4;
        case 0x4146a8u: goto label_4146a8;
        case 0x4146acu: goto label_4146ac;
        case 0x4146b0u: goto label_4146b0;
        case 0x4146b4u: goto label_4146b4;
        case 0x4146b8u: goto label_4146b8;
        case 0x4146bcu: goto label_4146bc;
        case 0x4146c0u: goto label_4146c0;
        case 0x4146c4u: goto label_4146c4;
        case 0x4146c8u: goto label_4146c8;
        case 0x4146ccu: goto label_4146cc;
        case 0x4146d0u: goto label_4146d0;
        case 0x4146d4u: goto label_4146d4;
        case 0x4146d8u: goto label_4146d8;
        case 0x4146dcu: goto label_4146dc;
        case 0x4146e0u: goto label_4146e0;
        case 0x4146e4u: goto label_4146e4;
        case 0x4146e8u: goto label_4146e8;
        case 0x4146ecu: goto label_4146ec;
        case 0x4146f0u: goto label_4146f0;
        case 0x4146f4u: goto label_4146f4;
        case 0x4146f8u: goto label_4146f8;
        case 0x4146fcu: goto label_4146fc;
        case 0x414700u: goto label_414700;
        case 0x414704u: goto label_414704;
        case 0x414708u: goto label_414708;
        case 0x41470cu: goto label_41470c;
        case 0x414710u: goto label_414710;
        case 0x414714u: goto label_414714;
        case 0x414718u: goto label_414718;
        case 0x41471cu: goto label_41471c;
        case 0x414720u: goto label_414720;
        case 0x414724u: goto label_414724;
        case 0x414728u: goto label_414728;
        case 0x41472cu: goto label_41472c;
        case 0x414730u: goto label_414730;
        case 0x414734u: goto label_414734;
        case 0x414738u: goto label_414738;
        case 0x41473cu: goto label_41473c;
        case 0x414740u: goto label_414740;
        case 0x414744u: goto label_414744;
        case 0x414748u: goto label_414748;
        case 0x41474cu: goto label_41474c;
        case 0x414750u: goto label_414750;
        case 0x414754u: goto label_414754;
        case 0x414758u: goto label_414758;
        case 0x41475cu: goto label_41475c;
        case 0x414760u: goto label_414760;
        case 0x414764u: goto label_414764;
        case 0x414768u: goto label_414768;
        case 0x41476cu: goto label_41476c;
        case 0x414770u: goto label_414770;
        case 0x414774u: goto label_414774;
        case 0x414778u: goto label_414778;
        case 0x41477cu: goto label_41477c;
        case 0x414780u: goto label_414780;
        case 0x414784u: goto label_414784;
        case 0x414788u: goto label_414788;
        case 0x41478cu: goto label_41478c;
        case 0x414790u: goto label_414790;
        case 0x414794u: goto label_414794;
        case 0x414798u: goto label_414798;
        case 0x41479cu: goto label_41479c;
        case 0x4147a0u: goto label_4147a0;
        case 0x4147a4u: goto label_4147a4;
        case 0x4147a8u: goto label_4147a8;
        case 0x4147acu: goto label_4147ac;
        case 0x4147b0u: goto label_4147b0;
        case 0x4147b4u: goto label_4147b4;
        case 0x4147b8u: goto label_4147b8;
        case 0x4147bcu: goto label_4147bc;
        case 0x4147c0u: goto label_4147c0;
        case 0x4147c4u: goto label_4147c4;
        case 0x4147c8u: goto label_4147c8;
        case 0x4147ccu: goto label_4147cc;
        case 0x4147d0u: goto label_4147d0;
        case 0x4147d4u: goto label_4147d4;
        case 0x4147d8u: goto label_4147d8;
        case 0x4147dcu: goto label_4147dc;
        case 0x4147e0u: goto label_4147e0;
        case 0x4147e4u: goto label_4147e4;
        case 0x4147e8u: goto label_4147e8;
        case 0x4147ecu: goto label_4147ec;
        case 0x4147f0u: goto label_4147f0;
        case 0x4147f4u: goto label_4147f4;
        case 0x4147f8u: goto label_4147f8;
        case 0x4147fcu: goto label_4147fc;
        case 0x414800u: goto label_414800;
        case 0x414804u: goto label_414804;
        case 0x414808u: goto label_414808;
        case 0x41480cu: goto label_41480c;
        case 0x414810u: goto label_414810;
        case 0x414814u: goto label_414814;
        case 0x414818u: goto label_414818;
        case 0x41481cu: goto label_41481c;
        case 0x414820u: goto label_414820;
        case 0x414824u: goto label_414824;
        case 0x414828u: goto label_414828;
        case 0x41482cu: goto label_41482c;
        case 0x414830u: goto label_414830;
        case 0x414834u: goto label_414834;
        case 0x414838u: goto label_414838;
        case 0x41483cu: goto label_41483c;
        default: break;
    }

    ctx->pc = 0x4145b0u;

label_4145b0:
    // 0x4145b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4145b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4145b4:
    // 0x4145b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4145b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4145b8:
    // 0x4145b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4145b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4145bc:
    // 0x4145bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4145bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4145c0:
    // 0x4145c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4145c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4145c4:
    // 0x4145c4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4145c8:
    if (ctx->pc == 0x4145C8u) {
        ctx->pc = 0x4145C8u;
            // 0x4145c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4145CCu;
        goto label_4145cc;
    }
    ctx->pc = 0x4145C4u;
    {
        const bool branch_taken_0x4145c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4145C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4145C4u;
            // 0x4145c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145c4) {
            ctx->pc = 0x4146F8u;
            goto label_4146f8;
        }
    }
    ctx->pc = 0x4145CCu;
label_4145cc:
    // 0x4145cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4145ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4145d0:
    // 0x4145d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4145d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4145d4:
    // 0x4145d4: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x4145d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
label_4145d8:
    // 0x4145d8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x4145d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_4145dc:
    // 0x4145dc: 0x2442b158  addiu       $v0, $v0, -0x4EA8
    ctx->pc = 0x4145dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947160));
label_4145e0:
    // 0x4145e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4145e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4145e4:
    // 0x4145e4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4145e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4145e8:
    // 0x4145e8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4145e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4145ec:
    // 0x4145ec: 0xc0407c0  jal         func_101F00
label_4145f0:
    if (ctx->pc == 0x4145F0u) {
        ctx->pc = 0x4145F0u;
            // 0x4145f0: 0x24a54710  addiu       $a1, $a1, 0x4710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18192));
        ctx->pc = 0x4145F4u;
        goto label_4145f4;
    }
    ctx->pc = 0x4145ECu;
    SET_GPR_U32(ctx, 31, 0x4145F4u);
    ctx->pc = 0x4145F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4145ECu;
            // 0x4145f0: 0x24a54710  addiu       $a1, $a1, 0x4710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4145F4u; }
        if (ctx->pc != 0x4145F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4145F4u; }
        if (ctx->pc != 0x4145F4u) { return; }
    }
    ctx->pc = 0x4145F4u;
label_4145f4:
    // 0x4145f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4145f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4145f8:
    // 0x4145f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4145fc:
    if (ctx->pc == 0x4145FCu) {
        ctx->pc = 0x4145FCu;
            // 0x4145fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x414600u;
        goto label_414600;
    }
    ctx->pc = 0x4145F8u;
    {
        const bool branch_taken_0x4145f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4145f8) {
            ctx->pc = 0x4145FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4145F8u;
            // 0x4145fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41460Cu;
            goto label_41460c;
        }
    }
    ctx->pc = 0x414600u;
label_414600:
    // 0x414600: 0xc07507c  jal         func_1D41F0
label_414604:
    if (ctx->pc == 0x414604u) {
        ctx->pc = 0x414604u;
            // 0x414604: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x414608u;
        goto label_414608;
    }
    ctx->pc = 0x414600u;
    SET_GPR_U32(ctx, 31, 0x414608u);
    ctx->pc = 0x414604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414600u;
            // 0x414604: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414608u; }
        if (ctx->pc != 0x414608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414608u; }
        if (ctx->pc != 0x414608u) { return; }
    }
    ctx->pc = 0x414608u;
label_414608:
    // 0x414608: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x414608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_41460c:
    // 0x41460c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_414610:
    if (ctx->pc == 0x414610u) {
        ctx->pc = 0x414610u;
            // 0x414610: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x414614u;
        goto label_414614;
    }
    ctx->pc = 0x41460Cu;
    {
        const bool branch_taken_0x41460c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41460c) {
            ctx->pc = 0x414610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41460Cu;
            // 0x414610: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41463Cu;
            goto label_41463c;
        }
    }
    ctx->pc = 0x414614u;
label_414614:
    // 0x414614: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_414618:
    if (ctx->pc == 0x414618u) {
        ctx->pc = 0x41461Cu;
        goto label_41461c;
    }
    ctx->pc = 0x414614u;
    {
        const bool branch_taken_0x414614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x414614) {
            ctx->pc = 0x414638u;
            goto label_414638;
        }
    }
    ctx->pc = 0x41461Cu;
label_41461c:
    // 0x41461c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_414620:
    if (ctx->pc == 0x414620u) {
        ctx->pc = 0x414624u;
        goto label_414624;
    }
    ctx->pc = 0x41461Cu;
    {
        const bool branch_taken_0x41461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41461c) {
            ctx->pc = 0x414638u;
            goto label_414638;
        }
    }
    ctx->pc = 0x414624u;
label_414624:
    // 0x414624: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x414624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_414628:
    // 0x414628: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41462c:
    if (ctx->pc == 0x41462Cu) {
        ctx->pc = 0x414630u;
        goto label_414630;
    }
    ctx->pc = 0x414628u;
    {
        const bool branch_taken_0x414628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x414628) {
            ctx->pc = 0x414638u;
            goto label_414638;
        }
    }
    ctx->pc = 0x414630u;
label_414630:
    // 0x414630: 0xc0400a8  jal         func_1002A0
label_414634:
    if (ctx->pc == 0x414634u) {
        ctx->pc = 0x414638u;
        goto label_414638;
    }
    ctx->pc = 0x414630u;
    SET_GPR_U32(ctx, 31, 0x414638u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414638u; }
        if (ctx->pc != 0x414638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414638u; }
        if (ctx->pc != 0x414638u) { return; }
    }
    ctx->pc = 0x414638u;
label_414638:
    // 0x414638: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x414638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_41463c:
    // 0x41463c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_414640:
    if (ctx->pc == 0x414640u) {
        ctx->pc = 0x414640u;
            // 0x414640: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x414644u;
        goto label_414644;
    }
    ctx->pc = 0x41463Cu;
    {
        const bool branch_taken_0x41463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41463c) {
            ctx->pc = 0x414640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41463Cu;
            // 0x414640: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41466Cu;
            goto label_41466c;
        }
    }
    ctx->pc = 0x414644u;
label_414644:
    // 0x414644: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_414648:
    if (ctx->pc == 0x414648u) {
        ctx->pc = 0x41464Cu;
        goto label_41464c;
    }
    ctx->pc = 0x414644u;
    {
        const bool branch_taken_0x414644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x414644) {
            ctx->pc = 0x414668u;
            goto label_414668;
        }
    }
    ctx->pc = 0x41464Cu;
label_41464c:
    // 0x41464c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_414650:
    if (ctx->pc == 0x414650u) {
        ctx->pc = 0x414654u;
        goto label_414654;
    }
    ctx->pc = 0x41464Cu;
    {
        const bool branch_taken_0x41464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41464c) {
            ctx->pc = 0x414668u;
            goto label_414668;
        }
    }
    ctx->pc = 0x414654u;
label_414654:
    // 0x414654: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x414654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_414658:
    // 0x414658: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41465c:
    if (ctx->pc == 0x41465Cu) {
        ctx->pc = 0x414660u;
        goto label_414660;
    }
    ctx->pc = 0x414658u;
    {
        const bool branch_taken_0x414658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x414658) {
            ctx->pc = 0x414668u;
            goto label_414668;
        }
    }
    ctx->pc = 0x414660u;
label_414660:
    // 0x414660: 0xc0400a8  jal         func_1002A0
label_414664:
    if (ctx->pc == 0x414664u) {
        ctx->pc = 0x414668u;
        goto label_414668;
    }
    ctx->pc = 0x414660u;
    SET_GPR_U32(ctx, 31, 0x414668u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414668u; }
        if (ctx->pc != 0x414668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414668u; }
        if (ctx->pc != 0x414668u) { return; }
    }
    ctx->pc = 0x414668u;
label_414668:
    // 0x414668: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x414668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_41466c:
    // 0x41466c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_414670:
    if (ctx->pc == 0x414670u) {
        ctx->pc = 0x414674u;
        goto label_414674;
    }
    ctx->pc = 0x41466Cu;
    {
        const bool branch_taken_0x41466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41466c) {
            ctx->pc = 0x414688u;
            goto label_414688;
        }
    }
    ctx->pc = 0x414674u;
label_414674:
    // 0x414674: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_414678:
    // 0x414678: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x414678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41467c:
    // 0x41467c: 0x2463b108  addiu       $v1, $v1, -0x4EF8
    ctx->pc = 0x41467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947080));
label_414680:
    // 0x414680: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x414680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_414684:
    // 0x414684: 0xac403e90  sw          $zero, 0x3E90($v0)
    ctx->pc = 0x414684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16016), GPR_U32(ctx, 0));
label_414688:
    // 0x414688: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_41468c:
    if (ctx->pc == 0x41468Cu) {
        ctx->pc = 0x41468Cu;
            // 0x41468c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x414690u;
        goto label_414690;
    }
    ctx->pc = 0x414688u;
    {
        const bool branch_taken_0x414688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x414688) {
            ctx->pc = 0x41468Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414688u;
            // 0x41468c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4146E4u;
            goto label_4146e4;
        }
    }
    ctx->pc = 0x414690u;
label_414690:
    // 0x414690: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x414690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_414694:
    // 0x414694: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x414694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_414698:
    // 0x414698: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x414698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_41469c:
    // 0x41469c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x41469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4146a0:
    // 0x4146a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4146a4:
    if (ctx->pc == 0x4146A4u) {
        ctx->pc = 0x4146A4u;
            // 0x4146a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4146A8u;
        goto label_4146a8;
    }
    ctx->pc = 0x4146A0u;
    {
        const bool branch_taken_0x4146a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4146a0) {
            ctx->pc = 0x4146A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4146A0u;
            // 0x4146a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4146BCu;
            goto label_4146bc;
        }
    }
    ctx->pc = 0x4146A8u;
label_4146a8:
    // 0x4146a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4146a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4146ac:
    // 0x4146ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4146acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4146b0:
    // 0x4146b0: 0x320f809  jalr        $t9
label_4146b4:
    if (ctx->pc == 0x4146B4u) {
        ctx->pc = 0x4146B4u;
            // 0x4146b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4146B8u;
        goto label_4146b8;
    }
    ctx->pc = 0x4146B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4146B8u);
        ctx->pc = 0x4146B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4146B0u;
            // 0x4146b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4146B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4146B8u; }
            if (ctx->pc != 0x4146B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4146B8u;
label_4146b8:
    // 0x4146b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4146b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4146bc:
    // 0x4146bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4146c0:
    if (ctx->pc == 0x4146C0u) {
        ctx->pc = 0x4146C0u;
            // 0x4146c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4146C4u;
        goto label_4146c4;
    }
    ctx->pc = 0x4146BCu;
    {
        const bool branch_taken_0x4146bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4146bc) {
            ctx->pc = 0x4146C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4146BCu;
            // 0x4146c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4146D8u;
            goto label_4146d8;
        }
    }
    ctx->pc = 0x4146C4u;
label_4146c4:
    // 0x4146c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4146c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4146c8:
    // 0x4146c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4146c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4146cc:
    // 0x4146cc: 0x320f809  jalr        $t9
label_4146d0:
    if (ctx->pc == 0x4146D0u) {
        ctx->pc = 0x4146D0u;
            // 0x4146d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4146D4u;
        goto label_4146d4;
    }
    ctx->pc = 0x4146CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4146D4u);
        ctx->pc = 0x4146D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4146CCu;
            // 0x4146d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4146D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4146D4u; }
            if (ctx->pc != 0x4146D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4146D4u;
label_4146d4:
    // 0x4146d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4146d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4146d8:
    // 0x4146d8: 0xc075bf8  jal         func_1D6FE0
label_4146dc:
    if (ctx->pc == 0x4146DCu) {
        ctx->pc = 0x4146DCu;
            // 0x4146dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4146E0u;
        goto label_4146e0;
    }
    ctx->pc = 0x4146D8u;
    SET_GPR_U32(ctx, 31, 0x4146E0u);
    ctx->pc = 0x4146DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4146D8u;
            // 0x4146dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4146E0u; }
        if (ctx->pc != 0x4146E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4146E0u; }
        if (ctx->pc != 0x4146E0u) { return; }
    }
    ctx->pc = 0x4146E0u;
label_4146e0:
    // 0x4146e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4146e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4146e4:
    // 0x4146e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4146e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4146e8:
    // 0x4146e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4146ec:
    if (ctx->pc == 0x4146ECu) {
        ctx->pc = 0x4146ECu;
            // 0x4146ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4146F0u;
        goto label_4146f0;
    }
    ctx->pc = 0x4146E8u;
    {
        const bool branch_taken_0x4146e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4146e8) {
            ctx->pc = 0x4146ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4146E8u;
            // 0x4146ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4146FCu;
            goto label_4146fc;
        }
    }
    ctx->pc = 0x4146F0u;
label_4146f0:
    // 0x4146f0: 0xc0400a8  jal         func_1002A0
label_4146f4:
    if (ctx->pc == 0x4146F4u) {
        ctx->pc = 0x4146F4u;
            // 0x4146f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4146F8u;
        goto label_4146f8;
    }
    ctx->pc = 0x4146F0u;
    SET_GPR_U32(ctx, 31, 0x4146F8u);
    ctx->pc = 0x4146F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4146F0u;
            // 0x4146f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4146F8u; }
        if (ctx->pc != 0x4146F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4146F8u; }
        if (ctx->pc != 0x4146F8u) { return; }
    }
    ctx->pc = 0x4146F8u;
label_4146f8:
    // 0x4146f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4146f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4146fc:
    // 0x4146fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4146fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_414700:
    // 0x414700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414704:
    // 0x414704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_414708:
    // 0x414708: 0x3e00008  jr          $ra
label_41470c:
    if (ctx->pc == 0x41470Cu) {
        ctx->pc = 0x41470Cu;
            // 0x41470c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x414710u;
        goto label_414710;
    }
    ctx->pc = 0x414708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414708u;
            // 0x41470c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414710u;
label_414710:
    // 0x414710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x414710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_414714:
    // 0x414714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x414714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_414718:
    // 0x414718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x414718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41471c:
    // 0x41471c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_414720:
    // 0x414720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x414720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414724:
    // 0x414724: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
label_414728:
    if (ctx->pc == 0x414728u) {
        ctx->pc = 0x414728u;
            // 0x414728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41472Cu;
        goto label_41472c;
    }
    ctx->pc = 0x414724u;
    {
        const bool branch_taken_0x414724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x414728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414724u;
            // 0x414728: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414724) {
            ctx->pc = 0x414820u;
            goto label_414820;
        }
    }
    ctx->pc = 0x41472Cu;
label_41472c:
    // 0x41472c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_414730:
    // 0x414730: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_414734:
    // 0x414734: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x414734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_414738:
    // 0x414738: 0x2463b1cc  addiu       $v1, $v1, -0x4E34
    ctx->pc = 0x414738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947276));
label_41473c:
    // 0x41473c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x41473cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_414740:
    // 0x414740: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_414744:
    // 0x414744: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x414744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_414748:
    // 0x414748: 0x2442b20c  addiu       $v0, $v0, -0x4DF4
    ctx->pc = 0x414748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947340));
label_41474c:
    // 0x41474c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x41474cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_414750:
    // 0x414750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x414750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_414754:
    // 0x414754: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x414754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_414758:
    // 0x414758: 0x320f809  jalr        $t9
label_41475c:
    if (ctx->pc == 0x41475Cu) {
        ctx->pc = 0x414760u;
        goto label_414760;
    }
    ctx->pc = 0x414758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x414760u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x414760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x414760u; }
            if (ctx->pc != 0x414760u) { return; }
        }
        }
    }
    ctx->pc = 0x414760u;
label_414760:
    // 0x414760: 0x262402bc  addiu       $a0, $s1, 0x2BC
    ctx->pc = 0x414760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_414764:
    // 0x414764: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_414768:
    if (ctx->pc == 0x414768u) {
        ctx->pc = 0x41476Cu;
        goto label_41476c;
    }
    ctx->pc = 0x414764u;
    {
        const bool branch_taken_0x414764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x414764) {
            ctx->pc = 0x4147B4u;
            goto label_4147b4;
        }
    }
    ctx->pc = 0x41476Cu;
label_41476c:
    // 0x41476c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_414770:
    // 0x414770: 0x2442b290  addiu       $v0, $v0, -0x4D70
    ctx->pc = 0x414770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
label_414774:
    // 0x414774: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_414778:
    if (ctx->pc == 0x414778u) {
        ctx->pc = 0x414778u;
            // 0x414778: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->pc = 0x41477Cu;
        goto label_41477c;
    }
    ctx->pc = 0x414774u;
    {
        const bool branch_taken_0x414774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414774u;
            // 0x414778: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414774) {
            ctx->pc = 0x4147B4u;
            goto label_4147b4;
        }
    }
    ctx->pc = 0x41477Cu;
label_41477c:
    // 0x41477c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_414780:
    // 0x414780: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x414780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_414784:
    // 0x414784: 0xc0d37dc  jal         func_34DF70
label_414788:
    if (ctx->pc == 0x414788u) {
        ctx->pc = 0x414788u;
            // 0x414788: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->pc = 0x41478Cu;
        goto label_41478c;
    }
    ctx->pc = 0x414784u;
    SET_GPR_U32(ctx, 31, 0x41478Cu);
    ctx->pc = 0x414788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414784u;
            // 0x414788: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41478Cu; }
        if (ctx->pc != 0x41478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41478Cu; }
        if (ctx->pc != 0x41478Cu) { return; }
    }
    ctx->pc = 0x41478Cu;
label_41478c:
    // 0x41478c: 0x262302bc  addiu       $v1, $s1, 0x2BC
    ctx->pc = 0x41478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_414790:
    // 0x414790: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_414794:
    if (ctx->pc == 0x414794u) {
        ctx->pc = 0x414798u;
        goto label_414798;
    }
    ctx->pc = 0x414790u;
    {
        const bool branch_taken_0x414790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x414790) {
            ctx->pc = 0x4147B4u;
            goto label_4147b4;
        }
    }
    ctx->pc = 0x414798u;
label_414798:
    // 0x414798: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x414798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41479c:
    // 0x41479c: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x41479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4147a0:
    // 0x4147a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4147a4:
    if (ctx->pc == 0x4147A4u) {
        ctx->pc = 0x4147A4u;
            // 0x4147a4: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->pc = 0x4147A8u;
        goto label_4147a8;
    }
    ctx->pc = 0x4147A0u;
    {
        const bool branch_taken_0x4147a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4147A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4147A0u;
            // 0x4147a4: 0xae2202bc  sw          $v0, 0x2BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4147a0) {
            ctx->pc = 0x4147B4u;
            goto label_4147b4;
        }
    }
    ctx->pc = 0x4147A8u;
label_4147a8:
    // 0x4147a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4147a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4147ac:
    // 0x4147ac: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4147acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4147b0:
    // 0x4147b0: 0xae2202bc  sw          $v0, 0x2BC($s1)
    ctx->pc = 0x4147b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 2));
label_4147b4:
    // 0x4147b4: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_4147b8:
    if (ctx->pc == 0x4147B8u) {
        ctx->pc = 0x4147B8u;
            // 0x4147b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4147BCu;
        goto label_4147bc;
    }
    ctx->pc = 0x4147B4u;
    {
        const bool branch_taken_0x4147b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4147b4) {
            ctx->pc = 0x4147B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4147B4u;
            // 0x4147b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41480Cu;
            goto label_41480c;
        }
    }
    ctx->pc = 0x4147BCu;
label_4147bc:
    // 0x4147bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4147bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4147c0:
    // 0x4147c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4147c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4147c4:
    // 0x4147c4: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x4147c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
label_4147c8:
    // 0x4147c8: 0x246381bc  addiu       $v1, $v1, -0x7E44
    ctx->pc = 0x4147c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934972));
label_4147cc:
    // 0x4147cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4147ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4147d0:
    // 0x4147d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4147d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4147d4:
    // 0x4147d4: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x4147d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_4147d8:
    // 0x4147d8: 0x244281fc  addiu       $v0, $v0, -0x7E04
    ctx->pc = 0x4147d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935036));
label_4147dc:
    // 0x4147dc: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x4147dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_4147e0:
    // 0x4147e0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4147e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4147e4:
    // 0x4147e4: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x4147e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_4147e8:
    // 0x4147e8: 0x320f809  jalr        $t9
label_4147ec:
    if (ctx->pc == 0x4147ECu) {
        ctx->pc = 0x4147ECu;
            // 0x4147ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4147F0u;
        goto label_4147f0;
    }
    ctx->pc = 0x4147E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4147F0u);
        ctx->pc = 0x4147ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4147E8u;
            // 0x4147ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4147F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4147F0u; }
            if (ctx->pc != 0x4147F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4147F0u;
label_4147f0:
    // 0x4147f0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x4147f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_4147f4:
    // 0x4147f4: 0xc0d5bc0  jal         func_356F00
label_4147f8:
    if (ctx->pc == 0x4147F8u) {
        ctx->pc = 0x4147F8u;
            // 0x4147f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4147FCu;
        goto label_4147fc;
    }
    ctx->pc = 0x4147F4u;
    SET_GPR_U32(ctx, 31, 0x4147FCu);
    ctx->pc = 0x4147F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4147F4u;
            // 0x4147f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356F00u;
    if (runtime->hasFunction(0x356F00u)) {
        auto targetFn = runtime->lookupFunction(0x356F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4147FCu; }
        if (ctx->pc != 0x4147FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356F00_0x356f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4147FCu; }
        if (ctx->pc != 0x4147FCu) { return; }
    }
    ctx->pc = 0x4147FCu;
label_4147fc:
    // 0x4147fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4147fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414800:
    // 0x414800: 0xc105210  jal         func_414840
label_414804:
    if (ctx->pc == 0x414804u) {
        ctx->pc = 0x414804u;
            // 0x414804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414808u;
        goto label_414808;
    }
    ctx->pc = 0x414800u;
    SET_GPR_U32(ctx, 31, 0x414808u);
    ctx->pc = 0x414804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414800u;
            // 0x414804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414840u;
    if (runtime->hasFunction(0x414840u)) {
        auto targetFn = runtime->lookupFunction(0x414840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414808u; }
        if (ctx->pc != 0x414808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414840_0x414840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414808u; }
        if (ctx->pc != 0x414808u) { return; }
    }
    ctx->pc = 0x414808u;
label_414808:
    // 0x414808: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x414808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41480c:
    // 0x41480c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41480cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_414810:
    // 0x414810: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_414814:
    if (ctx->pc == 0x414814u) {
        ctx->pc = 0x414814u;
            // 0x414814: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414818u;
        goto label_414818;
    }
    ctx->pc = 0x414810u;
    {
        const bool branch_taken_0x414810 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x414810) {
            ctx->pc = 0x414814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414810u;
            // 0x414814: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414824u;
            goto label_414824;
        }
    }
    ctx->pc = 0x414818u;
label_414818:
    // 0x414818: 0xc0400a8  jal         func_1002A0
label_41481c:
    if (ctx->pc == 0x41481Cu) {
        ctx->pc = 0x41481Cu;
            // 0x41481c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414820u;
        goto label_414820;
    }
    ctx->pc = 0x414818u;
    SET_GPR_U32(ctx, 31, 0x414820u);
    ctx->pc = 0x41481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414818u;
            // 0x41481c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414820u; }
        if (ctx->pc != 0x414820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414820u; }
        if (ctx->pc != 0x414820u) { return; }
    }
    ctx->pc = 0x414820u;
label_414820:
    // 0x414820: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x414820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414824:
    // 0x414824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x414824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_414828:
    // 0x414828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41482c:
    // 0x41482c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41482cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_414830:
    // 0x414830: 0x3e00008  jr          $ra
label_414834:
    if (ctx->pc == 0x414834u) {
        ctx->pc = 0x414834u;
            // 0x414834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x414838u;
        goto label_414838;
    }
    ctx->pc = 0x414830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414830u;
            // 0x414834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414838u;
label_414838:
    // 0x414838: 0x0  nop
    ctx->pc = 0x414838u;
    // NOP
label_41483c:
    // 0x41483c: 0x0  nop
    ctx->pc = 0x41483cu;
    // NOP
}
