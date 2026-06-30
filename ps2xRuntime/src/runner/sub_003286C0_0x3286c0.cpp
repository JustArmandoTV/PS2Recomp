#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003286C0
// Address: 0x3286c0 - 0x328a80
void sub_003286C0_0x3286c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003286C0_0x3286c0");
#endif

    switch (ctx->pc) {
        case 0x3286c0u: goto label_3286c0;
        case 0x3286c4u: goto label_3286c4;
        case 0x3286c8u: goto label_3286c8;
        case 0x3286ccu: goto label_3286cc;
        case 0x3286d0u: goto label_3286d0;
        case 0x3286d4u: goto label_3286d4;
        case 0x3286d8u: goto label_3286d8;
        case 0x3286dcu: goto label_3286dc;
        case 0x3286e0u: goto label_3286e0;
        case 0x3286e4u: goto label_3286e4;
        case 0x3286e8u: goto label_3286e8;
        case 0x3286ecu: goto label_3286ec;
        case 0x3286f0u: goto label_3286f0;
        case 0x3286f4u: goto label_3286f4;
        case 0x3286f8u: goto label_3286f8;
        case 0x3286fcu: goto label_3286fc;
        case 0x328700u: goto label_328700;
        case 0x328704u: goto label_328704;
        case 0x328708u: goto label_328708;
        case 0x32870cu: goto label_32870c;
        case 0x328710u: goto label_328710;
        case 0x328714u: goto label_328714;
        case 0x328718u: goto label_328718;
        case 0x32871cu: goto label_32871c;
        case 0x328720u: goto label_328720;
        case 0x328724u: goto label_328724;
        case 0x328728u: goto label_328728;
        case 0x32872cu: goto label_32872c;
        case 0x328730u: goto label_328730;
        case 0x328734u: goto label_328734;
        case 0x328738u: goto label_328738;
        case 0x32873cu: goto label_32873c;
        case 0x328740u: goto label_328740;
        case 0x328744u: goto label_328744;
        case 0x328748u: goto label_328748;
        case 0x32874cu: goto label_32874c;
        case 0x328750u: goto label_328750;
        case 0x328754u: goto label_328754;
        case 0x328758u: goto label_328758;
        case 0x32875cu: goto label_32875c;
        case 0x328760u: goto label_328760;
        case 0x328764u: goto label_328764;
        case 0x328768u: goto label_328768;
        case 0x32876cu: goto label_32876c;
        case 0x328770u: goto label_328770;
        case 0x328774u: goto label_328774;
        case 0x328778u: goto label_328778;
        case 0x32877cu: goto label_32877c;
        case 0x328780u: goto label_328780;
        case 0x328784u: goto label_328784;
        case 0x328788u: goto label_328788;
        case 0x32878cu: goto label_32878c;
        case 0x328790u: goto label_328790;
        case 0x328794u: goto label_328794;
        case 0x328798u: goto label_328798;
        case 0x32879cu: goto label_32879c;
        case 0x3287a0u: goto label_3287a0;
        case 0x3287a4u: goto label_3287a4;
        case 0x3287a8u: goto label_3287a8;
        case 0x3287acu: goto label_3287ac;
        case 0x3287b0u: goto label_3287b0;
        case 0x3287b4u: goto label_3287b4;
        case 0x3287b8u: goto label_3287b8;
        case 0x3287bcu: goto label_3287bc;
        case 0x3287c0u: goto label_3287c0;
        case 0x3287c4u: goto label_3287c4;
        case 0x3287c8u: goto label_3287c8;
        case 0x3287ccu: goto label_3287cc;
        case 0x3287d0u: goto label_3287d0;
        case 0x3287d4u: goto label_3287d4;
        case 0x3287d8u: goto label_3287d8;
        case 0x3287dcu: goto label_3287dc;
        case 0x3287e0u: goto label_3287e0;
        case 0x3287e4u: goto label_3287e4;
        case 0x3287e8u: goto label_3287e8;
        case 0x3287ecu: goto label_3287ec;
        case 0x3287f0u: goto label_3287f0;
        case 0x3287f4u: goto label_3287f4;
        case 0x3287f8u: goto label_3287f8;
        case 0x3287fcu: goto label_3287fc;
        case 0x328800u: goto label_328800;
        case 0x328804u: goto label_328804;
        case 0x328808u: goto label_328808;
        case 0x32880cu: goto label_32880c;
        case 0x328810u: goto label_328810;
        case 0x328814u: goto label_328814;
        case 0x328818u: goto label_328818;
        case 0x32881cu: goto label_32881c;
        case 0x328820u: goto label_328820;
        case 0x328824u: goto label_328824;
        case 0x328828u: goto label_328828;
        case 0x32882cu: goto label_32882c;
        case 0x328830u: goto label_328830;
        case 0x328834u: goto label_328834;
        case 0x328838u: goto label_328838;
        case 0x32883cu: goto label_32883c;
        case 0x328840u: goto label_328840;
        case 0x328844u: goto label_328844;
        case 0x328848u: goto label_328848;
        case 0x32884cu: goto label_32884c;
        case 0x328850u: goto label_328850;
        case 0x328854u: goto label_328854;
        case 0x328858u: goto label_328858;
        case 0x32885cu: goto label_32885c;
        case 0x328860u: goto label_328860;
        case 0x328864u: goto label_328864;
        case 0x328868u: goto label_328868;
        case 0x32886cu: goto label_32886c;
        case 0x328870u: goto label_328870;
        case 0x328874u: goto label_328874;
        case 0x328878u: goto label_328878;
        case 0x32887cu: goto label_32887c;
        case 0x328880u: goto label_328880;
        case 0x328884u: goto label_328884;
        case 0x328888u: goto label_328888;
        case 0x32888cu: goto label_32888c;
        case 0x328890u: goto label_328890;
        case 0x328894u: goto label_328894;
        case 0x328898u: goto label_328898;
        case 0x32889cu: goto label_32889c;
        case 0x3288a0u: goto label_3288a0;
        case 0x3288a4u: goto label_3288a4;
        case 0x3288a8u: goto label_3288a8;
        case 0x3288acu: goto label_3288ac;
        case 0x3288b0u: goto label_3288b0;
        case 0x3288b4u: goto label_3288b4;
        case 0x3288b8u: goto label_3288b8;
        case 0x3288bcu: goto label_3288bc;
        case 0x3288c0u: goto label_3288c0;
        case 0x3288c4u: goto label_3288c4;
        case 0x3288c8u: goto label_3288c8;
        case 0x3288ccu: goto label_3288cc;
        case 0x3288d0u: goto label_3288d0;
        case 0x3288d4u: goto label_3288d4;
        case 0x3288d8u: goto label_3288d8;
        case 0x3288dcu: goto label_3288dc;
        case 0x3288e0u: goto label_3288e0;
        case 0x3288e4u: goto label_3288e4;
        case 0x3288e8u: goto label_3288e8;
        case 0x3288ecu: goto label_3288ec;
        case 0x3288f0u: goto label_3288f0;
        case 0x3288f4u: goto label_3288f4;
        case 0x3288f8u: goto label_3288f8;
        case 0x3288fcu: goto label_3288fc;
        case 0x328900u: goto label_328900;
        case 0x328904u: goto label_328904;
        case 0x328908u: goto label_328908;
        case 0x32890cu: goto label_32890c;
        case 0x328910u: goto label_328910;
        case 0x328914u: goto label_328914;
        case 0x328918u: goto label_328918;
        case 0x32891cu: goto label_32891c;
        case 0x328920u: goto label_328920;
        case 0x328924u: goto label_328924;
        case 0x328928u: goto label_328928;
        case 0x32892cu: goto label_32892c;
        case 0x328930u: goto label_328930;
        case 0x328934u: goto label_328934;
        case 0x328938u: goto label_328938;
        case 0x32893cu: goto label_32893c;
        case 0x328940u: goto label_328940;
        case 0x328944u: goto label_328944;
        case 0x328948u: goto label_328948;
        case 0x32894cu: goto label_32894c;
        case 0x328950u: goto label_328950;
        case 0x328954u: goto label_328954;
        case 0x328958u: goto label_328958;
        case 0x32895cu: goto label_32895c;
        case 0x328960u: goto label_328960;
        case 0x328964u: goto label_328964;
        case 0x328968u: goto label_328968;
        case 0x32896cu: goto label_32896c;
        case 0x328970u: goto label_328970;
        case 0x328974u: goto label_328974;
        case 0x328978u: goto label_328978;
        case 0x32897cu: goto label_32897c;
        case 0x328980u: goto label_328980;
        case 0x328984u: goto label_328984;
        case 0x328988u: goto label_328988;
        case 0x32898cu: goto label_32898c;
        case 0x328990u: goto label_328990;
        case 0x328994u: goto label_328994;
        case 0x328998u: goto label_328998;
        case 0x32899cu: goto label_32899c;
        case 0x3289a0u: goto label_3289a0;
        case 0x3289a4u: goto label_3289a4;
        case 0x3289a8u: goto label_3289a8;
        case 0x3289acu: goto label_3289ac;
        case 0x3289b0u: goto label_3289b0;
        case 0x3289b4u: goto label_3289b4;
        case 0x3289b8u: goto label_3289b8;
        case 0x3289bcu: goto label_3289bc;
        case 0x3289c0u: goto label_3289c0;
        case 0x3289c4u: goto label_3289c4;
        case 0x3289c8u: goto label_3289c8;
        case 0x3289ccu: goto label_3289cc;
        case 0x3289d0u: goto label_3289d0;
        case 0x3289d4u: goto label_3289d4;
        case 0x3289d8u: goto label_3289d8;
        case 0x3289dcu: goto label_3289dc;
        case 0x3289e0u: goto label_3289e0;
        case 0x3289e4u: goto label_3289e4;
        case 0x3289e8u: goto label_3289e8;
        case 0x3289ecu: goto label_3289ec;
        case 0x3289f0u: goto label_3289f0;
        case 0x3289f4u: goto label_3289f4;
        case 0x3289f8u: goto label_3289f8;
        case 0x3289fcu: goto label_3289fc;
        case 0x328a00u: goto label_328a00;
        case 0x328a04u: goto label_328a04;
        case 0x328a08u: goto label_328a08;
        case 0x328a0cu: goto label_328a0c;
        case 0x328a10u: goto label_328a10;
        case 0x328a14u: goto label_328a14;
        case 0x328a18u: goto label_328a18;
        case 0x328a1cu: goto label_328a1c;
        case 0x328a20u: goto label_328a20;
        case 0x328a24u: goto label_328a24;
        case 0x328a28u: goto label_328a28;
        case 0x328a2cu: goto label_328a2c;
        case 0x328a30u: goto label_328a30;
        case 0x328a34u: goto label_328a34;
        case 0x328a38u: goto label_328a38;
        case 0x328a3cu: goto label_328a3c;
        case 0x328a40u: goto label_328a40;
        case 0x328a44u: goto label_328a44;
        case 0x328a48u: goto label_328a48;
        case 0x328a4cu: goto label_328a4c;
        case 0x328a50u: goto label_328a50;
        case 0x328a54u: goto label_328a54;
        case 0x328a58u: goto label_328a58;
        case 0x328a5cu: goto label_328a5c;
        case 0x328a60u: goto label_328a60;
        case 0x328a64u: goto label_328a64;
        case 0x328a68u: goto label_328a68;
        case 0x328a6cu: goto label_328a6c;
        case 0x328a70u: goto label_328a70;
        case 0x328a74u: goto label_328a74;
        case 0x328a78u: goto label_328a78;
        case 0x328a7cu: goto label_328a7c;
        default: break;
    }

    ctx->pc = 0x3286c0u;

label_3286c0:
    // 0x3286c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3286c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3286c4:
    // 0x3286c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3286c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3286c8:
    // 0x3286c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3286c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3286cc:
    // 0x3286cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3286ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3286d0:
    // 0x3286d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3286d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3286d4:
    // 0x3286d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3286d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3286d8:
    // 0x3286d8: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x3286d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3286dc:
    // 0x3286dc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3286e0:
    if (ctx->pc == 0x3286E0u) {
        ctx->pc = 0x3286E0u;
            // 0x3286e0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3286E4u;
        goto label_3286e4;
    }
    ctx->pc = 0x3286DCu;
    {
        const bool branch_taken_0x3286dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3286DCu;
            // 0x3286e0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286dc) {
            ctx->pc = 0x3286F4u;
            goto label_3286f4;
        }
    }
    ctx->pc = 0x3286E4u;
label_3286e4:
    // 0x3286e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3286e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3286e8:
    // 0x3286e8: 0xc0fe48c  jal         func_3F9230
label_3286ec:
    if (ctx->pc == 0x3286ECu) {
        ctx->pc = 0x3286ECu;
            // 0x3286ec: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3286F0u;
        goto label_3286f0;
    }
    ctx->pc = 0x3286E8u;
    SET_GPR_U32(ctx, 31, 0x3286F0u);
    ctx->pc = 0x3286ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3286E8u;
            // 0x3286ec: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3286F0u; }
        if (ctx->pc != 0x3286F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3286F0u; }
        if (ctx->pc != 0x3286F0u) { return; }
    }
    ctx->pc = 0x3286F0u;
label_3286f0:
    // 0x3286f0: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x3286f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_3286f4:
    // 0x3286f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3286f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3286f8:
    // 0x3286f8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3286f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3286fc:
    // 0x3286fc: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x3286fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_328700:
    // 0x328700: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_328704:
    if (ctx->pc == 0x328704u) {
        ctx->pc = 0x328708u;
        goto label_328708;
    }
    ctx->pc = 0x328700u;
    {
        const bool branch_taken_0x328700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328700) {
            ctx->pc = 0x328718u;
            goto label_328718;
        }
    }
    ctx->pc = 0x328708u;
label_328708:
    // 0x328708: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32870c:
    // 0x32870c: 0xc0fe48c  jal         func_3F9230
label_328710:
    if (ctx->pc == 0x328710u) {
        ctx->pc = 0x328710u;
            // 0x328710: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328714u;
        goto label_328714;
    }
    ctx->pc = 0x32870Cu;
    SET_GPR_U32(ctx, 31, 0x328714u);
    ctx->pc = 0x328710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32870Cu;
            // 0x328710: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328714u; }
        if (ctx->pc != 0x328714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328714u; }
        if (ctx->pc != 0x328714u) { return; }
    }
    ctx->pc = 0x328714u;
label_328714:
    // 0x328714: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x328714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_328718:
    // 0x328718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32871c:
    // 0x32871c: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x32871cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
label_328720:
    // 0x328720: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_328724:
    if (ctx->pc == 0x328724u) {
        ctx->pc = 0x328724u;
            // 0x328724: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x328728u;
        goto label_328728;
    }
    ctx->pc = 0x328720u;
    {
        const bool branch_taken_0x328720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328720u;
            // 0x328724: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328720) {
            ctx->pc = 0x3286FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3286fc;
        }
    }
    ctx->pc = 0x328728u;
label_328728:
    // 0x328728: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x328728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_32872c:
    // 0x32872c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_328730:
    if (ctx->pc == 0x328730u) {
        ctx->pc = 0x328730u;
            // 0x328730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328734u;
        goto label_328734;
    }
    ctx->pc = 0x32872Cu;
    {
        const bool branch_taken_0x32872c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32872c) {
            ctx->pc = 0x328730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32872Cu;
            // 0x328730: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328748u;
            goto label_328748;
        }
    }
    ctx->pc = 0x328734u;
label_328734:
    // 0x328734: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328738:
    // 0x328738: 0xc0fe48c  jal         func_3F9230
label_32873c:
    if (ctx->pc == 0x32873Cu) {
        ctx->pc = 0x32873Cu;
            // 0x32873c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328740u;
        goto label_328740;
    }
    ctx->pc = 0x328738u;
    SET_GPR_U32(ctx, 31, 0x328740u);
    ctx->pc = 0x32873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328738u;
            // 0x32873c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328740u; }
        if (ctx->pc != 0x328740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328740u; }
        if (ctx->pc != 0x328740u) { return; }
    }
    ctx->pc = 0x328740u;
label_328740:
    // 0x328740: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x328740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_328744:
    // 0x328744: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x328744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328748:
    // 0x328748: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x328748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32874c:
    // 0x32874c: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x32874cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_328750:
    // 0x328750: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_328754:
    if (ctx->pc == 0x328754u) {
        ctx->pc = 0x328758u;
        goto label_328758;
    }
    ctx->pc = 0x328750u;
    {
        const bool branch_taken_0x328750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328750) {
            ctx->pc = 0x328768u;
            goto label_328768;
        }
    }
    ctx->pc = 0x328758u;
label_328758:
    // 0x328758: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32875c:
    // 0x32875c: 0xc0fe48c  jal         func_3F9230
label_328760:
    if (ctx->pc == 0x328760u) {
        ctx->pc = 0x328760u;
            // 0x328760: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328764u;
        goto label_328764;
    }
    ctx->pc = 0x32875Cu;
    SET_GPR_U32(ctx, 31, 0x328764u);
    ctx->pc = 0x328760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32875Cu;
            // 0x328760: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328764u; }
        if (ctx->pc != 0x328764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328764u; }
        if (ctx->pc != 0x328764u) { return; }
    }
    ctx->pc = 0x328764u;
label_328764:
    // 0x328764: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x328764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_328768:
    // 0x328768: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x328768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_32876c:
    // 0x32876c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_328770:
    if (ctx->pc == 0x328770u) {
        ctx->pc = 0x328774u;
        goto label_328774;
    }
    ctx->pc = 0x32876Cu;
    {
        const bool branch_taken_0x32876c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32876c) {
            ctx->pc = 0x328788u;
            goto label_328788;
        }
    }
    ctx->pc = 0x328774u;
label_328774:
    // 0x328774: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328778:
    // 0x328778: 0xc0fe48c  jal         func_3F9230
label_32877c:
    if (ctx->pc == 0x32877Cu) {
        ctx->pc = 0x32877Cu;
            // 0x32877c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328780u;
        goto label_328780;
    }
    ctx->pc = 0x328778u;
    SET_GPR_U32(ctx, 31, 0x328780u);
    ctx->pc = 0x32877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328778u;
            // 0x32877c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328780u; }
        if (ctx->pc != 0x328780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328780u; }
        if (ctx->pc != 0x328780u) { return; }
    }
    ctx->pc = 0x328780u;
label_328780:
    // 0x328780: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x328780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_328784:
    // 0x328784: 0x0  nop
    ctx->pc = 0x328784u;
    // NOP
label_328788:
    // 0x328788: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_32878c:
    // 0x32878c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x32878cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_328790:
    // 0x328790: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_328794:
    if (ctx->pc == 0x328794u) {
        ctx->pc = 0x328794u;
            // 0x328794: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x328798u;
        goto label_328798;
    }
    ctx->pc = 0x328790u;
    {
        const bool branch_taken_0x328790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328790u;
            // 0x328794: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328790) {
            ctx->pc = 0x32874Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32874c;
        }
    }
    ctx->pc = 0x328798u;
label_328798:
    // 0x328798: 0x8e650610  lw          $a1, 0x610($s3)
    ctx->pc = 0x328798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1552)));
label_32879c:
    // 0x32879c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_3287a0:
    if (ctx->pc == 0x3287A0u) {
        ctx->pc = 0x3287A0u;
            // 0x3287a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3287A4u;
        goto label_3287a4;
    }
    ctx->pc = 0x32879Cu;
    {
        const bool branch_taken_0x32879c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32879c) {
            ctx->pc = 0x3287A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32879Cu;
            // 0x3287a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3287B8u;
            goto label_3287b8;
        }
    }
    ctx->pc = 0x3287A4u;
label_3287a4:
    // 0x3287a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3287a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3287a8:
    // 0x3287a8: 0xc0fe48c  jal         func_3F9230
label_3287ac:
    if (ctx->pc == 0x3287ACu) {
        ctx->pc = 0x3287ACu;
            // 0x3287ac: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3287B0u;
        goto label_3287b0;
    }
    ctx->pc = 0x3287A8u;
    SET_GPR_U32(ctx, 31, 0x3287B0u);
    ctx->pc = 0x3287ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3287A8u;
            // 0x3287ac: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3287B0u; }
        if (ctx->pc != 0x3287B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3287B0u; }
        if (ctx->pc != 0x3287B0u) { return; }
    }
    ctx->pc = 0x3287B0u;
label_3287b0:
    // 0x3287b0: 0xae600610  sw          $zero, 0x610($s3)
    ctx->pc = 0x3287b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1552), GPR_U32(ctx, 0));
label_3287b4:
    // 0x3287b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3287b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3287b8:
    // 0x3287b8: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x3287b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3287bc:
    // 0x3287bc: 0x8e4405dc  lw          $a0, 0x5DC($s2)
    ctx->pc = 0x3287bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1500)));
label_3287c0:
    // 0x3287c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3287c4:
    if (ctx->pc == 0x3287C4u) {
        ctx->pc = 0x3287C4u;
            // 0x3287c4: 0x265005dc  addiu       $s0, $s2, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1500));
        ctx->pc = 0x3287C8u;
        goto label_3287c8;
    }
    ctx->pc = 0x3287C0u;
    {
        const bool branch_taken_0x3287c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3287C0u;
            // 0x3287c4: 0x265005dc  addiu       $s0, $s2, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287c0) {
            ctx->pc = 0x3287D8u;
            goto label_3287d8;
        }
    }
    ctx->pc = 0x3287C8u;
label_3287c8:
    // 0x3287c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3287c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3287cc:
    // 0x3287cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3287ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3287d0:
    // 0x3287d0: 0x320f809  jalr        $t9
label_3287d4:
    if (ctx->pc == 0x3287D4u) {
        ctx->pc = 0x3287D4u;
            // 0x3287d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3287D8u;
        goto label_3287d8;
    }
    ctx->pc = 0x3287D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3287D8u);
        ctx->pc = 0x3287D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3287D0u;
            // 0x3287d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3287D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3287D8u; }
            if (ctx->pc != 0x3287D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3287D8u;
label_3287d8:
    // 0x3287d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3287d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3287dc:
    // 0x3287dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3287dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3287e0:
    // 0x3287e0: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x3287e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_3287e4:
    // 0x3287e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3287e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3287e8:
    // 0x3287e8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3287ec:
    if (ctx->pc == 0x3287ECu) {
        ctx->pc = 0x3287ECu;
            // 0x3287ec: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x3287F0u;
        goto label_3287f0;
    }
    ctx->pc = 0x3287E8u;
    {
        const bool branch_taken_0x3287e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3287ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3287E8u;
            // 0x3287ec: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287e8) {
            ctx->pc = 0x3287BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3287bc;
        }
    }
    ctx->pc = 0x3287F0u;
label_3287f0:
    // 0x3287f0: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x3287f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3287f4:
    // 0x3287f4: 0x26720410  addiu       $s2, $s3, 0x410
    ctx->pc = 0x3287f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1040));
label_3287f8:
    // 0x3287f8: 0x8e6301d4  lw          $v1, 0x1D4($s3)
    ctx->pc = 0x3287f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
label_3287fc:
    // 0x3287fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_328800:
    if (ctx->pc == 0x328800u) {
        ctx->pc = 0x328800u;
            // 0x328800: 0x26500164  addiu       $s0, $s2, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
        ctx->pc = 0x328804u;
        goto label_328804;
    }
    ctx->pc = 0x3287FCu;
    {
        const bool branch_taken_0x3287fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3287FCu;
            // 0x328800: 0x26500164  addiu       $s0, $s2, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287fc) {
            ctx->pc = 0x328820u;
            goto label_328820;
        }
    }
    ctx->pc = 0x328804u;
label_328804:
    // 0x328804: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328808:
    // 0x328808: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_32880c:
    if (ctx->pc == 0x32880Cu) {
        ctx->pc = 0x328810u;
        goto label_328810;
    }
    ctx->pc = 0x328808u;
    {
        const bool branch_taken_0x328808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328808) {
            ctx->pc = 0x328820u;
            goto label_328820;
        }
    }
    ctx->pc = 0x328810u;
label_328810:
    // 0x328810: 0xc074a08  jal         func_1D2820
label_328814:
    if (ctx->pc == 0x328814u) {
        ctx->pc = 0x328814u;
            // 0x328814: 0x8e640674  lw          $a0, 0x674($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1652)));
        ctx->pc = 0x328818u;
        goto label_328818;
    }
    ctx->pc = 0x328810u;
    SET_GPR_U32(ctx, 31, 0x328818u);
    ctx->pc = 0x328814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328810u;
            // 0x328814: 0x8e640674  lw          $a0, 0x674($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1652)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328818u; }
        if (ctx->pc != 0x328818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328818u; }
        if (ctx->pc != 0x328818u) { return; }
    }
    ctx->pc = 0x328818u;
label_328818:
    // 0x328818: 0xae600674  sw          $zero, 0x674($s3)
    ctx->pc = 0x328818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1652), GPR_U32(ctx, 0));
label_32881c:
    // 0x32881c: 0x0  nop
    ctx->pc = 0x32881cu;
    // NOP
label_328820:
    // 0x328820: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x328820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328824:
    // 0x328824: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_328828:
    if (ctx->pc == 0x328828u) {
        ctx->pc = 0x32882Cu;
        goto label_32882c;
    }
    ctx->pc = 0x328824u;
    {
        const bool branch_taken_0x328824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328824) {
            ctx->pc = 0x328850u;
            goto label_328850;
        }
    }
    ctx->pc = 0x32882Cu;
label_32882c:
    // 0x32882c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_328830:
    if (ctx->pc == 0x328830u) {
        ctx->pc = 0x328834u;
        goto label_328834;
    }
    ctx->pc = 0x32882Cu;
    {
        const bool branch_taken_0x32882c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32882c) {
            ctx->pc = 0x328848u;
            goto label_328848;
        }
    }
    ctx->pc = 0x328834u;
label_328834:
    // 0x328834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x328834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328838:
    // 0x328838: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32883c:
    // 0x32883c: 0x320f809  jalr        $t9
label_328840:
    if (ctx->pc == 0x328840u) {
        ctx->pc = 0x328840u;
            // 0x328840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x328844u;
        goto label_328844;
    }
    ctx->pc = 0x32883Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x328844u);
        ctx->pc = 0x328840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32883Cu;
            // 0x328840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x328844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x328844u; }
            if (ctx->pc != 0x328844u) { return; }
        }
        }
    }
    ctx->pc = 0x328844u;
label_328844:
    // 0x328844: 0x0  nop
    ctx->pc = 0x328844u;
    // NOP
label_328848:
    // 0x328848: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x328848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32884c:
    // 0x32884c: 0x0  nop
    ctx->pc = 0x32884cu;
    // NOP
label_328850:
    // 0x328850: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x328850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_328854:
    // 0x328854: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_328858:
    if (ctx->pc == 0x328858u) {
        ctx->pc = 0x32885Cu;
        goto label_32885c;
    }
    ctx->pc = 0x328854u;
    {
        const bool branch_taken_0x328854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328854) {
            ctx->pc = 0x328880u;
            goto label_328880;
        }
    }
    ctx->pc = 0x32885Cu;
label_32885c:
    // 0x32885c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_328860:
    if (ctx->pc == 0x328860u) {
        ctx->pc = 0x328864u;
        goto label_328864;
    }
    ctx->pc = 0x32885Cu;
    {
        const bool branch_taken_0x32885c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32885c) {
            ctx->pc = 0x328878u;
            goto label_328878;
        }
    }
    ctx->pc = 0x328864u;
label_328864:
    // 0x328864: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x328864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328868:
    // 0x328868: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x328868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32886c:
    // 0x32886c: 0x320f809  jalr        $t9
label_328870:
    if (ctx->pc == 0x328870u) {
        ctx->pc = 0x328870u;
            // 0x328870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x328874u;
        goto label_328874;
    }
    ctx->pc = 0x32886Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x328874u);
        ctx->pc = 0x328870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32886Cu;
            // 0x328870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x328874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x328874u; }
            if (ctx->pc != 0x328874u) { return; }
        }
        }
    }
    ctx->pc = 0x328874u;
label_328874:
    // 0x328874: 0x0  nop
    ctx->pc = 0x328874u;
    // NOP
label_328878:
    // 0x328878: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x328878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_32887c:
    // 0x32887c: 0x0  nop
    ctx->pc = 0x32887cu;
    // NOP
label_328880:
    // 0x328880: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328884:
    // 0x328884: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_328888:
    if (ctx->pc == 0x328888u) {
        ctx->pc = 0x32888Cu;
        goto label_32888c;
    }
    ctx->pc = 0x328884u;
    {
        const bool branch_taken_0x328884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328884) {
            ctx->pc = 0x3288B0u;
            goto label_3288b0;
        }
    }
    ctx->pc = 0x32888Cu;
label_32888c:
    // 0x32888c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_328890:
    if (ctx->pc == 0x328890u) {
        ctx->pc = 0x328894u;
        goto label_328894;
    }
    ctx->pc = 0x32888Cu;
    {
        const bool branch_taken_0x32888c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32888c) {
            ctx->pc = 0x3288A8u;
            goto label_3288a8;
        }
    }
    ctx->pc = 0x328894u;
label_328894:
    // 0x328894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x328894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328898:
    // 0x328898: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x328898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32889c:
    // 0x32889c: 0x320f809  jalr        $t9
label_3288a0:
    if (ctx->pc == 0x3288A0u) {
        ctx->pc = 0x3288A0u;
            // 0x3288a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3288A4u;
        goto label_3288a4;
    }
    ctx->pc = 0x32889Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3288A4u);
        ctx->pc = 0x3288A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32889Cu;
            // 0x3288a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3288A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3288A4u; }
            if (ctx->pc != 0x3288A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3288A4u;
label_3288a4:
    // 0x3288a4: 0x0  nop
    ctx->pc = 0x3288a4u;
    // NOP
label_3288a8:
    // 0x3288a8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3288a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3288ac:
    // 0x3288ac: 0x0  nop
    ctx->pc = 0x3288acu;
    // NOP
label_3288b0:
    // 0x3288b0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3288b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3288b4:
    // 0x3288b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3288b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3288b8:
    // 0x3288b8: 0xc04a576  jal         func_1295D8
label_3288bc:
    if (ctx->pc == 0x3288BCu) {
        ctx->pc = 0x3288BCu;
            // 0x3288bc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x3288C0u;
        goto label_3288c0;
    }
    ctx->pc = 0x3288B8u;
    SET_GPR_U32(ctx, 31, 0x3288C0u);
    ctx->pc = 0x3288BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3288B8u;
            // 0x3288bc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3288C0u; }
        if (ctx->pc != 0x3288C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3288C0u; }
        if (ctx->pc != 0x3288C0u) { return; }
    }
    ctx->pc = 0x3288C0u;
label_3288c0:
    // 0x3288c0: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x3288c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3288c4:
    // 0x3288c4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3288c8:
    if (ctx->pc == 0x3288C8u) {
        ctx->pc = 0x3288CCu;
        goto label_3288cc;
    }
    ctx->pc = 0x3288C4u;
    {
        const bool branch_taken_0x3288c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3288c4) {
            ctx->pc = 0x3288F0u;
            goto label_3288f0;
        }
    }
    ctx->pc = 0x3288CCu;
label_3288cc:
    // 0x3288cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_3288d0:
    if (ctx->pc == 0x3288D0u) {
        ctx->pc = 0x3288D4u;
        goto label_3288d4;
    }
    ctx->pc = 0x3288CCu;
    {
        const bool branch_taken_0x3288cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3288cc) {
            ctx->pc = 0x3288E8u;
            goto label_3288e8;
        }
    }
    ctx->pc = 0x3288D4u;
label_3288d4:
    // 0x3288d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3288d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3288d8:
    // 0x3288d8: 0xc0fe404  jal         func_3F9010
label_3288dc:
    if (ctx->pc == 0x3288DCu) {
        ctx->pc = 0x3288DCu;
            // 0x3288dc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3288E0u;
        goto label_3288e0;
    }
    ctx->pc = 0x3288D8u;
    SET_GPR_U32(ctx, 31, 0x3288E0u);
    ctx->pc = 0x3288DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3288D8u;
            // 0x3288dc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9010u;
    if (runtime->hasFunction(0x3F9010u)) {
        auto targetFn = runtime->lookupFunction(0x3F9010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3288E0u; }
        if (ctx->pc != 0x3288E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9010_0x3f9010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3288E0u; }
        if (ctx->pc != 0x3288E0u) { return; }
    }
    ctx->pc = 0x3288E0u;
label_3288e0:
    // 0x3288e0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x3288e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_3288e4:
    // 0x3288e4: 0x0  nop
    ctx->pc = 0x3288e4u;
    // NOP
label_3288e8:
    // 0x3288e8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x3288e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_3288ec:
    // 0x3288ec: 0x0  nop
    ctx->pc = 0x3288ecu;
    // NOP
label_3288f0:
    // 0x3288f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3288f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3288f4:
    // 0x3288f4: 0x621ffc0  bgez        $s1, . + 4 + (-0x40 << 2)
label_3288f8:
    if (ctx->pc == 0x3288F8u) {
        ctx->pc = 0x3288F8u;
            // 0x3288f8: 0x2652ff98  addiu       $s2, $s2, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967192));
        ctx->pc = 0x3288FCu;
        goto label_3288fc;
    }
    ctx->pc = 0x3288F4u;
    {
        const bool branch_taken_0x3288f4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3288F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3288F4u;
            // 0x3288f8: 0x2652ff98  addiu       $s2, $s2, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288f4) {
            ctx->pc = 0x3287F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3287f8;
        }
    }
    ctx->pc = 0x3288FCu;
label_3288fc:
    // 0x3288fc: 0x8e650128  lw          $a1, 0x128($s3)
    ctx->pc = 0x3288fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_328900:
    // 0x328900: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_328904:
    if (ctx->pc == 0x328904u) {
        ctx->pc = 0x328904u;
            // 0x328904: 0x8e70066c  lw          $s0, 0x66C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1644)));
        ctx->pc = 0x328908u;
        goto label_328908;
    }
    ctx->pc = 0x328900u;
    {
        const bool branch_taken_0x328900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328900) {
            ctx->pc = 0x328904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328900u;
            // 0x328904: 0x8e70066c  lw          $s0, 0x66C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1644)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32891Cu;
            goto label_32891c;
        }
    }
    ctx->pc = 0x328908u;
label_328908:
    // 0x328908: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32890c:
    // 0x32890c: 0xc0fe48c  jal         func_3F9230
label_328910:
    if (ctx->pc == 0x328910u) {
        ctx->pc = 0x328910u;
            // 0x328910: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328914u;
        goto label_328914;
    }
    ctx->pc = 0x32890Cu;
    SET_GPR_U32(ctx, 31, 0x328914u);
    ctx->pc = 0x328910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32890Cu;
            // 0x328910: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328914u; }
        if (ctx->pc != 0x328914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328914u; }
        if (ctx->pc != 0x328914u) { return; }
    }
    ctx->pc = 0x328914u;
label_328914:
    // 0x328914: 0xae600128  sw          $zero, 0x128($s3)
    ctx->pc = 0x328914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 0));
label_328918:
    // 0x328918: 0x8e70066c  lw          $s0, 0x66C($s3)
    ctx->pc = 0x328918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1644)));
label_32891c:
    // 0x32891c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_328920:
    if (ctx->pc == 0x328920u) {
        ctx->pc = 0x328920u;
            // 0x328920: 0x8e700670  lw          $s0, 0x670($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
        ctx->pc = 0x328924u;
        goto label_328924;
    }
    ctx->pc = 0x32891Cu;
    {
        const bool branch_taken_0x32891c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32891c) {
            ctx->pc = 0x328920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32891Cu;
            // 0x328920: 0x8e700670  lw          $s0, 0x670($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328944u;
            goto label_328944;
        }
    }
    ctx->pc = 0x328924u;
label_328924:
    // 0x328924: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_328928:
    if (ctx->pc == 0x328928u) {
        ctx->pc = 0x328928u;
            // 0x328928: 0xae60066c  sw          $zero, 0x66C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1644), GPR_U32(ctx, 0));
        ctx->pc = 0x32892Cu;
        goto label_32892c;
    }
    ctx->pc = 0x328924u;
    {
        const bool branch_taken_0x328924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328924) {
            ctx->pc = 0x328928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328924u;
            // 0x328928: 0xae60066c  sw          $zero, 0x66C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328940u;
            goto label_328940;
        }
    }
    ctx->pc = 0x32892Cu;
label_32892c:
    // 0x32892c: 0xc07507c  jal         func_1D41F0
label_328930:
    if (ctx->pc == 0x328930u) {
        ctx->pc = 0x328930u;
            // 0x328930: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x328934u;
        goto label_328934;
    }
    ctx->pc = 0x32892Cu;
    SET_GPR_U32(ctx, 31, 0x328934u);
    ctx->pc = 0x328930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32892Cu;
            // 0x328930: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328934u; }
        if (ctx->pc != 0x328934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328934u; }
        if (ctx->pc != 0x328934u) { return; }
    }
    ctx->pc = 0x328934u;
label_328934:
    // 0x328934: 0xc0400a8  jal         func_1002A0
label_328938:
    if (ctx->pc == 0x328938u) {
        ctx->pc = 0x328938u;
            // 0x328938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32893Cu;
        goto label_32893c;
    }
    ctx->pc = 0x328934u;
    SET_GPR_U32(ctx, 31, 0x32893Cu);
    ctx->pc = 0x328938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328934u;
            // 0x328938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32893Cu; }
        if (ctx->pc != 0x32893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32893Cu; }
        if (ctx->pc != 0x32893Cu) { return; }
    }
    ctx->pc = 0x32893Cu;
label_32893c:
    // 0x32893c: 0xae60066c  sw          $zero, 0x66C($s3)
    ctx->pc = 0x32893cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1644), GPR_U32(ctx, 0));
label_328940:
    // 0x328940: 0x8e700670  lw          $s0, 0x670($s3)
    ctx->pc = 0x328940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
label_328944:
    // 0x328944: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_328948:
    if (ctx->pc == 0x328948u) {
        ctx->pc = 0x328948u;
            // 0x328948: 0x8e700668  lw          $s0, 0x668($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
        ctx->pc = 0x32894Cu;
        goto label_32894c;
    }
    ctx->pc = 0x328944u;
    {
        const bool branch_taken_0x328944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328944) {
            ctx->pc = 0x328948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328944u;
            // 0x328948: 0x8e700668  lw          $s0, 0x668($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32896Cu;
            goto label_32896c;
        }
    }
    ctx->pc = 0x32894Cu;
label_32894c:
    // 0x32894c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_328950:
    if (ctx->pc == 0x328950u) {
        ctx->pc = 0x328950u;
            // 0x328950: 0xae600670  sw          $zero, 0x670($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
        ctx->pc = 0x328954u;
        goto label_328954;
    }
    ctx->pc = 0x32894Cu;
    {
        const bool branch_taken_0x32894c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32894c) {
            ctx->pc = 0x328950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32894Cu;
            // 0x328950: 0xae600670  sw          $zero, 0x670($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328968u;
            goto label_328968;
        }
    }
    ctx->pc = 0x328954u;
label_328954:
    // 0x328954: 0xc07507c  jal         func_1D41F0
label_328958:
    if (ctx->pc == 0x328958u) {
        ctx->pc = 0x328958u;
            // 0x328958: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x32895Cu;
        goto label_32895c;
    }
    ctx->pc = 0x328954u;
    SET_GPR_U32(ctx, 31, 0x32895Cu);
    ctx->pc = 0x328958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328954u;
            // 0x328958: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32895Cu; }
        if (ctx->pc != 0x32895Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32895Cu; }
        if (ctx->pc != 0x32895Cu) { return; }
    }
    ctx->pc = 0x32895Cu;
label_32895c:
    // 0x32895c: 0xc0400a8  jal         func_1002A0
label_328960:
    if (ctx->pc == 0x328960u) {
        ctx->pc = 0x328960u;
            // 0x328960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328964u;
        goto label_328964;
    }
    ctx->pc = 0x32895Cu;
    SET_GPR_U32(ctx, 31, 0x328964u);
    ctx->pc = 0x328960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32895Cu;
            // 0x328960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328964u; }
        if (ctx->pc != 0x328964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328964u; }
        if (ctx->pc != 0x328964u) { return; }
    }
    ctx->pc = 0x328964u;
label_328964:
    // 0x328964: 0xae600670  sw          $zero, 0x670($s3)
    ctx->pc = 0x328964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
label_328968:
    // 0x328968: 0x8e700668  lw          $s0, 0x668($s3)
    ctx->pc = 0x328968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
label_32896c:
    // 0x32896c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_328970:
    if (ctx->pc == 0x328970u) {
        ctx->pc = 0x328970u;
            // 0x328970: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x328974u;
        goto label_328974;
    }
    ctx->pc = 0x32896Cu;
    {
        const bool branch_taken_0x32896c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32896c) {
            ctx->pc = 0x328970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32896Cu;
            // 0x328970: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328994u;
            goto label_328994;
        }
    }
    ctx->pc = 0x328974u;
label_328974:
    // 0x328974: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_328978:
    if (ctx->pc == 0x328978u) {
        ctx->pc = 0x328978u;
            // 0x328978: 0xae600668  sw          $zero, 0x668($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 0));
        ctx->pc = 0x32897Cu;
        goto label_32897c;
    }
    ctx->pc = 0x328974u;
    {
        const bool branch_taken_0x328974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x328974) {
            ctx->pc = 0x328978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328974u;
            // 0x328978: 0xae600668  sw          $zero, 0x668($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328990u;
            goto label_328990;
        }
    }
    ctx->pc = 0x32897Cu;
label_32897c:
    // 0x32897c: 0xc07507c  jal         func_1D41F0
label_328980:
    if (ctx->pc == 0x328980u) {
        ctx->pc = 0x328980u;
            // 0x328980: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x328984u;
        goto label_328984;
    }
    ctx->pc = 0x32897Cu;
    SET_GPR_U32(ctx, 31, 0x328984u);
    ctx->pc = 0x328980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32897Cu;
            // 0x328980: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328984u; }
        if (ctx->pc != 0x328984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328984u; }
        if (ctx->pc != 0x328984u) { return; }
    }
    ctx->pc = 0x328984u;
label_328984:
    // 0x328984: 0xc0400a8  jal         func_1002A0
label_328988:
    if (ctx->pc == 0x328988u) {
        ctx->pc = 0x328988u;
            // 0x328988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32898Cu;
        goto label_32898c;
    }
    ctx->pc = 0x328984u;
    SET_GPR_U32(ctx, 31, 0x32898Cu);
    ctx->pc = 0x328988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328984u;
            // 0x328988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32898Cu; }
        if (ctx->pc != 0x32898Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32898Cu; }
        if (ctx->pc != 0x32898Cu) { return; }
    }
    ctx->pc = 0x32898Cu;
label_32898c:
    // 0x32898c: 0xae600668  sw          $zero, 0x668($s3)
    ctx->pc = 0x32898cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1640), GPR_U32(ctx, 0));
label_328990:
    // 0x328990: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x328990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_328994:
    // 0x328994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x328994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_328998:
    // 0x328998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32899c:
    // 0x32899c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32899cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3289a0:
    // 0x3289a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3289a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3289a4:
    // 0x3289a4: 0x3e00008  jr          $ra
label_3289a8:
    if (ctx->pc == 0x3289A8u) {
        ctx->pc = 0x3289A8u;
            // 0x3289a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3289ACu;
        goto label_3289ac;
    }
    ctx->pc = 0x3289A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3289A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3289A4u;
            // 0x3289a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3289ACu;
label_3289ac:
    // 0x3289ac: 0x0  nop
    ctx->pc = 0x3289acu;
    // NOP
label_3289b0:
    // 0x3289b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3289b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3289b4:
    // 0x3289b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3289b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3289b8:
    // 0x3289b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3289b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3289bc:
    // 0x3289bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3289bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3289c0:
    // 0x3289c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3289c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3289c4:
    // 0x3289c4: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_3289c8:
    if (ctx->pc == 0x3289C8u) {
        ctx->pc = 0x3289C8u;
            // 0x3289c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3289CCu;
        goto label_3289cc;
    }
    ctx->pc = 0x3289C4u;
    {
        const bool branch_taken_0x3289c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3289C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3289C4u;
            // 0x3289c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289c4) {
            ctx->pc = 0x328A5Cu;
            goto label_328a5c;
        }
    }
    ctx->pc = 0x3289CCu;
label_3289cc:
    // 0x3289cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3289ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3289d0:
    // 0x3289d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3289d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3289d4:
    // 0x3289d4: 0x24424600  addiu       $v0, $v0, 0x4600
    ctx->pc = 0x3289d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17920));
label_3289d8:
    // 0x3289d8: 0x24634618  addiu       $v1, $v1, 0x4618
    ctx->pc = 0x3289d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17944));
label_3289dc:
    // 0x3289dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3289dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3289e0:
    // 0x3289e0: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x3289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3289e4:
    // 0x3289e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3289e8:
    if (ctx->pc == 0x3289E8u) {
        ctx->pc = 0x3289E8u;
            // 0x3289e8: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x3289ECu;
        goto label_3289ec;
    }
    ctx->pc = 0x3289E4u;
    {
        const bool branch_taken_0x3289e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3289E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3289E4u;
            // 0x3289e8: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289e4) {
            ctx->pc = 0x328A30u;
            goto label_328a30;
        }
    }
    ctx->pc = 0x3289ECu;
label_3289ec:
    // 0x3289ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3289ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3289f0:
    // 0x3289f0: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x3289f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
label_3289f4:
    // 0x3289f4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3289f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_3289f8:
    // 0x3289f8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3289f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3289fc:
    // 0x3289fc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_328a00:
    if (ctx->pc == 0x328A00u) {
        ctx->pc = 0x328A00u;
            // 0x328a00: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x328A04u;
        goto label_328a04;
    }
    ctx->pc = 0x3289FCu;
    {
        const bool branch_taken_0x3289fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289fc) {
            ctx->pc = 0x328A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3289FCu;
            // 0x328a00: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328A18u;
            goto label_328a18;
        }
    }
    ctx->pc = 0x328A04u;
label_328a04:
    // 0x328a04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_328a08:
    // 0x328a08: 0xc0fe48c  jal         func_3F9230
label_328a0c:
    if (ctx->pc == 0x328A0Cu) {
        ctx->pc = 0x328A0Cu;
            // 0x328a0c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x328A10u;
        goto label_328a10;
    }
    ctx->pc = 0x328A08u;
    SET_GPR_U32(ctx, 31, 0x328A10u);
    ctx->pc = 0x328A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328A08u;
            // 0x328a0c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328A10u; }
        if (ctx->pc != 0x328A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328A10u; }
        if (ctx->pc != 0x328A10u) { return; }
    }
    ctx->pc = 0x328A10u;
label_328a10:
    // 0x328a10: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x328a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_328a14:
    // 0x328a14: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x328a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_328a18:
    // 0x328a18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_328a1c:
    if (ctx->pc == 0x328A1Cu) {
        ctx->pc = 0x328A20u;
        goto label_328a20;
    }
    ctx->pc = 0x328A18u;
    {
        const bool branch_taken_0x328a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a18) {
            ctx->pc = 0x328A30u;
            goto label_328a30;
        }
    }
    ctx->pc = 0x328A20u;
label_328a20:
    // 0x328a20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_328a24:
    if (ctx->pc == 0x328A24u) {
        ctx->pc = 0x328A28u;
        goto label_328a28;
    }
    ctx->pc = 0x328A20u;
    {
        const bool branch_taken_0x328a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a20) {
            ctx->pc = 0x328A30u;
            goto label_328a30;
        }
    }
    ctx->pc = 0x328A28u;
label_328a28:
    // 0x328a28: 0xc0b4b3c  jal         func_2D2CF0
label_328a2c:
    if (ctx->pc == 0x328A2Cu) {
        ctx->pc = 0x328A2Cu;
            // 0x328a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328A30u;
        goto label_328a30;
    }
    ctx->pc = 0x328A28u;
    SET_GPR_U32(ctx, 31, 0x328A30u);
    ctx->pc = 0x328A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328A28u;
            // 0x328a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (runtime->hasFunction(0x2D2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328A30u; }
        if (ctx->pc != 0x328A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2CF0_0x2d2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328A30u; }
        if (ctx->pc != 0x328A30u) { return; }
    }
    ctx->pc = 0x328A30u;
label_328a30:
    // 0x328a30: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_328a34:
    if (ctx->pc == 0x328A34u) {
        ctx->pc = 0x328A34u;
            // 0x328a34: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x328A38u;
        goto label_328a38;
    }
    ctx->pc = 0x328A30u;
    {
        const bool branch_taken_0x328a30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a30) {
            ctx->pc = 0x328A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328A30u;
            // 0x328a34: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328A48u;
            goto label_328a48;
        }
    }
    ctx->pc = 0x328A38u;
label_328a38:
    // 0x328a38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x328a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_328a3c:
    // 0x328a3c: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x328a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
label_328a40:
    // 0x328a40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x328a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_328a44:
    // 0x328a44: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x328a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_328a48:
    // 0x328a48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x328a48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_328a4c:
    // 0x328a4c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_328a50:
    if (ctx->pc == 0x328A50u) {
        ctx->pc = 0x328A50u;
            // 0x328a50: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328A54u;
        goto label_328a54;
    }
    ctx->pc = 0x328A4Cu;
    {
        const bool branch_taken_0x328a4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x328a4c) {
            ctx->pc = 0x328A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328A4Cu;
            // 0x328a50: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328A60u;
            goto label_328a60;
        }
    }
    ctx->pc = 0x328A54u;
label_328a54:
    // 0x328a54: 0xc0400a8  jal         func_1002A0
label_328a58:
    if (ctx->pc == 0x328A58u) {
        ctx->pc = 0x328A58u;
            // 0x328a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328A5Cu;
        goto label_328a5c;
    }
    ctx->pc = 0x328A54u;
    SET_GPR_U32(ctx, 31, 0x328A5Cu);
    ctx->pc = 0x328A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328A54u;
            // 0x328a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328A5Cu; }
        if (ctx->pc != 0x328A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328A5Cu; }
        if (ctx->pc != 0x328A5Cu) { return; }
    }
    ctx->pc = 0x328A5Cu;
label_328a5c:
    // 0x328a5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x328a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328a60:
    // 0x328a60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_328a64:
    // 0x328a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_328a68:
    // 0x328a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328a6c:
    // 0x328a6c: 0x3e00008  jr          $ra
label_328a70:
    if (ctx->pc == 0x328A70u) {
        ctx->pc = 0x328A70u;
            // 0x328a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x328A74u;
        goto label_328a74;
    }
    ctx->pc = 0x328A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328A6Cu;
            // 0x328a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x328A74u;
label_328a74:
    // 0x328a74: 0x0  nop
    ctx->pc = 0x328a74u;
    // NOP
label_328a78:
    // 0x328a78: 0x0  nop
    ctx->pc = 0x328a78u;
    // NOP
label_328a7c:
    // 0x328a7c: 0x0  nop
    ctx->pc = 0x328a7cu;
    // NOP
}
