#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208490
// Address: 0x208490 - 0x208a40
void sub_00208490_0x208490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208490_0x208490");
#endif

    switch (ctx->pc) {
        case 0x208490u: goto label_208490;
        case 0x208494u: goto label_208494;
        case 0x208498u: goto label_208498;
        case 0x20849cu: goto label_20849c;
        case 0x2084a0u: goto label_2084a0;
        case 0x2084a4u: goto label_2084a4;
        case 0x2084a8u: goto label_2084a8;
        case 0x2084acu: goto label_2084ac;
        case 0x2084b0u: goto label_2084b0;
        case 0x2084b4u: goto label_2084b4;
        case 0x2084b8u: goto label_2084b8;
        case 0x2084bcu: goto label_2084bc;
        case 0x2084c0u: goto label_2084c0;
        case 0x2084c4u: goto label_2084c4;
        case 0x2084c8u: goto label_2084c8;
        case 0x2084ccu: goto label_2084cc;
        case 0x2084d0u: goto label_2084d0;
        case 0x2084d4u: goto label_2084d4;
        case 0x2084d8u: goto label_2084d8;
        case 0x2084dcu: goto label_2084dc;
        case 0x2084e0u: goto label_2084e0;
        case 0x2084e4u: goto label_2084e4;
        case 0x2084e8u: goto label_2084e8;
        case 0x2084ecu: goto label_2084ec;
        case 0x2084f0u: goto label_2084f0;
        case 0x2084f4u: goto label_2084f4;
        case 0x2084f8u: goto label_2084f8;
        case 0x2084fcu: goto label_2084fc;
        case 0x208500u: goto label_208500;
        case 0x208504u: goto label_208504;
        case 0x208508u: goto label_208508;
        case 0x20850cu: goto label_20850c;
        case 0x208510u: goto label_208510;
        case 0x208514u: goto label_208514;
        case 0x208518u: goto label_208518;
        case 0x20851cu: goto label_20851c;
        case 0x208520u: goto label_208520;
        case 0x208524u: goto label_208524;
        case 0x208528u: goto label_208528;
        case 0x20852cu: goto label_20852c;
        case 0x208530u: goto label_208530;
        case 0x208534u: goto label_208534;
        case 0x208538u: goto label_208538;
        case 0x20853cu: goto label_20853c;
        case 0x208540u: goto label_208540;
        case 0x208544u: goto label_208544;
        case 0x208548u: goto label_208548;
        case 0x20854cu: goto label_20854c;
        case 0x208550u: goto label_208550;
        case 0x208554u: goto label_208554;
        case 0x208558u: goto label_208558;
        case 0x20855cu: goto label_20855c;
        case 0x208560u: goto label_208560;
        case 0x208564u: goto label_208564;
        case 0x208568u: goto label_208568;
        case 0x20856cu: goto label_20856c;
        case 0x208570u: goto label_208570;
        case 0x208574u: goto label_208574;
        case 0x208578u: goto label_208578;
        case 0x20857cu: goto label_20857c;
        case 0x208580u: goto label_208580;
        case 0x208584u: goto label_208584;
        case 0x208588u: goto label_208588;
        case 0x20858cu: goto label_20858c;
        case 0x208590u: goto label_208590;
        case 0x208594u: goto label_208594;
        case 0x208598u: goto label_208598;
        case 0x20859cu: goto label_20859c;
        case 0x2085a0u: goto label_2085a0;
        case 0x2085a4u: goto label_2085a4;
        case 0x2085a8u: goto label_2085a8;
        case 0x2085acu: goto label_2085ac;
        case 0x2085b0u: goto label_2085b0;
        case 0x2085b4u: goto label_2085b4;
        case 0x2085b8u: goto label_2085b8;
        case 0x2085bcu: goto label_2085bc;
        case 0x2085c0u: goto label_2085c0;
        case 0x2085c4u: goto label_2085c4;
        case 0x2085c8u: goto label_2085c8;
        case 0x2085ccu: goto label_2085cc;
        case 0x2085d0u: goto label_2085d0;
        case 0x2085d4u: goto label_2085d4;
        case 0x2085d8u: goto label_2085d8;
        case 0x2085dcu: goto label_2085dc;
        case 0x2085e0u: goto label_2085e0;
        case 0x2085e4u: goto label_2085e4;
        case 0x2085e8u: goto label_2085e8;
        case 0x2085ecu: goto label_2085ec;
        case 0x2085f0u: goto label_2085f0;
        case 0x2085f4u: goto label_2085f4;
        case 0x2085f8u: goto label_2085f8;
        case 0x2085fcu: goto label_2085fc;
        case 0x208600u: goto label_208600;
        case 0x208604u: goto label_208604;
        case 0x208608u: goto label_208608;
        case 0x20860cu: goto label_20860c;
        case 0x208610u: goto label_208610;
        case 0x208614u: goto label_208614;
        case 0x208618u: goto label_208618;
        case 0x20861cu: goto label_20861c;
        case 0x208620u: goto label_208620;
        case 0x208624u: goto label_208624;
        case 0x208628u: goto label_208628;
        case 0x20862cu: goto label_20862c;
        case 0x208630u: goto label_208630;
        case 0x208634u: goto label_208634;
        case 0x208638u: goto label_208638;
        case 0x20863cu: goto label_20863c;
        case 0x208640u: goto label_208640;
        case 0x208644u: goto label_208644;
        case 0x208648u: goto label_208648;
        case 0x20864cu: goto label_20864c;
        case 0x208650u: goto label_208650;
        case 0x208654u: goto label_208654;
        case 0x208658u: goto label_208658;
        case 0x20865cu: goto label_20865c;
        case 0x208660u: goto label_208660;
        case 0x208664u: goto label_208664;
        case 0x208668u: goto label_208668;
        case 0x20866cu: goto label_20866c;
        case 0x208670u: goto label_208670;
        case 0x208674u: goto label_208674;
        case 0x208678u: goto label_208678;
        case 0x20867cu: goto label_20867c;
        case 0x208680u: goto label_208680;
        case 0x208684u: goto label_208684;
        case 0x208688u: goto label_208688;
        case 0x20868cu: goto label_20868c;
        case 0x208690u: goto label_208690;
        case 0x208694u: goto label_208694;
        case 0x208698u: goto label_208698;
        case 0x20869cu: goto label_20869c;
        case 0x2086a0u: goto label_2086a0;
        case 0x2086a4u: goto label_2086a4;
        case 0x2086a8u: goto label_2086a8;
        case 0x2086acu: goto label_2086ac;
        case 0x2086b0u: goto label_2086b0;
        case 0x2086b4u: goto label_2086b4;
        case 0x2086b8u: goto label_2086b8;
        case 0x2086bcu: goto label_2086bc;
        case 0x2086c0u: goto label_2086c0;
        case 0x2086c4u: goto label_2086c4;
        case 0x2086c8u: goto label_2086c8;
        case 0x2086ccu: goto label_2086cc;
        case 0x2086d0u: goto label_2086d0;
        case 0x2086d4u: goto label_2086d4;
        case 0x2086d8u: goto label_2086d8;
        case 0x2086dcu: goto label_2086dc;
        case 0x2086e0u: goto label_2086e0;
        case 0x2086e4u: goto label_2086e4;
        case 0x2086e8u: goto label_2086e8;
        case 0x2086ecu: goto label_2086ec;
        case 0x2086f0u: goto label_2086f0;
        case 0x2086f4u: goto label_2086f4;
        case 0x2086f8u: goto label_2086f8;
        case 0x2086fcu: goto label_2086fc;
        case 0x208700u: goto label_208700;
        case 0x208704u: goto label_208704;
        case 0x208708u: goto label_208708;
        case 0x20870cu: goto label_20870c;
        case 0x208710u: goto label_208710;
        case 0x208714u: goto label_208714;
        case 0x208718u: goto label_208718;
        case 0x20871cu: goto label_20871c;
        case 0x208720u: goto label_208720;
        case 0x208724u: goto label_208724;
        case 0x208728u: goto label_208728;
        case 0x20872cu: goto label_20872c;
        case 0x208730u: goto label_208730;
        case 0x208734u: goto label_208734;
        case 0x208738u: goto label_208738;
        case 0x20873cu: goto label_20873c;
        case 0x208740u: goto label_208740;
        case 0x208744u: goto label_208744;
        case 0x208748u: goto label_208748;
        case 0x20874cu: goto label_20874c;
        case 0x208750u: goto label_208750;
        case 0x208754u: goto label_208754;
        case 0x208758u: goto label_208758;
        case 0x20875cu: goto label_20875c;
        case 0x208760u: goto label_208760;
        case 0x208764u: goto label_208764;
        case 0x208768u: goto label_208768;
        case 0x20876cu: goto label_20876c;
        case 0x208770u: goto label_208770;
        case 0x208774u: goto label_208774;
        case 0x208778u: goto label_208778;
        case 0x20877cu: goto label_20877c;
        case 0x208780u: goto label_208780;
        case 0x208784u: goto label_208784;
        case 0x208788u: goto label_208788;
        case 0x20878cu: goto label_20878c;
        case 0x208790u: goto label_208790;
        case 0x208794u: goto label_208794;
        case 0x208798u: goto label_208798;
        case 0x20879cu: goto label_20879c;
        case 0x2087a0u: goto label_2087a0;
        case 0x2087a4u: goto label_2087a4;
        case 0x2087a8u: goto label_2087a8;
        case 0x2087acu: goto label_2087ac;
        case 0x2087b0u: goto label_2087b0;
        case 0x2087b4u: goto label_2087b4;
        case 0x2087b8u: goto label_2087b8;
        case 0x2087bcu: goto label_2087bc;
        case 0x2087c0u: goto label_2087c0;
        case 0x2087c4u: goto label_2087c4;
        case 0x2087c8u: goto label_2087c8;
        case 0x2087ccu: goto label_2087cc;
        case 0x2087d0u: goto label_2087d0;
        case 0x2087d4u: goto label_2087d4;
        case 0x2087d8u: goto label_2087d8;
        case 0x2087dcu: goto label_2087dc;
        case 0x2087e0u: goto label_2087e0;
        case 0x2087e4u: goto label_2087e4;
        case 0x2087e8u: goto label_2087e8;
        case 0x2087ecu: goto label_2087ec;
        case 0x2087f0u: goto label_2087f0;
        case 0x2087f4u: goto label_2087f4;
        case 0x2087f8u: goto label_2087f8;
        case 0x2087fcu: goto label_2087fc;
        case 0x208800u: goto label_208800;
        case 0x208804u: goto label_208804;
        case 0x208808u: goto label_208808;
        case 0x20880cu: goto label_20880c;
        case 0x208810u: goto label_208810;
        case 0x208814u: goto label_208814;
        case 0x208818u: goto label_208818;
        case 0x20881cu: goto label_20881c;
        case 0x208820u: goto label_208820;
        case 0x208824u: goto label_208824;
        case 0x208828u: goto label_208828;
        case 0x20882cu: goto label_20882c;
        case 0x208830u: goto label_208830;
        case 0x208834u: goto label_208834;
        case 0x208838u: goto label_208838;
        case 0x20883cu: goto label_20883c;
        case 0x208840u: goto label_208840;
        case 0x208844u: goto label_208844;
        case 0x208848u: goto label_208848;
        case 0x20884cu: goto label_20884c;
        case 0x208850u: goto label_208850;
        case 0x208854u: goto label_208854;
        case 0x208858u: goto label_208858;
        case 0x20885cu: goto label_20885c;
        case 0x208860u: goto label_208860;
        case 0x208864u: goto label_208864;
        case 0x208868u: goto label_208868;
        case 0x20886cu: goto label_20886c;
        case 0x208870u: goto label_208870;
        case 0x208874u: goto label_208874;
        case 0x208878u: goto label_208878;
        case 0x20887cu: goto label_20887c;
        case 0x208880u: goto label_208880;
        case 0x208884u: goto label_208884;
        case 0x208888u: goto label_208888;
        case 0x20888cu: goto label_20888c;
        case 0x208890u: goto label_208890;
        case 0x208894u: goto label_208894;
        case 0x208898u: goto label_208898;
        case 0x20889cu: goto label_20889c;
        case 0x2088a0u: goto label_2088a0;
        case 0x2088a4u: goto label_2088a4;
        case 0x2088a8u: goto label_2088a8;
        case 0x2088acu: goto label_2088ac;
        case 0x2088b0u: goto label_2088b0;
        case 0x2088b4u: goto label_2088b4;
        case 0x2088b8u: goto label_2088b8;
        case 0x2088bcu: goto label_2088bc;
        case 0x2088c0u: goto label_2088c0;
        case 0x2088c4u: goto label_2088c4;
        case 0x2088c8u: goto label_2088c8;
        case 0x2088ccu: goto label_2088cc;
        case 0x2088d0u: goto label_2088d0;
        case 0x2088d4u: goto label_2088d4;
        case 0x2088d8u: goto label_2088d8;
        case 0x2088dcu: goto label_2088dc;
        case 0x2088e0u: goto label_2088e0;
        case 0x2088e4u: goto label_2088e4;
        case 0x2088e8u: goto label_2088e8;
        case 0x2088ecu: goto label_2088ec;
        case 0x2088f0u: goto label_2088f0;
        case 0x2088f4u: goto label_2088f4;
        case 0x2088f8u: goto label_2088f8;
        case 0x2088fcu: goto label_2088fc;
        case 0x208900u: goto label_208900;
        case 0x208904u: goto label_208904;
        case 0x208908u: goto label_208908;
        case 0x20890cu: goto label_20890c;
        case 0x208910u: goto label_208910;
        case 0x208914u: goto label_208914;
        case 0x208918u: goto label_208918;
        case 0x20891cu: goto label_20891c;
        case 0x208920u: goto label_208920;
        case 0x208924u: goto label_208924;
        case 0x208928u: goto label_208928;
        case 0x20892cu: goto label_20892c;
        case 0x208930u: goto label_208930;
        case 0x208934u: goto label_208934;
        case 0x208938u: goto label_208938;
        case 0x20893cu: goto label_20893c;
        case 0x208940u: goto label_208940;
        case 0x208944u: goto label_208944;
        case 0x208948u: goto label_208948;
        case 0x20894cu: goto label_20894c;
        case 0x208950u: goto label_208950;
        case 0x208954u: goto label_208954;
        case 0x208958u: goto label_208958;
        case 0x20895cu: goto label_20895c;
        case 0x208960u: goto label_208960;
        case 0x208964u: goto label_208964;
        case 0x208968u: goto label_208968;
        case 0x20896cu: goto label_20896c;
        case 0x208970u: goto label_208970;
        case 0x208974u: goto label_208974;
        case 0x208978u: goto label_208978;
        case 0x20897cu: goto label_20897c;
        case 0x208980u: goto label_208980;
        case 0x208984u: goto label_208984;
        case 0x208988u: goto label_208988;
        case 0x20898cu: goto label_20898c;
        case 0x208990u: goto label_208990;
        case 0x208994u: goto label_208994;
        case 0x208998u: goto label_208998;
        case 0x20899cu: goto label_20899c;
        case 0x2089a0u: goto label_2089a0;
        case 0x2089a4u: goto label_2089a4;
        case 0x2089a8u: goto label_2089a8;
        case 0x2089acu: goto label_2089ac;
        case 0x2089b0u: goto label_2089b0;
        case 0x2089b4u: goto label_2089b4;
        case 0x2089b8u: goto label_2089b8;
        case 0x2089bcu: goto label_2089bc;
        case 0x2089c0u: goto label_2089c0;
        case 0x2089c4u: goto label_2089c4;
        case 0x2089c8u: goto label_2089c8;
        case 0x2089ccu: goto label_2089cc;
        case 0x2089d0u: goto label_2089d0;
        case 0x2089d4u: goto label_2089d4;
        case 0x2089d8u: goto label_2089d8;
        case 0x2089dcu: goto label_2089dc;
        case 0x2089e0u: goto label_2089e0;
        case 0x2089e4u: goto label_2089e4;
        case 0x2089e8u: goto label_2089e8;
        case 0x2089ecu: goto label_2089ec;
        case 0x2089f0u: goto label_2089f0;
        case 0x2089f4u: goto label_2089f4;
        case 0x2089f8u: goto label_2089f8;
        case 0x2089fcu: goto label_2089fc;
        case 0x208a00u: goto label_208a00;
        case 0x208a04u: goto label_208a04;
        case 0x208a08u: goto label_208a08;
        case 0x208a0cu: goto label_208a0c;
        case 0x208a10u: goto label_208a10;
        case 0x208a14u: goto label_208a14;
        case 0x208a18u: goto label_208a18;
        case 0x208a1cu: goto label_208a1c;
        case 0x208a20u: goto label_208a20;
        case 0x208a24u: goto label_208a24;
        case 0x208a28u: goto label_208a28;
        case 0x208a2cu: goto label_208a2c;
        case 0x208a30u: goto label_208a30;
        case 0x208a34u: goto label_208a34;
        case 0x208a38u: goto label_208a38;
        case 0x208a3cu: goto label_208a3c;
        default: break;
    }

    ctx->pc = 0x208490u;

label_208490:
    // 0x208490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_208494:
    // 0x208494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_208498:
    // 0x208498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20849c:
    // 0x20849c: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x20849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2084a0:
    // 0x2084a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2084a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2084a4:
    // 0x2084a4: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x2084a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2084a8:
    // 0x2084a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2084a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2084ac:
    // 0x2084ac: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2084acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2084b0:
    // 0x2084b0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2084b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2084b4:
    // 0x2084b4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2084b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2084b8:
    // 0x2084b8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2084b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2084bc:
    // 0x2084bc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2084bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2084c0:
    // 0x2084c0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2084c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2084c4:
    // 0x2084c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2084c8:
    // 0x2084c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2084c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2084cc:
    // 0x2084cc: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2084ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_2084d0:
    // 0x2084d0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2084d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2084d4:
    // 0x2084d4: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2084d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2084d8:
    // 0x2084d8: 0xc0a45e8  jal         func_2917A0
label_2084dc:
    if (ctx->pc == 0x2084DCu) {
        ctx->pc = 0x2084DCu;
            // 0x2084dc: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->pc = 0x2084E0u;
        goto label_2084e0;
    }
    ctx->pc = 0x2084D8u;
    SET_GPR_U32(ctx, 31, 0x2084E0u);
    ctx->pc = 0x2084DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2084D8u;
            // 0x2084dc: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2917A0u;
    if (runtime->hasFunction(0x2917A0u)) {
        auto targetFn = runtime->lookupFunction(0x2917A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084E0u; }
        if (ctx->pc != 0x2084E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002917A0_0x2917a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084E0u; }
        if (ctx->pc != 0x2084E0u) { return; }
    }
    ctx->pc = 0x2084E0u;
label_2084e0:
    // 0x2084e0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2084e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2084e4:
    // 0x2084e4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2084e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2084e8:
    // 0x2084e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2084e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2084ec:
    // 0x2084ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2084f0:
    if (ctx->pc == 0x2084F0u) {
        ctx->pc = 0x2084F0u;
            // 0x2084f0: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2084F4u;
        goto label_2084f4;
    }
    ctx->pc = 0x2084ECu;
    {
        const bool branch_taken_0x2084ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2084F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2084ECu;
            // 0x2084f0: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084ec) {
            ctx->pc = 0x2084FCu;
            goto label_2084fc;
        }
    }
    ctx->pc = 0x2084F4u;
label_2084f4:
    // 0x2084f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2084f8:
    if (ctx->pc == 0x2084F8u) {
        ctx->pc = 0x2084F8u;
            // 0x2084f8: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x2084FCu;
        goto label_2084fc;
    }
    ctx->pc = 0x2084F4u;
    {
        const bool branch_taken_0x2084f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2084F4u;
            // 0x2084f8: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084f4) {
            ctx->pc = 0x208504u;
            goto label_208504;
        }
    }
    ctx->pc = 0x2084FCu;
label_2084fc:
    // 0x2084fc: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2084fcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_208500:
    // 0x208500: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x208500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_208504:
    // 0x208504: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x208504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208508:
    // 0x208508: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x208508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20850c:
    // 0x20850c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20850cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208510:
    // 0x208510: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_208514:
    if (ctx->pc == 0x208514u) {
        ctx->pc = 0x208514u;
            // 0x208514: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208518u;
        goto label_208518;
    }
    ctx->pc = 0x208510u;
    {
        const bool branch_taken_0x208510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208510) {
            ctx->pc = 0x208514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208510u;
            // 0x208514: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208518u;
            goto label_208518;
        }
    }
    ctx->pc = 0x208518u;
label_208518:
    // 0x208518: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x208518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_20851c:
    // 0x20851c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x20851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208520:
    // 0x208520: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x208520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208524:
    // 0x208524: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208528:
    // 0x208528: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_20852c:
    if (ctx->pc == 0x20852Cu) {
        ctx->pc = 0x20852Cu;
            // 0x20852c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208530u;
        goto label_208530;
    }
    ctx->pc = 0x208528u;
    {
        const bool branch_taken_0x208528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208528) {
            ctx->pc = 0x20852Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208528u;
            // 0x20852c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208530u;
            goto label_208530;
        }
    }
    ctx->pc = 0x208530u;
label_208530:
    // 0x208530: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x208530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_208534:
    // 0x208534: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x208534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208538:
    // 0x208538: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x208538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20853c:
    // 0x20853c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20853cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208540:
    // 0x208540: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_208544:
    if (ctx->pc == 0x208544u) {
        ctx->pc = 0x208544u;
            // 0x208544: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208548u;
        goto label_208548;
    }
    ctx->pc = 0x208540u;
    {
        const bool branch_taken_0x208540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208540) {
            ctx->pc = 0x208544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208540u;
            // 0x208544: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208548u;
            goto label_208548;
        }
    }
    ctx->pc = 0x208548u;
label_208548:
    // 0x208548: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x208548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20854c:
    // 0x20854c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x20854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208550:
    // 0x208550: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x208550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208554:
    // 0x208554: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208558:
    // 0x208558: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20855c:
    if (ctx->pc == 0x20855Cu) {
        ctx->pc = 0x20855Cu;
            // 0x20855c: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x208560u;
        goto label_208560;
    }
    ctx->pc = 0x208558u;
    {
        const bool branch_taken_0x208558 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208558u;
            // 0x20855c: 0xc7a20020  lwc1        $f2, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208558) {
            ctx->pc = 0x208568u;
            goto label_208568;
        }
    }
    ctx->pc = 0x208560u;
label_208560:
    // 0x208560: 0x10000003  b           . + 4 + (0x3 << 2)
label_208564:
    if (ctx->pc == 0x208564u) {
        ctx->pc = 0x208564u;
            // 0x208564: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x208568u;
        goto label_208568;
    }
    ctx->pc = 0x208560u;
    {
        const bool branch_taken_0x208560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208560u;
            // 0x208564: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x208560) {
            ctx->pc = 0x208570u;
            goto label_208570;
        }
    }
    ctx->pc = 0x208568u;
label_208568:
    // 0x208568: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x208568u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_20856c:
    // 0x20856c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x20856cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_208570:
    // 0x208570: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x208570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_208574:
    // 0x208574: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x208574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208578:
    // 0x208578: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x208578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20857c:
    // 0x20857c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_208580:
    if (ctx->pc == 0x208580u) {
        ctx->pc = 0x208580u;
            // 0x208580: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x208584u;
        goto label_208584;
    }
    ctx->pc = 0x20857Cu;
    {
        const bool branch_taken_0x20857c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20857c) {
            ctx->pc = 0x208580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20857Cu;
            // 0x208580: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x208584u;
            goto label_208584;
        }
    }
    ctx->pc = 0x208584u;
label_208584:
    // 0x208584: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x208584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_208588:
    // 0x208588: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x208588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20858c:
    // 0x20858c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x20858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208590:
    // 0x208590: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x208590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_208594:
    // 0x208594: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_208598:
    if (ctx->pc == 0x208598u) {
        ctx->pc = 0x208598u;
            // 0x208598: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x20859Cu;
        goto label_20859c;
    }
    ctx->pc = 0x208594u;
    {
        const bool branch_taken_0x208594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208594) {
            ctx->pc = 0x208598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208594u;
            // 0x208598: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20859Cu;
            goto label_20859c;
        }
    }
    ctx->pc = 0x20859Cu;
label_20859c:
    // 0x20859c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x20859cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2085a0:
    // 0x2085a0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2085a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2085a4:
    // 0x2085a4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2085a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2085a8:
    // 0x2085a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2085a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2085ac:
    // 0x2085ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2085b0:
    if (ctx->pc == 0x2085B0u) {
        ctx->pc = 0x2085B0u;
            // 0x2085b0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2085B4u;
        goto label_2085b4;
    }
    ctx->pc = 0x2085ACu;
    {
        const bool branch_taken_0x2085ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2085ac) {
            ctx->pc = 0x2085B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2085ACu;
            // 0x2085b0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2085B4u;
            goto label_2085b4;
        }
    }
    ctx->pc = 0x2085B4u;
label_2085b4:
    // 0x2085b4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2085b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2085b8:
    // 0x2085b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2085b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2085bc:
    // 0x2085bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2085bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2085c0:
    // 0x2085c0: 0x3e00008  jr          $ra
label_2085c4:
    if (ctx->pc == 0x2085C4u) {
        ctx->pc = 0x2085C4u;
            // 0x2085c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2085C8u;
        goto label_2085c8;
    }
    ctx->pc = 0x2085C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2085C0u;
            // 0x2085c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2085C8u;
label_2085c8:
    // 0x2085c8: 0x0  nop
    ctx->pc = 0x2085c8u;
    // NOP
label_2085cc:
    // 0x2085cc: 0x0  nop
    ctx->pc = 0x2085ccu;
    // NOP
label_2085d0:
    // 0x2085d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2085d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2085d4:
    // 0x2085d4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x2085d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_2085d8:
    // 0x2085d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2085d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2085dc:
    // 0x2085dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2085dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2085e0:
    // 0x2085e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2085e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2085e4:
    // 0x2085e4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2085e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2085e8:
    // 0x2085e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2085e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2085ec:
    // 0x2085ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2085ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2085f0:
    // 0x2085f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2085f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2085f4:
    // 0x2085f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2085f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2085f8:
    // 0x2085f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2085f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2085fc:
    // 0x2085fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2085fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_208600:
    // 0x208600: 0x3465ffee  ori         $a1, $v1, 0xFFEE
    ctx->pc = 0x208600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_208604:
    // 0x208604: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x208604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_208608:
    // 0x208608: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x208608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_20860c:
    // 0x20860c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_208610:
    // 0x208610: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x208610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_208614:
    // 0x208614: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x208614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_208618:
    // 0x208618: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x208618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20861c:
    // 0x20861c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x20861cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_208620:
    // 0x208620: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x208620u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_208624:
    // 0x208624: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x208624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_208628:
    // 0x208628: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x208628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_20862c:
    // 0x20862c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x20862cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_208630:
    // 0x208630: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x208630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_208634:
    // 0x208634: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x208634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_208638:
    // 0x208638: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x208638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_20863c:
    // 0x20863c: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x20863cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_208640:
    // 0x208640: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x208640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_208644:
    // 0x208644: 0x18600048  blez        $v1, . + 4 + (0x48 << 2)
label_208648:
    if (ctx->pc == 0x208648u) {
        ctx->pc = 0x208648u;
            // 0x208648: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20864Cu;
        goto label_20864c;
    }
    ctx->pc = 0x208644u;
    {
        const bool branch_taken_0x208644 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x208648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208644u;
            // 0x208648: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208644) {
            ctx->pc = 0x208768u;
            goto label_208768;
        }
    }
    ctx->pc = 0x20864Cu;
label_20864c:
    // 0x20864c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x20864cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208650:
    // 0x208650: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x208650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_208654:
    // 0x208654: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_208658:
    // 0x208658: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x208658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20865c:
    // 0x20865c: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
label_208660:
    if (ctx->pc == 0x208660u) {
        ctx->pc = 0x208660u;
            // 0x208660: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x208664u;
        goto label_208664;
    }
    ctx->pc = 0x20865Cu;
    {
        const bool branch_taken_0x20865c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x208660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20865Cu;
            // 0x208660: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20865c) {
            ctx->pc = 0x208750u;
            goto label_208750;
        }
    }
    ctx->pc = 0x208664u;
label_208664:
    // 0x208664: 0x0  nop
    ctx->pc = 0x208664u;
    // NOP
label_208668:
    // 0x208668: 0x82020010  lb          $v0, 0x10($s0)
    ctx->pc = 0x208668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_20866c:
    // 0x20866c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_208670:
    // 0x208670: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x208670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_208674:
    // 0x208674: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_208678:
    if (ctx->pc == 0x208678u) {
        ctx->pc = 0x20867Cu;
        goto label_20867c;
    }
    ctx->pc = 0x208674u;
    {
        const bool branch_taken_0x208674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208674) {
            ctx->pc = 0x2086C0u;
            goto label_2086c0;
        }
    }
    ctx->pc = 0x20867Cu;
label_20867c:
    // 0x20867c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x20867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_208680:
    // 0x208680: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x208680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_208684:
    // 0x208684: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x208684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_208688:
    // 0x208688: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x208688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20868c:
    // 0x20868c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208690:
    // 0x208690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208694:
    // 0x208694: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x208694u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_208698:
    // 0x208698: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x208698u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_20869c:
    // 0x20869c: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x20869cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2086a0:
    // 0x2086a0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2086a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2086a4:
    // 0x2086a4: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x2086a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2086a8:
    // 0x2086a8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2086a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2086ac:
    // 0x2086ac: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x2086acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2086b0:
    // 0x2086b0: 0xa3b021  addu        $s6, $a1, $v1
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2086b4:
    // 0x2086b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2086b8:
    if (ctx->pc == 0x2086B8u) {
        ctx->pc = 0x2086B8u;
            // 0x2086b8: 0xa2b821  addu        $s7, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x2086BCu;
        goto label_2086bc;
    }
    ctx->pc = 0x2086B4u;
    {
        const bool branch_taken_0x2086b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2086B4u;
            // 0x2086b8: 0xa2b821  addu        $s7, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086b4) {
            ctx->pc = 0x208700u;
            goto label_208700;
        }
    }
    ctx->pc = 0x2086BCu;
label_2086bc:
    // 0x2086bc: 0x0  nop
    ctx->pc = 0x2086bcu;
    // NOP
label_2086c0:
    // 0x2086c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2086c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2086c4:
    // 0x2086c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2086c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2086c8:
    // 0x2086c8: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2086cc:
    // 0x2086cc: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x2086ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2086d0:
    // 0x2086d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2086d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2086d4:
    // 0x2086d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2086d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2086d8:
    // 0x2086d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2086d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2086dc:
    // 0x2086dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2086dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2086e0:
    // 0x2086e0: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x2086e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2086e4:
    // 0x2086e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2086e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2086e8:
    // 0x2086e8: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x2086e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2086ec:
    // 0x2086ec: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2086ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2086f0:
    // 0x2086f0: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x2086f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2086f4:
    // 0x2086f4: 0xa3b021  addu        $s6, $a1, $v1
    ctx->pc = 0x2086f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2086f8:
    // 0x2086f8: 0xa2b821  addu        $s7, $a1, $v0
    ctx->pc = 0x2086f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2086fc:
    // 0x2086fc: 0x0  nop
    ctx->pc = 0x2086fcu;
    // NOP
label_208700:
    // 0x208700: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x208700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_208704:
    // 0x208704: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x208704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_208708:
    // 0x208708: 0xc082124  jal         func_208490
label_20870c:
    if (ctx->pc == 0x20870Cu) {
        ctx->pc = 0x20870Cu;
            // 0x20870c: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x208710u;
        goto label_208710;
    }
    ctx->pc = 0x208708u;
    SET_GPR_U32(ctx, 31, 0x208710u);
    ctx->pc = 0x20870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208708u;
            // 0x20870c: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208490u;
    goto label_208490;
    ctx->pc = 0x208710u;
label_208710:
    // 0x208710: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x208710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_208714:
    // 0x208714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x208714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_208718:
    // 0x208718: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x208718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20871c:
    // 0x20871c: 0xc082124  jal         func_208490
label_208720:
    if (ctx->pc == 0x208720u) {
        ctx->pc = 0x208720u;
            // 0x208720: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x208724u;
        goto label_208724;
    }
    ctx->pc = 0x20871Cu;
    SET_GPR_U32(ctx, 31, 0x208724u);
    ctx->pc = 0x208720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20871Cu;
            // 0x208720: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208490u;
    goto label_208490;
    ctx->pc = 0x208724u;
label_208724:
    // 0x208724: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x208724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_208728:
    // 0x208728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x208728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20872c:
    // 0x20872c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20872cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_208730:
    // 0x208730: 0xc082124  jal         func_208490
label_208734:
    if (ctx->pc == 0x208734u) {
        ctx->pc = 0x208734u;
            // 0x208734: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x208738u;
        goto label_208738;
    }
    ctx->pc = 0x208730u;
    SET_GPR_U32(ctx, 31, 0x208738u);
    ctx->pc = 0x208734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208730u;
            // 0x208734: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208490u;
    goto label_208490;
    ctx->pc = 0x208738u;
label_208738:
    // 0x208738: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x208738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20873c:
    // 0x20873c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20873cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208740:
    // 0x208740: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x208740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_208744:
    // 0x208744: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_208748:
    if (ctx->pc == 0x208748u) {
        ctx->pc = 0x20874Cu;
        goto label_20874c;
    }
    ctx->pc = 0x208744u;
    {
        const bool branch_taken_0x208744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208744) {
            ctx->pc = 0x208668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_208668;
        }
    }
    ctx->pc = 0x20874Cu;
label_20874c:
    // 0x20874c: 0x0  nop
    ctx->pc = 0x20874cu;
    // NOP
label_208750:
    // 0x208750: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x208750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_208754:
    // 0x208754: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x208754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_208758:
    // 0x208758: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x208758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20875c:
    // 0x20875c: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_208760:
    if (ctx->pc == 0x208760u) {
        ctx->pc = 0x208760u;
            // 0x208760: 0x27de0038  addiu       $fp, $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
        ctx->pc = 0x208764u;
        goto label_208764;
    }
    ctx->pc = 0x20875Cu;
    {
        const bool branch_taken_0x20875c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20875Cu;
            // 0x208760: 0x27de0038  addiu       $fp, $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20875c) {
            ctx->pc = 0x208650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_208650;
        }
    }
    ctx->pc = 0x208764u;
label_208764:
    // 0x208764: 0x0  nop
    ctx->pc = 0x208764u;
    // NOP
label_208768:
    // 0x208768: 0xc6a10050  lwc1        $f1, 0x50($s5)
    ctx->pc = 0x208768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20876c:
    // 0x20876c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x20876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208770:
    // 0x208770: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x208770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_208774:
    // 0x208774: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x208774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_208778:
    // 0x208778: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x208778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_20877c:
    // 0x20877c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x20877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208780:
    // 0x208780: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x208780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_208784:
    // 0x208784: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x208784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_208788:
    // 0x208788: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x208788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20878c:
    // 0x20878c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20878cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_208790:
    // 0x208790: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x208790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_208794:
    // 0x208794: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x208794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_208798:
    // 0x208798: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x208798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20879c:
    // 0x20879c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x20879cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2087a0:
    // 0x2087a0: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2087a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2087a4:
    // 0x2087a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2087a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2087a8:
    // 0x2087a8: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2087a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_2087ac:
    // 0x2087ac: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2087acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2087b0:
    // 0x2087b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2087b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2087b4:
    // 0x2087b4: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x2087b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_2087b8:
    // 0x2087b8: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2087b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2087bc:
    // 0x2087bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2087bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2087c0:
    // 0x2087c0: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x2087c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_2087c4:
    // 0x2087c4: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x2087c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2087c8:
    // 0x2087c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2087c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2087cc:
    // 0x2087cc: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x2087ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_2087d0:
    // 0x2087d0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2087d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2087d4:
    // 0x2087d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2087d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2087d8:
    // 0x2087d8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2087d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2087dc:
    // 0x2087dc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2087dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2087e0:
    // 0x2087e0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2087e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2087e4:
    // 0x2087e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2087e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2087e8:
    // 0x2087e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2087e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2087ec:
    // 0x2087ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2087ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2087f0:
    // 0x2087f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2087f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2087f4:
    // 0x2087f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2087f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2087f8:
    // 0x2087f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2087f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2087fc:
    // 0x2087fc: 0x3e00008  jr          $ra
label_208800:
    if (ctx->pc == 0x208800u) {
        ctx->pc = 0x208800u;
            // 0x208800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x208804u;
        goto label_208804;
    }
    ctx->pc = 0x2087FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2087FCu;
            // 0x208800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208804u;
label_208804:
    // 0x208804: 0x0  nop
    ctx->pc = 0x208804u;
    // NOP
label_208808:
    // 0x208808: 0x0  nop
    ctx->pc = 0x208808u;
    // NOP
label_20880c:
    // 0x20880c: 0x0  nop
    ctx->pc = 0x20880cu;
    // NOP
label_208810:
    // 0x208810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_208814:
    // 0x208814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_208818:
    // 0x208818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x208818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20881c:
    // 0x20881c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_208820:
    // 0x208820: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x208820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_208824:
    // 0x208824: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x208824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_208828:
    // 0x208828: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x208828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_20882c:
    // 0x20882c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x20882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_208830:
    // 0x208830: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x208830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_208834:
    // 0x208834: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_208838:
    if (ctx->pc == 0x208838u) {
        ctx->pc = 0x208838u;
            // 0x208838: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20883Cu;
        goto label_20883c;
    }
    ctx->pc = 0x208834u;
    {
        const bool branch_taken_0x208834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x208838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208834u;
            // 0x208838: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208834) {
            ctx->pc = 0x208848u;
            goto label_208848;
        }
    }
    ctx->pc = 0x20883Cu;
label_20883c:
    // 0x20883c: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x20883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_208840:
    // 0x208840: 0xc0a728c  jal         func_29CA30
label_208844:
    if (ctx->pc == 0x208844u) {
        ctx->pc = 0x208844u;
            // 0x208844: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->pc = 0x208848u;
        goto label_208848;
    }
    ctx->pc = 0x208840u;
    SET_GPR_U32(ctx, 31, 0x208848u);
    ctx->pc = 0x208844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208840u;
            // 0x208844: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208848u; }
        if (ctx->pc != 0x208848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208848u; }
        if (ctx->pc != 0x208848u) { return; }
    }
    ctx->pc = 0x208848u;
label_208848:
    // 0x208848: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x208848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_20884c:
    // 0x20884c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x20884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_208850:
    // 0x208850: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x208850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_208854:
    // 0x208854: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x208854u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_208858:
    // 0x208858: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x208858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
label_20885c:
    // 0x20885c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x20885cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_208860:
    // 0x208860: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x208860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_208864:
    // 0x208864: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x208864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208868:
    // 0x208868: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x208868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20886c:
    // 0x20886c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20886cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_208870:
    // 0x208870: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x208870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_208874:
    // 0x208874: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x208874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_208878:
    // 0x208878: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x208878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20887c:
    // 0x20887c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x20887cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_208880:
    // 0x208880: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x208880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_208884:
    // 0x208884: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x208884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_208888:
    // 0x208888: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x208888u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_20888c:
    // 0x20888c: 0xa0a30010  sb          $v1, 0x10($a1)
    ctx->pc = 0x20888cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 3));
label_208890:
    // 0x208890: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x208890u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_208894:
    // 0x208894: 0xa0a30011  sb          $v1, 0x11($a1)
    ctx->pc = 0x208894u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 3));
label_208898:
    // 0x208898: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x208898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20889c:
    // 0x20889c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20889cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2088a0:
    // 0x2088a0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2088a4:
    // 0x2088a4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2088a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_2088a8:
    // 0x2088a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2088a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2088ac:
    // 0x2088ac: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2088acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_2088b0:
    // 0x2088b0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2088b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2088b4:
    // 0x2088b4: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x2088b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_2088b8:
    // 0x2088b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2088bc:
    // 0x2088bc: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x2088bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_2088c0:
    // 0x2088c0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2088c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2088c4:
    // 0x2088c4: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x2088c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_2088c8:
    // 0x2088c8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2088c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2088cc:
    // 0x2088cc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x2088ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_2088d0:
    // 0x2088d0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2088d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2088d4:
    // 0x2088d4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2088d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_2088d8:
    // 0x2088d8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2088dc:
    // 0x2088dc: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x2088dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_2088e0:
    // 0x2088e0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2088e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2088e4:
    // 0x2088e4: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_2088e8:
    if (ctx->pc == 0x2088E8u) {
        ctx->pc = 0x2088E8u;
            // 0x2088e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2088ECu;
        goto label_2088ec;
    }
    ctx->pc = 0x2088E4u;
    {
        const bool branch_taken_0x2088e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2088e4) {
            ctx->pc = 0x2088E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2088E4u;
            // 0x2088e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208908u;
            goto label_208908;
        }
    }
    ctx->pc = 0x2088ECu;
label_2088ec:
    // 0x2088ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2088ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2088f0:
    // 0x2088f0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2088f4:
    // 0x2088f4: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
label_2088f8:
    // 0x2088f8: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x2088f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_2088fc:
    // 0x2088fc: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x2088fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_208900:
    // 0x208900: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x208900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_208904:
    // 0x208904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_208908:
    // 0x208908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20890c:
    // 0x20890c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20890cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_208910:
    // 0x208910: 0x3e00008  jr          $ra
label_208914:
    if (ctx->pc == 0x208914u) {
        ctx->pc = 0x208914u;
            // 0x208914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x208918u;
        goto label_208918;
    }
    ctx->pc = 0x208910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208910u;
            // 0x208914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208918u;
label_208918:
    // 0x208918: 0x0  nop
    ctx->pc = 0x208918u;
    // NOP
label_20891c:
    // 0x20891c: 0x0  nop
    ctx->pc = 0x20891cu;
    // NOP
label_208920:
    // 0x208920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_208924:
    // 0x208924: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x208924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208928:
    // 0x208928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20892c:
    // 0x20892c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20892cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_208930:
    // 0x208930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x208930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_208934:
    // 0x208934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208938:
    // 0x208938: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x208938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20893c:
    // 0x20893c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20893cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208940:
    // 0x208940: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x208940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208944:
    // 0x208944: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x208944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_208948:
    // 0x208948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20894c:
    // 0x20894c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x20894cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_208950:
    // 0x208950: 0x320f809  jalr        $t9
label_208954:
    if (ctx->pc == 0x208954u) {
        ctx->pc = 0x208954u;
            // 0x208954: 0x24a5bbd8  addiu       $a1, $a1, -0x4428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949848));
        ctx->pc = 0x208958u;
        goto label_208958;
    }
    ctx->pc = 0x208950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x208958u);
        ctx->pc = 0x208954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208950u;
            // 0x208954: 0x24a5bbd8  addiu       $a1, $a1, -0x4428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208958u; }
            if (ctx->pc != 0x208958u) { return; }
        }
        }
    }
    ctx->pc = 0x208958u;
label_208958:
    // 0x208958: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x208958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_20895c:
    // 0x20895c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_208960:
    // 0x208960: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x208960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_208964:
    // 0x208964: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_208968:
    if (ctx->pc == 0x208968u) {
        ctx->pc = 0x208968u;
            // 0x208968: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x20896Cu;
        goto label_20896c;
    }
    ctx->pc = 0x208964u;
    {
        const bool branch_taken_0x208964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208964) {
            ctx->pc = 0x208968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208964u;
            // 0x208968: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2089B4u;
            goto label_2089b4;
        }
    }
    ctx->pc = 0x20896Cu;
label_20896c:
    // 0x20896c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x20896cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_208970:
    // 0x208970: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208974:
    // 0x208974: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x208974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_208978:
    // 0x208978: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x208978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_20897c:
    // 0x20897c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_208980:
    // 0x208980: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_208984:
    // 0x208984: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x208984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208988:
    // 0x208988: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x208988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_20898c:
    // 0x20898c: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_208990:
    // 0x208990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208994:
    // 0x208994: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x208994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_208998:
    // 0x208998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x208998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20899c:
    // 0x20899c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2089a0:
    // 0x2089a0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2089a4:
    // 0x2089a4: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2089a8:
    // 0x2089a8: 0x320f809  jalr        $t9
label_2089ac:
    if (ctx->pc == 0x2089ACu) {
        ctx->pc = 0x2089ACu;
            // 0x2089ac: 0x24a5bbe8  addiu       $a1, $a1, -0x4418 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949864));
        ctx->pc = 0x2089B0u;
        goto label_2089b0;
    }
    ctx->pc = 0x2089A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2089B0u);
        ctx->pc = 0x2089ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089A8u;
            // 0x2089ac: 0x24a5bbe8  addiu       $a1, $a1, -0x4418 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949864));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2089B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2089B0u; }
            if (ctx->pc != 0x2089B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2089B0u;
label_2089b0:
    // 0x2089b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2089b4:
    // 0x2089b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2089b8:
    // 0x2089b8: 0x320f809  jalr        $t9
label_2089bc:
    if (ctx->pc == 0x2089BCu) {
        ctx->pc = 0x2089BCu;
            // 0x2089bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2089C0u;
        goto label_2089c0;
    }
    ctx->pc = 0x2089B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2089C0u);
        ctx->pc = 0x2089BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089B8u;
            // 0x2089bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2089C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2089C0u; }
            if (ctx->pc != 0x2089C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2089C0u;
label_2089c0:
    // 0x2089c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2089c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2089c4:
    // 0x2089c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2089c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2089c8:
    // 0x2089c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2089c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2089cc:
    // 0x2089cc: 0x3e00008  jr          $ra
label_2089d0:
    if (ctx->pc == 0x2089D0u) {
        ctx->pc = 0x2089D0u;
            // 0x2089d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2089D4u;
        goto label_2089d4;
    }
    ctx->pc = 0x2089CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2089D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089CCu;
            // 0x2089d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2089D4u;
label_2089d4:
    // 0x2089d4: 0x0  nop
    ctx->pc = 0x2089d4u;
    // NOP
label_2089d8:
    // 0x2089d8: 0x0  nop
    ctx->pc = 0x2089d8u;
    // NOP
label_2089dc:
    // 0x2089dc: 0x0  nop
    ctx->pc = 0x2089dcu;
    // NOP
label_2089e0:
    // 0x2089e0: 0x808206c  j           func_2081B0
label_2089e4:
    if (ctx->pc == 0x2089E4u) {
        ctx->pc = 0x2089E4u;
            // 0x2089e4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x2089E8u;
        goto label_2089e8;
    }
    ctx->pc = 0x2089E0u;
    ctx->pc = 0x2089E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2089E0u;
            // 0x2089e4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2081B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2081B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2089E8u;
label_2089e8:
    // 0x2089e8: 0x0  nop
    ctx->pc = 0x2089e8u;
    // NOP
label_2089ec:
    // 0x2089ec: 0x0  nop
    ctx->pc = 0x2089ecu;
    // NOP
label_2089f0:
    // 0x2089f0: 0x8081a7c  j           func_2069F0
label_2089f4:
    if (ctx->pc == 0x2089F4u) {
        ctx->pc = 0x2089F4u;
            // 0x2089f4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x2089F8u;
        goto label_2089f8;
    }
    ctx->pc = 0x2089F0u;
    ctx->pc = 0x2089F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2089F0u;
            // 0x2089f4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2069F0u;
    {
        auto targetFn = runtime->lookupFunction(0x2069F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2089F8u;
label_2089f8:
    // 0x2089f8: 0x0  nop
    ctx->pc = 0x2089f8u;
    // NOP
label_2089fc:
    // 0x2089fc: 0x0  nop
    ctx->pc = 0x2089fcu;
    // NOP
label_208a00:
    // 0x208a00: 0x3e00008  jr          $ra
label_208a04:
    if (ctx->pc == 0x208A04u) {
        ctx->pc = 0x208A08u;
        goto label_208a08;
    }
    ctx->pc = 0x208A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208A08u;
label_208a08:
    // 0x208a08: 0x0  nop
    ctx->pc = 0x208a08u;
    // NOP
label_208a0c:
    // 0x208a0c: 0x0  nop
    ctx->pc = 0x208a0cu;
    // NOP
label_208a10:
    // 0x208a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_208a14:
    // 0x208a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208a18:
    // 0x208a18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_208a1c:
    if (ctx->pc == 0x208A1Cu) {
        ctx->pc = 0x208A1Cu;
            // 0x208a1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x208A20u;
        goto label_208a20;
    }
    ctx->pc = 0x208A18u;
    {
        const bool branch_taken_0x208a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A18u;
            // 0x208a1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a18) {
            ctx->pc = 0x208A28u;
            goto label_208a28;
        }
    }
    ctx->pc = 0x208A20u;
label_208a20:
    // 0x208a20: 0xc081fd0  jal         func_207F40
label_208a24:
    if (ctx->pc == 0x208A24u) {
        ctx->pc = 0x208A28u;
        goto label_208a28;
    }
    ctx->pc = 0x208A20u;
    SET_GPR_U32(ctx, 31, 0x208A28u);
    ctx->pc = 0x207F40u;
    if (runtime->hasFunction(0x207F40u)) {
        auto targetFn = runtime->lookupFunction(0x207F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A28u; }
        if (ctx->pc != 0x208A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207F40_0x207f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A28u; }
        if (ctx->pc != 0x208A28u) { return; }
    }
    ctx->pc = 0x208A28u;
label_208a28:
    // 0x208a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208a2c:
    // 0x208a2c: 0x3e00008  jr          $ra
label_208a30:
    if (ctx->pc == 0x208A30u) {
        ctx->pc = 0x208A30u;
            // 0x208a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x208A34u;
        goto label_208a34;
    }
    ctx->pc = 0x208A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A2Cu;
            // 0x208a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208A34u;
label_208a34:
    // 0x208a34: 0x0  nop
    ctx->pc = 0x208a34u;
    // NOP
label_208a38:
    // 0x208a38: 0x0  nop
    ctx->pc = 0x208a38u;
    // NOP
label_208a3c:
    // 0x208a3c: 0x0  nop
    ctx->pc = 0x208a3cu;
    // NOP
}
