#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333680
// Address: 0x333680 - 0x333870
void sub_00333680_0x333680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333680_0x333680");
#endif

    switch (ctx->pc) {
        case 0x333680u: goto label_333680;
        case 0x333684u: goto label_333684;
        case 0x333688u: goto label_333688;
        case 0x33368cu: goto label_33368c;
        case 0x333690u: goto label_333690;
        case 0x333694u: goto label_333694;
        case 0x333698u: goto label_333698;
        case 0x33369cu: goto label_33369c;
        case 0x3336a0u: goto label_3336a0;
        case 0x3336a4u: goto label_3336a4;
        case 0x3336a8u: goto label_3336a8;
        case 0x3336acu: goto label_3336ac;
        case 0x3336b0u: goto label_3336b0;
        case 0x3336b4u: goto label_3336b4;
        case 0x3336b8u: goto label_3336b8;
        case 0x3336bcu: goto label_3336bc;
        case 0x3336c0u: goto label_3336c0;
        case 0x3336c4u: goto label_3336c4;
        case 0x3336c8u: goto label_3336c8;
        case 0x3336ccu: goto label_3336cc;
        case 0x3336d0u: goto label_3336d0;
        case 0x3336d4u: goto label_3336d4;
        case 0x3336d8u: goto label_3336d8;
        case 0x3336dcu: goto label_3336dc;
        case 0x3336e0u: goto label_3336e0;
        case 0x3336e4u: goto label_3336e4;
        case 0x3336e8u: goto label_3336e8;
        case 0x3336ecu: goto label_3336ec;
        case 0x3336f0u: goto label_3336f0;
        case 0x3336f4u: goto label_3336f4;
        case 0x3336f8u: goto label_3336f8;
        case 0x3336fcu: goto label_3336fc;
        case 0x333700u: goto label_333700;
        case 0x333704u: goto label_333704;
        case 0x333708u: goto label_333708;
        case 0x33370cu: goto label_33370c;
        case 0x333710u: goto label_333710;
        case 0x333714u: goto label_333714;
        case 0x333718u: goto label_333718;
        case 0x33371cu: goto label_33371c;
        case 0x333720u: goto label_333720;
        case 0x333724u: goto label_333724;
        case 0x333728u: goto label_333728;
        case 0x33372cu: goto label_33372c;
        case 0x333730u: goto label_333730;
        case 0x333734u: goto label_333734;
        case 0x333738u: goto label_333738;
        case 0x33373cu: goto label_33373c;
        case 0x333740u: goto label_333740;
        case 0x333744u: goto label_333744;
        case 0x333748u: goto label_333748;
        case 0x33374cu: goto label_33374c;
        case 0x333750u: goto label_333750;
        case 0x333754u: goto label_333754;
        case 0x333758u: goto label_333758;
        case 0x33375cu: goto label_33375c;
        case 0x333760u: goto label_333760;
        case 0x333764u: goto label_333764;
        case 0x333768u: goto label_333768;
        case 0x33376cu: goto label_33376c;
        case 0x333770u: goto label_333770;
        case 0x333774u: goto label_333774;
        case 0x333778u: goto label_333778;
        case 0x33377cu: goto label_33377c;
        case 0x333780u: goto label_333780;
        case 0x333784u: goto label_333784;
        case 0x333788u: goto label_333788;
        case 0x33378cu: goto label_33378c;
        case 0x333790u: goto label_333790;
        case 0x333794u: goto label_333794;
        case 0x333798u: goto label_333798;
        case 0x33379cu: goto label_33379c;
        case 0x3337a0u: goto label_3337a0;
        case 0x3337a4u: goto label_3337a4;
        case 0x3337a8u: goto label_3337a8;
        case 0x3337acu: goto label_3337ac;
        case 0x3337b0u: goto label_3337b0;
        case 0x3337b4u: goto label_3337b4;
        case 0x3337b8u: goto label_3337b8;
        case 0x3337bcu: goto label_3337bc;
        case 0x3337c0u: goto label_3337c0;
        case 0x3337c4u: goto label_3337c4;
        case 0x3337c8u: goto label_3337c8;
        case 0x3337ccu: goto label_3337cc;
        case 0x3337d0u: goto label_3337d0;
        case 0x3337d4u: goto label_3337d4;
        case 0x3337d8u: goto label_3337d8;
        case 0x3337dcu: goto label_3337dc;
        case 0x3337e0u: goto label_3337e0;
        case 0x3337e4u: goto label_3337e4;
        case 0x3337e8u: goto label_3337e8;
        case 0x3337ecu: goto label_3337ec;
        case 0x3337f0u: goto label_3337f0;
        case 0x3337f4u: goto label_3337f4;
        case 0x3337f8u: goto label_3337f8;
        case 0x3337fcu: goto label_3337fc;
        case 0x333800u: goto label_333800;
        case 0x333804u: goto label_333804;
        case 0x333808u: goto label_333808;
        case 0x33380cu: goto label_33380c;
        case 0x333810u: goto label_333810;
        case 0x333814u: goto label_333814;
        case 0x333818u: goto label_333818;
        case 0x33381cu: goto label_33381c;
        case 0x333820u: goto label_333820;
        case 0x333824u: goto label_333824;
        case 0x333828u: goto label_333828;
        case 0x33382cu: goto label_33382c;
        case 0x333830u: goto label_333830;
        case 0x333834u: goto label_333834;
        case 0x333838u: goto label_333838;
        case 0x33383cu: goto label_33383c;
        case 0x333840u: goto label_333840;
        case 0x333844u: goto label_333844;
        case 0x333848u: goto label_333848;
        case 0x33384cu: goto label_33384c;
        case 0x333850u: goto label_333850;
        case 0x333854u: goto label_333854;
        case 0x333858u: goto label_333858;
        case 0x33385cu: goto label_33385c;
        case 0x333860u: goto label_333860;
        case 0x333864u: goto label_333864;
        case 0x333868u: goto label_333868;
        case 0x33386cu: goto label_33386c;
        default: break;
    }

    ctx->pc = 0x333680u;

label_333680:
    // 0x333680: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x333680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_333684:
    // 0x333684: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333688:
    // 0x333688: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x333688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33368c:
    // 0x33368c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x33368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_333690:
    // 0x333690: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x333690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_333694:
    // 0x333694: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x333694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_333698:
    // 0x333698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33369c:
    // 0x33369c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33369cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3336a0:
    // 0x3336a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3336a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3336a4:
    // 0x3336a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3336a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3336a8:
    // 0x3336a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3336a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3336ac:
    // 0x3336ac: 0x8c427378  lw          $v0, 0x7378($v0)
    ctx->pc = 0x3336acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_3336b0:
    // 0x3336b0: 0xc0cd4bc  jal         func_3352F0
label_3336b4:
    if (ctx->pc == 0x3336B4u) {
        ctx->pc = 0x3336B4u;
            // 0x3336b4: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x3336B8u;
        goto label_3336b8;
    }
    ctx->pc = 0x3336B0u;
    SET_GPR_U32(ctx, 31, 0x3336B8u);
    ctx->pc = 0x3336B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3336B0u;
            // 0x3336b4: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3352F0u;
    if (runtime->hasFunction(0x3352F0u)) {
        auto targetFn = runtime->lookupFunction(0x3352F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336B8u; }
        if (ctx->pc != 0x3336B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003352F0_0x3352f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336B8u; }
        if (ctx->pc != 0x3336B8u) { return; }
    }
    ctx->pc = 0x3336B8u;
label_3336b8:
    // 0x3336b8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3336b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3336bc:
    // 0x3336bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3336bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3336c0:
    // 0x3336c0: 0x2484f2d0  addiu       $a0, $a0, -0xD30
    ctx->pc = 0x3336c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963920));
label_3336c4:
    // 0x3336c4: 0xc04a576  jal         func_1295D8
label_3336c8:
    if (ctx->pc == 0x3336C8u) {
        ctx->pc = 0x3336C8u;
            // 0x3336c8: 0x24060284  addiu       $a2, $zero, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
        ctx->pc = 0x3336CCu;
        goto label_3336cc;
    }
    ctx->pc = 0x3336C4u;
    SET_GPR_U32(ctx, 31, 0x3336CCu);
    ctx->pc = 0x3336C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3336C4u;
            // 0x3336c8: 0x24060284  addiu       $a2, $zero, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336CCu; }
        if (ctx->pc != 0x3336CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336CCu; }
        if (ctx->pc != 0x3336CCu) { return; }
    }
    ctx->pc = 0x3336CCu;
label_3336cc:
    // 0x3336cc: 0xae6007c0  sw          $zero, 0x7C0($s3)
    ctx->pc = 0x3336ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1984), GPR_U32(ctx, 0));
label_3336d0:
    // 0x3336d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3336d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3336d4:
    // 0x3336d4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3336d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3336d8:
    // 0x3336d8: 0x92220758  lbu         $v0, 0x758($s1)
    ctx->pc = 0x3336d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1880)));
label_3336dc:
    // 0x3336dc: 0x92240759  lbu         $a0, 0x759($s1)
    ctx->pc = 0x3336dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1881)));
label_3336e0:
    // 0x3336e0: 0xc078d40  jal         func_1E3500
label_3336e4:
    if (ctx->pc == 0x3336E4u) {
        ctx->pc = 0x3336E4u;
            // 0x3336e4: 0x3045001f  andi        $a1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->pc = 0x3336E8u;
        goto label_3336e8;
    }
    ctx->pc = 0x3336E0u;
    SET_GPR_U32(ctx, 31, 0x3336E8u);
    ctx->pc = 0x3336E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3336E0u;
            // 0x3336e4: 0x3045001f  andi        $a1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3500u;
    if (runtime->hasFunction(0x1E3500u)) {
        auto targetFn = runtime->lookupFunction(0x1E3500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336E8u; }
        if (ctx->pc != 0x3336E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3500_0x1e3500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336E8u; }
        if (ctx->pc != 0x3336E8u) { return; }
    }
    ctx->pc = 0x3336E8u;
label_3336e8:
    // 0x3336e8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x3336e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3336ec:
    // 0x3336ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3336ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3336f0:
    // 0x3336f0: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_3336f4:
    if (ctx->pc == 0x3336F4u) {
        ctx->pc = 0x3336F8u;
        goto label_3336f8;
    }
    ctx->pc = 0x3336F0u;
    {
        const bool branch_taken_0x3336f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3336f0) {
            ctx->pc = 0x333738u;
            goto label_333738;
        }
    }
    ctx->pc = 0x3336F8u;
label_3336f8:
    // 0x3336f8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x3336f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_3336fc:
    // 0x3336fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3336fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_333700:
    // 0x333700: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x333700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_333704:
    // 0x333704: 0xc0cd2e8  jal         func_334BA0
label_333708:
    if (ctx->pc == 0x333708u) {
        ctx->pc = 0x333708u;
            // 0x333708: 0xafb00088  sw          $s0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
        ctx->pc = 0x33370Cu;
        goto label_33370c;
    }
    ctx->pc = 0x333704u;
    SET_GPR_U32(ctx, 31, 0x33370Cu);
    ctx->pc = 0x333708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333704u;
            // 0x333708: 0xafb00088  sw          $s0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334BA0u;
    if (runtime->hasFunction(0x334BA0u)) {
        auto targetFn = runtime->lookupFunction(0x334BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33370Cu; }
        if (ctx->pc != 0x33370Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334BA0_0x334ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33370Cu; }
        if (ctx->pc != 0x33370Cu) { return; }
    }
    ctx->pc = 0x33370Cu;
label_33370c:
    // 0x33370c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_333710:
    // 0x333710: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x333710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_333714:
    // 0x333714: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_333718:
    if (ctx->pc == 0x333718u) {
        ctx->pc = 0x33371Cu;
        goto label_33371c;
    }
    ctx->pc = 0x333714u;
    {
        const bool branch_taken_0x333714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333714) {
            ctx->pc = 0x333768u;
            goto label_333768;
        }
    }
    ctx->pc = 0x33371Cu;
label_33371c:
    // 0x33371c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_333720:
    // 0x333720: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x333720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_333724:
    // 0x333724: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x333724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_333728:
    // 0x333728: 0xc0cd48c  jal         func_335230
label_33372c:
    if (ctx->pc == 0x33372Cu) {
        ctx->pc = 0x33372Cu;
            // 0x33372c: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->pc = 0x333730u;
        goto label_333730;
    }
    ctx->pc = 0x333728u;
    SET_GPR_U32(ctx, 31, 0x333730u);
    ctx->pc = 0x33372Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333728u;
            // 0x33372c: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335230u;
    if (runtime->hasFunction(0x335230u)) {
        auto targetFn = runtime->lookupFunction(0x335230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333730u; }
        if (ctx->pc != 0x333730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335230_0x335230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333730u; }
        if (ctx->pc != 0x333730u) { return; }
    }
    ctx->pc = 0x333730u;
label_333730:
    // 0x333730: 0x1000000d  b           . + 4 + (0xD << 2)
label_333734:
    if (ctx->pc == 0x333734u) {
        ctx->pc = 0x333738u;
        goto label_333738;
    }
    ctx->pc = 0x333730u;
    {
        const bool branch_taken_0x333730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333730) {
            ctx->pc = 0x333768u;
            goto label_333768;
        }
    }
    ctx->pc = 0x333738u;
label_333738:
    // 0x333738: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33373c:
    // 0x33373c: 0x8c42f550  lw          $v0, -0xAB0($v0)
    ctx->pc = 0x33373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964560)));
label_333740:
    // 0x333740: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_333744:
    if (ctx->pc == 0x333744u) {
        ctx->pc = 0x333748u;
        goto label_333748;
    }
    ctx->pc = 0x333740u;
    {
        const bool branch_taken_0x333740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333740) {
            ctx->pc = 0x333768u;
            goto label_333768;
        }
    }
    ctx->pc = 0x333748u;
label_333748:
    // 0x333748: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x333748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33374c:
    // 0x33374c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333750:
    // 0x333750: 0xa450f31c  sh          $s0, -0xCE4($v0)
    ctx->pc = 0x333750u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294963996), (uint16_t)GPR_U32(ctx, 16));
label_333754:
    // 0x333754: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333758:
    // 0x333758: 0xac43f550  sw          $v1, -0xAB0($v0)
    ctx->pc = 0x333758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964560), GPR_U32(ctx, 3));
label_33375c:
    // 0x33375c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333760:
    // 0x333760: 0xae6207c0  sw          $v0, 0x7C0($s3)
    ctx->pc = 0x333760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1984), GPR_U32(ctx, 2));
label_333764:
    // 0x333764: 0x0  nop
    ctx->pc = 0x333764u;
    // NOP
label_333768:
    // 0x333768: 0x8e62077c  lw          $v0, 0x77C($s3)
    ctx->pc = 0x333768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
label_33376c:
    // 0x33376c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33376cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_333770:
    // 0x333770: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x333770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_333774:
    // 0x333774: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_333778:
    if (ctx->pc == 0x333778u) {
        ctx->pc = 0x333778u;
            // 0x333778: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x33377Cu;
        goto label_33377c;
    }
    ctx->pc = 0x333774u;
    {
        const bool branch_taken_0x333774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333774u;
            // 0x333778: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333774) {
            ctx->pc = 0x3336D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3336d8;
        }
    }
    ctx->pc = 0x33377Cu;
label_33377c:
    // 0x33377c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x33377cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_333780:
    // 0x333780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x333780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_333784:
    // 0x333784: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x333784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_333788:
    // 0x333788: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x333788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_33378c:
    // 0x33378c: 0x320f809  jalr        $t9
label_333790:
    if (ctx->pc == 0x333790u) {
        ctx->pc = 0x333790u;
            // 0x333790: 0x266607c0  addiu       $a2, $s3, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1984));
        ctx->pc = 0x333794u;
        goto label_333794;
    }
    ctx->pc = 0x33378Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333794u);
        ctx->pc = 0x333790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33378Cu;
            // 0x333790: 0x266607c0  addiu       $a2, $s3, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1984));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x333794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x333794u; }
            if (ctx->pc != 0x333794u) { return; }
        }
        }
    }
    ctx->pc = 0x333794u;
label_333794:
    // 0x333794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x333794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_333798:
    // 0x333798: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x333798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_33379c:
    // 0x33379c: 0x8c50a348  lw          $s0, -0x5CB8($v0)
    ctx->pc = 0x33379cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_3337a0:
    // 0x3337a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3337a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3337a4:
    // 0x3337a4: 0x8c510ed0  lw          $s1, 0xED0($v0)
    ctx->pc = 0x3337a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_3337a8:
    // 0x3337a8: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x3337a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3337ac:
    // 0x3337ac: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_3337b0:
    if (ctx->pc == 0x3337B0u) {
        ctx->pc = 0x3337B0u;
            // 0x3337b0: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->pc = 0x3337B4u;
        goto label_3337b4;
    }
    ctx->pc = 0x3337ACu;
    {
        const bool branch_taken_0x3337ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3337B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3337ACu;
            // 0x3337b0: 0xafa3008c  sw          $v1, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3337ac) {
            ctx->pc = 0x333838u;
            goto label_333838;
        }
    }
    ctx->pc = 0x3337B4u;
label_3337b4:
    // 0x3337b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3337b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3337b8:
    // 0x3337b8: 0x8c72000c  lw          $s2, 0xC($v1)
    ctx->pc = 0x3337b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3337bc:
    // 0x3337bc: 0x8c49f550  lw          $t1, -0xAB0($v0)
    ctx->pc = 0x3337bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964560)));
label_3337c0:
    // 0x3337c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3337c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3337c4:
    // 0x3337c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3337c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3337c8:
    // 0x3337c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3337c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3337cc:
    // 0x3337cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3337ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3337d0:
    // 0x3337d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3337d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3337d4:
    // 0x3337d4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3337d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3337d8:
    // 0x3337d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3337d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3337dc:
    // 0x3337dc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3337dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3337e0:
    // 0x3337e0: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x3337e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_3337e4:
    // 0x3337e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3337e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3337e8:
    // 0x3337e8: 0xc0b3a28  jal         func_2CE8A0
label_3337ec:
    if (ctx->pc == 0x3337ECu) {
        ctx->pc = 0x3337ECu;
            // 0x3337ec: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3337F0u;
        goto label_3337f0;
    }
    ctx->pc = 0x3337E8u;
    SET_GPR_U32(ctx, 31, 0x3337F0u);
    ctx->pc = 0x3337ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3337E8u;
            // 0x3337ec: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337F0u; }
        if (ctx->pc != 0x3337F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337F0u; }
        if (ctx->pc != 0x3337F0u) { return; }
    }
    ctx->pc = 0x3337F0u;
label_3337f0:
    // 0x3337f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3337f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3337f4:
    // 0x3337f4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3337f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3337f8:
    // 0x3337f8: 0x26660048  addiu       $a2, $s3, 0x48
    ctx->pc = 0x3337f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_3337fc:
    // 0x3337fc: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x3337fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_333800:
    // 0x333800: 0xc0aa5d8  jal         func_2A9760
label_333804:
    if (ctx->pc == 0x333804u) {
        ctx->pc = 0x333804u;
            // 0x333804: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333808u;
        goto label_333808;
    }
    ctx->pc = 0x333800u;
    SET_GPR_U32(ctx, 31, 0x333808u);
    ctx->pc = 0x333804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333800u;
            // 0x333804: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333808u; }
        if (ctx->pc != 0x333808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333808u; }
        if (ctx->pc != 0x333808u) { return; }
    }
    ctx->pc = 0x333808u;
label_333808:
    // 0x333808: 0xa672004c  sh          $s2, 0x4C($s3)
    ctx->pc = 0x333808u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 76), (uint16_t)GPR_U32(ctx, 18));
label_33380c:
    // 0x33380c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333810:
    // 0x333810: 0x8c43f550  lw          $v1, -0xAB0($v0)
    ctx->pc = 0x333810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964560)));
label_333814:
    // 0x333814: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x333814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_333818:
    // 0x333818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33381c:
    // 0x33381c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_333820:
    // 0x333820: 0xc057fa4  jal         func_15FE90
label_333824:
    if (ctx->pc == 0x333824u) {
        ctx->pc = 0x333824u;
            // 0x333824: 0xac43f550  sw          $v1, -0xAB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964560), GPR_U32(ctx, 3));
        ctx->pc = 0x333828u;
        goto label_333828;
    }
    ctx->pc = 0x333820u;
    SET_GPR_U32(ctx, 31, 0x333828u);
    ctx->pc = 0x333824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333820u;
            // 0x333824: 0xac43f550  sw          $v1, -0xAB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE90u;
    if (runtime->hasFunction(0x15FE90u)) {
        auto targetFn = runtime->lookupFunction(0x15FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333828u; }
        if (ctx->pc != 0x333828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE90_0x15fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333828u; }
        if (ctx->pc != 0x333828u) { return; }
    }
    ctx->pc = 0x333828u;
label_333828:
    // 0x333828: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x333828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_33382c:
    // 0x33382c: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x33382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_333830:
    // 0x333830: 0x1462ffe0  bne         $v1, $v0, . + 4 + (-0x20 << 2)
label_333834:
    if (ctx->pc == 0x333834u) {
        ctx->pc = 0x333838u;
        goto label_333838;
    }
    ctx->pc = 0x333830u;
    {
        const bool branch_taken_0x333830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333830) {
            ctx->pc = 0x3337B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3337b4;
        }
    }
    ctx->pc = 0x333838u;
label_333838:
    // 0x333838: 0xc0cd47c  jal         func_3351F0
label_33383c:
    if (ctx->pc == 0x33383Cu) {
        ctx->pc = 0x33383Cu;
            // 0x33383c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x333840u;
        goto label_333840;
    }
    ctx->pc = 0x333838u;
    SET_GPR_U32(ctx, 31, 0x333840u);
    ctx->pc = 0x33383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333838u;
            // 0x33383c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3351F0u;
    if (runtime->hasFunction(0x3351F0u)) {
        auto targetFn = runtime->lookupFunction(0x3351F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333840u; }
        if (ctx->pc != 0x333840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003351F0_0x3351f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333840u; }
        if (ctx->pc != 0x333840u) { return; }
    }
    ctx->pc = 0x333840u;
label_333840:
    // 0x333840: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x333840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_333844:
    // 0x333844: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_333848:
    if (ctx->pc == 0x333848u) {
        ctx->pc = 0x333848u;
            // 0x333848: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x33384Cu;
        goto label_33384c;
    }
    ctx->pc = 0x333844u;
    {
        const bool branch_taken_0x333844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x333844) {
            ctx->pc = 0x333848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333844u;
            // 0x333848: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333858u;
            goto label_333858;
        }
    }
    ctx->pc = 0x33384Cu;
label_33384c:
    // 0x33384c: 0xc0cd3d4  jal         func_334F50
label_333850:
    if (ctx->pc == 0x333850u) {
        ctx->pc = 0x333850u;
            // 0x333850: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x333854u;
        goto label_333854;
    }
    ctx->pc = 0x33384Cu;
    SET_GPR_U32(ctx, 31, 0x333854u);
    ctx->pc = 0x333850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33384Cu;
            // 0x333850: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334F50u;
    if (runtime->hasFunction(0x334F50u)) {
        auto targetFn = runtime->lookupFunction(0x334F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333854u; }
        if (ctx->pc != 0x333854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334F50_0x334f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333854u; }
        if (ctx->pc != 0x333854u) { return; }
    }
    ctx->pc = 0x333854u;
label_333854:
    // 0x333854: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x333854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_333858:
    // 0x333858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x333858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33385c:
    // 0x33385c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33385cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_333860:
    // 0x333860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_333864:
    // 0x333864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_333868:
    // 0x333868: 0x3e00008  jr          $ra
label_33386c:
    if (ctx->pc == 0x33386Cu) {
        ctx->pc = 0x33386Cu;
            // 0x33386c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x333870u;
        goto label_fallthrough_0x333868;
    }
    ctx->pc = 0x333868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333868u;
            // 0x33386c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x333868:
    ctx->pc = 0x333870u;
}
