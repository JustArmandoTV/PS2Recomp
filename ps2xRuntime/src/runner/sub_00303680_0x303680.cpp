#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303680
// Address: 0x303680 - 0x303970
void sub_00303680_0x303680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303680_0x303680");
#endif

    switch (ctx->pc) {
        case 0x303680u: goto label_303680;
        case 0x303684u: goto label_303684;
        case 0x303688u: goto label_303688;
        case 0x30368cu: goto label_30368c;
        case 0x303690u: goto label_303690;
        case 0x303694u: goto label_303694;
        case 0x303698u: goto label_303698;
        case 0x30369cu: goto label_30369c;
        case 0x3036a0u: goto label_3036a0;
        case 0x3036a4u: goto label_3036a4;
        case 0x3036a8u: goto label_3036a8;
        case 0x3036acu: goto label_3036ac;
        case 0x3036b0u: goto label_3036b0;
        case 0x3036b4u: goto label_3036b4;
        case 0x3036b8u: goto label_3036b8;
        case 0x3036bcu: goto label_3036bc;
        case 0x3036c0u: goto label_3036c0;
        case 0x3036c4u: goto label_3036c4;
        case 0x3036c8u: goto label_3036c8;
        case 0x3036ccu: goto label_3036cc;
        case 0x3036d0u: goto label_3036d0;
        case 0x3036d4u: goto label_3036d4;
        case 0x3036d8u: goto label_3036d8;
        case 0x3036dcu: goto label_3036dc;
        case 0x3036e0u: goto label_3036e0;
        case 0x3036e4u: goto label_3036e4;
        case 0x3036e8u: goto label_3036e8;
        case 0x3036ecu: goto label_3036ec;
        case 0x3036f0u: goto label_3036f0;
        case 0x3036f4u: goto label_3036f4;
        case 0x3036f8u: goto label_3036f8;
        case 0x3036fcu: goto label_3036fc;
        case 0x303700u: goto label_303700;
        case 0x303704u: goto label_303704;
        case 0x303708u: goto label_303708;
        case 0x30370cu: goto label_30370c;
        case 0x303710u: goto label_303710;
        case 0x303714u: goto label_303714;
        case 0x303718u: goto label_303718;
        case 0x30371cu: goto label_30371c;
        case 0x303720u: goto label_303720;
        case 0x303724u: goto label_303724;
        case 0x303728u: goto label_303728;
        case 0x30372cu: goto label_30372c;
        case 0x303730u: goto label_303730;
        case 0x303734u: goto label_303734;
        case 0x303738u: goto label_303738;
        case 0x30373cu: goto label_30373c;
        case 0x303740u: goto label_303740;
        case 0x303744u: goto label_303744;
        case 0x303748u: goto label_303748;
        case 0x30374cu: goto label_30374c;
        case 0x303750u: goto label_303750;
        case 0x303754u: goto label_303754;
        case 0x303758u: goto label_303758;
        case 0x30375cu: goto label_30375c;
        case 0x303760u: goto label_303760;
        case 0x303764u: goto label_303764;
        case 0x303768u: goto label_303768;
        case 0x30376cu: goto label_30376c;
        case 0x303770u: goto label_303770;
        case 0x303774u: goto label_303774;
        case 0x303778u: goto label_303778;
        case 0x30377cu: goto label_30377c;
        case 0x303780u: goto label_303780;
        case 0x303784u: goto label_303784;
        case 0x303788u: goto label_303788;
        case 0x30378cu: goto label_30378c;
        case 0x303790u: goto label_303790;
        case 0x303794u: goto label_303794;
        case 0x303798u: goto label_303798;
        case 0x30379cu: goto label_30379c;
        case 0x3037a0u: goto label_3037a0;
        case 0x3037a4u: goto label_3037a4;
        case 0x3037a8u: goto label_3037a8;
        case 0x3037acu: goto label_3037ac;
        case 0x3037b0u: goto label_3037b0;
        case 0x3037b4u: goto label_3037b4;
        case 0x3037b8u: goto label_3037b8;
        case 0x3037bcu: goto label_3037bc;
        case 0x3037c0u: goto label_3037c0;
        case 0x3037c4u: goto label_3037c4;
        case 0x3037c8u: goto label_3037c8;
        case 0x3037ccu: goto label_3037cc;
        case 0x3037d0u: goto label_3037d0;
        case 0x3037d4u: goto label_3037d4;
        case 0x3037d8u: goto label_3037d8;
        case 0x3037dcu: goto label_3037dc;
        case 0x3037e0u: goto label_3037e0;
        case 0x3037e4u: goto label_3037e4;
        case 0x3037e8u: goto label_3037e8;
        case 0x3037ecu: goto label_3037ec;
        case 0x3037f0u: goto label_3037f0;
        case 0x3037f4u: goto label_3037f4;
        case 0x3037f8u: goto label_3037f8;
        case 0x3037fcu: goto label_3037fc;
        case 0x303800u: goto label_303800;
        case 0x303804u: goto label_303804;
        case 0x303808u: goto label_303808;
        case 0x30380cu: goto label_30380c;
        case 0x303810u: goto label_303810;
        case 0x303814u: goto label_303814;
        case 0x303818u: goto label_303818;
        case 0x30381cu: goto label_30381c;
        case 0x303820u: goto label_303820;
        case 0x303824u: goto label_303824;
        case 0x303828u: goto label_303828;
        case 0x30382cu: goto label_30382c;
        case 0x303830u: goto label_303830;
        case 0x303834u: goto label_303834;
        case 0x303838u: goto label_303838;
        case 0x30383cu: goto label_30383c;
        case 0x303840u: goto label_303840;
        case 0x303844u: goto label_303844;
        case 0x303848u: goto label_303848;
        case 0x30384cu: goto label_30384c;
        case 0x303850u: goto label_303850;
        case 0x303854u: goto label_303854;
        case 0x303858u: goto label_303858;
        case 0x30385cu: goto label_30385c;
        case 0x303860u: goto label_303860;
        case 0x303864u: goto label_303864;
        case 0x303868u: goto label_303868;
        case 0x30386cu: goto label_30386c;
        case 0x303870u: goto label_303870;
        case 0x303874u: goto label_303874;
        case 0x303878u: goto label_303878;
        case 0x30387cu: goto label_30387c;
        case 0x303880u: goto label_303880;
        case 0x303884u: goto label_303884;
        case 0x303888u: goto label_303888;
        case 0x30388cu: goto label_30388c;
        case 0x303890u: goto label_303890;
        case 0x303894u: goto label_303894;
        case 0x303898u: goto label_303898;
        case 0x30389cu: goto label_30389c;
        case 0x3038a0u: goto label_3038a0;
        case 0x3038a4u: goto label_3038a4;
        case 0x3038a8u: goto label_3038a8;
        case 0x3038acu: goto label_3038ac;
        case 0x3038b0u: goto label_3038b0;
        case 0x3038b4u: goto label_3038b4;
        case 0x3038b8u: goto label_3038b8;
        case 0x3038bcu: goto label_3038bc;
        case 0x3038c0u: goto label_3038c0;
        case 0x3038c4u: goto label_3038c4;
        case 0x3038c8u: goto label_3038c8;
        case 0x3038ccu: goto label_3038cc;
        case 0x3038d0u: goto label_3038d0;
        case 0x3038d4u: goto label_3038d4;
        case 0x3038d8u: goto label_3038d8;
        case 0x3038dcu: goto label_3038dc;
        case 0x3038e0u: goto label_3038e0;
        case 0x3038e4u: goto label_3038e4;
        case 0x3038e8u: goto label_3038e8;
        case 0x3038ecu: goto label_3038ec;
        case 0x3038f0u: goto label_3038f0;
        case 0x3038f4u: goto label_3038f4;
        case 0x3038f8u: goto label_3038f8;
        case 0x3038fcu: goto label_3038fc;
        case 0x303900u: goto label_303900;
        case 0x303904u: goto label_303904;
        case 0x303908u: goto label_303908;
        case 0x30390cu: goto label_30390c;
        case 0x303910u: goto label_303910;
        case 0x303914u: goto label_303914;
        case 0x303918u: goto label_303918;
        case 0x30391cu: goto label_30391c;
        case 0x303920u: goto label_303920;
        case 0x303924u: goto label_303924;
        case 0x303928u: goto label_303928;
        case 0x30392cu: goto label_30392c;
        case 0x303930u: goto label_303930;
        case 0x303934u: goto label_303934;
        case 0x303938u: goto label_303938;
        case 0x30393cu: goto label_30393c;
        case 0x303940u: goto label_303940;
        case 0x303944u: goto label_303944;
        case 0x303948u: goto label_303948;
        case 0x30394cu: goto label_30394c;
        case 0x303950u: goto label_303950;
        case 0x303954u: goto label_303954;
        case 0x303958u: goto label_303958;
        case 0x30395cu: goto label_30395c;
        case 0x303960u: goto label_303960;
        case 0x303964u: goto label_303964;
        case 0x303968u: goto label_303968;
        case 0x30396cu: goto label_30396c;
        default: break;
    }

    ctx->pc = 0x303680u;

label_303680:
    // 0x303680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x303680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_303684:
    // 0x303684: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x303684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_303688:
    // 0x303688: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x303688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30368c:
    // 0x30368c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30368cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303690:
    // 0x303690: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x303690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_303694:
    // 0x303694: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x303694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_303698:
    // 0x303698: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x303698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_30369c:
    // 0x30369c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30369cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3036a0:
    // 0x3036a0: 0xac820e10  sw          $v0, 0xE10($a0)
    ctx->pc = 0x3036a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3600), GPR_U32(ctx, 2));
label_3036a4:
    // 0x3036a4: 0xc4810e28  lwc1        $f1, 0xE28($a0)
    ctx->pc = 0x3036a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3036a8:
    // 0x3036a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3036a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3036ac:
    // 0x3036ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3036b0:
    if (ctx->pc == 0x3036B0u) {
        ctx->pc = 0x3036B0u;
            // 0x3036b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3036B4u;
        goto label_3036b4;
    }
    ctx->pc = 0x3036ACu;
    {
        const bool branch_taken_0x3036ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3036B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3036ACu;
            // 0x3036b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036ac) {
            ctx->pc = 0x3036C0u;
            goto label_3036c0;
        }
    }
    ctx->pc = 0x3036B4u;
label_3036b4:
    // 0x3036b4: 0xae400e0c  sw          $zero, 0xE0C($s2)
    ctx->pc = 0x3036b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3596), GPR_U32(ctx, 0));
label_3036b8:
    // 0x3036b8: 0x10000026  b           . + 4 + (0x26 << 2)
label_3036bc:
    if (ctx->pc == 0x3036BCu) {
        ctx->pc = 0x3036BCu;
            // 0x3036bc: 0xe6400a80  swc1        $f0, 0xA80($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2688), bits); }
        ctx->pc = 0x3036C0u;
        goto label_3036c0;
    }
    ctx->pc = 0x3036B8u;
    {
        const bool branch_taken_0x3036b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3036BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3036B8u;
            // 0x3036bc: 0xe6400a80  swc1        $f0, 0xA80($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036b8) {
            ctx->pc = 0x303754u;
            goto label_303754;
        }
    }
    ctx->pc = 0x3036C0u;
label_3036c0:
    // 0x3036c0: 0x8e420e0c  lw          $v0, 0xE0C($s2)
    ctx->pc = 0x3036c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_3036c4:
    // 0x3036c4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3036c4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3036c8:
    // 0x3036c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3036c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3036cc:
    // 0x3036cc: 0xae420e0c  sw          $v0, 0xE0C($s2)
    ctx->pc = 0x3036ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3596), GPR_U32(ctx, 2));
label_3036d0:
    // 0x3036d0: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3036d4:
    // 0x3036d4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3036d8:
    if (ctx->pc == 0x3036D8u) {
        ctx->pc = 0x3036D8u;
            // 0x3036d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3036DCu;
        goto label_3036dc;
    }
    ctx->pc = 0x3036D4u;
    {
        const bool branch_taken_0x3036d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3036D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3036D4u;
            // 0x3036d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036d4) {
            ctx->pc = 0x3036ECu;
            goto label_3036ec;
        }
    }
    ctx->pc = 0x3036DCu;
label_3036dc:
    // 0x3036dc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3036dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3036e0:
    // 0x3036e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3036e4:
    if (ctx->pc == 0x3036E4u) {
        ctx->pc = 0x3036E8u;
        goto label_3036e8;
    }
    ctx->pc = 0x3036E0u;
    {
        const bool branch_taken_0x3036e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3036e0) {
            ctx->pc = 0x3036ECu;
            goto label_3036ec;
        }
    }
    ctx->pc = 0x3036E8u;
label_3036e8:
    // 0x3036e8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3036e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3036ec:
    // 0x3036ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3036f0:
    if (ctx->pc == 0x3036F0u) {
        ctx->pc = 0x3036F4u;
        goto label_3036f4;
    }
    ctx->pc = 0x3036ECu;
    {
        const bool branch_taken_0x3036ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3036ec) {
            ctx->pc = 0x303708u;
            goto label_303708;
        }
    }
    ctx->pc = 0x3036F4u;
label_3036f4:
    // 0x3036f4: 0xc075eb4  jal         func_1D7AD0
label_3036f8:
    if (ctx->pc == 0x3036F8u) {
        ctx->pc = 0x3036F8u;
            // 0x3036f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3036FCu;
        goto label_3036fc;
    }
    ctx->pc = 0x3036F4u;
    SET_GPR_U32(ctx, 31, 0x3036FCu);
    ctx->pc = 0x3036F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3036F4u;
            // 0x3036f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3036FCu; }
        if (ctx->pc != 0x3036FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3036FCu; }
        if (ctx->pc != 0x3036FCu) { return; }
    }
    ctx->pc = 0x3036FCu;
label_3036fc:
    // 0x3036fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_303700:
    if (ctx->pc == 0x303700u) {
        ctx->pc = 0x303704u;
        goto label_303704;
    }
    ctx->pc = 0x3036FCu;
    {
        const bool branch_taken_0x3036fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3036fc) {
            ctx->pc = 0x303708u;
            goto label_303708;
        }
    }
    ctx->pc = 0x303704u;
label_303704:
    // 0x303704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x303704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303708:
    // 0x303708: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_30370c:
    if (ctx->pc == 0x30370Cu) {
        ctx->pc = 0x30370Cu;
            // 0x30370c: 0x8e430e0c  lw          $v1, 0xE0C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
        ctx->pc = 0x303710u;
        goto label_303710;
    }
    ctx->pc = 0x303708u;
    {
        const bool branch_taken_0x303708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x303708) {
            ctx->pc = 0x30370Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303708u;
            // 0x30370c: 0x8e430e0c  lw          $v1, 0xE0C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303724u;
            goto label_303724;
        }
    }
    ctx->pc = 0x303710u;
label_303710:
    // 0x303710: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x303710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_303714:
    // 0x303714: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x303714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_303718:
    // 0x303718: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_30371c:
    if (ctx->pc == 0x30371Cu) {
        ctx->pc = 0x30371Cu;
            // 0x30371c: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x303720u;
        goto label_303720;
    }
    ctx->pc = 0x303718u;
    {
        const bool branch_taken_0x303718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x303718) {
            ctx->pc = 0x30371Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303718u;
            // 0x30371c: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303758u;
            goto label_303758;
        }
    }
    ctx->pc = 0x303720u;
label_303720:
    // 0x303720: 0x8e430e0c  lw          $v1, 0xE0C($s2)
    ctx->pc = 0x303720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_303724:
    // 0x303724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303728:
    // 0x303728: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_30372c:
    if (ctx->pc == 0x30372Cu) {
        ctx->pc = 0x303730u;
        goto label_303730;
    }
    ctx->pc = 0x303728u;
    {
        const bool branch_taken_0x303728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x303728) {
            ctx->pc = 0x303754u;
            goto label_303754;
        }
    }
    ctx->pc = 0x303730u;
label_303730:
    // 0x303730: 0xc040180  jal         func_100600
label_303734:
    if (ctx->pc == 0x303734u) {
        ctx->pc = 0x303734u;
            // 0x303734: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x303738u;
        goto label_303738;
    }
    ctx->pc = 0x303730u;
    SET_GPR_U32(ctx, 31, 0x303738u);
    ctx->pc = 0x303734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303730u;
            // 0x303734: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303738u; }
        if (ctx->pc != 0x303738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303738u; }
        if (ctx->pc != 0x303738u) { return; }
    }
    ctx->pc = 0x303738u;
label_303738:
    // 0x303738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_30373c:
    if (ctx->pc == 0x30373Cu) {
        ctx->pc = 0x303740u;
        goto label_303740;
    }
    ctx->pc = 0x303738u;
    {
        const bool branch_taken_0x303738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303738) {
            ctx->pc = 0x303754u;
            goto label_303754;
        }
    }
    ctx->pc = 0x303740u;
label_303740:
    // 0x303740: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x303740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_303744:
    // 0x303744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x303744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303748:
    // 0x303748: 0x8e460e0c  lw          $a2, 0xE0C($s2)
    ctx->pc = 0x303748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_30374c:
    // 0x30374c: 0xc0f3e5c  jal         func_3CF970
label_303750:
    if (ctx->pc == 0x303750u) {
        ctx->pc = 0x303750u;
            // 0x303750: 0x26470e0c  addiu       $a3, $s2, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3596));
        ctx->pc = 0x303754u;
        goto label_303754;
    }
    ctx->pc = 0x30374Cu;
    SET_GPR_U32(ctx, 31, 0x303754u);
    ctx->pc = 0x303750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30374Cu;
            // 0x303750: 0x26470e0c  addiu       $a3, $s2, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CF970u;
    if (runtime->hasFunction(0x3CF970u)) {
        auto targetFn = runtime->lookupFunction(0x3CF970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303754u; }
        if (ctx->pc != 0x303754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CF970_0x3cf970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303754u; }
        if (ctx->pc != 0x303754u) { return; }
    }
    ctx->pc = 0x303754u;
label_303754:
    // 0x303754: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x303754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_303758:
    // 0x303758: 0xc0754b4  jal         func_1D52D0
label_30375c:
    if (ctx->pc == 0x30375Cu) {
        ctx->pc = 0x303760u;
        goto label_303760;
    }
    ctx->pc = 0x303758u;
    SET_GPR_U32(ctx, 31, 0x303760u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303760u; }
        if (ctx->pc != 0x303760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303760u; }
        if (ctx->pc != 0x303760u) { return; }
    }
    ctx->pc = 0x303760u;
label_303760:
    // 0x303760: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x303760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_303764:
    // 0x303764: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x303764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_303768:
    // 0x303768: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
label_30376c:
    if (ctx->pc == 0x30376Cu) {
        ctx->pc = 0x30376Cu;
            // 0x30376c: 0x3c044270  lui         $a0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
        ctx->pc = 0x303770u;
        goto label_303770;
    }
    ctx->pc = 0x303768u;
    {
        const bool branch_taken_0x303768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303768) {
            ctx->pc = 0x30376Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303768u;
            // 0x30376c: 0x3c044270  lui         $a0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3037FCu;
            goto label_3037fc;
        }
    }
    ctx->pc = 0x303770u;
label_303770:
    // 0x303770: 0x8e420e0c  lw          $v0, 0xE0C($s2)
    ctx->pc = 0x303770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_303774:
    // 0x303774: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x303774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_303778:
    // 0x303778: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_30377c:
    if (ctx->pc == 0x30377Cu) {
        ctx->pc = 0x303780u;
        goto label_303780;
    }
    ctx->pc = 0x303778u;
    {
        const bool branch_taken_0x303778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x303778) {
            ctx->pc = 0x3037B4u;
            goto label_3037b4;
        }
    }
    ctx->pc = 0x303780u;
label_303780:
    // 0x303780: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x303780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_303784:
    // 0x303784: 0x26440a50  addiu       $a0, $s2, 0xA50
    ctx->pc = 0x303784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_303788:
    // 0x303788: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x303788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30378c:
    // 0x30378c: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x30378cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_303790:
    // 0x303790: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x303790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_303794:
    // 0x303794: 0x24422b30  addiu       $v0, $v0, 0x2B30
    ctx->pc = 0x303794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11056));
label_303798:
    // 0x303798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30379c:
    // 0x30379c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3037a0:
    // 0x3037a0: 0xc4a10c84  lwc1        $f1, 0xC84($a1)
    ctx->pc = 0x3037a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3037a4:
    // 0x3037a4: 0xc0eea40  jal         func_3BA900
label_3037a8:
    if (ctx->pc == 0x3037A8u) {
        ctx->pc = 0x3037A8u;
            // 0x3037a8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3037ACu;
        goto label_3037ac;
    }
    ctx->pc = 0x3037A4u;
    SET_GPR_U32(ctx, 31, 0x3037ACu);
    ctx->pc = 0x3037A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3037A4u;
            // 0x3037a8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA900u;
    if (runtime->hasFunction(0x3BA900u)) {
        auto targetFn = runtime->lookupFunction(0x3BA900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037ACu; }
        if (ctx->pc != 0x3037ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA900_0x3ba900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037ACu; }
        if (ctx->pc != 0x3037ACu) { return; }
    }
    ctx->pc = 0x3037ACu;
label_3037ac:
    // 0x3037ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_3037b0:
    if (ctx->pc == 0x3037B0u) {
        ctx->pc = 0x3037B0u;
            // 0x3037b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3037B4u;
        goto label_3037b4;
    }
    ctx->pc = 0x3037ACu;
    {
        const bool branch_taken_0x3037ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3037B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3037ACu;
            // 0x3037b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037ac) {
            ctx->pc = 0x3037D8u;
            goto label_3037d8;
        }
    }
    ctx->pc = 0x3037B4u;
label_3037b4:
    // 0x3037b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3037b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3037b8:
    // 0x3037b8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3037b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3037bc:
    // 0x3037bc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3037bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3037c0:
    // 0x3037c0: 0xc4402b44  lwc1        $f0, 0x2B44($v0)
    ctx->pc = 0x3037c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3037c4:
    // 0x3037c4: 0x26440a50  addiu       $a0, $s2, 0xA50
    ctx->pc = 0x3037c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_3037c8:
    // 0x3037c8: 0xc4610c84  lwc1        $f1, 0xC84($v1)
    ctx->pc = 0x3037c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3037cc:
    // 0x3037cc: 0xc0eea40  jal         func_3BA900
label_3037d0:
    if (ctx->pc == 0x3037D0u) {
        ctx->pc = 0x3037D0u;
            // 0x3037d0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3037D4u;
        goto label_3037d4;
    }
    ctx->pc = 0x3037CCu;
    SET_GPR_U32(ctx, 31, 0x3037D4u);
    ctx->pc = 0x3037D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3037CCu;
            // 0x3037d0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA900u;
    if (runtime->hasFunction(0x3BA900u)) {
        auto targetFn = runtime->lookupFunction(0x3BA900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037D4u; }
        if (ctx->pc != 0x3037D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA900_0x3ba900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037D4u; }
        if (ctx->pc != 0x3037D4u) { return; }
    }
    ctx->pc = 0x3037D4u;
label_3037d4:
    // 0x3037d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3037d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3037d8:
    // 0x3037d8: 0xc6400a7c  lwc1        $f0, 0xA7C($s2)
    ctx->pc = 0x3037d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3037dc:
    // 0x3037dc: 0x26440a50  addiu       $a0, $s2, 0xA50
    ctx->pc = 0x3037dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_3037e0:
    // 0x3037e0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3037e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3037e4:
    // 0x3037e4: 0xc0eea24  jal         func_3BA890
label_3037e8:
    if (ctx->pc == 0x3037E8u) {
        ctx->pc = 0x3037E8u;
            // 0x3037e8: 0xe6400a7c  swc1        $f0, 0xA7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2684), bits); }
        ctx->pc = 0x3037ECu;
        goto label_3037ec;
    }
    ctx->pc = 0x3037E4u;
    SET_GPR_U32(ctx, 31, 0x3037ECu);
    ctx->pc = 0x3037E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3037E4u;
            // 0x3037e8: 0xe6400a7c  swc1        $f0, 0xA7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037ECu; }
        if (ctx->pc != 0x3037ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3037ECu; }
        if (ctx->pc != 0x3037ECu) { return; }
    }
    ctx->pc = 0x3037ECu;
label_3037ec:
    // 0x3037ec: 0xc6400a80  lwc1        $f0, 0xA80($s2)
    ctx->pc = 0x3037ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3037f0:
    // 0x3037f0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3037f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3037f4:
    // 0x3037f4: 0xe6400a80  swc1        $f0, 0xA80($s2)
    ctx->pc = 0x3037f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2688), bits); }
label_3037f8:
    // 0x3037f8: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x3037f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_3037fc:
    // 0x3037fc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3037fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_303800:
    // 0x303800: 0xae440e28  sw          $a0, 0xE28($s2)
    ctx->pc = 0x303800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3624), GPR_U32(ctx, 4));
label_303804:
    // 0x303804: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x303804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_303808:
    // 0x303808: 0x50830052  beql        $a0, $v1, . + 4 + (0x52 << 2)
label_30380c:
    if (ctx->pc == 0x30380Cu) {
        ctx->pc = 0x30380Cu;
            // 0x30380c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x303810u;
        goto label_303810;
    }
    ctx->pc = 0x303808u;
    {
        const bool branch_taken_0x303808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x303808) {
            ctx->pc = 0x30380Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303808u;
            // 0x30380c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303954u;
            goto label_303954;
        }
    }
    ctx->pc = 0x303810u;
label_303810:
    // 0x303810: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x303810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_303814:
    // 0x303814: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
label_303818:
    if (ctx->pc == 0x303818u) {
        ctx->pc = 0x30381Cu;
        goto label_30381c;
    }
    ctx->pc = 0x303814u;
    {
        const bool branch_taken_0x303814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x303814) {
            ctx->pc = 0x303950u;
            goto label_303950;
        }
    }
    ctx->pc = 0x30381Cu;
label_30381c:
    // 0x30381c: 0x8e510550  lw          $s1, 0x550($s2)
    ctx->pc = 0x30381cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_303820:
    // 0x303820: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x303820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_303824:
    // 0x303824: 0x8e440e0c  lw          $a0, 0xE0C($s2)
    ctx->pc = 0x303824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_303828:
    // 0x303828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30382c:
    // 0x30382c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30382cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_303830:
    // 0x303830: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x303830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_303834:
    // 0x303834: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x303834u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_303838:
    // 0x303838: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x303838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30383c:
    // 0x30383c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x30383cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_303840:
    // 0x303840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303844:
    // 0x303844: 0x2490002f  addiu       $s0, $a0, 0x2F
    ctx->pc = 0x303844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 47));
label_303848:
    // 0x303848: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x303848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_30384c:
    // 0x30384c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x30384cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_303850:
    // 0x303850: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x303850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_303854:
    // 0x303854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_303858:
    // 0x303858: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x303858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_30385c:
    // 0x30385c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_303860:
    // 0x303860: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x303860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_303864:
    // 0x303864: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x303864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_303868:
    // 0x303868: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x303868u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_30386c:
    // 0x30386c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x30386cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_303870:
    // 0x303870: 0x320f809  jalr        $t9
label_303874:
    if (ctx->pc == 0x303874u) {
        ctx->pc = 0x303874u;
            // 0x303874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x303878u;
        goto label_303878;
    }
    ctx->pc = 0x303870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x303878u);
        ctx->pc = 0x303874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303870u;
            // 0x303874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x303878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x303878u; }
            if (ctx->pc != 0x303878u) { return; }
        }
        }
    }
    ctx->pc = 0x303878u;
label_303878:
    // 0x303878: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x303878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_30387c:
    // 0x30387c: 0x10363c  dsll32      $a2, $s0, 24
    ctx->pc = 0x30387cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 24));
label_303880:
    // 0x303880: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x303880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_303884:
    // 0x303884: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x303884u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_303888:
    // 0x303888: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x303888u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_30388c:
    // 0x30388c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_303890:
    // 0x303890: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x303890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_303894:
    // 0x303894: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x303894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_303898:
    // 0x303898: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x303898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30389c:
    // 0x30389c: 0x320f809  jalr        $t9
label_3038a0:
    if (ctx->pc == 0x3038A0u) {
        ctx->pc = 0x3038A0u;
            // 0x3038a0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3038A4u;
        goto label_3038a4;
    }
    ctx->pc = 0x30389Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3038A4u);
        ctx->pc = 0x3038A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30389Cu;
            // 0x3038a0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3038A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3038A4u; }
            if (ctx->pc != 0x3038A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3038A4u;
label_3038a4:
    // 0x3038a4: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x3038a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3038a8:
    // 0x3038a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3038a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3038ac:
    // 0x3038ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3038acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3038b0:
    // 0x3038b0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3038b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3038b4:
    // 0x3038b4: 0x320f809  jalr        $t9
label_3038b8:
    if (ctx->pc == 0x3038B8u) {
        ctx->pc = 0x3038B8u;
            // 0x3038b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3038BCu;
        goto label_3038bc;
    }
    ctx->pc = 0x3038B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3038BCu);
        ctx->pc = 0x3038B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3038B4u;
            // 0x3038b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3038BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3038BCu; }
            if (ctx->pc != 0x3038BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3038BCu;
label_3038bc:
    // 0x3038bc: 0x8e430e38  lw          $v1, 0xE38($s2)
    ctx->pc = 0x3038bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_3038c0:
    // 0x3038c0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3038c0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3038c4:
    // 0x3038c4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3038c8:
    if (ctx->pc == 0x3038C8u) {
        ctx->pc = 0x3038C8u;
            // 0x3038c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3038CCu;
        goto label_3038cc;
    }
    ctx->pc = 0x3038C4u;
    {
        const bool branch_taken_0x3038c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3038C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3038C4u;
            // 0x3038c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038c4) {
            ctx->pc = 0x3038DCu;
            goto label_3038dc;
        }
    }
    ctx->pc = 0x3038CCu;
label_3038cc:
    // 0x3038cc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3038ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3038d0:
    // 0x3038d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3038d4:
    if (ctx->pc == 0x3038D4u) {
        ctx->pc = 0x3038D8u;
        goto label_3038d8;
    }
    ctx->pc = 0x3038D0u;
    {
        const bool branch_taken_0x3038d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038d0) {
            ctx->pc = 0x3038DCu;
            goto label_3038dc;
        }
    }
    ctx->pc = 0x3038D8u;
label_3038d8:
    // 0x3038d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3038d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3038dc:
    // 0x3038dc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3038e0:
    if (ctx->pc == 0x3038E0u) {
        ctx->pc = 0x3038E4u;
        goto label_3038e4;
    }
    ctx->pc = 0x3038DCu;
    {
        const bool branch_taken_0x3038dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3038dc) {
            ctx->pc = 0x3038F8u;
            goto label_3038f8;
        }
    }
    ctx->pc = 0x3038E4u;
label_3038e4:
    // 0x3038e4: 0xc075eb4  jal         func_1D7AD0
label_3038e8:
    if (ctx->pc == 0x3038E8u) {
        ctx->pc = 0x3038E8u;
            // 0x3038e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3038ECu;
        goto label_3038ec;
    }
    ctx->pc = 0x3038E4u;
    SET_GPR_U32(ctx, 31, 0x3038ECu);
    ctx->pc = 0x3038E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3038E4u;
            // 0x3038e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3038ECu; }
        if (ctx->pc != 0x3038ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3038ECu; }
        if (ctx->pc != 0x3038ECu) { return; }
    }
    ctx->pc = 0x3038ECu;
label_3038ec:
    // 0x3038ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3038f0:
    if (ctx->pc == 0x3038F0u) {
        ctx->pc = 0x3038F4u;
        goto label_3038f4;
    }
    ctx->pc = 0x3038ECu;
    {
        const bool branch_taken_0x3038ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3038ec) {
            ctx->pc = 0x3038F8u;
            goto label_3038f8;
        }
    }
    ctx->pc = 0x3038F4u;
label_3038f4:
    // 0x3038f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3038f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3038f8:
    // 0x3038f8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_3038fc:
    if (ctx->pc == 0x3038FCu) {
        ctx->pc = 0x303900u;
        goto label_303900;
    }
    ctx->pc = 0x3038F8u;
    {
        const bool branch_taken_0x3038f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038f8) {
            ctx->pc = 0x303950u;
            goto label_303950;
        }
    }
    ctx->pc = 0x303900u;
label_303900:
    // 0x303900: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x303900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_303904:
    // 0x303904: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x303904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_303908:
    // 0x303908: 0xc040180  jal         func_100600
label_30390c:
    if (ctx->pc == 0x30390Cu) {
        ctx->pc = 0x30390Cu;
            // 0x30390c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x303910u;
        goto label_303910;
    }
    ctx->pc = 0x303908u;
    SET_GPR_U32(ctx, 31, 0x303910u);
    ctx->pc = 0x30390Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303908u;
            // 0x30390c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303910u; }
        if (ctx->pc != 0x303910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303910u; }
        if (ctx->pc != 0x303910u) { return; }
    }
    ctx->pc = 0x303910u;
label_303910:
    // 0x303910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x303910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303914:
    // 0x303914: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_303918:
    if (ctx->pc == 0x303918u) {
        ctx->pc = 0x30391Cu;
        goto label_30391c;
    }
    ctx->pc = 0x303914u;
    {
        const bool branch_taken_0x303914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303914) {
            ctx->pc = 0x303950u;
            goto label_303950;
        }
    }
    ctx->pc = 0x30391Cu;
label_30391c:
    // 0x30391c: 0x8e430e0c  lw          $v1, 0xE0C($s2)
    ctx->pc = 0x30391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_303920:
    // 0x303920: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x303920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_303924:
    // 0x303924: 0x3445abec  ori         $a1, $v0, 0xABEC
    ctx->pc = 0x303924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44012);
label_303928:
    // 0x303928: 0x824911aa  lb          $t1, 0x11AA($s2)
    ctx->pc = 0x303928u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_30392c:
    // 0x30392c: 0x8e4a0d98  lw          $t2, 0xD98($s2)
    ctx->pc = 0x30392cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_303930:
    // 0x303930: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x303930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_303934:
    // 0x303934: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x303934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_303938:
    // 0x303938: 0x26070458  addiu       $a3, $s0, 0x458
    ctx->pc = 0x303938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1112));
label_30393c:
    // 0x30393c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30393cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_303940:
    // 0x303940: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x303940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_303944:
    // 0x303944: 0x246b0003  addiu       $t3, $v1, 0x3
    ctx->pc = 0x303944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_303948:
    // 0x303948: 0xc0b9404  jal         func_2E5010
label_30394c:
    if (ctx->pc == 0x30394Cu) {
        ctx->pc = 0x30394Cu;
            // 0x30394c: 0x34488081  ori         $t0, $v0, 0x8081 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
        ctx->pc = 0x303950u;
        goto label_303950;
    }
    ctx->pc = 0x303948u;
    SET_GPR_U32(ctx, 31, 0x303950u);
    ctx->pc = 0x30394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303948u;
            // 0x30394c: 0x34488081  ori         $t0, $v0, 0x8081 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303950u; }
        if (ctx->pc != 0x303950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303950u; }
        if (ctx->pc != 0x303950u) { return; }
    }
    ctx->pc = 0x303950u;
label_303950:
    // 0x303950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x303950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_303954:
    // 0x303954: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x303954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_303958:
    // 0x303958: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x303958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30395c:
    // 0x30395c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30395cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_303960:
    // 0x303960: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x303960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_303964:
    // 0x303964: 0x3e00008  jr          $ra
label_303968:
    if (ctx->pc == 0x303968u) {
        ctx->pc = 0x303968u;
            // 0x303968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x30396Cu;
        goto label_30396c;
    }
    ctx->pc = 0x303964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303964u;
            // 0x303968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30396Cu;
label_30396c:
    // 0x30396c: 0x0  nop
    ctx->pc = 0x30396cu;
    // NOP
}
