#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003645C0
// Address: 0x3645c0 - 0x364bf0
void sub_003645C0_0x3645c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003645C0_0x3645c0");
#endif

    switch (ctx->pc) {
        case 0x3645c0u: goto label_3645c0;
        case 0x3645c4u: goto label_3645c4;
        case 0x3645c8u: goto label_3645c8;
        case 0x3645ccu: goto label_3645cc;
        case 0x3645d0u: goto label_3645d0;
        case 0x3645d4u: goto label_3645d4;
        case 0x3645d8u: goto label_3645d8;
        case 0x3645dcu: goto label_3645dc;
        case 0x3645e0u: goto label_3645e0;
        case 0x3645e4u: goto label_3645e4;
        case 0x3645e8u: goto label_3645e8;
        case 0x3645ecu: goto label_3645ec;
        case 0x3645f0u: goto label_3645f0;
        case 0x3645f4u: goto label_3645f4;
        case 0x3645f8u: goto label_3645f8;
        case 0x3645fcu: goto label_3645fc;
        case 0x364600u: goto label_364600;
        case 0x364604u: goto label_364604;
        case 0x364608u: goto label_364608;
        case 0x36460cu: goto label_36460c;
        case 0x364610u: goto label_364610;
        case 0x364614u: goto label_364614;
        case 0x364618u: goto label_364618;
        case 0x36461cu: goto label_36461c;
        case 0x364620u: goto label_364620;
        case 0x364624u: goto label_364624;
        case 0x364628u: goto label_364628;
        case 0x36462cu: goto label_36462c;
        case 0x364630u: goto label_364630;
        case 0x364634u: goto label_364634;
        case 0x364638u: goto label_364638;
        case 0x36463cu: goto label_36463c;
        case 0x364640u: goto label_364640;
        case 0x364644u: goto label_364644;
        case 0x364648u: goto label_364648;
        case 0x36464cu: goto label_36464c;
        case 0x364650u: goto label_364650;
        case 0x364654u: goto label_364654;
        case 0x364658u: goto label_364658;
        case 0x36465cu: goto label_36465c;
        case 0x364660u: goto label_364660;
        case 0x364664u: goto label_364664;
        case 0x364668u: goto label_364668;
        case 0x36466cu: goto label_36466c;
        case 0x364670u: goto label_364670;
        case 0x364674u: goto label_364674;
        case 0x364678u: goto label_364678;
        case 0x36467cu: goto label_36467c;
        case 0x364680u: goto label_364680;
        case 0x364684u: goto label_364684;
        case 0x364688u: goto label_364688;
        case 0x36468cu: goto label_36468c;
        case 0x364690u: goto label_364690;
        case 0x364694u: goto label_364694;
        case 0x364698u: goto label_364698;
        case 0x36469cu: goto label_36469c;
        case 0x3646a0u: goto label_3646a0;
        case 0x3646a4u: goto label_3646a4;
        case 0x3646a8u: goto label_3646a8;
        case 0x3646acu: goto label_3646ac;
        case 0x3646b0u: goto label_3646b0;
        case 0x3646b4u: goto label_3646b4;
        case 0x3646b8u: goto label_3646b8;
        case 0x3646bcu: goto label_3646bc;
        case 0x3646c0u: goto label_3646c0;
        case 0x3646c4u: goto label_3646c4;
        case 0x3646c8u: goto label_3646c8;
        case 0x3646ccu: goto label_3646cc;
        case 0x3646d0u: goto label_3646d0;
        case 0x3646d4u: goto label_3646d4;
        case 0x3646d8u: goto label_3646d8;
        case 0x3646dcu: goto label_3646dc;
        case 0x3646e0u: goto label_3646e0;
        case 0x3646e4u: goto label_3646e4;
        case 0x3646e8u: goto label_3646e8;
        case 0x3646ecu: goto label_3646ec;
        case 0x3646f0u: goto label_3646f0;
        case 0x3646f4u: goto label_3646f4;
        case 0x3646f8u: goto label_3646f8;
        case 0x3646fcu: goto label_3646fc;
        case 0x364700u: goto label_364700;
        case 0x364704u: goto label_364704;
        case 0x364708u: goto label_364708;
        case 0x36470cu: goto label_36470c;
        case 0x364710u: goto label_364710;
        case 0x364714u: goto label_364714;
        case 0x364718u: goto label_364718;
        case 0x36471cu: goto label_36471c;
        case 0x364720u: goto label_364720;
        case 0x364724u: goto label_364724;
        case 0x364728u: goto label_364728;
        case 0x36472cu: goto label_36472c;
        case 0x364730u: goto label_364730;
        case 0x364734u: goto label_364734;
        case 0x364738u: goto label_364738;
        case 0x36473cu: goto label_36473c;
        case 0x364740u: goto label_364740;
        case 0x364744u: goto label_364744;
        case 0x364748u: goto label_364748;
        case 0x36474cu: goto label_36474c;
        case 0x364750u: goto label_364750;
        case 0x364754u: goto label_364754;
        case 0x364758u: goto label_364758;
        case 0x36475cu: goto label_36475c;
        case 0x364760u: goto label_364760;
        case 0x364764u: goto label_364764;
        case 0x364768u: goto label_364768;
        case 0x36476cu: goto label_36476c;
        case 0x364770u: goto label_364770;
        case 0x364774u: goto label_364774;
        case 0x364778u: goto label_364778;
        case 0x36477cu: goto label_36477c;
        case 0x364780u: goto label_364780;
        case 0x364784u: goto label_364784;
        case 0x364788u: goto label_364788;
        case 0x36478cu: goto label_36478c;
        case 0x364790u: goto label_364790;
        case 0x364794u: goto label_364794;
        case 0x364798u: goto label_364798;
        case 0x36479cu: goto label_36479c;
        case 0x3647a0u: goto label_3647a0;
        case 0x3647a4u: goto label_3647a4;
        case 0x3647a8u: goto label_3647a8;
        case 0x3647acu: goto label_3647ac;
        case 0x3647b0u: goto label_3647b0;
        case 0x3647b4u: goto label_3647b4;
        case 0x3647b8u: goto label_3647b8;
        case 0x3647bcu: goto label_3647bc;
        case 0x3647c0u: goto label_3647c0;
        case 0x3647c4u: goto label_3647c4;
        case 0x3647c8u: goto label_3647c8;
        case 0x3647ccu: goto label_3647cc;
        case 0x3647d0u: goto label_3647d0;
        case 0x3647d4u: goto label_3647d4;
        case 0x3647d8u: goto label_3647d8;
        case 0x3647dcu: goto label_3647dc;
        case 0x3647e0u: goto label_3647e0;
        case 0x3647e4u: goto label_3647e4;
        case 0x3647e8u: goto label_3647e8;
        case 0x3647ecu: goto label_3647ec;
        case 0x3647f0u: goto label_3647f0;
        case 0x3647f4u: goto label_3647f4;
        case 0x3647f8u: goto label_3647f8;
        case 0x3647fcu: goto label_3647fc;
        case 0x364800u: goto label_364800;
        case 0x364804u: goto label_364804;
        case 0x364808u: goto label_364808;
        case 0x36480cu: goto label_36480c;
        case 0x364810u: goto label_364810;
        case 0x364814u: goto label_364814;
        case 0x364818u: goto label_364818;
        case 0x36481cu: goto label_36481c;
        case 0x364820u: goto label_364820;
        case 0x364824u: goto label_364824;
        case 0x364828u: goto label_364828;
        case 0x36482cu: goto label_36482c;
        case 0x364830u: goto label_364830;
        case 0x364834u: goto label_364834;
        case 0x364838u: goto label_364838;
        case 0x36483cu: goto label_36483c;
        case 0x364840u: goto label_364840;
        case 0x364844u: goto label_364844;
        case 0x364848u: goto label_364848;
        case 0x36484cu: goto label_36484c;
        case 0x364850u: goto label_364850;
        case 0x364854u: goto label_364854;
        case 0x364858u: goto label_364858;
        case 0x36485cu: goto label_36485c;
        case 0x364860u: goto label_364860;
        case 0x364864u: goto label_364864;
        case 0x364868u: goto label_364868;
        case 0x36486cu: goto label_36486c;
        case 0x364870u: goto label_364870;
        case 0x364874u: goto label_364874;
        case 0x364878u: goto label_364878;
        case 0x36487cu: goto label_36487c;
        case 0x364880u: goto label_364880;
        case 0x364884u: goto label_364884;
        case 0x364888u: goto label_364888;
        case 0x36488cu: goto label_36488c;
        case 0x364890u: goto label_364890;
        case 0x364894u: goto label_364894;
        case 0x364898u: goto label_364898;
        case 0x36489cu: goto label_36489c;
        case 0x3648a0u: goto label_3648a0;
        case 0x3648a4u: goto label_3648a4;
        case 0x3648a8u: goto label_3648a8;
        case 0x3648acu: goto label_3648ac;
        case 0x3648b0u: goto label_3648b0;
        case 0x3648b4u: goto label_3648b4;
        case 0x3648b8u: goto label_3648b8;
        case 0x3648bcu: goto label_3648bc;
        case 0x3648c0u: goto label_3648c0;
        case 0x3648c4u: goto label_3648c4;
        case 0x3648c8u: goto label_3648c8;
        case 0x3648ccu: goto label_3648cc;
        case 0x3648d0u: goto label_3648d0;
        case 0x3648d4u: goto label_3648d4;
        case 0x3648d8u: goto label_3648d8;
        case 0x3648dcu: goto label_3648dc;
        case 0x3648e0u: goto label_3648e0;
        case 0x3648e4u: goto label_3648e4;
        case 0x3648e8u: goto label_3648e8;
        case 0x3648ecu: goto label_3648ec;
        case 0x3648f0u: goto label_3648f0;
        case 0x3648f4u: goto label_3648f4;
        case 0x3648f8u: goto label_3648f8;
        case 0x3648fcu: goto label_3648fc;
        case 0x364900u: goto label_364900;
        case 0x364904u: goto label_364904;
        case 0x364908u: goto label_364908;
        case 0x36490cu: goto label_36490c;
        case 0x364910u: goto label_364910;
        case 0x364914u: goto label_364914;
        case 0x364918u: goto label_364918;
        case 0x36491cu: goto label_36491c;
        case 0x364920u: goto label_364920;
        case 0x364924u: goto label_364924;
        case 0x364928u: goto label_364928;
        case 0x36492cu: goto label_36492c;
        case 0x364930u: goto label_364930;
        case 0x364934u: goto label_364934;
        case 0x364938u: goto label_364938;
        case 0x36493cu: goto label_36493c;
        case 0x364940u: goto label_364940;
        case 0x364944u: goto label_364944;
        case 0x364948u: goto label_364948;
        case 0x36494cu: goto label_36494c;
        case 0x364950u: goto label_364950;
        case 0x364954u: goto label_364954;
        case 0x364958u: goto label_364958;
        case 0x36495cu: goto label_36495c;
        case 0x364960u: goto label_364960;
        case 0x364964u: goto label_364964;
        case 0x364968u: goto label_364968;
        case 0x36496cu: goto label_36496c;
        case 0x364970u: goto label_364970;
        case 0x364974u: goto label_364974;
        case 0x364978u: goto label_364978;
        case 0x36497cu: goto label_36497c;
        case 0x364980u: goto label_364980;
        case 0x364984u: goto label_364984;
        case 0x364988u: goto label_364988;
        case 0x36498cu: goto label_36498c;
        case 0x364990u: goto label_364990;
        case 0x364994u: goto label_364994;
        case 0x364998u: goto label_364998;
        case 0x36499cu: goto label_36499c;
        case 0x3649a0u: goto label_3649a0;
        case 0x3649a4u: goto label_3649a4;
        case 0x3649a8u: goto label_3649a8;
        case 0x3649acu: goto label_3649ac;
        case 0x3649b0u: goto label_3649b0;
        case 0x3649b4u: goto label_3649b4;
        case 0x3649b8u: goto label_3649b8;
        case 0x3649bcu: goto label_3649bc;
        case 0x3649c0u: goto label_3649c0;
        case 0x3649c4u: goto label_3649c4;
        case 0x3649c8u: goto label_3649c8;
        case 0x3649ccu: goto label_3649cc;
        case 0x3649d0u: goto label_3649d0;
        case 0x3649d4u: goto label_3649d4;
        case 0x3649d8u: goto label_3649d8;
        case 0x3649dcu: goto label_3649dc;
        case 0x3649e0u: goto label_3649e0;
        case 0x3649e4u: goto label_3649e4;
        case 0x3649e8u: goto label_3649e8;
        case 0x3649ecu: goto label_3649ec;
        case 0x3649f0u: goto label_3649f0;
        case 0x3649f4u: goto label_3649f4;
        case 0x3649f8u: goto label_3649f8;
        case 0x3649fcu: goto label_3649fc;
        case 0x364a00u: goto label_364a00;
        case 0x364a04u: goto label_364a04;
        case 0x364a08u: goto label_364a08;
        case 0x364a0cu: goto label_364a0c;
        case 0x364a10u: goto label_364a10;
        case 0x364a14u: goto label_364a14;
        case 0x364a18u: goto label_364a18;
        case 0x364a1cu: goto label_364a1c;
        case 0x364a20u: goto label_364a20;
        case 0x364a24u: goto label_364a24;
        case 0x364a28u: goto label_364a28;
        case 0x364a2cu: goto label_364a2c;
        case 0x364a30u: goto label_364a30;
        case 0x364a34u: goto label_364a34;
        case 0x364a38u: goto label_364a38;
        case 0x364a3cu: goto label_364a3c;
        case 0x364a40u: goto label_364a40;
        case 0x364a44u: goto label_364a44;
        case 0x364a48u: goto label_364a48;
        case 0x364a4cu: goto label_364a4c;
        case 0x364a50u: goto label_364a50;
        case 0x364a54u: goto label_364a54;
        case 0x364a58u: goto label_364a58;
        case 0x364a5cu: goto label_364a5c;
        case 0x364a60u: goto label_364a60;
        case 0x364a64u: goto label_364a64;
        case 0x364a68u: goto label_364a68;
        case 0x364a6cu: goto label_364a6c;
        case 0x364a70u: goto label_364a70;
        case 0x364a74u: goto label_364a74;
        case 0x364a78u: goto label_364a78;
        case 0x364a7cu: goto label_364a7c;
        case 0x364a80u: goto label_364a80;
        case 0x364a84u: goto label_364a84;
        case 0x364a88u: goto label_364a88;
        case 0x364a8cu: goto label_364a8c;
        case 0x364a90u: goto label_364a90;
        case 0x364a94u: goto label_364a94;
        case 0x364a98u: goto label_364a98;
        case 0x364a9cu: goto label_364a9c;
        case 0x364aa0u: goto label_364aa0;
        case 0x364aa4u: goto label_364aa4;
        case 0x364aa8u: goto label_364aa8;
        case 0x364aacu: goto label_364aac;
        case 0x364ab0u: goto label_364ab0;
        case 0x364ab4u: goto label_364ab4;
        case 0x364ab8u: goto label_364ab8;
        case 0x364abcu: goto label_364abc;
        case 0x364ac0u: goto label_364ac0;
        case 0x364ac4u: goto label_364ac4;
        case 0x364ac8u: goto label_364ac8;
        case 0x364accu: goto label_364acc;
        case 0x364ad0u: goto label_364ad0;
        case 0x364ad4u: goto label_364ad4;
        case 0x364ad8u: goto label_364ad8;
        case 0x364adcu: goto label_364adc;
        case 0x364ae0u: goto label_364ae0;
        case 0x364ae4u: goto label_364ae4;
        case 0x364ae8u: goto label_364ae8;
        case 0x364aecu: goto label_364aec;
        case 0x364af0u: goto label_364af0;
        case 0x364af4u: goto label_364af4;
        case 0x364af8u: goto label_364af8;
        case 0x364afcu: goto label_364afc;
        case 0x364b00u: goto label_364b00;
        case 0x364b04u: goto label_364b04;
        case 0x364b08u: goto label_364b08;
        case 0x364b0cu: goto label_364b0c;
        case 0x364b10u: goto label_364b10;
        case 0x364b14u: goto label_364b14;
        case 0x364b18u: goto label_364b18;
        case 0x364b1cu: goto label_364b1c;
        case 0x364b20u: goto label_364b20;
        case 0x364b24u: goto label_364b24;
        case 0x364b28u: goto label_364b28;
        case 0x364b2cu: goto label_364b2c;
        case 0x364b30u: goto label_364b30;
        case 0x364b34u: goto label_364b34;
        case 0x364b38u: goto label_364b38;
        case 0x364b3cu: goto label_364b3c;
        case 0x364b40u: goto label_364b40;
        case 0x364b44u: goto label_364b44;
        case 0x364b48u: goto label_364b48;
        case 0x364b4cu: goto label_364b4c;
        case 0x364b50u: goto label_364b50;
        case 0x364b54u: goto label_364b54;
        case 0x364b58u: goto label_364b58;
        case 0x364b5cu: goto label_364b5c;
        case 0x364b60u: goto label_364b60;
        case 0x364b64u: goto label_364b64;
        case 0x364b68u: goto label_364b68;
        case 0x364b6cu: goto label_364b6c;
        case 0x364b70u: goto label_364b70;
        case 0x364b74u: goto label_364b74;
        case 0x364b78u: goto label_364b78;
        case 0x364b7cu: goto label_364b7c;
        case 0x364b80u: goto label_364b80;
        case 0x364b84u: goto label_364b84;
        case 0x364b88u: goto label_364b88;
        case 0x364b8cu: goto label_364b8c;
        case 0x364b90u: goto label_364b90;
        case 0x364b94u: goto label_364b94;
        case 0x364b98u: goto label_364b98;
        case 0x364b9cu: goto label_364b9c;
        case 0x364ba0u: goto label_364ba0;
        case 0x364ba4u: goto label_364ba4;
        case 0x364ba8u: goto label_364ba8;
        case 0x364bacu: goto label_364bac;
        case 0x364bb0u: goto label_364bb0;
        case 0x364bb4u: goto label_364bb4;
        case 0x364bb8u: goto label_364bb8;
        case 0x364bbcu: goto label_364bbc;
        case 0x364bc0u: goto label_364bc0;
        case 0x364bc4u: goto label_364bc4;
        case 0x364bc8u: goto label_364bc8;
        case 0x364bccu: goto label_364bcc;
        case 0x364bd0u: goto label_364bd0;
        case 0x364bd4u: goto label_364bd4;
        case 0x364bd8u: goto label_364bd8;
        case 0x364bdcu: goto label_364bdc;
        case 0x364be0u: goto label_364be0;
        case 0x364be4u: goto label_364be4;
        case 0x364be8u: goto label_364be8;
        case 0x364becu: goto label_364bec;
        default: break;
    }

    ctx->pc = 0x3645c0u;

label_3645c0:
    // 0x3645c0: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3645c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3645c4:
    // 0x3645c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3645c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3645c8:
    // 0x3645c8: 0x0  nop
    ctx->pc = 0x3645c8u;
    // NOP
label_3645cc:
    // 0x3645cc: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x3645ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_3645d0:
    // 0x3645d0: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3645d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3645d4:
    // 0x3645d4: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x3645d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_3645d8:
    // 0x3645d8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x3645d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3645dc:
    // 0x3645dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3645dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3645e0:
    // 0x3645e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3645e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3645e4:
    // 0x3645e4: 0x0  nop
    ctx->pc = 0x3645e4u;
    // NOP
label_3645e8:
    // 0x3645e8: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x3645e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
label_3645ec:
    // 0x3645ec: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x3645ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_3645f0:
    // 0x3645f0: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x3645f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
label_3645f4:
    // 0x3645f4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x3645f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_3645f8:
    // 0x3645f8: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x3645f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3645fc:
    // 0x3645fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3645fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_364600:
    // 0x364600: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_364604:
    if (ctx->pc == 0x364604u) {
        ctx->pc = 0x364604u;
            // 0x364604: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x364608u;
        goto label_364608;
    }
    ctx->pc = 0x364600u;
    {
        const bool branch_taken_0x364600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x364604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364600u;
            // 0x364604: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364600) {
            ctx->pc = 0x36460Cu;
            goto label_36460c;
        }
    }
    ctx->pc = 0x364608u;
label_364608:
    // 0x364608: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x364608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36460c:
    // 0x36460c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x36460cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_364610:
    // 0x364610: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x364610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_364614:
    // 0x364614: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x364614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_364618:
    // 0x364618: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x364618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_36461c:
    // 0x36461c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x36461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_364620:
    // 0x364620: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x364620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_364624:
    // 0x364624: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_364628:
    if (ctx->pc == 0x364628u) {
        ctx->pc = 0x364628u;
            // 0x364628: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x36462Cu;
        goto label_36462c;
    }
    ctx->pc = 0x364624u;
    {
        const bool branch_taken_0x364624 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x364624) {
            ctx->pc = 0x364628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364624u;
            // 0x364628: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364638u;
            goto label_364638;
        }
    }
    ctx->pc = 0x36462Cu;
label_36462c:
    // 0x36462c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36462cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364630:
    // 0x364630: 0x10000007  b           . + 4 + (0x7 << 2)
label_364634:
    if (ctx->pc == 0x364634u) {
        ctx->pc = 0x364634u;
            // 0x364634: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x364638u;
        goto label_364638;
    }
    ctx->pc = 0x364630u;
    {
        const bool branch_taken_0x364630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364630u;
            // 0x364634: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x364630) {
            ctx->pc = 0x364650u;
            goto label_364650;
        }
    }
    ctx->pc = 0x364638u;
label_364638:
    // 0x364638: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x364638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_36463c:
    // 0x36463c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36463cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_364640:
    // 0x364640: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x364640u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364644:
    // 0x364644: 0x0  nop
    ctx->pc = 0x364644u;
    // NOP
label_364648:
    // 0x364648: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x364648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_36464c:
    // 0x36464c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x36464cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_364650:
    // 0x364650: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x364650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364654:
    // 0x364654: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x364654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_364658:
    // 0x364658: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x364658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_36465c:
    // 0x36465c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x36465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_364660:
    // 0x364660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x364660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_364664:
    // 0x364664: 0x3465f000  ori         $a1, $v1, 0xF000
    ctx->pc = 0x364664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_364668:
    // 0x364668: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x364668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_36466c:
    // 0x36466c: 0xc482008c  lwc1        $f2, 0x8C($a0)
    ctx->pc = 0x36466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_364670:
    // 0x364670: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x364670u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_364674:
    // 0x364674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364678:
    // 0x364678: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x364678u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_36467c:
    // 0x36467c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x36467cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_364680:
    // 0x364680: 0xe481008c  swc1        $f1, 0x8C($a0)
    ctx->pc = 0x364680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_364684:
    // 0x364684: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x364684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364688:
    // 0x364688: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x364688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36468c:
    // 0x36468c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_364690:
    if (ctx->pc == 0x364690u) {
        ctx->pc = 0x364690u;
            // 0x364690: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x364694u;
        goto label_364694;
    }
    ctx->pc = 0x36468Cu;
    {
        const bool branch_taken_0x36468c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x364690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36468Cu;
            // 0x364690: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36468c) {
            ctx->pc = 0x364698u;
            goto label_364698;
        }
    }
    ctx->pc = 0x364694u;
label_364694:
    // 0x364694: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x364694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364698:
    // 0x364698: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_36469c:
    if (ctx->pc == 0x36469Cu) {
        ctx->pc = 0x36469Cu;
            // 0x36469c: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3646A0u;
        goto label_3646a0;
    }
    ctx->pc = 0x364698u;
    {
        const bool branch_taken_0x364698 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x364698) {
            ctx->pc = 0x36469Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364698u;
            // 0x36469c: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3646ACu;
            goto label_3646ac;
        }
    }
    ctx->pc = 0x3646A0u;
label_3646a0:
    // 0x3646a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3646a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3646a4:
    // 0x3646a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3646a8:
    if (ctx->pc == 0x3646A8u) {
        ctx->pc = 0x3646A8u;
            // 0x3646a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3646ACu;
        goto label_3646ac;
    }
    ctx->pc = 0x3646A4u;
    {
        const bool branch_taken_0x3646a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3646A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3646A4u;
            // 0x3646a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3646a4) {
            ctx->pc = 0x3646C4u;
            goto label_3646c4;
        }
    }
    ctx->pc = 0x3646ACu;
label_3646ac:
    // 0x3646ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3646acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3646b0:
    // 0x3646b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3646b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3646b4:
    // 0x3646b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3646b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3646b8:
    // 0x3646b8: 0x0  nop
    ctx->pc = 0x3646b8u;
    // NOP
label_3646bc:
    // 0x3646bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3646bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3646c0:
    // 0x3646c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3646c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3646c4:
    // 0x3646c4: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x3646c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3646c8:
    // 0x3646c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3646c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3646cc:
    // 0x3646cc: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x3646ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_3646d0:
    // 0x3646d0: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x3646d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
label_3646d4:
    // 0x3646d4: 0x3e00008  jr          $ra
label_3646d8:
    if (ctx->pc == 0x3646D8u) {
        ctx->pc = 0x3646D8u;
            // 0x3646d8: 0xa0800094  sb          $zero, 0x94($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3646DCu;
        goto label_3646dc;
    }
    ctx->pc = 0x3646D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3646D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3646D4u;
            // 0x3646d8: 0xa0800094  sb          $zero, 0x94($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3646DCu;
label_3646dc:
    // 0x3646dc: 0x0  nop
    ctx->pc = 0x3646dcu;
    // NOP
label_3646e0:
    // 0x3646e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3646e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3646e4:
    // 0x3646e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3646e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3646e8:
    // 0x3646e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3646e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3646ec:
    // 0x3646ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3646ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3646f0:
    // 0x3646f0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x3646f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3646f4:
    // 0x3646f4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_3646f8:
    if (ctx->pc == 0x3646F8u) {
        ctx->pc = 0x3646F8u;
            // 0x3646f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3646FCu;
        goto label_3646fc;
    }
    ctx->pc = 0x3646F4u;
    {
        const bool branch_taken_0x3646f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3646f4) {
            ctx->pc = 0x3646F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3646F4u;
            // 0x3646f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36471Cu;
            goto label_36471c;
        }
    }
    ctx->pc = 0x3646FCu;
label_3646fc:
    // 0x3646fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_364700:
    if (ctx->pc == 0x364700u) {
        ctx->pc = 0x364700u;
            // 0x364700: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x364704u;
        goto label_364704;
    }
    ctx->pc = 0x3646FCu;
    {
        const bool branch_taken_0x3646fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3646fc) {
            ctx->pc = 0x364700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3646FCu;
            // 0x364700: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364718u;
            goto label_364718;
        }
    }
    ctx->pc = 0x364704u;
label_364704:
    // 0x364704: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x364704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364708:
    // 0x364708: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x364708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36470c:
    // 0x36470c: 0x320f809  jalr        $t9
label_364710:
    if (ctx->pc == 0x364710u) {
        ctx->pc = 0x364710u;
            // 0x364710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x364714u;
        goto label_364714;
    }
    ctx->pc = 0x36470Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364714u);
        ctx->pc = 0x364710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36470Cu;
            // 0x364710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364714u; }
            if (ctx->pc != 0x364714u) { return; }
        }
        }
    }
    ctx->pc = 0x364714u;
label_364714:
    // 0x364714: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x364714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_364718:
    // 0x364718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36471c:
    // 0x36471c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36471cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364720:
    // 0x364720: 0x3e00008  jr          $ra
label_364724:
    if (ctx->pc == 0x364724u) {
        ctx->pc = 0x364724u;
            // 0x364724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x364728u;
        goto label_364728;
    }
    ctx->pc = 0x364720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364720u;
            // 0x364724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x364728u;
label_364728:
    // 0x364728: 0x0  nop
    ctx->pc = 0x364728u;
    // NOP
label_36472c:
    // 0x36472c: 0x0  nop
    ctx->pc = 0x36472cu;
    // NOP
label_364730:
    // 0x364730: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x364730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_364734:
    // 0x364734: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x364734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_364738:
    // 0x364738: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x364738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_36473c:
    // 0x36473c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x36473cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_364740:
    // 0x364740: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x364740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_364744:
    // 0x364744: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x364744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_364748:
    // 0x364748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36474c:
    // 0x36474c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x36474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_364750:
    // 0x364750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_364754:
    // 0x364754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364758:
    // 0x364758: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x364758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36475c:
    // 0x36475c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36475cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364760:
    // 0x364760: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364764:
    // 0x364764: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364768:
    // 0x364768: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x364768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_36476c:
    // 0x36476c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x36476cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_364770:
    // 0x364770: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x364770u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_364774:
    // 0x364774: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x364774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_364778:
    // 0x364778: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x364778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36477c:
    // 0x36477c: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x36477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_364780:
    // 0x364780: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x364780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364784:
    // 0x364784: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x364784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_364788:
    // 0x364788: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x364788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_36478c:
    // 0x36478c: 0x0  nop
    ctx->pc = 0x36478cu;
    // NOP
label_364790:
    // 0x364790: 0xac870090  sw          $a3, 0x90($a0)
    ctx->pc = 0x364790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 7));
label_364794:
    // 0x364794: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x364794u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_364798:
    // 0x364798: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x364798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_36479c:
    // 0x36479c: 0xc0a7a88  jal         func_29EA20
label_3647a0:
    if (ctx->pc == 0x3647A0u) {
        ctx->pc = 0x3647A0u;
            // 0x3647a0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3647A4u;
        goto label_3647a4;
    }
    ctx->pc = 0x36479Cu;
    SET_GPR_U32(ctx, 31, 0x3647A4u);
    ctx->pc = 0x3647A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36479Cu;
            // 0x3647a0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3647A4u; }
        if (ctx->pc != 0x3647A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3647A4u; }
        if (ctx->pc != 0x3647A4u) { return; }
    }
    ctx->pc = 0x3647A4u;
label_3647a4:
    // 0x3647a4: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x3647a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3647a8:
    // 0x3647a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3647a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3647ac:
    // 0x3647ac: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_3647b0:
    if (ctx->pc == 0x3647B0u) {
        ctx->pc = 0x3647B0u;
            // 0x3647b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3647B4u;
        goto label_3647b4;
    }
    ctx->pc = 0x3647ACu;
    {
        const bool branch_taken_0x3647ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3647B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3647ACu;
            // 0x3647b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3647ac) {
            ctx->pc = 0x3647ECu;
            goto label_3647ec;
        }
    }
    ctx->pc = 0x3647B4u;
label_3647b4:
    // 0x3647b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3647b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3647b8:
    // 0x3647b8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3647b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3647bc:
    // 0x3647bc: 0x8c434018  lw          $v1, 0x4018($v0)
    ctx->pc = 0x3647bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16408)));
label_3647c0:
    // 0x3647c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3647c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3647c4:
    // 0x3647c4: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x3647c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_3647c8:
    // 0x3647c8: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x3647c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3647cc:
    // 0x3647cc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3647ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3647d0:
    // 0x3647d0: 0xc08afe0  jal         func_22BF80
label_3647d4:
    if (ctx->pc == 0x3647D4u) {
        ctx->pc = 0x3647D4u;
            // 0x3647d4: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x3647D8u;
        goto label_3647d8;
    }
    ctx->pc = 0x3647D0u;
    SET_GPR_U32(ctx, 31, 0x3647D8u);
    ctx->pc = 0x3647D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3647D0u;
            // 0x3647d4: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3647D8u; }
        if (ctx->pc != 0x3647D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3647D8u; }
        if (ctx->pc != 0x3647D8u) { return; }
    }
    ctx->pc = 0x3647D8u;
label_3647d8:
    // 0x3647d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3647d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3647dc:
    // 0x3647dc: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x3647dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_3647e0:
    // 0x3647e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3647e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3647e4:
    // 0x3647e4: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x3647e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_3647e8:
    // 0x3647e8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x3647e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_3647ec:
    // 0x3647ec: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x3647ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_3647f0:
    // 0x3647f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3647f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3647f4:
    // 0x3647f4: 0xc08c798  jal         func_231E60
label_3647f8:
    if (ctx->pc == 0x3647F8u) {
        ctx->pc = 0x3647F8u;
            // 0x3647f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3647FCu;
        goto label_3647fc;
    }
    ctx->pc = 0x3647F4u;
    SET_GPR_U32(ctx, 31, 0x3647FCu);
    ctx->pc = 0x3647F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3647F4u;
            // 0x3647f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3647FCu; }
        if (ctx->pc != 0x3647FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3647FCu; }
        if (ctx->pc != 0x3647FCu) { return; }
    }
    ctx->pc = 0x3647FCu;
label_3647fc:
    // 0x3647fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3647fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_364800:
    // 0x364800: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x364800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
label_364804:
    // 0x364804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x364804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_364808:
    // 0x364808: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x364808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
label_36480c:
    // 0x36480c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x36480cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_364810:
    // 0x364810: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x364810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_364814:
    // 0x364814: 0xc04cbd8  jal         func_132F60
label_364818:
    if (ctx->pc == 0x364818u) {
        ctx->pc = 0x364818u;
            // 0x364818: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x36481Cu;
        goto label_36481c;
    }
    ctx->pc = 0x364814u;
    SET_GPR_U32(ctx, 31, 0x36481Cu);
    ctx->pc = 0x364818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364814u;
            // 0x364818: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36481Cu; }
        if (ctx->pc != 0x36481Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36481Cu; }
        if (ctx->pc != 0x36481Cu) { return; }
    }
    ctx->pc = 0x36481Cu;
label_36481c:
    // 0x36481c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x36481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_364820:
    // 0x364820: 0xc04f278  jal         func_13C9E0
label_364824:
    if (ctx->pc == 0x364824u) {
        ctx->pc = 0x364824u;
            // 0x364824: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x364828u;
        goto label_364828;
    }
    ctx->pc = 0x364820u;
    SET_GPR_U32(ctx, 31, 0x364828u);
    ctx->pc = 0x364824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364820u;
            // 0x364824: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364828u; }
        if (ctx->pc != 0x364828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364828u; }
        if (ctx->pc != 0x364828u) { return; }
    }
    ctx->pc = 0x364828u;
label_364828:
    // 0x364828: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x364828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_36482c:
    // 0x36482c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x36482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_364830:
    // 0x364830: 0xc04cca0  jal         func_133280
label_364834:
    if (ctx->pc == 0x364834u) {
        ctx->pc = 0x364834u;
            // 0x364834: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364838u;
        goto label_364838;
    }
    ctx->pc = 0x364830u;
    SET_GPR_U32(ctx, 31, 0x364838u);
    ctx->pc = 0x364834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364830u;
            // 0x364834: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364838u; }
        if (ctx->pc != 0x364838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364838u; }
        if (ctx->pc != 0x364838u) { return; }
    }
    ctx->pc = 0x364838u;
label_364838:
    // 0x364838: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x364838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_36483c:
    // 0x36483c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x36483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_364840:
    // 0x364840: 0xc04cbe0  jal         func_132F80
label_364844:
    if (ctx->pc == 0x364844u) {
        ctx->pc = 0x364844u;
            // 0x364844: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364848u;
        goto label_364848;
    }
    ctx->pc = 0x364840u;
    SET_GPR_U32(ctx, 31, 0x364848u);
    ctx->pc = 0x364844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364840u;
            // 0x364844: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364848u; }
        if (ctx->pc != 0x364848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364848u; }
        if (ctx->pc != 0x364848u) { return; }
    }
    ctx->pc = 0x364848u;
label_364848:
    // 0x364848: 0xc646002c  lwc1        $f6, 0x2C($s2)
    ctx->pc = 0x364848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_36484c:
    // 0x36484c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x36484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_364850:
    // 0x364850: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x364850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_364854:
    // 0x364854: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x364854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_364858:
    // 0x364858: 0xc6450028  lwc1        $f5, 0x28($s2)
    ctx->pc = 0x364858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_36485c:
    // 0x36485c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x36485cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364860:
    // 0x364860: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x364860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_364864:
    // 0x364864: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x364864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_364868:
    // 0x364868: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x364868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36486c:
    // 0x36486c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x36486cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_364870:
    // 0x364870: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x364870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_364874:
    // 0x364874: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x364874u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_364878:
    // 0x364878: 0xe7a50088  swc1        $f5, 0x88($sp)
    ctx->pc = 0x364878u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_36487c:
    // 0x36487c: 0xe7a6008c  swc1        $f6, 0x8C($sp)
    ctx->pc = 0x36487cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_364880:
    // 0x364880: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x364880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_364884:
    // 0x364884: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x364884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_364888:
    // 0x364888: 0xc0a3830  jal         func_28E0C0
label_36488c:
    if (ctx->pc == 0x36488Cu) {
        ctx->pc = 0x36488Cu;
            // 0x36488c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x364890u;
        goto label_364890;
    }
    ctx->pc = 0x364888u;
    SET_GPR_U32(ctx, 31, 0x364890u);
    ctx->pc = 0x36488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364888u;
            // 0x36488c: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364890u; }
        if (ctx->pc != 0x364890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364890u; }
        if (ctx->pc != 0x364890u) { return; }
    }
    ctx->pc = 0x364890u;
label_364890:
    // 0x364890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364894:
    // 0x364894: 0xc08af10  jal         func_22BC40
label_364898:
    if (ctx->pc == 0x364898u) {
        ctx->pc = 0x364898u;
            // 0x364898: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x36489Cu;
        goto label_36489c;
    }
    ctx->pc = 0x364894u;
    SET_GPR_U32(ctx, 31, 0x36489Cu);
    ctx->pc = 0x364898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364894u;
            // 0x364898: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36489Cu; }
        if (ctx->pc != 0x36489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36489Cu; }
        if (ctx->pc != 0x36489Cu) { return; }
    }
    ctx->pc = 0x36489Cu;
label_36489c:
    // 0x36489c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3648a0:
    // 0x3648a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3648a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3648a4:
    // 0x3648a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3648a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3648a8:
    // 0x3648a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3648a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3648ac:
    // 0x3648ac: 0x3e00008  jr          $ra
label_3648b0:
    if (ctx->pc == 0x3648B0u) {
        ctx->pc = 0x3648B0u;
            // 0x3648b0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3648B4u;
        goto label_3648b4;
    }
    ctx->pc = 0x3648ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3648B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3648ACu;
            // 0x3648b0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3648B4u;
label_3648b4:
    // 0x3648b4: 0x0  nop
    ctx->pc = 0x3648b4u;
    // NOP
label_3648b8:
    // 0x3648b8: 0x0  nop
    ctx->pc = 0x3648b8u;
    // NOP
label_3648bc:
    // 0x3648bc: 0x0  nop
    ctx->pc = 0x3648bcu;
    // NOP
label_3648c0:
    // 0x3648c0: 0x3e00008  jr          $ra
label_3648c4:
    if (ctx->pc == 0x3648C4u) {
        ctx->pc = 0x3648C4u;
            // 0x3648c4: 0x24022ee0  addiu       $v0, $zero, 0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
        ctx->pc = 0x3648C8u;
        goto label_3648c8;
    }
    ctx->pc = 0x3648C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3648C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3648C0u;
            // 0x3648c4: 0x24022ee0  addiu       $v0, $zero, 0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3648C8u;
label_3648c8:
    // 0x3648c8: 0x0  nop
    ctx->pc = 0x3648c8u;
    // NOP
label_3648cc:
    // 0x3648cc: 0x0  nop
    ctx->pc = 0x3648ccu;
    // NOP
label_3648d0:
    // 0x3648d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3648d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3648d4:
    // 0x3648d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3648d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3648d8:
    // 0x3648d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3648d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3648dc:
    // 0x3648dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3648dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3648e0:
    // 0x3648e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3648e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3648e4:
    // 0x3648e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3648e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3648e8:
    // 0x3648e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3648e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3648ec:
    // 0x3648ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3648ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3648f0:
    // 0x3648f0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3648f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3648f4:
    // 0x3648f4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3648f8:
    if (ctx->pc == 0x3648F8u) {
        ctx->pc = 0x3648F8u;
            // 0x3648f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3648FCu;
        goto label_3648fc;
    }
    ctx->pc = 0x3648F4u;
    {
        const bool branch_taken_0x3648f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3648F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3648F4u;
            // 0x3648f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3648f4) {
            ctx->pc = 0x364938u;
            goto label_364938;
        }
    }
    ctx->pc = 0x3648FCu;
label_3648fc:
    // 0x3648fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3648fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364900:
    // 0x364900: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x364900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364904:
    // 0x364904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x364904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364908:
    // 0x364908: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x364908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_36490c:
    // 0x36490c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_364910:
    // 0x364910: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x364910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_364914:
    // 0x364914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x364914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364918:
    // 0x364918: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x364918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_36491c:
    // 0x36491c: 0x320f809  jalr        $t9
label_364920:
    if (ctx->pc == 0x364920u) {
        ctx->pc = 0x364924u;
        goto label_364924;
    }
    ctx->pc = 0x36491Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364924u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x364924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364924u; }
            if (ctx->pc != 0x364924u) { return; }
        }
        }
    }
    ctx->pc = 0x364924u;
label_364924:
    // 0x364924: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x364924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_364928:
    // 0x364928: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x364928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_36492c:
    // 0x36492c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x36492cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_364930:
    // 0x364930: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_364934:
    if (ctx->pc == 0x364934u) {
        ctx->pc = 0x364934u;
            // 0x364934: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x364938u;
        goto label_364938;
    }
    ctx->pc = 0x364930u;
    {
        const bool branch_taken_0x364930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364930u;
            // 0x364934: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364930) {
            ctx->pc = 0x364908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_364908;
        }
    }
    ctx->pc = 0x364938u;
label_364938:
    // 0x364938: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x364938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36493c:
    // 0x36493c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_364940:
    // 0x364940: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x364940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_364944:
    // 0x364944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x364944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_364948:
    // 0x364948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x364948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36494c:
    // 0x36494c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36494cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_364950:
    // 0x364950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364954:
    // 0x364954: 0x3e00008  jr          $ra
label_364958:
    if (ctx->pc == 0x364958u) {
        ctx->pc = 0x364958u;
            // 0x364958: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36495Cu;
        goto label_36495c;
    }
    ctx->pc = 0x364954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364954u;
            // 0x364958: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36495Cu;
label_36495c:
    // 0x36495c: 0x0  nop
    ctx->pc = 0x36495cu;
    // NOP
label_364960:
    // 0x364960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_364964:
    // 0x364964: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x364964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364968:
    // 0x364968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x364968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36496c:
    // 0x36496c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x36496cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_364970:
    // 0x364970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_364974:
    // 0x364974: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x364974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_364978:
    // 0x364978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x364978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36497c:
    // 0x36497c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x36497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_364980:
    // 0x364980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x364980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_364984:
    // 0x364984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x364984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_364988:
    // 0x364988: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x364988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_36498c:
    // 0x36498c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x36498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364990:
    // 0x364990: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x364990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_364994:
    // 0x364994: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x364994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_364998:
    // 0x364998: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x364998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_36499c:
    // 0x36499c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x36499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3649a0:
    // 0x3649a0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3649a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3649a4:
    // 0x3649a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3649a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3649a8:
    // 0x3649a8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3649a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3649ac:
    // 0x3649ac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3649acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3649b0:
    // 0x3649b0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3649b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3649b4:
    // 0x3649b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3649b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3649b8:
    // 0x3649b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3649b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3649bc:
    // 0x3649bc: 0xc0a997c  jal         func_2A65F0
label_3649c0:
    if (ctx->pc == 0x3649C0u) {
        ctx->pc = 0x3649C0u;
            // 0x3649c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3649C4u;
        goto label_3649c4;
    }
    ctx->pc = 0x3649BCu;
    SET_GPR_U32(ctx, 31, 0x3649C4u);
    ctx->pc = 0x3649C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3649BCu;
            // 0x3649c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3649C4u; }
        if (ctx->pc != 0x3649C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3649C4u; }
        if (ctx->pc != 0x3649C4u) { return; }
    }
    ctx->pc = 0x3649C4u;
label_3649c4:
    // 0x3649c4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3649c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3649c8:
    // 0x3649c8: 0xc0d879c  jal         func_361E70
label_3649cc:
    if (ctx->pc == 0x3649CCu) {
        ctx->pc = 0x3649CCu;
            // 0x3649cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3649D0u;
        goto label_3649d0;
    }
    ctx->pc = 0x3649C8u;
    SET_GPR_U32(ctx, 31, 0x3649D0u);
    ctx->pc = 0x3649CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3649C8u;
            // 0x3649cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3649D0u; }
        if (ctx->pc != 0x3649D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3649D0u; }
        if (ctx->pc != 0x3649D0u) { return; }
    }
    ctx->pc = 0x3649D0u;
label_3649d0:
    // 0x3649d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3649d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3649d4:
    // 0x3649d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3649d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3649d8:
    // 0x3649d8: 0x3e00008  jr          $ra
label_3649dc:
    if (ctx->pc == 0x3649DCu) {
        ctx->pc = 0x3649DCu;
            // 0x3649dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3649E0u;
        goto label_3649e0;
    }
    ctx->pc = 0x3649D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3649DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3649D8u;
            // 0x3649dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3649E0u;
label_3649e0:
    // 0x3649e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3649e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3649e4:
    // 0x3649e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3649e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3649e8:
    // 0x3649e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3649e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3649ec:
    // 0x3649ec: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3649ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3649f0:
    // 0x3649f0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3649f4:
    if (ctx->pc == 0x3649F4u) {
        ctx->pc = 0x3649F4u;
            // 0x3649f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3649F8u;
        goto label_3649f8;
    }
    ctx->pc = 0x3649F0u;
    {
        const bool branch_taken_0x3649f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3649F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3649F0u;
            // 0x3649f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3649f0) {
            ctx->pc = 0x364B10u;
            goto label_364b10;
        }
    }
    ctx->pc = 0x3649F8u;
label_3649f8:
    // 0x3649f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3649f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3649fc:
    // 0x3649fc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3649fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_364a00:
    // 0x364a00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x364a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_364a04:
    // 0x364a04: 0xc075128  jal         func_1D44A0
label_364a08:
    if (ctx->pc == 0x364A08u) {
        ctx->pc = 0x364A08u;
            // 0x364a08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x364A0Cu;
        goto label_364a0c;
    }
    ctx->pc = 0x364A04u;
    SET_GPR_U32(ctx, 31, 0x364A0Cu);
    ctx->pc = 0x364A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364A04u;
            // 0x364a08: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364A0Cu; }
        if (ctx->pc != 0x364A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364A0Cu; }
        if (ctx->pc != 0x364A0Cu) { return; }
    }
    ctx->pc = 0x364A0Cu;
label_364a0c:
    // 0x364a0c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x364a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_364a10:
    // 0x364a10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364a14:
    // 0x364a14: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x364a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_364a18:
    // 0x364a18: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x364a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_364a1c:
    // 0x364a1c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x364a1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_364a20:
    // 0x364a20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_364a24:
    if (ctx->pc == 0x364A24u) {
        ctx->pc = 0x364A24u;
            // 0x364a24: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x364A28u;
        goto label_364a28;
    }
    ctx->pc = 0x364A20u;
    {
        const bool branch_taken_0x364a20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x364A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364A20u;
            // 0x364a24: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a20) {
            ctx->pc = 0x364A30u;
            goto label_364a30;
        }
    }
    ctx->pc = 0x364A28u;
label_364a28:
    // 0x364a28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364a2c:
    // 0x364a2c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x364a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_364a30:
    // 0x364a30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x364a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364a34:
    // 0x364a34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364a38:
    // 0x364a38: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x364a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_364a3c:
    // 0x364a3c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x364a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_364a40:
    // 0x364a40: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x364a40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_364a44:
    // 0x364a44: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_364a48:
    if (ctx->pc == 0x364A48u) {
        ctx->pc = 0x364A48u;
            // 0x364a48: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x364A4Cu;
        goto label_364a4c;
    }
    ctx->pc = 0x364A44u;
    {
        const bool branch_taken_0x364a44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x364a44) {
            ctx->pc = 0x364A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364A44u;
            // 0x364a48: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364A58u;
            goto label_364a58;
        }
    }
    ctx->pc = 0x364A4Cu;
label_364a4c:
    // 0x364a4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364a50:
    // 0x364a50: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x364a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_364a54:
    // 0x364a54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x364a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364a58:
    // 0x364a58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364a5c:
    // 0x364a5c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x364a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_364a60:
    // 0x364a60: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x364a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_364a64:
    // 0x364a64: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x364a64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_364a68:
    // 0x364a68: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_364a6c:
    if (ctx->pc == 0x364A6Cu) {
        ctx->pc = 0x364A6Cu;
            // 0x364a6c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x364A70u;
        goto label_364a70;
    }
    ctx->pc = 0x364A68u;
    {
        const bool branch_taken_0x364a68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x364a68) {
            ctx->pc = 0x364A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364A68u;
            // 0x364a6c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364A7Cu;
            goto label_364a7c;
        }
    }
    ctx->pc = 0x364A70u;
label_364a70:
    // 0x364a70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x364a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_364a74:
    // 0x364a74: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x364a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_364a78:
    // 0x364a78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x364a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_364a7c:
    // 0x364a7c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x364a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_364a80:
    // 0x364a80: 0x320f809  jalr        $t9
label_364a84:
    if (ctx->pc == 0x364A84u) {
        ctx->pc = 0x364A84u;
            // 0x364a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364A88u;
        goto label_364a88;
    }
    ctx->pc = 0x364A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364A88u);
        ctx->pc = 0x364A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364A80u;
            // 0x364a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364A88u; }
            if (ctx->pc != 0x364A88u) { return; }
        }
        }
    }
    ctx->pc = 0x364A88u;
label_364a88:
    // 0x364a88: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x364a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_364a8c:
    // 0x364a8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364a90:
    // 0x364a90: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x364a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_364a94:
    // 0x364a94: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x364a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_364a98:
    // 0x364a98: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x364a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_364a9c:
    // 0x364a9c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x364a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_364aa0:
    // 0x364aa0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_364aa4:
    if (ctx->pc == 0x364AA4u) {
        ctx->pc = 0x364AA4u;
            // 0x364aa4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x364AA8u;
        goto label_364aa8;
    }
    ctx->pc = 0x364AA0u;
    {
        const bool branch_taken_0x364aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x364aa0) {
            ctx->pc = 0x364AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364AA0u;
            // 0x364aa4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364AB4u;
            goto label_364ab4;
        }
    }
    ctx->pc = 0x364AA8u;
label_364aa8:
    // 0x364aa8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364aac:
    // 0x364aac: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x364aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_364ab0:
    // 0x364ab0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x364ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_364ab4:
    // 0x364ab4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364ab8:
    // 0x364ab8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x364ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_364abc:
    // 0x364abc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x364abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_364ac0:
    // 0x364ac0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x364ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_364ac4:
    // 0x364ac4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x364ac4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_364ac8:
    // 0x364ac8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_364acc:
    if (ctx->pc == 0x364ACCu) {
        ctx->pc = 0x364AD0u;
        goto label_364ad0;
    }
    ctx->pc = 0x364AC8u;
    {
        const bool branch_taken_0x364ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ac8) {
            ctx->pc = 0x364AD8u;
            goto label_364ad8;
        }
    }
    ctx->pc = 0x364AD0u;
label_364ad0:
    // 0x364ad0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364ad4:
    // 0x364ad4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x364ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_364ad8:
    // 0x364ad8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364adc:
    // 0x364adc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x364adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_364ae0:
    // 0x364ae0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x364ae0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_364ae4:
    // 0x364ae4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_364ae8:
    if (ctx->pc == 0x364AE8u) {
        ctx->pc = 0x364AECu;
        goto label_364aec;
    }
    ctx->pc = 0x364AE4u;
    {
        const bool branch_taken_0x364ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ae4) {
            ctx->pc = 0x364AF4u;
            goto label_364af4;
        }
    }
    ctx->pc = 0x364AECu;
label_364aec:
    // 0x364aec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364af0:
    // 0x364af0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x364af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_364af4:
    // 0x364af4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364af8:
    // 0x364af8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x364af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_364afc:
    // 0x364afc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x364afcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_364b00:
    // 0x364b00: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_364b04:
    if (ctx->pc == 0x364B04u) {
        ctx->pc = 0x364B04u;
            // 0x364b04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x364B08u;
        goto label_364b08;
    }
    ctx->pc = 0x364B00u;
    {
        const bool branch_taken_0x364b00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b00) {
            ctx->pc = 0x364B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364B00u;
            // 0x364b04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364B14u;
            goto label_364b14;
        }
    }
    ctx->pc = 0x364B08u;
label_364b08:
    // 0x364b08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x364b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_364b0c:
    // 0x364b0c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x364b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_364b10:
    // 0x364b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_364b14:
    // 0x364b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364b18:
    // 0x364b18: 0x3e00008  jr          $ra
label_364b1c:
    if (ctx->pc == 0x364B1Cu) {
        ctx->pc = 0x364B1Cu;
            // 0x364b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x364B20u;
        goto label_364b20;
    }
    ctx->pc = 0x364B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364B18u;
            // 0x364b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x364B20u;
label_364b20:
    // 0x364b20: 0x80d8b8c  j           func_362E30
label_364b24:
    if (ctx->pc == 0x364B24u) {
        ctx->pc = 0x364B24u;
            // 0x364b24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x364B28u;
        goto label_364b28;
    }
    ctx->pc = 0x364B20u;
    ctx->pc = 0x364B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364B20u;
            // 0x364b24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362E30u;
    {
        auto targetFn = runtime->lookupFunction(0x362E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x364B28u;
label_364b28:
    // 0x364b28: 0x0  nop
    ctx->pc = 0x364b28u;
    // NOP
label_364b2c:
    // 0x364b2c: 0x0  nop
    ctx->pc = 0x364b2cu;
    // NOP
label_364b30:
    // 0x364b30: 0x80d8f54  j           func_363D50
label_364b34:
    if (ctx->pc == 0x364B34u) {
        ctx->pc = 0x364B34u;
            // 0x364b34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x364B38u;
        goto label_364b38;
    }
    ctx->pc = 0x364B30u;
    ctx->pc = 0x364B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364B30u;
            // 0x364b34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x363D50u;
    {
        auto targetFn = runtime->lookupFunction(0x363D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x364B38u;
label_364b38:
    // 0x364b38: 0x0  nop
    ctx->pc = 0x364b38u;
    // NOP
label_364b3c:
    // 0x364b3c: 0x0  nop
    ctx->pc = 0x364b3cu;
    // NOP
label_364b40:
    // 0x364b40: 0x80d8b34  j           func_362CD0
label_364b44:
    if (ctx->pc == 0x364B44u) {
        ctx->pc = 0x364B44u;
            // 0x364b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x364B48u;
        goto label_364b48;
    }
    ctx->pc = 0x364B40u;
    ctx->pc = 0x364B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364B40u;
            // 0x364b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362CD0u;
    if (runtime->hasFunction(0x362CD0u)) {
        auto targetFn = runtime->lookupFunction(0x362CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00362CD0_0x362cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x364B48u;
label_364b48:
    // 0x364b48: 0x0  nop
    ctx->pc = 0x364b48u;
    // NOP
label_364b4c:
    // 0x364b4c: 0x0  nop
    ctx->pc = 0x364b4cu;
    // NOP
label_364b50:
    // 0x364b50: 0x80d8b10  j           func_362C40
label_364b54:
    if (ctx->pc == 0x364B54u) {
        ctx->pc = 0x364B54u;
            // 0x364b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x364B58u;
        goto label_364b58;
    }
    ctx->pc = 0x364B50u;
    ctx->pc = 0x364B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364B50u;
            // 0x364b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362C40u;
    {
        auto targetFn = runtime->lookupFunction(0x362C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x364B58u;
label_364b58:
    // 0x364b58: 0x0  nop
    ctx->pc = 0x364b58u;
    // NOP
label_364b5c:
    // 0x364b5c: 0x0  nop
    ctx->pc = 0x364b5cu;
    // NOP
label_364b60:
    // 0x364b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_364b64:
    // 0x364b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_364b68:
    // 0x364b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_364b6c:
    // 0x364b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_364b70:
    // 0x364b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364b74:
    // 0x364b74: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_364b78:
    if (ctx->pc == 0x364B78u) {
        ctx->pc = 0x364B78u;
            // 0x364b78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364B7Cu;
        goto label_364b7c;
    }
    ctx->pc = 0x364B74u;
    {
        const bool branch_taken_0x364b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x364B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364B74u;
            // 0x364b78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364b74) {
            ctx->pc = 0x364BD0u;
            goto label_364bd0;
        }
    }
    ctx->pc = 0x364B7Cu;
label_364b7c:
    // 0x364b7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x364b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_364b80:
    // 0x364b80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x364b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_364b84:
    // 0x364b84: 0x24636810  addiu       $v1, $v1, 0x6810
    ctx->pc = 0x364b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26640));
label_364b88:
    // 0x364b88: 0x24426848  addiu       $v0, $v0, 0x6848
    ctx->pc = 0x364b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26696));
label_364b8c:
    // 0x364b8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x364b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_364b90:
    // 0x364b90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_364b94:
    if (ctx->pc == 0x364B94u) {
        ctx->pc = 0x364B94u;
            // 0x364b94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x364B98u;
        goto label_364b98;
    }
    ctx->pc = 0x364B90u;
    {
        const bool branch_taken_0x364b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x364B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364B90u;
            // 0x364b94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364b90) {
            ctx->pc = 0x364BB8u;
            goto label_364bb8;
        }
    }
    ctx->pc = 0x364B98u;
label_364b98:
    // 0x364b98: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x364b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_364b9c:
    // 0x364b9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x364b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_364ba0:
    // 0x364ba0: 0x24636960  addiu       $v1, $v1, 0x6960
    ctx->pc = 0x364ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26976));
label_364ba4:
    // 0x364ba4: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x364ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
label_364ba8:
    // 0x364ba8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x364ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_364bac:
    // 0x364bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364bb0:
    // 0x364bb0: 0xc0d92fc  jal         func_364BF0
label_364bb4:
    if (ctx->pc == 0x364BB4u) {
        ctx->pc = 0x364BB4u;
            // 0x364bb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x364BB8u;
        goto label_364bb8;
    }
    ctx->pc = 0x364BB0u;
    SET_GPR_U32(ctx, 31, 0x364BB8u);
    ctx->pc = 0x364BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364BB0u;
            // 0x364bb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x364BF0u;
    if (runtime->hasFunction(0x364BF0u)) {
        auto targetFn = runtime->lookupFunction(0x364BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364BB8u; }
        if (ctx->pc != 0x364BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00364BF0_0x364bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364BB8u; }
        if (ctx->pc != 0x364BB8u) { return; }
    }
    ctx->pc = 0x364BB8u;
label_364bb8:
    // 0x364bb8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x364bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_364bbc:
    // 0x364bbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x364bbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_364bc0:
    // 0x364bc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_364bc4:
    if (ctx->pc == 0x364BC4u) {
        ctx->pc = 0x364BC4u;
            // 0x364bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364BC8u;
        goto label_364bc8;
    }
    ctx->pc = 0x364BC0u;
    {
        const bool branch_taken_0x364bc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x364bc0) {
            ctx->pc = 0x364BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364BC0u;
            // 0x364bc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364BD4u;
            goto label_364bd4;
        }
    }
    ctx->pc = 0x364BC8u;
label_364bc8:
    // 0x364bc8: 0xc0400a8  jal         func_1002A0
label_364bcc:
    if (ctx->pc == 0x364BCCu) {
        ctx->pc = 0x364BCCu;
            // 0x364bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364BD0u;
        goto label_364bd0;
    }
    ctx->pc = 0x364BC8u;
    SET_GPR_U32(ctx, 31, 0x364BD0u);
    ctx->pc = 0x364BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364BC8u;
            // 0x364bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364BD0u; }
        if (ctx->pc != 0x364BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364BD0u; }
        if (ctx->pc != 0x364BD0u) { return; }
    }
    ctx->pc = 0x364BD0u;
label_364bd0:
    // 0x364bd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x364bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364bd4:
    // 0x364bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x364bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_364bd8:
    // 0x364bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_364bdc:
    // 0x364bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364be0:
    // 0x364be0: 0x3e00008  jr          $ra
label_364be4:
    if (ctx->pc == 0x364BE4u) {
        ctx->pc = 0x364BE4u;
            // 0x364be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x364BE8u;
        goto label_364be8;
    }
    ctx->pc = 0x364BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364BE0u;
            // 0x364be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x364BE8u;
label_364be8:
    // 0x364be8: 0x0  nop
    ctx->pc = 0x364be8u;
    // NOP
label_364bec:
    // 0x364bec: 0x0  nop
    ctx->pc = 0x364becu;
    // NOP
}
