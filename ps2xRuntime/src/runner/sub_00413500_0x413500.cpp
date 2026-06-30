#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00413500
// Address: 0x413500 - 0x414340
void sub_00413500_0x413500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413500_0x413500");
#endif

    switch (ctx->pc) {
        case 0x413500u: goto label_413500;
        case 0x413504u: goto label_413504;
        case 0x413508u: goto label_413508;
        case 0x41350cu: goto label_41350c;
        case 0x413510u: goto label_413510;
        case 0x413514u: goto label_413514;
        case 0x413518u: goto label_413518;
        case 0x41351cu: goto label_41351c;
        case 0x413520u: goto label_413520;
        case 0x413524u: goto label_413524;
        case 0x413528u: goto label_413528;
        case 0x41352cu: goto label_41352c;
        case 0x413530u: goto label_413530;
        case 0x413534u: goto label_413534;
        case 0x413538u: goto label_413538;
        case 0x41353cu: goto label_41353c;
        case 0x413540u: goto label_413540;
        case 0x413544u: goto label_413544;
        case 0x413548u: goto label_413548;
        case 0x41354cu: goto label_41354c;
        case 0x413550u: goto label_413550;
        case 0x413554u: goto label_413554;
        case 0x413558u: goto label_413558;
        case 0x41355cu: goto label_41355c;
        case 0x413560u: goto label_413560;
        case 0x413564u: goto label_413564;
        case 0x413568u: goto label_413568;
        case 0x41356cu: goto label_41356c;
        case 0x413570u: goto label_413570;
        case 0x413574u: goto label_413574;
        case 0x413578u: goto label_413578;
        case 0x41357cu: goto label_41357c;
        case 0x413580u: goto label_413580;
        case 0x413584u: goto label_413584;
        case 0x413588u: goto label_413588;
        case 0x41358cu: goto label_41358c;
        case 0x413590u: goto label_413590;
        case 0x413594u: goto label_413594;
        case 0x413598u: goto label_413598;
        case 0x41359cu: goto label_41359c;
        case 0x4135a0u: goto label_4135a0;
        case 0x4135a4u: goto label_4135a4;
        case 0x4135a8u: goto label_4135a8;
        case 0x4135acu: goto label_4135ac;
        case 0x4135b0u: goto label_4135b0;
        case 0x4135b4u: goto label_4135b4;
        case 0x4135b8u: goto label_4135b8;
        case 0x4135bcu: goto label_4135bc;
        case 0x4135c0u: goto label_4135c0;
        case 0x4135c4u: goto label_4135c4;
        case 0x4135c8u: goto label_4135c8;
        case 0x4135ccu: goto label_4135cc;
        case 0x4135d0u: goto label_4135d0;
        case 0x4135d4u: goto label_4135d4;
        case 0x4135d8u: goto label_4135d8;
        case 0x4135dcu: goto label_4135dc;
        case 0x4135e0u: goto label_4135e0;
        case 0x4135e4u: goto label_4135e4;
        case 0x4135e8u: goto label_4135e8;
        case 0x4135ecu: goto label_4135ec;
        case 0x4135f0u: goto label_4135f0;
        case 0x4135f4u: goto label_4135f4;
        case 0x4135f8u: goto label_4135f8;
        case 0x4135fcu: goto label_4135fc;
        case 0x413600u: goto label_413600;
        case 0x413604u: goto label_413604;
        case 0x413608u: goto label_413608;
        case 0x41360cu: goto label_41360c;
        case 0x413610u: goto label_413610;
        case 0x413614u: goto label_413614;
        case 0x413618u: goto label_413618;
        case 0x41361cu: goto label_41361c;
        case 0x413620u: goto label_413620;
        case 0x413624u: goto label_413624;
        case 0x413628u: goto label_413628;
        case 0x41362cu: goto label_41362c;
        case 0x413630u: goto label_413630;
        case 0x413634u: goto label_413634;
        case 0x413638u: goto label_413638;
        case 0x41363cu: goto label_41363c;
        case 0x413640u: goto label_413640;
        case 0x413644u: goto label_413644;
        case 0x413648u: goto label_413648;
        case 0x41364cu: goto label_41364c;
        case 0x413650u: goto label_413650;
        case 0x413654u: goto label_413654;
        case 0x413658u: goto label_413658;
        case 0x41365cu: goto label_41365c;
        case 0x413660u: goto label_413660;
        case 0x413664u: goto label_413664;
        case 0x413668u: goto label_413668;
        case 0x41366cu: goto label_41366c;
        case 0x413670u: goto label_413670;
        case 0x413674u: goto label_413674;
        case 0x413678u: goto label_413678;
        case 0x41367cu: goto label_41367c;
        case 0x413680u: goto label_413680;
        case 0x413684u: goto label_413684;
        case 0x413688u: goto label_413688;
        case 0x41368cu: goto label_41368c;
        case 0x413690u: goto label_413690;
        case 0x413694u: goto label_413694;
        case 0x413698u: goto label_413698;
        case 0x41369cu: goto label_41369c;
        case 0x4136a0u: goto label_4136a0;
        case 0x4136a4u: goto label_4136a4;
        case 0x4136a8u: goto label_4136a8;
        case 0x4136acu: goto label_4136ac;
        case 0x4136b0u: goto label_4136b0;
        case 0x4136b4u: goto label_4136b4;
        case 0x4136b8u: goto label_4136b8;
        case 0x4136bcu: goto label_4136bc;
        case 0x4136c0u: goto label_4136c0;
        case 0x4136c4u: goto label_4136c4;
        case 0x4136c8u: goto label_4136c8;
        case 0x4136ccu: goto label_4136cc;
        case 0x4136d0u: goto label_4136d0;
        case 0x4136d4u: goto label_4136d4;
        case 0x4136d8u: goto label_4136d8;
        case 0x4136dcu: goto label_4136dc;
        case 0x4136e0u: goto label_4136e0;
        case 0x4136e4u: goto label_4136e4;
        case 0x4136e8u: goto label_4136e8;
        case 0x4136ecu: goto label_4136ec;
        case 0x4136f0u: goto label_4136f0;
        case 0x4136f4u: goto label_4136f4;
        case 0x4136f8u: goto label_4136f8;
        case 0x4136fcu: goto label_4136fc;
        case 0x413700u: goto label_413700;
        case 0x413704u: goto label_413704;
        case 0x413708u: goto label_413708;
        case 0x41370cu: goto label_41370c;
        case 0x413710u: goto label_413710;
        case 0x413714u: goto label_413714;
        case 0x413718u: goto label_413718;
        case 0x41371cu: goto label_41371c;
        case 0x413720u: goto label_413720;
        case 0x413724u: goto label_413724;
        case 0x413728u: goto label_413728;
        case 0x41372cu: goto label_41372c;
        case 0x413730u: goto label_413730;
        case 0x413734u: goto label_413734;
        case 0x413738u: goto label_413738;
        case 0x41373cu: goto label_41373c;
        case 0x413740u: goto label_413740;
        case 0x413744u: goto label_413744;
        case 0x413748u: goto label_413748;
        case 0x41374cu: goto label_41374c;
        case 0x413750u: goto label_413750;
        case 0x413754u: goto label_413754;
        case 0x413758u: goto label_413758;
        case 0x41375cu: goto label_41375c;
        case 0x413760u: goto label_413760;
        case 0x413764u: goto label_413764;
        case 0x413768u: goto label_413768;
        case 0x41376cu: goto label_41376c;
        case 0x413770u: goto label_413770;
        case 0x413774u: goto label_413774;
        case 0x413778u: goto label_413778;
        case 0x41377cu: goto label_41377c;
        case 0x413780u: goto label_413780;
        case 0x413784u: goto label_413784;
        case 0x413788u: goto label_413788;
        case 0x41378cu: goto label_41378c;
        case 0x413790u: goto label_413790;
        case 0x413794u: goto label_413794;
        case 0x413798u: goto label_413798;
        case 0x41379cu: goto label_41379c;
        case 0x4137a0u: goto label_4137a0;
        case 0x4137a4u: goto label_4137a4;
        case 0x4137a8u: goto label_4137a8;
        case 0x4137acu: goto label_4137ac;
        case 0x4137b0u: goto label_4137b0;
        case 0x4137b4u: goto label_4137b4;
        case 0x4137b8u: goto label_4137b8;
        case 0x4137bcu: goto label_4137bc;
        case 0x4137c0u: goto label_4137c0;
        case 0x4137c4u: goto label_4137c4;
        case 0x4137c8u: goto label_4137c8;
        case 0x4137ccu: goto label_4137cc;
        case 0x4137d0u: goto label_4137d0;
        case 0x4137d4u: goto label_4137d4;
        case 0x4137d8u: goto label_4137d8;
        case 0x4137dcu: goto label_4137dc;
        case 0x4137e0u: goto label_4137e0;
        case 0x4137e4u: goto label_4137e4;
        case 0x4137e8u: goto label_4137e8;
        case 0x4137ecu: goto label_4137ec;
        case 0x4137f0u: goto label_4137f0;
        case 0x4137f4u: goto label_4137f4;
        case 0x4137f8u: goto label_4137f8;
        case 0x4137fcu: goto label_4137fc;
        case 0x413800u: goto label_413800;
        case 0x413804u: goto label_413804;
        case 0x413808u: goto label_413808;
        case 0x41380cu: goto label_41380c;
        case 0x413810u: goto label_413810;
        case 0x413814u: goto label_413814;
        case 0x413818u: goto label_413818;
        case 0x41381cu: goto label_41381c;
        case 0x413820u: goto label_413820;
        case 0x413824u: goto label_413824;
        case 0x413828u: goto label_413828;
        case 0x41382cu: goto label_41382c;
        case 0x413830u: goto label_413830;
        case 0x413834u: goto label_413834;
        case 0x413838u: goto label_413838;
        case 0x41383cu: goto label_41383c;
        case 0x413840u: goto label_413840;
        case 0x413844u: goto label_413844;
        case 0x413848u: goto label_413848;
        case 0x41384cu: goto label_41384c;
        case 0x413850u: goto label_413850;
        case 0x413854u: goto label_413854;
        case 0x413858u: goto label_413858;
        case 0x41385cu: goto label_41385c;
        case 0x413860u: goto label_413860;
        case 0x413864u: goto label_413864;
        case 0x413868u: goto label_413868;
        case 0x41386cu: goto label_41386c;
        case 0x413870u: goto label_413870;
        case 0x413874u: goto label_413874;
        case 0x413878u: goto label_413878;
        case 0x41387cu: goto label_41387c;
        case 0x413880u: goto label_413880;
        case 0x413884u: goto label_413884;
        case 0x413888u: goto label_413888;
        case 0x41388cu: goto label_41388c;
        case 0x413890u: goto label_413890;
        case 0x413894u: goto label_413894;
        case 0x413898u: goto label_413898;
        case 0x41389cu: goto label_41389c;
        case 0x4138a0u: goto label_4138a0;
        case 0x4138a4u: goto label_4138a4;
        case 0x4138a8u: goto label_4138a8;
        case 0x4138acu: goto label_4138ac;
        case 0x4138b0u: goto label_4138b0;
        case 0x4138b4u: goto label_4138b4;
        case 0x4138b8u: goto label_4138b8;
        case 0x4138bcu: goto label_4138bc;
        case 0x4138c0u: goto label_4138c0;
        case 0x4138c4u: goto label_4138c4;
        case 0x4138c8u: goto label_4138c8;
        case 0x4138ccu: goto label_4138cc;
        case 0x4138d0u: goto label_4138d0;
        case 0x4138d4u: goto label_4138d4;
        case 0x4138d8u: goto label_4138d8;
        case 0x4138dcu: goto label_4138dc;
        case 0x4138e0u: goto label_4138e0;
        case 0x4138e4u: goto label_4138e4;
        case 0x4138e8u: goto label_4138e8;
        case 0x4138ecu: goto label_4138ec;
        case 0x4138f0u: goto label_4138f0;
        case 0x4138f4u: goto label_4138f4;
        case 0x4138f8u: goto label_4138f8;
        case 0x4138fcu: goto label_4138fc;
        case 0x413900u: goto label_413900;
        case 0x413904u: goto label_413904;
        case 0x413908u: goto label_413908;
        case 0x41390cu: goto label_41390c;
        case 0x413910u: goto label_413910;
        case 0x413914u: goto label_413914;
        case 0x413918u: goto label_413918;
        case 0x41391cu: goto label_41391c;
        case 0x413920u: goto label_413920;
        case 0x413924u: goto label_413924;
        case 0x413928u: goto label_413928;
        case 0x41392cu: goto label_41392c;
        case 0x413930u: goto label_413930;
        case 0x413934u: goto label_413934;
        case 0x413938u: goto label_413938;
        case 0x41393cu: goto label_41393c;
        case 0x413940u: goto label_413940;
        case 0x413944u: goto label_413944;
        case 0x413948u: goto label_413948;
        case 0x41394cu: goto label_41394c;
        case 0x413950u: goto label_413950;
        case 0x413954u: goto label_413954;
        case 0x413958u: goto label_413958;
        case 0x41395cu: goto label_41395c;
        case 0x413960u: goto label_413960;
        case 0x413964u: goto label_413964;
        case 0x413968u: goto label_413968;
        case 0x41396cu: goto label_41396c;
        case 0x413970u: goto label_413970;
        case 0x413974u: goto label_413974;
        case 0x413978u: goto label_413978;
        case 0x41397cu: goto label_41397c;
        case 0x413980u: goto label_413980;
        case 0x413984u: goto label_413984;
        case 0x413988u: goto label_413988;
        case 0x41398cu: goto label_41398c;
        case 0x413990u: goto label_413990;
        case 0x413994u: goto label_413994;
        case 0x413998u: goto label_413998;
        case 0x41399cu: goto label_41399c;
        case 0x4139a0u: goto label_4139a0;
        case 0x4139a4u: goto label_4139a4;
        case 0x4139a8u: goto label_4139a8;
        case 0x4139acu: goto label_4139ac;
        case 0x4139b0u: goto label_4139b0;
        case 0x4139b4u: goto label_4139b4;
        case 0x4139b8u: goto label_4139b8;
        case 0x4139bcu: goto label_4139bc;
        case 0x4139c0u: goto label_4139c0;
        case 0x4139c4u: goto label_4139c4;
        case 0x4139c8u: goto label_4139c8;
        case 0x4139ccu: goto label_4139cc;
        case 0x4139d0u: goto label_4139d0;
        case 0x4139d4u: goto label_4139d4;
        case 0x4139d8u: goto label_4139d8;
        case 0x4139dcu: goto label_4139dc;
        case 0x4139e0u: goto label_4139e0;
        case 0x4139e4u: goto label_4139e4;
        case 0x4139e8u: goto label_4139e8;
        case 0x4139ecu: goto label_4139ec;
        case 0x4139f0u: goto label_4139f0;
        case 0x4139f4u: goto label_4139f4;
        case 0x4139f8u: goto label_4139f8;
        case 0x4139fcu: goto label_4139fc;
        case 0x413a00u: goto label_413a00;
        case 0x413a04u: goto label_413a04;
        case 0x413a08u: goto label_413a08;
        case 0x413a0cu: goto label_413a0c;
        case 0x413a10u: goto label_413a10;
        case 0x413a14u: goto label_413a14;
        case 0x413a18u: goto label_413a18;
        case 0x413a1cu: goto label_413a1c;
        case 0x413a20u: goto label_413a20;
        case 0x413a24u: goto label_413a24;
        case 0x413a28u: goto label_413a28;
        case 0x413a2cu: goto label_413a2c;
        case 0x413a30u: goto label_413a30;
        case 0x413a34u: goto label_413a34;
        case 0x413a38u: goto label_413a38;
        case 0x413a3cu: goto label_413a3c;
        case 0x413a40u: goto label_413a40;
        case 0x413a44u: goto label_413a44;
        case 0x413a48u: goto label_413a48;
        case 0x413a4cu: goto label_413a4c;
        case 0x413a50u: goto label_413a50;
        case 0x413a54u: goto label_413a54;
        case 0x413a58u: goto label_413a58;
        case 0x413a5cu: goto label_413a5c;
        case 0x413a60u: goto label_413a60;
        case 0x413a64u: goto label_413a64;
        case 0x413a68u: goto label_413a68;
        case 0x413a6cu: goto label_413a6c;
        case 0x413a70u: goto label_413a70;
        case 0x413a74u: goto label_413a74;
        case 0x413a78u: goto label_413a78;
        case 0x413a7cu: goto label_413a7c;
        case 0x413a80u: goto label_413a80;
        case 0x413a84u: goto label_413a84;
        case 0x413a88u: goto label_413a88;
        case 0x413a8cu: goto label_413a8c;
        case 0x413a90u: goto label_413a90;
        case 0x413a94u: goto label_413a94;
        case 0x413a98u: goto label_413a98;
        case 0x413a9cu: goto label_413a9c;
        case 0x413aa0u: goto label_413aa0;
        case 0x413aa4u: goto label_413aa4;
        case 0x413aa8u: goto label_413aa8;
        case 0x413aacu: goto label_413aac;
        case 0x413ab0u: goto label_413ab0;
        case 0x413ab4u: goto label_413ab4;
        case 0x413ab8u: goto label_413ab8;
        case 0x413abcu: goto label_413abc;
        case 0x413ac0u: goto label_413ac0;
        case 0x413ac4u: goto label_413ac4;
        case 0x413ac8u: goto label_413ac8;
        case 0x413accu: goto label_413acc;
        case 0x413ad0u: goto label_413ad0;
        case 0x413ad4u: goto label_413ad4;
        case 0x413ad8u: goto label_413ad8;
        case 0x413adcu: goto label_413adc;
        case 0x413ae0u: goto label_413ae0;
        case 0x413ae4u: goto label_413ae4;
        case 0x413ae8u: goto label_413ae8;
        case 0x413aecu: goto label_413aec;
        case 0x413af0u: goto label_413af0;
        case 0x413af4u: goto label_413af4;
        case 0x413af8u: goto label_413af8;
        case 0x413afcu: goto label_413afc;
        case 0x413b00u: goto label_413b00;
        case 0x413b04u: goto label_413b04;
        case 0x413b08u: goto label_413b08;
        case 0x413b0cu: goto label_413b0c;
        case 0x413b10u: goto label_413b10;
        case 0x413b14u: goto label_413b14;
        case 0x413b18u: goto label_413b18;
        case 0x413b1cu: goto label_413b1c;
        case 0x413b20u: goto label_413b20;
        case 0x413b24u: goto label_413b24;
        case 0x413b28u: goto label_413b28;
        case 0x413b2cu: goto label_413b2c;
        case 0x413b30u: goto label_413b30;
        case 0x413b34u: goto label_413b34;
        case 0x413b38u: goto label_413b38;
        case 0x413b3cu: goto label_413b3c;
        case 0x413b40u: goto label_413b40;
        case 0x413b44u: goto label_413b44;
        case 0x413b48u: goto label_413b48;
        case 0x413b4cu: goto label_413b4c;
        case 0x413b50u: goto label_413b50;
        case 0x413b54u: goto label_413b54;
        case 0x413b58u: goto label_413b58;
        case 0x413b5cu: goto label_413b5c;
        case 0x413b60u: goto label_413b60;
        case 0x413b64u: goto label_413b64;
        case 0x413b68u: goto label_413b68;
        case 0x413b6cu: goto label_413b6c;
        case 0x413b70u: goto label_413b70;
        case 0x413b74u: goto label_413b74;
        case 0x413b78u: goto label_413b78;
        case 0x413b7cu: goto label_413b7c;
        case 0x413b80u: goto label_413b80;
        case 0x413b84u: goto label_413b84;
        case 0x413b88u: goto label_413b88;
        case 0x413b8cu: goto label_413b8c;
        case 0x413b90u: goto label_413b90;
        case 0x413b94u: goto label_413b94;
        case 0x413b98u: goto label_413b98;
        case 0x413b9cu: goto label_413b9c;
        case 0x413ba0u: goto label_413ba0;
        case 0x413ba4u: goto label_413ba4;
        case 0x413ba8u: goto label_413ba8;
        case 0x413bacu: goto label_413bac;
        case 0x413bb0u: goto label_413bb0;
        case 0x413bb4u: goto label_413bb4;
        case 0x413bb8u: goto label_413bb8;
        case 0x413bbcu: goto label_413bbc;
        case 0x413bc0u: goto label_413bc0;
        case 0x413bc4u: goto label_413bc4;
        case 0x413bc8u: goto label_413bc8;
        case 0x413bccu: goto label_413bcc;
        case 0x413bd0u: goto label_413bd0;
        case 0x413bd4u: goto label_413bd4;
        case 0x413bd8u: goto label_413bd8;
        case 0x413bdcu: goto label_413bdc;
        case 0x413be0u: goto label_413be0;
        case 0x413be4u: goto label_413be4;
        case 0x413be8u: goto label_413be8;
        case 0x413becu: goto label_413bec;
        case 0x413bf0u: goto label_413bf0;
        case 0x413bf4u: goto label_413bf4;
        case 0x413bf8u: goto label_413bf8;
        case 0x413bfcu: goto label_413bfc;
        case 0x413c00u: goto label_413c00;
        case 0x413c04u: goto label_413c04;
        case 0x413c08u: goto label_413c08;
        case 0x413c0cu: goto label_413c0c;
        case 0x413c10u: goto label_413c10;
        case 0x413c14u: goto label_413c14;
        case 0x413c18u: goto label_413c18;
        case 0x413c1cu: goto label_413c1c;
        case 0x413c20u: goto label_413c20;
        case 0x413c24u: goto label_413c24;
        case 0x413c28u: goto label_413c28;
        case 0x413c2cu: goto label_413c2c;
        case 0x413c30u: goto label_413c30;
        case 0x413c34u: goto label_413c34;
        case 0x413c38u: goto label_413c38;
        case 0x413c3cu: goto label_413c3c;
        case 0x413c40u: goto label_413c40;
        case 0x413c44u: goto label_413c44;
        case 0x413c48u: goto label_413c48;
        case 0x413c4cu: goto label_413c4c;
        case 0x413c50u: goto label_413c50;
        case 0x413c54u: goto label_413c54;
        case 0x413c58u: goto label_413c58;
        case 0x413c5cu: goto label_413c5c;
        case 0x413c60u: goto label_413c60;
        case 0x413c64u: goto label_413c64;
        case 0x413c68u: goto label_413c68;
        case 0x413c6cu: goto label_413c6c;
        case 0x413c70u: goto label_413c70;
        case 0x413c74u: goto label_413c74;
        case 0x413c78u: goto label_413c78;
        case 0x413c7cu: goto label_413c7c;
        case 0x413c80u: goto label_413c80;
        case 0x413c84u: goto label_413c84;
        case 0x413c88u: goto label_413c88;
        case 0x413c8cu: goto label_413c8c;
        case 0x413c90u: goto label_413c90;
        case 0x413c94u: goto label_413c94;
        case 0x413c98u: goto label_413c98;
        case 0x413c9cu: goto label_413c9c;
        case 0x413ca0u: goto label_413ca0;
        case 0x413ca4u: goto label_413ca4;
        case 0x413ca8u: goto label_413ca8;
        case 0x413cacu: goto label_413cac;
        case 0x413cb0u: goto label_413cb0;
        case 0x413cb4u: goto label_413cb4;
        case 0x413cb8u: goto label_413cb8;
        case 0x413cbcu: goto label_413cbc;
        case 0x413cc0u: goto label_413cc0;
        case 0x413cc4u: goto label_413cc4;
        case 0x413cc8u: goto label_413cc8;
        case 0x413cccu: goto label_413ccc;
        case 0x413cd0u: goto label_413cd0;
        case 0x413cd4u: goto label_413cd4;
        case 0x413cd8u: goto label_413cd8;
        case 0x413cdcu: goto label_413cdc;
        case 0x413ce0u: goto label_413ce0;
        case 0x413ce4u: goto label_413ce4;
        case 0x413ce8u: goto label_413ce8;
        case 0x413cecu: goto label_413cec;
        case 0x413cf0u: goto label_413cf0;
        case 0x413cf4u: goto label_413cf4;
        case 0x413cf8u: goto label_413cf8;
        case 0x413cfcu: goto label_413cfc;
        case 0x413d00u: goto label_413d00;
        case 0x413d04u: goto label_413d04;
        case 0x413d08u: goto label_413d08;
        case 0x413d0cu: goto label_413d0c;
        case 0x413d10u: goto label_413d10;
        case 0x413d14u: goto label_413d14;
        case 0x413d18u: goto label_413d18;
        case 0x413d1cu: goto label_413d1c;
        case 0x413d20u: goto label_413d20;
        case 0x413d24u: goto label_413d24;
        case 0x413d28u: goto label_413d28;
        case 0x413d2cu: goto label_413d2c;
        case 0x413d30u: goto label_413d30;
        case 0x413d34u: goto label_413d34;
        case 0x413d38u: goto label_413d38;
        case 0x413d3cu: goto label_413d3c;
        case 0x413d40u: goto label_413d40;
        case 0x413d44u: goto label_413d44;
        case 0x413d48u: goto label_413d48;
        case 0x413d4cu: goto label_413d4c;
        case 0x413d50u: goto label_413d50;
        case 0x413d54u: goto label_413d54;
        case 0x413d58u: goto label_413d58;
        case 0x413d5cu: goto label_413d5c;
        case 0x413d60u: goto label_413d60;
        case 0x413d64u: goto label_413d64;
        case 0x413d68u: goto label_413d68;
        case 0x413d6cu: goto label_413d6c;
        case 0x413d70u: goto label_413d70;
        case 0x413d74u: goto label_413d74;
        case 0x413d78u: goto label_413d78;
        case 0x413d7cu: goto label_413d7c;
        case 0x413d80u: goto label_413d80;
        case 0x413d84u: goto label_413d84;
        case 0x413d88u: goto label_413d88;
        case 0x413d8cu: goto label_413d8c;
        case 0x413d90u: goto label_413d90;
        case 0x413d94u: goto label_413d94;
        case 0x413d98u: goto label_413d98;
        case 0x413d9cu: goto label_413d9c;
        case 0x413da0u: goto label_413da0;
        case 0x413da4u: goto label_413da4;
        case 0x413da8u: goto label_413da8;
        case 0x413dacu: goto label_413dac;
        case 0x413db0u: goto label_413db0;
        case 0x413db4u: goto label_413db4;
        case 0x413db8u: goto label_413db8;
        case 0x413dbcu: goto label_413dbc;
        case 0x413dc0u: goto label_413dc0;
        case 0x413dc4u: goto label_413dc4;
        case 0x413dc8u: goto label_413dc8;
        case 0x413dccu: goto label_413dcc;
        case 0x413dd0u: goto label_413dd0;
        case 0x413dd4u: goto label_413dd4;
        case 0x413dd8u: goto label_413dd8;
        case 0x413ddcu: goto label_413ddc;
        case 0x413de0u: goto label_413de0;
        case 0x413de4u: goto label_413de4;
        case 0x413de8u: goto label_413de8;
        case 0x413decu: goto label_413dec;
        case 0x413df0u: goto label_413df0;
        case 0x413df4u: goto label_413df4;
        case 0x413df8u: goto label_413df8;
        case 0x413dfcu: goto label_413dfc;
        case 0x413e00u: goto label_413e00;
        case 0x413e04u: goto label_413e04;
        case 0x413e08u: goto label_413e08;
        case 0x413e0cu: goto label_413e0c;
        case 0x413e10u: goto label_413e10;
        case 0x413e14u: goto label_413e14;
        case 0x413e18u: goto label_413e18;
        case 0x413e1cu: goto label_413e1c;
        case 0x413e20u: goto label_413e20;
        case 0x413e24u: goto label_413e24;
        case 0x413e28u: goto label_413e28;
        case 0x413e2cu: goto label_413e2c;
        case 0x413e30u: goto label_413e30;
        case 0x413e34u: goto label_413e34;
        case 0x413e38u: goto label_413e38;
        case 0x413e3cu: goto label_413e3c;
        case 0x413e40u: goto label_413e40;
        case 0x413e44u: goto label_413e44;
        case 0x413e48u: goto label_413e48;
        case 0x413e4cu: goto label_413e4c;
        case 0x413e50u: goto label_413e50;
        case 0x413e54u: goto label_413e54;
        case 0x413e58u: goto label_413e58;
        case 0x413e5cu: goto label_413e5c;
        case 0x413e60u: goto label_413e60;
        case 0x413e64u: goto label_413e64;
        case 0x413e68u: goto label_413e68;
        case 0x413e6cu: goto label_413e6c;
        case 0x413e70u: goto label_413e70;
        case 0x413e74u: goto label_413e74;
        case 0x413e78u: goto label_413e78;
        case 0x413e7cu: goto label_413e7c;
        case 0x413e80u: goto label_413e80;
        case 0x413e84u: goto label_413e84;
        case 0x413e88u: goto label_413e88;
        case 0x413e8cu: goto label_413e8c;
        case 0x413e90u: goto label_413e90;
        case 0x413e94u: goto label_413e94;
        case 0x413e98u: goto label_413e98;
        case 0x413e9cu: goto label_413e9c;
        case 0x413ea0u: goto label_413ea0;
        case 0x413ea4u: goto label_413ea4;
        case 0x413ea8u: goto label_413ea8;
        case 0x413eacu: goto label_413eac;
        case 0x413eb0u: goto label_413eb0;
        case 0x413eb4u: goto label_413eb4;
        case 0x413eb8u: goto label_413eb8;
        case 0x413ebcu: goto label_413ebc;
        case 0x413ec0u: goto label_413ec0;
        case 0x413ec4u: goto label_413ec4;
        case 0x413ec8u: goto label_413ec8;
        case 0x413eccu: goto label_413ecc;
        case 0x413ed0u: goto label_413ed0;
        case 0x413ed4u: goto label_413ed4;
        case 0x413ed8u: goto label_413ed8;
        case 0x413edcu: goto label_413edc;
        case 0x413ee0u: goto label_413ee0;
        case 0x413ee4u: goto label_413ee4;
        case 0x413ee8u: goto label_413ee8;
        case 0x413eecu: goto label_413eec;
        case 0x413ef0u: goto label_413ef0;
        case 0x413ef4u: goto label_413ef4;
        case 0x413ef8u: goto label_413ef8;
        case 0x413efcu: goto label_413efc;
        case 0x413f00u: goto label_413f00;
        case 0x413f04u: goto label_413f04;
        case 0x413f08u: goto label_413f08;
        case 0x413f0cu: goto label_413f0c;
        case 0x413f10u: goto label_413f10;
        case 0x413f14u: goto label_413f14;
        case 0x413f18u: goto label_413f18;
        case 0x413f1cu: goto label_413f1c;
        case 0x413f20u: goto label_413f20;
        case 0x413f24u: goto label_413f24;
        case 0x413f28u: goto label_413f28;
        case 0x413f2cu: goto label_413f2c;
        case 0x413f30u: goto label_413f30;
        case 0x413f34u: goto label_413f34;
        case 0x413f38u: goto label_413f38;
        case 0x413f3cu: goto label_413f3c;
        case 0x413f40u: goto label_413f40;
        case 0x413f44u: goto label_413f44;
        case 0x413f48u: goto label_413f48;
        case 0x413f4cu: goto label_413f4c;
        case 0x413f50u: goto label_413f50;
        case 0x413f54u: goto label_413f54;
        case 0x413f58u: goto label_413f58;
        case 0x413f5cu: goto label_413f5c;
        case 0x413f60u: goto label_413f60;
        case 0x413f64u: goto label_413f64;
        case 0x413f68u: goto label_413f68;
        case 0x413f6cu: goto label_413f6c;
        case 0x413f70u: goto label_413f70;
        case 0x413f74u: goto label_413f74;
        case 0x413f78u: goto label_413f78;
        case 0x413f7cu: goto label_413f7c;
        case 0x413f80u: goto label_413f80;
        case 0x413f84u: goto label_413f84;
        case 0x413f88u: goto label_413f88;
        case 0x413f8cu: goto label_413f8c;
        case 0x413f90u: goto label_413f90;
        case 0x413f94u: goto label_413f94;
        case 0x413f98u: goto label_413f98;
        case 0x413f9cu: goto label_413f9c;
        case 0x413fa0u: goto label_413fa0;
        case 0x413fa4u: goto label_413fa4;
        case 0x413fa8u: goto label_413fa8;
        case 0x413facu: goto label_413fac;
        case 0x413fb0u: goto label_413fb0;
        case 0x413fb4u: goto label_413fb4;
        case 0x413fb8u: goto label_413fb8;
        case 0x413fbcu: goto label_413fbc;
        case 0x413fc0u: goto label_413fc0;
        case 0x413fc4u: goto label_413fc4;
        case 0x413fc8u: goto label_413fc8;
        case 0x413fccu: goto label_413fcc;
        case 0x413fd0u: goto label_413fd0;
        case 0x413fd4u: goto label_413fd4;
        case 0x413fd8u: goto label_413fd8;
        case 0x413fdcu: goto label_413fdc;
        case 0x413fe0u: goto label_413fe0;
        case 0x413fe4u: goto label_413fe4;
        case 0x413fe8u: goto label_413fe8;
        case 0x413fecu: goto label_413fec;
        case 0x413ff0u: goto label_413ff0;
        case 0x413ff4u: goto label_413ff4;
        case 0x413ff8u: goto label_413ff8;
        case 0x413ffcu: goto label_413ffc;
        case 0x414000u: goto label_414000;
        case 0x414004u: goto label_414004;
        case 0x414008u: goto label_414008;
        case 0x41400cu: goto label_41400c;
        case 0x414010u: goto label_414010;
        case 0x414014u: goto label_414014;
        case 0x414018u: goto label_414018;
        case 0x41401cu: goto label_41401c;
        case 0x414020u: goto label_414020;
        case 0x414024u: goto label_414024;
        case 0x414028u: goto label_414028;
        case 0x41402cu: goto label_41402c;
        case 0x414030u: goto label_414030;
        case 0x414034u: goto label_414034;
        case 0x414038u: goto label_414038;
        case 0x41403cu: goto label_41403c;
        case 0x414040u: goto label_414040;
        case 0x414044u: goto label_414044;
        case 0x414048u: goto label_414048;
        case 0x41404cu: goto label_41404c;
        case 0x414050u: goto label_414050;
        case 0x414054u: goto label_414054;
        case 0x414058u: goto label_414058;
        case 0x41405cu: goto label_41405c;
        case 0x414060u: goto label_414060;
        case 0x414064u: goto label_414064;
        case 0x414068u: goto label_414068;
        case 0x41406cu: goto label_41406c;
        case 0x414070u: goto label_414070;
        case 0x414074u: goto label_414074;
        case 0x414078u: goto label_414078;
        case 0x41407cu: goto label_41407c;
        case 0x414080u: goto label_414080;
        case 0x414084u: goto label_414084;
        case 0x414088u: goto label_414088;
        case 0x41408cu: goto label_41408c;
        case 0x414090u: goto label_414090;
        case 0x414094u: goto label_414094;
        case 0x414098u: goto label_414098;
        case 0x41409cu: goto label_41409c;
        case 0x4140a0u: goto label_4140a0;
        case 0x4140a4u: goto label_4140a4;
        case 0x4140a8u: goto label_4140a8;
        case 0x4140acu: goto label_4140ac;
        case 0x4140b0u: goto label_4140b0;
        case 0x4140b4u: goto label_4140b4;
        case 0x4140b8u: goto label_4140b8;
        case 0x4140bcu: goto label_4140bc;
        case 0x4140c0u: goto label_4140c0;
        case 0x4140c4u: goto label_4140c4;
        case 0x4140c8u: goto label_4140c8;
        case 0x4140ccu: goto label_4140cc;
        case 0x4140d0u: goto label_4140d0;
        case 0x4140d4u: goto label_4140d4;
        case 0x4140d8u: goto label_4140d8;
        case 0x4140dcu: goto label_4140dc;
        case 0x4140e0u: goto label_4140e0;
        case 0x4140e4u: goto label_4140e4;
        case 0x4140e8u: goto label_4140e8;
        case 0x4140ecu: goto label_4140ec;
        case 0x4140f0u: goto label_4140f0;
        case 0x4140f4u: goto label_4140f4;
        case 0x4140f8u: goto label_4140f8;
        case 0x4140fcu: goto label_4140fc;
        case 0x414100u: goto label_414100;
        case 0x414104u: goto label_414104;
        case 0x414108u: goto label_414108;
        case 0x41410cu: goto label_41410c;
        case 0x414110u: goto label_414110;
        case 0x414114u: goto label_414114;
        case 0x414118u: goto label_414118;
        case 0x41411cu: goto label_41411c;
        case 0x414120u: goto label_414120;
        case 0x414124u: goto label_414124;
        case 0x414128u: goto label_414128;
        case 0x41412cu: goto label_41412c;
        case 0x414130u: goto label_414130;
        case 0x414134u: goto label_414134;
        case 0x414138u: goto label_414138;
        case 0x41413cu: goto label_41413c;
        case 0x414140u: goto label_414140;
        case 0x414144u: goto label_414144;
        case 0x414148u: goto label_414148;
        case 0x41414cu: goto label_41414c;
        case 0x414150u: goto label_414150;
        case 0x414154u: goto label_414154;
        case 0x414158u: goto label_414158;
        case 0x41415cu: goto label_41415c;
        case 0x414160u: goto label_414160;
        case 0x414164u: goto label_414164;
        case 0x414168u: goto label_414168;
        case 0x41416cu: goto label_41416c;
        case 0x414170u: goto label_414170;
        case 0x414174u: goto label_414174;
        case 0x414178u: goto label_414178;
        case 0x41417cu: goto label_41417c;
        case 0x414180u: goto label_414180;
        case 0x414184u: goto label_414184;
        case 0x414188u: goto label_414188;
        case 0x41418cu: goto label_41418c;
        case 0x414190u: goto label_414190;
        case 0x414194u: goto label_414194;
        case 0x414198u: goto label_414198;
        case 0x41419cu: goto label_41419c;
        case 0x4141a0u: goto label_4141a0;
        case 0x4141a4u: goto label_4141a4;
        case 0x4141a8u: goto label_4141a8;
        case 0x4141acu: goto label_4141ac;
        case 0x4141b0u: goto label_4141b0;
        case 0x4141b4u: goto label_4141b4;
        case 0x4141b8u: goto label_4141b8;
        case 0x4141bcu: goto label_4141bc;
        case 0x4141c0u: goto label_4141c0;
        case 0x4141c4u: goto label_4141c4;
        case 0x4141c8u: goto label_4141c8;
        case 0x4141ccu: goto label_4141cc;
        case 0x4141d0u: goto label_4141d0;
        case 0x4141d4u: goto label_4141d4;
        case 0x4141d8u: goto label_4141d8;
        case 0x4141dcu: goto label_4141dc;
        case 0x4141e0u: goto label_4141e0;
        case 0x4141e4u: goto label_4141e4;
        case 0x4141e8u: goto label_4141e8;
        case 0x4141ecu: goto label_4141ec;
        case 0x4141f0u: goto label_4141f0;
        case 0x4141f4u: goto label_4141f4;
        case 0x4141f8u: goto label_4141f8;
        case 0x4141fcu: goto label_4141fc;
        case 0x414200u: goto label_414200;
        case 0x414204u: goto label_414204;
        case 0x414208u: goto label_414208;
        case 0x41420cu: goto label_41420c;
        case 0x414210u: goto label_414210;
        case 0x414214u: goto label_414214;
        case 0x414218u: goto label_414218;
        case 0x41421cu: goto label_41421c;
        case 0x414220u: goto label_414220;
        case 0x414224u: goto label_414224;
        case 0x414228u: goto label_414228;
        case 0x41422cu: goto label_41422c;
        case 0x414230u: goto label_414230;
        case 0x414234u: goto label_414234;
        case 0x414238u: goto label_414238;
        case 0x41423cu: goto label_41423c;
        case 0x414240u: goto label_414240;
        case 0x414244u: goto label_414244;
        case 0x414248u: goto label_414248;
        case 0x41424cu: goto label_41424c;
        case 0x414250u: goto label_414250;
        case 0x414254u: goto label_414254;
        case 0x414258u: goto label_414258;
        case 0x41425cu: goto label_41425c;
        case 0x414260u: goto label_414260;
        case 0x414264u: goto label_414264;
        case 0x414268u: goto label_414268;
        case 0x41426cu: goto label_41426c;
        case 0x414270u: goto label_414270;
        case 0x414274u: goto label_414274;
        case 0x414278u: goto label_414278;
        case 0x41427cu: goto label_41427c;
        case 0x414280u: goto label_414280;
        case 0x414284u: goto label_414284;
        case 0x414288u: goto label_414288;
        case 0x41428cu: goto label_41428c;
        case 0x414290u: goto label_414290;
        case 0x414294u: goto label_414294;
        case 0x414298u: goto label_414298;
        case 0x41429cu: goto label_41429c;
        case 0x4142a0u: goto label_4142a0;
        case 0x4142a4u: goto label_4142a4;
        case 0x4142a8u: goto label_4142a8;
        case 0x4142acu: goto label_4142ac;
        case 0x4142b0u: goto label_4142b0;
        case 0x4142b4u: goto label_4142b4;
        case 0x4142b8u: goto label_4142b8;
        case 0x4142bcu: goto label_4142bc;
        case 0x4142c0u: goto label_4142c0;
        case 0x4142c4u: goto label_4142c4;
        case 0x4142c8u: goto label_4142c8;
        case 0x4142ccu: goto label_4142cc;
        case 0x4142d0u: goto label_4142d0;
        case 0x4142d4u: goto label_4142d4;
        case 0x4142d8u: goto label_4142d8;
        case 0x4142dcu: goto label_4142dc;
        case 0x4142e0u: goto label_4142e0;
        case 0x4142e4u: goto label_4142e4;
        case 0x4142e8u: goto label_4142e8;
        case 0x4142ecu: goto label_4142ec;
        case 0x4142f0u: goto label_4142f0;
        case 0x4142f4u: goto label_4142f4;
        case 0x4142f8u: goto label_4142f8;
        case 0x4142fcu: goto label_4142fc;
        case 0x414300u: goto label_414300;
        case 0x414304u: goto label_414304;
        case 0x414308u: goto label_414308;
        case 0x41430cu: goto label_41430c;
        case 0x414310u: goto label_414310;
        case 0x414314u: goto label_414314;
        case 0x414318u: goto label_414318;
        case 0x41431cu: goto label_41431c;
        case 0x414320u: goto label_414320;
        case 0x414324u: goto label_414324;
        case 0x414328u: goto label_414328;
        case 0x41432cu: goto label_41432c;
        case 0x414330u: goto label_414330;
        case 0x414334u: goto label_414334;
        case 0x414338u: goto label_414338;
        case 0x41433cu: goto label_41433c;
        default: break;
    }

    ctx->pc = 0x413500u;

label_413500:
    // 0x413500: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x413500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_413504:
    // 0x413504: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x413504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_413508:
    // 0x413508: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x413508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_41350c:
    // 0x41350c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x41350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_413510:
    // 0x413510: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x413510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_413514:
    // 0x413514: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x413514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_413518:
    // 0x413518: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x413518u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41351c:
    // 0x41351c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x41351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_413520:
    // 0x413520: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x413520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413524:
    // 0x413524: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x413524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_413528:
    // 0x413528: 0x24930010  addiu       $s3, $a0, 0x10
    ctx->pc = 0x413528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_41352c:
    // 0x41352c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_413530:
    // 0x413530: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x413530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_413534:
    // 0x413534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x413534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413538:
    // 0x413538: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x413538u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_41353c:
    // 0x41353c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x41353cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_413540:
    // 0x413540: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x413540u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_413544:
    // 0x413544: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x413544u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_413548:
    // 0x413548: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x413548u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_41354c:
    // 0x41354c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41354cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_413550:
    // 0x413550: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x413550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_413554:
    // 0x413554: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x413554u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_413558:
    // 0x413558: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x413558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41355c:
    // 0x41355c: 0x8c900780  lw          $s0, 0x780($a0)
    ctx->pc = 0x41355cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_413560:
    // 0x413560: 0x8c720e58  lw          $s2, 0xE58($v1)
    ctx->pc = 0x413560u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3672)));
label_413564:
    // 0x413564: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x413564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_413568:
    // 0x413568: 0x8c76d120  lw          $s6, -0x2EE0($v1)
    ctx->pc = 0x413568u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_41356c:
    // 0x41356c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x41356cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_413570:
    // 0x413570: 0xc477c3d0  lwc1        $f23, -0x3C30($v1)
    ctx->pc = 0x413570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_413574:
    // 0x413574: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x413574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_413578:
    // 0x413578: 0xc476c3d4  lwc1        $f22, -0x3C2C($v1)
    ctx->pc = 0x413578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_41357c:
    // 0x41357c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x41357cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_413580:
    // 0x413580: 0xc475c3d8  lwc1        $f21, -0x3C28($v1)
    ctx->pc = 0x413580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_413584:
    // 0x413584: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x413584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_413588:
    // 0x413588: 0xc474c3dc  lwc1        $f20, -0x3C24($v1)
    ctx->pc = 0x413588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41358c:
    // 0x41358c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41358cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413590:
    // 0x413590: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x413590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_413594:
    // 0x413594: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x413594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_413598:
    // 0x413598: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_41359c:
    if (ctx->pc == 0x41359Cu) {
        ctx->pc = 0x4135A0u;
        goto label_4135a0;
    }
    ctx->pc = 0x413598u;
    {
        const bool branch_taken_0x413598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x413598) {
            ctx->pc = 0x4136B0u;
            goto label_4136b0;
        }
    }
    ctx->pc = 0x4135A0u;
label_4135a0:
    // 0x4135a0: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_4135a4:
    // 0x4135a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4135a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4135a8:
    // 0x4135a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4135a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4135ac:
    // 0x4135ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4135acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4135b0:
    // 0x4135b0: 0xc44001d0  lwc1        $f0, 0x1D0($v0)
    ctx->pc = 0x4135b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135b4:
    // 0x4135b4: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x4135b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4135b8:
    // 0x4135b8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x4135b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_4135bc:
    // 0x4135bc: 0xc44001d4  lwc1        $f0, 0x1D4($v0)
    ctx->pc = 0x4135bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135c0:
    // 0x4135c0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x4135c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_4135c4:
    // 0x4135c4: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x4135c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135c8:
    // 0x4135c8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x4135c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_4135cc:
    // 0x4135cc: 0xc44001dc  lwc1        $f0, 0x1DC($v0)
    ctx->pc = 0x4135ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135d0:
    // 0x4135d0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x4135d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_4135d4:
    // 0x4135d4: 0xc44001e0  lwc1        $f0, 0x1E0($v0)
    ctx->pc = 0x4135d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135d8:
    // 0x4135d8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x4135d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4135dc:
    // 0x4135dc: 0xc44001e4  lwc1        $f0, 0x1E4($v0)
    ctx->pc = 0x4135dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135e0:
    // 0x4135e0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x4135e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_4135e4:
    // 0x4135e4: 0xc44001e8  lwc1        $f0, 0x1E8($v0)
    ctx->pc = 0x4135e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135e8:
    // 0x4135e8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x4135e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4135ec:
    // 0x4135ec: 0xc44001ec  lwc1        $f0, 0x1EC($v0)
    ctx->pc = 0x4135ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135f0:
    // 0x4135f0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x4135f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4135f4:
    // 0x4135f4: 0xc44001f0  lwc1        $f0, 0x1F0($v0)
    ctx->pc = 0x4135f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4135f8:
    // 0x4135f8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x4135f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4135fc:
    // 0x4135fc: 0xc44001f4  lwc1        $f0, 0x1F4($v0)
    ctx->pc = 0x4135fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413600:
    // 0x413600: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x413600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_413604:
    // 0x413604: 0xc44001f8  lwc1        $f0, 0x1F8($v0)
    ctx->pc = 0x413604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413608:
    // 0x413608: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x413608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_41360c:
    // 0x41360c: 0xc44001fc  lwc1        $f0, 0x1FC($v0)
    ctx->pc = 0x41360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413610:
    // 0x413610: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x413610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_413614:
    // 0x413614: 0xe7b70120  swc1        $f23, 0x120($sp)
    ctx->pc = 0x413614u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_413618:
    // 0x413618: 0xe7b60124  swc1        $f22, 0x124($sp)
    ctx->pc = 0x413618u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_41361c:
    // 0x41361c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x41361cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_413620:
    // 0x413620: 0xe7b4012c  swc1        $f20, 0x12C($sp)
    ctx->pc = 0x413620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_413624:
    // 0x413624: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x413624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_413628:
    // 0x413628: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x413628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_41362c:
    // 0x41362c: 0xc04ce80  jal         func_133A00
label_413630:
    if (ctx->pc == 0x413630u) {
        ctx->pc = 0x413630u;
            // 0x413630: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x413634u;
        goto label_413634;
    }
    ctx->pc = 0x41362Cu;
    SET_GPR_U32(ctx, 31, 0x413634u);
    ctx->pc = 0x413630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41362Cu;
            // 0x413630: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413634u; }
        if (ctx->pc != 0x413634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413634u; }
        if (ctx->pc != 0x413634u) { return; }
    }
    ctx->pc = 0x413634u;
label_413634:
    // 0x413634: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x413634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_413638:
    // 0x413638: 0xc04ccf4  jal         func_1333D0
label_41363c:
    if (ctx->pc == 0x41363Cu) {
        ctx->pc = 0x41363Cu;
            // 0x41363c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x413640u;
        goto label_413640;
    }
    ctx->pc = 0x413638u;
    SET_GPR_U32(ctx, 31, 0x413640u);
    ctx->pc = 0x41363Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413638u;
            // 0x41363c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413640u; }
        if (ctx->pc != 0x413640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413640u; }
        if (ctx->pc != 0x413640u) { return; }
    }
    ctx->pc = 0x413640u;
label_413640:
    // 0x413640: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x413640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_413644:
    // 0x413644: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x413644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_413648:
    // 0x413648: 0xc04cca0  jal         func_133280
label_41364c:
    if (ctx->pc == 0x41364Cu) {
        ctx->pc = 0x41364Cu;
            // 0x41364c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413650u;
        goto label_413650;
    }
    ctx->pc = 0x413648u;
    SET_GPR_U32(ctx, 31, 0x413650u);
    ctx->pc = 0x41364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413648u;
            // 0x41364c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413650u; }
        if (ctx->pc != 0x413650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413650u; }
        if (ctx->pc != 0x413650u) { return; }
    }
    ctx->pc = 0x413650u;
label_413650:
    // 0x413650: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x413650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413654:
    // 0x413654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x413654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_413658:
    // 0x413658: 0x0  nop
    ctx->pc = 0x413658u;
    // NOP
label_41365c:
    // 0x41365c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41365cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_413660:
    // 0x413660: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_413664:
    if (ctx->pc == 0x413664u) {
        ctx->pc = 0x413668u;
        goto label_413668;
    }
    ctx->pc = 0x413660u;
    {
        const bool branch_taken_0x413660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x413660) {
            ctx->pc = 0x4136B0u;
            goto label_4136b0;
        }
    }
    ctx->pc = 0x413668u;
label_413668:
    // 0x413668: 0x46000e47  neg.s       $f25, $f1
    ctx->pc = 0x413668u;
    ctx->f[25] = FPU_NEG_S(ctx->f[1]);
label_41366c:
    // 0x41366c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_413670:
    // 0x413670: 0xc112c84  jal         func_44B210
label_413674:
    if (ctx->pc == 0x413674u) {
        ctx->pc = 0x413674u;
            // 0x413674: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413678u;
        goto label_413678;
    }
    ctx->pc = 0x413670u;
    SET_GPR_U32(ctx, 31, 0x413678u);
    ctx->pc = 0x413674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413670u;
            // 0x413674: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B210u;
    if (runtime->hasFunction(0x44B210u)) {
        auto targetFn = runtime->lookupFunction(0x44B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413678u; }
        if (ctx->pc != 0x413678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044B210_0x44b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413678u; }
        if (ctx->pc != 0x413678u) { return; }
    }
    ctx->pc = 0x413678u;
label_413678:
    // 0x413678: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x413678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41367c:
    // 0x41367c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_413680:
    if (ctx->pc == 0x413680u) {
        ctx->pc = 0x413684u;
        goto label_413684;
    }
    ctx->pc = 0x41367Cu;
    {
        const bool branch_taken_0x41367c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41367c) {
            ctx->pc = 0x4136B0u;
            goto label_4136b0;
        }
    }
    ctx->pc = 0x413684u;
label_413684:
    // 0x413684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x413684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_413688:
    // 0x413688: 0xc112c84  jal         func_44B210
label_41368c:
    if (ctx->pc == 0x41368Cu) {
        ctx->pc = 0x41368Cu;
            // 0x41368c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413690u;
        goto label_413690;
    }
    ctx->pc = 0x413688u;
    SET_GPR_U32(ctx, 31, 0x413690u);
    ctx->pc = 0x41368Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413688u;
            // 0x41368c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B210u;
    if (runtime->hasFunction(0x44B210u)) {
        auto targetFn = runtime->lookupFunction(0x44B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413690u; }
        if (ctx->pc != 0x413690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044B210_0x44b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413690u; }
        if (ctx->pc != 0x413690u) { return; }
    }
    ctx->pc = 0x413690u;
label_413690:
    // 0x413690: 0x46190041  sub.s       $f1, $f0, $f25
    ctx->pc = 0x413690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
label_413694:
    // 0x413694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x413694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_413698:
    // 0x413698: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x413698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41369c:
    // 0x41369c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41369cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4136a0:
    // 0x4136a0: 0x0  nop
    ctx->pc = 0x4136a0u;
    // NOP
label_4136a4:
    // 0x4136a4: 0x46190018  adda.s      $f0, $f25
    ctx->pc = 0x4136a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_4136a8:
    // 0x4136a8: 0xc112c8c  jal         func_44B230
label_4136ac:
    if (ctx->pc == 0x4136ACu) {
        ctx->pc = 0x4136ACu;
            // 0x4136ac: 0x4601c31c  madd.s      $f12, $f24, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[1]));
        ctx->pc = 0x4136B0u;
        goto label_4136b0;
    }
    ctx->pc = 0x4136A8u;
    SET_GPR_U32(ctx, 31, 0x4136B0u);
    ctx->pc = 0x4136ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4136A8u;
            // 0x4136ac: 0x4601c31c  madd.s      $f12, $f24, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B230u;
    if (runtime->hasFunction(0x44B230u)) {
        auto targetFn = runtime->lookupFunction(0x44B230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4136B0u; }
        if (ctx->pc != 0x4136B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044B230_0x44b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4136B0u; }
        if (ctx->pc != 0x4136B0u) { return; }
    }
    ctx->pc = 0x4136B0u;
label_4136b0:
    // 0x4136b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4136b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4136b4:
    // 0x4136b4: 0x290182b  sltu        $v1, $s4, $s0
    ctx->pc = 0x4136b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4136b8:
    // 0x4136b8: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
label_4136bc:
    if (ctx->pc == 0x4136BCu) {
        ctx->pc = 0x4136BCu;
            // 0x4136bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4136C0u;
        goto label_4136c0;
    }
    ctx->pc = 0x4136B8u;
    {
        const bool branch_taken_0x4136b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4136BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4136B8u;
            // 0x4136bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4136b8) {
            ctx->pc = 0x41358Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41358c;
        }
    }
    ctx->pc = 0x4136C0u;
label_4136c0:
    // 0x4136c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4136c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4136c4:
    // 0x4136c4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4136c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4136c8:
    // 0x4136c8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4136c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4136cc:
    // 0x4136cc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4136ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4136d0:
    // 0x4136d0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4136d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4136d4:
    // 0x4136d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4136d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4136d8:
    // 0x4136d8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4136d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4136dc:
    // 0x4136dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4136dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4136e0:
    // 0x4136e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4136e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4136e4:
    // 0x4136e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4136e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4136e8:
    // 0x4136e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4136e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4136ec:
    // 0x4136ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4136ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4136f0:
    // 0x4136f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4136f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4136f4:
    // 0x4136f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4136f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4136f8:
    // 0x4136f8: 0x3e00008  jr          $ra
label_4136fc:
    if (ctx->pc == 0x4136FCu) {
        ctx->pc = 0x4136FCu;
            // 0x4136fc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x413700u;
        goto label_413700;
    }
    ctx->pc = 0x4136F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4136FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4136F8u;
            // 0x4136fc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413700u;
label_413700:
    // 0x413700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413704:
    // 0x413704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_413708:
    // 0x413708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41370c:
    // 0x41370c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x41370cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_413710:
    // 0x413710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x413710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413714:
    // 0x413714: 0x8c8400f4  lw          $a0, 0xF4($a0)
    ctx->pc = 0x413714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_413718:
    // 0x413718: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_41371c:
    if (ctx->pc == 0x41371Cu) {
        ctx->pc = 0x41371Cu;
            // 0x41371c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x413720u;
        goto label_413720;
    }
    ctx->pc = 0x413718u;
    {
        const bool branch_taken_0x413718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x413718) {
            ctx->pc = 0x41371Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413718u;
            // 0x41371c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413738u;
            goto label_413738;
        }
    }
    ctx->pc = 0x413720u;
label_413720:
    // 0x413720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x413720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_413724:
    // 0x413724: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x413724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_413728:
    // 0x413728: 0x320f809  jalr        $t9
label_41372c:
    if (ctx->pc == 0x41372Cu) {
        ctx->pc = 0x41372Cu;
            // 0x41372c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x413730u;
        goto label_413730;
    }
    ctx->pc = 0x413728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x413730u);
        ctx->pc = 0x41372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413728u;
            // 0x41372c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x413730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x413730u; }
            if (ctx->pc != 0x413730u) { return; }
        }
        }
    }
    ctx->pc = 0x413730u;
label_413730:
    // 0x413730: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x413730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_413734:
    // 0x413734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_413738:
    // 0x413738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41373c:
    // 0x41373c: 0x3e00008  jr          $ra
label_413740:
    if (ctx->pc == 0x413740u) {
        ctx->pc = 0x413740u;
            // 0x413740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x413744u;
        goto label_413744;
    }
    ctx->pc = 0x41373Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41373Cu;
            // 0x413740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413744u;
label_413744:
    // 0x413744: 0x0  nop
    ctx->pc = 0x413744u;
    // NOP
label_413748:
    // 0x413748: 0x0  nop
    ctx->pc = 0x413748u;
    // NOP
label_41374c:
    // 0x41374c: 0x0  nop
    ctx->pc = 0x41374cu;
    // NOP
label_413750:
    // 0x413750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x413750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_413754:
    // 0x413754: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x413754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_413758:
    // 0x413758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x413758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41375c:
    // 0x41375c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_413760:
    // 0x413760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x413760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_413764:
    // 0x413764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_413768:
    // 0x413768: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x413768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_41376c:
    // 0x41376c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_413770:
    if (ctx->pc == 0x413770u) {
        ctx->pc = 0x413770u;
            // 0x413770: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413774u;
        goto label_413774;
    }
    ctx->pc = 0x41376Cu;
    {
        const bool branch_taken_0x41376c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41376Cu;
            // 0x413770: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41376c) {
            ctx->pc = 0x413804u;
            goto label_413804;
        }
    }
    ctx->pc = 0x413774u;
label_413774:
    // 0x413774: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x413774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_413778:
    // 0x413778: 0xc0baaa0  jal         func_2EAA80
label_41377c:
    if (ctx->pc == 0x41377Cu) {
        ctx->pc = 0x41377Cu;
            // 0x41377c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x413780u;
        goto label_413780;
    }
    ctx->pc = 0x413778u;
    SET_GPR_U32(ctx, 31, 0x413780u);
    ctx->pc = 0x41377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413778u;
            // 0x41377c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413780u; }
        if (ctx->pc != 0x413780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413780u; }
        if (ctx->pc != 0x413780u) { return; }
    }
    ctx->pc = 0x413780u;
label_413780:
    // 0x413780: 0x9250004c  lbu         $s0, 0x4C($s2)
    ctx->pc = 0x413780u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_413784:
    // 0x413784: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x413784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_413788:
    // 0x413788: 0xc040180  jal         func_100600
label_41378c:
    if (ctx->pc == 0x41378Cu) {
        ctx->pc = 0x41378Cu;
            // 0x41378c: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x413790u;
        goto label_413790;
    }
    ctx->pc = 0x413788u;
    SET_GPR_U32(ctx, 31, 0x413790u);
    ctx->pc = 0x41378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413788u;
            // 0x41378c: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413790u; }
        if (ctx->pc != 0x413790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413790u; }
        if (ctx->pc != 0x413790u) { return; }
    }
    ctx->pc = 0x413790u;
label_413790:
    // 0x413790: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_413794:
    if (ctx->pc == 0x413794u) {
        ctx->pc = 0x413794u;
            // 0x413794: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413798u;
        goto label_413798;
    }
    ctx->pc = 0x413790u;
    {
        const bool branch_taken_0x413790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413790u;
            // 0x413794: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413790) {
            ctx->pc = 0x413804u;
            goto label_413804;
        }
    }
    ctx->pc = 0x413798u;
label_413798:
    // 0x413798: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x413798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_41379c:
    // 0x41379c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4137a0:
    // 0x4137a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4137a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4137a4:
    // 0x4137a4: 0x34458a88  ori         $a1, $v0, 0x8A88
    ctx->pc = 0x4137a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_4137a8:
    // 0x4137a8: 0xc10ca68  jal         func_4329A0
label_4137ac:
    if (ctx->pc == 0x4137ACu) {
        ctx->pc = 0x4137ACu;
            // 0x4137ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4137B0u;
        goto label_4137b0;
    }
    ctx->pc = 0x4137A8u;
    SET_GPR_U32(ctx, 31, 0x4137B0u);
    ctx->pc = 0x4137ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4137A8u;
            // 0x4137ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4137B0u; }
        if (ctx->pc != 0x4137B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4137B0u; }
        if (ctx->pc != 0x4137B0u) { return; }
    }
    ctx->pc = 0x4137B0u;
label_4137b0:
    // 0x4137b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4137b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4137b4:
    // 0x4137b4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4137b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4137b8:
    // 0x4137b8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4137b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4137bc:
    // 0x4137bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4137bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4137c0:
    // 0x4137c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4137c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4137c4:
    // 0x4137c4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x4137c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_4137c8:
    // 0x4137c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4137c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4137cc:
    // 0x4137cc: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x4137ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
label_4137d0:
    // 0x4137d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4137d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4137d4:
    // 0x4137d4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x4137d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_4137d8:
    // 0x4137d8: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x4137d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_4137dc:
    // 0x4137dc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4137dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4137e0:
    // 0x4137e0: 0xc440da20  lwc1        $f0, -0x25E0($v0)
    ctx->pc = 0x4137e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4137e4:
    // 0x4137e4: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x4137e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_4137e8:
    // 0x4137e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4137e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4137ec:
    // 0x4137ec: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x4137ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_4137f0:
    // 0x4137f0: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x4137f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_4137f4:
    // 0x4137f4: 0xc04cc04  jal         func_133010
label_4137f8:
    if (ctx->pc == 0x4137F8u) {
        ctx->pc = 0x4137F8u;
            // 0x4137f8: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x4137FCu;
        goto label_4137fc;
    }
    ctx->pc = 0x4137F4u;
    SET_GPR_U32(ctx, 31, 0x4137FCu);
    ctx->pc = 0x4137F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4137F4u;
            // 0x4137f8: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4137FCu; }
        if (ctx->pc != 0x4137FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4137FCu; }
        if (ctx->pc != 0x4137FCu) { return; }
    }
    ctx->pc = 0x4137FCu;
label_4137fc:
    // 0x4137fc: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x4137fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413800:
    // 0x413800: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x413800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_413804:
    // 0x413804: 0x8e4400e8  lw          $a0, 0xE8($s2)
    ctx->pc = 0x413804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_413808:
    // 0x413808: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x413808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_41380c:
    // 0x41380c: 0xc122d2c  jal         func_48B4B0
label_413810:
    if (ctx->pc == 0x413810u) {
        ctx->pc = 0x413810u;
            // 0x413810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x413814u;
        goto label_413814;
    }
    ctx->pc = 0x41380Cu;
    SET_GPR_U32(ctx, 31, 0x413814u);
    ctx->pc = 0x413810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41380Cu;
            // 0x413810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413814u; }
        if (ctx->pc != 0x413814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413814u; }
        if (ctx->pc != 0x413814u) { return; }
    }
    ctx->pc = 0x413814u;
label_413814:
    // 0x413814: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x413814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_413818:
    // 0x413818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x413818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41381c:
    // 0x41381c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41381cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_413820:
    // 0x413820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x413820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413824:
    // 0x413824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_413828:
    // 0x413828: 0x3e00008  jr          $ra
label_41382c:
    if (ctx->pc == 0x41382Cu) {
        ctx->pc = 0x41382Cu;
            // 0x41382c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x413830u;
        goto label_413830;
    }
    ctx->pc = 0x413828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413828u;
            // 0x41382c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413830u;
label_413830:
    // 0x413830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413834:
    // 0x413834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_413838:
    // 0x413838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41383c:
    // 0x41383c: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x41383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_413840:
    // 0x413840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_413844:
    if (ctx->pc == 0x413844u) {
        ctx->pc = 0x413844u;
            // 0x413844: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413848u;
        goto label_413848;
    }
    ctx->pc = 0x413840u;
    {
        const bool branch_taken_0x413840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413840u;
            // 0x413844: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413840) {
            ctx->pc = 0x413850u;
            goto label_413850;
        }
    }
    ctx->pc = 0x413848u;
label_413848:
    // 0x413848: 0xc0e35e0  jal         func_38D780
label_41384c:
    if (ctx->pc == 0x41384Cu) {
        ctx->pc = 0x413850u;
        goto label_413850;
    }
    ctx->pc = 0x413848u;
    SET_GPR_U32(ctx, 31, 0x413850u);
    ctx->pc = 0x38D780u;
    if (runtime->hasFunction(0x38D780u)) {
        auto targetFn = runtime->lookupFunction(0x38D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413850u; }
        if (ctx->pc != 0x413850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D780_0x38d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413850u; }
        if (ctx->pc != 0x413850u) { return; }
    }
    ctx->pc = 0x413850u;
label_413850:
    // 0x413850: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x413850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_413854:
    // 0x413854: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x413854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_413858:
    // 0x413858: 0xc122d2c  jal         func_48B4B0
label_41385c:
    if (ctx->pc == 0x41385Cu) {
        ctx->pc = 0x41385Cu;
            // 0x41385c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413860u;
        goto label_413860;
    }
    ctx->pc = 0x413858u;
    SET_GPR_U32(ctx, 31, 0x413860u);
    ctx->pc = 0x41385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413858u;
            // 0x41385c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413860u; }
        if (ctx->pc != 0x413860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413860u; }
        if (ctx->pc != 0x413860u) { return; }
    }
    ctx->pc = 0x413860u;
label_413860:
    // 0x413860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_413864:
    // 0x413864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_413868:
    // 0x413868: 0x3e00008  jr          $ra
label_41386c:
    if (ctx->pc == 0x41386Cu) {
        ctx->pc = 0x41386Cu;
            // 0x41386c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x413870u;
        goto label_413870;
    }
    ctx->pc = 0x413868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413868u;
            // 0x41386c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413870u;
label_413870:
    // 0x413870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413874:
    // 0x413874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_413878:
    // 0x413878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41387c:
    // 0x41387c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41387cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413880:
    // 0x413880: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x413880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_413884:
    // 0x413884: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_413888:
    if (ctx->pc == 0x413888u) {
        ctx->pc = 0x413888u;
            // 0x413888: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x41388Cu;
        goto label_41388c;
    }
    ctx->pc = 0x413884u;
    {
        const bool branch_taken_0x413884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x413884) {
            ctx->pc = 0x413888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413884u;
            // 0x413888: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4138A0u;
            goto label_4138a0;
        }
    }
    ctx->pc = 0x41388Cu;
label_41388c:
    // 0x41388c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x41388cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_413890:
    // 0x413890: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x413890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_413894:
    // 0x413894: 0x320f809  jalr        $t9
label_413898:
    if (ctx->pc == 0x413898u) {
        ctx->pc = 0x413898u;
            // 0x413898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41389Cu;
        goto label_41389c;
    }
    ctx->pc = 0x413894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41389Cu);
        ctx->pc = 0x413898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413894u;
            // 0x413898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41389Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41389Cu; }
            if (ctx->pc != 0x41389Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41389Cu;
label_41389c:
    // 0x41389c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x41389cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4138a0:
    // 0x4138a0: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x4138a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_4138a4:
    // 0x4138a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4138a8:
    if (ctx->pc == 0x4138A8u) {
        ctx->pc = 0x4138A8u;
            // 0x4138a8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x4138ACu;
        goto label_4138ac;
    }
    ctx->pc = 0x4138A4u;
    {
        const bool branch_taken_0x4138a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4138a4) {
            ctx->pc = 0x4138A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4138A4u;
            // 0x4138a8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4138C0u;
            goto label_4138c0;
        }
    }
    ctx->pc = 0x4138ACu;
label_4138ac:
    // 0x4138ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4138acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4138b0:
    // 0x4138b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4138b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4138b4:
    // 0x4138b4: 0x320f809  jalr        $t9
label_4138b8:
    if (ctx->pc == 0x4138B8u) {
        ctx->pc = 0x4138B8u;
            // 0x4138b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4138BCu;
        goto label_4138bc;
    }
    ctx->pc = 0x4138B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4138BCu);
        ctx->pc = 0x4138B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4138B4u;
            // 0x4138b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4138BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4138BCu; }
            if (ctx->pc != 0x4138BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4138BCu;
label_4138bc:
    // 0x4138bc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x4138bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_4138c0:
    // 0x4138c0: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x4138c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_4138c4:
    // 0x4138c4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4138c8:
    if (ctx->pc == 0x4138C8u) {
        ctx->pc = 0x4138C8u;
            // 0x4138c8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4138CCu;
        goto label_4138cc;
    }
    ctx->pc = 0x4138C4u;
    {
        const bool branch_taken_0x4138c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4138c4) {
            ctx->pc = 0x4138C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4138C4u;
            // 0x4138c8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4138E4u;
            goto label_4138e4;
        }
    }
    ctx->pc = 0x4138CCu;
label_4138cc:
    // 0x4138cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4138ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4138d0:
    // 0x4138d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4138d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4138d4:
    // 0x4138d4: 0x320f809  jalr        $t9
label_4138d8:
    if (ctx->pc == 0x4138D8u) {
        ctx->pc = 0x4138D8u;
            // 0x4138d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4138DCu;
        goto label_4138dc;
    }
    ctx->pc = 0x4138D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4138DCu);
        ctx->pc = 0x4138D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4138D4u;
            // 0x4138d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4138DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4138DCu; }
            if (ctx->pc != 0x4138DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4138DCu;
label_4138dc:
    // 0x4138dc: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x4138dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_4138e0:
    // 0x4138e0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4138e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4138e4:
    // 0x4138e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4138e8:
    if (ctx->pc == 0x4138E8u) {
        ctx->pc = 0x4138E8u;
            // 0x4138e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4138ECu;
        goto label_4138ec;
    }
    ctx->pc = 0x4138E4u;
    {
        const bool branch_taken_0x4138e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4138e4) {
            ctx->pc = 0x4138E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4138E4u;
            // 0x4138e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413900u;
            goto label_413900;
        }
    }
    ctx->pc = 0x4138ECu;
label_4138ec:
    // 0x4138ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4138ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4138f0:
    // 0x4138f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4138f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4138f4:
    // 0x4138f4: 0x320f809  jalr        $t9
label_4138f8:
    if (ctx->pc == 0x4138F8u) {
        ctx->pc = 0x4138F8u;
            // 0x4138f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4138FCu;
        goto label_4138fc;
    }
    ctx->pc = 0x4138F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4138FCu);
        ctx->pc = 0x4138F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4138F4u;
            // 0x4138f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4138FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4138FCu; }
            if (ctx->pc != 0x4138FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4138FCu;
label_4138fc:
    // 0x4138fc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4138fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_413900:
    // 0x413900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_413904:
    // 0x413904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_413908:
    // 0x413908: 0x3e00008  jr          $ra
label_41390c:
    if (ctx->pc == 0x41390Cu) {
        ctx->pc = 0x41390Cu;
            // 0x41390c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x413910u;
        goto label_413910;
    }
    ctx->pc = 0x413908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413908u;
            // 0x41390c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413910u;
label_413910:
    // 0x413910: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x413910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_413914:
    // 0x413914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x413914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_413918:
    // 0x413918: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x413918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41391c:
    // 0x41391c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_413920:
    // 0x413920: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x413920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_413924:
    // 0x413924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x413924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413928:
    // 0x413928: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x413928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_41392c:
    // 0x41392c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x41392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_413930:
    // 0x413930: 0xc0892d0  jal         func_224B40
label_413934:
    if (ctx->pc == 0x413934u) {
        ctx->pc = 0x413934u;
            // 0x413934: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x413938u;
        goto label_413938;
    }
    ctx->pc = 0x413930u;
    SET_GPR_U32(ctx, 31, 0x413938u);
    ctx->pc = 0x413934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413930u;
            // 0x413934: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413938u; }
        if (ctx->pc != 0x413938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413938u; }
        if (ctx->pc != 0x413938u) { return; }
    }
    ctx->pc = 0x413938u;
label_413938:
    // 0x413938: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x413938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_41393c:
    // 0x41393c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x41393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_413940:
    // 0x413940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x413940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_413944:
    // 0x413944: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x413944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413948:
    // 0x413948: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x413948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41394c:
    // 0x41394c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_413950:
    if (ctx->pc == 0x413950u) {
        ctx->pc = 0x413950u;
            // 0x413950: 0x24660018  addiu       $a2, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x413954u;
        goto label_413954;
    }
    ctx->pc = 0x41394Cu;
    {
        const bool branch_taken_0x41394c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x413950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41394Cu;
            // 0x413950: 0x24660018  addiu       $a2, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41394c) {
            ctx->pc = 0x413964u;
            goto label_413964;
        }
    }
    ctx->pc = 0x413954u;
label_413954:
    // 0x413954: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x413954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_413958:
    // 0x413958: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x413958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_41395c:
    // 0x41395c: 0x10000008  b           . + 4 + (0x8 << 2)
label_413960:
    if (ctx->pc == 0x413960u) {
        ctx->pc = 0x413960u;
            // 0x413960: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x413964u;
        goto label_413964;
    }
    ctx->pc = 0x41395Cu;
    {
        const bool branch_taken_0x41395c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41395Cu;
            // 0x413960: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41395c) {
            ctx->pc = 0x413980u;
            goto label_413980;
        }
    }
    ctx->pc = 0x413964u;
label_413964:
    // 0x413964: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x413964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_413968:
    // 0x413968: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x413968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_41396c:
    // 0x41396c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41396cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_413970:
    // 0x413970: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x413970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_413974:
    // 0x413974: 0x0  nop
    ctx->pc = 0x413974u;
    // NOP
label_413978:
    // 0x413978: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x413978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_41397c:
    // 0x41397c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x41397cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_413980:
    // 0x413980: 0xa22300f0  sb          $v1, 0xF0($s1)
    ctx->pc = 0x413980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 240), (uint8_t)GPR_U32(ctx, 3));
label_413984:
    // 0x413984: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x413984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_413988:
    // 0x413988: 0xc4d40008  lwc1        $f20, 0x8($a2)
    ctx->pc = 0x413988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41398c:
    // 0x41398c: 0xc4d50004  lwc1        $f21, 0x4($a2)
    ctx->pc = 0x41398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_413990:
    // 0x413990: 0xc04f29c  jal         func_13CA70
label_413994:
    if (ctx->pc == 0x413994u) {
        ctx->pc = 0x413994u;
            // 0x413994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413998u;
        goto label_413998;
    }
    ctx->pc = 0x413990u;
    SET_GPR_U32(ctx, 31, 0x413998u);
    ctx->pc = 0x413994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413990u;
            // 0x413994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413998u; }
        if (ctx->pc != 0x413998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413998u; }
        if (ctx->pc != 0x413998u) { return; }
    }
    ctx->pc = 0x413998u;
label_413998:
    // 0x413998: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x413998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_41399c:
    // 0x41399c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x41399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4139a0:
    // 0x4139a0: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4139a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4139a4:
    // 0x4139a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4139a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4139a8:
    // 0x4139a8: 0x0  nop
    ctx->pc = 0x4139a8u;
    // NOP
label_4139ac:
    // 0x4139ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4139acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4139b0:
    // 0x4139b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4139b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4139b4:
    // 0x4139b4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4139b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4139b8:
    // 0x4139b8: 0xc04cdf0  jal         func_1337C0
label_4139bc:
    if (ctx->pc == 0x4139BCu) {
        ctx->pc = 0x4139BCu;
            // 0x4139bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4139C0u;
        goto label_4139c0;
    }
    ctx->pc = 0x4139B8u;
    SET_GPR_U32(ctx, 31, 0x4139C0u);
    ctx->pc = 0x4139BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4139B8u;
            // 0x4139bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4139C0u; }
        if (ctx->pc != 0x4139C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4139C0u; }
        if (ctx->pc != 0x4139C0u) { return; }
    }
    ctx->pc = 0x4139C0u;
label_4139c0:
    // 0x4139c0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4139c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4139c4:
    // 0x4139c4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4139c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4139c8:
    // 0x4139c8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4139c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4139cc:
    // 0x4139cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4139ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4139d0:
    // 0x4139d0: 0x0  nop
    ctx->pc = 0x4139d0u;
    // NOP
label_4139d4:
    // 0x4139d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4139d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_4139d8:
    // 0x4139d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4139d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4139dc:
    // 0x4139dc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4139dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4139e0:
    // 0x4139e0: 0xc04cdd0  jal         func_133740
label_4139e4:
    if (ctx->pc == 0x4139E4u) {
        ctx->pc = 0x4139E4u;
            // 0x4139e4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4139E8u;
        goto label_4139e8;
    }
    ctx->pc = 0x4139E0u;
    SET_GPR_U32(ctx, 31, 0x4139E8u);
    ctx->pc = 0x4139E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4139E0u;
            // 0x4139e4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4139E8u; }
        if (ctx->pc != 0x4139E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4139E8u; }
        if (ctx->pc != 0x4139E8u) { return; }
    }
    ctx->pc = 0x4139E8u;
label_4139e8:
    // 0x4139e8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4139e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4139ec:
    // 0x4139ec: 0xc04c994  jal         func_132650
label_4139f0:
    if (ctx->pc == 0x4139F0u) {
        ctx->pc = 0x4139F0u;
            // 0x4139f0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4139F4u;
        goto label_4139f4;
    }
    ctx->pc = 0x4139ECu;
    SET_GPR_U32(ctx, 31, 0x4139F4u);
    ctx->pc = 0x4139F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4139ECu;
            // 0x4139f0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4139F4u; }
        if (ctx->pc != 0x4139F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4139F4u; }
        if (ctx->pc != 0x4139F4u) { return; }
    }
    ctx->pc = 0x4139F4u;
label_4139f4:
    // 0x4139f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4139f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4139f8:
    // 0x4139f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4139f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4139fc:
    // 0x4139fc: 0x8c427308  lw          $v0, 0x7308($v0)
    ctx->pc = 0x4139fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29448)));
label_413a00:
    // 0x413a00: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x413a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_413a04:
    // 0x413a04: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x413a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_413a08:
    // 0x413a08: 0xc0b6e68  jal         func_2DB9A0
label_413a0c:
    if (ctx->pc == 0x413A0Cu) {
        ctx->pc = 0x413A0Cu;
            // 0x413a0c: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->pc = 0x413A10u;
        goto label_413a10;
    }
    ctx->pc = 0x413A08u;
    SET_GPR_U32(ctx, 31, 0x413A10u);
    ctx->pc = 0x413A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413A08u;
            // 0x413a0c: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A10u; }
        if (ctx->pc != 0x413A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A10u; }
        if (ctx->pc != 0x413A10u) { return; }
    }
    ctx->pc = 0x413A10u;
label_413a10:
    // 0x413a10: 0xc0b6dac  jal         func_2DB6B0
label_413a14:
    if (ctx->pc == 0x413A14u) {
        ctx->pc = 0x413A14u;
            // 0x413a14: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x413A18u;
        goto label_413a18;
    }
    ctx->pc = 0x413A10u;
    SET_GPR_U32(ctx, 31, 0x413A18u);
    ctx->pc = 0x413A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413A10u;
            // 0x413a14: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A18u; }
        if (ctx->pc != 0x413A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A18u; }
        if (ctx->pc != 0x413A18u) { return; }
    }
    ctx->pc = 0x413A18u;
label_413a18:
    // 0x413a18: 0xc0cac94  jal         func_32B250
label_413a1c:
    if (ctx->pc == 0x413A1Cu) {
        ctx->pc = 0x413A1Cu;
            // 0x413a1c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x413A20u;
        goto label_413a20;
    }
    ctx->pc = 0x413A18u;
    SET_GPR_U32(ctx, 31, 0x413A20u);
    ctx->pc = 0x413A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413A18u;
            // 0x413a1c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A20u; }
        if (ctx->pc != 0x413A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A20u; }
        if (ctx->pc != 0x413A20u) { return; }
    }
    ctx->pc = 0x413A20u;
label_413a20:
    // 0x413a20: 0xc0cac84  jal         func_32B210
label_413a24:
    if (ctx->pc == 0x413A24u) {
        ctx->pc = 0x413A24u;
            // 0x413a24: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x413A28u;
        goto label_413a28;
    }
    ctx->pc = 0x413A20u;
    SET_GPR_U32(ctx, 31, 0x413A28u);
    ctx->pc = 0x413A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413A20u;
            // 0x413a24: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A28u; }
        if (ctx->pc != 0x413A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A28u; }
        if (ctx->pc != 0x413A28u) { return; }
    }
    ctx->pc = 0x413A28u;
label_413a28:
    // 0x413a28: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x413a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_413a2c:
    // 0x413a2c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x413a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_413a30:
    // 0x413a30: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x413a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_413a34:
    // 0x413a34: 0xc0a5a68  jal         func_2969A0
label_413a38:
    if (ctx->pc == 0x413A38u) {
        ctx->pc = 0x413A38u;
            // 0x413a38: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x413A3Cu;
        goto label_413a3c;
    }
    ctx->pc = 0x413A34u;
    SET_GPR_U32(ctx, 31, 0x413A3Cu);
    ctx->pc = 0x413A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413A34u;
            // 0x413a38: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A3Cu; }
        if (ctx->pc != 0x413A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413A3Cu; }
        if (ctx->pc != 0x413A3Cu) { return; }
    }
    ctx->pc = 0x413A3Cu;
label_413a3c:
    // 0x413a3c: 0xafb00154  sw          $s0, 0x154($sp)
    ctx->pc = 0x413a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 16));
label_413a40:
    // 0x413a40: 0x3c020121  lui         $v0, 0x121
    ctx->pc = 0x413a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)289 << 16));
label_413a44:
    // 0x413a44: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x413a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_413a48:
    // 0x413a48: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x413a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_413a4c:
    // 0x413a4c: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x413a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_413a50:
    // 0x413a50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x413a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_413a54:
    // 0x413a54: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x413a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_413a58:
    // 0x413a58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x413a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413a5c:
    // 0x413a5c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x413a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413a60:
    // 0x413a60: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x413a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_413a64:
    // 0x413a64: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x413a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413a68:
    // 0x413a68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x413a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_413a6c:
    // 0x413a6c: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x413a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413a70:
    // 0x413a70: 0xa3a40202  sb          $a0, 0x202($sp)
    ctx->pc = 0x413a70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 514), (uint8_t)GPR_U32(ctx, 4));
label_413a74:
    // 0x413a74: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x413a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_413a78:
    // 0x413a78: 0xa3a60200  sb          $a2, 0x200($sp)
    ctx->pc = 0x413a78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 512), (uint8_t)GPR_U32(ctx, 6));
label_413a7c:
    // 0x413a7c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x413a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413a80:
    // 0x413a80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x413a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_413a84:
    // 0x413a84: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x413a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_413a88:
    // 0x413a88: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x413a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_413a8c:
    // 0x413a8c: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x413a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_413a90:
    // 0x413a90: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x413a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_413a94:
    // 0x413a94: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x413a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_413a98:
    // 0x413a98: 0xafa701fc  sw          $a3, 0x1FC($sp)
    ctx->pc = 0x413a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 7));
label_413a9c:
    // 0x413a9c: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x413a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413aa0:
    // 0x413aa0: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x413aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_413aa4:
    // 0x413aa4: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x413aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413aa8:
    // 0x413aa8: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x413aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
label_413aac:
    // 0x413aac: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x413aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413ab0:
    // 0x413ab0: 0xe7a201b0  swc1        $f2, 0x1B0($sp)
    ctx->pc = 0x413ab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_413ab4:
    // 0x413ab4: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x413ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_413ab8:
    // 0x413ab8: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x413ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_413abc:
    // 0x413abc: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x413abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413ac0:
    // 0x413ac0: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x413ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413ac4:
    // 0x413ac4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x413ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413ac8:
    // 0x413ac8: 0xe7a201bc  swc1        $f2, 0x1BC($sp)
    ctx->pc = 0x413ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_413acc:
    // 0x413acc: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x413accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_413ad0:
    // 0x413ad0: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x413ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_413ad4:
    // 0x413ad4: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x413ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413ad8:
    // 0x413ad8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x413ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413adc:
    // 0x413adc: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x413adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413ae0:
    // 0x413ae0: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x413ae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_413ae4:
    // 0x413ae4: 0xe7a101cc  swc1        $f1, 0x1CC($sp)
    ctx->pc = 0x413ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_413ae8:
    // 0x413ae8: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x413ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_413aec:
    // 0x413aec: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x413aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_413af0:
    // 0x413af0: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x413af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413af4:
    // 0x413af4: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x413af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413af8:
    // 0x413af8: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x413af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413afc:
    // 0x413afc: 0xe7a40160  swc1        $f4, 0x160($sp)
    ctx->pc = 0x413afcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_413b00:
    // 0x413b00: 0xe7a50164  swc1        $f5, 0x164($sp)
    ctx->pc = 0x413b00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_413b04:
    // 0x413b04: 0xe7a60168  swc1        $f6, 0x168($sp)
    ctx->pc = 0x413b04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_413b08:
    // 0x413b08: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x413b08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_413b0c:
    // 0x413b0c: 0xe7a201d4  swc1        $f2, 0x1D4($sp)
    ctx->pc = 0x413b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_413b10:
    // 0x413b10: 0xe7a101d8  swc1        $f1, 0x1D8($sp)
    ctx->pc = 0x413b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_413b14:
    // 0x413b14: 0xc0a7a88  jal         func_29EA20
label_413b18:
    if (ctx->pc == 0x413B18u) {
        ctx->pc = 0x413B18u;
            // 0x413b18: 0xe7a001e0  swc1        $f0, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->pc = 0x413B1Cu;
        goto label_413b1c;
    }
    ctx->pc = 0x413B14u;
    SET_GPR_U32(ctx, 31, 0x413B1Cu);
    ctx->pc = 0x413B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413B14u;
            // 0x413b18: 0xe7a001e0  swc1        $f0, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B1Cu; }
        if (ctx->pc != 0x413B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B1Cu; }
        if (ctx->pc != 0x413B1Cu) { return; }
    }
    ctx->pc = 0x413B1Cu;
label_413b1c:
    // 0x413b1c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x413b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_413b20:
    // 0x413b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x413b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_413b24:
    // 0x413b24: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_413b28:
    if (ctx->pc == 0x413B28u) {
        ctx->pc = 0x413B28u;
            // 0x413b28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x413B2Cu;
        goto label_413b2c;
    }
    ctx->pc = 0x413B24u;
    {
        const bool branch_taken_0x413b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x413B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413B24u;
            // 0x413b28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413b24) {
            ctx->pc = 0x413B74u;
            goto label_413b74;
        }
    }
    ctx->pc = 0x413B2Cu;
label_413b2c:
    // 0x413b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413b30:
    // 0x413b30: 0xc088ef4  jal         func_223BD0
label_413b34:
    if (ctx->pc == 0x413B34u) {
        ctx->pc = 0x413B34u;
            // 0x413b34: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x413B38u;
        goto label_413b38;
    }
    ctx->pc = 0x413B30u;
    SET_GPR_U32(ctx, 31, 0x413B38u);
    ctx->pc = 0x413B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413B30u;
            // 0x413b34: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B38u; }
        if (ctx->pc != 0x413B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B38u; }
        if (ctx->pc != 0x413B38u) { return; }
    }
    ctx->pc = 0x413B38u;
label_413b38:
    // 0x413b38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x413b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_413b3c:
    // 0x413b3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x413b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_413b40:
    // 0x413b40: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x413b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_413b44:
    // 0x413b44: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x413b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_413b48:
    // 0x413b48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x413b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_413b4c:
    // 0x413b4c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x413b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_413b50:
    // 0x413b50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x413b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_413b54:
    // 0x413b54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x413b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_413b58:
    // 0x413b58: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x413b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_413b5c:
    // 0x413b5c: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x413b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_413b60:
    // 0x413b60: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x413b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_413b64:
    // 0x413b64: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x413b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_413b68:
    // 0x413b68: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x413b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_413b6c:
    // 0x413b6c: 0xc088b38  jal         func_222CE0
label_413b70:
    if (ctx->pc == 0x413B70u) {
        ctx->pc = 0x413B70u;
            // 0x413b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413B74u;
        goto label_413b74;
    }
    ctx->pc = 0x413B6Cu;
    SET_GPR_U32(ctx, 31, 0x413B74u);
    ctx->pc = 0x413B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413B6Cu;
            // 0x413b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B74u; }
        if (ctx->pc != 0x413B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B74u; }
        if (ctx->pc != 0x413B74u) { return; }
    }
    ctx->pc = 0x413B74u;
label_413b74:
    // 0x413b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413b78:
    // 0x413b78: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x413b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_413b7c:
    // 0x413b7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x413b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413b80:
    // 0x413b80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x413b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413b84:
    // 0x413b84: 0xc08914c  jal         func_224530
label_413b88:
    if (ctx->pc == 0x413B88u) {
        ctx->pc = 0x413B88u;
            // 0x413b88: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x413B8Cu;
        goto label_413b8c;
    }
    ctx->pc = 0x413B84u;
    SET_GPR_U32(ctx, 31, 0x413B8Cu);
    ctx->pc = 0x413B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413B84u;
            // 0x413b88: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B8Cu; }
        if (ctx->pc != 0x413B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413B8Cu; }
        if (ctx->pc != 0x413B8Cu) { return; }
    }
    ctx->pc = 0x413B8Cu;
label_413b8c:
    // 0x413b8c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x413b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413b90:
    // 0x413b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413b94:
    // 0x413b94: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x413b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413b98:
    // 0x413b98: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x413b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_413b9c:
    // 0x413b9c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x413b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413ba0:
    // 0x413ba0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x413ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_413ba4:
    // 0x413ba4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x413ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_413ba8:
    // 0x413ba8: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x413ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_413bac:
    // 0x413bac: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x413bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_413bb0:
    // 0x413bb0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x413bb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_413bb4:
    // 0x413bb4: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x413bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_413bb8:
    // 0x413bb8: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x413bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_413bbc:
    // 0x413bbc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x413bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_413bc0:
    // 0x413bc0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x413bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413bc4:
    // 0x413bc4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x413bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_413bc8:
    // 0x413bc8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x413bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_413bcc:
    // 0x413bcc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x413bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_413bd0:
    // 0x413bd0: 0xc0892b0  jal         func_224AC0
label_413bd4:
    if (ctx->pc == 0x413BD4u) {
        ctx->pc = 0x413BD4u;
            // 0x413bd4: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x413BD8u;
        goto label_413bd8;
    }
    ctx->pc = 0x413BD0u;
    SET_GPR_U32(ctx, 31, 0x413BD8u);
    ctx->pc = 0x413BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413BD0u;
            // 0x413bd4: 0xe7a3009c  swc1        $f3, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413BD8u; }
        if (ctx->pc != 0x413BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413BD8u; }
        if (ctx->pc != 0x413BD8u) { return; }
    }
    ctx->pc = 0x413BD8u;
label_413bd8:
    // 0x413bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413bdc:
    // 0x413bdc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x413bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_413be0:
    // 0x413be0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x413be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_413be4:
    // 0x413be4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x413be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_413be8:
    // 0x413be8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x413be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_413bec:
    // 0x413bec: 0xc0891d8  jal         func_224760
label_413bf0:
    if (ctx->pc == 0x413BF0u) {
        ctx->pc = 0x413BF0u;
            // 0x413bf0: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x413BF4u;
        goto label_413bf4;
    }
    ctx->pc = 0x413BECu;
    SET_GPR_U32(ctx, 31, 0x413BF4u);
    ctx->pc = 0x413BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413BECu;
            // 0x413bf0: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413BF4u; }
        if (ctx->pc != 0x413BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413BF4u; }
        if (ctx->pc != 0x413BF4u) { return; }
    }
    ctx->pc = 0x413BF4u;
label_413bf4:
    // 0x413bf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x413bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_413bf8:
    // 0x413bf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x413bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413bfc:
    // 0x413bfc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x413bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_413c00:
    // 0x413c00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x413c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_413c04:
    // 0x413c04: 0xc08c164  jal         func_230590
label_413c08:
    if (ctx->pc == 0x413C08u) {
        ctx->pc = 0x413C08u;
            // 0x413c08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x413C0Cu;
        goto label_413c0c;
    }
    ctx->pc = 0x413C04u;
    SET_GPR_U32(ctx, 31, 0x413C0Cu);
    ctx->pc = 0x413C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413C04u;
            // 0x413c08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C0Cu; }
        if (ctx->pc != 0x413C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C0Cu; }
        if (ctx->pc != 0x413C0Cu) { return; }
    }
    ctx->pc = 0x413C0Cu;
label_413c0c:
    // 0x413c0c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x413c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_413c10:
    // 0x413c10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x413c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_413c14:
    // 0x413c14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x413c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_413c18:
    // 0x413c18: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x413c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_413c1c:
    // 0x413c1c: 0xc0a7a88  jal         func_29EA20
label_413c20:
    if (ctx->pc == 0x413C20u) {
        ctx->pc = 0x413C20u;
            // 0x413c20: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x413C24u;
        goto label_413c24;
    }
    ctx->pc = 0x413C1Cu;
    SET_GPR_U32(ctx, 31, 0x413C24u);
    ctx->pc = 0x413C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413C1Cu;
            // 0x413c20: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C24u; }
        if (ctx->pc != 0x413C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C24u; }
        if (ctx->pc != 0x413C24u) { return; }
    }
    ctx->pc = 0x413C24u;
label_413c24:
    // 0x413c24: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x413c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_413c28:
    // 0x413c28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x413c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_413c2c:
    // 0x413c2c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_413c30:
    if (ctx->pc == 0x413C30u) {
        ctx->pc = 0x413C30u;
            // 0x413c30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x413C34u;
        goto label_413c34;
    }
    ctx->pc = 0x413C2Cu;
    {
        const bool branch_taken_0x413c2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x413C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413C2Cu;
            // 0x413c30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413c2c) {
            ctx->pc = 0x413C50u;
            goto label_413c50;
        }
    }
    ctx->pc = 0x413C34u;
label_413c34:
    // 0x413c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x413c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_413c38:
    // 0x413c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x413c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413c3c:
    // 0x413c3c: 0xc0869d0  jal         func_21A740
label_413c40:
    if (ctx->pc == 0x413C40u) {
        ctx->pc = 0x413C40u;
            // 0x413c40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413C44u;
        goto label_413c44;
    }
    ctx->pc = 0x413C3Cu;
    SET_GPR_U32(ctx, 31, 0x413C44u);
    ctx->pc = 0x413C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413C3Cu;
            // 0x413c40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C44u; }
        if (ctx->pc != 0x413C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C44u; }
        if (ctx->pc != 0x413C44u) { return; }
    }
    ctx->pc = 0x413C44u;
label_413c44:
    // 0x413c44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x413c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_413c48:
    // 0x413c48: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x413c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_413c4c:
    // 0x413c4c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x413c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_413c50:
    // 0x413c50: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x413c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_413c54:
    // 0x413c54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x413c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_413c58:
    // 0x413c58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x413c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_413c5c:
    // 0x413c5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x413c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_413c60:
    // 0x413c60: 0xc08c650  jal         func_231940
label_413c64:
    if (ctx->pc == 0x413C64u) {
        ctx->pc = 0x413C64u;
            // 0x413c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413C68u;
        goto label_413c68;
    }
    ctx->pc = 0x413C60u;
    SET_GPR_U32(ctx, 31, 0x413C68u);
    ctx->pc = 0x413C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413C60u;
            // 0x413c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C68u; }
        if (ctx->pc != 0x413C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C68u; }
        if (ctx->pc != 0x413C68u) { return; }
    }
    ctx->pc = 0x413C68u;
label_413c68:
    // 0x413c68: 0xc040180  jal         func_100600
label_413c6c:
    if (ctx->pc == 0x413C6Cu) {
        ctx->pc = 0x413C6Cu;
            // 0x413c6c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x413C70u;
        goto label_413c70;
    }
    ctx->pc = 0x413C68u;
    SET_GPR_U32(ctx, 31, 0x413C70u);
    ctx->pc = 0x413C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413C68u;
            // 0x413c6c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C70u; }
        if (ctx->pc != 0x413C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413C70u; }
        if (ctx->pc != 0x413C70u) { return; }
    }
    ctx->pc = 0x413C70u;
label_413c70:
    // 0x413c70: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_413c74:
    if (ctx->pc == 0x413C74u) {
        ctx->pc = 0x413C74u;
            // 0x413c74: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x413C78u;
        goto label_413c78;
    }
    ctx->pc = 0x413C70u;
    {
        const bool branch_taken_0x413c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x413c70) {
            ctx->pc = 0x413C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413C70u;
            // 0x413c74: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413CC0u;
            goto label_413cc0;
        }
    }
    ctx->pc = 0x413C78u;
label_413c78:
    // 0x413c78: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x413c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_413c7c:
    // 0x413c7c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x413c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_413c80:
    // 0x413c80: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x413c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_413c84:
    // 0x413c84: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x413c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_413c88:
    // 0x413c88: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x413c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_413c8c:
    // 0x413c8c: 0x2463c330  addiu       $v1, $v1, -0x3CD0
    ctx->pc = 0x413c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951728));
label_413c90:
    // 0x413c90: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x413c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_413c94:
    // 0x413c94: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x413c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_413c98:
    // 0x413c98: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x413c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_413c9c:
    // 0x413c9c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x413c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_413ca0:
    // 0x413ca0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x413ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_413ca4:
    // 0x413ca4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x413ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_413ca8:
    // 0x413ca8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x413ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_413cac:
    // 0x413cac: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x413cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_413cb0:
    // 0x413cb0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x413cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_413cb4:
    // 0x413cb4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x413cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_413cb8:
    // 0x413cb8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x413cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_413cbc:
    // 0x413cbc: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x413cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_413cc0:
    // 0x413cc0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x413cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_413cc4:
    // 0x413cc4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x413cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_413cc8:
    // 0x413cc8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x413cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_413ccc:
    // 0x413ccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x413cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_413cd0:
    // 0x413cd0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x413cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_413cd4:
    // 0x413cd4: 0xc040180  jal         func_100600
label_413cd8:
    if (ctx->pc == 0x413CD8u) {
        ctx->pc = 0x413CD8u;
            // 0x413cd8: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x413CDCu;
        goto label_413cdc;
    }
    ctx->pc = 0x413CD4u;
    SET_GPR_U32(ctx, 31, 0x413CDCu);
    ctx->pc = 0x413CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413CD4u;
            // 0x413cd8: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413CDCu; }
        if (ctx->pc != 0x413CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413CDCu; }
        if (ctx->pc != 0x413CDCu) { return; }
    }
    ctx->pc = 0x413CDCu;
label_413cdc:
    // 0x413cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x413cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_413ce0:
    // 0x413ce0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_413ce4:
    if (ctx->pc == 0x413CE4u) {
        ctx->pc = 0x413CE4u;
            // 0x413ce4: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->pc = 0x413CE8u;
        goto label_413ce8;
    }
    ctx->pc = 0x413CE0u;
    {
        const bool branch_taken_0x413ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x413ce0) {
            ctx->pc = 0x413CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413CE0u;
            // 0x413ce4: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413D20u;
            goto label_413d20;
        }
    }
    ctx->pc = 0x413CE8u;
label_413ce8:
    // 0x413ce8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x413ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_413cec:
    // 0x413cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x413cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_413cf0:
    // 0x413cf0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x413cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_413cf4:
    // 0x413cf4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x413cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_413cf8:
    // 0x413cf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x413cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_413cfc:
    // 0x413cfc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x413cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_413d00:
    // 0x413d00: 0xc040138  jal         func_1004E0
label_413d04:
    if (ctx->pc == 0x413D04u) {
        ctx->pc = 0x413D04u;
            // 0x413d04: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x413D08u;
        goto label_413d08;
    }
    ctx->pc = 0x413D00u;
    SET_GPR_U32(ctx, 31, 0x413D08u);
    ctx->pc = 0x413D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413D00u;
            // 0x413d04: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D08u; }
        if (ctx->pc != 0x413D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D08u; }
        if (ctx->pc != 0x413D08u) { return; }
    }
    ctx->pc = 0x413D08u;
label_413d08:
    // 0x413d08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x413d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_413d0c:
    // 0x413d0c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x413d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_413d10:
    // 0x413d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x413d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413d14:
    // 0x413d14: 0xc04a576  jal         func_1295D8
label_413d18:
    if (ctx->pc == 0x413D18u) {
        ctx->pc = 0x413D18u;
            // 0x413d18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x413D1Cu;
        goto label_413d1c;
    }
    ctx->pc = 0x413D14u;
    SET_GPR_U32(ctx, 31, 0x413D1Cu);
    ctx->pc = 0x413D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413D14u;
            // 0x413d18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D1Cu; }
        if (ctx->pc != 0x413D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D1Cu; }
        if (ctx->pc != 0x413D1Cu) { return; }
    }
    ctx->pc = 0x413D1Cu;
label_413d1c:
    // 0x413d1c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x413d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_413d20:
    // 0x413d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413d24:
    // 0x413d24: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x413d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_413d28:
    // 0x413d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x413d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413d2c:
    // 0x413d2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x413d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_413d30:
    // 0x413d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x413d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413d34:
    // 0x413d34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x413d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_413d38:
    // 0x413d38: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x413d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
label_413d3c:
    // 0x413d3c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x413d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_413d40:
    // 0x413d40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x413d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_413d44:
    // 0x413d44: 0xc122cd8  jal         func_48B360
label_413d48:
    if (ctx->pc == 0x413D48u) {
        ctx->pc = 0x413D48u;
            // 0x413d48: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->pc = 0x413D4Cu;
        goto label_413d4c;
    }
    ctx->pc = 0x413D44u;
    SET_GPR_U32(ctx, 31, 0x413D4Cu);
    ctx->pc = 0x413D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413D44u;
            // 0x413d48: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D4Cu; }
        if (ctx->pc != 0x413D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D4Cu; }
        if (ctx->pc != 0x413D4Cu) { return; }
    }
    ctx->pc = 0x413D4Cu;
label_413d4c:
    // 0x413d4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x413d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_413d50:
    // 0x413d50: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x413d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_413d54:
    // 0x413d54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x413d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_413d58:
    // 0x413d58: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x413d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_413d5c:
    // 0x413d5c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x413d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_413d60:
    // 0x413d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413d64:
    // 0x413d64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x413d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_413d68:
    // 0x413d68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x413d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413d6c:
    // 0x413d6c: 0x344614ae  ori         $a2, $v0, 0x14AE
    ctx->pc = 0x413d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
label_413d70:
    // 0x413d70: 0xc122cd8  jal         func_48B360
label_413d74:
    if (ctx->pc == 0x413D74u) {
        ctx->pc = 0x413D74u;
            // 0x413d74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413D78u;
        goto label_413d78;
    }
    ctx->pc = 0x413D70u;
    SET_GPR_U32(ctx, 31, 0x413D78u);
    ctx->pc = 0x413D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413D70u;
            // 0x413d74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D78u; }
        if (ctx->pc != 0x413D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413D78u; }
        if (ctx->pc != 0x413D78u) { return; }
    }
    ctx->pc = 0x413D78u;
label_413d78:
    // 0x413d78: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x413d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_413d7c:
    // 0x413d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x413d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413d80:
    // 0x413d80: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x413d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_413d84:
    // 0x413d84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x413d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_413d88:
    // 0x413d88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x413d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_413d8c:
    // 0x413d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x413d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413d90:
    // 0x413d90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x413d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_413d94:
    // 0x413d94: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x413d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
label_413d98:
    // 0x413d98: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x413d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_413d9c:
    // 0x413d9c: 0xc122cd8  jal         func_48B360
label_413da0:
    if (ctx->pc == 0x413DA0u) {
        ctx->pc = 0x413DA0u;
            // 0x413da0: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->pc = 0x413DA4u;
        goto label_413da4;
    }
    ctx->pc = 0x413D9Cu;
    SET_GPR_U32(ctx, 31, 0x413DA4u);
    ctx->pc = 0x413DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413D9Cu;
            // 0x413da0: 0x344614ae  ori         $a2, $v0, 0x14AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5294);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413DA4u; }
        if (ctx->pc != 0x413DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413DA4u; }
        if (ctx->pc != 0x413DA4u) { return; }
    }
    ctx->pc = 0x413DA4u;
label_413da4:
    // 0x413da4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x413da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_413da8:
    // 0x413da8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x413da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_413dac:
    // 0x413dac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x413dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_413db0:
    // 0x413db0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x413db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_413db4:
    // 0x413db4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x413db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_413db8:
    // 0x413db8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x413db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413dbc:
    // 0x413dbc: 0x3e00008  jr          $ra
label_413dc0:
    if (ctx->pc == 0x413DC0u) {
        ctx->pc = 0x413DC0u;
            // 0x413dc0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x413DC4u;
        goto label_413dc4;
    }
    ctx->pc = 0x413DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413DBCu;
            // 0x413dc0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413DC4u;
label_413dc4:
    // 0x413dc4: 0x0  nop
    ctx->pc = 0x413dc4u;
    // NOP
label_413dc8:
    // 0x413dc8: 0x0  nop
    ctx->pc = 0x413dc8u;
    // NOP
label_413dcc:
    // 0x413dcc: 0x0  nop
    ctx->pc = 0x413dccu;
    // NOP
label_413dd0:
    // 0x413dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413dd4:
    // 0x413dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_413dd8:
    // 0x413dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_413ddc:
    // 0x413ddc: 0xc0e3580  jal         func_38D600
label_413de0:
    if (ctx->pc == 0x413DE0u) {
        ctx->pc = 0x413DE0u;
            // 0x413de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413DE4u;
        goto label_413de4;
    }
    ctx->pc = 0x413DDCu;
    SET_GPR_U32(ctx, 31, 0x413DE4u);
    ctx->pc = 0x413DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413DDCu;
            // 0x413de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413DE4u; }
        if (ctx->pc != 0x413DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413DE4u; }
        if (ctx->pc != 0x413DE4u) { return; }
    }
    ctx->pc = 0x413DE4u;
label_413de4:
    // 0x413de4: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x413de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_413de8:
    // 0x413de8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x413de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_413dec:
    // 0x413dec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x413decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_413df0:
    // 0x413df0: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x413df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_413df4:
    // 0x413df4: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x413df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
label_413df8:
    // 0x413df8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x413df8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413dfc:
    // 0x413dfc: 0xa20a0069  sb          $t2, 0x69($s0)
    ctx->pc = 0x413dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 10));
label_413e00:
    // 0x413e00: 0x3c084190  lui         $t0, 0x4190
    ctx->pc = 0x413e00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16784 << 16));
label_413e04:
    // 0x413e04: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x413e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413e08:
    // 0x413e08: 0x3c074396  lui         $a3, 0x4396
    ctx->pc = 0x413e08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17302 << 16));
label_413e0c:
    // 0x413e0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x413e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_413e10:
    // 0x413e10: 0x3c054240  lui         $a1, 0x4240
    ctx->pc = 0x413e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16960 << 16));
label_413e14:
    // 0x413e14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x413e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_413e18:
    // 0x413e18: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x413e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_413e1c:
    // 0x413e1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x413e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_413e20:
    // 0x413e20: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x413e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_413e24:
    // 0x413e24: 0x0  nop
    ctx->pc = 0x413e24u;
    // NOP
label_413e28:
    // 0x413e28: 0xa20900f1  sb          $t1, 0xF1($s0)
    ctx->pc = 0x413e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 241), (uint8_t)GPR_U32(ctx, 9));
label_413e2c:
    // 0x413e2c: 0xae0a008c  sw          $t2, 0x8C($s0)
    ctx->pc = 0x413e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 10));
label_413e30:
    // 0x413e30: 0xae080070  sw          $t0, 0x70($s0)
    ctx->pc = 0x413e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 8));
label_413e34:
    // 0x413e34: 0xae080078  sw          $t0, 0x78($s0)
    ctx->pc = 0x413e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 8));
label_413e38:
    // 0x413e38: 0xae070080  sw          $a3, 0x80($s0)
    ctx->pc = 0x413e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 7));
label_413e3c:
    // 0x413e3c: 0xa20600cc  sb          $a2, 0xCC($s0)
    ctx->pc = 0x413e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 6));
label_413e40:
    // 0x413e40: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x413e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
label_413e44:
    // 0x413e44: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x413e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_413e48:
    // 0x413e48: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x413e48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_413e4c:
    // 0x413e4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x413e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_413e50:
    // 0x413e50: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x413e50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_413e54:
    // 0x413e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x413e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_413e58:
    // 0x413e58: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x413e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_413e5c:
    // 0x413e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_413e60:
    // 0x413e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_413e64:
    // 0x413e64: 0x3e00008  jr          $ra
label_413e68:
    if (ctx->pc == 0x413E68u) {
        ctx->pc = 0x413E68u;
            // 0x413e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x413E6Cu;
        goto label_413e6c;
    }
    ctx->pc = 0x413E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413E64u;
            // 0x413e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413E6Cu;
label_413e6c:
    // 0x413e6c: 0x0  nop
    ctx->pc = 0x413e6cu;
    // NOP
label_413e70:
    // 0x413e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413e74:
    // 0x413e74: 0x3c030121  lui         $v1, 0x121
    ctx->pc = 0x413e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)289 << 16));
label_413e78:
    // 0x413e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_413e7c:
    // 0x413e7c: 0x34630120  ori         $v1, $v1, 0x120
    ctx->pc = 0x413e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)288);
label_413e80:
    // 0x413e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_413e84:
    // 0x413e84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x413e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_413e88:
    // 0x413e88: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x413e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_413e8c:
    // 0x413e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x413e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413e90:
    // 0x413e90: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x413e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_413e94:
    // 0x413e94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x413e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413e98:
    // 0x413e98: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x413e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_413e9c:
    // 0x413e9c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x413e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_413ea0:
    // 0x413ea0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x413ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_413ea4:
    // 0x413ea4: 0xc08bff0  jal         func_22FFC0
label_413ea8:
    if (ctx->pc == 0x413EA8u) {
        ctx->pc = 0x413EA8u;
            // 0x413ea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413EACu;
        goto label_413eac;
    }
    ctx->pc = 0x413EA4u;
    SET_GPR_U32(ctx, 31, 0x413EACu);
    ctx->pc = 0x413EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413EA4u;
            // 0x413ea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413EACu; }
        if (ctx->pc != 0x413EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413EACu; }
        if (ctx->pc != 0x413EACu) { return; }
    }
    ctx->pc = 0x413EACu;
label_413eac:
    // 0x413eac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x413eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_413eb0:
    // 0x413eb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x413eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_413eb4:
    // 0x413eb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x413eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413eb8:
    // 0x413eb8: 0xc08914c  jal         func_224530
label_413ebc:
    if (ctx->pc == 0x413EBCu) {
        ctx->pc = 0x413EBCu;
            // 0x413ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413EC0u;
        goto label_413ec0;
    }
    ctx->pc = 0x413EB8u;
    SET_GPR_U32(ctx, 31, 0x413EC0u);
    ctx->pc = 0x413EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413EB8u;
            // 0x413ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413EC0u; }
        if (ctx->pc != 0x413EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413EC0u; }
        if (ctx->pc != 0x413EC0u) { return; }
    }
    ctx->pc = 0x413EC0u;
label_413ec0:
    // 0x413ec0: 0xc0e393c  jal         func_38E4F0
label_413ec4:
    if (ctx->pc == 0x413EC4u) {
        ctx->pc = 0x413EC4u;
            // 0x413ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413EC8u;
        goto label_413ec8;
    }
    ctx->pc = 0x413EC0u;
    SET_GPR_U32(ctx, 31, 0x413EC8u);
    ctx->pc = 0x413EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413EC0u;
            // 0x413ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413EC8u; }
        if (ctx->pc != 0x413EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413EC8u; }
        if (ctx->pc != 0x413EC8u) { return; }
    }
    ctx->pc = 0x413EC8u;
label_413ec8:
    // 0x413ec8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x413ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_413ecc:
    // 0x413ecc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x413eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_413ed0:
    // 0x413ed0: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x413ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_413ed4:
    // 0x413ed4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_413ed8:
    if (ctx->pc == 0x413ED8u) {
        ctx->pc = 0x413ED8u;
            // 0x413ed8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x413EDCu;
        goto label_413edc;
    }
    ctx->pc = 0x413ED4u;
    {
        const bool branch_taken_0x413ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x413ed4) {
            ctx->pc = 0x413ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413ED4u;
            // 0x413ed8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413EF4u;
            goto label_413ef4;
        }
    }
    ctx->pc = 0x413EDCu;
label_413edc:
    // 0x413edc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x413edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_413ee0:
    // 0x413ee0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x413ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_413ee4:
    // 0x413ee4: 0x320f809  jalr        $t9
label_413ee8:
    if (ctx->pc == 0x413EE8u) {
        ctx->pc = 0x413EE8u;
            // 0x413ee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x413EECu;
        goto label_413eec;
    }
    ctx->pc = 0x413EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x413EECu);
        ctx->pc = 0x413EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413EE4u;
            // 0x413ee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x413EECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x413EECu; }
            if (ctx->pc != 0x413EECu) { return; }
        }
        }
    }
    ctx->pc = 0x413EECu;
label_413eec:
    // 0x413eec: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x413eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_413ef0:
    // 0x413ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_413ef4:
    // 0x413ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_413ef8:
    // 0x413ef8: 0x3e00008  jr          $ra
label_413efc:
    if (ctx->pc == 0x413EFCu) {
        ctx->pc = 0x413EFCu;
            // 0x413efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x413F00u;
        goto label_413f00;
    }
    ctx->pc = 0x413EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413EF8u;
            // 0x413efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413F00u;
label_413f00:
    // 0x413f00: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x413f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_413f04:
    // 0x413f04: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x413f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_413f08:
    // 0x413f08: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x413f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_413f0c:
    // 0x413f0c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_413f10:
    if (ctx->pc == 0x413F10u) {
        ctx->pc = 0x413F10u;
            // 0x413f10: 0xac8000d4  sw          $zero, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x413F14u;
        goto label_413f14;
    }
    ctx->pc = 0x413F0Cu;
    {
        const bool branch_taken_0x413f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x413f0c) {
            ctx->pc = 0x413F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413F0Cu;
            // 0x413f10: 0xac8000d4  sw          $zero, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x413F34u;
            goto label_413f34;
        }
    }
    ctx->pc = 0x413F14u;
label_413f14:
    // 0x413f14: 0x8ca30cb4  lw          $v1, 0xCB4($a1)
    ctx->pc = 0x413f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
label_413f18:
    // 0x413f18: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x413f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_413f1c:
    // 0x413f1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_413f20:
    if (ctx->pc == 0x413F20u) {
        ctx->pc = 0x413F24u;
        goto label_413f24;
    }
    ctx->pc = 0x413F1Cu;
    {
        const bool branch_taken_0x413f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x413f1c) {
            ctx->pc = 0x413F30u;
            goto label_413f30;
        }
    }
    ctx->pc = 0x413F24u;
label_413f24:
    // 0x413f24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x413f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_413f28:
    // 0x413f28: 0x10000002  b           . + 4 + (0x2 << 2)
label_413f2c:
    if (ctx->pc == 0x413F2Cu) {
        ctx->pc = 0x413F2Cu;
            // 0x413f2c: 0xac8300d4  sw          $v1, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x413F30u;
        goto label_413f30;
    }
    ctx->pc = 0x413F28u;
    {
        const bool branch_taken_0x413f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413F28u;
            // 0x413f2c: 0xac8300d4  sw          $v1, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f28) {
            ctx->pc = 0x413F34u;
            goto label_413f34;
        }
    }
    ctx->pc = 0x413F30u;
label_413f30:
    // 0x413f30: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x413f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_413f34:
    // 0x413f34: 0x3e00008  jr          $ra
label_413f38:
    if (ctx->pc == 0x413F38u) {
        ctx->pc = 0x413F3Cu;
        goto label_413f3c;
    }
    ctx->pc = 0x413F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413F3Cu;
label_413f3c:
    // 0x413f3c: 0x0  nop
    ctx->pc = 0x413f3cu;
    // NOP
label_413f40:
    // 0x413f40: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x413f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_413f44:
    // 0x413f44: 0x8c8a0014  lw          $t2, 0x14($a0)
    ctx->pc = 0x413f44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_413f48:
    // 0x413f48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x413f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_413f4c:
    // 0x413f4c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x413f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_413f50:
    // 0x413f50: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x413f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_413f54:
    // 0x413f54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x413f54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413f58:
    // 0x413f58: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x413f58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_413f5c:
    // 0x413f5c: 0x80a611aa  lb          $a2, 0x11AA($a1)
    ctx->pc = 0x413f5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4522)));
label_413f60:
    // 0x413f60: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x413f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
label_413f64:
    // 0x413f64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x413f64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_413f68:
    // 0x413f68: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x413f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_413f6c:
    // 0x413f6c: 0x246a0004  addiu       $t2, $v1, 0x4
    ctx->pc = 0x413f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_413f70:
    // 0x413f70: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x413f70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_413f74:
    // 0x413f74: 0xc04027  not         $t0, $a2
    ctx->pc = 0x413f74u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_413f78:
    // 0x413f78: 0x8ce600e0  lw          $a2, 0xE0($a3)
    ctx->pc = 0x413f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
label_413f7c:
    // 0x413f7c: 0x1441826  xor         $v1, $t2, $a0
    ctx->pc = 0x413f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 4));
label_413f80:
    // 0x413f80: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x413f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_413f84:
    // 0x413f84: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x413f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_413f88:
    // 0x413f88: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x413f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_413f8c:
    // 0x413f8c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_413f90:
    if (ctx->pc == 0x413F90u) {
        ctx->pc = 0x413F90u;
            // 0x413f90: 0xace600e0  sw          $a2, 0xE0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 6));
        ctx->pc = 0x413F94u;
        goto label_413f94;
    }
    ctx->pc = 0x413F8Cu;
    {
        const bool branch_taken_0x413f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x413F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413F8Cu;
            // 0x413f90: 0xace600e0  sw          $a2, 0xE0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f8c) {
            ctx->pc = 0x413F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_413f5c;
        }
    }
    ctx->pc = 0x413F94u;
label_413f94:
    // 0x413f94: 0x3e00008  jr          $ra
label_413f98:
    if (ctx->pc == 0x413F98u) {
        ctx->pc = 0x413F9Cu;
        goto label_413f9c;
    }
    ctx->pc = 0x413F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413F9Cu;
label_413f9c:
    // 0x413f9c: 0x0  nop
    ctx->pc = 0x413f9cu;
    // NOP
label_413fa0:
    // 0x413fa0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x413fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_413fa4:
    // 0x413fa4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x413fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_413fa8:
    // 0x413fa8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x413fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_413fac:
    // 0x413fac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x413facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_413fb0:
    // 0x413fb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x413fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_413fb4:
    // 0x413fb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x413fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_413fb8:
    // 0x413fb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x413fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413fbc:
    // 0x413fbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x413fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_413fc0:
    // 0x413fc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x413fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_413fc4:
    // 0x413fc4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x413fc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_413fc8:
    // 0x413fc8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x413fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_413fcc:
    // 0x413fcc: 0x8ca40db4  lw          $a0, 0xDB4($a1)
    ctx->pc = 0x413fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3508)));
label_413fd0:
    // 0x413fd0: 0x148300bb  bne         $a0, $v1, . + 4 + (0xBB << 2)
label_413fd4:
    if (ctx->pc == 0x413FD4u) {
        ctx->pc = 0x413FD4u;
            // 0x413fd4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x413FD8u;
        goto label_413fd8;
    }
    ctx->pc = 0x413FD0u;
    {
        const bool branch_taken_0x413fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x413FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413FD0u;
            // 0x413fd4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413fd0) {
            ctx->pc = 0x4142C0u;
            goto label_4142c0;
        }
    }
    ctx->pc = 0x413FD8u;
label_413fd8:
    // 0x413fd8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x413fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_413fdc:
    // 0x413fdc: 0x8e440da8  lw          $a0, 0xDA8($s2)
    ctx->pc = 0x413fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3496)));
label_413fe0:
    // 0x413fe0: 0x8c63fca0  lw          $v1, -0x360($v1)
    ctx->pc = 0x413fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966432)));
label_413fe4:
    // 0x413fe4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x413fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_413fe8:
    // 0x413fe8: 0x506000b6  beql        $v1, $zero, . + 4 + (0xB6 << 2)
label_413fec:
    if (ctx->pc == 0x413FECu) {
        ctx->pc = 0x413FECu;
            // 0x413fec: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x413FF0u;
        goto label_413ff0;
    }
    ctx->pc = 0x413FE8u;
    {
        const bool branch_taken_0x413fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x413fe8) {
            ctx->pc = 0x413FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x413FE8u;
            // 0x413fec: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4142C4u;
            goto label_4142c4;
        }
    }
    ctx->pc = 0x413FF0u;
label_413ff0:
    // 0x413ff0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x413ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_413ff4:
    // 0x413ff4: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
label_413ff8:
    if (ctx->pc == 0x413FF8u) {
        ctx->pc = 0x413FFCu;
        goto label_413ffc;
    }
    ctx->pc = 0x413FF4u;
    {
        const bool branch_taken_0x413ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x413ff4) {
            ctx->pc = 0x4142C0u;
            goto label_4142c0;
        }
    }
    ctx->pc = 0x413FFCu;
label_413ffc:
    // 0x413ffc: 0xc105104  jal         func_414410
label_414000:
    if (ctx->pc == 0x414000u) {
        ctx->pc = 0x414000u;
            // 0x414000: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x414004u;
        goto label_414004;
    }
    ctx->pc = 0x413FFCu;
    SET_GPR_U32(ctx, 31, 0x414004u);
    ctx->pc = 0x414000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413FFCu;
            // 0x414000: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414410u;
    if (runtime->hasFunction(0x414410u)) {
        auto targetFn = runtime->lookupFunction(0x414410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414004u; }
        if (ctx->pc != 0x414004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414410_0x414410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414004u; }
        if (ctx->pc != 0x414004u) { return; }
    }
    ctx->pc = 0x414004u;
label_414004:
    // 0x414004: 0xc105100  jal         func_414400
label_414008:
    if (ctx->pc == 0x414008u) {
        ctx->pc = 0x414008u;
            // 0x414008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41400Cu;
        goto label_41400c;
    }
    ctx->pc = 0x414004u;
    SET_GPR_U32(ctx, 31, 0x41400Cu);
    ctx->pc = 0x414008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414004u;
            // 0x414008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414400u;
    if (runtime->hasFunction(0x414400u)) {
        auto targetFn = runtime->lookupFunction(0x414400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41400Cu; }
        if (ctx->pc != 0x41400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414400_0x414400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41400Cu; }
        if (ctx->pc != 0x41400Cu) { return; }
    }
    ctx->pc = 0x41400Cu;
label_41400c:
    // 0x41400c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41400cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414010:
    // 0x414010: 0xc0b6e68  jal         func_2DB9A0
label_414014:
    if (ctx->pc == 0x414014u) {
        ctx->pc = 0x414014u;
            // 0x414014: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x414018u;
        goto label_414018;
    }
    ctx->pc = 0x414010u;
    SET_GPR_U32(ctx, 31, 0x414018u);
    ctx->pc = 0x414014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414010u;
            // 0x414014: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414018u; }
        if (ctx->pc != 0x414018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414018u; }
        if (ctx->pc != 0x414018u) { return; }
    }
    ctx->pc = 0x414018u;
label_414018:
    // 0x414018: 0xc0b6e68  jal         func_2DB9A0
label_41401c:
    if (ctx->pc == 0x41401Cu) {
        ctx->pc = 0x41401Cu;
            // 0x41401c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x414020u;
        goto label_414020;
    }
    ctx->pc = 0x414018u;
    SET_GPR_U32(ctx, 31, 0x414020u);
    ctx->pc = 0x41401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414018u;
            // 0x41401c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414020u; }
        if (ctx->pc != 0x414020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414020u; }
        if (ctx->pc != 0x414020u) { return; }
    }
    ctx->pc = 0x414020u;
label_414020:
    // 0x414020: 0xc0b6e68  jal         func_2DB9A0
label_414024:
    if (ctx->pc == 0x414024u) {
        ctx->pc = 0x414024u;
            // 0x414024: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x414028u;
        goto label_414028;
    }
    ctx->pc = 0x414020u;
    SET_GPR_U32(ctx, 31, 0x414028u);
    ctx->pc = 0x414024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414020u;
            // 0x414024: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414028u; }
        if (ctx->pc != 0x414028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414028u; }
        if (ctx->pc != 0x414028u) { return; }
    }
    ctx->pc = 0x414028u;
label_414028:
    // 0x414028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41402c:
    // 0x41402c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41402cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414030:
    // 0x414030: 0xc1050f4  jal         func_4143D0
label_414034:
    if (ctx->pc == 0x414034u) {
        ctx->pc = 0x414034u;
            // 0x414034: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x414038u;
        goto label_414038;
    }
    ctx->pc = 0x414030u;
    SET_GPR_U32(ctx, 31, 0x414038u);
    ctx->pc = 0x414034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414030u;
            // 0x414034: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4143D0u;
    if (runtime->hasFunction(0x4143D0u)) {
        auto targetFn = runtime->lookupFunction(0x4143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414038u; }
        if (ctx->pc != 0x414038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004143D0_0x4143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414038u; }
        if (ctx->pc != 0x414038u) { return; }
    }
    ctx->pc = 0x414038u;
label_414038:
    // 0x414038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41403c:
    // 0x41403c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414040:
    // 0x414040: 0xc1050f4  jal         func_4143D0
label_414044:
    if (ctx->pc == 0x414044u) {
        ctx->pc = 0x414044u;
            // 0x414044: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x414048u;
        goto label_414048;
    }
    ctx->pc = 0x414040u;
    SET_GPR_U32(ctx, 31, 0x414048u);
    ctx->pc = 0x414044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414040u;
            // 0x414044: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4143D0u;
    if (runtime->hasFunction(0x4143D0u)) {
        auto targetFn = runtime->lookupFunction(0x4143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414048u; }
        if (ctx->pc != 0x414048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004143D0_0x4143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414048u; }
        if (ctx->pc != 0x414048u) { return; }
    }
    ctx->pc = 0x414048u;
label_414048:
    // 0x414048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41404c:
    // 0x41404c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41404cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_414050:
    // 0x414050: 0xc1050f4  jal         func_4143D0
label_414054:
    if (ctx->pc == 0x414054u) {
        ctx->pc = 0x414054u;
            // 0x414054: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x414058u;
        goto label_414058;
    }
    ctx->pc = 0x414050u;
    SET_GPR_U32(ctx, 31, 0x414058u);
    ctx->pc = 0x414054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414050u;
            // 0x414054: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4143D0u;
    if (runtime->hasFunction(0x4143D0u)) {
        auto targetFn = runtime->lookupFunction(0x4143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414058u; }
        if (ctx->pc != 0x414058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004143D0_0x4143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414058u; }
        if (ctx->pc != 0x414058u) { return; }
    }
    ctx->pc = 0x414058u;
label_414058:
    // 0x414058: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x414058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_41405c:
    // 0x41405c: 0xc0b6e90  jal         func_2DBA40
label_414060:
    if (ctx->pc == 0x414060u) {
        ctx->pc = 0x414060u;
            // 0x414060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414064u;
        goto label_414064;
    }
    ctx->pc = 0x41405Cu;
    SET_GPR_U32(ctx, 31, 0x414064u);
    ctx->pc = 0x414060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41405Cu;
            // 0x414060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414064u; }
        if (ctx->pc != 0x414064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414064u; }
        if (ctx->pc != 0x414064u) { return; }
    }
    ctx->pc = 0x414064u;
label_414064:
    // 0x414064: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x414064u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_414068:
    // 0x414068: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x414068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_41406c:
    // 0x41406c: 0xc0b6e90  jal         func_2DBA40
label_414070:
    if (ctx->pc == 0x414070u) {
        ctx->pc = 0x414070u;
            // 0x414070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x414074u;
        goto label_414074;
    }
    ctx->pc = 0x41406Cu;
    SET_GPR_U32(ctx, 31, 0x414074u);
    ctx->pc = 0x414070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41406Cu;
            // 0x414070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414074u; }
        if (ctx->pc != 0x414074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414074u; }
        if (ctx->pc != 0x414074u) { return; }
    }
    ctx->pc = 0x414074u;
label_414074:
    // 0x414074: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x414074u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_414078:
    // 0x414078: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x414078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_41407c:
    // 0x41407c: 0xc0b6e90  jal         func_2DBA40
label_414080:
    if (ctx->pc == 0x414080u) {
        ctx->pc = 0x414080u;
            // 0x414080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x414084u;
        goto label_414084;
    }
    ctx->pc = 0x41407Cu;
    SET_GPR_U32(ctx, 31, 0x414084u);
    ctx->pc = 0x414080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41407Cu;
            // 0x414080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414084u; }
        if (ctx->pc != 0x414084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414084u; }
        if (ctx->pc != 0x414084u) { return; }
    }
    ctx->pc = 0x414084u;
label_414084:
    // 0x414084: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x414084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_414088:
    // 0x414088: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x414088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41408c:
    // 0x41408c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x41408cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_414090:
    // 0x414090: 0xc04cbd8  jal         func_132F60
label_414094:
    if (ctx->pc == 0x414094u) {
        ctx->pc = 0x414094u;
            // 0x414094: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x414098u;
        goto label_414098;
    }
    ctx->pc = 0x414090u;
    SET_GPR_U32(ctx, 31, 0x414098u);
    ctx->pc = 0x414094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414090u;
            // 0x414094: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414098u; }
        if (ctx->pc != 0x414098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414098u; }
        if (ctx->pc != 0x414098u) { return; }
    }
    ctx->pc = 0x414098u;
label_414098:
    // 0x414098: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x414098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_41409c:
    // 0x41409c: 0xc0b6e90  jal         func_2DBA40
label_4140a0:
    if (ctx->pc == 0x4140A0u) {
        ctx->pc = 0x4140A0u;
            // 0x4140a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4140A4u;
        goto label_4140a4;
    }
    ctx->pc = 0x41409Cu;
    SET_GPR_U32(ctx, 31, 0x4140A4u);
    ctx->pc = 0x4140A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41409Cu;
            // 0x4140a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140A4u; }
        if (ctx->pc != 0x4140A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140A4u; }
        if (ctx->pc != 0x4140A4u) { return; }
    }
    ctx->pc = 0x4140A4u;
label_4140a4:
    // 0x4140a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4140a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4140a8:
    // 0x4140a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4140a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4140ac:
    // 0x4140ac: 0xc0b6e90  jal         func_2DBA40
label_4140b0:
    if (ctx->pc == 0x4140B0u) {
        ctx->pc = 0x4140B0u;
            // 0x4140b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4140B4u;
        goto label_4140b4;
    }
    ctx->pc = 0x4140ACu;
    SET_GPR_U32(ctx, 31, 0x4140B4u);
    ctx->pc = 0x4140B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4140ACu;
            // 0x4140b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140B4u; }
        if (ctx->pc != 0x4140B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140B4u; }
        if (ctx->pc != 0x4140B4u) { return; }
    }
    ctx->pc = 0x4140B4u;
label_4140b4:
    // 0x4140b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4140b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4140b8:
    // 0x4140b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4140b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4140bc:
    // 0x4140bc: 0xc0b6e90  jal         func_2DBA40
label_4140c0:
    if (ctx->pc == 0x4140C0u) {
        ctx->pc = 0x4140C0u;
            // 0x4140c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4140C4u;
        goto label_4140c4;
    }
    ctx->pc = 0x4140BCu;
    SET_GPR_U32(ctx, 31, 0x4140C4u);
    ctx->pc = 0x4140C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4140BCu;
            // 0x4140c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140C4u; }
        if (ctx->pc != 0x4140C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140C4u; }
        if (ctx->pc != 0x4140C4u) { return; }
    }
    ctx->pc = 0x4140C4u;
label_4140c4:
    // 0x4140c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4140c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4140c8:
    // 0x4140c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4140c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4140cc:
    // 0x4140cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4140ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4140d0:
    // 0x4140d0: 0xc04cbd8  jal         func_132F60
label_4140d4:
    if (ctx->pc == 0x4140D4u) {
        ctx->pc = 0x4140D4u;
            // 0x4140d4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4140D8u;
        goto label_4140d8;
    }
    ctx->pc = 0x4140D0u;
    SET_GPR_U32(ctx, 31, 0x4140D8u);
    ctx->pc = 0x4140D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4140D0u;
            // 0x4140d4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140D8u; }
        if (ctx->pc != 0x4140D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140D8u; }
        if (ctx->pc != 0x4140D8u) { return; }
    }
    ctx->pc = 0x4140D8u;
label_4140d8:
    // 0x4140d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4140d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4140dc:
    // 0x4140dc: 0xc0b6e90  jal         func_2DBA40
label_4140e0:
    if (ctx->pc == 0x4140E0u) {
        ctx->pc = 0x4140E0u;
            // 0x4140e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4140E4u;
        goto label_4140e4;
    }
    ctx->pc = 0x4140DCu;
    SET_GPR_U32(ctx, 31, 0x4140E4u);
    ctx->pc = 0x4140E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4140DCu;
            // 0x4140e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140E4u; }
        if (ctx->pc != 0x4140E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140E4u; }
        if (ctx->pc != 0x4140E4u) { return; }
    }
    ctx->pc = 0x4140E4u;
label_4140e4:
    // 0x4140e4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4140e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4140e8:
    // 0x4140e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4140e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4140ec:
    // 0x4140ec: 0xc0b6e90  jal         func_2DBA40
label_4140f0:
    if (ctx->pc == 0x4140F0u) {
        ctx->pc = 0x4140F0u;
            // 0x4140f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4140F4u;
        goto label_4140f4;
    }
    ctx->pc = 0x4140ECu;
    SET_GPR_U32(ctx, 31, 0x4140F4u);
    ctx->pc = 0x4140F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4140ECu;
            // 0x4140f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140F4u; }
        if (ctx->pc != 0x4140F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4140F4u; }
        if (ctx->pc != 0x4140F4u) { return; }
    }
    ctx->pc = 0x4140F4u;
label_4140f4:
    // 0x4140f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4140f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4140f8:
    // 0x4140f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4140f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4140fc:
    // 0x4140fc: 0xc0b6e90  jal         func_2DBA40
label_414100:
    if (ctx->pc == 0x414100u) {
        ctx->pc = 0x414100u;
            // 0x414100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x414104u;
        goto label_414104;
    }
    ctx->pc = 0x4140FCu;
    SET_GPR_U32(ctx, 31, 0x414104u);
    ctx->pc = 0x414100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4140FCu;
            // 0x414100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414104u; }
        if (ctx->pc != 0x414104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414104u; }
        if (ctx->pc != 0x414104u) { return; }
    }
    ctx->pc = 0x414104u;
label_414104:
    // 0x414104: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x414104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_414108:
    // 0x414108: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x414108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_41410c:
    // 0x41410c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x41410cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_414110:
    // 0x414110: 0xc04cbd8  jal         func_132F60
label_414114:
    if (ctx->pc == 0x414114u) {
        ctx->pc = 0x414114u;
            // 0x414114: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x414118u;
        goto label_414118;
    }
    ctx->pc = 0x414110u;
    SET_GPR_U32(ctx, 31, 0x414118u);
    ctx->pc = 0x414114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414110u;
            // 0x414114: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414118u; }
        if (ctx->pc != 0x414118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414118u; }
        if (ctx->pc != 0x414118u) { return; }
    }
    ctx->pc = 0x414118u;
label_414118:
    // 0x414118: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x414118u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_41411c:
    // 0x41411c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x41411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_414120:
    // 0x414120: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x414120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_414124:
    // 0x414124: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x414124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_414128:
    // 0x414128: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x414128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_41412c:
    // 0x41412c: 0xc1050d0  jal         func_414340
label_414130:
    if (ctx->pc == 0x414130u) {
        ctx->pc = 0x414130u;
            // 0x414130: 0x2508c3d0  addiu       $t0, $t0, -0x3C30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951888));
        ctx->pc = 0x414134u;
        goto label_414134;
    }
    ctx->pc = 0x41412Cu;
    SET_GPR_U32(ctx, 31, 0x414134u);
    ctx->pc = 0x414130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41412Cu;
            // 0x414130: 0x2508c3d0  addiu       $t0, $t0, -0x3C30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414340u;
    if (runtime->hasFunction(0x414340u)) {
        auto targetFn = runtime->lookupFunction(0x414340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414134u; }
        if (ctx->pc != 0x414134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414340_0x414340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414134u; }
        if (ctx->pc != 0x414134u) { return; }
    }
    ctx->pc = 0x414134u;
label_414134:
    // 0x414134: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x414134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_414138:
    // 0x414138: 0xc04ce80  jal         func_133A00
label_41413c:
    if (ctx->pc == 0x41413Cu) {
        ctx->pc = 0x41413Cu;
            // 0x41413c: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x414140u;
        goto label_414140;
    }
    ctx->pc = 0x414138u;
    SET_GPR_U32(ctx, 31, 0x414140u);
    ctx->pc = 0x41413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414138u;
            // 0x41413c: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414140u; }
        if (ctx->pc != 0x414140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414140u; }
        if (ctx->pc != 0x414140u) { return; }
    }
    ctx->pc = 0x414140u;
label_414140:
    // 0x414140: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x414140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_414144:
    // 0x414144: 0xc04ccf4  jal         func_1333D0
label_414148:
    if (ctx->pc == 0x414148u) {
        ctx->pc = 0x414148u;
            // 0x414148: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x41414Cu;
        goto label_41414c;
    }
    ctx->pc = 0x414144u;
    SET_GPR_U32(ctx, 31, 0x41414Cu);
    ctx->pc = 0x414148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414144u;
            // 0x414148: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41414Cu; }
        if (ctx->pc != 0x41414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41414Cu; }
        if (ctx->pc != 0x41414Cu) { return; }
    }
    ctx->pc = 0x41414Cu;
label_41414c:
    // 0x41414c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_414150:
    // 0x414150: 0x8e710014  lw          $s1, 0x14($s3)
    ctx->pc = 0x414150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_414154:
    // 0x414154: 0x825009e0  lb          $s0, 0x9E0($s2)
    ctx->pc = 0x414154u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2528)));
label_414158:
    // 0x414158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x414158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_41415c:
    // 0x41415c: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x41415cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_414160:
    // 0x414160: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x414160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_414164:
    // 0x414164: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x414164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_414168:
    // 0x414168: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x414168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_41416c:
    // 0x41416c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x41416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_414170:
    // 0x414170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x414170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_414174:
    // 0x414174: 0xc04cca0  jal         func_133280
label_414178:
    if (ctx->pc == 0x414178u) {
        ctx->pc = 0x414178u;
            // 0x414178: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x41417Cu;
        goto label_41417c;
    }
    ctx->pc = 0x414174u;
    SET_GPR_U32(ctx, 31, 0x41417Cu);
    ctx->pc = 0x414178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414174u;
            // 0x414178: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41417Cu; }
        if (ctx->pc != 0x41417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41417Cu; }
        if (ctx->pc != 0x41417Cu) { return; }
    }
    ctx->pc = 0x41417Cu;
label_41417c:
    // 0x41417c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x41417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_414180:
    // 0x414180: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x414180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_414184:
    // 0x414184: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x414184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_414188:
    // 0x414188: 0xc049820  jal         func_126080
label_41418c:
    if (ctx->pc == 0x41418Cu) {
        ctx->pc = 0x414190u;
        goto label_414190;
    }
    ctx->pc = 0x414188u;
    SET_GPR_U32(ctx, 31, 0x414190u);
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414190u; }
        if (ctx->pc != 0x414190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414190u; }
        if (ctx->pc != 0x414190u) { return; }
    }
    ctx->pc = 0x414190u;
label_414190:
    // 0x414190: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x414190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_414194:
    // 0x414194: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x414194u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_414198:
    // 0x414198: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x414198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_41419c:
    // 0x41419c: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x41419cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4141a0:
    // 0x4141a0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x4141a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_4141a4:
    // 0x4141a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4141a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4141a8:
    // 0x4141a8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x4141a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_4141ac:
    // 0x4141ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4141acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4141b0:
    // 0x4141b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4141b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4141b4:
    // 0x4141b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4141b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4141b8:
    // 0x4141b8: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x4141b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_4141bc:
    // 0x4141bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4141bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4141c0:
    // 0x4141c0: 0x2010  mfhi        $a0
    ctx->pc = 0x4141c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4141c4:
    // 0x4141c4: 0x80a300f1  lb          $v1, 0xF1($a1)
    ctx->pc = 0x4141c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 241)));
label_4141c8:
    // 0x4141c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4141c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4141cc:
    // 0x4141cc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x4141ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_4141d0:
    // 0x4141d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4141d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4141d4:
    // 0x4141d4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4141d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4141d8:
    // 0x4141d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4141d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4141dc:
    // 0x4141dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x4141dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4141e0:
    // 0x4141e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4141e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4141e4:
    // 0x4141e4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_4141e8:
    if (ctx->pc == 0x4141E8u) {
        ctx->pc = 0x4141E8u;
            // 0x4141e8: 0x4600105c  madd.s      $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->pc = 0x4141ECu;
        goto label_4141ec;
    }
    ctx->pc = 0x4141E4u;
    {
        const bool branch_taken_0x4141e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4141E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4141E4u;
            // 0x4141e8: 0x4600105c  madd.s      $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4141e4) {
            ctx->pc = 0x414230u;
            goto label_414230;
        }
    }
    ctx->pc = 0x4141ECu;
label_4141ec:
    // 0x4141ec: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x4141ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_4141f0:
    // 0x4141f0: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x4141f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4141f4:
    // 0x4141f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_4141f8:
    if (ctx->pc == 0x4141F8u) {
        ctx->pc = 0x4141FCu;
        goto label_4141fc;
    }
    ctx->pc = 0x4141F4u;
    {
        const bool branch_taken_0x4141f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4141f4) {
            ctx->pc = 0x414218u;
            goto label_414218;
        }
    }
    ctx->pc = 0x4141FCu;
label_4141fc:
    // 0x4141fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4141fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_414200:
    // 0x414200: 0xaca300d4  sw          $v1, 0xD4($a1)
    ctx->pc = 0x414200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 3));
label_414204:
    // 0x414204: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x414204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_414208:
    // 0x414208: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x414208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_41420c:
    // 0x41420c: 0x10000008  b           . + 4 + (0x8 << 2)
label_414210:
    if (ctx->pc == 0x414210u) {
        ctx->pc = 0x414210u;
            // 0x414210: 0xe4a000d8  swc1        $f0, 0xD8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 216), bits); }
        ctx->pc = 0x414214u;
        goto label_414214;
    }
    ctx->pc = 0x41420Cu;
    {
        const bool branch_taken_0x41420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41420Cu;
            // 0x414210: 0xe4a000d8  swc1        $f0, 0xD8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41420c) {
            ctx->pc = 0x414230u;
            goto label_414230;
        }
    }
    ctx->pc = 0x414214u;
label_414214:
    // 0x414214: 0x0  nop
    ctx->pc = 0x414214u;
    // NOP
label_414218:
    // 0x414218: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x414218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41421c:
    // 0x41421c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_414220:
    if (ctx->pc == 0x414220u) {
        ctx->pc = 0x414224u;
        goto label_414224;
    }
    ctx->pc = 0x41421Cu;
    {
        const bool branch_taken_0x41421c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x41421c) {
            ctx->pc = 0x414230u;
            goto label_414230;
        }
    }
    ctx->pc = 0x414224u;
label_414224:
    // 0x414224: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x414224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_414228:
    // 0x414228: 0xaca300d8  sw          $v1, 0xD8($a1)
    ctx->pc = 0x414228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 216), GPR_U32(ctx, 3));
label_41422c:
    // 0x41422c: 0x0  nop
    ctx->pc = 0x41422cu;
    // NOP
label_414230:
    // 0x414230: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x414230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_414234:
    // 0x414234: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x414234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_414238:
    // 0x414238: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x414238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_41423c:
    // 0x41423c: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x41423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_414240:
    // 0x414240: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x414240u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_414244:
    // 0x414244: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x414244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
label_414248:
    // 0x414248: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x414248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_41424c:
    // 0x41424c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x41424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_414250:
    // 0x414250: 0x5460ffc4  bnel        $v1, $zero, . + 4 + (-0x3C << 2)
label_414254:
    if (ctx->pc == 0x414254u) {
        ctx->pc = 0x414254u;
            // 0x414254: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x414258u;
        goto label_414258;
    }
    ctx->pc = 0x414250u;
    {
        const bool branch_taken_0x414250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x414250) {
            ctx->pc = 0x414254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414250u;
            // 0x414254: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_414164;
        }
    }
    ctx->pc = 0x414258u;
label_414258:
    // 0x414258: 0x8e430e38  lw          $v1, 0xE38($s2)
    ctx->pc = 0x414258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_41425c:
    // 0x41425c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x41425cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_414260:
    // 0x414260: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_414264:
    if (ctx->pc == 0x414264u) {
        ctx->pc = 0x414264u;
            // 0x414264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414268u;
        goto label_414268;
    }
    ctx->pc = 0x414260u;
    {
        const bool branch_taken_0x414260 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x414264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414260u;
            // 0x414264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414260) {
            ctx->pc = 0x414278u;
            goto label_414278;
        }
    }
    ctx->pc = 0x414268u;
label_414268:
    // 0x414268: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x414268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_41426c:
    // 0x41426c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_414270:
    if (ctx->pc == 0x414270u) {
        ctx->pc = 0x414274u;
        goto label_414274;
    }
    ctx->pc = 0x41426Cu;
    {
        const bool branch_taken_0x41426c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41426c) {
            ctx->pc = 0x414278u;
            goto label_414278;
        }
    }
    ctx->pc = 0x414274u;
label_414274:
    // 0x414274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414278:
    // 0x414278: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_41427c:
    if (ctx->pc == 0x41427Cu) {
        ctx->pc = 0x414280u;
        goto label_414280;
    }
    ctx->pc = 0x414278u;
    {
        const bool branch_taken_0x414278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x414278) {
            ctx->pc = 0x414294u;
            goto label_414294;
        }
    }
    ctx->pc = 0x414280u;
label_414280:
    // 0x414280: 0xc075eb4  jal         func_1D7AD0
label_414284:
    if (ctx->pc == 0x414284u) {
        ctx->pc = 0x414284u;
            // 0x414284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x414288u;
        goto label_414288;
    }
    ctx->pc = 0x414280u;
    SET_GPR_U32(ctx, 31, 0x414288u);
    ctx->pc = 0x414284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414280u;
            // 0x414284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414288u; }
        if (ctx->pc != 0x414288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414288u; }
        if (ctx->pc != 0x414288u) { return; }
    }
    ctx->pc = 0x414288u;
label_414288:
    // 0x414288: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_41428c:
    if (ctx->pc == 0x41428Cu) {
        ctx->pc = 0x414290u;
        goto label_414290;
    }
    ctx->pc = 0x414288u;
    {
        const bool branch_taken_0x414288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414288) {
            ctx->pc = 0x414294u;
            goto label_414294;
        }
    }
    ctx->pc = 0x414290u;
label_414290:
    // 0x414290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x414290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414294:
    // 0x414294: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_414298:
    if (ctx->pc == 0x414298u) {
        ctx->pc = 0x41429Cu;
        goto label_41429c;
    }
    ctx->pc = 0x414294u;
    {
        const bool branch_taken_0x414294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x414294) {
            ctx->pc = 0x4142C0u;
            goto label_4142c0;
        }
    }
    ctx->pc = 0x41429Cu;
label_41429c:
    // 0x41429c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x41429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_4142a0:
    // 0x4142a0: 0x824511aa  lb          $a1, 0x11AA($s2)
    ctx->pc = 0x4142a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_4142a4:
    // 0x4142a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4142a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4142a8:
    // 0x4142a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4142a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4142ac:
    // 0x4142ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4142acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4142b0:
    // 0x4142b0: 0x8c440e50  lw          $a0, 0xE50($v0)
    ctx->pc = 0x4142b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3664)));
label_4142b4:
    // 0x4142b4: 0x3c025050  lui         $v0, 0x5050
    ctx->pc = 0x4142b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20560 << 16));
label_4142b8:
    // 0x4142b8: 0xc12a420  jal         func_4A9080
label_4142bc:
    if (ctx->pc == 0x4142BCu) {
        ctx->pc = 0x4142BCu;
            // 0x4142bc: 0x344750ff  ori         $a3, $v0, 0x50FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20735);
        ctx->pc = 0x4142C0u;
        goto label_4142c0;
    }
    ctx->pc = 0x4142B8u;
    SET_GPR_U32(ctx, 31, 0x4142C0u);
    ctx->pc = 0x4142BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4142B8u;
            // 0x4142bc: 0x344750ff  ori         $a3, $v0, 0x50FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20735);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9080u;
    if (runtime->hasFunction(0x4A9080u)) {
        auto targetFn = runtime->lookupFunction(0x4A9080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4142C0u; }
        if (ctx->pc != 0x4142C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9080_0x4a9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4142C0u; }
        if (ctx->pc != 0x4142C0u) { return; }
    }
    ctx->pc = 0x4142C0u;
label_4142c0:
    // 0x4142c0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x4142c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4142c4:
    // 0x4142c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4142c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4142c8:
    // 0x4142c8: 0x8e690014  lw          $t1, 0x14($s3)
    ctx->pc = 0x4142c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4142cc:
    // 0x4142cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4142ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4142d0:
    // 0x4142d0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4142d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4142d4:
    // 0x4142d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x4142d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_4142d8:
    // 0x4142d8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4142d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_4142dc:
    // 0x4142dc: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x4142dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
label_4142e0:
    // 0x4142e0: 0x824511aa  lb          $a1, 0x11AA($s2)
    ctx->pc = 0x4142e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_4142e4:
    // 0x4142e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4142e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4142e8:
    // 0x4142e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4142e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4142ec:
    // 0x4142ec: 0x24690004  addiu       $t1, $v1, 0x4
    ctx->pc = 0x4142ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4142f0:
    // 0x4142f0: 0xa83804  sllv        $a3, $t0, $a1
    ctx->pc = 0x4142f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
label_4142f4:
    // 0x4142f4: 0x8cc500e0  lw          $a1, 0xE0($a2)
    ctx->pc = 0x4142f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
label_4142f8:
    // 0x4142f8: 0x1241826  xor         $v1, $t1, $a0
    ctx->pc = 0x4142f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
label_4142fc:
    // 0x4142fc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4142fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_414300:
    // 0x414300: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x414300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_414304:
    // 0x414304: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x414304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_414308:
    // 0x414308: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_41430c:
    if (ctx->pc == 0x41430Cu) {
        ctx->pc = 0x41430Cu;
            // 0x41430c: 0xacc500e0  sw          $a1, 0xE0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 5));
        ctx->pc = 0x414310u;
        goto label_414310;
    }
    ctx->pc = 0x414308u;
    {
        const bool branch_taken_0x414308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414308u;
            // 0x41430c: 0xacc500e0  sw          $a1, 0xE0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414308) {
            ctx->pc = 0x4142DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4142dc;
        }
    }
    ctx->pc = 0x414310u;
label_414310:
    // 0x414310: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x414310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_414314:
    // 0x414314: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x414314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_414318:
    // 0x414318: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x414318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41431c:
    // 0x41431c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x41431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_414320:
    // 0x414320: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x414320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414324:
    // 0x414324: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x414324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414328:
    // 0x414328: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x414328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41432c:
    // 0x41432c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41432cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414330:
    // 0x414330: 0x3e00008  jr          $ra
label_414334:
    if (ctx->pc == 0x414334u) {
        ctx->pc = 0x414334u;
            // 0x414334: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x414338u;
        goto label_414338;
    }
    ctx->pc = 0x414330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414330u;
            // 0x414334: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414338u;
label_414338:
    // 0x414338: 0x0  nop
    ctx->pc = 0x414338u;
    // NOP
label_41433c:
    // 0x41433c: 0x0  nop
    ctx->pc = 0x41433cu;
    // NOP
}
