#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005695D0
// Address: 0x5695d0 - 0x569ae0
void sub_005695D0_0x5695d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005695D0_0x5695d0");
#endif

    switch (ctx->pc) {
        case 0x5695d0u: goto label_5695d0;
        case 0x5695d4u: goto label_5695d4;
        case 0x5695d8u: goto label_5695d8;
        case 0x5695dcu: goto label_5695dc;
        case 0x5695e0u: goto label_5695e0;
        case 0x5695e4u: goto label_5695e4;
        case 0x5695e8u: goto label_5695e8;
        case 0x5695ecu: goto label_5695ec;
        case 0x5695f0u: goto label_5695f0;
        case 0x5695f4u: goto label_5695f4;
        case 0x5695f8u: goto label_5695f8;
        case 0x5695fcu: goto label_5695fc;
        case 0x569600u: goto label_569600;
        case 0x569604u: goto label_569604;
        case 0x569608u: goto label_569608;
        case 0x56960cu: goto label_56960c;
        case 0x569610u: goto label_569610;
        case 0x569614u: goto label_569614;
        case 0x569618u: goto label_569618;
        case 0x56961cu: goto label_56961c;
        case 0x569620u: goto label_569620;
        case 0x569624u: goto label_569624;
        case 0x569628u: goto label_569628;
        case 0x56962cu: goto label_56962c;
        case 0x569630u: goto label_569630;
        case 0x569634u: goto label_569634;
        case 0x569638u: goto label_569638;
        case 0x56963cu: goto label_56963c;
        case 0x569640u: goto label_569640;
        case 0x569644u: goto label_569644;
        case 0x569648u: goto label_569648;
        case 0x56964cu: goto label_56964c;
        case 0x569650u: goto label_569650;
        case 0x569654u: goto label_569654;
        case 0x569658u: goto label_569658;
        case 0x56965cu: goto label_56965c;
        case 0x569660u: goto label_569660;
        case 0x569664u: goto label_569664;
        case 0x569668u: goto label_569668;
        case 0x56966cu: goto label_56966c;
        case 0x569670u: goto label_569670;
        case 0x569674u: goto label_569674;
        case 0x569678u: goto label_569678;
        case 0x56967cu: goto label_56967c;
        case 0x569680u: goto label_569680;
        case 0x569684u: goto label_569684;
        case 0x569688u: goto label_569688;
        case 0x56968cu: goto label_56968c;
        case 0x569690u: goto label_569690;
        case 0x569694u: goto label_569694;
        case 0x569698u: goto label_569698;
        case 0x56969cu: goto label_56969c;
        case 0x5696a0u: goto label_5696a0;
        case 0x5696a4u: goto label_5696a4;
        case 0x5696a8u: goto label_5696a8;
        case 0x5696acu: goto label_5696ac;
        case 0x5696b0u: goto label_5696b0;
        case 0x5696b4u: goto label_5696b4;
        case 0x5696b8u: goto label_5696b8;
        case 0x5696bcu: goto label_5696bc;
        case 0x5696c0u: goto label_5696c0;
        case 0x5696c4u: goto label_5696c4;
        case 0x5696c8u: goto label_5696c8;
        case 0x5696ccu: goto label_5696cc;
        case 0x5696d0u: goto label_5696d0;
        case 0x5696d4u: goto label_5696d4;
        case 0x5696d8u: goto label_5696d8;
        case 0x5696dcu: goto label_5696dc;
        case 0x5696e0u: goto label_5696e0;
        case 0x5696e4u: goto label_5696e4;
        case 0x5696e8u: goto label_5696e8;
        case 0x5696ecu: goto label_5696ec;
        case 0x5696f0u: goto label_5696f0;
        case 0x5696f4u: goto label_5696f4;
        case 0x5696f8u: goto label_5696f8;
        case 0x5696fcu: goto label_5696fc;
        case 0x569700u: goto label_569700;
        case 0x569704u: goto label_569704;
        case 0x569708u: goto label_569708;
        case 0x56970cu: goto label_56970c;
        case 0x569710u: goto label_569710;
        case 0x569714u: goto label_569714;
        case 0x569718u: goto label_569718;
        case 0x56971cu: goto label_56971c;
        case 0x569720u: goto label_569720;
        case 0x569724u: goto label_569724;
        case 0x569728u: goto label_569728;
        case 0x56972cu: goto label_56972c;
        case 0x569730u: goto label_569730;
        case 0x569734u: goto label_569734;
        case 0x569738u: goto label_569738;
        case 0x56973cu: goto label_56973c;
        case 0x569740u: goto label_569740;
        case 0x569744u: goto label_569744;
        case 0x569748u: goto label_569748;
        case 0x56974cu: goto label_56974c;
        case 0x569750u: goto label_569750;
        case 0x569754u: goto label_569754;
        case 0x569758u: goto label_569758;
        case 0x56975cu: goto label_56975c;
        case 0x569760u: goto label_569760;
        case 0x569764u: goto label_569764;
        case 0x569768u: goto label_569768;
        case 0x56976cu: goto label_56976c;
        case 0x569770u: goto label_569770;
        case 0x569774u: goto label_569774;
        case 0x569778u: goto label_569778;
        case 0x56977cu: goto label_56977c;
        case 0x569780u: goto label_569780;
        case 0x569784u: goto label_569784;
        case 0x569788u: goto label_569788;
        case 0x56978cu: goto label_56978c;
        case 0x569790u: goto label_569790;
        case 0x569794u: goto label_569794;
        case 0x569798u: goto label_569798;
        case 0x56979cu: goto label_56979c;
        case 0x5697a0u: goto label_5697a0;
        case 0x5697a4u: goto label_5697a4;
        case 0x5697a8u: goto label_5697a8;
        case 0x5697acu: goto label_5697ac;
        case 0x5697b0u: goto label_5697b0;
        case 0x5697b4u: goto label_5697b4;
        case 0x5697b8u: goto label_5697b8;
        case 0x5697bcu: goto label_5697bc;
        case 0x5697c0u: goto label_5697c0;
        case 0x5697c4u: goto label_5697c4;
        case 0x5697c8u: goto label_5697c8;
        case 0x5697ccu: goto label_5697cc;
        case 0x5697d0u: goto label_5697d0;
        case 0x5697d4u: goto label_5697d4;
        case 0x5697d8u: goto label_5697d8;
        case 0x5697dcu: goto label_5697dc;
        case 0x5697e0u: goto label_5697e0;
        case 0x5697e4u: goto label_5697e4;
        case 0x5697e8u: goto label_5697e8;
        case 0x5697ecu: goto label_5697ec;
        case 0x5697f0u: goto label_5697f0;
        case 0x5697f4u: goto label_5697f4;
        case 0x5697f8u: goto label_5697f8;
        case 0x5697fcu: goto label_5697fc;
        case 0x569800u: goto label_569800;
        case 0x569804u: goto label_569804;
        case 0x569808u: goto label_569808;
        case 0x56980cu: goto label_56980c;
        case 0x569810u: goto label_569810;
        case 0x569814u: goto label_569814;
        case 0x569818u: goto label_569818;
        case 0x56981cu: goto label_56981c;
        case 0x569820u: goto label_569820;
        case 0x569824u: goto label_569824;
        case 0x569828u: goto label_569828;
        case 0x56982cu: goto label_56982c;
        case 0x569830u: goto label_569830;
        case 0x569834u: goto label_569834;
        case 0x569838u: goto label_569838;
        case 0x56983cu: goto label_56983c;
        case 0x569840u: goto label_569840;
        case 0x569844u: goto label_569844;
        case 0x569848u: goto label_569848;
        case 0x56984cu: goto label_56984c;
        case 0x569850u: goto label_569850;
        case 0x569854u: goto label_569854;
        case 0x569858u: goto label_569858;
        case 0x56985cu: goto label_56985c;
        case 0x569860u: goto label_569860;
        case 0x569864u: goto label_569864;
        case 0x569868u: goto label_569868;
        case 0x56986cu: goto label_56986c;
        case 0x569870u: goto label_569870;
        case 0x569874u: goto label_569874;
        case 0x569878u: goto label_569878;
        case 0x56987cu: goto label_56987c;
        case 0x569880u: goto label_569880;
        case 0x569884u: goto label_569884;
        case 0x569888u: goto label_569888;
        case 0x56988cu: goto label_56988c;
        case 0x569890u: goto label_569890;
        case 0x569894u: goto label_569894;
        case 0x569898u: goto label_569898;
        case 0x56989cu: goto label_56989c;
        case 0x5698a0u: goto label_5698a0;
        case 0x5698a4u: goto label_5698a4;
        case 0x5698a8u: goto label_5698a8;
        case 0x5698acu: goto label_5698ac;
        case 0x5698b0u: goto label_5698b0;
        case 0x5698b4u: goto label_5698b4;
        case 0x5698b8u: goto label_5698b8;
        case 0x5698bcu: goto label_5698bc;
        case 0x5698c0u: goto label_5698c0;
        case 0x5698c4u: goto label_5698c4;
        case 0x5698c8u: goto label_5698c8;
        case 0x5698ccu: goto label_5698cc;
        case 0x5698d0u: goto label_5698d0;
        case 0x5698d4u: goto label_5698d4;
        case 0x5698d8u: goto label_5698d8;
        case 0x5698dcu: goto label_5698dc;
        case 0x5698e0u: goto label_5698e0;
        case 0x5698e4u: goto label_5698e4;
        case 0x5698e8u: goto label_5698e8;
        case 0x5698ecu: goto label_5698ec;
        case 0x5698f0u: goto label_5698f0;
        case 0x5698f4u: goto label_5698f4;
        case 0x5698f8u: goto label_5698f8;
        case 0x5698fcu: goto label_5698fc;
        case 0x569900u: goto label_569900;
        case 0x569904u: goto label_569904;
        case 0x569908u: goto label_569908;
        case 0x56990cu: goto label_56990c;
        case 0x569910u: goto label_569910;
        case 0x569914u: goto label_569914;
        case 0x569918u: goto label_569918;
        case 0x56991cu: goto label_56991c;
        case 0x569920u: goto label_569920;
        case 0x569924u: goto label_569924;
        case 0x569928u: goto label_569928;
        case 0x56992cu: goto label_56992c;
        case 0x569930u: goto label_569930;
        case 0x569934u: goto label_569934;
        case 0x569938u: goto label_569938;
        case 0x56993cu: goto label_56993c;
        case 0x569940u: goto label_569940;
        case 0x569944u: goto label_569944;
        case 0x569948u: goto label_569948;
        case 0x56994cu: goto label_56994c;
        case 0x569950u: goto label_569950;
        case 0x569954u: goto label_569954;
        case 0x569958u: goto label_569958;
        case 0x56995cu: goto label_56995c;
        case 0x569960u: goto label_569960;
        case 0x569964u: goto label_569964;
        case 0x569968u: goto label_569968;
        case 0x56996cu: goto label_56996c;
        case 0x569970u: goto label_569970;
        case 0x569974u: goto label_569974;
        case 0x569978u: goto label_569978;
        case 0x56997cu: goto label_56997c;
        case 0x569980u: goto label_569980;
        case 0x569984u: goto label_569984;
        case 0x569988u: goto label_569988;
        case 0x56998cu: goto label_56998c;
        case 0x569990u: goto label_569990;
        case 0x569994u: goto label_569994;
        case 0x569998u: goto label_569998;
        case 0x56999cu: goto label_56999c;
        case 0x5699a0u: goto label_5699a0;
        case 0x5699a4u: goto label_5699a4;
        case 0x5699a8u: goto label_5699a8;
        case 0x5699acu: goto label_5699ac;
        case 0x5699b0u: goto label_5699b0;
        case 0x5699b4u: goto label_5699b4;
        case 0x5699b8u: goto label_5699b8;
        case 0x5699bcu: goto label_5699bc;
        case 0x5699c0u: goto label_5699c0;
        case 0x5699c4u: goto label_5699c4;
        case 0x5699c8u: goto label_5699c8;
        case 0x5699ccu: goto label_5699cc;
        case 0x5699d0u: goto label_5699d0;
        case 0x5699d4u: goto label_5699d4;
        case 0x5699d8u: goto label_5699d8;
        case 0x5699dcu: goto label_5699dc;
        case 0x5699e0u: goto label_5699e0;
        case 0x5699e4u: goto label_5699e4;
        case 0x5699e8u: goto label_5699e8;
        case 0x5699ecu: goto label_5699ec;
        case 0x5699f0u: goto label_5699f0;
        case 0x5699f4u: goto label_5699f4;
        case 0x5699f8u: goto label_5699f8;
        case 0x5699fcu: goto label_5699fc;
        case 0x569a00u: goto label_569a00;
        case 0x569a04u: goto label_569a04;
        case 0x569a08u: goto label_569a08;
        case 0x569a0cu: goto label_569a0c;
        case 0x569a10u: goto label_569a10;
        case 0x569a14u: goto label_569a14;
        case 0x569a18u: goto label_569a18;
        case 0x569a1cu: goto label_569a1c;
        case 0x569a20u: goto label_569a20;
        case 0x569a24u: goto label_569a24;
        case 0x569a28u: goto label_569a28;
        case 0x569a2cu: goto label_569a2c;
        case 0x569a30u: goto label_569a30;
        case 0x569a34u: goto label_569a34;
        case 0x569a38u: goto label_569a38;
        case 0x569a3cu: goto label_569a3c;
        case 0x569a40u: goto label_569a40;
        case 0x569a44u: goto label_569a44;
        case 0x569a48u: goto label_569a48;
        case 0x569a4cu: goto label_569a4c;
        case 0x569a50u: goto label_569a50;
        case 0x569a54u: goto label_569a54;
        case 0x569a58u: goto label_569a58;
        case 0x569a5cu: goto label_569a5c;
        case 0x569a60u: goto label_569a60;
        case 0x569a64u: goto label_569a64;
        case 0x569a68u: goto label_569a68;
        case 0x569a6cu: goto label_569a6c;
        case 0x569a70u: goto label_569a70;
        case 0x569a74u: goto label_569a74;
        case 0x569a78u: goto label_569a78;
        case 0x569a7cu: goto label_569a7c;
        case 0x569a80u: goto label_569a80;
        case 0x569a84u: goto label_569a84;
        case 0x569a88u: goto label_569a88;
        case 0x569a8cu: goto label_569a8c;
        case 0x569a90u: goto label_569a90;
        case 0x569a94u: goto label_569a94;
        case 0x569a98u: goto label_569a98;
        case 0x569a9cu: goto label_569a9c;
        case 0x569aa0u: goto label_569aa0;
        case 0x569aa4u: goto label_569aa4;
        case 0x569aa8u: goto label_569aa8;
        case 0x569aacu: goto label_569aac;
        case 0x569ab0u: goto label_569ab0;
        case 0x569ab4u: goto label_569ab4;
        case 0x569ab8u: goto label_569ab8;
        case 0x569abcu: goto label_569abc;
        case 0x569ac0u: goto label_569ac0;
        case 0x569ac4u: goto label_569ac4;
        case 0x569ac8u: goto label_569ac8;
        case 0x569accu: goto label_569acc;
        case 0x569ad0u: goto label_569ad0;
        case 0x569ad4u: goto label_569ad4;
        case 0x569ad8u: goto label_569ad8;
        case 0x569adcu: goto label_569adc;
        default: break;
    }

    ctx->pc = 0x5695d0u;

label_5695d0:
    // 0x5695d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5695d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5695d4:
    // 0x5695d4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x5695d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_5695d8:
    // 0x5695d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5695d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5695dc:
    // 0x5695dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5695dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5695e0:
    // 0x5695e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5695e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5695e4:
    // 0x5695e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x5695e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5695e8:
    // 0x5695e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5695e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5695ec:
    // 0x5695ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5695ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5695f0:
    // 0x5695f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x5695f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5695f4:
    // 0x5695f4: 0x3445aeec  ori         $a1, $v0, 0xAEEC
    ctx->pc = 0x5695f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44780);
label_5695f8:
    // 0x5695f8: 0xc0ee760  jal         func_3B9D80
label_5695fc:
    if (ctx->pc == 0x5695FCu) {
        ctx->pc = 0x5695FCu;
            // 0x5695fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569600u;
        goto label_569600;
    }
    ctx->pc = 0x5695F8u;
    SET_GPR_U32(ctx, 31, 0x569600u);
    ctx->pc = 0x5695FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5695F8u;
            // 0x5695fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569600u; }
        if (ctx->pc != 0x569600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569600u; }
        if (ctx->pc != 0x569600u) { return; }
    }
    ctx->pc = 0x569600u;
label_569600:
    // 0x569600: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x569600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_569604:
    // 0x569604: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x569604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_569608:
    // 0x569608: 0x24638280  addiu       $v1, $v1, -0x7D80
    ctx->pc = 0x569608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935168));
label_56960c:
    // 0x56960c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x56960cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_569610:
    // 0x569610: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x569610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_569614:
    // 0x569614: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x569614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_569618:
    // 0x569618: 0xae510060  sw          $s1, 0x60($s2)
    ctx->pc = 0x569618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 17));
label_56961c:
    // 0x56961c: 0xae500064  sw          $s0, 0x64($s2)
    ctx->pc = 0x56961cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 16));
label_569620:
    // 0x569620: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x569620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_569624:
    // 0x569624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x569624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_569628:
    // 0x569628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x569628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56962c:
    // 0x56962c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56962cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_569630:
    // 0x569630: 0x3e00008  jr          $ra
label_569634:
    if (ctx->pc == 0x569634u) {
        ctx->pc = 0x569634u;
            // 0x569634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x569638u;
        goto label_569638;
    }
    ctx->pc = 0x569630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x569634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569630u;
            // 0x569634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x569638u;
label_569638:
    // 0x569638: 0x0  nop
    ctx->pc = 0x569638u;
    // NOP
label_56963c:
    // 0x56963c: 0x0  nop
    ctx->pc = 0x56963cu;
    // NOP
label_569640:
    // 0x569640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x569640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_569644:
    // 0x569644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x569644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_569648:
    // 0x569648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x569648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56964c:
    // 0x56964c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_569650:
    // 0x569650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x569650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_569654:
    // 0x569654: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_569658:
    if (ctx->pc == 0x569658u) {
        ctx->pc = 0x569658u;
            // 0x569658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56965Cu;
        goto label_56965c;
    }
    ctx->pc = 0x569654u;
    {
        const bool branch_taken_0x569654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x569658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569654u;
            // 0x569658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569654) {
            ctx->pc = 0x5696A8u;
            goto label_5696a8;
        }
    }
    ctx->pc = 0x56965Cu;
label_56965c:
    // 0x56965c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_569660:
    // 0x569660: 0x244282b0  addiu       $v0, $v0, -0x7D50
    ctx->pc = 0x569660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935216));
label_569664:
    // 0x569664: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_569668:
    if (ctx->pc == 0x569668u) {
        ctx->pc = 0x569668u;
            // 0x569668: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x56966Cu;
        goto label_56966c;
    }
    ctx->pc = 0x569664u;
    {
        const bool branch_taken_0x569664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x569668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569664u;
            // 0x569668: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569664) {
            ctx->pc = 0x569690u;
            goto label_569690;
        }
    }
    ctx->pc = 0x56966Cu;
label_56966c:
    // 0x56966c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x56966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_569670:
    // 0x569670: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x569670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_569674:
    // 0x569674: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x569674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_569678:
    // 0x569678: 0x2484d370  addiu       $a0, $a0, -0x2C90
    ctx->pc = 0x569678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955888));
label_56967c:
    // 0x56967c: 0xc0ad6c4  jal         func_2B5B10
label_569680:
    if (ctx->pc == 0x569680u) {
        ctx->pc = 0x569680u;
            // 0x569680: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x569684u;
        goto label_569684;
    }
    ctx->pc = 0x56967Cu;
    SET_GPR_U32(ctx, 31, 0x569684u);
    ctx->pc = 0x569680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56967Cu;
            // 0x569680: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569684u; }
        if (ctx->pc != 0x569684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569684u; }
        if (ctx->pc != 0x569684u) { return; }
    }
    ctx->pc = 0x569684u;
label_569684:
    // 0x569684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x569684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_569688:
    // 0x569688: 0xc0cd2cc  jal         func_334B30
label_56968c:
    if (ctx->pc == 0x56968Cu) {
        ctx->pc = 0x56968Cu;
            // 0x56968c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569690u;
        goto label_569690;
    }
    ctx->pc = 0x569688u;
    SET_GPR_U32(ctx, 31, 0x569690u);
    ctx->pc = 0x56968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569688u;
            // 0x56968c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334B30u;
    if (runtime->hasFunction(0x334B30u)) {
        auto targetFn = runtime->lookupFunction(0x334B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569690u; }
        if (ctx->pc != 0x569690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334B30_0x334b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569690u; }
        if (ctx->pc != 0x569690u) { return; }
    }
    ctx->pc = 0x569690u;
label_569690:
    // 0x569690: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x569690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_569694:
    // 0x569694: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x569694u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_569698:
    // 0x569698: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_56969c:
    if (ctx->pc == 0x56969Cu) {
        ctx->pc = 0x56969Cu;
            // 0x56969c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5696A0u;
        goto label_5696a0;
    }
    ctx->pc = 0x569698u;
    {
        const bool branch_taken_0x569698 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x569698) {
            ctx->pc = 0x56969Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569698u;
            // 0x56969c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5696ACu;
            goto label_5696ac;
        }
    }
    ctx->pc = 0x5696A0u;
label_5696a0:
    // 0x5696a0: 0xc0400a8  jal         func_1002A0
label_5696a4:
    if (ctx->pc == 0x5696A4u) {
        ctx->pc = 0x5696A4u;
            // 0x5696a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5696A8u;
        goto label_5696a8;
    }
    ctx->pc = 0x5696A0u;
    SET_GPR_U32(ctx, 31, 0x5696A8u);
    ctx->pc = 0x5696A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5696A0u;
            // 0x5696a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5696A8u; }
        if (ctx->pc != 0x5696A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5696A8u; }
        if (ctx->pc != 0x5696A8u) { return; }
    }
    ctx->pc = 0x5696A8u;
label_5696a8:
    // 0x5696a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5696a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5696ac:
    // 0x5696ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5696acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5696b0:
    // 0x5696b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5696b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5696b4:
    // 0x5696b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5696b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5696b8:
    // 0x5696b8: 0x3e00008  jr          $ra
label_5696bc:
    if (ctx->pc == 0x5696BCu) {
        ctx->pc = 0x5696BCu;
            // 0x5696bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5696C0u;
        goto label_5696c0;
    }
    ctx->pc = 0x5696B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5696BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5696B8u;
            // 0x5696bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5696C0u;
label_5696c0:
    // 0x5696c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x5696c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_5696c4:
    // 0x5696c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5696c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5696c8:
    // 0x5696c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x5696c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_5696cc:
    // 0x5696cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x5696ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_5696d0:
    // 0x5696d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x5696d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_5696d4:
    // 0x5696d4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x5696d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5696d8:
    // 0x5696d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5696d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_5696dc:
    // 0x5696dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x5696dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_5696e0:
    // 0x5696e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5696e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5696e4:
    // 0x5696e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5696e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5696e8:
    // 0x5696e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5696e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5696ec:
    // 0x5696ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5696ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5696f0:
    // 0x5696f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5696f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5696f4:
    // 0x5696f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5696f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5696f8:
    // 0x5696f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5696f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5696fc:
    // 0x5696fc: 0x267100b0  addiu       $s1, $s3, 0xB0
    ctx->pc = 0x5696fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_569700:
    // 0x569700: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x569700u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_569704:
    // 0x569704: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x569704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_569708:
    // 0x569708: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x569708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_56970c:
    // 0x56970c: 0x8056007a  lb          $s6, 0x7A($v0)
    ctx->pc = 0x56970cu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_569710:
    // 0x569710: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x569710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_569714:
    // 0x569714: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x569714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_569718:
    // 0x569718: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x569718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_56971c:
    // 0x56971c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x56971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_569720:
    // 0x569720: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_569724:
    if (ctx->pc == 0x569724u) {
        ctx->pc = 0x569724u;
            // 0x569724: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569728u;
        goto label_569728;
    }
    ctx->pc = 0x569720u;
    {
        const bool branch_taken_0x569720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x569724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569720u;
            // 0x569724: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569720) {
            ctx->pc = 0x5697E8u;
            goto label_5697e8;
        }
    }
    ctx->pc = 0x569728u;
label_569728:
    // 0x569728: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x569728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56972c:
    // 0x56972c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x56972cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_569730:
    // 0x569730: 0x8c550e80  lw          $s5, 0xE80($v0)
    ctx->pc = 0x569730u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_569734:
    // 0x569734: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x569734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_569738:
    // 0x569738: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x569738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_56973c:
    // 0x56973c: 0x320f809  jalr        $t9
label_569740:
    if (ctx->pc == 0x569740u) {
        ctx->pc = 0x569740u;
            // 0x569740: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569744u;
        goto label_569744;
    }
    ctx->pc = 0x56973Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569744u);
        ctx->pc = 0x569740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56973Cu;
            // 0x569740: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569744u; }
            if (ctx->pc != 0x569744u) { return; }
        }
        }
    }
    ctx->pc = 0x569744u;
label_569744:
    // 0x569744: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x569744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_569748:
    // 0x569748: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x569748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_56974c:
    // 0x56974c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_569750:
    // 0x569750: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x569750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_569754:
    // 0x569754: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x569754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_569758:
    // 0x569758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x569758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_56975c:
    // 0x56975c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x56975cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_569760:
    // 0x569760: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x569760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_569764:
    // 0x569764: 0x320f809  jalr        $t9
label_569768:
    if (ctx->pc == 0x569768u) {
        ctx->pc = 0x569768u;
            // 0x569768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56976Cu;
        goto label_56976c;
    }
    ctx->pc = 0x569764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56976Cu);
        ctx->pc = 0x569768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569764u;
            // 0x569768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56976Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56976Cu; }
            if (ctx->pc != 0x56976Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56976Cu;
label_56976c:
    // 0x56976c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x56976cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_569770:
    // 0x569770: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x569770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_569774:
    // 0x569774: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x569774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_569778:
    // 0x569778: 0x245100b0  addiu       $s1, $v0, 0xB0
    ctx->pc = 0x569778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_56977c:
    // 0x56977c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x56977cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_569780:
    // 0x569780: 0x320f809  jalr        $t9
label_569784:
    if (ctx->pc == 0x569784u) {
        ctx->pc = 0x569784u;
            // 0x569784: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569788u;
        goto label_569788;
    }
    ctx->pc = 0x569780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569788u);
        ctx->pc = 0x569784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569780u;
            // 0x569784: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569788u; }
            if (ctx->pc != 0x569788u) { return; }
        }
        }
    }
    ctx->pc = 0x569788u;
label_569788:
    // 0x569788: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x569788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_56978c:
    // 0x56978c: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x56978cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_569790:
    // 0x569790: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_569794:
    if (ctx->pc == 0x569794u) {
        ctx->pc = 0x569794u;
            // 0x569794: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569798u;
        goto label_569798;
    }
    ctx->pc = 0x569790u;
    {
        const bool branch_taken_0x569790 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x569794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569790u;
            // 0x569794: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569790) {
            ctx->pc = 0x5697A8u;
            goto label_5697a8;
        }
    }
    ctx->pc = 0x569798u;
label_569798:
    // 0x569798: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x569798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_56979c:
    // 0x56979c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_5697a0:
    if (ctx->pc == 0x5697A0u) {
        ctx->pc = 0x5697A4u;
        goto label_5697a4;
    }
    ctx->pc = 0x56979Cu;
    {
        const bool branch_taken_0x56979c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x56979c) {
            ctx->pc = 0x5697A8u;
            goto label_5697a8;
        }
    }
    ctx->pc = 0x5697A4u;
label_5697a4:
    // 0x5697a4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x5697a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5697a8:
    // 0x5697a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_5697ac:
    if (ctx->pc == 0x5697ACu) {
        ctx->pc = 0x5697B0u;
        goto label_5697b0;
    }
    ctx->pc = 0x5697A8u;
    {
        const bool branch_taken_0x5697a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5697a8) {
            ctx->pc = 0x5697C8u;
            goto label_5697c8;
        }
    }
    ctx->pc = 0x5697B0u;
label_5697b0:
    // 0x5697b0: 0xc075eb4  jal         func_1D7AD0
label_5697b4:
    if (ctx->pc == 0x5697B4u) {
        ctx->pc = 0x5697B4u;
            // 0x5697b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5697B8u;
        goto label_5697b8;
    }
    ctx->pc = 0x5697B0u;
    SET_GPR_U32(ctx, 31, 0x5697B8u);
    ctx->pc = 0x5697B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5697B0u;
            // 0x5697b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5697B8u; }
        if (ctx->pc != 0x5697B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5697B8u; }
        if (ctx->pc != 0x5697B8u) { return; }
    }
    ctx->pc = 0x5697B8u;
label_5697b8:
    // 0x5697b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_5697bc:
    if (ctx->pc == 0x5697BCu) {
        ctx->pc = 0x5697C0u;
        goto label_5697c0;
    }
    ctx->pc = 0x5697B8u;
    {
        const bool branch_taken_0x5697b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5697b8) {
            ctx->pc = 0x5697C8u;
            goto label_5697c8;
        }
    }
    ctx->pc = 0x5697C0u;
label_5697c0:
    // 0x5697c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x5697c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5697c4:
    // 0x5697c4: 0x0  nop
    ctx->pc = 0x5697c4u;
    // NOP
label_5697c8:
    // 0x5697c8: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_5697cc:
    if (ctx->pc == 0x5697CCu) {
        ctx->pc = 0x5697D0u;
        goto label_5697d0;
    }
    ctx->pc = 0x5697C8u;
    {
        const bool branch_taken_0x5697c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x5697c8) {
            ctx->pc = 0x5697E0u;
            goto label_5697e0;
        }
    }
    ctx->pc = 0x5697D0u;
label_5697d0:
    // 0x5697d0: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x5697d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_5697d4:
    // 0x5697d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x5697d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5697d8:
    // 0x5697d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_5697dc:
    if (ctx->pc == 0x5697DCu) {
        ctx->pc = 0x5697E0u;
        goto label_5697e0;
    }
    ctx->pc = 0x5697D8u;
    {
        const bool branch_taken_0x5697d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5697d8) {
            ctx->pc = 0x5697E8u;
            goto label_5697e8;
        }
    }
    ctx->pc = 0x5697E0u;
label_5697e0:
    // 0x5697e0: 0x8e120d98  lw          $s2, 0xD98($s0)
    ctx->pc = 0x5697e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_5697e4:
    // 0x5697e4: 0x0  nop
    ctx->pc = 0x5697e4u;
    // NOP
label_5697e8:
    // 0x5697e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x5697e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_5697ec:
    // 0x5697ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5697ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5697f0:
    // 0x5697f0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_5697f4:
    if (ctx->pc == 0x5697F4u) {
        ctx->pc = 0x5697F8u;
        goto label_5697f8;
    }
    ctx->pc = 0x5697F0u;
    {
        const bool branch_taken_0x5697f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5697f0) {
            ctx->pc = 0x569820u;
            goto label_569820;
        }
    }
    ctx->pc = 0x5697F8u;
label_5697f8:
    // 0x5697f8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x5697f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_5697fc:
    // 0x5697fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5697fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_569800:
    // 0x569800: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x569800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_569804:
    // 0x569804: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x569804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_569808:
    // 0x569808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x569808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_56980c:
    // 0x56980c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x56980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_569810:
    // 0x569810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x569810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_569814:
    // 0x569814: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x569814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_569818:
    // 0x569818: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x569818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
label_56981c:
    // 0x56981c: 0x0  nop
    ctx->pc = 0x56981cu;
    // NOP
label_569820:
    // 0x569820: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x569820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_569824:
    // 0x569824: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x569824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_569828:
    // 0x569828: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_56982c:
    if (ctx->pc == 0x56982Cu) {
        ctx->pc = 0x569830u;
        goto label_569830;
    }
    ctx->pc = 0x569828u;
    {
        const bool branch_taken_0x569828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x569828) {
            ctx->pc = 0x569838u;
            goto label_569838;
        }
    }
    ctx->pc = 0x569830u;
label_569830:
    // 0x569830: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x569830u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_569834:
    // 0x569834: 0x0  nop
    ctx->pc = 0x569834u;
    // NOP
label_569838:
    // 0x569838: 0x26f20001  addiu       $s2, $s7, 0x1
    ctx->pc = 0x569838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_56983c:
    // 0x56983c: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x56983cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_569840:
    // 0x569840: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_569844:
    if (ctx->pc == 0x569844u) {
        ctx->pc = 0x569844u;
            // 0x569844: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x569848u;
        goto label_569848;
    }
    ctx->pc = 0x569840u;
    {
        const bool branch_taken_0x569840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x569844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569840u;
            // 0x569844: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569840) {
            ctx->pc = 0x569710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_569710;
        }
    }
    ctx->pc = 0x569848u;
label_569848:
    // 0x569848: 0x53c00006  beql        $fp, $zero, . + 4 + (0x6 << 2)
label_56984c:
    if (ctx->pc == 0x56984Cu) {
        ctx->pc = 0x56984Cu;
            // 0x56984c: 0x267100b0  addiu       $s1, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->pc = 0x569850u;
        goto label_569850;
    }
    ctx->pc = 0x569848u;
    {
        const bool branch_taken_0x569848 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x569848) {
            ctx->pc = 0x56984Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569848u;
            // 0x56984c: 0x267100b0  addiu       $s1, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569864u;
            goto label_569864;
        }
    }
    ctx->pc = 0x569850u;
label_569850:
    // 0x569850: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x569850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_569854:
    // 0x569854: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x569854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_569858:
    // 0x569858: 0x320f809  jalr        $t9
label_56985c:
    if (ctx->pc == 0x56985Cu) {
        ctx->pc = 0x56985Cu;
            // 0x56985c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569860u;
        goto label_569860;
    }
    ctx->pc = 0x569858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569860u);
        ctx->pc = 0x56985Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569858u;
            // 0x56985c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569860u; }
            if (ctx->pc != 0x569860u) { return; }
        }
        }
    }
    ctx->pc = 0x569860u;
label_569860:
    // 0x569860: 0x267100b0  addiu       $s1, $s3, 0xB0
    ctx->pc = 0x569860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_569864:
    // 0x569864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x569864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_569868:
    // 0x569868: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x569868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56986c:
    // 0x56986c: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x56986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_569870:
    // 0x569870: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x569870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_569874:
    // 0x569874: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x569874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_569878:
    // 0x569878: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_56987c:
    if (ctx->pc == 0x56987Cu) {
        ctx->pc = 0x56987Cu;
            // 0x56987c: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569880u;
        goto label_569880;
    }
    ctx->pc = 0x569878u;
    {
        const bool branch_taken_0x569878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x56987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569878u;
            // 0x56987c: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569878) {
            ctx->pc = 0x569930u;
            goto label_569930;
        }
    }
    ctx->pc = 0x569880u;
label_569880:
    // 0x569880: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x569880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_569884:
    // 0x569884: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x569884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_569888:
    // 0x569888: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x569888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_56988c:
    // 0x56988c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x56988cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_569890:
    // 0x569890: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x569890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_569894:
    // 0x569894: 0x320f809  jalr        $t9
label_569898:
    if (ctx->pc == 0x569898u) {
        ctx->pc = 0x569898u;
            // 0x569898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56989Cu;
        goto label_56989c;
    }
    ctx->pc = 0x569894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56989Cu);
        ctx->pc = 0x569898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569894u;
            // 0x569898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56989Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56989Cu; }
            if (ctx->pc != 0x56989Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56989Cu;
label_56989c:
    // 0x56989c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x56989cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5698a0:
    // 0x5698a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x5698a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_5698a4:
    // 0x5698a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5698a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5698a8:
    // 0x5698a8: 0x245100b0  addiu       $s1, $v0, 0xB0
    ctx->pc = 0x5698a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_5698ac:
    // 0x5698ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5698acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5698b0:
    // 0x5698b0: 0x320f809  jalr        $t9
label_5698b4:
    if (ctx->pc == 0x5698B4u) {
        ctx->pc = 0x5698B4u;
            // 0x5698b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5698B8u;
        goto label_5698b8;
    }
    ctx->pc = 0x5698B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5698B8u);
        ctx->pc = 0x5698B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5698B0u;
            // 0x5698b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5698B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5698B8u; }
            if (ctx->pc != 0x5698B8u) { return; }
        }
        }
    }
    ctx->pc = 0x5698B8u;
label_5698b8:
    // 0x5698b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x5698b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5698bc:
    // 0x5698bc: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x5698bcu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_5698c0:
    // 0x5698c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5698c4:
    // 0x5698c4: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x5698c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_5698c8:
    // 0x5698c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5698c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5698cc:
    // 0x5698cc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x5698ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5698d0:
    // 0x5698d0: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x5698d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_5698d4:
    // 0x5698d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_5698d8:
    if (ctx->pc == 0x5698D8u) {
        ctx->pc = 0x5698D8u;
            // 0x5698d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5698DCu;
        goto label_5698dc;
    }
    ctx->pc = 0x5698D4u;
    {
        const bool branch_taken_0x5698d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5698D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5698D4u;
            // 0x5698d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5698d4) {
            ctx->pc = 0x5698F0u;
            goto label_5698f0;
        }
    }
    ctx->pc = 0x5698DCu;
label_5698dc:
    // 0x5698dc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x5698dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_5698e0:
    // 0x5698e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5698e4:
    if (ctx->pc == 0x5698E4u) {
        ctx->pc = 0x5698E8u;
        goto label_5698e8;
    }
    ctx->pc = 0x5698E0u;
    {
        const bool branch_taken_0x5698e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5698e0) {
            ctx->pc = 0x5698F0u;
            goto label_5698f0;
        }
    }
    ctx->pc = 0x5698E8u;
label_5698e8:
    // 0x5698e8: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x5698e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_5698ec:
    // 0x5698ec: 0x0  nop
    ctx->pc = 0x5698ecu;
    // NOP
label_5698f0:
    // 0x5698f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_5698f4:
    if (ctx->pc == 0x5698F4u) {
        ctx->pc = 0x5698F8u;
        goto label_5698f8;
    }
    ctx->pc = 0x5698F0u;
    {
        const bool branch_taken_0x5698f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5698f0) {
            ctx->pc = 0x569910u;
            goto label_569910;
        }
    }
    ctx->pc = 0x5698F8u;
label_5698f8:
    // 0x5698f8: 0xc075eb4  jal         func_1D7AD0
label_5698fc:
    if (ctx->pc == 0x5698FCu) {
        ctx->pc = 0x5698FCu;
            // 0x5698fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569900u;
        goto label_569900;
    }
    ctx->pc = 0x5698F8u;
    SET_GPR_U32(ctx, 31, 0x569900u);
    ctx->pc = 0x5698FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5698F8u;
            // 0x5698fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569900u; }
        if (ctx->pc != 0x569900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569900u; }
        if (ctx->pc != 0x569900u) { return; }
    }
    ctx->pc = 0x569900u;
label_569900:
    // 0x569900: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_569904:
    if (ctx->pc == 0x569904u) {
        ctx->pc = 0x569908u;
        goto label_569908;
    }
    ctx->pc = 0x569900u;
    {
        const bool branch_taken_0x569900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x569900) {
            ctx->pc = 0x569910u;
            goto label_569910;
        }
    }
    ctx->pc = 0x569908u;
label_569908:
    // 0x569908: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x569908u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56990c:
    // 0x56990c: 0x0  nop
    ctx->pc = 0x56990cu;
    // NOP
label_569910:
    // 0x569910: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_569914:
    if (ctx->pc == 0x569914u) {
        ctx->pc = 0x569918u;
        goto label_569918;
    }
    ctx->pc = 0x569910u;
    {
        const bool branch_taken_0x569910 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x569910) {
            ctx->pc = 0x569928u;
            goto label_569928;
        }
    }
    ctx->pc = 0x569918u;
label_569918:
    // 0x569918: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x569918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_56991c:
    // 0x56991c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x56991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_569920:
    // 0x569920: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_569924:
    if (ctx->pc == 0x569924u) {
        ctx->pc = 0x569928u;
        goto label_569928;
    }
    ctx->pc = 0x569920u;
    {
        const bool branch_taken_0x569920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x569920) {
            ctx->pc = 0x569930u;
            goto label_569930;
        }
    }
    ctx->pc = 0x569928u;
label_569928:
    // 0x569928: 0x8e120d98  lw          $s2, 0xD98($s0)
    ctx->pc = 0x569928u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_56992c:
    // 0x56992c: 0x0  nop
    ctx->pc = 0x56992cu;
    // NOP
label_569930:
    // 0x569930: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x569930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_569934:
    // 0x569934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x569934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_569938:
    // 0x569938: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_56993c:
    if (ctx->pc == 0x56993Cu) {
        ctx->pc = 0x569940u;
        goto label_569940;
    }
    ctx->pc = 0x569938u;
    {
        const bool branch_taken_0x569938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x569938) {
            ctx->pc = 0x569988u;
            goto label_569988;
        }
    }
    ctx->pc = 0x569940u;
label_569940:
    // 0x569940: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x569940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_569944:
    // 0x569944: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x569944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_569948:
    // 0x569948: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x569948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56994c:
    // 0x56994c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x56994cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_569950:
    // 0x569950: 0x320f809  jalr        $t9
label_569954:
    if (ctx->pc == 0x569954u) {
        ctx->pc = 0x569954u;
            // 0x569954: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569958u;
        goto label_569958;
    }
    ctx->pc = 0x569950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569958u);
        ctx->pc = 0x569954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569950u;
            // 0x569954: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569958u; }
            if (ctx->pc != 0x569958u) { return; }
        }
        }
    }
    ctx->pc = 0x569958u;
label_569958:
    // 0x569958: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x569958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_56995c:
    // 0x56995c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x56995cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_569960:
    // 0x569960: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x569960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_569964:
    // 0x569964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x569964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_569968:
    // 0x569968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x569968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_56996c:
    // 0x56996c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x56996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_569970:
    // 0x569970: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x569970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_569974:
    // 0x569974: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x569974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_569978:
    // 0x569978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x569978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_56997c:
    // 0x56997c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x56997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_569980:
    // 0x569980: 0x320f809  jalr        $t9
label_569984:
    if (ctx->pc == 0x569984u) {
        ctx->pc = 0x569984u;
            // 0x569984: 0x244600b8  addiu       $a2, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->pc = 0x569988u;
        goto label_569988;
    }
    ctx->pc = 0x569980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569988u);
        ctx->pc = 0x569984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569980u;
            // 0x569984: 0x244600b8  addiu       $a2, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569988u; }
            if (ctx->pc != 0x569988u) { return; }
        }
        }
    }
    ctx->pc = 0x569988u;
label_569988:
    // 0x569988: 0x26f20001  addiu       $s2, $s7, 0x1
    ctx->pc = 0x569988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_56998c:
    // 0x56998c: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x56998cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_569990:
    // 0x569990: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_569994:
    if (ctx->pc == 0x569994u) {
        ctx->pc = 0x569994u;
            // 0x569994: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x569998u;
        goto label_569998;
    }
    ctx->pc = 0x569990u;
    {
        const bool branch_taken_0x569990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x569994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569990u;
            // 0x569994: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569990) {
            ctx->pc = 0x569868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_569868;
        }
    }
    ctx->pc = 0x569998u;
label_569998:
    // 0x569998: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x569998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56999c:
    // 0x56999c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x56999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5699a0:
    // 0x5699a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5699a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5699a4:
    // 0x5699a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5699a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5699a8:
    // 0x5699a8: 0x320f809  jalr        $t9
label_5699ac:
    if (ctx->pc == 0x5699ACu) {
        ctx->pc = 0x5699ACu;
            // 0x5699ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5699B0u;
        goto label_5699b0;
    }
    ctx->pc = 0x5699A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5699B0u);
        ctx->pc = 0x5699ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5699A8u;
            // 0x5699ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5699B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5699B0u; }
            if (ctx->pc != 0x5699B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5699B0u;
label_5699b0:
    // 0x5699b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x5699b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_5699b4:
    // 0x5699b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x5699b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5699b8:
    // 0x5699b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5699b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5699bc:
    // 0x5699bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5699bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5699c0:
    // 0x5699c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5699c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5699c4:
    // 0x5699c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5699c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5699c8:
    // 0x5699c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5699c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5699cc:
    // 0x5699cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5699ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5699d0:
    // 0x5699d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5699d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5699d4:
    // 0x5699d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5699d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5699d8:
    // 0x5699d8: 0x3e00008  jr          $ra
label_5699dc:
    if (ctx->pc == 0x5699DCu) {
        ctx->pc = 0x5699DCu;
            // 0x5699dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x5699E0u;
        goto label_5699e0;
    }
    ctx->pc = 0x5699D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5699DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5699D8u;
            // 0x5699dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5699E0u;
label_5699e0:
    // 0x5699e0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5699e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5699e4:
    // 0x5699e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5699e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5699e8:
    // 0x5699e8: 0x8c67d130  lw          $a3, -0x2ED0($v1)
    ctx->pc = 0x5699e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_5699ec:
    // 0x5699ec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5699ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5699f0:
    // 0x5699f0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x5699f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5699f4:
    // 0x5699f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5699f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5699f8:
    // 0x5699f8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5699f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5699fc:
    // 0x5699fc: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x5699fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_569a00:
    // 0x569a00: 0x8065007a  lb          $a1, 0x7A($v1)
    ctx->pc = 0x569a00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_569a04:
    // 0x569a04: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x569a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_569a08:
    // 0x569a08: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x569a08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
label_569a0c:
    // 0x569a0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x569a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_569a10:
    // 0x569a10: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x569a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_569a14:
    // 0x569a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x569a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_569a18:
    // 0x569a18: 0x8d2a89d0  lw          $t2, -0x7630($t1)
    ctx->pc = 0x569a18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294937040)));
label_569a1c:
    // 0x569a1c: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x569a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
label_569a20:
    // 0x569a20: 0x1543000d  bne         $t2, $v1, . + 4 + (0xD << 2)
label_569a24:
    if (ctx->pc == 0x569A24u) {
        ctx->pc = 0x569A28u;
        goto label_569a28;
    }
    ctx->pc = 0x569A20u;
    {
        const bool branch_taken_0x569a20 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x569a20) {
            ctx->pc = 0x569A58u;
            goto label_569a58;
        }
    }
    ctx->pc = 0x569A28u;
label_569a28:
    // 0x569a28: 0xe85021  addu        $t2, $a3, $t0
    ctx->pc = 0x569a28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_569a2c:
    // 0x569a2c: 0x914a0129  lbu         $t2, 0x129($t2)
    ctx->pc = 0x569a2cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 297)));
label_569a30:
    // 0x569a30: 0x15400009  bnez        $t2, . + 4 + (0x9 << 2)
label_569a34:
    if (ctx->pc == 0x569A34u) {
        ctx->pc = 0x569A38u;
        goto label_569a38;
    }
    ctx->pc = 0x569A30u;
    {
        const bool branch_taken_0x569a30 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x569a30) {
            ctx->pc = 0x569A58u;
            goto label_569a58;
        }
    }
    ctx->pc = 0x569A38u;
label_569a38:
    // 0x569a38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x569a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_569a3c:
    // 0x569a3c: 0xe85021  addu        $t2, $a3, $t0
    ctx->pc = 0x569a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_569a40:
    // 0x569a40: 0x914a0129  lbu         $t2, 0x129($t2)
    ctx->pc = 0x569a40u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 297)));
label_569a44:
    // 0x569a44: 0x0  nop
    ctx->pc = 0x569a44u;
    // NOP
label_569a48:
    // 0x569a48: 0x0  nop
    ctx->pc = 0x569a48u;
    // NOP
label_569a4c:
    // 0x569a4c: 0x1140fffa  beqz        $t2, . + 4 + (-0x6 << 2)
label_569a50:
    if (ctx->pc == 0x569A50u) {
        ctx->pc = 0x569A54u;
        goto label_569a54;
    }
    ctx->pc = 0x569A4Cu;
    {
        const bool branch_taken_0x569a4c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x569a4c) {
            ctx->pc = 0x569A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_569a38;
        }
    }
    ctx->pc = 0x569A54u;
label_569a54:
    // 0x569a54: 0x0  nop
    ctx->pc = 0x569a54u;
    // NOP
label_569a58:
    // 0x569a58: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x569a58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_569a5c:
    // 0x569a5c: 0x914a00b4  lbu         $t2, 0xB4($t2)
    ctx->pc = 0x569a5cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 180)));
label_569a60:
    // 0x569a60: 0x394a0003  xori        $t2, $t2, 0x3
    ctx->pc = 0x569a60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)3);
label_569a64:
    // 0x569a64: 0x2d4a0001  sltiu       $t2, $t2, 0x1
    ctx->pc = 0x569a64u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_569a68:
    // 0x569a68: 0x5420004  bltzl       $t2, . + 4 + (0x4 << 2)
label_569a6c:
    if (ctx->pc == 0x569A6Cu) {
        ctx->pc = 0x569A6Cu;
            // 0x569a6c: 0xa5842  srl         $t3, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->pc = 0x569A70u;
        goto label_569a70;
    }
    ctx->pc = 0x569A68u;
    {
        const bool branch_taken_0x569a68 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x569a68) {
            ctx->pc = 0x569A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569A68u;
            // 0x569a6c: 0xa5842  srl         $t3, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569A7Cu;
            goto label_569a7c;
        }
    }
    ctx->pc = 0x569A70u;
label_569a70:
    // 0x569a70: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x569a70u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_569a74:
    // 0x569a74: 0x10000007  b           . + 4 + (0x7 << 2)
label_569a78:
    if (ctx->pc == 0x569A78u) {
        ctx->pc = 0x569A78u;
            // 0x569a78: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x569A7Cu;
        goto label_569a7c;
    }
    ctx->pc = 0x569A74u;
    {
        const bool branch_taken_0x569a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x569A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569A74u;
            // 0x569a78: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569a74) {
            ctx->pc = 0x569A94u;
            goto label_569a94;
        }
    }
    ctx->pc = 0x569A7Cu;
label_569a7c:
    // 0x569a7c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x569a7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_569a80:
    // 0x569a80: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x569a80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_569a84:
    // 0x569a84: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x569a84u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_569a88:
    // 0x569a88: 0x0  nop
    ctx->pc = 0x569a88u;
    // NOP
label_569a8c:
    // 0x569a8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x569a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_569a90:
    // 0x569a90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x569a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_569a94:
    // 0x569a94: 0x85040  sll         $t2, $t0, 1
    ctx->pc = 0x569a94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_569a98:
    // 0x569a98: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x569a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_569a9c:
    // 0x569a9c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x569a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_569aa0:
    // 0x569aa0: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x569aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_569aa4:
    // 0x569aa4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x569aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_569aa8:
    // 0x569aa8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x569aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_569aac:
    // 0x569aac: 0x1465821  addu        $t3, $t2, $a2
    ctx->pc = 0x569aacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_569ab0:
    // 0x569ab0: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x569ab0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_569ab4:
    // 0x569ab4: 0x105502b  sltu        $t2, $t0, $a1
    ctx->pc = 0x569ab4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_569ab8:
    // 0x569ab8: 0xc56100e8  lwc1        $f1, 0xE8($t3)
    ctx->pc = 0x569ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_569abc:
    // 0x569abc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x569abcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_569ac0:
    // 0x569ac0: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x569ac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_569ac4:
    // 0x569ac4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
label_569ac8:
    if (ctx->pc == 0x569AC8u) {
        ctx->pc = 0x569AC8u;
            // 0x569ac8: 0xe56100e8  swc1        $f1, 0xE8($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 232), bits); }
        ctx->pc = 0x569ACCu;
        goto label_569acc;
    }
    ctx->pc = 0x569AC4u;
    {
        const bool branch_taken_0x569ac4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x569AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569AC4u;
            // 0x569ac8: 0xe56100e8  swc1        $f1, 0xE8($t3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x569ac4) {
            ctx->pc = 0x569A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_569a18;
        }
    }
    ctx->pc = 0x569ACCu;
label_569acc:
    // 0x569acc: 0x3e00008  jr          $ra
label_569ad0:
    if (ctx->pc == 0x569AD0u) {
        ctx->pc = 0x569AD4u;
        goto label_569ad4;
    }
    ctx->pc = 0x569ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x569AD4u;
label_569ad4:
    // 0x569ad4: 0x0  nop
    ctx->pc = 0x569ad4u;
    // NOP
label_569ad8:
    // 0x569ad8: 0x0  nop
    ctx->pc = 0x569ad8u;
    // NOP
label_569adc:
    // 0x569adc: 0x0  nop
    ctx->pc = 0x569adcu;
    // NOP
}
