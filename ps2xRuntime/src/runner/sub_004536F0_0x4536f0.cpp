#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004536F0
// Address: 0x4536f0 - 0x453a60
void sub_004536F0_0x4536f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004536F0_0x4536f0");
#endif

    switch (ctx->pc) {
        case 0x4536f0u: goto label_4536f0;
        case 0x4536f4u: goto label_4536f4;
        case 0x4536f8u: goto label_4536f8;
        case 0x4536fcu: goto label_4536fc;
        case 0x453700u: goto label_453700;
        case 0x453704u: goto label_453704;
        case 0x453708u: goto label_453708;
        case 0x45370cu: goto label_45370c;
        case 0x453710u: goto label_453710;
        case 0x453714u: goto label_453714;
        case 0x453718u: goto label_453718;
        case 0x45371cu: goto label_45371c;
        case 0x453720u: goto label_453720;
        case 0x453724u: goto label_453724;
        case 0x453728u: goto label_453728;
        case 0x45372cu: goto label_45372c;
        case 0x453730u: goto label_453730;
        case 0x453734u: goto label_453734;
        case 0x453738u: goto label_453738;
        case 0x45373cu: goto label_45373c;
        case 0x453740u: goto label_453740;
        case 0x453744u: goto label_453744;
        case 0x453748u: goto label_453748;
        case 0x45374cu: goto label_45374c;
        case 0x453750u: goto label_453750;
        case 0x453754u: goto label_453754;
        case 0x453758u: goto label_453758;
        case 0x45375cu: goto label_45375c;
        case 0x453760u: goto label_453760;
        case 0x453764u: goto label_453764;
        case 0x453768u: goto label_453768;
        case 0x45376cu: goto label_45376c;
        case 0x453770u: goto label_453770;
        case 0x453774u: goto label_453774;
        case 0x453778u: goto label_453778;
        case 0x45377cu: goto label_45377c;
        case 0x453780u: goto label_453780;
        case 0x453784u: goto label_453784;
        case 0x453788u: goto label_453788;
        case 0x45378cu: goto label_45378c;
        case 0x453790u: goto label_453790;
        case 0x453794u: goto label_453794;
        case 0x453798u: goto label_453798;
        case 0x45379cu: goto label_45379c;
        case 0x4537a0u: goto label_4537a0;
        case 0x4537a4u: goto label_4537a4;
        case 0x4537a8u: goto label_4537a8;
        case 0x4537acu: goto label_4537ac;
        case 0x4537b0u: goto label_4537b0;
        case 0x4537b4u: goto label_4537b4;
        case 0x4537b8u: goto label_4537b8;
        case 0x4537bcu: goto label_4537bc;
        case 0x4537c0u: goto label_4537c0;
        case 0x4537c4u: goto label_4537c4;
        case 0x4537c8u: goto label_4537c8;
        case 0x4537ccu: goto label_4537cc;
        case 0x4537d0u: goto label_4537d0;
        case 0x4537d4u: goto label_4537d4;
        case 0x4537d8u: goto label_4537d8;
        case 0x4537dcu: goto label_4537dc;
        case 0x4537e0u: goto label_4537e0;
        case 0x4537e4u: goto label_4537e4;
        case 0x4537e8u: goto label_4537e8;
        case 0x4537ecu: goto label_4537ec;
        case 0x4537f0u: goto label_4537f0;
        case 0x4537f4u: goto label_4537f4;
        case 0x4537f8u: goto label_4537f8;
        case 0x4537fcu: goto label_4537fc;
        case 0x453800u: goto label_453800;
        case 0x453804u: goto label_453804;
        case 0x453808u: goto label_453808;
        case 0x45380cu: goto label_45380c;
        case 0x453810u: goto label_453810;
        case 0x453814u: goto label_453814;
        case 0x453818u: goto label_453818;
        case 0x45381cu: goto label_45381c;
        case 0x453820u: goto label_453820;
        case 0x453824u: goto label_453824;
        case 0x453828u: goto label_453828;
        case 0x45382cu: goto label_45382c;
        case 0x453830u: goto label_453830;
        case 0x453834u: goto label_453834;
        case 0x453838u: goto label_453838;
        case 0x45383cu: goto label_45383c;
        case 0x453840u: goto label_453840;
        case 0x453844u: goto label_453844;
        case 0x453848u: goto label_453848;
        case 0x45384cu: goto label_45384c;
        case 0x453850u: goto label_453850;
        case 0x453854u: goto label_453854;
        case 0x453858u: goto label_453858;
        case 0x45385cu: goto label_45385c;
        case 0x453860u: goto label_453860;
        case 0x453864u: goto label_453864;
        case 0x453868u: goto label_453868;
        case 0x45386cu: goto label_45386c;
        case 0x453870u: goto label_453870;
        case 0x453874u: goto label_453874;
        case 0x453878u: goto label_453878;
        case 0x45387cu: goto label_45387c;
        case 0x453880u: goto label_453880;
        case 0x453884u: goto label_453884;
        case 0x453888u: goto label_453888;
        case 0x45388cu: goto label_45388c;
        case 0x453890u: goto label_453890;
        case 0x453894u: goto label_453894;
        case 0x453898u: goto label_453898;
        case 0x45389cu: goto label_45389c;
        case 0x4538a0u: goto label_4538a0;
        case 0x4538a4u: goto label_4538a4;
        case 0x4538a8u: goto label_4538a8;
        case 0x4538acu: goto label_4538ac;
        case 0x4538b0u: goto label_4538b0;
        case 0x4538b4u: goto label_4538b4;
        case 0x4538b8u: goto label_4538b8;
        case 0x4538bcu: goto label_4538bc;
        case 0x4538c0u: goto label_4538c0;
        case 0x4538c4u: goto label_4538c4;
        case 0x4538c8u: goto label_4538c8;
        case 0x4538ccu: goto label_4538cc;
        case 0x4538d0u: goto label_4538d0;
        case 0x4538d4u: goto label_4538d4;
        case 0x4538d8u: goto label_4538d8;
        case 0x4538dcu: goto label_4538dc;
        case 0x4538e0u: goto label_4538e0;
        case 0x4538e4u: goto label_4538e4;
        case 0x4538e8u: goto label_4538e8;
        case 0x4538ecu: goto label_4538ec;
        case 0x4538f0u: goto label_4538f0;
        case 0x4538f4u: goto label_4538f4;
        case 0x4538f8u: goto label_4538f8;
        case 0x4538fcu: goto label_4538fc;
        case 0x453900u: goto label_453900;
        case 0x453904u: goto label_453904;
        case 0x453908u: goto label_453908;
        case 0x45390cu: goto label_45390c;
        case 0x453910u: goto label_453910;
        case 0x453914u: goto label_453914;
        case 0x453918u: goto label_453918;
        case 0x45391cu: goto label_45391c;
        case 0x453920u: goto label_453920;
        case 0x453924u: goto label_453924;
        case 0x453928u: goto label_453928;
        case 0x45392cu: goto label_45392c;
        case 0x453930u: goto label_453930;
        case 0x453934u: goto label_453934;
        case 0x453938u: goto label_453938;
        case 0x45393cu: goto label_45393c;
        case 0x453940u: goto label_453940;
        case 0x453944u: goto label_453944;
        case 0x453948u: goto label_453948;
        case 0x45394cu: goto label_45394c;
        case 0x453950u: goto label_453950;
        case 0x453954u: goto label_453954;
        case 0x453958u: goto label_453958;
        case 0x45395cu: goto label_45395c;
        case 0x453960u: goto label_453960;
        case 0x453964u: goto label_453964;
        case 0x453968u: goto label_453968;
        case 0x45396cu: goto label_45396c;
        case 0x453970u: goto label_453970;
        case 0x453974u: goto label_453974;
        case 0x453978u: goto label_453978;
        case 0x45397cu: goto label_45397c;
        case 0x453980u: goto label_453980;
        case 0x453984u: goto label_453984;
        case 0x453988u: goto label_453988;
        case 0x45398cu: goto label_45398c;
        case 0x453990u: goto label_453990;
        case 0x453994u: goto label_453994;
        case 0x453998u: goto label_453998;
        case 0x45399cu: goto label_45399c;
        case 0x4539a0u: goto label_4539a0;
        case 0x4539a4u: goto label_4539a4;
        case 0x4539a8u: goto label_4539a8;
        case 0x4539acu: goto label_4539ac;
        case 0x4539b0u: goto label_4539b0;
        case 0x4539b4u: goto label_4539b4;
        case 0x4539b8u: goto label_4539b8;
        case 0x4539bcu: goto label_4539bc;
        case 0x4539c0u: goto label_4539c0;
        case 0x4539c4u: goto label_4539c4;
        case 0x4539c8u: goto label_4539c8;
        case 0x4539ccu: goto label_4539cc;
        case 0x4539d0u: goto label_4539d0;
        case 0x4539d4u: goto label_4539d4;
        case 0x4539d8u: goto label_4539d8;
        case 0x4539dcu: goto label_4539dc;
        case 0x4539e0u: goto label_4539e0;
        case 0x4539e4u: goto label_4539e4;
        case 0x4539e8u: goto label_4539e8;
        case 0x4539ecu: goto label_4539ec;
        case 0x4539f0u: goto label_4539f0;
        case 0x4539f4u: goto label_4539f4;
        case 0x4539f8u: goto label_4539f8;
        case 0x4539fcu: goto label_4539fc;
        case 0x453a00u: goto label_453a00;
        case 0x453a04u: goto label_453a04;
        case 0x453a08u: goto label_453a08;
        case 0x453a0cu: goto label_453a0c;
        case 0x453a10u: goto label_453a10;
        case 0x453a14u: goto label_453a14;
        case 0x453a18u: goto label_453a18;
        case 0x453a1cu: goto label_453a1c;
        case 0x453a20u: goto label_453a20;
        case 0x453a24u: goto label_453a24;
        case 0x453a28u: goto label_453a28;
        case 0x453a2cu: goto label_453a2c;
        case 0x453a30u: goto label_453a30;
        case 0x453a34u: goto label_453a34;
        case 0x453a38u: goto label_453a38;
        case 0x453a3cu: goto label_453a3c;
        case 0x453a40u: goto label_453a40;
        case 0x453a44u: goto label_453a44;
        case 0x453a48u: goto label_453a48;
        case 0x453a4cu: goto label_453a4c;
        case 0x453a50u: goto label_453a50;
        case 0x453a54u: goto label_453a54;
        case 0x453a58u: goto label_453a58;
        case 0x453a5cu: goto label_453a5c;
        default: break;
    }

    ctx->pc = 0x4536f0u;

label_4536f0:
    // 0x4536f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4536f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4536f4:
    // 0x4536f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4536f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4536f8:
    // 0x4536f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4536f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4536fc:
    // 0x4536fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4536fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_453700:
    // 0x453700: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x453700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_453704:
    // 0x453704: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x453704u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_453708:
    // 0x453708: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x453708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_45370c:
    // 0x45370c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x45370cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_453710:
    // 0x453710: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x453710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_453714:
    // 0x453714: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x453714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_453718:
    // 0x453718: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x453718u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45371c:
    // 0x45371c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_453720:
    // 0x453720: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x453720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_453724:
    // 0x453724: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x453724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_453728:
    // 0x453728: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x453728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_45372c:
    // 0x45372c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_453730:
    // 0x453730: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x453730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_453734:
    // 0x453734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x453734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_453738:
    // 0x453738: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x453738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45373c:
    // 0x45373c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45373cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_453740:
    // 0x453740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x453740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_453744:
    // 0x453744: 0xc454dab0  lwc1        $f20, -0x2550($v0)
    ctx->pc = 0x453744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_453748:
    // 0x453748: 0xc0d639c  jal         func_358E70
label_45374c:
    if (ctx->pc == 0x45374Cu) {
        ctx->pc = 0x45374Cu;
            // 0x45374c: 0x260400cc  addiu       $a0, $s0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
        ctx->pc = 0x453750u;
        goto label_453750;
    }
    ctx->pc = 0x453748u;
    SET_GPR_U32(ctx, 31, 0x453750u);
    ctx->pc = 0x45374Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453748u;
            // 0x45374c: 0x260400cc  addiu       $a0, $s0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453750u; }
        if (ctx->pc != 0x453750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453750u; }
        if (ctx->pc != 0x453750u) { return; }
    }
    ctx->pc = 0x453750u;
label_453750:
    // 0x453750: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_453754:
    if (ctx->pc == 0x453754u) {
        ctx->pc = 0x453758u;
        goto label_453758;
    }
    ctx->pc = 0x453750u;
    {
        const bool branch_taken_0x453750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453750) {
            ctx->pc = 0x453878u;
            goto label_453878;
        }
    }
    ctx->pc = 0x453758u;
label_453758:
    // 0x453758: 0xc0d1c14  jal         func_347050
label_45375c:
    if (ctx->pc == 0x45375Cu) {
        ctx->pc = 0x45375Cu;
            // 0x45375c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x453760u;
        goto label_453760;
    }
    ctx->pc = 0x453758u;
    SET_GPR_U32(ctx, 31, 0x453760u);
    ctx->pc = 0x45375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453758u;
            // 0x45375c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453760u; }
        if (ctx->pc != 0x453760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453760u; }
        if (ctx->pc != 0x453760u) { return; }
    }
    ctx->pc = 0x453760u;
label_453760:
    // 0x453760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x453760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453764:
    // 0x453764: 0xc04f278  jal         func_13C9E0
label_453768:
    if (ctx->pc == 0x453768u) {
        ctx->pc = 0x453768u;
            // 0x453768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45376Cu;
        goto label_45376c;
    }
    ctx->pc = 0x453764u;
    SET_GPR_U32(ctx, 31, 0x45376Cu);
    ctx->pc = 0x453768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453764u;
            // 0x453768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45376Cu; }
        if (ctx->pc != 0x45376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45376Cu; }
        if (ctx->pc != 0x45376Cu) { return; }
    }
    ctx->pc = 0x45376Cu;
label_45376c:
    // 0x45376c: 0xc0d1c10  jal         func_347040
label_453770:
    if (ctx->pc == 0x453770u) {
        ctx->pc = 0x453770u;
            // 0x453770: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x453774u;
        goto label_453774;
    }
    ctx->pc = 0x45376Cu;
    SET_GPR_U32(ctx, 31, 0x453774u);
    ctx->pc = 0x453770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45376Cu;
            // 0x453770: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453774u; }
        if (ctx->pc != 0x453774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453774u; }
        if (ctx->pc != 0x453774u) { return; }
    }
    ctx->pc = 0x453774u;
label_453774:
    // 0x453774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x453774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453778:
    // 0x453778: 0xc04ce80  jal         func_133A00
label_45377c:
    if (ctx->pc == 0x45377Cu) {
        ctx->pc = 0x45377Cu;
            // 0x45377c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453780u;
        goto label_453780;
    }
    ctx->pc = 0x453778u;
    SET_GPR_U32(ctx, 31, 0x453780u);
    ctx->pc = 0x45377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453778u;
            // 0x45377c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453780u; }
        if (ctx->pc != 0x453780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453780u; }
        if (ctx->pc != 0x453780u) { return; }
    }
    ctx->pc = 0x453780u;
label_453780:
    // 0x453780: 0xc0d4108  jal         func_350420
label_453784:
    if (ctx->pc == 0x453784u) {
        ctx->pc = 0x453788u;
        goto label_453788;
    }
    ctx->pc = 0x453780u;
    SET_GPR_U32(ctx, 31, 0x453788u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453788u; }
        if (ctx->pc != 0x453788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453788u; }
        if (ctx->pc != 0x453788u) { return; }
    }
    ctx->pc = 0x453788u;
label_453788:
    // 0x453788: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x453788u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45378c:
    // 0x45378c: 0xc0d4104  jal         func_350410
label_453790:
    if (ctx->pc == 0x453790u) {
        ctx->pc = 0x453790u;
            // 0x453790: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x453794u;
        goto label_453794;
    }
    ctx->pc = 0x45378Cu;
    SET_GPR_U32(ctx, 31, 0x453794u);
    ctx->pc = 0x453790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45378Cu;
            // 0x453790: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453794u; }
        if (ctx->pc != 0x453794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453794u; }
        if (ctx->pc != 0x453794u) { return; }
    }
    ctx->pc = 0x453794u;
label_453794:
    // 0x453794: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x453794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_453798:
    // 0x453798: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x453798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_45379c:
    // 0x45379c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x45379cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4537a0:
    // 0x4537a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4537a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4537a4:
    // 0x4537a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4537a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4537a8:
    // 0x4537a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4537a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4537ac:
    // 0x4537ac: 0xc0d40ac  jal         func_3502B0
label_4537b0:
    if (ctx->pc == 0x4537B0u) {
        ctx->pc = 0x4537B0u;
            // 0x4537b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4537B4u;
        goto label_4537b4;
    }
    ctx->pc = 0x4537ACu;
    SET_GPR_U32(ctx, 31, 0x4537B4u);
    ctx->pc = 0x4537B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4537ACu;
            // 0x4537b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537B4u; }
        if (ctx->pc != 0x4537B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537B4u; }
        if (ctx->pc != 0x4537B4u) { return; }
    }
    ctx->pc = 0x4537B4u;
label_4537b4:
    // 0x4537b4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4537b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4537b8:
    // 0x4537b8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_4537bc:
    if (ctx->pc == 0x4537BCu) {
        ctx->pc = 0x4537BCu;
            // 0x4537bc: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x4537C0u;
        goto label_4537c0;
    }
    ctx->pc = 0x4537B8u;
    {
        const bool branch_taken_0x4537b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4537BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4537B8u;
            // 0x4537bc: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4537b8) {
            ctx->pc = 0x453878u;
            goto label_453878;
        }
    }
    ctx->pc = 0x4537C0u;
label_4537c0:
    // 0x4537c0: 0x920301a0  lbu         $v1, 0x1A0($s0)
    ctx->pc = 0x4537c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 416)));
label_4537c4:
    // 0x4537c4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_4537c8:
    if (ctx->pc == 0x4537C8u) {
        ctx->pc = 0x4537CCu;
        goto label_4537cc;
    }
    ctx->pc = 0x4537C4u;
    {
        const bool branch_taken_0x4537c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4537c4) {
            ctx->pc = 0x453878u;
            goto label_453878;
        }
    }
    ctx->pc = 0x4537CCu;
label_4537cc:
    // 0x4537cc: 0xc04e738  jal         func_139CE0
label_4537d0:
    if (ctx->pc == 0x4537D0u) {
        ctx->pc = 0x4537D0u;
            // 0x4537d0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4537D4u;
        goto label_4537d4;
    }
    ctx->pc = 0x4537CCu;
    SET_GPR_U32(ctx, 31, 0x4537D4u);
    ctx->pc = 0x4537D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4537CCu;
            // 0x4537d0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537D4u; }
        if (ctx->pc != 0x4537D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537D4u; }
        if (ctx->pc != 0x4537D4u) { return; }
    }
    ctx->pc = 0x4537D4u;
label_4537d4:
    // 0x4537d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4537d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4537d8:
    // 0x4537d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4537d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4537dc:
    // 0x4537dc: 0xc04cd60  jal         func_133580
label_4537e0:
    if (ctx->pc == 0x4537E0u) {
        ctx->pc = 0x4537E0u;
            // 0x4537e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4537E4u;
        goto label_4537e4;
    }
    ctx->pc = 0x4537DCu;
    SET_GPR_U32(ctx, 31, 0x4537E4u);
    ctx->pc = 0x4537E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4537DCu;
            // 0x4537e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537E4u; }
        if (ctx->pc != 0x4537E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537E4u; }
        if (ctx->pc != 0x4537E4u) { return; }
    }
    ctx->pc = 0x4537E4u;
label_4537e4:
    // 0x4537e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4537e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4537e8:
    // 0x4537e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4537e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4537ec:
    // 0x4537ec: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4537ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4537f0:
    // 0x4537f0: 0xc04e4a4  jal         func_139290
label_4537f4:
    if (ctx->pc == 0x4537F4u) {
        ctx->pc = 0x4537F4u;
            // 0x4537f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4537F8u;
        goto label_4537f8;
    }
    ctx->pc = 0x4537F0u;
    SET_GPR_U32(ctx, 31, 0x4537F8u);
    ctx->pc = 0x4537F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4537F0u;
            // 0x4537f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537F8u; }
        if (ctx->pc != 0x4537F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4537F8u; }
        if (ctx->pc != 0x4537F8u) { return; }
    }
    ctx->pc = 0x4537F8u;
label_4537f8:
    // 0x4537f8: 0xc60c0194  lwc1        $f12, 0x194($s0)
    ctx->pc = 0x4537f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4537fc:
    // 0x4537fc: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4537fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_453800:
    // 0x453800: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x453800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_453804:
    // 0x453804: 0xc054bbc  jal         func_152EF0
label_453808:
    if (ctx->pc == 0x453808u) {
        ctx->pc = 0x453808u;
            // 0x453808: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->pc = 0x45380Cu;
        goto label_45380c;
    }
    ctx->pc = 0x453804u;
    SET_GPR_U32(ctx, 31, 0x45380Cu);
    ctx->pc = 0x453808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453804u;
            // 0x453808: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45380Cu; }
        if (ctx->pc != 0x45380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45380Cu; }
        if (ctx->pc != 0x45380Cu) { return; }
    }
    ctx->pc = 0x45380Cu;
label_45380c:
    // 0x45380c: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x45380cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_453810:
    // 0x453810: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x453810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_453814:
    // 0x453814: 0x320f809  jalr        $t9
label_453818:
    if (ctx->pc == 0x453818u) {
        ctx->pc = 0x453818u;
            // 0x453818: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x45381Cu;
        goto label_45381c;
    }
    ctx->pc = 0x453814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45381Cu);
        ctx->pc = 0x453818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453814u;
            // 0x453818: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45381Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45381Cu; }
            if (ctx->pc != 0x45381Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45381Cu;
label_45381c:
    // 0x45381c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x45381cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_453820:
    // 0x453820: 0xc60c0190  lwc1        $f12, 0x190($s0)
    ctx->pc = 0x453820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_453824:
    // 0x453824: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x453824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_453828:
    // 0x453828: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x453828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_45382c:
    // 0x45382c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x45382cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453830:
    // 0x453830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x453830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_453834:
    // 0x453834: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x453834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_453838:
    // 0x453838: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x453838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45383c:
    // 0x45383c: 0xc04cff4  jal         func_133FD0
label_453840:
    if (ctx->pc == 0x453840u) {
        ctx->pc = 0x453840u;
            // 0x453840: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x453844u;
        goto label_453844;
    }
    ctx->pc = 0x45383Cu;
    SET_GPR_U32(ctx, 31, 0x453844u);
    ctx->pc = 0x453840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45383Cu;
            // 0x453840: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453844u; }
        if (ctx->pc != 0x453844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453844u; }
        if (ctx->pc != 0x453844u) { return; }
    }
    ctx->pc = 0x453844u;
label_453844:
    // 0x453844: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x453844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_453848:
    // 0x453848: 0xc0b6e44  jal         func_2DB910
label_45384c:
    if (ctx->pc == 0x45384Cu) {
        ctx->pc = 0x45384Cu;
            // 0x45384c: 0x2484dae0  addiu       $a0, $a0, -0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
        ctx->pc = 0x453850u;
        goto label_453850;
    }
    ctx->pc = 0x453848u;
    SET_GPR_U32(ctx, 31, 0x453850u);
    ctx->pc = 0x45384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453848u;
            // 0x45384c: 0x2484dae0  addiu       $a0, $a0, -0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453850u; }
        if (ctx->pc != 0x453850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453850u; }
        if (ctx->pc != 0x453850u) { return; }
    }
    ctx->pc = 0x453850u;
label_453850:
    // 0x453850: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x453850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_453854:
    // 0x453854: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x453854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_453858:
    // 0x453858: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x453858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45385c:
    // 0x45385c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x45385cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_453860:
    // 0x453860: 0xc054c2c  jal         func_1530B0
label_453864:
    if (ctx->pc == 0x453864u) {
        ctx->pc = 0x453864u;
            // 0x453864: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x453868u;
        goto label_453868;
    }
    ctx->pc = 0x453860u;
    SET_GPR_U32(ctx, 31, 0x453868u);
    ctx->pc = 0x453864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453860u;
            // 0x453864: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453868u; }
        if (ctx->pc != 0x453868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453868u; }
        if (ctx->pc != 0x453868u) { return; }
    }
    ctx->pc = 0x453868u;
label_453868:
    // 0x453868: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x453868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_45386c:
    // 0x45386c: 0xc0b6de0  jal         func_2DB780
label_453870:
    if (ctx->pc == 0x453870u) {
        ctx->pc = 0x453870u;
            // 0x453870: 0x2484dad0  addiu       $a0, $a0, -0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957776));
        ctx->pc = 0x453874u;
        goto label_453874;
    }
    ctx->pc = 0x45386Cu;
    SET_GPR_U32(ctx, 31, 0x453874u);
    ctx->pc = 0x453870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45386Cu;
            // 0x453870: 0x2484dad0  addiu       $a0, $a0, -0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453874u; }
        if (ctx->pc != 0x453874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453874u; }
        if (ctx->pc != 0x453874u) { return; }
    }
    ctx->pc = 0x453874u;
label_453874:
    // 0x453874: 0x0  nop
    ctx->pc = 0x453874u;
    // NOP
label_453878:
    // 0x453878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x453878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_45387c:
    // 0x45387c: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x45387cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_453880:
    // 0x453880: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
label_453884:
    if (ctx->pc == 0x453884u) {
        ctx->pc = 0x453884u;
            // 0x453884: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x453888u;
        goto label_453888;
    }
    ctx->pc = 0x453880u;
    {
        const bool branch_taken_0x453880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x453884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453880u;
            // 0x453884: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453880) {
            ctx->pc = 0x453748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_453748;
        }
    }
    ctx->pc = 0x453888u;
label_453888:
    // 0x453888: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x453888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_45388c:
    // 0x45388c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_453890:
    // 0x453890: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x453890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_453894:
    // 0x453894: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x453894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_453898:
    // 0x453898: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x453898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45389c:
    // 0x45389c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x45389cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4538a0:
    // 0x4538a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4538a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4538a4:
    // 0x4538a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4538a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4538a8:
    // 0x4538a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4538a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4538ac:
    // 0x4538ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4538acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4538b0:
    // 0x4538b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4538b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4538b4:
    // 0x4538b4: 0x3e00008  jr          $ra
label_4538b8:
    if (ctx->pc == 0x4538B8u) {
        ctx->pc = 0x4538B8u;
            // 0x4538b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4538BCu;
        goto label_4538bc;
    }
    ctx->pc = 0x4538B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4538B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4538B4u;
            // 0x4538b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4538BCu;
label_4538bc:
    // 0x4538bc: 0x0  nop
    ctx->pc = 0x4538bcu;
    // NOP
label_4538c0:
    // 0x4538c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4538c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4538c4:
    // 0x4538c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4538c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4538c8:
    // 0x4538c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4538c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4538cc:
    // 0x4538cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4538ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4538d0:
    // 0x4538d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4538d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4538d4:
    // 0x4538d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4538d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4538d8:
    // 0x4538d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4538d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4538dc:
    // 0x4538dc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4538dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4538e0:
    // 0x4538e0: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x4538e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4538e4:
    // 0x4538e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4538e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4538e8:
    // 0x4538e8: 0x320f809  jalr        $t9
label_4538ec:
    if (ctx->pc == 0x4538ECu) {
        ctx->pc = 0x4538ECu;
            // 0x4538ec: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x4538F0u;
        goto label_4538f0;
    }
    ctx->pc = 0x4538E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4538F0u);
        ctx->pc = 0x4538ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4538E8u;
            // 0x4538ec: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4538F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4538F0u; }
            if (ctx->pc != 0x4538F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4538F0u;
label_4538f0:
    // 0x4538f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4538f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4538f4:
    // 0x4538f4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x4538f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4538f8:
    // 0x4538f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4538fc:
    if (ctx->pc == 0x4538FCu) {
        ctx->pc = 0x4538FCu;
            // 0x4538fc: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x453900u;
        goto label_453900;
    }
    ctx->pc = 0x4538F8u;
    {
        const bool branch_taken_0x4538f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4538FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4538F8u;
            // 0x4538fc: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4538f8) {
            ctx->pc = 0x4538E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4538e0;
        }
    }
    ctx->pc = 0x453900u;
label_453900:
    // 0x453900: 0x8e440304  lw          $a0, 0x304($s2)
    ctx->pc = 0x453900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_453904:
    // 0x453904: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_453908:
    if (ctx->pc == 0x453908u) {
        ctx->pc = 0x453908u;
            // 0x453908: 0x26440054  addiu       $a0, $s2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
        ctx->pc = 0x45390Cu;
        goto label_45390c;
    }
    ctx->pc = 0x453904u;
    {
        const bool branch_taken_0x453904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x453904) {
            ctx->pc = 0x453908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453904u;
            // 0x453908: 0x26440054  addiu       $a0, $s2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453920u;
            goto label_453920;
        }
    }
    ctx->pc = 0x45390Cu;
label_45390c:
    // 0x45390c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x45390cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_453910:
    // 0x453910: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x453910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_453914:
    // 0x453914: 0x320f809  jalr        $t9
label_453918:
    if (ctx->pc == 0x453918u) {
        ctx->pc = 0x453918u;
            // 0x453918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45391Cu;
        goto label_45391c;
    }
    ctx->pc = 0x453914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45391Cu);
        ctx->pc = 0x453918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453914u;
            // 0x453918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45391Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45391Cu; }
            if (ctx->pc != 0x45391Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45391Cu;
label_45391c:
    // 0x45391c: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x45391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_453920:
    // 0x453920: 0xc0d37dc  jal         func_34DF70
label_453924:
    if (ctx->pc == 0x453924u) {
        ctx->pc = 0x453924u;
            // 0x453924: 0xae400304  sw          $zero, 0x304($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 0));
        ctx->pc = 0x453928u;
        goto label_453928;
    }
    ctx->pc = 0x453920u;
    SET_GPR_U32(ctx, 31, 0x453928u);
    ctx->pc = 0x453924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453920u;
            // 0x453924: 0xae400304  sw          $zero, 0x304($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453928u; }
        if (ctx->pc != 0x453928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453928u; }
        if (ctx->pc != 0x453928u) { return; }
    }
    ctx->pc = 0x453928u;
label_453928:
    // 0x453928: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x453928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_45392c:
    // 0x45392c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45392cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_453930:
    // 0x453930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x453930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_453934:
    // 0x453934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x453934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_453938:
    // 0x453938: 0x3e00008  jr          $ra
label_45393c:
    if (ctx->pc == 0x45393Cu) {
        ctx->pc = 0x45393Cu;
            // 0x45393c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x453940u;
        goto label_453940;
    }
    ctx->pc = 0x453938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453938u;
            // 0x45393c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x453940u;
label_453940:
    // 0x453940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x453940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_453944:
    // 0x453944: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x453944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_453948:
    // 0x453948: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x453948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_45394c:
    // 0x45394c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45394cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453950:
    // 0x453950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x453950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_453954:
    // 0x453954: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x453954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_453958:
    // 0x453958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x453958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45395c:
    // 0x45395c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x45395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_453960:
    // 0x453960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_453964:
    // 0x453964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x453964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_453968:
    // 0x453968: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x453968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45396c:
    // 0x45396c: 0x8c4275a8  lw          $v0, 0x75A8($v0)
    ctx->pc = 0x45396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30120)));
label_453970:
    // 0x453970: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x453970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_453974:
    // 0x453974: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x453974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453978:
    // 0x453978: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x453978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_45397c:
    // 0x45397c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x45397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453980:
    // 0x453980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x453980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_453984:
    // 0x453984: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x453984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_453988:
    // 0x453988: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x453988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45398c:
    // 0x45398c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x45398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_453990:
    // 0x453990: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x453990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_453994:
    // 0x453994: 0xc0d37ec  jal         func_34DFB0
label_453998:
    if (ctx->pc == 0x453998u) {
        ctx->pc = 0x453998u;
            // 0x453998: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x45399Cu;
        goto label_45399c;
    }
    ctx->pc = 0x453994u;
    SET_GPR_U32(ctx, 31, 0x45399Cu);
    ctx->pc = 0x453998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453994u;
            // 0x453998: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45399Cu; }
        if (ctx->pc != 0x45399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45399Cu; }
        if (ctx->pc != 0x45399Cu) { return; }
    }
    ctx->pc = 0x45399Cu;
label_45399c:
    // 0x45399c: 0xae31005c  sw          $s1, 0x5C($s1)
    ctx->pc = 0x45399cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 17));
label_4539a0:
    // 0x4539a0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4539a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4539a4:
    // 0x4539a4: 0xae510130  sw          $s1, 0x130($s2)
    ctx->pc = 0x4539a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 17));
label_4539a8:
    // 0x4539a8: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x4539a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_4539ac:
    // 0x4539ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4539acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4539b0:
    // 0x4539b0: 0x320f809  jalr        $t9
label_4539b4:
    if (ctx->pc == 0x4539B4u) {
        ctx->pc = 0x4539B4u;
            // 0x4539b4: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x4539B8u;
        goto label_4539b8;
    }
    ctx->pc = 0x4539B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4539B8u);
        ctx->pc = 0x4539B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4539B0u;
            // 0x4539b4: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4539B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4539B8u; }
            if (ctx->pc != 0x4539B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4539B8u;
label_4539b8:
    // 0x4539b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4539b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4539bc:
    // 0x4539bc: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x4539bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4539c0:
    // 0x4539c0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4539c4:
    if (ctx->pc == 0x4539C4u) {
        ctx->pc = 0x4539C4u;
            // 0x4539c4: 0x26520150  addiu       $s2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->pc = 0x4539C8u;
        goto label_4539c8;
    }
    ctx->pc = 0x4539C0u;
    {
        const bool branch_taken_0x4539c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4539C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4539C0u;
            // 0x4539c4: 0x26520150  addiu       $s2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4539c0) {
            ctx->pc = 0x4539A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4539a4;
        }
    }
    ctx->pc = 0x4539C8u;
label_4539c8:
    // 0x4539c8: 0xc040180  jal         func_100600
label_4539cc:
    if (ctx->pc == 0x4539CCu) {
        ctx->pc = 0x4539CCu;
            // 0x4539cc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4539D0u;
        goto label_4539d0;
    }
    ctx->pc = 0x4539C8u;
    SET_GPR_U32(ctx, 31, 0x4539D0u);
    ctx->pc = 0x4539CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4539C8u;
            // 0x4539cc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4539D0u; }
        if (ctx->pc != 0x4539D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4539D0u; }
        if (ctx->pc != 0x4539D0u) { return; }
    }
    ctx->pc = 0x4539D0u;
label_4539d0:
    // 0x4539d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4539d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4539d4:
    // 0x4539d4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4539d8:
    if (ctx->pc == 0x4539D8u) {
        ctx->pc = 0x4539D8u;
            // 0x4539d8: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->pc = 0x4539DCu;
        goto label_4539dc;
    }
    ctx->pc = 0x4539D4u;
    {
        const bool branch_taken_0x4539d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4539d4) {
            ctx->pc = 0x4539D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4539D4u;
            // 0x4539d8: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453A14u;
            goto label_453a14;
        }
    }
    ctx->pc = 0x4539DCu;
label_4539dc:
    // 0x4539dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4539dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4539e0:
    // 0x4539e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4539e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4539e4:
    // 0x4539e4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4539e8:
    // 0x4539e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4539e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4539ec:
    // 0x4539ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4539ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4539f0:
    // 0x4539f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4539f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4539f4:
    // 0x4539f4: 0xc040138  jal         func_1004E0
label_4539f8:
    if (ctx->pc == 0x4539F8u) {
        ctx->pc = 0x4539F8u;
            // 0x4539f8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4539FCu;
        goto label_4539fc;
    }
    ctx->pc = 0x4539F4u;
    SET_GPR_U32(ctx, 31, 0x4539FCu);
    ctx->pc = 0x4539F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4539F4u;
            // 0x4539f8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4539FCu; }
        if (ctx->pc != 0x4539FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4539FCu; }
        if (ctx->pc != 0x4539FCu) { return; }
    }
    ctx->pc = 0x4539FCu;
label_4539fc:
    // 0x4539fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4539fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_453a00:
    // 0x453a00: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x453a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_453a04:
    // 0x453a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453a08:
    // 0x453a08: 0xc04a576  jal         func_1295D8
label_453a0c:
    if (ctx->pc == 0x453A0Cu) {
        ctx->pc = 0x453A0Cu;
            // 0x453a0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x453A10u;
        goto label_453a10;
    }
    ctx->pc = 0x453A08u;
    SET_GPR_U32(ctx, 31, 0x453A10u);
    ctx->pc = 0x453A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453A08u;
            // 0x453a0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A10u; }
        if (ctx->pc != 0x453A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A10u; }
        if (ctx->pc != 0x453A10u) { return; }
    }
    ctx->pc = 0x453A10u;
label_453a10:
    // 0x453a10: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x453a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_453a14:
    // 0x453a14: 0x3c0347ef  lui         $v1, 0x47EF
    ctx->pc = 0x453a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18415 << 16));
label_453a18:
    // 0x453a18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x453a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_453a1c:
    // 0x453a1c: 0x34634200  ori         $v1, $v1, 0x4200
    ctx->pc = 0x453a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16896);
label_453a20:
    // 0x453a20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x453a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_453a24:
    // 0x453a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x453a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_453a28:
    // 0x453a28: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x453a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_453a2c:
    // 0x453a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453a30:
    // 0x453a30: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x453a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_453a34:
    // 0x453a34: 0x344614ae  ori         $a2, $v0, 0x14AE
    ctx->pc = 0x453a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
label_453a38:
    // 0x453a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x453a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453a3c:
    // 0x453a3c: 0xc122cd8  jal         func_48B360
label_453a40:
    if (ctx->pc == 0x453A40u) {
        ctx->pc = 0x453A40u;
            // 0x453a40: 0xae300304  sw          $s0, 0x304($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 16));
        ctx->pc = 0x453A44u;
        goto label_453a44;
    }
    ctx->pc = 0x453A3Cu;
    SET_GPR_U32(ctx, 31, 0x453A44u);
    ctx->pc = 0x453A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453A3Cu;
            // 0x453a40: 0xae300304  sw          $s0, 0x304($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A44u; }
        if (ctx->pc != 0x453A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A44u; }
        if (ctx->pc != 0x453A44u) { return; }
    }
    ctx->pc = 0x453A44u;
label_453a44:
    // 0x453a44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x453a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_453a48:
    // 0x453a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x453a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_453a4c:
    // 0x453a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x453a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_453a50:
    // 0x453a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x453a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_453a54:
    // 0x453a54: 0x3e00008  jr          $ra
label_453a58:
    if (ctx->pc == 0x453A58u) {
        ctx->pc = 0x453A58u;
            // 0x453a58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x453A5Cu;
        goto label_453a5c;
    }
    ctx->pc = 0x453A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453A54u;
            // 0x453a58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x453A5Cu;
label_453a5c:
    // 0x453a5c: 0x0  nop
    ctx->pc = 0x453a5cu;
    // NOP
}
