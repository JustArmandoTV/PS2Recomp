#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002222A0
// Address: 0x2222a0 - 0x222780
void sub_002222A0_0x2222a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002222A0_0x2222a0");
#endif

    switch (ctx->pc) {
        case 0x2222a0u: goto label_2222a0;
        case 0x2222a4u: goto label_2222a4;
        case 0x2222a8u: goto label_2222a8;
        case 0x2222acu: goto label_2222ac;
        case 0x2222b0u: goto label_2222b0;
        case 0x2222b4u: goto label_2222b4;
        case 0x2222b8u: goto label_2222b8;
        case 0x2222bcu: goto label_2222bc;
        case 0x2222c0u: goto label_2222c0;
        case 0x2222c4u: goto label_2222c4;
        case 0x2222c8u: goto label_2222c8;
        case 0x2222ccu: goto label_2222cc;
        case 0x2222d0u: goto label_2222d0;
        case 0x2222d4u: goto label_2222d4;
        case 0x2222d8u: goto label_2222d8;
        case 0x2222dcu: goto label_2222dc;
        case 0x2222e0u: goto label_2222e0;
        case 0x2222e4u: goto label_2222e4;
        case 0x2222e8u: goto label_2222e8;
        case 0x2222ecu: goto label_2222ec;
        case 0x2222f0u: goto label_2222f0;
        case 0x2222f4u: goto label_2222f4;
        case 0x2222f8u: goto label_2222f8;
        case 0x2222fcu: goto label_2222fc;
        case 0x222300u: goto label_222300;
        case 0x222304u: goto label_222304;
        case 0x222308u: goto label_222308;
        case 0x22230cu: goto label_22230c;
        case 0x222310u: goto label_222310;
        case 0x222314u: goto label_222314;
        case 0x222318u: goto label_222318;
        case 0x22231cu: goto label_22231c;
        case 0x222320u: goto label_222320;
        case 0x222324u: goto label_222324;
        case 0x222328u: goto label_222328;
        case 0x22232cu: goto label_22232c;
        case 0x222330u: goto label_222330;
        case 0x222334u: goto label_222334;
        case 0x222338u: goto label_222338;
        case 0x22233cu: goto label_22233c;
        case 0x222340u: goto label_222340;
        case 0x222344u: goto label_222344;
        case 0x222348u: goto label_222348;
        case 0x22234cu: goto label_22234c;
        case 0x222350u: goto label_222350;
        case 0x222354u: goto label_222354;
        case 0x222358u: goto label_222358;
        case 0x22235cu: goto label_22235c;
        case 0x222360u: goto label_222360;
        case 0x222364u: goto label_222364;
        case 0x222368u: goto label_222368;
        case 0x22236cu: goto label_22236c;
        case 0x222370u: goto label_222370;
        case 0x222374u: goto label_222374;
        case 0x222378u: goto label_222378;
        case 0x22237cu: goto label_22237c;
        case 0x222380u: goto label_222380;
        case 0x222384u: goto label_222384;
        case 0x222388u: goto label_222388;
        case 0x22238cu: goto label_22238c;
        case 0x222390u: goto label_222390;
        case 0x222394u: goto label_222394;
        case 0x222398u: goto label_222398;
        case 0x22239cu: goto label_22239c;
        case 0x2223a0u: goto label_2223a0;
        case 0x2223a4u: goto label_2223a4;
        case 0x2223a8u: goto label_2223a8;
        case 0x2223acu: goto label_2223ac;
        case 0x2223b0u: goto label_2223b0;
        case 0x2223b4u: goto label_2223b4;
        case 0x2223b8u: goto label_2223b8;
        case 0x2223bcu: goto label_2223bc;
        case 0x2223c0u: goto label_2223c0;
        case 0x2223c4u: goto label_2223c4;
        case 0x2223c8u: goto label_2223c8;
        case 0x2223ccu: goto label_2223cc;
        case 0x2223d0u: goto label_2223d0;
        case 0x2223d4u: goto label_2223d4;
        case 0x2223d8u: goto label_2223d8;
        case 0x2223dcu: goto label_2223dc;
        case 0x2223e0u: goto label_2223e0;
        case 0x2223e4u: goto label_2223e4;
        case 0x2223e8u: goto label_2223e8;
        case 0x2223ecu: goto label_2223ec;
        case 0x2223f0u: goto label_2223f0;
        case 0x2223f4u: goto label_2223f4;
        case 0x2223f8u: goto label_2223f8;
        case 0x2223fcu: goto label_2223fc;
        case 0x222400u: goto label_222400;
        case 0x222404u: goto label_222404;
        case 0x222408u: goto label_222408;
        case 0x22240cu: goto label_22240c;
        case 0x222410u: goto label_222410;
        case 0x222414u: goto label_222414;
        case 0x222418u: goto label_222418;
        case 0x22241cu: goto label_22241c;
        case 0x222420u: goto label_222420;
        case 0x222424u: goto label_222424;
        case 0x222428u: goto label_222428;
        case 0x22242cu: goto label_22242c;
        case 0x222430u: goto label_222430;
        case 0x222434u: goto label_222434;
        case 0x222438u: goto label_222438;
        case 0x22243cu: goto label_22243c;
        case 0x222440u: goto label_222440;
        case 0x222444u: goto label_222444;
        case 0x222448u: goto label_222448;
        case 0x22244cu: goto label_22244c;
        case 0x222450u: goto label_222450;
        case 0x222454u: goto label_222454;
        case 0x222458u: goto label_222458;
        case 0x22245cu: goto label_22245c;
        case 0x222460u: goto label_222460;
        case 0x222464u: goto label_222464;
        case 0x222468u: goto label_222468;
        case 0x22246cu: goto label_22246c;
        case 0x222470u: goto label_222470;
        case 0x222474u: goto label_222474;
        case 0x222478u: goto label_222478;
        case 0x22247cu: goto label_22247c;
        case 0x222480u: goto label_222480;
        case 0x222484u: goto label_222484;
        case 0x222488u: goto label_222488;
        case 0x22248cu: goto label_22248c;
        case 0x222490u: goto label_222490;
        case 0x222494u: goto label_222494;
        case 0x222498u: goto label_222498;
        case 0x22249cu: goto label_22249c;
        case 0x2224a0u: goto label_2224a0;
        case 0x2224a4u: goto label_2224a4;
        case 0x2224a8u: goto label_2224a8;
        case 0x2224acu: goto label_2224ac;
        case 0x2224b0u: goto label_2224b0;
        case 0x2224b4u: goto label_2224b4;
        case 0x2224b8u: goto label_2224b8;
        case 0x2224bcu: goto label_2224bc;
        case 0x2224c0u: goto label_2224c0;
        case 0x2224c4u: goto label_2224c4;
        case 0x2224c8u: goto label_2224c8;
        case 0x2224ccu: goto label_2224cc;
        case 0x2224d0u: goto label_2224d0;
        case 0x2224d4u: goto label_2224d4;
        case 0x2224d8u: goto label_2224d8;
        case 0x2224dcu: goto label_2224dc;
        case 0x2224e0u: goto label_2224e0;
        case 0x2224e4u: goto label_2224e4;
        case 0x2224e8u: goto label_2224e8;
        case 0x2224ecu: goto label_2224ec;
        case 0x2224f0u: goto label_2224f0;
        case 0x2224f4u: goto label_2224f4;
        case 0x2224f8u: goto label_2224f8;
        case 0x2224fcu: goto label_2224fc;
        case 0x222500u: goto label_222500;
        case 0x222504u: goto label_222504;
        case 0x222508u: goto label_222508;
        case 0x22250cu: goto label_22250c;
        case 0x222510u: goto label_222510;
        case 0x222514u: goto label_222514;
        case 0x222518u: goto label_222518;
        case 0x22251cu: goto label_22251c;
        case 0x222520u: goto label_222520;
        case 0x222524u: goto label_222524;
        case 0x222528u: goto label_222528;
        case 0x22252cu: goto label_22252c;
        case 0x222530u: goto label_222530;
        case 0x222534u: goto label_222534;
        case 0x222538u: goto label_222538;
        case 0x22253cu: goto label_22253c;
        case 0x222540u: goto label_222540;
        case 0x222544u: goto label_222544;
        case 0x222548u: goto label_222548;
        case 0x22254cu: goto label_22254c;
        case 0x222550u: goto label_222550;
        case 0x222554u: goto label_222554;
        case 0x222558u: goto label_222558;
        case 0x22255cu: goto label_22255c;
        case 0x222560u: goto label_222560;
        case 0x222564u: goto label_222564;
        case 0x222568u: goto label_222568;
        case 0x22256cu: goto label_22256c;
        case 0x222570u: goto label_222570;
        case 0x222574u: goto label_222574;
        case 0x222578u: goto label_222578;
        case 0x22257cu: goto label_22257c;
        case 0x222580u: goto label_222580;
        case 0x222584u: goto label_222584;
        case 0x222588u: goto label_222588;
        case 0x22258cu: goto label_22258c;
        case 0x222590u: goto label_222590;
        case 0x222594u: goto label_222594;
        case 0x222598u: goto label_222598;
        case 0x22259cu: goto label_22259c;
        case 0x2225a0u: goto label_2225a0;
        case 0x2225a4u: goto label_2225a4;
        case 0x2225a8u: goto label_2225a8;
        case 0x2225acu: goto label_2225ac;
        case 0x2225b0u: goto label_2225b0;
        case 0x2225b4u: goto label_2225b4;
        case 0x2225b8u: goto label_2225b8;
        case 0x2225bcu: goto label_2225bc;
        case 0x2225c0u: goto label_2225c0;
        case 0x2225c4u: goto label_2225c4;
        case 0x2225c8u: goto label_2225c8;
        case 0x2225ccu: goto label_2225cc;
        case 0x2225d0u: goto label_2225d0;
        case 0x2225d4u: goto label_2225d4;
        case 0x2225d8u: goto label_2225d8;
        case 0x2225dcu: goto label_2225dc;
        case 0x2225e0u: goto label_2225e0;
        case 0x2225e4u: goto label_2225e4;
        case 0x2225e8u: goto label_2225e8;
        case 0x2225ecu: goto label_2225ec;
        case 0x2225f0u: goto label_2225f0;
        case 0x2225f4u: goto label_2225f4;
        case 0x2225f8u: goto label_2225f8;
        case 0x2225fcu: goto label_2225fc;
        case 0x222600u: goto label_222600;
        case 0x222604u: goto label_222604;
        case 0x222608u: goto label_222608;
        case 0x22260cu: goto label_22260c;
        case 0x222610u: goto label_222610;
        case 0x222614u: goto label_222614;
        case 0x222618u: goto label_222618;
        case 0x22261cu: goto label_22261c;
        case 0x222620u: goto label_222620;
        case 0x222624u: goto label_222624;
        case 0x222628u: goto label_222628;
        case 0x22262cu: goto label_22262c;
        case 0x222630u: goto label_222630;
        case 0x222634u: goto label_222634;
        case 0x222638u: goto label_222638;
        case 0x22263cu: goto label_22263c;
        case 0x222640u: goto label_222640;
        case 0x222644u: goto label_222644;
        case 0x222648u: goto label_222648;
        case 0x22264cu: goto label_22264c;
        case 0x222650u: goto label_222650;
        case 0x222654u: goto label_222654;
        case 0x222658u: goto label_222658;
        case 0x22265cu: goto label_22265c;
        case 0x222660u: goto label_222660;
        case 0x222664u: goto label_222664;
        case 0x222668u: goto label_222668;
        case 0x22266cu: goto label_22266c;
        case 0x222670u: goto label_222670;
        case 0x222674u: goto label_222674;
        case 0x222678u: goto label_222678;
        case 0x22267cu: goto label_22267c;
        case 0x222680u: goto label_222680;
        case 0x222684u: goto label_222684;
        case 0x222688u: goto label_222688;
        case 0x22268cu: goto label_22268c;
        case 0x222690u: goto label_222690;
        case 0x222694u: goto label_222694;
        case 0x222698u: goto label_222698;
        case 0x22269cu: goto label_22269c;
        case 0x2226a0u: goto label_2226a0;
        case 0x2226a4u: goto label_2226a4;
        case 0x2226a8u: goto label_2226a8;
        case 0x2226acu: goto label_2226ac;
        case 0x2226b0u: goto label_2226b0;
        case 0x2226b4u: goto label_2226b4;
        case 0x2226b8u: goto label_2226b8;
        case 0x2226bcu: goto label_2226bc;
        case 0x2226c0u: goto label_2226c0;
        case 0x2226c4u: goto label_2226c4;
        case 0x2226c8u: goto label_2226c8;
        case 0x2226ccu: goto label_2226cc;
        case 0x2226d0u: goto label_2226d0;
        case 0x2226d4u: goto label_2226d4;
        case 0x2226d8u: goto label_2226d8;
        case 0x2226dcu: goto label_2226dc;
        case 0x2226e0u: goto label_2226e0;
        case 0x2226e4u: goto label_2226e4;
        case 0x2226e8u: goto label_2226e8;
        case 0x2226ecu: goto label_2226ec;
        case 0x2226f0u: goto label_2226f0;
        case 0x2226f4u: goto label_2226f4;
        case 0x2226f8u: goto label_2226f8;
        case 0x2226fcu: goto label_2226fc;
        case 0x222700u: goto label_222700;
        case 0x222704u: goto label_222704;
        case 0x222708u: goto label_222708;
        case 0x22270cu: goto label_22270c;
        case 0x222710u: goto label_222710;
        case 0x222714u: goto label_222714;
        case 0x222718u: goto label_222718;
        case 0x22271cu: goto label_22271c;
        case 0x222720u: goto label_222720;
        case 0x222724u: goto label_222724;
        case 0x222728u: goto label_222728;
        case 0x22272cu: goto label_22272c;
        case 0x222730u: goto label_222730;
        case 0x222734u: goto label_222734;
        case 0x222738u: goto label_222738;
        case 0x22273cu: goto label_22273c;
        case 0x222740u: goto label_222740;
        case 0x222744u: goto label_222744;
        case 0x222748u: goto label_222748;
        case 0x22274cu: goto label_22274c;
        case 0x222750u: goto label_222750;
        case 0x222754u: goto label_222754;
        case 0x222758u: goto label_222758;
        case 0x22275cu: goto label_22275c;
        case 0x222760u: goto label_222760;
        case 0x222764u: goto label_222764;
        case 0x222768u: goto label_222768;
        case 0x22276cu: goto label_22276c;
        case 0x222770u: goto label_222770;
        case 0x222774u: goto label_222774;
        case 0x222778u: goto label_222778;
        case 0x22277cu: goto label_22277c;
        default: break;
    }

    ctx->pc = 0x2222a0u;

label_2222a0:
    // 0x2222a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2222a4:
    // 0x2222a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2222a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2222a8:
    // 0x2222a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2222a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2222ac:
    // 0x2222ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2222acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2222b0:
    // 0x2222b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2222b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2222b4:
    // 0x2222b4: 0xc08d320  jal         func_234C80
label_2222b8:
    if (ctx->pc == 0x2222B8u) {
        ctx->pc = 0x2222B8u;
            // 0x2222b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2222BCu;
        goto label_2222bc;
    }
    ctx->pc = 0x2222B4u;
    SET_GPR_U32(ctx, 31, 0x2222BCu);
    ctx->pc = 0x2222B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2222B4u;
            // 0x2222b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234C80u;
    if (runtime->hasFunction(0x234C80u)) {
        auto targetFn = runtime->lookupFunction(0x234C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222BCu; }
        if (ctx->pc != 0x2222BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234C80_0x234c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2222BCu; }
        if (ctx->pc != 0x2222BCu) { return; }
    }
    ctx->pc = 0x2222BCu;
label_2222bc:
    // 0x2222bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2222bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2222c0:
    // 0x2222c0: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2222c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_2222c4:
    // 0x2222c4: 0x2442e9b0  addiu       $v0, $v0, -0x1650
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
label_2222c8:
    // 0x2222c8: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_2222cc:
    // 0x2222cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2222ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2222d0:
    // 0x2222d0: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2222d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_2222d4:
    // 0x2222d4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2222d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2222d8:
    // 0x2222d8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2222d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_2222dc:
    // 0x2222dc: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x2222dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2222e0:
    // 0x2222e0: 0xa6000074  sh          $zero, 0x74($s0)
    ctx->pc = 0x2222e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 0));
label_2222e4:
    // 0x2222e4: 0xa60b0076  sh          $t3, 0x76($s0)
    ctx->pc = 0x2222e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 11));
label_2222e8:
    // 0x2222e8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2222e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2222ec:
    // 0x2222ec: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2222ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_2222f0:
    // 0x2222f0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x2222f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_2222f4:
    // 0x2222f4: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x2222f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_2222f8:
    // 0x2222f8: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2222f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2222fc:
    // 0x2222fc: 0xae0a0080  sw          $t2, 0x80($s0)
    ctx->pc = 0x2222fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 10));
label_222300:
    // 0x222300: 0x2529d420  addiu       $t1, $t1, -0x2BE0
    ctx->pc = 0x222300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956064));
label_222304:
    // 0x222304: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x222304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_222308:
    // 0x222308: 0x2508d430  addiu       $t0, $t0, -0x2BD0
    ctx->pc = 0x222308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956080));
label_22230c:
    // 0x22230c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x22230cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_222310:
    // 0x222310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x222310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222314:
    // 0x222314: 0xae0a008c  sw          $t2, 0x8C($s0)
    ctx->pc = 0x222314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 10));
label_222318:
    // 0x222318: 0x24c6ec30  addiu       $a2, $a2, -0x13D0
    ctx->pc = 0x222318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962224));
label_22231c:
    // 0x22231c: 0xae0900a0  sw          $t1, 0xA0($s0)
    ctx->pc = 0x22231cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 9));
label_222320:
    // 0x222320: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x222320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
label_222324:
    // 0x222324: 0xae0800a0  sw          $t0, 0xA0($s0)
    ctx->pc = 0x222324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 8));
label_222328:
    // 0x222328: 0x2484eb20  addiu       $a0, $a0, -0x14E0
    ctx->pc = 0x222328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961952));
label_22232c:
    // 0x22232c: 0xa60700a6  sh          $a3, 0xA6($s0)
    ctx->pc = 0x22232cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 7));
label_222330:
    // 0x222330: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x222330u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_222334:
    // 0x222334: 0xae0600a0  sw          $a2, 0xA0($s0)
    ctx->pc = 0x222334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 6));
label_222338:
    // 0x222338: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x222338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_22233c:
    // 0x22233c: 0xae0500a0  sw          $a1, 0xA0($s0)
    ctx->pc = 0x22233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 5));
label_222340:
    // 0x222340: 0xae0400a0  sw          $a0, 0xA0($s0)
    ctx->pc = 0x222340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 4));
label_222344:
    // 0x222344: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x222344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
label_222348:
    // 0x222348: 0xa60001d4  sh          $zero, 0x1D4($s0)
    ctx->pc = 0x222348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 468), (uint16_t)GPR_U32(ctx, 0));
label_22234c:
    // 0x22234c: 0xa60b01d6  sh          $t3, 0x1D6($s0)
    ctx->pc = 0x22234cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 470), (uint16_t)GPR_U32(ctx, 11));
label_222350:
    // 0x222350: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x222350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
label_222354:
    // 0x222354: 0xa60001dc  sh          $zero, 0x1DC($s0)
    ctx->pc = 0x222354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 476), (uint16_t)GPR_U32(ctx, 0));
label_222358:
    // 0x222358: 0xa60b01de  sh          $t3, 0x1DE($s0)
    ctx->pc = 0x222358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 478), (uint16_t)GPR_U32(ctx, 11));
label_22235c:
    // 0x22235c: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x22235cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_222360:
    // 0x222360: 0xa60001e4  sh          $zero, 0x1E4($s0)
    ctx->pc = 0x222360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 484), (uint16_t)GPR_U32(ctx, 0));
label_222364:
    // 0x222364: 0xa60b01e6  sh          $t3, 0x1E6($s0)
    ctx->pc = 0x222364u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 486), (uint16_t)GPR_U32(ctx, 11));
label_222368:
    // 0x222368: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x222368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
label_22236c:
    // 0x22236c: 0xa60001ec  sh          $zero, 0x1EC($s0)
    ctx->pc = 0x22236cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 0));
label_222370:
    // 0x222370: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
label_222374:
    if (ctx->pc == 0x222374u) {
        ctx->pc = 0x222374u;
            // 0x222374: 0xa60b01ee  sh          $t3, 0x1EE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 11));
        ctx->pc = 0x222378u;
        goto label_222378;
    }
    ctx->pc = 0x222370u;
    {
        const bool branch_taken_0x222370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222370u;
            // 0x222374: 0xa60b01ee  sh          $t3, 0x1EE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222370) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x222378u;
label_222378:
    // 0x222378: 0x920300a8  lbu         $v1, 0xA8($s0)
    ctx->pc = 0x222378u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
label_22237c:
    // 0x22237c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x22237cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_222380:
    // 0x222380: 0x50200056  beql        $at, $zero, . + 4 + (0x56 << 2)
label_222384:
    if (ctx->pc == 0x222384u) {
        ctx->pc = 0x222384u;
            // 0x222384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222388u;
        goto label_222388;
    }
    ctx->pc = 0x222380u;
    {
        const bool branch_taken_0x222380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x222380) {
            ctx->pc = 0x222384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222380u;
            // 0x222384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2224DCu;
            goto label_2224dc;
        }
    }
    ctx->pc = 0x222388u;
label_222388:
    // 0x222388: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x222388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_22238c:
    // 0x22238c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22238cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_222390:
    // 0x222390: 0x2484ef40  addiu       $a0, $a0, -0x10C0
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963008));
label_222394:
    // 0x222394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_222398:
    // 0x222398: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x222398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22239c:
    // 0x22239c: 0x600008  jr          $v1
label_2223a0:
    if (ctx->pc == 0x2223A0u) {
        ctx->pc = 0x2223A4u;
        goto label_2223a4;
    }
    ctx->pc = 0x22239Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2223A4u: goto label_2223a4;
            case 0x2223CCu: goto label_2223cc;
            case 0x222400u: goto label_222400;
            case 0x222428u: goto label_222428;
            case 0x22245Cu: goto label_22245c;
            case 0x22247Cu: goto label_22247c;
            case 0x2224A8u: goto label_2224a8;
            case 0x2224D8u: goto label_2224d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2223A4u;
label_2223a4:
    // 0x2223a4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_2223a8:
    if (ctx->pc == 0x2223A8u) {
        ctx->pc = 0x2223ACu;
        goto label_2223ac;
    }
    ctx->pc = 0x2223A4u;
    {
        const bool branch_taken_0x2223a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223a4) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x2223ACu;
label_2223ac:
    // 0x2223ac: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2223acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_2223b0:
    // 0x2223b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2223b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2223b4:
    // 0x2223b4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2223b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_2223b8:
    // 0x2223b8: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x2223b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_2223bc:
    // 0x2223bc: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x2223bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
label_2223c0:
    // 0x2223c0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2223c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_2223c4:
    // 0x2223c4: 0x10000044  b           . + 4 + (0x44 << 2)
label_2223c8:
    if (ctx->pc == 0x2223C8u) {
        ctx->pc = 0x2223C8u;
            // 0x2223c8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2223CCu;
        goto label_2223cc;
    }
    ctx->pc = 0x2223C4u;
    {
        const bool branch_taken_0x2223c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2223C4u;
            // 0x2223c8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223c4) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x2223CCu;
label_2223cc:
    // 0x2223cc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_2223d0:
    if (ctx->pc == 0x2223D0u) {
        ctx->pc = 0x2223D4u;
        goto label_2223d4;
    }
    ctx->pc = 0x2223CCu;
    {
        const bool branch_taken_0x2223cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223cc) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x2223D4u;
label_2223d4:
    // 0x2223d4: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2223d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_2223d8:
    // 0x2223d8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2223dc:
    // 0x2223dc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2223dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_2223e0:
    // 0x2223e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2223e4:
    // 0x2223e4: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x2223e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
label_2223e8:
    // 0x2223e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2223e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_2223ec:
    // 0x2223ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2223ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_2223f0:
    // 0x2223f0: 0x2463eab0  addiu       $v1, $v1, -0x1550
    ctx->pc = 0x2223f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961840));
label_2223f4:
    // 0x2223f4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2223f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2223f8:
    // 0x2223f8: 0x10000037  b           . + 4 + (0x37 << 2)
label_2223fc:
    if (ctx->pc == 0x2223FCu) {
        ctx->pc = 0x2223FCu;
            // 0x2223fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x222400u;
        goto label_222400;
    }
    ctx->pc = 0x2223F8u;
    {
        const bool branch_taken_0x2223f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2223F8u;
            // 0x2223fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223f8) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x222400u;
label_222400:
    // 0x222400: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_222404:
    if (ctx->pc == 0x222404u) {
        ctx->pc = 0x222408u;
        goto label_222408;
    }
    ctx->pc = 0x222400u;
    {
        const bool branch_taken_0x222400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222400) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x222408u;
label_222408:
    // 0x222408: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x222408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_22240c:
    // 0x22240c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22240cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_222410:
    // 0x222410: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x222410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_222414:
    // 0x222414: 0x2463eca0  addiu       $v1, $v1, -0x1360
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962336));
label_222418:
    // 0x222418: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x222418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
label_22241c:
    // 0x22241c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22241cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_222420:
    // 0x222420: 0x1000002d  b           . + 4 + (0x2D << 2)
label_222424:
    if (ctx->pc == 0x222424u) {
        ctx->pc = 0x222424u;
            // 0x222424: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x222428u;
        goto label_222428;
    }
    ctx->pc = 0x222420u;
    {
        const bool branch_taken_0x222420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222420u;
            // 0x222424: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222420) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x222428u;
label_222428:
    // 0x222428: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_22242c:
    if (ctx->pc == 0x22242Cu) {
        ctx->pc = 0x222430u;
        goto label_222430;
    }
    ctx->pc = 0x222428u;
    {
        const bool branch_taken_0x222428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222428) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x222430u;
label_222430:
    // 0x222430: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x222430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_222434:
    // 0x222434: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x222434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_222438:
    // 0x222438: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x222438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_22243c:
    // 0x22243c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22243cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_222440:
    // 0x222440: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x222440u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
label_222444:
    // 0x222444: 0x2484eca0  addiu       $a0, $a0, -0x1360
    ctx->pc = 0x222444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962336));
label_222448:
    // 0x222448: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x222448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_22244c:
    // 0x22244c: 0x2463ea40  addiu       $v1, $v1, -0x15C0
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961728));
label_222450:
    // 0x222450: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x222450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_222454:
    // 0x222454: 0x10000020  b           . + 4 + (0x20 << 2)
label_222458:
    if (ctx->pc == 0x222458u) {
        ctx->pc = 0x222458u;
            // 0x222458: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x22245Cu;
        goto label_22245c;
    }
    ctx->pc = 0x222454u;
    {
        const bool branch_taken_0x222454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222454u;
            // 0x222458: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222454) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x22245Cu;
label_22245c:
    // 0x22245c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_222460:
    if (ctx->pc == 0x222460u) {
        ctx->pc = 0x222464u;
        goto label_222464;
    }
    ctx->pc = 0x22245Cu;
    {
        const bool branch_taken_0x22245c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22245c) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x222464u;
label_222464:
    // 0x222464: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x222464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_222468:
    // 0x222468: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x222468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_22246c:
    // 0x22246c: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x22246cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
label_222470:
    // 0x222470: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x222470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_222474:
    // 0x222474: 0x10000018  b           . + 4 + (0x18 << 2)
label_222478:
    if (ctx->pc == 0x222478u) {
        ctx->pc = 0x222478u;
            // 0x222478: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x22247Cu;
        goto label_22247c;
    }
    ctx->pc = 0x222474u;
    {
        const bool branch_taken_0x222474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222474u;
            // 0x222478: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222474) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x22247Cu;
label_22247c:
    // 0x22247c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_222480:
    if (ctx->pc == 0x222480u) {
        ctx->pc = 0x222484u;
        goto label_222484;
    }
    ctx->pc = 0x22247Cu;
    {
        const bool branch_taken_0x22247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22247c) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x222484u;
label_222484:
    // 0x222484: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x222484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_222488:
    // 0x222488: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x222488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22248c:
    // 0x22248c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x22248cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_222490:
    // 0x222490: 0x2463ed10  addiu       $v1, $v1, -0x12F0
    ctx->pc = 0x222490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962448));
label_222494:
    // 0x222494: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x222494u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
label_222498:
    // 0x222498: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x222498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_22249c:
    // 0x22249c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x22249cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2224a0:
    // 0x2224a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2224a4:
    if (ctx->pc == 0x2224A4u) {
        ctx->pc = 0x2224A4u;
            // 0x2224a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2224A8u;
        goto label_2224a8;
    }
    ctx->pc = 0x2224A0u;
    {
        const bool branch_taken_0x2224a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2224A0u;
            // 0x2224a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224a0) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x2224A8u;
label_2224a8:
    // 0x2224a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2224ac:
    if (ctx->pc == 0x2224ACu) {
        ctx->pc = 0x2224B0u;
        goto label_2224b0;
    }
    ctx->pc = 0x2224A8u;
    {
        const bool branch_taken_0x2224a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2224a8) {
            ctx->pc = 0x2224D8u;
            goto label_2224d8;
        }
    }
    ctx->pc = 0x2224B0u;
label_2224b0:
    // 0x2224b0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x2224b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_2224b4:
    // 0x2224b4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2224b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2224b8:
    // 0x2224b8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x2224b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_2224bc:
    // 0x2224bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2224bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2224c0:
    // 0x2224c0: 0xa4470006  sh          $a3, 0x6($v0)
    ctx->pc = 0x2224c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 7));
label_2224c4:
    // 0x2224c4: 0x2484eca0  addiu       $a0, $a0, -0x1360
    ctx->pc = 0x2224c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962336));
label_2224c8:
    // 0x2224c8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2224c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_2224cc:
    // 0x2224cc: 0x2463e9d0  addiu       $v1, $v1, -0x1630
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961616));
label_2224d0:
    // 0x2224d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2224d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2224d4:
    // 0x2224d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2224d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2224d8:
    // 0x2224d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2224d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2224dc:
    // 0x2224dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2224dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2224e0:
    // 0x2224e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2224e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2224e4:
    // 0x2224e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2224e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2224e8:
    // 0x2224e8: 0x3e00008  jr          $ra
label_2224ec:
    if (ctx->pc == 0x2224ECu) {
        ctx->pc = 0x2224ECu;
            // 0x2224ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2224F0u;
        goto label_2224f0;
    }
    ctx->pc = 0x2224E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2224ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2224E8u;
            // 0x2224ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2224F0u;
label_2224f0:
    // 0x2224f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2224f4:
    // 0x2224f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2224f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2224f8:
    // 0x2224f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2224f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2224fc:
    // 0x2224fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2224fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222500:
    // 0x222500: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_222504:
    if (ctx->pc == 0x222504u) {
        ctx->pc = 0x222504u;
            // 0x222504: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222508u;
        goto label_222508;
    }
    ctx->pc = 0x222500u;
    {
        const bool branch_taken_0x222500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x222500) {
            ctx->pc = 0x222504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222500u;
            // 0x222504: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222570u;
            goto label_222570;
        }
    }
    ctx->pc = 0x222508u;
label_222508:
    // 0x222508: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22250c:
    // 0x22250c: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x22250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
label_222510:
    // 0x222510: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_222514:
    if (ctx->pc == 0x222514u) {
        ctx->pc = 0x222514u;
            // 0x222514: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x222518u;
        goto label_222518;
    }
    ctx->pc = 0x222510u;
    {
        const bool branch_taken_0x222510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x222514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222510u;
            // 0x222514: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222510) {
            ctx->pc = 0x222544u;
            goto label_222544;
        }
    }
    ctx->pc = 0x222518u;
label_222518:
    // 0x222518: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22251c:
    // 0x22251c: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x22251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_222520:
    // 0x222520: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_222524:
    if (ctx->pc == 0x222524u) {
        ctx->pc = 0x222524u;
            // 0x222524: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x222528u;
        goto label_222528;
    }
    ctx->pc = 0x222520u;
    {
        const bool branch_taken_0x222520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x222524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222520u;
            // 0x222524: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222520) {
            ctx->pc = 0x222544u;
            goto label_222544;
        }
    }
    ctx->pc = 0x222528u;
label_222528:
    // 0x222528: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22252c:
    // 0x22252c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x22252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_222530:
    // 0x222530: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_222534:
    if (ctx->pc == 0x222534u) {
        ctx->pc = 0x222534u;
            // 0x222534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x222538u;
        goto label_222538;
    }
    ctx->pc = 0x222530u;
    {
        const bool branch_taken_0x222530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x222534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222530u;
            // 0x222534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222530) {
            ctx->pc = 0x222544u;
            goto label_222544;
        }
    }
    ctx->pc = 0x222538u;
label_222538:
    // 0x222538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22253c:
    // 0x22253c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_222540:
    // 0x222540: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x222540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_222544:
    // 0x222544: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x222544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_222548:
    // 0x222548: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222548u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22254c:
    // 0x22254c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_222550:
    if (ctx->pc == 0x222550u) {
        ctx->pc = 0x222554u;
        goto label_222554;
    }
    ctx->pc = 0x22254Cu;
    {
        const bool branch_taken_0x22254c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22254c) {
            ctx->pc = 0x22256Cu;
            goto label_22256c;
        }
    }
    ctx->pc = 0x222554u;
label_222554:
    // 0x222554: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222558:
    // 0x222558: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x222558u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22255c:
    // 0x22255c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222560:
    // 0x222560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x222560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222564:
    // 0x222564: 0xc0a7ab4  jal         func_29EAD0
label_222568:
    if (ctx->pc == 0x222568u) {
        ctx->pc = 0x222568u;
            // 0x222568: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x22256Cu;
        goto label_22256c;
    }
    ctx->pc = 0x222564u;
    SET_GPR_U32(ctx, 31, 0x22256Cu);
    ctx->pc = 0x222568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222564u;
            // 0x222568: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22256Cu; }
        if (ctx->pc != 0x22256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22256Cu; }
        if (ctx->pc != 0x22256Cu) { return; }
    }
    ctx->pc = 0x22256Cu;
label_22256c:
    // 0x22256c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22256cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222570:
    // 0x222570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222574:
    // 0x222574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222578:
    // 0x222578: 0x3e00008  jr          $ra
label_22257c:
    if (ctx->pc == 0x22257Cu) {
        ctx->pc = 0x22257Cu;
            // 0x22257c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x222580u;
        goto label_222580;
    }
    ctx->pc = 0x222578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222578u;
            // 0x22257c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222580u;
label_222580:
    // 0x222580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_222584:
    // 0x222584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_222588:
    // 0x222588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22258c:
    // 0x22258c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22258cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222590:
    // 0x222590: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_222594:
    if (ctx->pc == 0x222594u) {
        ctx->pc = 0x222594u;
            // 0x222594: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222598u;
        goto label_222598;
    }
    ctx->pc = 0x222590u;
    {
        const bool branch_taken_0x222590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x222590) {
            ctx->pc = 0x222594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222590u;
            // 0x222594: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222600u;
            goto label_222600;
        }
    }
    ctx->pc = 0x222598u;
label_222598:
    // 0x222598: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22259c:
    // 0x22259c: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x22259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_2225a0:
    // 0x2225a0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2225a4:
    if (ctx->pc == 0x2225A4u) {
        ctx->pc = 0x2225A4u;
            // 0x2225a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2225A8u;
        goto label_2225a8;
    }
    ctx->pc = 0x2225A0u;
    {
        const bool branch_taken_0x2225a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2225A0u;
            // 0x2225a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225a0) {
            ctx->pc = 0x2225D4u;
            goto label_2225d4;
        }
    }
    ctx->pc = 0x2225A8u;
label_2225a8:
    // 0x2225a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2225a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2225ac:
    // 0x2225ac: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_2225b0:
    // 0x2225b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2225b4:
    if (ctx->pc == 0x2225B4u) {
        ctx->pc = 0x2225B4u;
            // 0x2225b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2225B8u;
        goto label_2225b8;
    }
    ctx->pc = 0x2225B0u;
    {
        const bool branch_taken_0x2225b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2225B0u;
            // 0x2225b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225b0) {
            ctx->pc = 0x2225D4u;
            goto label_2225d4;
        }
    }
    ctx->pc = 0x2225B8u;
label_2225b8:
    // 0x2225b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2225bc:
    // 0x2225bc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2225c0:
    // 0x2225c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2225c4:
    if (ctx->pc == 0x2225C4u) {
        ctx->pc = 0x2225C4u;
            // 0x2225c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2225C8u;
        goto label_2225c8;
    }
    ctx->pc = 0x2225C0u;
    {
        const bool branch_taken_0x2225c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2225C0u;
            // 0x2225c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225c0) {
            ctx->pc = 0x2225D4u;
            goto label_2225d4;
        }
    }
    ctx->pc = 0x2225C8u;
label_2225c8:
    // 0x2225c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2225c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2225cc:
    // 0x2225cc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2225d0:
    // 0x2225d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2225d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2225d4:
    // 0x2225d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2225d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2225d8:
    // 0x2225d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2225d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2225dc:
    // 0x2225dc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_2225e0:
    if (ctx->pc == 0x2225E0u) {
        ctx->pc = 0x2225E4u;
        goto label_2225e4;
    }
    ctx->pc = 0x2225DCu;
    {
        const bool branch_taken_0x2225dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2225dc) {
            ctx->pc = 0x2225FCu;
            goto label_2225fc;
        }
    }
    ctx->pc = 0x2225E4u;
label_2225e4:
    // 0x2225e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2225e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2225e8:
    // 0x2225e8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2225e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2225ec:
    // 0x2225ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2225ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2225f0:
    // 0x2225f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2225f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2225f4:
    // 0x2225f4: 0xc0a7ab4  jal         func_29EAD0
label_2225f8:
    if (ctx->pc == 0x2225F8u) {
        ctx->pc = 0x2225F8u;
            // 0x2225f8: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x2225FCu;
        goto label_2225fc;
    }
    ctx->pc = 0x2225F4u;
    SET_GPR_U32(ctx, 31, 0x2225FCu);
    ctx->pc = 0x2225F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2225F4u;
            // 0x2225f8: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225FCu; }
        if (ctx->pc != 0x2225FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2225FCu; }
        if (ctx->pc != 0x2225FCu) { return; }
    }
    ctx->pc = 0x2225FCu;
label_2225fc:
    // 0x2225fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2225fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222600:
    // 0x222600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222604:
    // 0x222604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222608:
    // 0x222608: 0x3e00008  jr          $ra
label_22260c:
    if (ctx->pc == 0x22260Cu) {
        ctx->pc = 0x22260Cu;
            // 0x22260c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x222610u;
        goto label_222610;
    }
    ctx->pc = 0x222608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222608u;
            // 0x22260c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222610u;
label_222610:
    // 0x222610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_222614:
    // 0x222614: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_222618:
    // 0x222618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22261c:
    // 0x22261c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_222620:
    // 0x222620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_222624:
    // 0x222624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222628:
    // 0x222628: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22262c:
    // 0x22262c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22262cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222630:
    // 0x222630: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_222634:
    // 0x222634: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x222634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_222638:
    // 0x222638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22263c:
    // 0x22263c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_222640:
    // 0x222640: 0x320f809  jalr        $t9
label_222644:
    if (ctx->pc == 0x222644u) {
        ctx->pc = 0x222644u;
            // 0x222644: 0x24a5c440  addiu       $a1, $a1, -0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952000));
        ctx->pc = 0x222648u;
        goto label_222648;
    }
    ctx->pc = 0x222640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222648u);
        ctx->pc = 0x222644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222640u;
            // 0x222644: 0x24a5c440  addiu       $a1, $a1, -0x3BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952000));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222648u; }
            if (ctx->pc != 0x222648u) { return; }
        }
        }
    }
    ctx->pc = 0x222648u;
label_222648:
    // 0x222648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22264c:
    // 0x22264c: 0xc08d3d4  jal         func_234F50
label_222650:
    if (ctx->pc == 0x222650u) {
        ctx->pc = 0x222650u;
            // 0x222650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222654u;
        goto label_222654;
    }
    ctx->pc = 0x22264Cu;
    SET_GPR_U32(ctx, 31, 0x222654u);
    ctx->pc = 0x222650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22264Cu;
            // 0x222650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234F50u;
    if (runtime->hasFunction(0x234F50u)) {
        auto targetFn = runtime->lookupFunction(0x234F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222654u; }
        if (ctx->pc != 0x222654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234F50_0x234f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222654u; }
        if (ctx->pc != 0x222654u) { return; }
    }
    ctx->pc = 0x222654u;
label_222654:
    // 0x222654: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x222654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_222658:
    // 0x222658: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x222658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22265c:
    // 0x22265c: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x22265cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_222660:
    // 0x222660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222664:
    // 0x222664: 0x24a5c448  addiu       $a1, $a1, -0x3BB8
    ctx->pc = 0x222664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952008));
label_222668:
    // 0x222668: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x222668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22266c:
    // 0x22266c: 0x320f809  jalr        $t9
label_222670:
    if (ctx->pc == 0x222670u) {
        ctx->pc = 0x222670u;
            // 0x222670: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x222674u;
        goto label_222674;
    }
    ctx->pc = 0x22266Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222674u);
        ctx->pc = 0x222670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22266Cu;
            // 0x222670: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222674u; }
            if (ctx->pc != 0x222674u) { return; }
        }
        }
    }
    ctx->pc = 0x222674u;
label_222674:
    // 0x222674: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x222674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_222678:
    // 0x222678: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x222678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22267c:
    // 0x22267c: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x22267cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_222680:
    // 0x222680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222684:
    // 0x222684: 0x24a5c458  addiu       $a1, $a1, -0x3BA8
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952024));
label_222688:
    // 0x222688: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22268c:
    // 0x22268c: 0x320f809  jalr        $t9
label_222690:
    if (ctx->pc == 0x222690u) {
        ctx->pc = 0x222690u;
            // 0x222690: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x222694u;
        goto label_222694;
    }
    ctx->pc = 0x22268Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222694u);
        ctx->pc = 0x222690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22268Cu;
            // 0x222690: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222694u; }
            if (ctx->pc != 0x222694u) { return; }
        }
        }
    }
    ctx->pc = 0x222694u;
label_222694:
    // 0x222694: 0x962301d6  lhu         $v1, 0x1D6($s1)
    ctx->pc = 0x222694u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
label_222698:
    // 0x222698: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x222698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_22269c:
    // 0x22269c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2226a0:
    if (ctx->pc == 0x2226A0u) {
        ctx->pc = 0x2226A0u;
            // 0x2226a0: 0x962301de  lhu         $v1, 0x1DE($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
        ctx->pc = 0x2226A4u;
        goto label_2226a4;
    }
    ctx->pc = 0x22269Cu;
    {
        const bool branch_taken_0x22269c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22269c) {
            ctx->pc = 0x2226A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22269Cu;
            // 0x2226a0: 0x962301de  lhu         $v1, 0x1DE($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2226D8u;
            goto label_2226d8;
        }
    }
    ctx->pc = 0x2226A4u;
label_2226a4:
    // 0x2226a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2226a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2226a8:
    // 0x2226a8: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x2226a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2226ac:
    // 0x2226ac: 0x962301d4  lhu         $v1, 0x1D4($s1)
    ctx->pc = 0x2226acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_2226b0:
    // 0x2226b0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2226b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2226b4:
    // 0x2226b4: 0x8e2701d0  lw          $a3, 0x1D0($s1)
    ctx->pc = 0x2226b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
label_2226b8:
    // 0x2226b8: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2226b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2226bc:
    // 0x2226bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2226bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2226c0:
    // 0x2226c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2226c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2226c4:
    // 0x2226c4: 0x24a5c470  addiu       $a1, $a1, -0x3B90
    ctx->pc = 0x2226c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
label_2226c8:
    // 0x2226c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2226c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2226cc:
    // 0x2226cc: 0x320f809  jalr        $t9
label_2226d0:
    if (ctx->pc == 0x2226D0u) {
        ctx->pc = 0x2226D0u;
            // 0x2226d0: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x2226D4u;
        goto label_2226d4;
    }
    ctx->pc = 0x2226CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2226D4u);
        ctx->pc = 0x2226D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2226CCu;
            // 0x2226d0: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2226D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2226D4u; }
            if (ctx->pc != 0x2226D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2226D4u;
label_2226d4:
    // 0x2226d4: 0x962301de  lhu         $v1, 0x1DE($s1)
    ctx->pc = 0x2226d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
label_2226d8:
    // 0x2226d8: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2226d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2226dc:
    // 0x2226dc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2226e0:
    if (ctx->pc == 0x2226E0u) {
        ctx->pc = 0x2226E0u;
            // 0x2226e0: 0x962301e6  lhu         $v1, 0x1E6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
        ctx->pc = 0x2226E4u;
        goto label_2226e4;
    }
    ctx->pc = 0x2226DCu;
    {
        const bool branch_taken_0x2226dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2226dc) {
            ctx->pc = 0x2226E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2226DCu;
            // 0x2226e0: 0x962301e6  lhu         $v1, 0x1E6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222718u;
            goto label_222718;
        }
    }
    ctx->pc = 0x2226E4u;
label_2226e4:
    // 0x2226e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2226e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2226e8:
    // 0x2226e8: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x2226e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2226ec:
    // 0x2226ec: 0x962301dc  lhu         $v1, 0x1DC($s1)
    ctx->pc = 0x2226ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 476)));
label_2226f0:
    // 0x2226f0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2226f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2226f4:
    // 0x2226f4: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x2226f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
label_2226f8:
    // 0x2226f8: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2226f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2226fc:
    // 0x2226fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2226fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_222700:
    // 0x222700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222704:
    // 0x222704: 0x24a5c480  addiu       $a1, $a1, -0x3B80
    ctx->pc = 0x222704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
label_222708:
    // 0x222708: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x222708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22270c:
    // 0x22270c: 0x320f809  jalr        $t9
label_222710:
    if (ctx->pc == 0x222710u) {
        ctx->pc = 0x222710u;
            // 0x222710: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x222714u;
        goto label_222714;
    }
    ctx->pc = 0x22270Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222714u);
        ctx->pc = 0x222710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22270Cu;
            // 0x222710: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222714u; }
            if (ctx->pc != 0x222714u) { return; }
        }
        }
    }
    ctx->pc = 0x222714u;
label_222714:
    // 0x222714: 0x962301e6  lhu         $v1, 0x1E6($s1)
    ctx->pc = 0x222714u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
label_222718:
    // 0x222718: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x222718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_22271c:
    // 0x22271c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_222720:
    if (ctx->pc == 0x222720u) {
        ctx->pc = 0x222720u;
            // 0x222720: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x222724u;
        goto label_222724;
    }
    ctx->pc = 0x22271Cu;
    {
        const bool branch_taken_0x22271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22271c) {
            ctx->pc = 0x222720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22271Cu;
            // 0x222720: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222758u;
            goto label_222758;
        }
    }
    ctx->pc = 0x222724u;
label_222724:
    // 0x222724: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x222724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_222728:
    // 0x222728: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x222728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_22272c:
    // 0x22272c: 0x962301e4  lhu         $v1, 0x1E4($s1)
    ctx->pc = 0x22272cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 484)));
label_222730:
    // 0x222730: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x222730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_222734:
    // 0x222734: 0x8e2701e0  lw          $a3, 0x1E0($s1)
    ctx->pc = 0x222734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_222738:
    // 0x222738: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x222738u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22273c:
    // 0x22273c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22273cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_222740:
    // 0x222740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222744:
    // 0x222744: 0x24a5c490  addiu       $a1, $a1, -0x3B70
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952080));
label_222748:
    // 0x222748: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x222748u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22274c:
    // 0x22274c: 0x320f809  jalr        $t9
label_222750:
    if (ctx->pc == 0x222750u) {
        ctx->pc = 0x222750u;
            // 0x222750: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x222754u;
        goto label_222754;
    }
    ctx->pc = 0x22274Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222754u);
        ctx->pc = 0x222750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22274Cu;
            // 0x222750: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222754u; }
            if (ctx->pc != 0x222754u) { return; }
        }
        }
    }
    ctx->pc = 0x222754u;
label_222754:
    // 0x222754: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x222754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_222758:
    // 0x222758: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x222758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22275c:
    // 0x22275c: 0x320f809  jalr        $t9
label_222760:
    if (ctx->pc == 0x222760u) {
        ctx->pc = 0x222760u;
            // 0x222760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222764u;
        goto label_222764;
    }
    ctx->pc = 0x22275Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222764u);
        ctx->pc = 0x222760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22275Cu;
            // 0x222760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222764u; }
            if (ctx->pc != 0x222764u) { return; }
        }
        }
    }
    ctx->pc = 0x222764u;
label_222764:
    // 0x222764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222768:
    // 0x222768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22276c:
    // 0x22276c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22276cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222770:
    // 0x222770: 0x3e00008  jr          $ra
label_222774:
    if (ctx->pc == 0x222774u) {
        ctx->pc = 0x222774u;
            // 0x222774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x222778u;
        goto label_222778;
    }
    ctx->pc = 0x222770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222770u;
            // 0x222774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222778u;
label_222778:
    // 0x222778: 0x0  nop
    ctx->pc = 0x222778u;
    // NOP
label_22277c:
    // 0x22277c: 0x0  nop
    ctx->pc = 0x22277cu;
    // NOP
}
