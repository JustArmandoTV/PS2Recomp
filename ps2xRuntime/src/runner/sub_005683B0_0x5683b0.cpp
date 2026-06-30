#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005683B0
// Address: 0x5683b0 - 0x568870
void sub_005683B0_0x5683b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005683B0_0x5683b0");
#endif

    switch (ctx->pc) {
        case 0x5683b0u: goto label_5683b0;
        case 0x5683b4u: goto label_5683b4;
        case 0x5683b8u: goto label_5683b8;
        case 0x5683bcu: goto label_5683bc;
        case 0x5683c0u: goto label_5683c0;
        case 0x5683c4u: goto label_5683c4;
        case 0x5683c8u: goto label_5683c8;
        case 0x5683ccu: goto label_5683cc;
        case 0x5683d0u: goto label_5683d0;
        case 0x5683d4u: goto label_5683d4;
        case 0x5683d8u: goto label_5683d8;
        case 0x5683dcu: goto label_5683dc;
        case 0x5683e0u: goto label_5683e0;
        case 0x5683e4u: goto label_5683e4;
        case 0x5683e8u: goto label_5683e8;
        case 0x5683ecu: goto label_5683ec;
        case 0x5683f0u: goto label_5683f0;
        case 0x5683f4u: goto label_5683f4;
        case 0x5683f8u: goto label_5683f8;
        case 0x5683fcu: goto label_5683fc;
        case 0x568400u: goto label_568400;
        case 0x568404u: goto label_568404;
        case 0x568408u: goto label_568408;
        case 0x56840cu: goto label_56840c;
        case 0x568410u: goto label_568410;
        case 0x568414u: goto label_568414;
        case 0x568418u: goto label_568418;
        case 0x56841cu: goto label_56841c;
        case 0x568420u: goto label_568420;
        case 0x568424u: goto label_568424;
        case 0x568428u: goto label_568428;
        case 0x56842cu: goto label_56842c;
        case 0x568430u: goto label_568430;
        case 0x568434u: goto label_568434;
        case 0x568438u: goto label_568438;
        case 0x56843cu: goto label_56843c;
        case 0x568440u: goto label_568440;
        case 0x568444u: goto label_568444;
        case 0x568448u: goto label_568448;
        case 0x56844cu: goto label_56844c;
        case 0x568450u: goto label_568450;
        case 0x568454u: goto label_568454;
        case 0x568458u: goto label_568458;
        case 0x56845cu: goto label_56845c;
        case 0x568460u: goto label_568460;
        case 0x568464u: goto label_568464;
        case 0x568468u: goto label_568468;
        case 0x56846cu: goto label_56846c;
        case 0x568470u: goto label_568470;
        case 0x568474u: goto label_568474;
        case 0x568478u: goto label_568478;
        case 0x56847cu: goto label_56847c;
        case 0x568480u: goto label_568480;
        case 0x568484u: goto label_568484;
        case 0x568488u: goto label_568488;
        case 0x56848cu: goto label_56848c;
        case 0x568490u: goto label_568490;
        case 0x568494u: goto label_568494;
        case 0x568498u: goto label_568498;
        case 0x56849cu: goto label_56849c;
        case 0x5684a0u: goto label_5684a0;
        case 0x5684a4u: goto label_5684a4;
        case 0x5684a8u: goto label_5684a8;
        case 0x5684acu: goto label_5684ac;
        case 0x5684b0u: goto label_5684b0;
        case 0x5684b4u: goto label_5684b4;
        case 0x5684b8u: goto label_5684b8;
        case 0x5684bcu: goto label_5684bc;
        case 0x5684c0u: goto label_5684c0;
        case 0x5684c4u: goto label_5684c4;
        case 0x5684c8u: goto label_5684c8;
        case 0x5684ccu: goto label_5684cc;
        case 0x5684d0u: goto label_5684d0;
        case 0x5684d4u: goto label_5684d4;
        case 0x5684d8u: goto label_5684d8;
        case 0x5684dcu: goto label_5684dc;
        case 0x5684e0u: goto label_5684e0;
        case 0x5684e4u: goto label_5684e4;
        case 0x5684e8u: goto label_5684e8;
        case 0x5684ecu: goto label_5684ec;
        case 0x5684f0u: goto label_5684f0;
        case 0x5684f4u: goto label_5684f4;
        case 0x5684f8u: goto label_5684f8;
        case 0x5684fcu: goto label_5684fc;
        case 0x568500u: goto label_568500;
        case 0x568504u: goto label_568504;
        case 0x568508u: goto label_568508;
        case 0x56850cu: goto label_56850c;
        case 0x568510u: goto label_568510;
        case 0x568514u: goto label_568514;
        case 0x568518u: goto label_568518;
        case 0x56851cu: goto label_56851c;
        case 0x568520u: goto label_568520;
        case 0x568524u: goto label_568524;
        case 0x568528u: goto label_568528;
        case 0x56852cu: goto label_56852c;
        case 0x568530u: goto label_568530;
        case 0x568534u: goto label_568534;
        case 0x568538u: goto label_568538;
        case 0x56853cu: goto label_56853c;
        case 0x568540u: goto label_568540;
        case 0x568544u: goto label_568544;
        case 0x568548u: goto label_568548;
        case 0x56854cu: goto label_56854c;
        case 0x568550u: goto label_568550;
        case 0x568554u: goto label_568554;
        case 0x568558u: goto label_568558;
        case 0x56855cu: goto label_56855c;
        case 0x568560u: goto label_568560;
        case 0x568564u: goto label_568564;
        case 0x568568u: goto label_568568;
        case 0x56856cu: goto label_56856c;
        case 0x568570u: goto label_568570;
        case 0x568574u: goto label_568574;
        case 0x568578u: goto label_568578;
        case 0x56857cu: goto label_56857c;
        case 0x568580u: goto label_568580;
        case 0x568584u: goto label_568584;
        case 0x568588u: goto label_568588;
        case 0x56858cu: goto label_56858c;
        case 0x568590u: goto label_568590;
        case 0x568594u: goto label_568594;
        case 0x568598u: goto label_568598;
        case 0x56859cu: goto label_56859c;
        case 0x5685a0u: goto label_5685a0;
        case 0x5685a4u: goto label_5685a4;
        case 0x5685a8u: goto label_5685a8;
        case 0x5685acu: goto label_5685ac;
        case 0x5685b0u: goto label_5685b0;
        case 0x5685b4u: goto label_5685b4;
        case 0x5685b8u: goto label_5685b8;
        case 0x5685bcu: goto label_5685bc;
        case 0x5685c0u: goto label_5685c0;
        case 0x5685c4u: goto label_5685c4;
        case 0x5685c8u: goto label_5685c8;
        case 0x5685ccu: goto label_5685cc;
        case 0x5685d0u: goto label_5685d0;
        case 0x5685d4u: goto label_5685d4;
        case 0x5685d8u: goto label_5685d8;
        case 0x5685dcu: goto label_5685dc;
        case 0x5685e0u: goto label_5685e0;
        case 0x5685e4u: goto label_5685e4;
        case 0x5685e8u: goto label_5685e8;
        case 0x5685ecu: goto label_5685ec;
        case 0x5685f0u: goto label_5685f0;
        case 0x5685f4u: goto label_5685f4;
        case 0x5685f8u: goto label_5685f8;
        case 0x5685fcu: goto label_5685fc;
        case 0x568600u: goto label_568600;
        case 0x568604u: goto label_568604;
        case 0x568608u: goto label_568608;
        case 0x56860cu: goto label_56860c;
        case 0x568610u: goto label_568610;
        case 0x568614u: goto label_568614;
        case 0x568618u: goto label_568618;
        case 0x56861cu: goto label_56861c;
        case 0x568620u: goto label_568620;
        case 0x568624u: goto label_568624;
        case 0x568628u: goto label_568628;
        case 0x56862cu: goto label_56862c;
        case 0x568630u: goto label_568630;
        case 0x568634u: goto label_568634;
        case 0x568638u: goto label_568638;
        case 0x56863cu: goto label_56863c;
        case 0x568640u: goto label_568640;
        case 0x568644u: goto label_568644;
        case 0x568648u: goto label_568648;
        case 0x56864cu: goto label_56864c;
        case 0x568650u: goto label_568650;
        case 0x568654u: goto label_568654;
        case 0x568658u: goto label_568658;
        case 0x56865cu: goto label_56865c;
        case 0x568660u: goto label_568660;
        case 0x568664u: goto label_568664;
        case 0x568668u: goto label_568668;
        case 0x56866cu: goto label_56866c;
        case 0x568670u: goto label_568670;
        case 0x568674u: goto label_568674;
        case 0x568678u: goto label_568678;
        case 0x56867cu: goto label_56867c;
        case 0x568680u: goto label_568680;
        case 0x568684u: goto label_568684;
        case 0x568688u: goto label_568688;
        case 0x56868cu: goto label_56868c;
        case 0x568690u: goto label_568690;
        case 0x568694u: goto label_568694;
        case 0x568698u: goto label_568698;
        case 0x56869cu: goto label_56869c;
        case 0x5686a0u: goto label_5686a0;
        case 0x5686a4u: goto label_5686a4;
        case 0x5686a8u: goto label_5686a8;
        case 0x5686acu: goto label_5686ac;
        case 0x5686b0u: goto label_5686b0;
        case 0x5686b4u: goto label_5686b4;
        case 0x5686b8u: goto label_5686b8;
        case 0x5686bcu: goto label_5686bc;
        case 0x5686c0u: goto label_5686c0;
        case 0x5686c4u: goto label_5686c4;
        case 0x5686c8u: goto label_5686c8;
        case 0x5686ccu: goto label_5686cc;
        case 0x5686d0u: goto label_5686d0;
        case 0x5686d4u: goto label_5686d4;
        case 0x5686d8u: goto label_5686d8;
        case 0x5686dcu: goto label_5686dc;
        case 0x5686e0u: goto label_5686e0;
        case 0x5686e4u: goto label_5686e4;
        case 0x5686e8u: goto label_5686e8;
        case 0x5686ecu: goto label_5686ec;
        case 0x5686f0u: goto label_5686f0;
        case 0x5686f4u: goto label_5686f4;
        case 0x5686f8u: goto label_5686f8;
        case 0x5686fcu: goto label_5686fc;
        case 0x568700u: goto label_568700;
        case 0x568704u: goto label_568704;
        case 0x568708u: goto label_568708;
        case 0x56870cu: goto label_56870c;
        case 0x568710u: goto label_568710;
        case 0x568714u: goto label_568714;
        case 0x568718u: goto label_568718;
        case 0x56871cu: goto label_56871c;
        case 0x568720u: goto label_568720;
        case 0x568724u: goto label_568724;
        case 0x568728u: goto label_568728;
        case 0x56872cu: goto label_56872c;
        case 0x568730u: goto label_568730;
        case 0x568734u: goto label_568734;
        case 0x568738u: goto label_568738;
        case 0x56873cu: goto label_56873c;
        case 0x568740u: goto label_568740;
        case 0x568744u: goto label_568744;
        case 0x568748u: goto label_568748;
        case 0x56874cu: goto label_56874c;
        case 0x568750u: goto label_568750;
        case 0x568754u: goto label_568754;
        case 0x568758u: goto label_568758;
        case 0x56875cu: goto label_56875c;
        case 0x568760u: goto label_568760;
        case 0x568764u: goto label_568764;
        case 0x568768u: goto label_568768;
        case 0x56876cu: goto label_56876c;
        case 0x568770u: goto label_568770;
        case 0x568774u: goto label_568774;
        case 0x568778u: goto label_568778;
        case 0x56877cu: goto label_56877c;
        case 0x568780u: goto label_568780;
        case 0x568784u: goto label_568784;
        case 0x568788u: goto label_568788;
        case 0x56878cu: goto label_56878c;
        case 0x568790u: goto label_568790;
        case 0x568794u: goto label_568794;
        case 0x568798u: goto label_568798;
        case 0x56879cu: goto label_56879c;
        case 0x5687a0u: goto label_5687a0;
        case 0x5687a4u: goto label_5687a4;
        case 0x5687a8u: goto label_5687a8;
        case 0x5687acu: goto label_5687ac;
        case 0x5687b0u: goto label_5687b0;
        case 0x5687b4u: goto label_5687b4;
        case 0x5687b8u: goto label_5687b8;
        case 0x5687bcu: goto label_5687bc;
        case 0x5687c0u: goto label_5687c0;
        case 0x5687c4u: goto label_5687c4;
        case 0x5687c8u: goto label_5687c8;
        case 0x5687ccu: goto label_5687cc;
        case 0x5687d0u: goto label_5687d0;
        case 0x5687d4u: goto label_5687d4;
        case 0x5687d8u: goto label_5687d8;
        case 0x5687dcu: goto label_5687dc;
        case 0x5687e0u: goto label_5687e0;
        case 0x5687e4u: goto label_5687e4;
        case 0x5687e8u: goto label_5687e8;
        case 0x5687ecu: goto label_5687ec;
        case 0x5687f0u: goto label_5687f0;
        case 0x5687f4u: goto label_5687f4;
        case 0x5687f8u: goto label_5687f8;
        case 0x5687fcu: goto label_5687fc;
        case 0x568800u: goto label_568800;
        case 0x568804u: goto label_568804;
        case 0x568808u: goto label_568808;
        case 0x56880cu: goto label_56880c;
        case 0x568810u: goto label_568810;
        case 0x568814u: goto label_568814;
        case 0x568818u: goto label_568818;
        case 0x56881cu: goto label_56881c;
        case 0x568820u: goto label_568820;
        case 0x568824u: goto label_568824;
        case 0x568828u: goto label_568828;
        case 0x56882cu: goto label_56882c;
        case 0x568830u: goto label_568830;
        case 0x568834u: goto label_568834;
        case 0x568838u: goto label_568838;
        case 0x56883cu: goto label_56883c;
        case 0x568840u: goto label_568840;
        case 0x568844u: goto label_568844;
        case 0x568848u: goto label_568848;
        case 0x56884cu: goto label_56884c;
        case 0x568850u: goto label_568850;
        case 0x568854u: goto label_568854;
        case 0x568858u: goto label_568858;
        case 0x56885cu: goto label_56885c;
        case 0x568860u: goto label_568860;
        case 0x568864u: goto label_568864;
        case 0x568868u: goto label_568868;
        case 0x56886cu: goto label_56886c;
        default: break;
    }

    ctx->pc = 0x5683b0u;

label_5683b0:
    // 0x5683b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x5683b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_5683b4:
    // 0x5683b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5683b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5683b8:
    // 0x5683b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5683b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_5683bc:
    // 0x5683bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x5683bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5683c0:
    // 0x5683c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5683c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5683c4:
    // 0x5683c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5683c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5683c8:
    // 0x5683c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5683c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5683cc:
    // 0x5683cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5683ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5683d0:
    // 0x5683d0: 0x269301d0  addiu       $s3, $s4, 0x1D0
    ctx->pc = 0x5683d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
label_5683d4:
    // 0x5683d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5683d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5683d8:
    // 0x5683d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5683d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5683dc:
    // 0x5683dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5683dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5683e0:
    // 0x5683e0: 0x26860040  addiu       $a2, $s4, 0x40
    ctx->pc = 0x5683e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_5683e4:
    // 0x5683e4: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x5683e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_5683e8:
    // 0x5683e8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x5683e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_5683ec:
    // 0x5683ec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x5683ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_5683f0:
    // 0x5683f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5683f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5683f4:
    // 0x5683f4: 0xc0b838c  jal         func_2E0E30
label_5683f8:
    if (ctx->pc == 0x5683F8u) {
        ctx->pc = 0x5683F8u;
            // 0x5683f8: 0x26870160  addiu       $a3, $s4, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
        ctx->pc = 0x5683FCu;
        goto label_5683fc;
    }
    ctx->pc = 0x5683F4u;
    SET_GPR_U32(ctx, 31, 0x5683FCu);
    ctx->pc = 0x5683F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5683F4u;
            // 0x5683f8: 0x26870160  addiu       $a3, $s4, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5683FCu; }
        if (ctx->pc != 0x5683FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5683FCu; }
        if (ctx->pc != 0x5683FCu) { return; }
    }
    ctx->pc = 0x5683FCu;
label_5683fc:
    // 0x5683fc: 0xc6810060  lwc1        $f1, 0x60($s4)
    ctx->pc = 0x5683fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568400:
    // 0x568400: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x568400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_568404:
    // 0x568404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x568404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_568408:
    // 0x568408: 0x0  nop
    ctx->pc = 0x568408u;
    // NOP
label_56840c:
    // 0x56840c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x56840cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_568410:
    // 0x568410: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_568414:
    if (ctx->pc == 0x568414u) {
        ctx->pc = 0x568414u;
            // 0x568414: 0x86640054  lh          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x568418u;
        goto label_568418;
    }
    ctx->pc = 0x568410u;
    {
        const bool branch_taken_0x568410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x568414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568410u;
            // 0x568414: 0x86640054  lh          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568410) {
            ctx->pc = 0x568428u;
            goto label_568428;
        }
    }
    ctx->pc = 0x568418u;
label_568418:
    // 0x568418: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x568418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_56841c:
    // 0x56841c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x56841cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_568420:
    // 0x568420: 0x10000007  b           . + 4 + (0x7 << 2)
label_568424:
    if (ctx->pc == 0x568424u) {
        ctx->pc = 0x568428u;
        goto label_568428;
    }
    ctx->pc = 0x568420u;
    {
        const bool branch_taken_0x568420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x568420) {
            ctx->pc = 0x568440u;
            goto label_568440;
        }
    }
    ctx->pc = 0x568428u;
label_568428:
    // 0x568428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x568428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_56842c:
    // 0x56842c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x56842cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_568430:
    // 0x568430: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x568430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_568434:
    // 0x568434: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x568434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_568438:
    // 0x568438: 0x0  nop
    ctx->pc = 0x568438u;
    // NOP
label_56843c:
    // 0x56843c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x56843cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_568440:
    // 0x568440: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_568444:
    if (ctx->pc == 0x568444u) {
        ctx->pc = 0x568444u;
            // 0x568444: 0x96620056  lhu         $v0, 0x56($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 86)));
        ctx->pc = 0x568448u;
        goto label_568448;
    }
    ctx->pc = 0x568440u;
    {
        const bool branch_taken_0x568440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x568440) {
            ctx->pc = 0x568444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568440u;
            // 0x568444: 0x96620056  lhu         $v0, 0x56($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 86)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568450u;
            goto label_568450;
        }
    }
    ctx->pc = 0x568448u;
label_568448:
    // 0x568448: 0x1000005a  b           . + 4 + (0x5A << 2)
label_56844c:
    if (ctx->pc == 0x56844Cu) {
        ctx->pc = 0x56844Cu;
            // 0x56844c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568450u;
        goto label_568450;
    }
    ctx->pc = 0x568448u;
    {
        const bool branch_taken_0x568448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568448u;
            // 0x56844c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568448) {
            ctx->pc = 0x5685B4u;
            goto label_5685b4;
        }
    }
    ctx->pc = 0x568450u;
label_568450:
    // 0x568450: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_568454:
    if (ctx->pc == 0x568454u) {
        ctx->pc = 0x568454u;
            // 0x568454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568458u;
        goto label_568458;
    }
    ctx->pc = 0x568450u;
    {
        const bool branch_taken_0x568450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x568450) {
            ctx->pc = 0x568454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568450u;
            // 0x568454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5685B4u;
            goto label_5685b4;
        }
    }
    ctx->pc = 0x568458u;
label_568458:
    // 0x568458: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x568458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_56845c:
    // 0x56845c: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x56845cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_568460:
    // 0x568460: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x568460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_568464:
    // 0x568464: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x568464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_568468:
    // 0x568468: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x568468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56846c:
    // 0x56846c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x56846cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_568470:
    // 0x568470: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x568470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_568474:
    // 0x568474: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x568474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568478:
    // 0x568478: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x568478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_56847c:
    // 0x56847c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x56847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_568480:
    // 0x568480: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x568480u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_568484:
    // 0x568484: 0xc04cbf0  jal         func_132FC0
label_568488:
    if (ctx->pc == 0x568488u) {
        ctx->pc = 0x568488u;
            // 0x568488: 0x26900120  addiu       $s0, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->pc = 0x56848Cu;
        goto label_56848c;
    }
    ctx->pc = 0x568484u;
    SET_GPR_U32(ctx, 31, 0x56848Cu);
    ctx->pc = 0x568488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568484u;
            // 0x568488: 0x26900120  addiu       $s0, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56848Cu; }
        if (ctx->pc != 0x56848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56848Cu; }
        if (ctx->pc != 0x56848Cu) { return; }
    }
    ctx->pc = 0x56848Cu;
label_56848c:
    // 0x56848c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x56848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_568490:
    // 0x568490: 0xc04cc44  jal         func_133110
label_568494:
    if (ctx->pc == 0x568494u) {
        ctx->pc = 0x568494u;
            // 0x568494: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568498u;
        goto label_568498;
    }
    ctx->pc = 0x568490u;
    SET_GPR_U32(ctx, 31, 0x568498u);
    ctx->pc = 0x568494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568490u;
            // 0x568494: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568498u; }
        if (ctx->pc != 0x568498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568498u; }
        if (ctx->pc != 0x568498u) { return; }
    }
    ctx->pc = 0x568498u;
label_568498:
    // 0x568498: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x568498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_56849c:
    // 0x56849c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x56849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5684a0:
    // 0x5684a0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x5684a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5684a4:
    // 0x5684a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x5684a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5684a8:
    // 0x5684a8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x5684a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5684ac:
    // 0x5684ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x5684acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5684b0:
    // 0x5684b0: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x5684b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5684b4:
    // 0x5684b4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x5684b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_5684b8:
    // 0x5684b8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x5684b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_5684bc:
    // 0x5684bc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x5684bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_5684c0:
    // 0x5684c0: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x5684c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_5684c4:
    // 0x5684c4: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x5684c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5684c8:
    // 0x5684c8: 0xc443fda0  lwc1        $f3, -0x260($v0)
    ctx->pc = 0x5684c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5684cc:
    // 0x5684cc: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x5684ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_5684d0:
    // 0x5684d0: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x5684d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5684d4:
    // 0x5684d4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5684d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5684d8:
    // 0x5684d8: 0xc442fda4  lwc1        $f2, -0x25C($v0)
    ctx->pc = 0x5684d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5684dc:
    // 0x5684dc: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x5684dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_5684e0:
    // 0x5684e0: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x5684e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5684e4:
    // 0x5684e4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5684e8:
    // 0x5684e8: 0xc441fda8  lwc1        $f1, -0x258($v0)
    ctx->pc = 0x5684e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5684ec:
    // 0x5684ec: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x5684ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_5684f0:
    // 0x5684f0: 0xc664000c  lwc1        $f4, 0xC($s3)
    ctx->pc = 0x5684f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5684f4:
    // 0x5684f4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5684f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5684f8:
    // 0x5684f8: 0xc440fdac  lwc1        $f0, -0x254($v0)
    ctx->pc = 0x5684f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5684fc:
    // 0x5684fc: 0xe7a4007c  swc1        $f4, 0x7C($sp)
    ctx->pc = 0x5684fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_568500:
    // 0x568500: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x568500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_568504:
    // 0x568504: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x568504u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_568508:
    // 0x568508: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x568508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_56850c:
    // 0x56850c: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x56850cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_568510:
    // 0x568510: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x568510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_568514:
    // 0x568514: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x568514u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_568518:
    // 0x568518: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x568518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_56851c:
    // 0x56851c: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x56851cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_568520:
    // 0x568520: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x568520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_568524:
    // 0x568524: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x568524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_568528:
    // 0x568528: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x568528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_56852c:
    // 0x56852c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x56852cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_568530:
    // 0x568530: 0xc04c994  jal         func_132650
label_568534:
    if (ctx->pc == 0x568534u) {
        ctx->pc = 0x568534u;
            // 0x568534: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x568538u;
        goto label_568538;
    }
    ctx->pc = 0x568530u;
    SET_GPR_U32(ctx, 31, 0x568538u);
    ctx->pc = 0x568534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568530u;
            // 0x568534: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568538u; }
        if (ctx->pc != 0x568538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568538u; }
        if (ctx->pc != 0x568538u) { return; }
    }
    ctx->pc = 0x568538u;
label_568538:
    // 0x568538: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x568538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_56853c:
    // 0x56853c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x56853cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_568540:
    // 0x568540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x568540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_568544:
    // 0x568544: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x568544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_568548:
    // 0x568548: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x568548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_56854c:
    // 0x56854c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x56854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_568550:
    // 0x568550: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x568550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_568554:
    // 0x568554: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x568554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_568558:
    // 0x568558: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x568558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_56855c:
    // 0x56855c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x56855cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_568560:
    // 0x568560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x568560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_568564:
    // 0x568564: 0x0  nop
    ctx->pc = 0x568564u;
    // NOP
label_568568:
    // 0x568568: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x568568u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_56856c:
    // 0x56856c: 0x0  nop
    ctx->pc = 0x56856cu;
    // NOP
label_568570:
    // 0x568570: 0x0  nop
    ctx->pc = 0x568570u;
    // NOP
label_568574:
    // 0x568574: 0xc04c74c  jal         func_131D30
label_568578:
    if (ctx->pc == 0x568578u) {
        ctx->pc = 0x568578u;
            // 0x568578: 0xe6800230  swc1        $f0, 0x230($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 560), bits); }
        ctx->pc = 0x56857Cu;
        goto label_56857c;
    }
    ctx->pc = 0x568574u;
    SET_GPR_U32(ctx, 31, 0x56857Cu);
    ctx->pc = 0x568578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568574u;
            // 0x568578: 0xe6800230  swc1        $f0, 0x230($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 560), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56857Cu; }
        if (ctx->pc != 0x56857Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56857Cu; }
        if (ctx->pc != 0x56857Cu) { return; }
    }
    ctx->pc = 0x56857Cu;
label_56857c:
    // 0x56857c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x56857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_568580:
    // 0x568580: 0xc04c74c  jal         func_131D30
label_568584:
    if (ctx->pc == 0x568584u) {
        ctx->pc = 0x568584u;
            // 0x568584: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x568588u;
        goto label_568588;
    }
    ctx->pc = 0x568580u;
    SET_GPR_U32(ctx, 31, 0x568588u);
    ctx->pc = 0x568584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568580u;
            // 0x568584: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568588u; }
        if (ctx->pc != 0x568588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568588u; }
        if (ctx->pc != 0x568588u) { return; }
    }
    ctx->pc = 0x568588u;
label_568588:
    // 0x568588: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x568588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_56858c:
    // 0x56858c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x56858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_568590:
    // 0x568590: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x568590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_568594:
    // 0x568594: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x568594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_568598:
    // 0x568598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x568598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56859c:
    // 0x56859c: 0xae80023c  sw          $zero, 0x23C($s4)
    ctx->pc = 0x56859cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 572), GPR_U32(ctx, 0));
label_5685a0:
    // 0x5685a0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x5685a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_5685a4:
    // 0x5685a4: 0xa2800244  sb          $zero, 0x244($s4)
    ctx->pc = 0x5685a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 580), (uint8_t)GPR_U32(ctx, 0));
label_5685a8:
    // 0x5685a8: 0xa2820245  sb          $v0, 0x245($s4)
    ctx->pc = 0x5685a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 581), (uint8_t)GPR_U32(ctx, 2));
label_5685ac:
    // 0x5685ac: 0xa2800246  sb          $zero, 0x246($s4)
    ctx->pc = 0x5685acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 582), (uint8_t)GPR_U32(ctx, 0));
label_5685b0:
    // 0x5685b0: 0xa283007c  sb          $v1, 0x7C($s4)
    ctx->pc = 0x5685b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 3));
label_5685b4:
    // 0x5685b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5685b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5685b8:
    // 0x5685b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5685b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5685bc:
    // 0x5685bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5685bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5685c0:
    // 0x5685c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5685c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5685c4:
    // 0x5685c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5685c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5685c8:
    // 0x5685c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5685c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5685cc:
    // 0x5685cc: 0x3e00008  jr          $ra
label_5685d0:
    if (ctx->pc == 0x5685D0u) {
        ctx->pc = 0x5685D0u;
            // 0x5685d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5685D4u;
        goto label_5685d4;
    }
    ctx->pc = 0x5685CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5685D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5685CCu;
            // 0x5685d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5685D4u;
label_5685d4:
    // 0x5685d4: 0x0  nop
    ctx->pc = 0x5685d4u;
    // NOP
label_5685d8:
    // 0x5685d8: 0x0  nop
    ctx->pc = 0x5685d8u;
    // NOP
label_5685dc:
    // 0x5685dc: 0x0  nop
    ctx->pc = 0x5685dcu;
    // NOP
label_5685e0:
    // 0x5685e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x5685e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_5685e4:
    // 0x5685e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x5685e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_5685e8:
    // 0x5685e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5685e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5685ec:
    // 0x5685ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5685ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5685f0:
    // 0x5685f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5685f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5685f4:
    // 0x5685f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5685f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5685f8:
    // 0x5685f8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x5685f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_5685fc:
    // 0x5685fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5685fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_568600:
    // 0x568600: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x568600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_568604:
    // 0x568604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x568604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_568608:
    // 0x568608: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x568608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_56860c:
    // 0x56860c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56860cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_568610:
    // 0x568610: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x568610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_568614:
    // 0x568614: 0x1064003e  beq         $v1, $a0, . + 4 + (0x3E << 2)
label_568618:
    if (ctx->pc == 0x568618u) {
        ctx->pc = 0x568618u;
            // 0x568618: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56861Cu;
        goto label_56861c;
    }
    ctx->pc = 0x568614u;
    {
        const bool branch_taken_0x568614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x568618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568614u;
            // 0x568618: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568614) {
            ctx->pc = 0x568710u;
            goto label_568710;
        }
    }
    ctx->pc = 0x56861Cu;
label_56861c:
    // 0x56861c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x56861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_568620:
    // 0x568620: 0x5064003c  beql        $v1, $a0, . + 4 + (0x3C << 2)
label_568624:
    if (ctx->pc == 0x568624u) {
        ctx->pc = 0x568624u;
            // 0x568624: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x568628u;
        goto label_568628;
    }
    ctx->pc = 0x568620u;
    {
        const bool branch_taken_0x568620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x568620) {
            ctx->pc = 0x568624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568620u;
            // 0x568624: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568714u;
            goto label_568714;
        }
    }
    ctx->pc = 0x568628u;
label_568628:
    // 0x568628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x568628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_56862c:
    // 0x56862c: 0xc04f278  jal         func_13C9E0
label_568630:
    if (ctx->pc == 0x568630u) {
        ctx->pc = 0x568630u;
            // 0x568630: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x568634u;
        goto label_568634;
    }
    ctx->pc = 0x56862Cu;
    SET_GPR_U32(ctx, 31, 0x568634u);
    ctx->pc = 0x568630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56862Cu;
            // 0x568630: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568634u; }
        if (ctx->pc != 0x568634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568634u; }
        if (ctx->pc != 0x568634u) { return; }
    }
    ctx->pc = 0x568634u;
label_568634:
    // 0x568634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x568634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_568638:
    // 0x568638: 0xc04ce80  jal         func_133A00
label_56863c:
    if (ctx->pc == 0x56863Cu) {
        ctx->pc = 0x56863Cu;
            // 0x56863c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x568640u;
        goto label_568640;
    }
    ctx->pc = 0x568638u;
    SET_GPR_U32(ctx, 31, 0x568640u);
    ctx->pc = 0x56863Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568638u;
            // 0x56863c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568640u; }
        if (ctx->pc != 0x568640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568640u; }
        if (ctx->pc != 0x568640u) { return; }
    }
    ctx->pc = 0x568640u;
label_568640:
    // 0x568640: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568644:
    // 0x568644: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x568644u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_568648:
    // 0x568648: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x568648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_56864c:
    // 0x56864c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x56864cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_568650:
    // 0x568650: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568654:
    // 0x568654: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x568654u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_568658:
    // 0x568658: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x568658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_56865c:
    // 0x56865c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x56865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568660:
    // 0x568660: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x568660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_568664:
    // 0x568664: 0x8c43e360  lw          $v1, -0x1CA0($v0)
    ctx->pc = 0x568664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_568668:
    // 0x568668: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x568668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_56866c:
    // 0x56866c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x56866cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568670:
    // 0x568670: 0x65a821  addu        $s5, $v1, $a1
    ctx->pc = 0x568670u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_568674:
    // 0x568674: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x568674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_568678:
    // 0x568678: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x568678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56867c:
    // 0x56867c: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x56867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_568680:
    // 0x568680: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x568680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_568684:
    // 0x568684: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x568684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_568688:
    // 0x568688: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x568688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_56868c:
    // 0x56868c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x56868cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_568690:
    // 0x568690: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x568690u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_568694:
    // 0x568694: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x568694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_568698:
    // 0x568698: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x568698u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_56869c:
    // 0x56869c: 0x109a021  addu        $s4, $t0, $t1
    ctx->pc = 0x56869cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_5686a0:
    // 0x5686a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5686a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5686a4:
    // 0x5686a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5686a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5686a8:
    // 0x5686a8: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x5686a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_5686ac:
    // 0x5686ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5686acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5686b0:
    // 0x5686b0: 0xad140000  sw          $s4, 0x0($t0)
    ctx->pc = 0x5686b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
label_5686b4:
    // 0x5686b4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x5686b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5686b8:
    // 0x5686b8: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x5686b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_5686bc:
    // 0x5686bc: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x5686bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_5686c0:
    // 0x5686c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5686c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_5686c4:
    // 0x5686c4: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x5686c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_5686c8:
    // 0x5686c8: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x5686c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_5686cc:
    // 0x5686cc: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x5686ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_5686d0:
    // 0x5686d0: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x5686d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_5686d4:
    // 0x5686d4: 0xc04e4a4  jal         func_139290
label_5686d8:
    if (ctx->pc == 0x5686D8u) {
        ctx->pc = 0x5686D8u;
            // 0x5686d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5686DCu;
        goto label_5686dc;
    }
    ctx->pc = 0x5686D4u;
    SET_GPR_U32(ctx, 31, 0x5686DCu);
    ctx->pc = 0x5686D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5686D4u;
            // 0x5686d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5686DCu; }
        if (ctx->pc != 0x5686DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5686DCu; }
        if (ctx->pc != 0x5686DCu) { return; }
    }
    ctx->pc = 0x5686DCu;
label_5686dc:
    // 0x5686dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5686dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5686e0:
    // 0x5686e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5686e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5686e4:
    // 0x5686e4: 0xc04cd60  jal         func_133580
label_5686e8:
    if (ctx->pc == 0x5686E8u) {
        ctx->pc = 0x5686E8u;
            // 0x5686e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5686ECu;
        goto label_5686ec;
    }
    ctx->pc = 0x5686E4u;
    SET_GPR_U32(ctx, 31, 0x5686ECu);
    ctx->pc = 0x5686E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5686E4u;
            // 0x5686e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5686ECu; }
        if (ctx->pc != 0x5686ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5686ECu; }
        if (ctx->pc != 0x5686ECu) { return; }
    }
    ctx->pc = 0x5686ECu;
label_5686ec:
    // 0x5686ec: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x5686ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_5686f0:
    // 0x5686f0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x5686f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_5686f4:
    // 0x5686f4: 0x320f809  jalr        $t9
label_5686f8:
    if (ctx->pc == 0x5686F8u) {
        ctx->pc = 0x5686F8u;
            // 0x5686f8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x5686FCu;
        goto label_5686fc;
    }
    ctx->pc = 0x5686F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5686FCu);
        ctx->pc = 0x5686F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5686F4u;
            // 0x5686f8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5686FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5686FCu; }
            if (ctx->pc != 0x5686FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5686FCu;
label_5686fc:
    // 0x5686fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5686fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_568700:
    // 0x568700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x568700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_568704:
    // 0x568704: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x568704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_568708:
    // 0x568708: 0xc054fd4  jal         func_153F50
label_56870c:
    if (ctx->pc == 0x56870Cu) {
        ctx->pc = 0x56870Cu;
            // 0x56870c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568710u;
        goto label_568710;
    }
    ctx->pc = 0x568708u;
    SET_GPR_U32(ctx, 31, 0x568710u);
    ctx->pc = 0x56870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568708u;
            // 0x56870c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568710u; }
        if (ctx->pc != 0x568710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568710u; }
        if (ctx->pc != 0x568710u) { return; }
    }
    ctx->pc = 0x568710u;
label_568710:
    // 0x568710: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x568710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_568714:
    // 0x568714: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x568714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_568718:
    // 0x568718: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x568718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_56871c:
    // 0x56871c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x56871cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_568720:
    // 0x568720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x568720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_568724:
    // 0x568724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x568724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_568728:
    // 0x568728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x568728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56872c:
    // 0x56872c: 0x3e00008  jr          $ra
label_568730:
    if (ctx->pc == 0x568730u) {
        ctx->pc = 0x568730u;
            // 0x568730: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x568734u;
        goto label_568734;
    }
    ctx->pc = 0x56872Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x568730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56872Cu;
            // 0x568730: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x568734u;
label_568734:
    // 0x568734: 0x0  nop
    ctx->pc = 0x568734u;
    // NOP
label_568738:
    // 0x568738: 0x0  nop
    ctx->pc = 0x568738u;
    // NOP
label_56873c:
    // 0x56873c: 0x0  nop
    ctx->pc = 0x56873cu;
    // NOP
label_568740:
    // 0x568740: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x568740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_568744:
    // 0x568744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x568744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_568748:
    // 0x568748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x568748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56874c:
    // 0x56874c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_568750:
    // 0x568750: 0x249101d0  addiu       $s1, $a0, 0x1D0
    ctx->pc = 0x568750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
label_568754:
    // 0x568754: 0x24900120  addiu       $s0, $a0, 0x120
    ctx->pc = 0x568754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_568758:
    // 0x568758: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x568758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_56875c:
    // 0x56875c: 0xc04cc44  jal         func_133110
label_568760:
    if (ctx->pc == 0x568760u) {
        ctx->pc = 0x568760u;
            // 0x568760: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x568764u;
        goto label_568764;
    }
    ctx->pc = 0x56875Cu;
    SET_GPR_U32(ctx, 31, 0x568764u);
    ctx->pc = 0x568760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56875Cu;
            // 0x568760: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568764u; }
        if (ctx->pc != 0x568764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568764u; }
        if (ctx->pc != 0x568764u) { return; }
    }
    ctx->pc = 0x568764u;
label_568764:
    // 0x568764: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x568764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_568768:
    // 0x568768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x568768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56876c:
    // 0x56876c: 0xc04cbf0  jal         func_132FC0
label_568770:
    if (ctx->pc == 0x568770u) {
        ctx->pc = 0x568770u;
            // 0x568770: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x568774u;
        goto label_568774;
    }
    ctx->pc = 0x56876Cu;
    SET_GPR_U32(ctx, 31, 0x568774u);
    ctx->pc = 0x568770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56876Cu;
            // 0x568770: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568774u; }
        if (ctx->pc != 0x568774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568774u; }
        if (ctx->pc != 0x568774u) { return; }
    }
    ctx->pc = 0x568774u;
label_568774:
    // 0x568774: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x568774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_568778:
    // 0x568778: 0xc04cc44  jal         func_133110
label_56877c:
    if (ctx->pc == 0x56877Cu) {
        ctx->pc = 0x56877Cu;
            // 0x56877c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568780u;
        goto label_568780;
    }
    ctx->pc = 0x568778u;
    SET_GPR_U32(ctx, 31, 0x568780u);
    ctx->pc = 0x56877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568778u;
            // 0x56877c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568780u; }
        if (ctx->pc != 0x568780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568780u; }
        if (ctx->pc != 0x568780u) { return; }
    }
    ctx->pc = 0x568780u;
label_568780:
    // 0x568780: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x568780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_568784:
    // 0x568784: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x568784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_568788:
    // 0x568788: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x568788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_56878c:
    // 0x56878c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x56878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_568790:
    // 0x568790: 0xc443fda0  lwc1        $f3, -0x260($v0)
    ctx->pc = 0x568790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_568794:
    // 0x568794: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x568794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568798:
    // 0x568798: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x568798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56879c:
    // 0x56879c: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x56879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5687a0:
    // 0x5687a0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5687a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5687a4:
    // 0x5687a4: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x5687a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_5687a8:
    // 0x5687a8: 0xc442fda4  lwc1        $f2, -0x25C($v0)
    ctx->pc = 0x5687a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5687ac:
    // 0x5687ac: 0xe7a4005c  swc1        $f4, 0x5C($sp)
    ctx->pc = 0x5687acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_5687b0:
    // 0x5687b0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x5687b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_5687b4:
    // 0x5687b4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x5687b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_5687b8:
    // 0x5687b8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5687b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5687bc:
    // 0x5687bc: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x5687bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_5687c0:
    // 0x5687c0: 0xc441fda8  lwc1        $f1, -0x258($v0)
    ctx->pc = 0x5687c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5687c4:
    // 0x5687c4: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x5687c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_5687c8:
    // 0x5687c8: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x5687c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_5687cc:
    // 0x5687cc: 0xc6270004  lwc1        $f7, 0x4($s1)
    ctx->pc = 0x5687ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_5687d0:
    // 0x5687d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5687d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5687d4:
    // 0x5687d4: 0xc440fdac  lwc1        $f0, -0x254($v0)
    ctx->pc = 0x5687d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5687d8:
    // 0x5687d8: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x5687d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_5687dc:
    // 0x5687dc: 0xe7a70064  swc1        $f7, 0x64($sp)
    ctx->pc = 0x5687dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_5687e0:
    // 0x5687e0: 0xc6270008  lwc1        $f7, 0x8($s1)
    ctx->pc = 0x5687e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_5687e4:
    // 0x5687e4: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x5687e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5687e8:
    // 0x5687e8: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x5687e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_5687ec:
    // 0x5687ec: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x5687ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_5687f0:
    // 0x5687f0: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x5687f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_5687f4:
    // 0x5687f4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x5687f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_5687f8:
    // 0x5687f8: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x5687f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_5687fc:
    // 0x5687fc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x5687fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_568800:
    // 0x568800: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x568800u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_568804:
    // 0x568804: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x568804u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_568808:
    // 0x568808: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x568808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_56880c:
    // 0x56880c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x56880cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_568810:
    // 0x568810: 0xc04c994  jal         func_132650
label_568814:
    if (ctx->pc == 0x568814u) {
        ctx->pc = 0x568814u;
            // 0x568814: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x568818u;
        goto label_568818;
    }
    ctx->pc = 0x568810u;
    SET_GPR_U32(ctx, 31, 0x568818u);
    ctx->pc = 0x568814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568810u;
            // 0x568814: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568818u; }
        if (ctx->pc != 0x568818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568818u; }
        if (ctx->pc != 0x568818u) { return; }
    }
    ctx->pc = 0x568818u;
label_568818:
    // 0x568818: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x568818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_56881c:
    // 0x56881c: 0xc04c74c  jal         func_131D30
label_568820:
    if (ctx->pc == 0x568820u) {
        ctx->pc = 0x568820u;
            // 0x568820: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x568824u;
        goto label_568824;
    }
    ctx->pc = 0x56881Cu;
    SET_GPR_U32(ctx, 31, 0x568824u);
    ctx->pc = 0x568820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56881Cu;
            // 0x568820: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568824u; }
        if (ctx->pc != 0x568824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568824u; }
        if (ctx->pc != 0x568824u) { return; }
    }
    ctx->pc = 0x568824u;
label_568824:
    // 0x568824: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x568824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_568828:
    // 0x568828: 0xc04c74c  jal         func_131D30
label_56882c:
    if (ctx->pc == 0x56882Cu) {
        ctx->pc = 0x56882Cu;
            // 0x56882c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x568830u;
        goto label_568830;
    }
    ctx->pc = 0x568828u;
    SET_GPR_U32(ctx, 31, 0x568830u);
    ctx->pc = 0x56882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568828u;
            // 0x56882c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568830u; }
        if (ctx->pc != 0x568830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568830u; }
        if (ctx->pc != 0x568830u) { return; }
    }
    ctx->pc = 0x568830u;
label_568830:
    // 0x568830: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x568830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_568834:
    // 0x568834: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x568834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_568838:
    // 0x568838: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x568838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_56883c:
    // 0x56883c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x56883cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_568840:
    // 0x568840: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x568840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_568844:
    // 0x568844: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x568844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568848:
    // 0x568848: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x568848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56884c:
    // 0x56884c: 0x0  nop
    ctx->pc = 0x56884cu;
    // NOP
label_568850:
    // 0x568850: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x568850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_568854:
    // 0x568854: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x568854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_568858:
    // 0x568858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x568858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_56885c:
    // 0x56885c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56885cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_568860:
    // 0x568860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x568860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_568864:
    // 0x568864: 0x3e00008  jr          $ra
label_568868:
    if (ctx->pc == 0x568868u) {
        ctx->pc = 0x568868u;
            // 0x568868: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x56886Cu;
        goto label_56886c;
    }
    ctx->pc = 0x568864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x568868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568864u;
            // 0x568868: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56886Cu;
label_56886c:
    // 0x56886c: 0x0  nop
    ctx->pc = 0x56886cu;
    // NOP
}
