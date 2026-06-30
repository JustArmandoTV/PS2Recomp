#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004834E0
// Address: 0x4834e0 - 0x483b90
void sub_004834E0_0x4834e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004834E0_0x4834e0");
#endif

    switch (ctx->pc) {
        case 0x4834e0u: goto label_4834e0;
        case 0x4834e4u: goto label_4834e4;
        case 0x4834e8u: goto label_4834e8;
        case 0x4834ecu: goto label_4834ec;
        case 0x4834f0u: goto label_4834f0;
        case 0x4834f4u: goto label_4834f4;
        case 0x4834f8u: goto label_4834f8;
        case 0x4834fcu: goto label_4834fc;
        case 0x483500u: goto label_483500;
        case 0x483504u: goto label_483504;
        case 0x483508u: goto label_483508;
        case 0x48350cu: goto label_48350c;
        case 0x483510u: goto label_483510;
        case 0x483514u: goto label_483514;
        case 0x483518u: goto label_483518;
        case 0x48351cu: goto label_48351c;
        case 0x483520u: goto label_483520;
        case 0x483524u: goto label_483524;
        case 0x483528u: goto label_483528;
        case 0x48352cu: goto label_48352c;
        case 0x483530u: goto label_483530;
        case 0x483534u: goto label_483534;
        case 0x483538u: goto label_483538;
        case 0x48353cu: goto label_48353c;
        case 0x483540u: goto label_483540;
        case 0x483544u: goto label_483544;
        case 0x483548u: goto label_483548;
        case 0x48354cu: goto label_48354c;
        case 0x483550u: goto label_483550;
        case 0x483554u: goto label_483554;
        case 0x483558u: goto label_483558;
        case 0x48355cu: goto label_48355c;
        case 0x483560u: goto label_483560;
        case 0x483564u: goto label_483564;
        case 0x483568u: goto label_483568;
        case 0x48356cu: goto label_48356c;
        case 0x483570u: goto label_483570;
        case 0x483574u: goto label_483574;
        case 0x483578u: goto label_483578;
        case 0x48357cu: goto label_48357c;
        case 0x483580u: goto label_483580;
        case 0x483584u: goto label_483584;
        case 0x483588u: goto label_483588;
        case 0x48358cu: goto label_48358c;
        case 0x483590u: goto label_483590;
        case 0x483594u: goto label_483594;
        case 0x483598u: goto label_483598;
        case 0x48359cu: goto label_48359c;
        case 0x4835a0u: goto label_4835a0;
        case 0x4835a4u: goto label_4835a4;
        case 0x4835a8u: goto label_4835a8;
        case 0x4835acu: goto label_4835ac;
        case 0x4835b0u: goto label_4835b0;
        case 0x4835b4u: goto label_4835b4;
        case 0x4835b8u: goto label_4835b8;
        case 0x4835bcu: goto label_4835bc;
        case 0x4835c0u: goto label_4835c0;
        case 0x4835c4u: goto label_4835c4;
        case 0x4835c8u: goto label_4835c8;
        case 0x4835ccu: goto label_4835cc;
        case 0x4835d0u: goto label_4835d0;
        case 0x4835d4u: goto label_4835d4;
        case 0x4835d8u: goto label_4835d8;
        case 0x4835dcu: goto label_4835dc;
        case 0x4835e0u: goto label_4835e0;
        case 0x4835e4u: goto label_4835e4;
        case 0x4835e8u: goto label_4835e8;
        case 0x4835ecu: goto label_4835ec;
        case 0x4835f0u: goto label_4835f0;
        case 0x4835f4u: goto label_4835f4;
        case 0x4835f8u: goto label_4835f8;
        case 0x4835fcu: goto label_4835fc;
        case 0x483600u: goto label_483600;
        case 0x483604u: goto label_483604;
        case 0x483608u: goto label_483608;
        case 0x48360cu: goto label_48360c;
        case 0x483610u: goto label_483610;
        case 0x483614u: goto label_483614;
        case 0x483618u: goto label_483618;
        case 0x48361cu: goto label_48361c;
        case 0x483620u: goto label_483620;
        case 0x483624u: goto label_483624;
        case 0x483628u: goto label_483628;
        case 0x48362cu: goto label_48362c;
        case 0x483630u: goto label_483630;
        case 0x483634u: goto label_483634;
        case 0x483638u: goto label_483638;
        case 0x48363cu: goto label_48363c;
        case 0x483640u: goto label_483640;
        case 0x483644u: goto label_483644;
        case 0x483648u: goto label_483648;
        case 0x48364cu: goto label_48364c;
        case 0x483650u: goto label_483650;
        case 0x483654u: goto label_483654;
        case 0x483658u: goto label_483658;
        case 0x48365cu: goto label_48365c;
        case 0x483660u: goto label_483660;
        case 0x483664u: goto label_483664;
        case 0x483668u: goto label_483668;
        case 0x48366cu: goto label_48366c;
        case 0x483670u: goto label_483670;
        case 0x483674u: goto label_483674;
        case 0x483678u: goto label_483678;
        case 0x48367cu: goto label_48367c;
        case 0x483680u: goto label_483680;
        case 0x483684u: goto label_483684;
        case 0x483688u: goto label_483688;
        case 0x48368cu: goto label_48368c;
        case 0x483690u: goto label_483690;
        case 0x483694u: goto label_483694;
        case 0x483698u: goto label_483698;
        case 0x48369cu: goto label_48369c;
        case 0x4836a0u: goto label_4836a0;
        case 0x4836a4u: goto label_4836a4;
        case 0x4836a8u: goto label_4836a8;
        case 0x4836acu: goto label_4836ac;
        case 0x4836b0u: goto label_4836b0;
        case 0x4836b4u: goto label_4836b4;
        case 0x4836b8u: goto label_4836b8;
        case 0x4836bcu: goto label_4836bc;
        case 0x4836c0u: goto label_4836c0;
        case 0x4836c4u: goto label_4836c4;
        case 0x4836c8u: goto label_4836c8;
        case 0x4836ccu: goto label_4836cc;
        case 0x4836d0u: goto label_4836d0;
        case 0x4836d4u: goto label_4836d4;
        case 0x4836d8u: goto label_4836d8;
        case 0x4836dcu: goto label_4836dc;
        case 0x4836e0u: goto label_4836e0;
        case 0x4836e4u: goto label_4836e4;
        case 0x4836e8u: goto label_4836e8;
        case 0x4836ecu: goto label_4836ec;
        case 0x4836f0u: goto label_4836f0;
        case 0x4836f4u: goto label_4836f4;
        case 0x4836f8u: goto label_4836f8;
        case 0x4836fcu: goto label_4836fc;
        case 0x483700u: goto label_483700;
        case 0x483704u: goto label_483704;
        case 0x483708u: goto label_483708;
        case 0x48370cu: goto label_48370c;
        case 0x483710u: goto label_483710;
        case 0x483714u: goto label_483714;
        case 0x483718u: goto label_483718;
        case 0x48371cu: goto label_48371c;
        case 0x483720u: goto label_483720;
        case 0x483724u: goto label_483724;
        case 0x483728u: goto label_483728;
        case 0x48372cu: goto label_48372c;
        case 0x483730u: goto label_483730;
        case 0x483734u: goto label_483734;
        case 0x483738u: goto label_483738;
        case 0x48373cu: goto label_48373c;
        case 0x483740u: goto label_483740;
        case 0x483744u: goto label_483744;
        case 0x483748u: goto label_483748;
        case 0x48374cu: goto label_48374c;
        case 0x483750u: goto label_483750;
        case 0x483754u: goto label_483754;
        case 0x483758u: goto label_483758;
        case 0x48375cu: goto label_48375c;
        case 0x483760u: goto label_483760;
        case 0x483764u: goto label_483764;
        case 0x483768u: goto label_483768;
        case 0x48376cu: goto label_48376c;
        case 0x483770u: goto label_483770;
        case 0x483774u: goto label_483774;
        case 0x483778u: goto label_483778;
        case 0x48377cu: goto label_48377c;
        case 0x483780u: goto label_483780;
        case 0x483784u: goto label_483784;
        case 0x483788u: goto label_483788;
        case 0x48378cu: goto label_48378c;
        case 0x483790u: goto label_483790;
        case 0x483794u: goto label_483794;
        case 0x483798u: goto label_483798;
        case 0x48379cu: goto label_48379c;
        case 0x4837a0u: goto label_4837a0;
        case 0x4837a4u: goto label_4837a4;
        case 0x4837a8u: goto label_4837a8;
        case 0x4837acu: goto label_4837ac;
        case 0x4837b0u: goto label_4837b0;
        case 0x4837b4u: goto label_4837b4;
        case 0x4837b8u: goto label_4837b8;
        case 0x4837bcu: goto label_4837bc;
        case 0x4837c0u: goto label_4837c0;
        case 0x4837c4u: goto label_4837c4;
        case 0x4837c8u: goto label_4837c8;
        case 0x4837ccu: goto label_4837cc;
        case 0x4837d0u: goto label_4837d0;
        case 0x4837d4u: goto label_4837d4;
        case 0x4837d8u: goto label_4837d8;
        case 0x4837dcu: goto label_4837dc;
        case 0x4837e0u: goto label_4837e0;
        case 0x4837e4u: goto label_4837e4;
        case 0x4837e8u: goto label_4837e8;
        case 0x4837ecu: goto label_4837ec;
        case 0x4837f0u: goto label_4837f0;
        case 0x4837f4u: goto label_4837f4;
        case 0x4837f8u: goto label_4837f8;
        case 0x4837fcu: goto label_4837fc;
        case 0x483800u: goto label_483800;
        case 0x483804u: goto label_483804;
        case 0x483808u: goto label_483808;
        case 0x48380cu: goto label_48380c;
        case 0x483810u: goto label_483810;
        case 0x483814u: goto label_483814;
        case 0x483818u: goto label_483818;
        case 0x48381cu: goto label_48381c;
        case 0x483820u: goto label_483820;
        case 0x483824u: goto label_483824;
        case 0x483828u: goto label_483828;
        case 0x48382cu: goto label_48382c;
        case 0x483830u: goto label_483830;
        case 0x483834u: goto label_483834;
        case 0x483838u: goto label_483838;
        case 0x48383cu: goto label_48383c;
        case 0x483840u: goto label_483840;
        case 0x483844u: goto label_483844;
        case 0x483848u: goto label_483848;
        case 0x48384cu: goto label_48384c;
        case 0x483850u: goto label_483850;
        case 0x483854u: goto label_483854;
        case 0x483858u: goto label_483858;
        case 0x48385cu: goto label_48385c;
        case 0x483860u: goto label_483860;
        case 0x483864u: goto label_483864;
        case 0x483868u: goto label_483868;
        case 0x48386cu: goto label_48386c;
        case 0x483870u: goto label_483870;
        case 0x483874u: goto label_483874;
        case 0x483878u: goto label_483878;
        case 0x48387cu: goto label_48387c;
        case 0x483880u: goto label_483880;
        case 0x483884u: goto label_483884;
        case 0x483888u: goto label_483888;
        case 0x48388cu: goto label_48388c;
        case 0x483890u: goto label_483890;
        case 0x483894u: goto label_483894;
        case 0x483898u: goto label_483898;
        case 0x48389cu: goto label_48389c;
        case 0x4838a0u: goto label_4838a0;
        case 0x4838a4u: goto label_4838a4;
        case 0x4838a8u: goto label_4838a8;
        case 0x4838acu: goto label_4838ac;
        case 0x4838b0u: goto label_4838b0;
        case 0x4838b4u: goto label_4838b4;
        case 0x4838b8u: goto label_4838b8;
        case 0x4838bcu: goto label_4838bc;
        case 0x4838c0u: goto label_4838c0;
        case 0x4838c4u: goto label_4838c4;
        case 0x4838c8u: goto label_4838c8;
        case 0x4838ccu: goto label_4838cc;
        case 0x4838d0u: goto label_4838d0;
        case 0x4838d4u: goto label_4838d4;
        case 0x4838d8u: goto label_4838d8;
        case 0x4838dcu: goto label_4838dc;
        case 0x4838e0u: goto label_4838e0;
        case 0x4838e4u: goto label_4838e4;
        case 0x4838e8u: goto label_4838e8;
        case 0x4838ecu: goto label_4838ec;
        case 0x4838f0u: goto label_4838f0;
        case 0x4838f4u: goto label_4838f4;
        case 0x4838f8u: goto label_4838f8;
        case 0x4838fcu: goto label_4838fc;
        case 0x483900u: goto label_483900;
        case 0x483904u: goto label_483904;
        case 0x483908u: goto label_483908;
        case 0x48390cu: goto label_48390c;
        case 0x483910u: goto label_483910;
        case 0x483914u: goto label_483914;
        case 0x483918u: goto label_483918;
        case 0x48391cu: goto label_48391c;
        case 0x483920u: goto label_483920;
        case 0x483924u: goto label_483924;
        case 0x483928u: goto label_483928;
        case 0x48392cu: goto label_48392c;
        case 0x483930u: goto label_483930;
        case 0x483934u: goto label_483934;
        case 0x483938u: goto label_483938;
        case 0x48393cu: goto label_48393c;
        case 0x483940u: goto label_483940;
        case 0x483944u: goto label_483944;
        case 0x483948u: goto label_483948;
        case 0x48394cu: goto label_48394c;
        case 0x483950u: goto label_483950;
        case 0x483954u: goto label_483954;
        case 0x483958u: goto label_483958;
        case 0x48395cu: goto label_48395c;
        case 0x483960u: goto label_483960;
        case 0x483964u: goto label_483964;
        case 0x483968u: goto label_483968;
        case 0x48396cu: goto label_48396c;
        case 0x483970u: goto label_483970;
        case 0x483974u: goto label_483974;
        case 0x483978u: goto label_483978;
        case 0x48397cu: goto label_48397c;
        case 0x483980u: goto label_483980;
        case 0x483984u: goto label_483984;
        case 0x483988u: goto label_483988;
        case 0x48398cu: goto label_48398c;
        case 0x483990u: goto label_483990;
        case 0x483994u: goto label_483994;
        case 0x483998u: goto label_483998;
        case 0x48399cu: goto label_48399c;
        case 0x4839a0u: goto label_4839a0;
        case 0x4839a4u: goto label_4839a4;
        case 0x4839a8u: goto label_4839a8;
        case 0x4839acu: goto label_4839ac;
        case 0x4839b0u: goto label_4839b0;
        case 0x4839b4u: goto label_4839b4;
        case 0x4839b8u: goto label_4839b8;
        case 0x4839bcu: goto label_4839bc;
        case 0x4839c0u: goto label_4839c0;
        case 0x4839c4u: goto label_4839c4;
        case 0x4839c8u: goto label_4839c8;
        case 0x4839ccu: goto label_4839cc;
        case 0x4839d0u: goto label_4839d0;
        case 0x4839d4u: goto label_4839d4;
        case 0x4839d8u: goto label_4839d8;
        case 0x4839dcu: goto label_4839dc;
        case 0x4839e0u: goto label_4839e0;
        case 0x4839e4u: goto label_4839e4;
        case 0x4839e8u: goto label_4839e8;
        case 0x4839ecu: goto label_4839ec;
        case 0x4839f0u: goto label_4839f0;
        case 0x4839f4u: goto label_4839f4;
        case 0x4839f8u: goto label_4839f8;
        case 0x4839fcu: goto label_4839fc;
        case 0x483a00u: goto label_483a00;
        case 0x483a04u: goto label_483a04;
        case 0x483a08u: goto label_483a08;
        case 0x483a0cu: goto label_483a0c;
        case 0x483a10u: goto label_483a10;
        case 0x483a14u: goto label_483a14;
        case 0x483a18u: goto label_483a18;
        case 0x483a1cu: goto label_483a1c;
        case 0x483a20u: goto label_483a20;
        case 0x483a24u: goto label_483a24;
        case 0x483a28u: goto label_483a28;
        case 0x483a2cu: goto label_483a2c;
        case 0x483a30u: goto label_483a30;
        case 0x483a34u: goto label_483a34;
        case 0x483a38u: goto label_483a38;
        case 0x483a3cu: goto label_483a3c;
        case 0x483a40u: goto label_483a40;
        case 0x483a44u: goto label_483a44;
        case 0x483a48u: goto label_483a48;
        case 0x483a4cu: goto label_483a4c;
        case 0x483a50u: goto label_483a50;
        case 0x483a54u: goto label_483a54;
        case 0x483a58u: goto label_483a58;
        case 0x483a5cu: goto label_483a5c;
        case 0x483a60u: goto label_483a60;
        case 0x483a64u: goto label_483a64;
        case 0x483a68u: goto label_483a68;
        case 0x483a6cu: goto label_483a6c;
        case 0x483a70u: goto label_483a70;
        case 0x483a74u: goto label_483a74;
        case 0x483a78u: goto label_483a78;
        case 0x483a7cu: goto label_483a7c;
        case 0x483a80u: goto label_483a80;
        case 0x483a84u: goto label_483a84;
        case 0x483a88u: goto label_483a88;
        case 0x483a8cu: goto label_483a8c;
        case 0x483a90u: goto label_483a90;
        case 0x483a94u: goto label_483a94;
        case 0x483a98u: goto label_483a98;
        case 0x483a9cu: goto label_483a9c;
        case 0x483aa0u: goto label_483aa0;
        case 0x483aa4u: goto label_483aa4;
        case 0x483aa8u: goto label_483aa8;
        case 0x483aacu: goto label_483aac;
        case 0x483ab0u: goto label_483ab0;
        case 0x483ab4u: goto label_483ab4;
        case 0x483ab8u: goto label_483ab8;
        case 0x483abcu: goto label_483abc;
        case 0x483ac0u: goto label_483ac0;
        case 0x483ac4u: goto label_483ac4;
        case 0x483ac8u: goto label_483ac8;
        case 0x483accu: goto label_483acc;
        case 0x483ad0u: goto label_483ad0;
        case 0x483ad4u: goto label_483ad4;
        case 0x483ad8u: goto label_483ad8;
        case 0x483adcu: goto label_483adc;
        case 0x483ae0u: goto label_483ae0;
        case 0x483ae4u: goto label_483ae4;
        case 0x483ae8u: goto label_483ae8;
        case 0x483aecu: goto label_483aec;
        case 0x483af0u: goto label_483af0;
        case 0x483af4u: goto label_483af4;
        case 0x483af8u: goto label_483af8;
        case 0x483afcu: goto label_483afc;
        case 0x483b00u: goto label_483b00;
        case 0x483b04u: goto label_483b04;
        case 0x483b08u: goto label_483b08;
        case 0x483b0cu: goto label_483b0c;
        case 0x483b10u: goto label_483b10;
        case 0x483b14u: goto label_483b14;
        case 0x483b18u: goto label_483b18;
        case 0x483b1cu: goto label_483b1c;
        case 0x483b20u: goto label_483b20;
        case 0x483b24u: goto label_483b24;
        case 0x483b28u: goto label_483b28;
        case 0x483b2cu: goto label_483b2c;
        case 0x483b30u: goto label_483b30;
        case 0x483b34u: goto label_483b34;
        case 0x483b38u: goto label_483b38;
        case 0x483b3cu: goto label_483b3c;
        case 0x483b40u: goto label_483b40;
        case 0x483b44u: goto label_483b44;
        case 0x483b48u: goto label_483b48;
        case 0x483b4cu: goto label_483b4c;
        case 0x483b50u: goto label_483b50;
        case 0x483b54u: goto label_483b54;
        case 0x483b58u: goto label_483b58;
        case 0x483b5cu: goto label_483b5c;
        case 0x483b60u: goto label_483b60;
        case 0x483b64u: goto label_483b64;
        case 0x483b68u: goto label_483b68;
        case 0x483b6cu: goto label_483b6c;
        case 0x483b70u: goto label_483b70;
        case 0x483b74u: goto label_483b74;
        case 0x483b78u: goto label_483b78;
        case 0x483b7cu: goto label_483b7c;
        case 0x483b80u: goto label_483b80;
        case 0x483b84u: goto label_483b84;
        case 0x483b88u: goto label_483b88;
        case 0x483b8cu: goto label_483b8c;
        default: break;
    }

    ctx->pc = 0x4834e0u;

label_4834e0:
    // 0x4834e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4834e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4834e4:
    // 0x4834e4: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x4834e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_4834e8:
    // 0x4834e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4834e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4834ec:
    // 0x4834ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4834ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4834f0:
    // 0x4834f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4834f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4834f4:
    // 0x4834f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4834f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4834f8:
    // 0x4834f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4834f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4834fc:
    // 0x4834fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4834fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483500:
    // 0x483500: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x483500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_483504:
    // 0x483504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x483504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483508:
    // 0x483508: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x483508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_48350c:
    // 0x48350c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x48350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_483510:
    // 0x483510: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x483510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_483514:
    // 0x483514: 0xc08bff0  jal         func_22FFC0
label_483518:
    if (ctx->pc == 0x483518u) {
        ctx->pc = 0x483518u;
            // 0x483518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48351Cu;
        goto label_48351c;
    }
    ctx->pc = 0x483514u;
    SET_GPR_U32(ctx, 31, 0x48351Cu);
    ctx->pc = 0x483518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483514u;
            // 0x483518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48351Cu; }
        if (ctx->pc != 0x48351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48351Cu; }
        if (ctx->pc != 0x48351Cu) { return; }
    }
    ctx->pc = 0x48351Cu;
label_48351c:
    // 0x48351c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483520:
    // 0x483520: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x483520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_483524:
    // 0x483524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x483524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483528:
    // 0x483528: 0xc08914c  jal         func_224530
label_48352c:
    if (ctx->pc == 0x48352Cu) {
        ctx->pc = 0x48352Cu;
            // 0x48352c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483530u;
        goto label_483530;
    }
    ctx->pc = 0x483528u;
    SET_GPR_U32(ctx, 31, 0x483530u);
    ctx->pc = 0x48352Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483528u;
            // 0x48352c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483530u; }
        if (ctx->pc != 0x483530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483530u; }
        if (ctx->pc != 0x483530u) { return; }
    }
    ctx->pc = 0x483530u;
label_483530:
    // 0x483530: 0xc0e393c  jal         func_38E4F0
label_483534:
    if (ctx->pc == 0x483534u) {
        ctx->pc = 0x483534u;
            // 0x483534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483538u;
        goto label_483538;
    }
    ctx->pc = 0x483530u;
    SET_GPR_U32(ctx, 31, 0x483538u);
    ctx->pc = 0x483534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483530u;
            // 0x483534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483538u; }
        if (ctx->pc != 0x483538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483538u; }
        if (ctx->pc != 0x483538u) { return; }
    }
    ctx->pc = 0x483538u;
label_483538:
    // 0x483538: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x483538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_48353c:
    // 0x48353c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x48353cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_483540:
    // 0x483540: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x483540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_483544:
    // 0x483544: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x483544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_483548:
    // 0x483548: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x483548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_48354c:
    // 0x48354c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483550:
    // 0x483550: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x483550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_483554:
    // 0x483554: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x483554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_483558:
    // 0x483558: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x483558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48355c:
    // 0x48355c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x48355cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_483560:
    // 0x483560: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x483560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483564:
    // 0x483564: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x483564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483568:
    // 0x483568: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x483568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_48356c:
    // 0x48356c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x48356cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_483570:
    // 0x483570: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x483570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_483574:
    // 0x483574: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x483574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_483578:
    // 0x483578: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x483578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48357c:
    // 0x48357c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x48357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483580:
    // 0x483580: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x483580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483584:
    // 0x483584: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x483584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483588:
    // 0x483588: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x483588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_48358c:
    // 0x48358c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x48358cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_483590:
    // 0x483590: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x483590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_483594:
    // 0x483594: 0xc0892b0  jal         func_224AC0
label_483598:
    if (ctx->pc == 0x483598u) {
        ctx->pc = 0x483598u;
            // 0x483598: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x48359Cu;
        goto label_48359c;
    }
    ctx->pc = 0x483594u;
    SET_GPR_U32(ctx, 31, 0x48359Cu);
    ctx->pc = 0x483598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483594u;
            // 0x483598: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48359Cu; }
        if (ctx->pc != 0x48359Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48359Cu; }
        if (ctx->pc != 0x48359Cu) { return; }
    }
    ctx->pc = 0x48359Cu;
label_48359c:
    // 0x48359c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48359cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4835a0:
    // 0x4835a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4835a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4835a4:
    // 0x4835a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4835a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4835a8:
    // 0x4835a8: 0x3e00008  jr          $ra
label_4835ac:
    if (ctx->pc == 0x4835ACu) {
        ctx->pc = 0x4835ACu;
            // 0x4835ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4835B0u;
        goto label_4835b0;
    }
    ctx->pc = 0x4835A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4835ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4835A8u;
            // 0x4835ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4835B0u;
label_4835b0:
    // 0x4835b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4835b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4835b4:
    // 0x4835b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4835b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4835b8:
    // 0x4835b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4835b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4835bc:
    // 0x4835bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4835bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4835c0:
    // 0x4835c0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4835c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4835c4:
    // 0x4835c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4835c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4835c8:
    // 0x4835c8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4835c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4835cc:
    // 0x4835cc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4835ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4835d0:
    // 0x4835d0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4835d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4835d4:
    // 0x4835d4: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x4835d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4835d8:
    // 0x4835d8: 0xc088b74  jal         func_222DD0
label_4835dc:
    if (ctx->pc == 0x4835DCu) {
        ctx->pc = 0x4835DCu;
            // 0x4835dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4835E0u;
        goto label_4835e0;
    }
    ctx->pc = 0x4835D8u;
    SET_GPR_U32(ctx, 31, 0x4835E0u);
    ctx->pc = 0x4835DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4835D8u;
            // 0x4835dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4835E0u; }
        if (ctx->pc != 0x4835E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4835E0u; }
        if (ctx->pc != 0x4835E0u) { return; }
    }
    ctx->pc = 0x4835E0u;
label_4835e0:
    // 0x4835e0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4835e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4835e4:
    // 0x4835e4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4835e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4835e8:
    // 0x4835e8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4835e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4835ec:
    // 0x4835ec: 0x320f809  jalr        $t9
label_4835f0:
    if (ctx->pc == 0x4835F0u) {
        ctx->pc = 0x4835F0u;
            // 0x4835f0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4835F4u;
        goto label_4835f4;
    }
    ctx->pc = 0x4835ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4835F4u);
        ctx->pc = 0x4835F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4835ECu;
            // 0x4835f0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4835F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4835F4u; }
            if (ctx->pc != 0x4835F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4835F4u;
label_4835f4:
    // 0x4835f4: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4835f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4835f8:
    // 0x4835f8: 0xc088b74  jal         func_222DD0
label_4835fc:
    if (ctx->pc == 0x4835FCu) {
        ctx->pc = 0x4835FCu;
            // 0x4835fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483600u;
        goto label_483600;
    }
    ctx->pc = 0x4835F8u;
    SET_GPR_U32(ctx, 31, 0x483600u);
    ctx->pc = 0x4835FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4835F8u;
            // 0x4835fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483600u; }
        if (ctx->pc != 0x483600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483600u; }
        if (ctx->pc != 0x483600u) { return; }
    }
    ctx->pc = 0x483600u;
label_483600:
    // 0x483600: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x483600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_483604:
    // 0x483604: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x483604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_483608:
    // 0x483608: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x483608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_48360c:
    // 0x48360c: 0x320f809  jalr        $t9
label_483610:
    if (ctx->pc == 0x483610u) {
        ctx->pc = 0x483610u;
            // 0x483610: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x483614u;
        goto label_483614;
    }
    ctx->pc = 0x48360Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483614u);
        ctx->pc = 0x483610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48360Cu;
            // 0x483610: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x483614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483614u; }
            if (ctx->pc != 0x483614u) { return; }
        }
        }
    }
    ctx->pc = 0x483614u;
label_483614:
    // 0x483614: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x483614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483618:
    // 0x483618: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x483618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_48361c:
    // 0x48361c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_483620:
    // 0x483620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x483620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483624:
    // 0x483624: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x483624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_483628:
    // 0x483628: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x483628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_48362c:
    // 0x48362c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_483630:
    // 0x483630: 0xc08bff0  jal         func_22FFC0
label_483634:
    if (ctx->pc == 0x483634u) {
        ctx->pc = 0x483634u;
            // 0x483634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483638u;
        goto label_483638;
    }
    ctx->pc = 0x483630u;
    SET_GPR_U32(ctx, 31, 0x483638u);
    ctx->pc = 0x483634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483630u;
            // 0x483634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483638u; }
        if (ctx->pc != 0x483638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483638u; }
        if (ctx->pc != 0x483638u) { return; }
    }
    ctx->pc = 0x483638u;
label_483638:
    // 0x483638: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x483638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_48363c:
    // 0x48363c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_483640:
    // 0x483640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x483640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483644:
    // 0x483644: 0xc08914c  jal         func_224530
label_483648:
    if (ctx->pc == 0x483648u) {
        ctx->pc = 0x483648u;
            // 0x483648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48364Cu;
        goto label_48364c;
    }
    ctx->pc = 0x483644u;
    SET_GPR_U32(ctx, 31, 0x48364Cu);
    ctx->pc = 0x483648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483644u;
            // 0x483648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48364Cu; }
        if (ctx->pc != 0x48364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48364Cu; }
        if (ctx->pc != 0x48364Cu) { return; }
    }
    ctx->pc = 0x48364Cu;
label_48364c:
    // 0x48364c: 0xc0e393c  jal         func_38E4F0
label_483650:
    if (ctx->pc == 0x483650u) {
        ctx->pc = 0x483650u;
            // 0x483650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483654u;
        goto label_483654;
    }
    ctx->pc = 0x48364Cu;
    SET_GPR_U32(ctx, 31, 0x483654u);
    ctx->pc = 0x483650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48364Cu;
            // 0x483650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483654u; }
        if (ctx->pc != 0x483654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483654u; }
        if (ctx->pc != 0x483654u) { return; }
    }
    ctx->pc = 0x483654u;
label_483654:
    // 0x483654: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x483654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483658:
    // 0x483658: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x483658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_48365c:
    // 0x48365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_483660:
    // 0x483660: 0x0  nop
    ctx->pc = 0x483660u;
    // NOP
label_483664:
    // 0x483664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x483664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_483668:
    // 0x483668: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_48366c:
    if (ctx->pc == 0x48366Cu) {
        ctx->pc = 0x48366Cu;
            // 0x48366c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x483670u;
        goto label_483670;
    }
    ctx->pc = 0x483668u;
    {
        const bool branch_taken_0x483668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x483668) {
            ctx->pc = 0x48366Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483668u;
            // 0x48366c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x483680u;
            goto label_483680;
        }
    }
    ctx->pc = 0x483670u;
label_483670:
    // 0x483670: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x483670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_483674:
    // 0x483674: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x483674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_483678:
    // 0x483678: 0x10000006  b           . + 4 + (0x6 << 2)
label_48367c:
    if (ctx->pc == 0x48367Cu) {
        ctx->pc = 0x483680u;
        goto label_483680;
    }
    ctx->pc = 0x483678u;
    {
        const bool branch_taken_0x483678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483678) {
            ctx->pc = 0x483694u;
            goto label_483694;
        }
    }
    ctx->pc = 0x483680u;
label_483680:
    // 0x483680: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x483680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_483684:
    // 0x483684: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x483684u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_483688:
    // 0x483688: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x483688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_48368c:
    // 0x48368c: 0x0  nop
    ctx->pc = 0x48368cu;
    // NOP
label_483690:
    // 0x483690: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x483690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_483694:
    // 0x483694: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x483694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_483698:
    // 0x483698: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x483698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_48369c:
    // 0x48369c: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x48369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_4836a0:
    // 0x4836a0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x4836a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4836a4:
    // 0x4836a4: 0xc0b89e4  jal         func_2E2790
label_4836a8:
    if (ctx->pc == 0x4836A8u) {
        ctx->pc = 0x4836A8u;
            // 0x4836a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4836ACu;
        goto label_4836ac;
    }
    ctx->pc = 0x4836A4u;
    SET_GPR_U32(ctx, 31, 0x4836ACu);
    ctx->pc = 0x4836A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4836A4u;
            // 0x4836a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836ACu; }
        if (ctx->pc != 0x4836ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836ACu; }
        if (ctx->pc != 0x4836ACu) { return; }
    }
    ctx->pc = 0x4836ACu;
label_4836ac:
    // 0x4836ac: 0xc60101d4  lwc1        $f1, 0x1D4($s0)
    ctx->pc = 0x4836acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4836b0:
    // 0x4836b0: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x4836b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_4836b4:
    // 0x4836b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4836b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4836b8:
    // 0x4836b8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4836b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4836bc:
    // 0x4836bc: 0xc60c01d0  lwc1        $f12, 0x1D0($s0)
    ctx->pc = 0x4836bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4836c0:
    // 0x4836c0: 0xc60e01d8  lwc1        $f14, 0x1D8($s0)
    ctx->pc = 0x4836c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4836c4:
    // 0x4836c4: 0xc04cbd8  jal         func_132F60
label_4836c8:
    if (ctx->pc == 0x4836C8u) {
        ctx->pc = 0x4836C8u;
            // 0x4836c8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4836CCu;
        goto label_4836cc;
    }
    ctx->pc = 0x4836C4u;
    SET_GPR_U32(ctx, 31, 0x4836CCu);
    ctx->pc = 0x4836C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4836C4u;
            // 0x4836c8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836CCu; }
        if (ctx->pc != 0x4836CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836CCu; }
        if (ctx->pc != 0x4836CCu) { return; }
    }
    ctx->pc = 0x4836CCu;
label_4836cc:
    // 0x4836cc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x4836ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_4836d0:
    // 0x4836d0: 0xc04c74c  jal         func_131D30
label_4836d4:
    if (ctx->pc == 0x4836D4u) {
        ctx->pc = 0x4836D4u;
            // 0x4836d4: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x4836D8u;
        goto label_4836d8;
    }
    ctx->pc = 0x4836D0u;
    SET_GPR_U32(ctx, 31, 0x4836D8u);
    ctx->pc = 0x4836D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4836D0u;
            // 0x4836d4: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836D8u; }
        if (ctx->pc != 0x4836D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836D8u; }
        if (ctx->pc != 0x4836D8u) { return; }
    }
    ctx->pc = 0x4836D8u;
label_4836d8:
    // 0x4836d8: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x4836d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_4836dc:
    // 0x4836dc: 0xc04c74c  jal         func_131D30
label_4836e0:
    if (ctx->pc == 0x4836E0u) {
        ctx->pc = 0x4836E0u;
            // 0x4836e0: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x4836E4u;
        goto label_4836e4;
    }
    ctx->pc = 0x4836DCu;
    SET_GPR_U32(ctx, 31, 0x4836E4u);
    ctx->pc = 0x4836E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4836DCu;
            // 0x4836e0: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836E4u; }
        if (ctx->pc != 0x4836E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836E4u; }
        if (ctx->pc != 0x4836E4u) { return; }
    }
    ctx->pc = 0x4836E4u;
label_4836e4:
    // 0x4836e4: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x4836e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_4836e8:
    // 0x4836e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4836e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4836ec:
    // 0x4836ec: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x4836ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_4836f0:
    // 0x4836f0: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x4836f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_4836f4:
    // 0x4836f4: 0xc04c74c  jal         func_131D30
label_4836f8:
    if (ctx->pc == 0x4836F8u) {
        ctx->pc = 0x4836F8u;
            // 0x4836f8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x4836FCu;
        goto label_4836fc;
    }
    ctx->pc = 0x4836F4u;
    SET_GPR_U32(ctx, 31, 0x4836FCu);
    ctx->pc = 0x4836F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4836F4u;
            // 0x4836f8: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836FCu; }
        if (ctx->pc != 0x4836FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4836FCu; }
        if (ctx->pc != 0x4836FCu) { return; }
    }
    ctx->pc = 0x4836FCu;
label_4836fc:
    // 0x4836fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4836fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_483700:
    // 0x483700: 0xc04c720  jal         func_131C80
label_483704:
    if (ctx->pc == 0x483704u) {
        ctx->pc = 0x483704u;
            // 0x483704: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x483708u;
        goto label_483708;
    }
    ctx->pc = 0x483700u;
    SET_GPR_U32(ctx, 31, 0x483708u);
    ctx->pc = 0x483704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483700u;
            // 0x483704: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483708u; }
        if (ctx->pc != 0x483708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483708u; }
        if (ctx->pc != 0x483708u) { return; }
    }
    ctx->pc = 0x483708u;
label_483708:
    // 0x483708: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x483708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_48370c:
    // 0x48370c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x48370cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_483710:
    // 0x483710: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x483710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483714:
    // 0x483714: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x483714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_483718:
    // 0x483718: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x483718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48371c:
    // 0x48371c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x48371cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_483720:
    // 0x483720: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x483720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_483724:
    // 0x483724: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x483724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483728:
    // 0x483728: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x483728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_48372c:
    // 0x48372c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x48372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483730:
    // 0x483730: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x483730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_483734:
    // 0x483734: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x483734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483738:
    // 0x483738: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x483738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_48373c:
    // 0x48373c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x48373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483740:
    // 0x483740: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x483740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483744:
    // 0x483744: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x483744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483748:
    // 0x483748: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x483748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48374c:
    // 0x48374c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x48374cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_483750:
    // 0x483750: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x483750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_483754:
    // 0x483754: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x483754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_483758:
    // 0x483758: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x483758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_48375c:
    // 0x48375c: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x48375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_483760:
    // 0x483760: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x483760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483764:
    // 0x483764: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x483764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483768:
    // 0x483768: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x483768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48376c:
    // 0x48376c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x48376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_483770:
    // 0x483770: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x483770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_483774:
    // 0x483774: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x483774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_483778:
    // 0x483778: 0xc0892b0  jal         func_224AC0
label_48377c:
    if (ctx->pc == 0x48377Cu) {
        ctx->pc = 0x48377Cu;
            // 0x48377c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x483780u;
        goto label_483780;
    }
    ctx->pc = 0x483778u;
    SET_GPR_U32(ctx, 31, 0x483780u);
    ctx->pc = 0x48377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483778u;
            // 0x48377c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483780u; }
        if (ctx->pc != 0x483780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483780u; }
        if (ctx->pc != 0x483780u) { return; }
    }
    ctx->pc = 0x483780u;
label_483780:
    // 0x483780: 0xa2000214  sb          $zero, 0x214($s0)
    ctx->pc = 0x483780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 532), (uint8_t)GPR_U32(ctx, 0));
label_483784:
    // 0x483784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x483784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483788:
    // 0x483788: 0xa2030215  sb          $v1, 0x215($s0)
    ctx->pc = 0x483788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 533), (uint8_t)GPR_U32(ctx, 3));
label_48378c:
    // 0x48378c: 0xa2000216  sb          $zero, 0x216($s0)
    ctx->pc = 0x48378cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 534), (uint8_t)GPR_U32(ctx, 0));
label_483790:
    // 0x483790: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x483790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_483794:
    // 0x483794: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x483794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483798:
    // 0x483798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x483798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48379c:
    // 0x48379c: 0x0  nop
    ctx->pc = 0x48379cu;
    // NOP
label_4837a0:
    // 0x4837a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4837a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4837a4:
    // 0x4837a4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4837a8:
    if (ctx->pc == 0x4837A8u) {
        ctx->pc = 0x4837A8u;
            // 0x4837a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4837ACu;
        goto label_4837ac;
    }
    ctx->pc = 0x4837A4u;
    {
        const bool branch_taken_0x4837a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4837a4) {
            ctx->pc = 0x4837A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4837A4u;
            // 0x4837a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4837BCu;
            goto label_4837bc;
        }
    }
    ctx->pc = 0x4837ACu;
label_4837ac:
    // 0x4837ac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4837acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4837b0:
    // 0x4837b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4837b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4837b4:
    // 0x4837b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4837b8:
    if (ctx->pc == 0x4837B8u) {
        ctx->pc = 0x4837B8u;
            // 0x4837b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4837BCu;
        goto label_4837bc;
    }
    ctx->pc = 0x4837B4u;
    {
        const bool branch_taken_0x4837b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4837B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4837B4u;
            // 0x4837b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4837b4) {
            ctx->pc = 0x4837D4u;
            goto label_4837d4;
        }
    }
    ctx->pc = 0x4837BCu;
label_4837bc:
    // 0x4837bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4837bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4837c0:
    // 0x4837c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4837c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4837c4:
    // 0x4837c4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4837c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4837c8:
    // 0x4837c8: 0x0  nop
    ctx->pc = 0x4837c8u;
    // NOP
label_4837cc:
    // 0x4837cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4837ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4837d0:
    // 0x4837d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4837d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4837d4:
    // 0x4837d4: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
label_4837d8:
    if (ctx->pc == 0x4837D8u) {
        ctx->pc = 0x4837D8u;
            // 0x4837d8: 0x24030051  addiu       $v1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->pc = 0x4837DCu;
        goto label_4837dc;
    }
    ctx->pc = 0x4837D4u;
    {
        const bool branch_taken_0x4837d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4837d4) {
            ctx->pc = 0x4837D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4837D4u;
            // 0x4837d8: 0x24030051  addiu       $v1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483808u;
            goto label_483808;
        }
    }
    ctx->pc = 0x4837DCu;
label_4837dc:
    // 0x4837dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4837dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4837e0:
    // 0x4837e0: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_4837e4:
    if (ctx->pc == 0x4837E4u) {
        ctx->pc = 0x4837E4u;
            // 0x4837e4: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4837E8u;
        goto label_4837e8;
    }
    ctx->pc = 0x4837E0u;
    {
        const bool branch_taken_0x4837e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4837e0) {
            ctx->pc = 0x4837E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4837E0u;
            // 0x4837e4: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483800u;
            goto label_483800;
        }
    }
    ctx->pc = 0x4837E8u;
label_4837e8:
    // 0x4837e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4837e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4837ec:
    // 0x4837ec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4837f0:
    if (ctx->pc == 0x4837F0u) {
        ctx->pc = 0x4837F4u;
        goto label_4837f4;
    }
    ctx->pc = 0x4837ECu;
    {
        const bool branch_taken_0x4837ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4837ec) {
            ctx->pc = 0x4837FCu;
            goto label_4837fc;
        }
    }
    ctx->pc = 0x4837F4u;
label_4837f4:
    // 0x4837f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4837f8:
    if (ctx->pc == 0x4837F8u) {
        ctx->pc = 0x4837F8u;
            // 0x4837f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4837FCu;
        goto label_4837fc;
    }
    ctx->pc = 0x4837F4u;
    {
        const bool branch_taken_0x4837f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4837F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4837F4u;
            // 0x4837f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4837f4) {
            ctx->pc = 0x483810u;
            goto label_483810;
        }
    }
    ctx->pc = 0x4837FCu;
label_4837fc:
    // 0x4837fc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x4837fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_483800:
    // 0x483800: 0x10000002  b           . + 4 + (0x2 << 2)
label_483804:
    if (ctx->pc == 0x483804u) {
        ctx->pc = 0x483804u;
            // 0x483804: 0xa203004c  sb          $v1, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x483808u;
        goto label_483808;
    }
    ctx->pc = 0x483800u;
    {
        const bool branch_taken_0x483800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x483804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483800u;
            // 0x483804: 0xa203004c  sb          $v1, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483800) {
            ctx->pc = 0x48380Cu;
            goto label_48380c;
        }
    }
    ctx->pc = 0x483808u;
label_483808:
    // 0x483808: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x483808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_48380c:
    // 0x48380c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483810:
    // 0x483810: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x483810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_483814:
    // 0x483814: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x483814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_483818:
    // 0x483818: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x483818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_48381c:
    // 0x48381c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x48381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_483820:
    // 0x483820: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x483820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_483824:
    // 0x483824: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x483824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_483828:
    // 0x483828: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x483828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_48382c:
    // 0x48382c: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x48382cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_483830:
    // 0x483830: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x483830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_483834:
    // 0x483834: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x483834u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_483838:
    // 0x483838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x483838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48383c:
    // 0x48383c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x48383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_483840:
    // 0x483840: 0xc6000224  lwc1        $f0, 0x224($s0)
    ctx->pc = 0x483840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483844:
    // 0x483844: 0xe6000220  swc1        $f0, 0x220($s0)
    ctx->pc = 0x483844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
label_483848:
    // 0x483848: 0xa200022c  sb          $zero, 0x22C($s0)
    ctx->pc = 0x483848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 556), (uint8_t)GPR_U32(ctx, 0));
label_48384c:
    // 0x48384c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_483850:
    // 0x483850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483854:
    // 0x483854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483858:
    // 0x483858: 0x3e00008  jr          $ra
label_48385c:
    if (ctx->pc == 0x48385Cu) {
        ctx->pc = 0x48385Cu;
            // 0x48385c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x483860u;
        goto label_483860;
    }
    ctx->pc = 0x483858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483858u;
            // 0x48385c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483860u;
label_483860:
    // 0x483860: 0x3e00008  jr          $ra
label_483864:
    if (ctx->pc == 0x483864u) {
        ctx->pc = 0x483864u;
            // 0x483864: 0x24025244  addiu       $v0, $zero, 0x5244 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21060));
        ctx->pc = 0x483868u;
        goto label_483868;
    }
    ctx->pc = 0x483860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483860u;
            // 0x483864: 0x24025244  addiu       $v0, $zero, 0x5244 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483868u;
label_483868:
    // 0x483868: 0x0  nop
    ctx->pc = 0x483868u;
    // NOP
label_48386c:
    // 0x48386c: 0x0  nop
    ctx->pc = 0x48386cu;
    // NOP
label_483870:
    // 0x483870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x483870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_483874:
    // 0x483874: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x483874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_483878:
    // 0x483878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x483878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48387c:
    // 0x48387c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_483880:
    // 0x483880: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x483880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483884:
    // 0x483884: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_483888:
    // 0x483888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48388c:
    // 0x48388c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483890:
    // 0x483890: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x483890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_483894:
    // 0x483894: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_483898:
    if (ctx->pc == 0x483898u) {
        ctx->pc = 0x483898u;
            // 0x483898: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48389Cu;
        goto label_48389c;
    }
    ctx->pc = 0x483894u;
    {
        const bool branch_taken_0x483894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483894u;
            // 0x483898: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483894) {
            ctx->pc = 0x4838D8u;
            goto label_4838d8;
        }
    }
    ctx->pc = 0x48389Cu;
label_48389c:
    // 0x48389c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48389cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4838a0:
    // 0x4838a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4838a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4838a4:
    // 0x4838a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4838a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4838a8:
    // 0x4838a8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4838a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4838ac:
    // 0x4838ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4838acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4838b0:
    // 0x4838b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4838b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4838b4:
    // 0x4838b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4838b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4838b8:
    // 0x4838b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4838b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4838bc:
    // 0x4838bc: 0x320f809  jalr        $t9
label_4838c0:
    if (ctx->pc == 0x4838C0u) {
        ctx->pc = 0x4838C4u;
        goto label_4838c4;
    }
    ctx->pc = 0x4838BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4838C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4838C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4838C4u; }
            if (ctx->pc != 0x4838C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4838C4u;
label_4838c4:
    // 0x4838c4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4838c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4838c8:
    // 0x4838c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4838c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4838cc:
    // 0x4838cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4838ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4838d0:
    // 0x4838d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4838d4:
    if (ctx->pc == 0x4838D4u) {
        ctx->pc = 0x4838D4u;
            // 0x4838d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4838D8u;
        goto label_4838d8;
    }
    ctx->pc = 0x4838D0u;
    {
        const bool branch_taken_0x4838d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4838D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4838D0u;
            // 0x4838d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4838d0) {
            ctx->pc = 0x4838A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4838a8;
        }
    }
    ctx->pc = 0x4838D8u;
label_4838d8:
    // 0x4838d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4838d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4838dc:
    // 0x4838dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4838dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4838e0:
    // 0x4838e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4838e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4838e4:
    // 0x4838e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4838e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4838e8:
    // 0x4838e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4838e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4838ec:
    // 0x4838ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4838ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4838f0:
    // 0x4838f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4838f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4838f4:
    // 0x4838f4: 0x3e00008  jr          $ra
label_4838f8:
    if (ctx->pc == 0x4838F8u) {
        ctx->pc = 0x4838F8u;
            // 0x4838f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4838FCu;
        goto label_4838fc;
    }
    ctx->pc = 0x4838F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4838F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4838F4u;
            // 0x4838f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4838FCu;
label_4838fc:
    // 0x4838fc: 0x0  nop
    ctx->pc = 0x4838fcu;
    // NOP
label_483900:
    // 0x483900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x483900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_483904:
    // 0x483904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x483904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483908:
    // 0x483908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48390c:
    // 0x48390c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x48390cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_483910:
    // 0x483910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483914:
    // 0x483914: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x483914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_483918:
    // 0x483918: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x483918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48391c:
    // 0x48391c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x48391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_483920:
    // 0x483920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x483920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_483924:
    // 0x483924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x483924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_483928:
    // 0x483928: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x483928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_48392c:
    // 0x48392c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x48392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483930:
    // 0x483930: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x483930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_483934:
    // 0x483934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x483934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_483938:
    // 0x483938: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x483938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_48393c:
    // 0x48393c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x48393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_483940:
    // 0x483940: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x483940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_483944:
    // 0x483944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x483944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_483948:
    // 0x483948: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x483948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_48394c:
    // 0x48394c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x48394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_483950:
    // 0x483950: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x483950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_483954:
    // 0x483954: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x483954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_483958:
    // 0x483958: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x483958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48395c:
    // 0x48395c: 0xc0a997c  jal         func_2A65F0
label_483960:
    if (ctx->pc == 0x483960u) {
        ctx->pc = 0x483960u;
            // 0x483960: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x483964u;
        goto label_483964;
    }
    ctx->pc = 0x48395Cu;
    SET_GPR_U32(ctx, 31, 0x483964u);
    ctx->pc = 0x483960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48395Cu;
            // 0x483960: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483964u; }
        if (ctx->pc != 0x483964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483964u; }
        if (ctx->pc != 0x483964u) { return; }
    }
    ctx->pc = 0x483964u;
label_483964:
    // 0x483964: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x483964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_483968:
    // 0x483968: 0xc0d879c  jal         func_361E70
label_48396c:
    if (ctx->pc == 0x48396Cu) {
        ctx->pc = 0x48396Cu;
            // 0x48396c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483970u;
        goto label_483970;
    }
    ctx->pc = 0x483968u;
    SET_GPR_U32(ctx, 31, 0x483970u);
    ctx->pc = 0x48396Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483968u;
            // 0x48396c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483970u; }
        if (ctx->pc != 0x483970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483970u; }
        if (ctx->pc != 0x483970u) { return; }
    }
    ctx->pc = 0x483970u;
label_483970:
    // 0x483970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_483974:
    // 0x483974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483978:
    // 0x483978: 0x3e00008  jr          $ra
label_48397c:
    if (ctx->pc == 0x48397Cu) {
        ctx->pc = 0x48397Cu;
            // 0x48397c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x483980u;
        goto label_483980;
    }
    ctx->pc = 0x483978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483978u;
            // 0x48397c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483980u;
label_483980:
    // 0x483980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x483980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_483984:
    // 0x483984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_483988:
    // 0x483988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48398c:
    // 0x48398c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x48398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_483990:
    // 0x483990: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_483994:
    if (ctx->pc == 0x483994u) {
        ctx->pc = 0x483994u;
            // 0x483994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483998u;
        goto label_483998;
    }
    ctx->pc = 0x483990u;
    {
        const bool branch_taken_0x483990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x483994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483990u;
            // 0x483994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483990) {
            ctx->pc = 0x483AB0u;
            goto label_483ab0;
        }
    }
    ctx->pc = 0x483998u;
label_483998:
    // 0x483998: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x483998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48399c:
    // 0x48399c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x48399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4839a0:
    // 0x4839a0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4839a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4839a4:
    // 0x4839a4: 0xc075128  jal         func_1D44A0
label_4839a8:
    if (ctx->pc == 0x4839A8u) {
        ctx->pc = 0x4839A8u;
            // 0x4839a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4839ACu;
        goto label_4839ac;
    }
    ctx->pc = 0x4839A4u;
    SET_GPR_U32(ctx, 31, 0x4839ACu);
    ctx->pc = 0x4839A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4839A4u;
            // 0x4839a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4839ACu; }
        if (ctx->pc != 0x4839ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4839ACu; }
        if (ctx->pc != 0x4839ACu) { return; }
    }
    ctx->pc = 0x4839ACu;
label_4839ac:
    // 0x4839ac: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4839acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4839b0:
    // 0x4839b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4839b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4839b4:
    // 0x4839b4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4839b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4839b8:
    // 0x4839b8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4839b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4839bc:
    // 0x4839bc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4839bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4839c0:
    // 0x4839c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4839c4:
    if (ctx->pc == 0x4839C4u) {
        ctx->pc = 0x4839C4u;
            // 0x4839c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4839C8u;
        goto label_4839c8;
    }
    ctx->pc = 0x4839C0u;
    {
        const bool branch_taken_0x4839c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4839C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4839C0u;
            // 0x4839c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4839c0) {
            ctx->pc = 0x4839D0u;
            goto label_4839d0;
        }
    }
    ctx->pc = 0x4839C8u;
label_4839c8:
    // 0x4839c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4839c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4839cc:
    // 0x4839cc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4839ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4839d0:
    // 0x4839d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4839d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4839d4:
    // 0x4839d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4839d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4839d8:
    // 0x4839d8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4839d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4839dc:
    // 0x4839dc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4839dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4839e0:
    // 0x4839e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4839e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4839e4:
    // 0x4839e4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4839e8:
    if (ctx->pc == 0x4839E8u) {
        ctx->pc = 0x4839E8u;
            // 0x4839e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4839ECu;
        goto label_4839ec;
    }
    ctx->pc = 0x4839E4u;
    {
        const bool branch_taken_0x4839e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4839e4) {
            ctx->pc = 0x4839E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4839E4u;
            // 0x4839e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4839F8u;
            goto label_4839f8;
        }
    }
    ctx->pc = 0x4839ECu;
label_4839ec:
    // 0x4839ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4839ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4839f0:
    // 0x4839f0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4839f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4839f4:
    // 0x4839f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4839f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4839f8:
    // 0x4839f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4839f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4839fc:
    // 0x4839fc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4839fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_483a00:
    // 0x483a00: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x483a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_483a04:
    // 0x483a04: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x483a04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_483a08:
    // 0x483a08: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_483a0c:
    if (ctx->pc == 0x483A0Cu) {
        ctx->pc = 0x483A0Cu;
            // 0x483a0c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x483A10u;
        goto label_483a10;
    }
    ctx->pc = 0x483A08u;
    {
        const bool branch_taken_0x483a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x483a08) {
            ctx->pc = 0x483A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483A08u;
            // 0x483a0c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483A1Cu;
            goto label_483a1c;
        }
    }
    ctx->pc = 0x483A10u;
label_483a10:
    // 0x483a10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x483a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_483a14:
    // 0x483a14: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x483a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_483a18:
    // 0x483a18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x483a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_483a1c:
    // 0x483a1c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x483a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_483a20:
    // 0x483a20: 0x320f809  jalr        $t9
label_483a24:
    if (ctx->pc == 0x483A24u) {
        ctx->pc = 0x483A24u;
            // 0x483a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483A28u;
        goto label_483a28;
    }
    ctx->pc = 0x483A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x483A28u);
        ctx->pc = 0x483A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483A20u;
            // 0x483a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x483A28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x483A28u; }
            if (ctx->pc != 0x483A28u) { return; }
        }
        }
    }
    ctx->pc = 0x483A28u;
label_483a28:
    // 0x483a28: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x483a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_483a2c:
    // 0x483a2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483a30:
    // 0x483a30: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x483a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_483a34:
    // 0x483a34: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x483a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_483a38:
    // 0x483a38: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x483a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_483a3c:
    // 0x483a3c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x483a3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_483a40:
    // 0x483a40: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_483a44:
    if (ctx->pc == 0x483A44u) {
        ctx->pc = 0x483A44u;
            // 0x483a44: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x483A48u;
        goto label_483a48;
    }
    ctx->pc = 0x483A40u;
    {
        const bool branch_taken_0x483a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x483a40) {
            ctx->pc = 0x483A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483A40u;
            // 0x483a44: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483A54u;
            goto label_483a54;
        }
    }
    ctx->pc = 0x483A48u;
label_483a48:
    // 0x483a48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483a4c:
    // 0x483a4c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x483a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_483a50:
    // 0x483a50: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x483a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_483a54:
    // 0x483a54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483a58:
    // 0x483a58: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x483a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_483a5c:
    // 0x483a5c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x483a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_483a60:
    // 0x483a60: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x483a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_483a64:
    // 0x483a64: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x483a64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_483a68:
    // 0x483a68: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_483a6c:
    if (ctx->pc == 0x483A6Cu) {
        ctx->pc = 0x483A70u;
        goto label_483a70;
    }
    ctx->pc = 0x483A68u;
    {
        const bool branch_taken_0x483a68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x483a68) {
            ctx->pc = 0x483A78u;
            goto label_483a78;
        }
    }
    ctx->pc = 0x483A70u;
label_483a70:
    // 0x483a70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483a74:
    // 0x483a74: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x483a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_483a78:
    // 0x483a78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483a7c:
    // 0x483a7c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x483a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_483a80:
    // 0x483a80: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x483a80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_483a84:
    // 0x483a84: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_483a88:
    if (ctx->pc == 0x483A88u) {
        ctx->pc = 0x483A8Cu;
        goto label_483a8c;
    }
    ctx->pc = 0x483A84u;
    {
        const bool branch_taken_0x483a84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x483a84) {
            ctx->pc = 0x483A94u;
            goto label_483a94;
        }
    }
    ctx->pc = 0x483A8Cu;
label_483a8c:
    // 0x483a8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483a90:
    // 0x483a90: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x483a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_483a94:
    // 0x483a94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483a98:
    // 0x483a98: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x483a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_483a9c:
    // 0x483a9c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x483a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_483aa0:
    // 0x483aa0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_483aa4:
    if (ctx->pc == 0x483AA4u) {
        ctx->pc = 0x483AA4u;
            // 0x483aa4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x483AA8u;
        goto label_483aa8;
    }
    ctx->pc = 0x483AA0u;
    {
        const bool branch_taken_0x483aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x483aa0) {
            ctx->pc = 0x483AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483AA0u;
            // 0x483aa4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483AB4u;
            goto label_483ab4;
        }
    }
    ctx->pc = 0x483AA8u;
label_483aa8:
    // 0x483aa8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x483aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_483aac:
    // 0x483aac: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x483aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_483ab0:
    // 0x483ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_483ab4:
    // 0x483ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483ab8:
    // 0x483ab8: 0x3e00008  jr          $ra
label_483abc:
    if (ctx->pc == 0x483ABCu) {
        ctx->pc = 0x483ABCu;
            // 0x483abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x483AC0u;
        goto label_483ac0;
    }
    ctx->pc = 0x483AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483AB8u;
            // 0x483abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483AC0u;
label_483ac0:
    // 0x483ac0: 0x81208a0  j           func_482280
label_483ac4:
    if (ctx->pc == 0x483AC4u) {
        ctx->pc = 0x483AC4u;
            // 0x483ac4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x483AC8u;
        goto label_483ac8;
    }
    ctx->pc = 0x483AC0u;
    ctx->pc = 0x483AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483AC0u;
            // 0x483ac4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482280u;
    {
        auto targetFn = runtime->lookupFunction(0x482280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x483AC8u;
label_483ac8:
    // 0x483ac8: 0x0  nop
    ctx->pc = 0x483ac8u;
    // NOP
label_483acc:
    // 0x483acc: 0x0  nop
    ctx->pc = 0x483accu;
    // NOP
label_483ad0:
    // 0x483ad0: 0x81209cc  j           func_482730
label_483ad4:
    if (ctx->pc == 0x483AD4u) {
        ctx->pc = 0x483AD4u;
            // 0x483ad4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x483AD8u;
        goto label_483ad8;
    }
    ctx->pc = 0x483AD0u;
    ctx->pc = 0x483AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483AD0u;
            // 0x483ad4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482730u;
    {
        auto targetFn = runtime->lookupFunction(0x482730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x483AD8u;
label_483ad8:
    // 0x483ad8: 0x0  nop
    ctx->pc = 0x483ad8u;
    // NOP
label_483adc:
    // 0x483adc: 0x0  nop
    ctx->pc = 0x483adcu;
    // NOP
label_483ae0:
    // 0x483ae0: 0x8120848  j           func_482120
label_483ae4:
    if (ctx->pc == 0x483AE4u) {
        ctx->pc = 0x483AE4u;
            // 0x483ae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x483AE8u;
        goto label_483ae8;
    }
    ctx->pc = 0x483AE0u;
    ctx->pc = 0x483AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483AE0u;
            // 0x483ae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482120u;
    if (runtime->hasFunction(0x482120u)) {
        auto targetFn = runtime->lookupFunction(0x482120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00482120_0x482120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x483AE8u;
label_483ae8:
    // 0x483ae8: 0x0  nop
    ctx->pc = 0x483ae8u;
    // NOP
label_483aec:
    // 0x483aec: 0x0  nop
    ctx->pc = 0x483aecu;
    // NOP
label_483af0:
    // 0x483af0: 0x8120824  j           func_482090
label_483af4:
    if (ctx->pc == 0x483AF4u) {
        ctx->pc = 0x483AF4u;
            // 0x483af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x483AF8u;
        goto label_483af8;
    }
    ctx->pc = 0x483AF0u;
    ctx->pc = 0x483AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483AF0u;
            // 0x483af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482090u;
    {
        auto targetFn = runtime->lookupFunction(0x482090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x483AF8u;
label_483af8:
    // 0x483af8: 0x0  nop
    ctx->pc = 0x483af8u;
    // NOP
label_483afc:
    // 0x483afc: 0x0  nop
    ctx->pc = 0x483afcu;
    // NOP
label_483b00:
    // 0x483b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x483b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_483b04:
    // 0x483b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x483b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_483b08:
    // 0x483b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_483b0c:
    // 0x483b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483b10:
    // 0x483b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x483b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483b14:
    // 0x483b14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_483b18:
    if (ctx->pc == 0x483B18u) {
        ctx->pc = 0x483B18u;
            // 0x483b18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483B1Cu;
        goto label_483b1c;
    }
    ctx->pc = 0x483B14u;
    {
        const bool branch_taken_0x483b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483B14u;
            // 0x483b18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483b14) {
            ctx->pc = 0x483B70u;
            goto label_483b70;
        }
    }
    ctx->pc = 0x483B1Cu;
label_483b1c:
    // 0x483b1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x483b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_483b20:
    // 0x483b20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x483b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_483b24:
    // 0x483b24: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x483b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
label_483b28:
    // 0x483b28: 0x2442f278  addiu       $v0, $v0, -0xD88
    ctx->pc = 0x483b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963832));
label_483b2c:
    // 0x483b2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x483b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_483b30:
    // 0x483b30: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_483b34:
    if (ctx->pc == 0x483B34u) {
        ctx->pc = 0x483B34u;
            // 0x483b34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x483B38u;
        goto label_483b38;
    }
    ctx->pc = 0x483B30u;
    {
        const bool branch_taken_0x483b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483B30u;
            // 0x483b34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483b30) {
            ctx->pc = 0x483B58u;
            goto label_483b58;
        }
    }
    ctx->pc = 0x483B38u;
label_483b38:
    // 0x483b38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x483b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_483b3c:
    // 0x483b3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x483b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_483b40:
    // 0x483b40: 0x2463f2f0  addiu       $v1, $v1, -0xD10
    ctx->pc = 0x483b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_483b44:
    // 0x483b44: 0x2442f328  addiu       $v0, $v0, -0xCD8
    ctx->pc = 0x483b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964008));
label_483b48:
    // 0x483b48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x483b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_483b4c:
    // 0x483b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x483b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483b50:
    // 0x483b50: 0xc120ee4  jal         func_483B90
label_483b54:
    if (ctx->pc == 0x483B54u) {
        ctx->pc = 0x483B54u;
            // 0x483b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x483B58u;
        goto label_483b58;
    }
    ctx->pc = 0x483B50u;
    SET_GPR_U32(ctx, 31, 0x483B58u);
    ctx->pc = 0x483B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483B50u;
            // 0x483b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x483B90u;
    if (runtime->hasFunction(0x483B90u)) {
        auto targetFn = runtime->lookupFunction(0x483B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483B58u; }
        if (ctx->pc != 0x483B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00483B90_0x483b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483B58u; }
        if (ctx->pc != 0x483B58u) { return; }
    }
    ctx->pc = 0x483B58u;
label_483b58:
    // 0x483b58: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x483b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_483b5c:
    // 0x483b5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x483b5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_483b60:
    // 0x483b60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_483b64:
    if (ctx->pc == 0x483B64u) {
        ctx->pc = 0x483B64u;
            // 0x483b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483B68u;
        goto label_483b68;
    }
    ctx->pc = 0x483B60u;
    {
        const bool branch_taken_0x483b60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x483b60) {
            ctx->pc = 0x483B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483B60u;
            // 0x483b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483B74u;
            goto label_483b74;
        }
    }
    ctx->pc = 0x483B68u;
label_483b68:
    // 0x483b68: 0xc0400a8  jal         func_1002A0
label_483b6c:
    if (ctx->pc == 0x483B6Cu) {
        ctx->pc = 0x483B6Cu;
            // 0x483b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483B70u;
        goto label_483b70;
    }
    ctx->pc = 0x483B68u;
    SET_GPR_U32(ctx, 31, 0x483B70u);
    ctx->pc = 0x483B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483B68u;
            // 0x483b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483B70u; }
        if (ctx->pc != 0x483B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483B70u; }
        if (ctx->pc != 0x483B70u) { return; }
    }
    ctx->pc = 0x483B70u;
label_483b70:
    // 0x483b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x483b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483b74:
    // 0x483b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x483b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_483b78:
    // 0x483b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483b7c:
    // 0x483b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483b80:
    // 0x483b80: 0x3e00008  jr          $ra
label_483b84:
    if (ctx->pc == 0x483B84u) {
        ctx->pc = 0x483B84u;
            // 0x483b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x483B88u;
        goto label_483b88;
    }
    ctx->pc = 0x483B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483B80u;
            // 0x483b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483B88u;
label_483b88:
    // 0x483b88: 0x0  nop
    ctx->pc = 0x483b88u;
    // NOP
label_483b8c:
    // 0x483b8c: 0x0  nop
    ctx->pc = 0x483b8cu;
    // NOP
}
