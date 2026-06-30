#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00552180
// Address: 0x552180 - 0x552760
void sub_00552180_0x552180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00552180_0x552180");
#endif

    switch (ctx->pc) {
        case 0x552180u: goto label_552180;
        case 0x552184u: goto label_552184;
        case 0x552188u: goto label_552188;
        case 0x55218cu: goto label_55218c;
        case 0x552190u: goto label_552190;
        case 0x552194u: goto label_552194;
        case 0x552198u: goto label_552198;
        case 0x55219cu: goto label_55219c;
        case 0x5521a0u: goto label_5521a0;
        case 0x5521a4u: goto label_5521a4;
        case 0x5521a8u: goto label_5521a8;
        case 0x5521acu: goto label_5521ac;
        case 0x5521b0u: goto label_5521b0;
        case 0x5521b4u: goto label_5521b4;
        case 0x5521b8u: goto label_5521b8;
        case 0x5521bcu: goto label_5521bc;
        case 0x5521c0u: goto label_5521c0;
        case 0x5521c4u: goto label_5521c4;
        case 0x5521c8u: goto label_5521c8;
        case 0x5521ccu: goto label_5521cc;
        case 0x5521d0u: goto label_5521d0;
        case 0x5521d4u: goto label_5521d4;
        case 0x5521d8u: goto label_5521d8;
        case 0x5521dcu: goto label_5521dc;
        case 0x5521e0u: goto label_5521e0;
        case 0x5521e4u: goto label_5521e4;
        case 0x5521e8u: goto label_5521e8;
        case 0x5521ecu: goto label_5521ec;
        case 0x5521f0u: goto label_5521f0;
        case 0x5521f4u: goto label_5521f4;
        case 0x5521f8u: goto label_5521f8;
        case 0x5521fcu: goto label_5521fc;
        case 0x552200u: goto label_552200;
        case 0x552204u: goto label_552204;
        case 0x552208u: goto label_552208;
        case 0x55220cu: goto label_55220c;
        case 0x552210u: goto label_552210;
        case 0x552214u: goto label_552214;
        case 0x552218u: goto label_552218;
        case 0x55221cu: goto label_55221c;
        case 0x552220u: goto label_552220;
        case 0x552224u: goto label_552224;
        case 0x552228u: goto label_552228;
        case 0x55222cu: goto label_55222c;
        case 0x552230u: goto label_552230;
        case 0x552234u: goto label_552234;
        case 0x552238u: goto label_552238;
        case 0x55223cu: goto label_55223c;
        case 0x552240u: goto label_552240;
        case 0x552244u: goto label_552244;
        case 0x552248u: goto label_552248;
        case 0x55224cu: goto label_55224c;
        case 0x552250u: goto label_552250;
        case 0x552254u: goto label_552254;
        case 0x552258u: goto label_552258;
        case 0x55225cu: goto label_55225c;
        case 0x552260u: goto label_552260;
        case 0x552264u: goto label_552264;
        case 0x552268u: goto label_552268;
        case 0x55226cu: goto label_55226c;
        case 0x552270u: goto label_552270;
        case 0x552274u: goto label_552274;
        case 0x552278u: goto label_552278;
        case 0x55227cu: goto label_55227c;
        case 0x552280u: goto label_552280;
        case 0x552284u: goto label_552284;
        case 0x552288u: goto label_552288;
        case 0x55228cu: goto label_55228c;
        case 0x552290u: goto label_552290;
        case 0x552294u: goto label_552294;
        case 0x552298u: goto label_552298;
        case 0x55229cu: goto label_55229c;
        case 0x5522a0u: goto label_5522a0;
        case 0x5522a4u: goto label_5522a4;
        case 0x5522a8u: goto label_5522a8;
        case 0x5522acu: goto label_5522ac;
        case 0x5522b0u: goto label_5522b0;
        case 0x5522b4u: goto label_5522b4;
        case 0x5522b8u: goto label_5522b8;
        case 0x5522bcu: goto label_5522bc;
        case 0x5522c0u: goto label_5522c0;
        case 0x5522c4u: goto label_5522c4;
        case 0x5522c8u: goto label_5522c8;
        case 0x5522ccu: goto label_5522cc;
        case 0x5522d0u: goto label_5522d0;
        case 0x5522d4u: goto label_5522d4;
        case 0x5522d8u: goto label_5522d8;
        case 0x5522dcu: goto label_5522dc;
        case 0x5522e0u: goto label_5522e0;
        case 0x5522e4u: goto label_5522e4;
        case 0x5522e8u: goto label_5522e8;
        case 0x5522ecu: goto label_5522ec;
        case 0x5522f0u: goto label_5522f0;
        case 0x5522f4u: goto label_5522f4;
        case 0x5522f8u: goto label_5522f8;
        case 0x5522fcu: goto label_5522fc;
        case 0x552300u: goto label_552300;
        case 0x552304u: goto label_552304;
        case 0x552308u: goto label_552308;
        case 0x55230cu: goto label_55230c;
        case 0x552310u: goto label_552310;
        case 0x552314u: goto label_552314;
        case 0x552318u: goto label_552318;
        case 0x55231cu: goto label_55231c;
        case 0x552320u: goto label_552320;
        case 0x552324u: goto label_552324;
        case 0x552328u: goto label_552328;
        case 0x55232cu: goto label_55232c;
        case 0x552330u: goto label_552330;
        case 0x552334u: goto label_552334;
        case 0x552338u: goto label_552338;
        case 0x55233cu: goto label_55233c;
        case 0x552340u: goto label_552340;
        case 0x552344u: goto label_552344;
        case 0x552348u: goto label_552348;
        case 0x55234cu: goto label_55234c;
        case 0x552350u: goto label_552350;
        case 0x552354u: goto label_552354;
        case 0x552358u: goto label_552358;
        case 0x55235cu: goto label_55235c;
        case 0x552360u: goto label_552360;
        case 0x552364u: goto label_552364;
        case 0x552368u: goto label_552368;
        case 0x55236cu: goto label_55236c;
        case 0x552370u: goto label_552370;
        case 0x552374u: goto label_552374;
        case 0x552378u: goto label_552378;
        case 0x55237cu: goto label_55237c;
        case 0x552380u: goto label_552380;
        case 0x552384u: goto label_552384;
        case 0x552388u: goto label_552388;
        case 0x55238cu: goto label_55238c;
        case 0x552390u: goto label_552390;
        case 0x552394u: goto label_552394;
        case 0x552398u: goto label_552398;
        case 0x55239cu: goto label_55239c;
        case 0x5523a0u: goto label_5523a0;
        case 0x5523a4u: goto label_5523a4;
        case 0x5523a8u: goto label_5523a8;
        case 0x5523acu: goto label_5523ac;
        case 0x5523b0u: goto label_5523b0;
        case 0x5523b4u: goto label_5523b4;
        case 0x5523b8u: goto label_5523b8;
        case 0x5523bcu: goto label_5523bc;
        case 0x5523c0u: goto label_5523c0;
        case 0x5523c4u: goto label_5523c4;
        case 0x5523c8u: goto label_5523c8;
        case 0x5523ccu: goto label_5523cc;
        case 0x5523d0u: goto label_5523d0;
        case 0x5523d4u: goto label_5523d4;
        case 0x5523d8u: goto label_5523d8;
        case 0x5523dcu: goto label_5523dc;
        case 0x5523e0u: goto label_5523e0;
        case 0x5523e4u: goto label_5523e4;
        case 0x5523e8u: goto label_5523e8;
        case 0x5523ecu: goto label_5523ec;
        case 0x5523f0u: goto label_5523f0;
        case 0x5523f4u: goto label_5523f4;
        case 0x5523f8u: goto label_5523f8;
        case 0x5523fcu: goto label_5523fc;
        case 0x552400u: goto label_552400;
        case 0x552404u: goto label_552404;
        case 0x552408u: goto label_552408;
        case 0x55240cu: goto label_55240c;
        case 0x552410u: goto label_552410;
        case 0x552414u: goto label_552414;
        case 0x552418u: goto label_552418;
        case 0x55241cu: goto label_55241c;
        case 0x552420u: goto label_552420;
        case 0x552424u: goto label_552424;
        case 0x552428u: goto label_552428;
        case 0x55242cu: goto label_55242c;
        case 0x552430u: goto label_552430;
        case 0x552434u: goto label_552434;
        case 0x552438u: goto label_552438;
        case 0x55243cu: goto label_55243c;
        case 0x552440u: goto label_552440;
        case 0x552444u: goto label_552444;
        case 0x552448u: goto label_552448;
        case 0x55244cu: goto label_55244c;
        case 0x552450u: goto label_552450;
        case 0x552454u: goto label_552454;
        case 0x552458u: goto label_552458;
        case 0x55245cu: goto label_55245c;
        case 0x552460u: goto label_552460;
        case 0x552464u: goto label_552464;
        case 0x552468u: goto label_552468;
        case 0x55246cu: goto label_55246c;
        case 0x552470u: goto label_552470;
        case 0x552474u: goto label_552474;
        case 0x552478u: goto label_552478;
        case 0x55247cu: goto label_55247c;
        case 0x552480u: goto label_552480;
        case 0x552484u: goto label_552484;
        case 0x552488u: goto label_552488;
        case 0x55248cu: goto label_55248c;
        case 0x552490u: goto label_552490;
        case 0x552494u: goto label_552494;
        case 0x552498u: goto label_552498;
        case 0x55249cu: goto label_55249c;
        case 0x5524a0u: goto label_5524a0;
        case 0x5524a4u: goto label_5524a4;
        case 0x5524a8u: goto label_5524a8;
        case 0x5524acu: goto label_5524ac;
        case 0x5524b0u: goto label_5524b0;
        case 0x5524b4u: goto label_5524b4;
        case 0x5524b8u: goto label_5524b8;
        case 0x5524bcu: goto label_5524bc;
        case 0x5524c0u: goto label_5524c0;
        case 0x5524c4u: goto label_5524c4;
        case 0x5524c8u: goto label_5524c8;
        case 0x5524ccu: goto label_5524cc;
        case 0x5524d0u: goto label_5524d0;
        case 0x5524d4u: goto label_5524d4;
        case 0x5524d8u: goto label_5524d8;
        case 0x5524dcu: goto label_5524dc;
        case 0x5524e0u: goto label_5524e0;
        case 0x5524e4u: goto label_5524e4;
        case 0x5524e8u: goto label_5524e8;
        case 0x5524ecu: goto label_5524ec;
        case 0x5524f0u: goto label_5524f0;
        case 0x5524f4u: goto label_5524f4;
        case 0x5524f8u: goto label_5524f8;
        case 0x5524fcu: goto label_5524fc;
        case 0x552500u: goto label_552500;
        case 0x552504u: goto label_552504;
        case 0x552508u: goto label_552508;
        case 0x55250cu: goto label_55250c;
        case 0x552510u: goto label_552510;
        case 0x552514u: goto label_552514;
        case 0x552518u: goto label_552518;
        case 0x55251cu: goto label_55251c;
        case 0x552520u: goto label_552520;
        case 0x552524u: goto label_552524;
        case 0x552528u: goto label_552528;
        case 0x55252cu: goto label_55252c;
        case 0x552530u: goto label_552530;
        case 0x552534u: goto label_552534;
        case 0x552538u: goto label_552538;
        case 0x55253cu: goto label_55253c;
        case 0x552540u: goto label_552540;
        case 0x552544u: goto label_552544;
        case 0x552548u: goto label_552548;
        case 0x55254cu: goto label_55254c;
        case 0x552550u: goto label_552550;
        case 0x552554u: goto label_552554;
        case 0x552558u: goto label_552558;
        case 0x55255cu: goto label_55255c;
        case 0x552560u: goto label_552560;
        case 0x552564u: goto label_552564;
        case 0x552568u: goto label_552568;
        case 0x55256cu: goto label_55256c;
        case 0x552570u: goto label_552570;
        case 0x552574u: goto label_552574;
        case 0x552578u: goto label_552578;
        case 0x55257cu: goto label_55257c;
        case 0x552580u: goto label_552580;
        case 0x552584u: goto label_552584;
        case 0x552588u: goto label_552588;
        case 0x55258cu: goto label_55258c;
        case 0x552590u: goto label_552590;
        case 0x552594u: goto label_552594;
        case 0x552598u: goto label_552598;
        case 0x55259cu: goto label_55259c;
        case 0x5525a0u: goto label_5525a0;
        case 0x5525a4u: goto label_5525a4;
        case 0x5525a8u: goto label_5525a8;
        case 0x5525acu: goto label_5525ac;
        case 0x5525b0u: goto label_5525b0;
        case 0x5525b4u: goto label_5525b4;
        case 0x5525b8u: goto label_5525b8;
        case 0x5525bcu: goto label_5525bc;
        case 0x5525c0u: goto label_5525c0;
        case 0x5525c4u: goto label_5525c4;
        case 0x5525c8u: goto label_5525c8;
        case 0x5525ccu: goto label_5525cc;
        case 0x5525d0u: goto label_5525d0;
        case 0x5525d4u: goto label_5525d4;
        case 0x5525d8u: goto label_5525d8;
        case 0x5525dcu: goto label_5525dc;
        case 0x5525e0u: goto label_5525e0;
        case 0x5525e4u: goto label_5525e4;
        case 0x5525e8u: goto label_5525e8;
        case 0x5525ecu: goto label_5525ec;
        case 0x5525f0u: goto label_5525f0;
        case 0x5525f4u: goto label_5525f4;
        case 0x5525f8u: goto label_5525f8;
        case 0x5525fcu: goto label_5525fc;
        case 0x552600u: goto label_552600;
        case 0x552604u: goto label_552604;
        case 0x552608u: goto label_552608;
        case 0x55260cu: goto label_55260c;
        case 0x552610u: goto label_552610;
        case 0x552614u: goto label_552614;
        case 0x552618u: goto label_552618;
        case 0x55261cu: goto label_55261c;
        case 0x552620u: goto label_552620;
        case 0x552624u: goto label_552624;
        case 0x552628u: goto label_552628;
        case 0x55262cu: goto label_55262c;
        case 0x552630u: goto label_552630;
        case 0x552634u: goto label_552634;
        case 0x552638u: goto label_552638;
        case 0x55263cu: goto label_55263c;
        case 0x552640u: goto label_552640;
        case 0x552644u: goto label_552644;
        case 0x552648u: goto label_552648;
        case 0x55264cu: goto label_55264c;
        case 0x552650u: goto label_552650;
        case 0x552654u: goto label_552654;
        case 0x552658u: goto label_552658;
        case 0x55265cu: goto label_55265c;
        case 0x552660u: goto label_552660;
        case 0x552664u: goto label_552664;
        case 0x552668u: goto label_552668;
        case 0x55266cu: goto label_55266c;
        case 0x552670u: goto label_552670;
        case 0x552674u: goto label_552674;
        case 0x552678u: goto label_552678;
        case 0x55267cu: goto label_55267c;
        case 0x552680u: goto label_552680;
        case 0x552684u: goto label_552684;
        case 0x552688u: goto label_552688;
        case 0x55268cu: goto label_55268c;
        case 0x552690u: goto label_552690;
        case 0x552694u: goto label_552694;
        case 0x552698u: goto label_552698;
        case 0x55269cu: goto label_55269c;
        case 0x5526a0u: goto label_5526a0;
        case 0x5526a4u: goto label_5526a4;
        case 0x5526a8u: goto label_5526a8;
        case 0x5526acu: goto label_5526ac;
        case 0x5526b0u: goto label_5526b0;
        case 0x5526b4u: goto label_5526b4;
        case 0x5526b8u: goto label_5526b8;
        case 0x5526bcu: goto label_5526bc;
        case 0x5526c0u: goto label_5526c0;
        case 0x5526c4u: goto label_5526c4;
        case 0x5526c8u: goto label_5526c8;
        case 0x5526ccu: goto label_5526cc;
        case 0x5526d0u: goto label_5526d0;
        case 0x5526d4u: goto label_5526d4;
        case 0x5526d8u: goto label_5526d8;
        case 0x5526dcu: goto label_5526dc;
        case 0x5526e0u: goto label_5526e0;
        case 0x5526e4u: goto label_5526e4;
        case 0x5526e8u: goto label_5526e8;
        case 0x5526ecu: goto label_5526ec;
        case 0x5526f0u: goto label_5526f0;
        case 0x5526f4u: goto label_5526f4;
        case 0x5526f8u: goto label_5526f8;
        case 0x5526fcu: goto label_5526fc;
        case 0x552700u: goto label_552700;
        case 0x552704u: goto label_552704;
        case 0x552708u: goto label_552708;
        case 0x55270cu: goto label_55270c;
        case 0x552710u: goto label_552710;
        case 0x552714u: goto label_552714;
        case 0x552718u: goto label_552718;
        case 0x55271cu: goto label_55271c;
        case 0x552720u: goto label_552720;
        case 0x552724u: goto label_552724;
        case 0x552728u: goto label_552728;
        case 0x55272cu: goto label_55272c;
        case 0x552730u: goto label_552730;
        case 0x552734u: goto label_552734;
        case 0x552738u: goto label_552738;
        case 0x55273cu: goto label_55273c;
        case 0x552740u: goto label_552740;
        case 0x552744u: goto label_552744;
        case 0x552748u: goto label_552748;
        case 0x55274cu: goto label_55274c;
        case 0x552750u: goto label_552750;
        case 0x552754u: goto label_552754;
        case 0x552758u: goto label_552758;
        case 0x55275cu: goto label_55275c;
        default: break;
    }

    ctx->pc = 0x552180u;

label_552180:
    // 0x552180: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x552180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_552184:
    // 0x552184: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x552184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_552188:
    // 0x552188: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x552188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_55218c:
    // 0x55218c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x55218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_552190:
    // 0x552190: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x552190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_552194:
    // 0x552194: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x552194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_552198:
    // 0x552198: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x552198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55219c:
    // 0x55219c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x55219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_5521a0:
    // 0x5521a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x5521a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5521a4:
    // 0x5521a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x5521a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_5521a8:
    // 0x5521a8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x5521a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5521ac:
    // 0x5521ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x5521acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_5521b0:
    // 0x5521b0: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x5521b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_5521b4:
    // 0x5521b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x5521b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_5521b8:
    // 0x5521b8: 0x2673e080  addiu       $s3, $s3, -0x1F80
    ctx->pc = 0x5521b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959232));
label_5521bc:
    // 0x5521bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x5521bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_5521c0:
    // 0x5521c0: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x5521c0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_5521c4:
    // 0x5521c4: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x5521c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
label_5521c8:
    // 0x5521c8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x5521c8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_5521cc:
    // 0x5521cc: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x5521ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
label_5521d0:
    // 0x5521d0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x5521d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_5521d4:
    // 0x5521d4: 0x2610d960  addiu       $s0, $s0, -0x26A0
    ctx->pc = 0x5521d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957408));
label_5521d8:
    // 0x5521d8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x5521d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_5521dc:
    // 0x5521dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5521dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_5521e0:
    // 0x5521e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5521e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_5521e4:
    // 0x5521e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5521e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5521e8:
    // 0x5521e8: 0x9452dc40  lhu         $s2, -0x23C0($v0)
    ctx->pc = 0x5521e8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958144)));
label_5521ec:
    // 0x5521ec: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x5521ecu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
label_5521f0:
    // 0x5521f0: 0x90830082  lbu         $v1, 0x82($a0)
    ctx->pc = 0x5521f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
label_5521f4:
    // 0x5521f4: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x5521f4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
label_5521f8:
    // 0x5521f8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5521f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5521fc:
    // 0x5521fc: 0x9451dc42  lhu         $s1, -0x23BE($v0)
    ctx->pc = 0x5521fcu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958146)));
label_552200:
    // 0x552200: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x552200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
label_552204:
    // 0x552204: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x552204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_552208:
    // 0x552208: 0x9456dc48  lhu         $s6, -0x23B8($v0)
    ctx->pc = 0x552208u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958152)));
label_55220c:
    // 0x55220c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_552210:
    // 0x552210: 0x9457dc4a  lhu         $s7, -0x23B6($v0)
    ctx->pc = 0x552210u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958154)));
label_552214:
    // 0x552214: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x552214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_552218:
    // 0x552218: 0x945edc50  lhu         $fp, -0x23B0($v0)
    ctx->pc = 0x552218u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958160)));
label_55221c:
    // 0x55221c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_552220:
    // 0x552220: 0x9442dc52  lhu         $v0, -0x23AE($v0)
    ctx->pc = 0x552220u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958162)));
label_552224:
    // 0x552224: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_552228:
    if (ctx->pc == 0x552228u) {
        ctx->pc = 0x552228u;
            // 0x552228: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x55222Cu;
        goto label_55222c;
    }
    ctx->pc = 0x552224u;
    {
        const bool branch_taken_0x552224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x552228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552224u;
            // 0x552228: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552224) {
            ctx->pc = 0x552238u;
            goto label_552238;
        }
    }
    ctx->pc = 0x55222Cu;
label_55222c:
    // 0x55222c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55222cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_552230:
    // 0x552230: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x552230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_552234:
    // 0x552234: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x552234u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552238:
    // 0x552238: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x552238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_55223c:
    // 0x55223c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x55223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_552240:
    // 0x552240: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x552240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_552244:
    // 0x552244: 0xc0506ac  jal         func_141AB0
label_552248:
    if (ctx->pc == 0x552248u) {
        ctx->pc = 0x552248u;
            // 0x552248: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x55224Cu;
        goto label_55224c;
    }
    ctx->pc = 0x552244u;
    SET_GPR_U32(ctx, 31, 0x55224Cu);
    ctx->pc = 0x552248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552244u;
            // 0x552248: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55224Cu; }
        if (ctx->pc != 0x55224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55224Cu; }
        if (ctx->pc != 0x55224Cu) { return; }
    }
    ctx->pc = 0x55224Cu;
label_55224c:
    // 0x55224c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_552250:
    // 0x552250: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x552250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_552254:
    // 0x552254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x552254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_552258:
    // 0x552258: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x552258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55225c:
    // 0x55225c: 0x320f809  jalr        $t9
label_552260:
    if (ctx->pc == 0x552260u) {
        ctx->pc = 0x552260u;
            // 0x552260: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x552264u;
        goto label_552264;
    }
    ctx->pc = 0x55225Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x552264u);
        ctx->pc = 0x552260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55225Cu;
            // 0x552260: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x552264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x552264u; }
            if (ctx->pc != 0x552264u) { return; }
        }
        }
    }
    ctx->pc = 0x552264u;
label_552264:
    // 0x552264: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x552264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_552268:
    // 0x552268: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x552268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_55226c:
    // 0x55226c: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x55226cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_552270:
    // 0x552270: 0xc663007c  lwc1        $f3, 0x7C($s3)
    ctx->pc = 0x552270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_552274:
    // 0x552274: 0xc6760078  lwc1        $f22, 0x78($s3)
    ctx->pc = 0x552274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_552278:
    // 0x552278: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x552278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_55227c:
    // 0x55227c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55227cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552280:
    // 0x552280: 0x0  nop
    ctx->pc = 0x552280u;
    // NOP
label_552284:
    // 0x552284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_552288:
    // 0x552288: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x552288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_55228c:
    // 0x55228c: 0x4600d600  add.s       $f24, $f26, $f0
    ctx->pc = 0x55228cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_552290:
    // 0x552290: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x552290u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552294:
    // 0x552294: 0x0  nop
    ctx->pc = 0x552294u;
    // NOP
label_552298:
    // 0x552298: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x552298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_55229c:
    // 0x55229c: 0x4600cdc0  add.s       $f23, $f25, $f0
    ctx->pc = 0x55229cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_5522a0:
    // 0x5522a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5522a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5522a4:
    // 0x5522a4: 0x0  nop
    ctx->pc = 0x5522a4u;
    // NOP
label_5522a8:
    // 0x5522a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5522a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5522ac:
    // 0x5522ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5522acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5522b0:
    // 0x5522b0: 0x4603bd00  add.s       $f20, $f23, $f3
    ctx->pc = 0x5522b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
label_5522b4:
    // 0x5522b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x5522b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5522b8:
    // 0x5522b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x5522b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5522bc:
    // 0x5522bc: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_5522c0:
    if (ctx->pc == 0x5522C0u) {
        ctx->pc = 0x5522C0u;
            // 0x5522c0: 0x4616155d  msub.s      $f21, $f2, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[22]));
        ctx->pc = 0x5522C4u;
        goto label_5522c4;
    }
    ctx->pc = 0x5522BCu;
    {
        const bool branch_taken_0x5522bc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5522C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5522BCu;
            // 0x5522c0: 0x4616155d  msub.s      $f21, $f2, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[22]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5522bc) {
            ctx->pc = 0x5522D0u;
            goto label_5522d0;
        }
    }
    ctx->pc = 0x5522C4u;
label_5522c4:
    // 0x5522c4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5522c4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5522c8:
    // 0x5522c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_5522cc:
    if (ctx->pc == 0x5522CCu) {
        ctx->pc = 0x5522CCu;
            // 0x5522cc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5522D0u;
        goto label_5522d0;
    }
    ctx->pc = 0x5522C8u;
    {
        const bool branch_taken_0x5522c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5522CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5522C8u;
            // 0x5522cc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5522c8) {
            ctx->pc = 0x5522ECu;
            goto label_5522ec;
        }
    }
    ctx->pc = 0x5522D0u;
label_5522d0:
    // 0x5522d0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5522d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5522d4:
    // 0x5522d4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5522d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5522d8:
    // 0x5522d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5522d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5522dc:
    // 0x5522dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5522dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5522e0:
    // 0x5522e0: 0x0  nop
    ctx->pc = 0x5522e0u;
    // NOP
label_5522e4:
    // 0x5522e4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5522e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5522e8:
    // 0x5522e8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5522e8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5522ec:
    // 0x5522ec: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_5522f0:
    if (ctx->pc == 0x5522F0u) {
        ctx->pc = 0x5522F0u;
            // 0x5522f0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x5522F4u;
        goto label_5522f4;
    }
    ctx->pc = 0x5522ECu;
    {
        const bool branch_taken_0x5522ec = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x5522ec) {
            ctx->pc = 0x5522F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5522ECu;
            // 0x5522f0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552300u;
            goto label_552300;
        }
    }
    ctx->pc = 0x5522F4u;
label_5522f4:
    // 0x5522f4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5522f4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5522f8:
    // 0x5522f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_5522fc:
    if (ctx->pc == 0x5522FCu) {
        ctx->pc = 0x5522FCu;
            // 0x5522fc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552300u;
        goto label_552300;
    }
    ctx->pc = 0x5522F8u;
    {
        const bool branch_taken_0x5522f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5522FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5522F8u;
            // 0x5522fc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5522f8) {
            ctx->pc = 0x552318u;
            goto label_552318;
        }
    }
    ctx->pc = 0x552300u;
label_552300:
    // 0x552300: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_552304:
    // 0x552304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552308:
    // 0x552308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55230c:
    // 0x55230c: 0x0  nop
    ctx->pc = 0x55230cu;
    // NOP
label_552310:
    // 0x552310: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_552314:
    // 0x552314: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x552314u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_552318:
    // 0x552318: 0x4616c380  add.s       $f14, $f24, $f22
    ctx->pc = 0x552318u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_55231c:
    // 0x55231c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55231cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_552320:
    // 0x552320: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x552320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_552324:
    // 0x552324: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x552324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_552328:
    // 0x552328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x552328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55232c:
    // 0x55232c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55232cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_552330:
    // 0x552330: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x552330u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_552334:
    // 0x552334: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x552334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_552338:
    // 0x552338: 0xc0bc284  jal         func_2F0A10
label_55233c:
    if (ctx->pc == 0x55233Cu) {
        ctx->pc = 0x55233Cu;
            // 0x55233c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x552340u;
        goto label_552340;
    }
    ctx->pc = 0x552338u;
    SET_GPR_U32(ctx, 31, 0x552340u);
    ctx->pc = 0x55233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552338u;
            // 0x55233c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552340u; }
        if (ctx->pc != 0x552340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552340u; }
        if (ctx->pc != 0x552340u) { return; }
    }
    ctx->pc = 0x552340u;
label_552340:
    // 0x552340: 0x4616c600  add.s       $f24, $f24, $f22
    ctx->pc = 0x552340u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_552344:
    // 0x552344: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_552348:
    if (ctx->pc == 0x552348u) {
        ctx->pc = 0x552348u;
            // 0x552348: 0x26650310  addiu       $a1, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->pc = 0x55234Cu;
        goto label_55234c;
    }
    ctx->pc = 0x552344u;
    {
        const bool branch_taken_0x552344 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x552348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552344u;
            // 0x552348: 0x26650310  addiu       $a1, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x552344) {
            ctx->pc = 0x552358u;
            goto label_552358;
        }
    }
    ctx->pc = 0x55234Cu;
label_55234c:
    // 0x55234c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x55234cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552350:
    // 0x552350: 0x10000008  b           . + 4 + (0x8 << 2)
label_552354:
    if (ctx->pc == 0x552354u) {
        ctx->pc = 0x552354u;
            // 0x552354: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552358u;
        goto label_552358;
    }
    ctx->pc = 0x552350u;
    {
        const bool branch_taken_0x552350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552350u;
            // 0x552354: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552350) {
            ctx->pc = 0x552374u;
            goto label_552374;
        }
    }
    ctx->pc = 0x552358u;
label_552358:
    // 0x552358: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x552358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_55235c:
    // 0x55235c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x55235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_552360:
    // 0x552360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552364:
    // 0x552364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552368:
    // 0x552368: 0x0  nop
    ctx->pc = 0x552368u;
    // NOP
label_55236c:
    // 0x55236c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55236cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552370:
    // 0x552370: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552370u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552374:
    // 0x552374: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552378:
    if (ctx->pc == 0x552378u) {
        ctx->pc = 0x552378u;
            // 0x552378: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x55237Cu;
        goto label_55237c;
    }
    ctx->pc = 0x552374u;
    {
        const bool branch_taken_0x552374 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552374) {
            ctx->pc = 0x552378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552374u;
            // 0x552378: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552388u;
            goto label_552388;
        }
    }
    ctx->pc = 0x55237Cu;
label_55237c:
    // 0x55237c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55237cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552380:
    // 0x552380: 0x10000007  b           . + 4 + (0x7 << 2)
label_552384:
    if (ctx->pc == 0x552384u) {
        ctx->pc = 0x552384u;
            // 0x552384: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552388u;
        goto label_552388;
    }
    ctx->pc = 0x552380u;
    {
        const bool branch_taken_0x552380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552380u;
            // 0x552384: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552380) {
            ctx->pc = 0x5523A0u;
            goto label_5523a0;
        }
    }
    ctx->pc = 0x552388u;
label_552388:
    // 0x552388: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_55238c:
    // 0x55238c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552390:
    // 0x552390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552394:
    // 0x552394: 0x0  nop
    ctx->pc = 0x552394u;
    // NOP
label_552398:
    // 0x552398: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55239c:
    // 0x55239c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x55239cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5523a0:
    // 0x5523a0: 0x4615c380  add.s       $f14, $f24, $f21
    ctx->pc = 0x5523a0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_5523a4:
    // 0x5523a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5523a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5523a8:
    // 0x5523a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5523a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5523ac:
    // 0x5523ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x5523acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5523b0:
    // 0x5523b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5523b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5523b4:
    // 0x5523b4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x5523b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_5523b8:
    // 0x5523b8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5523b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5523bc:
    // 0x5523bc: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x5523bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_5523c0:
    // 0x5523c0: 0xc0bc284  jal         func_2F0A10
label_5523c4:
    if (ctx->pc == 0x5523C4u) {
        ctx->pc = 0x5523C4u;
            // 0x5523c4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x5523C8u;
        goto label_5523c8;
    }
    ctx->pc = 0x5523C0u;
    SET_GPR_U32(ctx, 31, 0x5523C8u);
    ctx->pc = 0x5523C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5523C0u;
            // 0x5523c4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5523C8u; }
        if (ctx->pc != 0x5523C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5523C8u; }
        if (ctx->pc != 0x5523C8u) { return; }
    }
    ctx->pc = 0x5523C8u;
label_5523c8:
    // 0x5523c8: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x5523c8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_5523cc:
    // 0x5523cc: 0xc6620078  lwc1        $f2, 0x78($s3)
    ctx->pc = 0x5523ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5523d0:
    // 0x5523d0: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x5523d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5523d4:
    // 0x5523d4: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_5523d8:
    if (ctx->pc == 0x5523D8u) {
        ctx->pc = 0x5523D8u;
            // 0x5523d8: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x5523DCu;
        goto label_5523dc;
    }
    ctx->pc = 0x5523D4u;
    {
        const bool branch_taken_0x5523d4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5523D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5523D4u;
            // 0x5523d8: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5523d4) {
            ctx->pc = 0x5523E8u;
            goto label_5523e8;
        }
    }
    ctx->pc = 0x5523DCu;
label_5523dc:
    // 0x5523dc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5523dcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5523e0:
    // 0x5523e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_5523e4:
    if (ctx->pc == 0x5523E4u) {
        ctx->pc = 0x5523E4u;
            // 0x5523e4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5523E8u;
        goto label_5523e8;
    }
    ctx->pc = 0x5523E0u;
    {
        const bool branch_taken_0x5523e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5523E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5523E0u;
            // 0x5523e4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5523e0) {
            ctx->pc = 0x552404u;
            goto label_552404;
        }
    }
    ctx->pc = 0x5523E8u;
label_5523e8:
    // 0x5523e8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x5523e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_5523ec:
    // 0x5523ec: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x5523ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_5523f0:
    // 0x5523f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5523f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5523f4:
    // 0x5523f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5523f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5523f8:
    // 0x5523f8: 0x0  nop
    ctx->pc = 0x5523f8u;
    // NOP
label_5523fc:
    // 0x5523fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5523fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552400:
    // 0x552400: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552400u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552404:
    // 0x552404: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_552408:
    if (ctx->pc == 0x552408u) {
        ctx->pc = 0x552408u;
            // 0x552408: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x55240Cu;
        goto label_55240c;
    }
    ctx->pc = 0x552404u;
    {
        const bool branch_taken_0x552404 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x552404) {
            ctx->pc = 0x552408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x552404u;
            // 0x552408: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552418u;
            goto label_552418;
        }
    }
    ctx->pc = 0x55240Cu;
label_55240c:
    // 0x55240c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x55240cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552410:
    // 0x552410: 0x10000007  b           . + 4 + (0x7 << 2)
label_552414:
    if (ctx->pc == 0x552414u) {
        ctx->pc = 0x552414u;
            // 0x552414: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552418u;
        goto label_552418;
    }
    ctx->pc = 0x552410u;
    {
        const bool branch_taken_0x552410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x552414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552410u;
            // 0x552414: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552410) {
            ctx->pc = 0x552430u;
            goto label_552430;
        }
    }
    ctx->pc = 0x552418u;
label_552418:
    // 0x552418: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x552418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_55241c:
    // 0x55241c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55241cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552420:
    // 0x552420: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552424:
    // 0x552424: 0x0  nop
    ctx->pc = 0x552424u;
    // NOP
label_552428:
    // 0x552428: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55242c:
    // 0x55242c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x55242cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_552430:
    // 0x552430: 0x4602c300  add.s       $f12, $f24, $f2
    ctx->pc = 0x552430u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_552434:
    // 0x552434: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x552434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_552438:
    // 0x552438: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x552438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55243c:
    // 0x55243c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x55243cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_552440:
    // 0x552440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x552440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_552444:
    // 0x552444: 0x4601bbc0  add.s       $f15, $f23, $f1
    ctx->pc = 0x552444u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_552448:
    // 0x552448: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x552448u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_55244c:
    // 0x55244c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55244cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_552450:
    // 0x552450: 0xc0bc284  jal         func_2F0A10
label_552454:
    if (ctx->pc == 0x552454u) {
        ctx->pc = 0x552454u;
            // 0x552454: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x552458u;
        goto label_552458;
    }
    ctx->pc = 0x552450u;
    SET_GPR_U32(ctx, 31, 0x552458u);
    ctx->pc = 0x552454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x552450u;
            // 0x552454: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552458u; }
        if (ctx->pc != 0x552458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552458u; }
        if (ctx->pc != 0x552458u) { return; }
    }
    ctx->pc = 0x552458u;
label_552458:
    // 0x552458: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x552458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55245c:
    // 0x55245c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x55245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_552460:
    // 0x552460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x552460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_552464:
    // 0x552464: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x552464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_552468:
    // 0x552468: 0x320f809  jalr        $t9
label_55246c:
    if (ctx->pc == 0x55246Cu) {
        ctx->pc = 0x552470u;
        goto label_552470;
    }
    ctx->pc = 0x552468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x552470u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x552470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x552470u; }
            if (ctx->pc != 0x552470u) { return; }
        }
        }
    }
    ctx->pc = 0x552470u;
label_552470:
    // 0x552470: 0x86050014  lh          $a1, 0x14($s0)
    ctx->pc = 0x552470u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_552474:
    // 0x552474: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x552474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
label_552478:
    // 0x552478: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x552478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_55247c:
    // 0x55247c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x55247cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_552480:
    // 0x552480: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x552480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_552484:
    // 0x552484: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x552484u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_552488:
    // 0x552488: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x552488u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55248c:
    // 0x55248c: 0x0  nop
    ctx->pc = 0x55248cu;
    // NOP
label_552490:
    // 0x552490: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x552490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_552494:
    // 0x552494: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x552494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552498:
    // 0x552498: 0x0  nop
    ctx->pc = 0x552498u;
    // NOP
label_55249c:
    // 0x55249c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55249cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5524a0:
    // 0x5524a0: 0x4600d000  add.s       $f0, $f26, $f0
    ctx->pc = 0x5524a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_5524a4:
    // 0x5524a4: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x5524a4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_5524a8:
    // 0x5524a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5524a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5524ac:
    // 0x5524ac: 0x0  nop
    ctx->pc = 0x5524acu;
    // NOP
label_5524b0:
    // 0x5524b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5524b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5524b4:
    // 0x5524b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_5524b8:
    if (ctx->pc == 0x5524B8u) {
        ctx->pc = 0x5524B8u;
            // 0x5524b8: 0x4600cd00  add.s       $f20, $f25, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->pc = 0x5524BCu;
        goto label_5524bc;
    }
    ctx->pc = 0x5524B4u;
    {
        const bool branch_taken_0x5524b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5524B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5524B4u;
            // 0x5524b8: 0x4600cd00  add.s       $f20, $f25, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5524b4) {
            ctx->pc = 0x5524C0u;
            goto label_5524c0;
        }
    }
    ctx->pc = 0x5524BCu;
label_5524bc:
    // 0x5524bc: 0x26b1ffff  addiu       $s1, $s5, -0x1
    ctx->pc = 0x5524bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_5524c0:
    // 0x5524c0: 0x2aa20011  slti        $v0, $s5, 0x11
    ctx->pc = 0x5524c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
label_5524c4:
    // 0x5524c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_5524c8:
    if (ctx->pc == 0x5524C8u) {
        ctx->pc = 0x5524C8u;
            // 0x5524c8: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x5524CCu;
        goto label_5524cc;
    }
    ctx->pc = 0x5524C4u;
    {
        const bool branch_taken_0x5524c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5524c4) {
            ctx->pc = 0x5524C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5524C4u;
            // 0x5524c8: 0x8fa200dc  lw          $v0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5524D4u;
            goto label_5524d4;
        }
    }
    ctx->pc = 0x5524CCu;
label_5524cc:
    // 0x5524cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x5524ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_5524d0:
    // 0x5524d0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x5524d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_5524d4:
    // 0x5524d4: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x5524d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_5524d8:
    // 0x5524d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x5524d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_5524dc:
    // 0x5524dc: 0x710019  multu       $v1, $s1
    ctx->pc = 0x5524dcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5524e0:
    // 0x5524e0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x5524e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_5524e4:
    // 0x5524e4: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x5524e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_5524e8:
    // 0x5524e8: 0x1010  mfhi        $v0
    ctx->pc = 0x5524e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5524ec:
    // 0x5524ec: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x5524ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_5524f0:
    // 0x5524f0: 0xc0506ac  jal         func_141AB0
label_5524f4:
    if (ctx->pc == 0x5524F4u) {
        ctx->pc = 0x5524F4u;
            // 0x5524f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5524F8u;
        goto label_5524f8;
    }
    ctx->pc = 0x5524F0u;
    SET_GPR_U32(ctx, 31, 0x5524F8u);
    ctx->pc = 0x5524F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5524F0u;
            // 0x5524f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5524F8u; }
        if (ctx->pc != 0x5524F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5524F8u; }
        if (ctx->pc != 0x5524F8u) { return; }
    }
    ctx->pc = 0x5524F8u;
label_5524f8:
    // 0x5524f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5524f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5524fc:
    // 0x5524fc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5524fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_552500:
    // 0x552500: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x552500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_552504:
    // 0x552504: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x552504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_552508:
    // 0x552508: 0x320f809  jalr        $t9
label_55250c:
    if (ctx->pc == 0x55250Cu) {
        ctx->pc = 0x55250Cu;
            // 0x55250c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x552510u;
        goto label_552510;
    }
    ctx->pc = 0x552508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x552510u);
        ctx->pc = 0x55250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552508u;
            // 0x55250c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x552510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x552510u; }
            if (ctx->pc != 0x552510u) { return; }
        }
        }
    }
    ctx->pc = 0x552510u;
label_552510:
    // 0x552510: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x552510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_552514:
    // 0x552514: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x552514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_552518:
    // 0x552518: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x552518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_55251c:
    // 0x55251c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55251cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_552520:
    // 0x552520: 0x2232023  subu        $a0, $s1, $v1
    ctx->pc = 0x552520u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_552524:
    // 0x552524: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x552524u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_552528:
    // 0x552528: 0x1010  mfhi        $v0
    ctx->pc = 0x552528u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55252c:
    // 0x55252c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_552530:
    if (ctx->pc == 0x552530u) {
        ctx->pc = 0x552530u;
            // 0x552530: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x552534u;
        goto label_552534;
    }
    ctx->pc = 0x55252Cu;
    {
        const bool branch_taken_0x55252c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x55252c) {
            ctx->pc = 0x552530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55252Cu;
            // 0x552530: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552540u;
            goto label_552540;
        }
    }
    ctx->pc = 0x552534u;
label_552534:
    // 0x552534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x552534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552538:
    // 0x552538: 0x10000007  b           . + 4 + (0x7 << 2)
label_55253c:
    if (ctx->pc == 0x55253Cu) {
        ctx->pc = 0x55253Cu;
            // 0x55253c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552540u;
        goto label_552540;
    }
    ctx->pc = 0x552538u;
    {
        const bool branch_taken_0x552538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552538u;
            // 0x55253c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552538) {
            ctx->pc = 0x552558u;
            goto label_552558;
        }
    }
    ctx->pc = 0x552540u;
label_552540:
    // 0x552540: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x552540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_552544:
    // 0x552544: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552548:
    // 0x552548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55254c:
    // 0x55254c: 0x0  nop
    ctx->pc = 0x55254cu;
    // NOP
label_552550:
    // 0x552550: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x552550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_552554:
    // 0x552554: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x552554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_552558:
    // 0x552558: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x552558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_55255c:
    // 0x55255c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x55255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_552560:
    // 0x552560: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x552560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_552564:
    // 0x552564: 0x440019  multu       $v0, $a0
    ctx->pc = 0x552564u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_552568:
    // 0x552568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55256c:
    // 0x55256c: 0x0  nop
    ctx->pc = 0x55256cu;
    // NOP
label_552570:
    // 0x552570: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x552570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_552574:
    // 0x552574: 0x1010  mfhi        $v0
    ctx->pc = 0x552574u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_552578:
    // 0x552578: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x552578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_55257c:
    // 0x55257c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_552580:
    if (ctx->pc == 0x552580u) {
        ctx->pc = 0x552580u;
            // 0x552580: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x552584u;
        goto label_552584;
    }
    ctx->pc = 0x55257Cu;
    {
        const bool branch_taken_0x55257c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x552580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55257Cu;
            // 0x552580: 0xe7a000e0  swc1        $f0, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55257c) {
            ctx->pc = 0x552590u;
            goto label_552590;
        }
    }
    ctx->pc = 0x552584u;
label_552584:
    // 0x552584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x552584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552588:
    // 0x552588: 0x10000008  b           . + 4 + (0x8 << 2)
label_55258c:
    if (ctx->pc == 0x55258Cu) {
        ctx->pc = 0x55258Cu;
            // 0x55258c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552590u;
        goto label_552590;
    }
    ctx->pc = 0x552588u;
    {
        const bool branch_taken_0x552588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55258Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552588u;
            // 0x55258c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552588) {
            ctx->pc = 0x5525ACu;
            goto label_5525ac;
        }
    }
    ctx->pc = 0x552590u;
label_552590:
    // 0x552590: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x552590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_552594:
    // 0x552594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x552594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_552598:
    // 0x552598: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55259c:
    // 0x55259c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55259cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5525a0:
    // 0x5525a0: 0x0  nop
    ctx->pc = 0x5525a0u;
    // NOP
label_5525a4:
    // 0x5525a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5525a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5525a8:
    // 0x5525a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x5525a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_5525ac:
    // 0x5525ac: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x5525acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_5525b0:
    // 0x5525b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x5525b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_5525b4:
    // 0x5525b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x5525b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5525b8:
    // 0x5525b8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x5525b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_5525bc:
    // 0x5525bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x5525bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_5525c0:
    // 0x5525c0: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x5525c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_5525c4:
    // 0x5525c4: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x5525c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
label_5525c8:
    // 0x5525c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5525c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5525cc:
    // 0x5525cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5525ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5525d0:
    // 0x5525d0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x5525d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_5525d4:
    // 0x5525d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5525d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5525d8:
    // 0x5525d8: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_5525dc:
    if (ctx->pc == 0x5525DCu) {
        ctx->pc = 0x5525DCu;
            // 0x5525dc: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x5525E0u;
        goto label_5525e0;
    }
    ctx->pc = 0x5525D8u;
    {
        const bool branch_taken_0x5525d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5525DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5525D8u;
            // 0x5525dc: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5525d8) {
            ctx->pc = 0x55266Cu;
            goto label_55266c;
        }
    }
    ctx->pc = 0x5525E0u;
label_5525e0:
    // 0x5525e0: 0x6c20004  bltzl       $s6, . + 4 + (0x4 << 2)
label_5525e4:
    if (ctx->pc == 0x5525E4u) {
        ctx->pc = 0x5525E4u;
            // 0x5525e4: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x5525E8u;
        goto label_5525e8;
    }
    ctx->pc = 0x5525E0u;
    {
        const bool branch_taken_0x5525e0 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x5525e0) {
            ctx->pc = 0x5525E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5525E0u;
            // 0x5525e4: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5525F4u;
            goto label_5525f4;
        }
    }
    ctx->pc = 0x5525E8u;
label_5525e8:
    // 0x5525e8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x5525e8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5525ec:
    // 0x5525ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_5525f0:
    if (ctx->pc == 0x5525F0u) {
        ctx->pc = 0x5525F0u;
            // 0x5525f0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5525F4u;
        goto label_5525f4;
    }
    ctx->pc = 0x5525ECu;
    {
        const bool branch_taken_0x5525ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5525F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5525ECu;
            // 0x5525f0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5525ec) {
            ctx->pc = 0x55260Cu;
            goto label_55260c;
        }
    }
    ctx->pc = 0x5525F4u;
label_5525f4:
    // 0x5525f4: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x5525f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_5525f8:
    // 0x5525f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5525f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5525fc:
    // 0x5525fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5525fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552600:
    // 0x552600: 0x0  nop
    ctx->pc = 0x552600u;
    // NOP
label_552604:
    // 0x552604: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552608:
    // 0x552608: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552608u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_55260c:
    // 0x55260c: 0x6e20004  bltzl       $s7, . + 4 + (0x4 << 2)
label_552610:
    if (ctx->pc == 0x552610u) {
        ctx->pc = 0x552610u;
            // 0x552610: 0x171842  srl         $v1, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x552614u;
        goto label_552614;
    }
    ctx->pc = 0x55260Cu;
    {
        const bool branch_taken_0x55260c = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x55260c) {
            ctx->pc = 0x552610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55260Cu;
            // 0x552610: 0x171842  srl         $v1, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552620u;
            goto label_552620;
        }
    }
    ctx->pc = 0x552614u;
label_552614:
    // 0x552614: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x552614u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552618:
    // 0x552618: 0x10000007  b           . + 4 + (0x7 << 2)
label_55261c:
    if (ctx->pc == 0x55261Cu) {
        ctx->pc = 0x55261Cu;
            // 0x55261c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552620u;
        goto label_552620;
    }
    ctx->pc = 0x552618u;
    {
        const bool branch_taken_0x552618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55261Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552618u;
            // 0x55261c: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552618) {
            ctx->pc = 0x552638u;
            goto label_552638;
        }
    }
    ctx->pc = 0x552620u;
label_552620:
    // 0x552620: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x552620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_552624:
    // 0x552624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552628:
    // 0x552628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55262c:
    // 0x55262c: 0x0  nop
    ctx->pc = 0x55262cu;
    // NOP
label_552630:
    // 0x552630: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x552630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_552634:
    // 0x552634: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x552634u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_552638:
    // 0x552638: 0x4602a3c0  add.s       $f15, $f20, $f2
    ctx->pc = 0x552638u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_55263c:
    // 0x55263c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55263cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_552640:
    // 0x552640: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x552640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_552644:
    // 0x552644: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x552644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_552648:
    // 0x552648: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x552648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55264c:
    // 0x55264c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55264cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_552650:
    // 0x552650: 0x4601ab01  sub.s       $f12, $f21, $f1
    ctx->pc = 0x552650u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_552654:
    // 0x552654: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x552654u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_552658:
    // 0x552658: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x552658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_55265c:
    // 0x55265c: 0xc0bc284  jal         func_2F0A10
label_552660:
    if (ctx->pc == 0x552660u) {
        ctx->pc = 0x552660u;
            // 0x552660: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x552664u;
        goto label_552664;
    }
    ctx->pc = 0x55265Cu;
    SET_GPR_U32(ctx, 31, 0x552664u);
    ctx->pc = 0x552660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55265Cu;
            // 0x552660: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552664u; }
        if (ctx->pc != 0x552664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x552664u; }
        if (ctx->pc != 0x552664u) { return; }
    }
    ctx->pc = 0x552664u;
label_552664:
    // 0x552664: 0x10000023  b           . + 4 + (0x23 << 2)
label_552668:
    if (ctx->pc == 0x552668u) {
        ctx->pc = 0x55266Cu;
        goto label_55266c;
    }
    ctx->pc = 0x552664u;
    {
        const bool branch_taken_0x552664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x552664) {
            ctx->pc = 0x5526F4u;
            goto label_5526f4;
        }
    }
    ctx->pc = 0x55266Cu;
label_55266c:
    // 0x55266c: 0x7c20004  bltzl       $fp, . + 4 + (0x4 << 2)
label_552670:
    if (ctx->pc == 0x552670u) {
        ctx->pc = 0x552670u;
            // 0x552670: 0x1e1842  srl         $v1, $fp, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x552674u;
        goto label_552674;
    }
    ctx->pc = 0x55266Cu;
    {
        const bool branch_taken_0x55266c = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x55266c) {
            ctx->pc = 0x552670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55266Cu;
            // 0x552670: 0x1e1842  srl         $v1, $fp, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x552680u;
            goto label_552680;
        }
    }
    ctx->pc = 0x552674u;
label_552674:
    // 0x552674: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x552674u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_552678:
    // 0x552678: 0x10000007  b           . + 4 + (0x7 << 2)
label_55267c:
    if (ctx->pc == 0x55267Cu) {
        ctx->pc = 0x55267Cu;
            // 0x55267c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x552680u;
        goto label_552680;
    }
    ctx->pc = 0x552678u;
    {
        const bool branch_taken_0x552678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552678u;
            // 0x55267c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x552678) {
            ctx->pc = 0x552698u;
            goto label_552698;
        }
    }
    ctx->pc = 0x552680u;
label_552680:
    // 0x552680: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x552680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_552684:
    // 0x552684: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x552684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_552688:
    // 0x552688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x552688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55268c:
    // 0x55268c: 0x0  nop
    ctx->pc = 0x55268cu;
    // NOP
label_552690:
    // 0x552690: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x552690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_552694:
    // 0x552694: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x552694u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_552698:
    // 0x552698: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x552698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_55269c:
    // 0x55269c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_5526a0:
    if (ctx->pc == 0x5526A0u) {
        ctx->pc = 0x5526A0u;
            // 0x5526a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x5526A4u;
        goto label_5526a4;
    }
    ctx->pc = 0x55269Cu;
    {
        const bool branch_taken_0x55269c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x55269c) {
            ctx->pc = 0x5526A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55269Cu;
            // 0x5526a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5526B0u;
            goto label_5526b0;
        }
    }
    ctx->pc = 0x5526A4u;
label_5526a4:
    // 0x5526a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5526a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5526a8:
    // 0x5526a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_5526ac:
    if (ctx->pc == 0x5526ACu) {
        ctx->pc = 0x5526ACu;
            // 0x5526ac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5526B0u;
        goto label_5526b0;
    }
    ctx->pc = 0x5526A8u;
    {
        const bool branch_taken_0x5526a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5526ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5526A8u;
            // 0x5526ac: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5526a8) {
            ctx->pc = 0x5526C8u;
            goto label_5526c8;
        }
    }
    ctx->pc = 0x5526B0u;
label_5526b0:
    // 0x5526b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5526b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_5526b4:
    // 0x5526b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5526b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5526b8:
    // 0x5526b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5526b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5526bc:
    // 0x5526bc: 0x0  nop
    ctx->pc = 0x5526bcu;
    // NOP
label_5526c0:
    // 0x5526c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5526c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5526c4:
    // 0x5526c4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5526c4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5526c8:
    // 0x5526c8: 0x4602a3c0  add.s       $f15, $f20, $f2
    ctx->pc = 0x5526c8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_5526cc:
    // 0x5526cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5526ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5526d0:
    // 0x5526d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x5526d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5526d4:
    // 0x5526d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5526d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5526d8:
    // 0x5526d8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x5526d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5526dc:
    // 0x5526dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5526dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5526e0:
    // 0x5526e0: 0x4601ab01  sub.s       $f12, $f21, $f1
    ctx->pc = 0x5526e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_5526e4:
    // 0x5526e4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x5526e4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_5526e8:
    // 0x5526e8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5526e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5526ec:
    // 0x5526ec: 0xc0bc284  jal         func_2F0A10
label_5526f0:
    if (ctx->pc == 0x5526F0u) {
        ctx->pc = 0x5526F0u;
            // 0x5526f0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5526F4u;
        goto label_5526f4;
    }
    ctx->pc = 0x5526ECu;
    SET_GPR_U32(ctx, 31, 0x5526F4u);
    ctx->pc = 0x5526F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5526ECu;
            // 0x5526f0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5526F4u; }
        if (ctx->pc != 0x5526F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5526F4u; }
        if (ctx->pc != 0x5526F4u) { return; }
    }
    ctx->pc = 0x5526F4u;
label_5526f4:
    // 0x5526f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5526f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5526f8:
    // 0x5526f8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x5526f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5526fc:
    // 0x5526fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5526fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_552700:
    // 0x552700: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x552700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_552704:
    // 0x552704: 0x320f809  jalr        $t9
label_552708:
    if (ctx->pc == 0x552708u) {
        ctx->pc = 0x55270Cu;
        goto label_55270c;
    }
    ctx->pc = 0x552704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55270Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55270Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55270Cu; }
            if (ctx->pc != 0x55270Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55270Cu;
label_55270c:
    // 0x55270c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x55270cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_552710:
    // 0x552710: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x552710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_552714:
    // 0x552714: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x552714u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_552718:
    // 0x552718: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x552718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_55271c:
    // 0x55271c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x55271cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_552720:
    // 0x552720: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x552720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_552724:
    // 0x552724: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x552724u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_552728:
    // 0x552728: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x552728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55272c:
    // 0x55272c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x55272cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_552730:
    // 0x552730: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x552730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_552734:
    // 0x552734: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x552734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_552738:
    // 0x552738: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x552738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55273c:
    // 0x55273c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55273cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_552740:
    // 0x552740: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x552740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_552744:
    // 0x552744: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x552744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_552748:
    // 0x552748: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x552748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55274c:
    // 0x55274c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x55274cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_552750:
    // 0x552750: 0x3e00008  jr          $ra
label_552754:
    if (ctx->pc == 0x552754u) {
        ctx->pc = 0x552754u;
            // 0x552754: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x552758u;
        goto label_552758;
    }
    ctx->pc = 0x552750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x552754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x552750u;
            // 0x552754: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x552758u;
label_552758:
    // 0x552758: 0x0  nop
    ctx->pc = 0x552758u;
    // NOP
label_55275c:
    // 0x55275c: 0x0  nop
    ctx->pc = 0x55275cu;
    // NOP
}
