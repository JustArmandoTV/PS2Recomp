#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004195C0
// Address: 0x4195c0 - 0x419c90
void sub_004195C0_0x4195c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004195C0_0x4195c0");
#endif

    switch (ctx->pc) {
        case 0x4195c0u: goto label_4195c0;
        case 0x4195c4u: goto label_4195c4;
        case 0x4195c8u: goto label_4195c8;
        case 0x4195ccu: goto label_4195cc;
        case 0x4195d0u: goto label_4195d0;
        case 0x4195d4u: goto label_4195d4;
        case 0x4195d8u: goto label_4195d8;
        case 0x4195dcu: goto label_4195dc;
        case 0x4195e0u: goto label_4195e0;
        case 0x4195e4u: goto label_4195e4;
        case 0x4195e8u: goto label_4195e8;
        case 0x4195ecu: goto label_4195ec;
        case 0x4195f0u: goto label_4195f0;
        case 0x4195f4u: goto label_4195f4;
        case 0x4195f8u: goto label_4195f8;
        case 0x4195fcu: goto label_4195fc;
        case 0x419600u: goto label_419600;
        case 0x419604u: goto label_419604;
        case 0x419608u: goto label_419608;
        case 0x41960cu: goto label_41960c;
        case 0x419610u: goto label_419610;
        case 0x419614u: goto label_419614;
        case 0x419618u: goto label_419618;
        case 0x41961cu: goto label_41961c;
        case 0x419620u: goto label_419620;
        case 0x419624u: goto label_419624;
        case 0x419628u: goto label_419628;
        case 0x41962cu: goto label_41962c;
        case 0x419630u: goto label_419630;
        case 0x419634u: goto label_419634;
        case 0x419638u: goto label_419638;
        case 0x41963cu: goto label_41963c;
        case 0x419640u: goto label_419640;
        case 0x419644u: goto label_419644;
        case 0x419648u: goto label_419648;
        case 0x41964cu: goto label_41964c;
        case 0x419650u: goto label_419650;
        case 0x419654u: goto label_419654;
        case 0x419658u: goto label_419658;
        case 0x41965cu: goto label_41965c;
        case 0x419660u: goto label_419660;
        case 0x419664u: goto label_419664;
        case 0x419668u: goto label_419668;
        case 0x41966cu: goto label_41966c;
        case 0x419670u: goto label_419670;
        case 0x419674u: goto label_419674;
        case 0x419678u: goto label_419678;
        case 0x41967cu: goto label_41967c;
        case 0x419680u: goto label_419680;
        case 0x419684u: goto label_419684;
        case 0x419688u: goto label_419688;
        case 0x41968cu: goto label_41968c;
        case 0x419690u: goto label_419690;
        case 0x419694u: goto label_419694;
        case 0x419698u: goto label_419698;
        case 0x41969cu: goto label_41969c;
        case 0x4196a0u: goto label_4196a0;
        case 0x4196a4u: goto label_4196a4;
        case 0x4196a8u: goto label_4196a8;
        case 0x4196acu: goto label_4196ac;
        case 0x4196b0u: goto label_4196b0;
        case 0x4196b4u: goto label_4196b4;
        case 0x4196b8u: goto label_4196b8;
        case 0x4196bcu: goto label_4196bc;
        case 0x4196c0u: goto label_4196c0;
        case 0x4196c4u: goto label_4196c4;
        case 0x4196c8u: goto label_4196c8;
        case 0x4196ccu: goto label_4196cc;
        case 0x4196d0u: goto label_4196d0;
        case 0x4196d4u: goto label_4196d4;
        case 0x4196d8u: goto label_4196d8;
        case 0x4196dcu: goto label_4196dc;
        case 0x4196e0u: goto label_4196e0;
        case 0x4196e4u: goto label_4196e4;
        case 0x4196e8u: goto label_4196e8;
        case 0x4196ecu: goto label_4196ec;
        case 0x4196f0u: goto label_4196f0;
        case 0x4196f4u: goto label_4196f4;
        case 0x4196f8u: goto label_4196f8;
        case 0x4196fcu: goto label_4196fc;
        case 0x419700u: goto label_419700;
        case 0x419704u: goto label_419704;
        case 0x419708u: goto label_419708;
        case 0x41970cu: goto label_41970c;
        case 0x419710u: goto label_419710;
        case 0x419714u: goto label_419714;
        case 0x419718u: goto label_419718;
        case 0x41971cu: goto label_41971c;
        case 0x419720u: goto label_419720;
        case 0x419724u: goto label_419724;
        case 0x419728u: goto label_419728;
        case 0x41972cu: goto label_41972c;
        case 0x419730u: goto label_419730;
        case 0x419734u: goto label_419734;
        case 0x419738u: goto label_419738;
        case 0x41973cu: goto label_41973c;
        case 0x419740u: goto label_419740;
        case 0x419744u: goto label_419744;
        case 0x419748u: goto label_419748;
        case 0x41974cu: goto label_41974c;
        case 0x419750u: goto label_419750;
        case 0x419754u: goto label_419754;
        case 0x419758u: goto label_419758;
        case 0x41975cu: goto label_41975c;
        case 0x419760u: goto label_419760;
        case 0x419764u: goto label_419764;
        case 0x419768u: goto label_419768;
        case 0x41976cu: goto label_41976c;
        case 0x419770u: goto label_419770;
        case 0x419774u: goto label_419774;
        case 0x419778u: goto label_419778;
        case 0x41977cu: goto label_41977c;
        case 0x419780u: goto label_419780;
        case 0x419784u: goto label_419784;
        case 0x419788u: goto label_419788;
        case 0x41978cu: goto label_41978c;
        case 0x419790u: goto label_419790;
        case 0x419794u: goto label_419794;
        case 0x419798u: goto label_419798;
        case 0x41979cu: goto label_41979c;
        case 0x4197a0u: goto label_4197a0;
        case 0x4197a4u: goto label_4197a4;
        case 0x4197a8u: goto label_4197a8;
        case 0x4197acu: goto label_4197ac;
        case 0x4197b0u: goto label_4197b0;
        case 0x4197b4u: goto label_4197b4;
        case 0x4197b8u: goto label_4197b8;
        case 0x4197bcu: goto label_4197bc;
        case 0x4197c0u: goto label_4197c0;
        case 0x4197c4u: goto label_4197c4;
        case 0x4197c8u: goto label_4197c8;
        case 0x4197ccu: goto label_4197cc;
        case 0x4197d0u: goto label_4197d0;
        case 0x4197d4u: goto label_4197d4;
        case 0x4197d8u: goto label_4197d8;
        case 0x4197dcu: goto label_4197dc;
        case 0x4197e0u: goto label_4197e0;
        case 0x4197e4u: goto label_4197e4;
        case 0x4197e8u: goto label_4197e8;
        case 0x4197ecu: goto label_4197ec;
        case 0x4197f0u: goto label_4197f0;
        case 0x4197f4u: goto label_4197f4;
        case 0x4197f8u: goto label_4197f8;
        case 0x4197fcu: goto label_4197fc;
        case 0x419800u: goto label_419800;
        case 0x419804u: goto label_419804;
        case 0x419808u: goto label_419808;
        case 0x41980cu: goto label_41980c;
        case 0x419810u: goto label_419810;
        case 0x419814u: goto label_419814;
        case 0x419818u: goto label_419818;
        case 0x41981cu: goto label_41981c;
        case 0x419820u: goto label_419820;
        case 0x419824u: goto label_419824;
        case 0x419828u: goto label_419828;
        case 0x41982cu: goto label_41982c;
        case 0x419830u: goto label_419830;
        case 0x419834u: goto label_419834;
        case 0x419838u: goto label_419838;
        case 0x41983cu: goto label_41983c;
        case 0x419840u: goto label_419840;
        case 0x419844u: goto label_419844;
        case 0x419848u: goto label_419848;
        case 0x41984cu: goto label_41984c;
        case 0x419850u: goto label_419850;
        case 0x419854u: goto label_419854;
        case 0x419858u: goto label_419858;
        case 0x41985cu: goto label_41985c;
        case 0x419860u: goto label_419860;
        case 0x419864u: goto label_419864;
        case 0x419868u: goto label_419868;
        case 0x41986cu: goto label_41986c;
        case 0x419870u: goto label_419870;
        case 0x419874u: goto label_419874;
        case 0x419878u: goto label_419878;
        case 0x41987cu: goto label_41987c;
        case 0x419880u: goto label_419880;
        case 0x419884u: goto label_419884;
        case 0x419888u: goto label_419888;
        case 0x41988cu: goto label_41988c;
        case 0x419890u: goto label_419890;
        case 0x419894u: goto label_419894;
        case 0x419898u: goto label_419898;
        case 0x41989cu: goto label_41989c;
        case 0x4198a0u: goto label_4198a0;
        case 0x4198a4u: goto label_4198a4;
        case 0x4198a8u: goto label_4198a8;
        case 0x4198acu: goto label_4198ac;
        case 0x4198b0u: goto label_4198b0;
        case 0x4198b4u: goto label_4198b4;
        case 0x4198b8u: goto label_4198b8;
        case 0x4198bcu: goto label_4198bc;
        case 0x4198c0u: goto label_4198c0;
        case 0x4198c4u: goto label_4198c4;
        case 0x4198c8u: goto label_4198c8;
        case 0x4198ccu: goto label_4198cc;
        case 0x4198d0u: goto label_4198d0;
        case 0x4198d4u: goto label_4198d4;
        case 0x4198d8u: goto label_4198d8;
        case 0x4198dcu: goto label_4198dc;
        case 0x4198e0u: goto label_4198e0;
        case 0x4198e4u: goto label_4198e4;
        case 0x4198e8u: goto label_4198e8;
        case 0x4198ecu: goto label_4198ec;
        case 0x4198f0u: goto label_4198f0;
        case 0x4198f4u: goto label_4198f4;
        case 0x4198f8u: goto label_4198f8;
        case 0x4198fcu: goto label_4198fc;
        case 0x419900u: goto label_419900;
        case 0x419904u: goto label_419904;
        case 0x419908u: goto label_419908;
        case 0x41990cu: goto label_41990c;
        case 0x419910u: goto label_419910;
        case 0x419914u: goto label_419914;
        case 0x419918u: goto label_419918;
        case 0x41991cu: goto label_41991c;
        case 0x419920u: goto label_419920;
        case 0x419924u: goto label_419924;
        case 0x419928u: goto label_419928;
        case 0x41992cu: goto label_41992c;
        case 0x419930u: goto label_419930;
        case 0x419934u: goto label_419934;
        case 0x419938u: goto label_419938;
        case 0x41993cu: goto label_41993c;
        case 0x419940u: goto label_419940;
        case 0x419944u: goto label_419944;
        case 0x419948u: goto label_419948;
        case 0x41994cu: goto label_41994c;
        case 0x419950u: goto label_419950;
        case 0x419954u: goto label_419954;
        case 0x419958u: goto label_419958;
        case 0x41995cu: goto label_41995c;
        case 0x419960u: goto label_419960;
        case 0x419964u: goto label_419964;
        case 0x419968u: goto label_419968;
        case 0x41996cu: goto label_41996c;
        case 0x419970u: goto label_419970;
        case 0x419974u: goto label_419974;
        case 0x419978u: goto label_419978;
        case 0x41997cu: goto label_41997c;
        case 0x419980u: goto label_419980;
        case 0x419984u: goto label_419984;
        case 0x419988u: goto label_419988;
        case 0x41998cu: goto label_41998c;
        case 0x419990u: goto label_419990;
        case 0x419994u: goto label_419994;
        case 0x419998u: goto label_419998;
        case 0x41999cu: goto label_41999c;
        case 0x4199a0u: goto label_4199a0;
        case 0x4199a4u: goto label_4199a4;
        case 0x4199a8u: goto label_4199a8;
        case 0x4199acu: goto label_4199ac;
        case 0x4199b0u: goto label_4199b0;
        case 0x4199b4u: goto label_4199b4;
        case 0x4199b8u: goto label_4199b8;
        case 0x4199bcu: goto label_4199bc;
        case 0x4199c0u: goto label_4199c0;
        case 0x4199c4u: goto label_4199c4;
        case 0x4199c8u: goto label_4199c8;
        case 0x4199ccu: goto label_4199cc;
        case 0x4199d0u: goto label_4199d0;
        case 0x4199d4u: goto label_4199d4;
        case 0x4199d8u: goto label_4199d8;
        case 0x4199dcu: goto label_4199dc;
        case 0x4199e0u: goto label_4199e0;
        case 0x4199e4u: goto label_4199e4;
        case 0x4199e8u: goto label_4199e8;
        case 0x4199ecu: goto label_4199ec;
        case 0x4199f0u: goto label_4199f0;
        case 0x4199f4u: goto label_4199f4;
        case 0x4199f8u: goto label_4199f8;
        case 0x4199fcu: goto label_4199fc;
        case 0x419a00u: goto label_419a00;
        case 0x419a04u: goto label_419a04;
        case 0x419a08u: goto label_419a08;
        case 0x419a0cu: goto label_419a0c;
        case 0x419a10u: goto label_419a10;
        case 0x419a14u: goto label_419a14;
        case 0x419a18u: goto label_419a18;
        case 0x419a1cu: goto label_419a1c;
        case 0x419a20u: goto label_419a20;
        case 0x419a24u: goto label_419a24;
        case 0x419a28u: goto label_419a28;
        case 0x419a2cu: goto label_419a2c;
        case 0x419a30u: goto label_419a30;
        case 0x419a34u: goto label_419a34;
        case 0x419a38u: goto label_419a38;
        case 0x419a3cu: goto label_419a3c;
        case 0x419a40u: goto label_419a40;
        case 0x419a44u: goto label_419a44;
        case 0x419a48u: goto label_419a48;
        case 0x419a4cu: goto label_419a4c;
        case 0x419a50u: goto label_419a50;
        case 0x419a54u: goto label_419a54;
        case 0x419a58u: goto label_419a58;
        case 0x419a5cu: goto label_419a5c;
        case 0x419a60u: goto label_419a60;
        case 0x419a64u: goto label_419a64;
        case 0x419a68u: goto label_419a68;
        case 0x419a6cu: goto label_419a6c;
        case 0x419a70u: goto label_419a70;
        case 0x419a74u: goto label_419a74;
        case 0x419a78u: goto label_419a78;
        case 0x419a7cu: goto label_419a7c;
        case 0x419a80u: goto label_419a80;
        case 0x419a84u: goto label_419a84;
        case 0x419a88u: goto label_419a88;
        case 0x419a8cu: goto label_419a8c;
        case 0x419a90u: goto label_419a90;
        case 0x419a94u: goto label_419a94;
        case 0x419a98u: goto label_419a98;
        case 0x419a9cu: goto label_419a9c;
        case 0x419aa0u: goto label_419aa0;
        case 0x419aa4u: goto label_419aa4;
        case 0x419aa8u: goto label_419aa8;
        case 0x419aacu: goto label_419aac;
        case 0x419ab0u: goto label_419ab0;
        case 0x419ab4u: goto label_419ab4;
        case 0x419ab8u: goto label_419ab8;
        case 0x419abcu: goto label_419abc;
        case 0x419ac0u: goto label_419ac0;
        case 0x419ac4u: goto label_419ac4;
        case 0x419ac8u: goto label_419ac8;
        case 0x419accu: goto label_419acc;
        case 0x419ad0u: goto label_419ad0;
        case 0x419ad4u: goto label_419ad4;
        case 0x419ad8u: goto label_419ad8;
        case 0x419adcu: goto label_419adc;
        case 0x419ae0u: goto label_419ae0;
        case 0x419ae4u: goto label_419ae4;
        case 0x419ae8u: goto label_419ae8;
        case 0x419aecu: goto label_419aec;
        case 0x419af0u: goto label_419af0;
        case 0x419af4u: goto label_419af4;
        case 0x419af8u: goto label_419af8;
        case 0x419afcu: goto label_419afc;
        case 0x419b00u: goto label_419b00;
        case 0x419b04u: goto label_419b04;
        case 0x419b08u: goto label_419b08;
        case 0x419b0cu: goto label_419b0c;
        case 0x419b10u: goto label_419b10;
        case 0x419b14u: goto label_419b14;
        case 0x419b18u: goto label_419b18;
        case 0x419b1cu: goto label_419b1c;
        case 0x419b20u: goto label_419b20;
        case 0x419b24u: goto label_419b24;
        case 0x419b28u: goto label_419b28;
        case 0x419b2cu: goto label_419b2c;
        case 0x419b30u: goto label_419b30;
        case 0x419b34u: goto label_419b34;
        case 0x419b38u: goto label_419b38;
        case 0x419b3cu: goto label_419b3c;
        case 0x419b40u: goto label_419b40;
        case 0x419b44u: goto label_419b44;
        case 0x419b48u: goto label_419b48;
        case 0x419b4cu: goto label_419b4c;
        case 0x419b50u: goto label_419b50;
        case 0x419b54u: goto label_419b54;
        case 0x419b58u: goto label_419b58;
        case 0x419b5cu: goto label_419b5c;
        case 0x419b60u: goto label_419b60;
        case 0x419b64u: goto label_419b64;
        case 0x419b68u: goto label_419b68;
        case 0x419b6cu: goto label_419b6c;
        case 0x419b70u: goto label_419b70;
        case 0x419b74u: goto label_419b74;
        case 0x419b78u: goto label_419b78;
        case 0x419b7cu: goto label_419b7c;
        case 0x419b80u: goto label_419b80;
        case 0x419b84u: goto label_419b84;
        case 0x419b88u: goto label_419b88;
        case 0x419b8cu: goto label_419b8c;
        case 0x419b90u: goto label_419b90;
        case 0x419b94u: goto label_419b94;
        case 0x419b98u: goto label_419b98;
        case 0x419b9cu: goto label_419b9c;
        case 0x419ba0u: goto label_419ba0;
        case 0x419ba4u: goto label_419ba4;
        case 0x419ba8u: goto label_419ba8;
        case 0x419bacu: goto label_419bac;
        case 0x419bb0u: goto label_419bb0;
        case 0x419bb4u: goto label_419bb4;
        case 0x419bb8u: goto label_419bb8;
        case 0x419bbcu: goto label_419bbc;
        case 0x419bc0u: goto label_419bc0;
        case 0x419bc4u: goto label_419bc4;
        case 0x419bc8u: goto label_419bc8;
        case 0x419bccu: goto label_419bcc;
        case 0x419bd0u: goto label_419bd0;
        case 0x419bd4u: goto label_419bd4;
        case 0x419bd8u: goto label_419bd8;
        case 0x419bdcu: goto label_419bdc;
        case 0x419be0u: goto label_419be0;
        case 0x419be4u: goto label_419be4;
        case 0x419be8u: goto label_419be8;
        case 0x419becu: goto label_419bec;
        case 0x419bf0u: goto label_419bf0;
        case 0x419bf4u: goto label_419bf4;
        case 0x419bf8u: goto label_419bf8;
        case 0x419bfcu: goto label_419bfc;
        case 0x419c00u: goto label_419c00;
        case 0x419c04u: goto label_419c04;
        case 0x419c08u: goto label_419c08;
        case 0x419c0cu: goto label_419c0c;
        case 0x419c10u: goto label_419c10;
        case 0x419c14u: goto label_419c14;
        case 0x419c18u: goto label_419c18;
        case 0x419c1cu: goto label_419c1c;
        case 0x419c20u: goto label_419c20;
        case 0x419c24u: goto label_419c24;
        case 0x419c28u: goto label_419c28;
        case 0x419c2cu: goto label_419c2c;
        case 0x419c30u: goto label_419c30;
        case 0x419c34u: goto label_419c34;
        case 0x419c38u: goto label_419c38;
        case 0x419c3cu: goto label_419c3c;
        case 0x419c40u: goto label_419c40;
        case 0x419c44u: goto label_419c44;
        case 0x419c48u: goto label_419c48;
        case 0x419c4cu: goto label_419c4c;
        case 0x419c50u: goto label_419c50;
        case 0x419c54u: goto label_419c54;
        case 0x419c58u: goto label_419c58;
        case 0x419c5cu: goto label_419c5c;
        case 0x419c60u: goto label_419c60;
        case 0x419c64u: goto label_419c64;
        case 0x419c68u: goto label_419c68;
        case 0x419c6cu: goto label_419c6c;
        case 0x419c70u: goto label_419c70;
        case 0x419c74u: goto label_419c74;
        case 0x419c78u: goto label_419c78;
        case 0x419c7cu: goto label_419c7c;
        case 0x419c80u: goto label_419c80;
        case 0x419c84u: goto label_419c84;
        case 0x419c88u: goto label_419c88;
        case 0x419c8cu: goto label_419c8c;
        default: break;
    }

    ctx->pc = 0x4195c0u;

label_4195c0:
    // 0x4195c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4195c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4195c4:
    // 0x4195c4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4195c8:
    // 0x4195c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4195c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4195cc:
    // 0x4195cc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4195ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4195d0:
    // 0x4195d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4195d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4195d4:
    // 0x4195d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4195d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4195d8:
    // 0x4195d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4195d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4195dc:
    // 0x4195dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4195dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4195e0:
    // 0x4195e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4195e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4195e4:
    // 0x4195e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4195e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4195e8:
    // 0x4195e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4195e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4195ec:
    // 0x4195ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4195ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4195f0:
    // 0x4195f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4195f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4195f4:
    // 0x4195f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4195f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4195f8:
    // 0x4195f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4195f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4195fc:
    // 0x4195fc: 0x3445a5a2  ori         $a1, $v0, 0xA5A2
    ctx->pc = 0x4195fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42402);
label_419600:
    // 0x419600: 0xc10ca68  jal         func_4329A0
label_419604:
    if (ctx->pc == 0x419604u) {
        ctx->pc = 0x419604u;
            // 0x419604: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x419608u;
        goto label_419608;
    }
    ctx->pc = 0x419600u;
    SET_GPR_U32(ctx, 31, 0x419608u);
    ctx->pc = 0x419604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419600u;
            // 0x419604: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419608u; }
        if (ctx->pc != 0x419608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419608u; }
        if (ctx->pc != 0x419608u) { return; }
    }
    ctx->pc = 0x419608u;
label_419608:
    // 0x419608: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x419608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41960c:
    // 0x41960c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41960cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_419610:
    // 0x419610: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x419610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_419614:
    // 0x419614: 0x2463b5a0  addiu       $v1, $v1, -0x4A60
    ctx->pc = 0x419614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948256));
label_419618:
    // 0x419618: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x419618u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_41961c:
    // 0x41961c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x41961cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_419620:
    // 0x419620: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x419620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_419624:
    // 0x419624: 0xaeb10058  sw          $s1, 0x58($s5)
    ctx->pc = 0x419624u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 17));
label_419628:
    // 0x419628: 0xaeb0005c  sw          $s0, 0x5C($s5)
    ctx->pc = 0x419628u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 16));
label_41962c:
    // 0x41962c: 0xc04ab66  jal         func_12AD98
label_419630:
    if (ctx->pc == 0x419630u) {
        ctx->pc = 0x419630u;
            // 0x419630: 0xaea20068  sw          $v0, 0x68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x419634u;
        goto label_419634;
    }
    ctx->pc = 0x41962Cu;
    SET_GPR_U32(ctx, 31, 0x419634u);
    ctx->pc = 0x419630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41962Cu;
            // 0x419630: 0xaea20068  sw          $v0, 0x68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419634u; }
        if (ctx->pc != 0x419634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419634u; }
        if (ctx->pc != 0x419634u) { return; }
    }
    ctx->pc = 0x419634u;
label_419634:
    // 0x419634: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x419634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_419638:
    // 0x419638: 0xc04ab66  jal         func_12AD98
label_41963c:
    if (ctx->pc == 0x41963Cu) {
        ctx->pc = 0x41963Cu;
            // 0x41963c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x419640u;
        goto label_419640;
    }
    ctx->pc = 0x419638u;
    SET_GPR_U32(ctx, 31, 0x419640u);
    ctx->pc = 0x41963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419638u;
            // 0x41963c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419640u; }
        if (ctx->pc != 0x419640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419640u; }
        if (ctx->pc != 0x419640u) { return; }
    }
    ctx->pc = 0x419640u;
label_419640:
    // 0x419640: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x419640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_419644:
    // 0x419644: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x419644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_419648:
    // 0x419648: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x419648u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_41964c:
    // 0x41964c: 0x1010  mfhi        $v0
    ctx->pc = 0x41964cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_419650:
    // 0x419650: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x419650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_419654:
    // 0x419654: 0xc04ab66  jal         func_12AD98
label_419658:
    if (ctx->pc == 0x419658u) {
        ctx->pc = 0x419658u;
            // 0x419658: 0xa6a20060  sh          $v0, 0x60($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 96), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x41965Cu;
        goto label_41965c;
    }
    ctx->pc = 0x419654u;
    SET_GPR_U32(ctx, 31, 0x41965Cu);
    ctx->pc = 0x419658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419654u;
            // 0x419658: 0xa6a20060  sh          $v0, 0x60($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 96), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41965Cu; }
        if (ctx->pc != 0x41965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41965Cu; }
        if (ctx->pc != 0x41965Cu) { return; }
    }
    ctx->pc = 0x41965Cu;
label_41965c:
    // 0x41965c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x41965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_419660:
    // 0x419660: 0xc04ab66  jal         func_12AD98
label_419664:
    if (ctx->pc == 0x419664u) {
        ctx->pc = 0x419664u;
            // 0x419664: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x419668u;
        goto label_419668;
    }
    ctx->pc = 0x419660u;
    SET_GPR_U32(ctx, 31, 0x419668u);
    ctx->pc = 0x419664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419660u;
            // 0x419664: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419668u; }
        if (ctx->pc != 0x419668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419668u; }
        if (ctx->pc != 0x419668u) { return; }
    }
    ctx->pc = 0x419668u;
label_419668:
    // 0x419668: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x419668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_41966c:
    // 0x41966c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x41966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_419670:
    // 0x419670: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x419670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_419674:
    // 0x419674: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_419678:
    if (ctx->pc == 0x419678u) {
        ctx->pc = 0x419678u;
            // 0x419678: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x41967Cu;
        goto label_41967c;
    }
    ctx->pc = 0x419674u;
    {
        const bool branch_taken_0x419674 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x419674) {
            ctx->pc = 0x419678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419674u;
            // 0x419678: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419688u;
            goto label_419688;
        }
    }
    ctx->pc = 0x41967Cu;
label_41967c:
    // 0x41967c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41967cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419680:
    // 0x419680: 0x10000007  b           . + 4 + (0x7 << 2)
label_419684:
    if (ctx->pc == 0x419684u) {
        ctx->pc = 0x419684u;
            // 0x419684: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x419688u;
        goto label_419688;
    }
    ctx->pc = 0x419680u;
    {
        const bool branch_taken_0x419680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419680u;
            // 0x419684: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x419680) {
            ctx->pc = 0x4196A0u;
            goto label_4196a0;
        }
    }
    ctx->pc = 0x419688u;
label_419688:
    // 0x419688: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x419688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_41968c:
    // 0x41968c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x41968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_419690:
    // 0x419690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x419690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419694:
    // 0x419694: 0x0  nop
    ctx->pc = 0x419694u;
    // NOP
label_419698:
    // 0x419698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x419698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_41969c:
    // 0x41969c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x41969cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4196a0:
    // 0x4196a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4196a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4196a4:
    // 0x4196a4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x4196a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_4196a8:
    // 0x4196a8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4196a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4196ac:
    // 0x4196ac: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4196acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4196b0:
    // 0x4196b0: 0x346300d2  ori         $v1, $v1, 0xD2
    ctx->pc = 0x4196b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)210);
label_4196b4:
    // 0x4196b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4196b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4196b8:
    // 0x4196b8: 0x0  nop
    ctx->pc = 0x4196b8u;
    // NOP
label_4196bc:
    // 0x4196bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4196bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4196c0:
    // 0x4196c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4196c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4196c4:
    // 0x4196c4: 0x0  nop
    ctx->pc = 0x4196c4u;
    // NOP
label_4196c8:
    // 0x4196c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4196c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4196cc:
    // 0x4196cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4196ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4196d0:
    // 0x4196d0: 0x0  nop
    ctx->pc = 0x4196d0u;
    // NOP
label_4196d4:
    // 0x4196d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4196d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4196d8:
    // 0x4196d8: 0xc04ab66  jal         func_12AD98
label_4196dc:
    if (ctx->pc == 0x4196DCu) {
        ctx->pc = 0x4196DCu;
            // 0x4196dc: 0xe6a00064  swc1        $f0, 0x64($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
        ctx->pc = 0x4196E0u;
        goto label_4196e0;
    }
    ctx->pc = 0x4196D8u;
    SET_GPR_U32(ctx, 31, 0x4196E0u);
    ctx->pc = 0x4196DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4196D8u;
            // 0x4196dc: 0xe6a00064  swc1        $f0, 0x64($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4196E0u; }
        if (ctx->pc != 0x4196E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4196E0u; }
        if (ctx->pc != 0x4196E0u) { return; }
    }
    ctx->pc = 0x4196E0u;
label_4196e0:
    // 0x4196e0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4196e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4196e4:
    // 0x4196e4: 0xc04ab66  jal         func_12AD98
label_4196e8:
    if (ctx->pc == 0x4196E8u) {
        ctx->pc = 0x4196E8u;
            // 0x4196e8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x4196ECu;
        goto label_4196ec;
    }
    ctx->pc = 0x4196E4u;
    SET_GPR_U32(ctx, 31, 0x4196ECu);
    ctx->pc = 0x4196E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4196E4u;
            // 0x4196e8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4196ECu; }
        if (ctx->pc != 0x4196ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4196ECu; }
        if (ctx->pc != 0x4196ECu) { return; }
    }
    ctx->pc = 0x4196ECu;
label_4196ec:
    // 0x4196ec: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x4196ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4196f0:
    // 0x4196f0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x4196f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4196f4:
    // 0x4196f4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x4196f4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4196f8:
    // 0x4196f8: 0x1010  mfhi        $v0
    ctx->pc = 0x4196f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4196fc:
    // 0x4196fc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_419700:
    if (ctx->pc == 0x419700u) {
        ctx->pc = 0x419700u;
            // 0x419700: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x419704u;
        goto label_419704;
    }
    ctx->pc = 0x4196FCu;
    {
        const bool branch_taken_0x4196fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4196fc) {
            ctx->pc = 0x419700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4196FCu;
            // 0x419700: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419710u;
            goto label_419710;
        }
    }
    ctx->pc = 0x419704u;
label_419704:
    // 0x419704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x419704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419708:
    // 0x419708: 0x10000007  b           . + 4 + (0x7 << 2)
label_41970c:
    if (ctx->pc == 0x41970Cu) {
        ctx->pc = 0x41970Cu;
            // 0x41970c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x419710u;
        goto label_419710;
    }
    ctx->pc = 0x419708u;
    {
        const bool branch_taken_0x419708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419708u;
            // 0x41970c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x419708) {
            ctx->pc = 0x419728u;
            goto label_419728;
        }
    }
    ctx->pc = 0x419710u;
label_419710:
    // 0x419710: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x419710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_419714:
    // 0x419714: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x419714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_419718:
    // 0x419718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x419718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41971c:
    // 0x41971c: 0x0  nop
    ctx->pc = 0x41971cu;
    // NOP
label_419720:
    // 0x419720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x419720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_419724:
    // 0x419724: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x419724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_419728:
    // 0x419728: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x419728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_41972c:
    // 0x41972c: 0x86a30060  lh          $v1, 0x60($s5)
    ctx->pc = 0x41972cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_419730:
    // 0x419730: 0x34440b60  ori         $a0, $v0, 0xB60
    ctx->pc = 0x419730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_419734:
    // 0x419734: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x419734u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419738:
    // 0x419738: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x419738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_41973c:
    // 0x41973c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41973cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419740:
    // 0x419740: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x419740u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_419744:
    // 0x419744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x419744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419748:
    // 0x419748: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x419748u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41974c:
    // 0x41974c: 0x0  nop
    ctx->pc = 0x41974cu;
    // NOP
label_419750:
    // 0x419750: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x419750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_419754:
    // 0x419754: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x419754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_419758:
    // 0x419758: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x419758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_41975c:
    // 0x41975c: 0x1012  mflo        $v0
    ctx->pc = 0x41975cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_419760:
    // 0x419760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x419760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419764:
    // 0x419764: 0x0  nop
    ctx->pc = 0x419764u;
    // NOP
label_419768:
    // 0x419768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x419768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_41976c:
    // 0x41976c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x41976cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_419770:
    // 0x419770: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x419770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_419774:
    // 0x419774: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x419774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_419778:
    // 0x419778: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x419778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41977c:
    // 0x41977c: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x41977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_419780:
    // 0x419780: 0x2450006c  addiu       $s0, $v0, 0x6C
    ctx->pc = 0x419780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_419784:
    // 0x419784: 0xc04ab66  jal         func_12AD98
label_419788:
    if (ctx->pc == 0x419788u) {
        ctx->pc = 0x419788u;
            // 0x419788: 0xe440006c  swc1        $f0, 0x6C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
        ctx->pc = 0x41978Cu;
        goto label_41978c;
    }
    ctx->pc = 0x419784u;
    SET_GPR_U32(ctx, 31, 0x41978Cu);
    ctx->pc = 0x419788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419784u;
            // 0x419788: 0xe440006c  swc1        $f0, 0x6C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41978Cu; }
        if (ctx->pc != 0x41978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41978Cu; }
        if (ctx->pc != 0x41978Cu) { return; }
    }
    ctx->pc = 0x41978Cu;
label_41978c:
    // 0x41978c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x41978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_419790:
    // 0x419790: 0xc04ab66  jal         func_12AD98
label_419794:
    if (ctx->pc == 0x419794u) {
        ctx->pc = 0x419794u;
            // 0x419794: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x419798u;
        goto label_419798;
    }
    ctx->pc = 0x419790u;
    SET_GPR_U32(ctx, 31, 0x419798u);
    ctx->pc = 0x419794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419790u;
            // 0x419794: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419798u; }
        if (ctx->pc != 0x419798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419798u; }
        if (ctx->pc != 0x419798u) { return; }
    }
    ctx->pc = 0x419798u;
label_419798:
    // 0x419798: 0x562025  or          $a0, $v0, $s6
    ctx->pc = 0x419798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_41979c:
    // 0x41979c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x41979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_4197a0:
    // 0x4197a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4197a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4197a4:
    // 0x4197a4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4197a8:
    if (ctx->pc == 0x4197A8u) {
        ctx->pc = 0x4197A8u;
            // 0x4197a8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4197ACu;
        goto label_4197ac;
    }
    ctx->pc = 0x4197A4u;
    {
        const bool branch_taken_0x4197a4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4197a4) {
            ctx->pc = 0x4197A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4197A4u;
            // 0x4197a8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4197B8u;
            goto label_4197b8;
        }
    }
    ctx->pc = 0x4197ACu;
label_4197ac:
    // 0x4197ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4197acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4197b0:
    // 0x4197b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4197b4:
    if (ctx->pc == 0x4197B4u) {
        ctx->pc = 0x4197B4u;
            // 0x4197b4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4197B8u;
        goto label_4197b8;
    }
    ctx->pc = 0x4197B0u;
    {
        const bool branch_taken_0x4197b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4197B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4197B0u;
            // 0x4197b4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4197b0) {
            ctx->pc = 0x4197D0u;
            goto label_4197d0;
        }
    }
    ctx->pc = 0x4197B8u;
label_4197b8:
    // 0x4197b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4197b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4197bc:
    // 0x4197bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4197bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4197c0:
    // 0x4197c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4197c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4197c4:
    // 0x4197c4: 0x0  nop
    ctx->pc = 0x4197c4u;
    // NOP
label_4197c8:
    // 0x4197c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4197c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4197cc:
    // 0x4197cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4197ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4197d0:
    // 0x4197d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4197d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4197d4:
    // 0x4197d4: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x4197d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
label_4197d8:
    // 0x4197d8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x4197d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_4197dc:
    // 0x4197dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4197dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4197e0:
    // 0x4197e0: 0x346301a3  ori         $v1, $v1, 0x1A3
    ctx->pc = 0x4197e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)419);
label_4197e4:
    // 0x4197e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4197e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4197e8:
    // 0x4197e8: 0x0  nop
    ctx->pc = 0x4197e8u;
    // NOP
label_4197ec:
    // 0x4197ec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4197ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4197f0:
    // 0x4197f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4197f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4197f4:
    // 0x4197f4: 0x0  nop
    ctx->pc = 0x4197f4u;
    // NOP
label_4197f8:
    // 0x4197f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4197f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4197fc:
    // 0x4197fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4197fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419800:
    // 0x419800: 0x0  nop
    ctx->pc = 0x419800u;
    // NOP
label_419804:
    // 0x419804: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x419804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_419808:
    // 0x419808: 0xc04ab66  jal         func_12AD98
label_41980c:
    if (ctx->pc == 0x41980Cu) {
        ctx->pc = 0x41980Cu;
            // 0x41980c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->pc = 0x419810u;
        goto label_419810;
    }
    ctx->pc = 0x419808u;
    SET_GPR_U32(ctx, 31, 0x419810u);
    ctx->pc = 0x41980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419808u;
            // 0x41980c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419810u; }
        if (ctx->pc != 0x419810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419810u; }
        if (ctx->pc != 0x419810u) { return; }
    }
    ctx->pc = 0x419810u;
label_419810:
    // 0x419810: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x419810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_419814:
    // 0x419814: 0xc04ab66  jal         func_12AD98
label_419818:
    if (ctx->pc == 0x419818u) {
        ctx->pc = 0x419818u;
            // 0x419818: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x41981Cu;
        goto label_41981c;
    }
    ctx->pc = 0x419814u;
    SET_GPR_U32(ctx, 31, 0x41981Cu);
    ctx->pc = 0x419818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419814u;
            // 0x419818: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41981Cu; }
        if (ctx->pc != 0x41981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41981Cu; }
        if (ctx->pc != 0x41981Cu) { return; }
    }
    ctx->pc = 0x41981Cu;
label_41981c:
    // 0x41981c: 0x562025  or          $a0, $v0, $s6
    ctx->pc = 0x41981cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_419820:
    // 0x419820: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x419820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_419824:
    // 0x419824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x419824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_419828:
    // 0x419828: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_41982c:
    if (ctx->pc == 0x41982Cu) {
        ctx->pc = 0x41982Cu;
            // 0x41982c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x419830u;
        goto label_419830;
    }
    ctx->pc = 0x419828u;
    {
        const bool branch_taken_0x419828 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x419828) {
            ctx->pc = 0x41982Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419828u;
            // 0x41982c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41983Cu;
            goto label_41983c;
        }
    }
    ctx->pc = 0x419830u;
label_419830:
    // 0x419830: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x419830u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419834:
    // 0x419834: 0x10000007  b           . + 4 + (0x7 << 2)
label_419838:
    if (ctx->pc == 0x419838u) {
        ctx->pc = 0x419838u;
            // 0x419838: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41983Cu;
        goto label_41983c;
    }
    ctx->pc = 0x419834u;
    {
        const bool branch_taken_0x419834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419834u;
            // 0x419838: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x419834) {
            ctx->pc = 0x419854u;
            goto label_419854;
        }
    }
    ctx->pc = 0x41983Cu;
label_41983c:
    // 0x41983c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x41983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_419840:
    // 0x419840: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x419840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_419844:
    // 0x419844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x419844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419848:
    // 0x419848: 0x0  nop
    ctx->pc = 0x419848u;
    // NOP
label_41984c:
    // 0x41984c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41984cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_419850:
    // 0x419850: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x419850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_419854:
    // 0x419854: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x419854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_419858:
    // 0x419858: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x419858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_41985c:
    // 0x41985c: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x41985cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_419860:
    // 0x419860: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x419860u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_419864:
    // 0x419864: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x419864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_419868:
    // 0x419868: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x419868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_41986c:
    // 0x41986c: 0x3443d35b  ori         $v1, $v0, 0xD35B
    ctx->pc = 0x41986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54107);
label_419870:
    // 0x419870: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x419870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_419874:
    // 0x419874: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x419874u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419878:
    // 0x419878: 0x0  nop
    ctx->pc = 0x419878u;
    // NOP
label_41987c:
    // 0x41987c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x41987cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_419880:
    // 0x419880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x419880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419884:
    // 0x419884: 0x0  nop
    ctx->pc = 0x419884u;
    // NOP
label_419888:
    // 0x419888: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x419888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_41988c:
    // 0x41988c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x41988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_419890:
    // 0x419890: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x419890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_419894:
    // 0x419894: 0x86a20060  lh          $v0, 0x60($s5)
    ctx->pc = 0x419894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_419898:
    // 0x419898: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x419898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41989c:
    // 0x41989c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_4198a0:
    if (ctx->pc == 0x4198A0u) {
        ctx->pc = 0x4198A0u;
            // 0x4198a0: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->pc = 0x4198A4u;
        goto label_4198a4;
    }
    ctx->pc = 0x41989Cu;
    {
        const bool branch_taken_0x41989c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4198A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41989Cu;
            // 0x4198a0: 0x2579021  addu        $s2, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41989c) {
            ctx->pc = 0x419778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_419778;
        }
    }
    ctx->pc = 0x4198A4u;
label_4198a4:
    // 0x4198a4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4198a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4198a8:
    // 0x4198a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4198a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4198ac:
    // 0x4198ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4198acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4198b0:
    // 0x4198b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4198b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4198b4:
    // 0x4198b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4198b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4198b8:
    // 0x4198b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4198b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4198bc:
    // 0x4198bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4198bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4198c0:
    // 0x4198c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4198c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4198c4:
    // 0x4198c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4198c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4198c8:
    // 0x4198c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4198c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4198cc:
    // 0x4198cc: 0x3e00008  jr          $ra
label_4198d0:
    if (ctx->pc == 0x4198D0u) {
        ctx->pc = 0x4198D0u;
            // 0x4198d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4198D4u;
        goto label_4198d4;
    }
    ctx->pc = 0x4198CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4198D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4198CCu;
            // 0x4198d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4198D4u;
label_4198d4:
    // 0x4198d4: 0x0  nop
    ctx->pc = 0x4198d4u;
    // NOP
label_4198d8:
    // 0x4198d8: 0x0  nop
    ctx->pc = 0x4198d8u;
    // NOP
label_4198dc:
    // 0x4198dc: 0x0  nop
    ctx->pc = 0x4198dcu;
    // NOP
label_4198e0:
    // 0x4198e0: 0x3e00008  jr          $ra
label_4198e4:
    if (ctx->pc == 0x4198E4u) {
        ctx->pc = 0x4198E4u;
            // 0x4198e4: 0x24023ac0  addiu       $v0, $zero, 0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15040));
        ctx->pc = 0x4198E8u;
        goto label_4198e8;
    }
    ctx->pc = 0x4198E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4198E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4198E0u;
            // 0x4198e4: 0x24023ac0  addiu       $v0, $zero, 0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4198E8u;
label_4198e8:
    // 0x4198e8: 0x0  nop
    ctx->pc = 0x4198e8u;
    // NOP
label_4198ec:
    // 0x4198ec: 0x0  nop
    ctx->pc = 0x4198ecu;
    // NOP
label_4198f0:
    // 0x4198f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4198f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4198f4:
    // 0x4198f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4198f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4198f8:
    // 0x4198f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4198f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4198fc:
    // 0x4198fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4198fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_419900:
    // 0x419900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_419904:
    // 0x419904: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_419908:
    if (ctx->pc == 0x419908u) {
        ctx->pc = 0x419908u;
            // 0x419908: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41990Cu;
        goto label_41990c;
    }
    ctx->pc = 0x419904u;
    {
        const bool branch_taken_0x419904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419904u;
            // 0x419908: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419904) {
            ctx->pc = 0x4199CCu;
            goto label_4199cc;
        }
    }
    ctx->pc = 0x41990Cu;
label_41990c:
    // 0x41990c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_419910:
    // 0x419910: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x419910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_419914:
    // 0x419914: 0x2463b5d0  addiu       $v1, $v1, -0x4A30
    ctx->pc = 0x419914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948304));
label_419918:
    // 0x419918: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x419918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_41991c:
    // 0x41991c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41991cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_419920:
    // 0x419920: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x419920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_419924:
    // 0x419924: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x419924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_419928:
    // 0x419928: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x419928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_41992c:
    // 0x41992c: 0x320f809  jalr        $t9
label_419930:
    if (ctx->pc == 0x419930u) {
        ctx->pc = 0x419934u;
        goto label_419934;
    }
    ctx->pc = 0x41992Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419934u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x419934u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419934u; }
            if (ctx->pc != 0x419934u) { return; }
        }
        }
    }
    ctx->pc = 0x419934u;
label_419934:
    // 0x419934: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_419938:
    if (ctx->pc == 0x419938u) {
        ctx->pc = 0x419938u;
            // 0x419938: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x41993Cu;
        goto label_41993c;
    }
    ctx->pc = 0x419934u;
    {
        const bool branch_taken_0x419934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x419934) {
            ctx->pc = 0x419938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419934u;
            // 0x419938: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4199B8u;
            goto label_4199b8;
        }
    }
    ctx->pc = 0x41993Cu;
label_41993c:
    // 0x41993c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41993cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_419940:
    // 0x419940: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x419940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_419944:
    // 0x419944: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x419944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_419948:
    // 0x419948: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x419948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_41994c:
    // 0x41994c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_419950:
    // 0x419950: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x419950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_419954:
    // 0x419954: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x419954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_419958:
    // 0x419958: 0xc0aecc4  jal         func_2BB310
label_41995c:
    if (ctx->pc == 0x41995Cu) {
        ctx->pc = 0x41995Cu;
            // 0x41995c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x419960u;
        goto label_419960;
    }
    ctx->pc = 0x419958u;
    SET_GPR_U32(ctx, 31, 0x419960u);
    ctx->pc = 0x41995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419958u;
            // 0x41995c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419960u; }
        if (ctx->pc != 0x419960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419960u; }
        if (ctx->pc != 0x419960u) { return; }
    }
    ctx->pc = 0x419960u;
label_419960:
    // 0x419960: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x419960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_419964:
    // 0x419964: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x419964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_419968:
    // 0x419968: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41996c:
    if (ctx->pc == 0x41996Cu) {
        ctx->pc = 0x41996Cu;
            // 0x41996c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x419970u;
        goto label_419970;
    }
    ctx->pc = 0x419968u;
    {
        const bool branch_taken_0x419968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x419968) {
            ctx->pc = 0x41996Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419968u;
            // 0x41996c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419984u;
            goto label_419984;
        }
    }
    ctx->pc = 0x419970u;
label_419970:
    // 0x419970: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x419970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_419974:
    // 0x419974: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x419974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_419978:
    // 0x419978: 0x320f809  jalr        $t9
label_41997c:
    if (ctx->pc == 0x41997Cu) {
        ctx->pc = 0x41997Cu;
            // 0x41997c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x419980u;
        goto label_419980;
    }
    ctx->pc = 0x419978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419980u);
        ctx->pc = 0x41997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419978u;
            // 0x41997c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x419980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419980u; }
            if (ctx->pc != 0x419980u) { return; }
        }
        }
    }
    ctx->pc = 0x419980u;
label_419980:
    // 0x419980: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x419980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_419984:
    // 0x419984: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x419984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_419988:
    // 0x419988: 0xc0aec9c  jal         func_2BB270
label_41998c:
    if (ctx->pc == 0x41998Cu) {
        ctx->pc = 0x41998Cu;
            // 0x41998c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x419990u;
        goto label_419990;
    }
    ctx->pc = 0x419988u;
    SET_GPR_U32(ctx, 31, 0x419990u);
    ctx->pc = 0x41998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419988u;
            // 0x41998c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419990u; }
        if (ctx->pc != 0x419990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419990u; }
        if (ctx->pc != 0x419990u) { return; }
    }
    ctx->pc = 0x419990u;
label_419990:
    // 0x419990: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x419990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_419994:
    // 0x419994: 0xc0aec88  jal         func_2BB220
label_419998:
    if (ctx->pc == 0x419998u) {
        ctx->pc = 0x419998u;
            // 0x419998: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41999Cu;
        goto label_41999c;
    }
    ctx->pc = 0x419994u;
    SET_GPR_U32(ctx, 31, 0x41999Cu);
    ctx->pc = 0x419998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419994u;
            // 0x419998: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41999Cu; }
        if (ctx->pc != 0x41999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41999Cu; }
        if (ctx->pc != 0x41999Cu) { return; }
    }
    ctx->pc = 0x41999Cu;
label_41999c:
    // 0x41999c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x41999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4199a0:
    // 0x4199a0: 0xc0aec0c  jal         func_2BB030
label_4199a4:
    if (ctx->pc == 0x4199A4u) {
        ctx->pc = 0x4199A4u;
            // 0x4199a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4199A8u;
        goto label_4199a8;
    }
    ctx->pc = 0x4199A0u;
    SET_GPR_U32(ctx, 31, 0x4199A8u);
    ctx->pc = 0x4199A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4199A0u;
            // 0x4199a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4199A8u; }
        if (ctx->pc != 0x4199A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4199A8u; }
        if (ctx->pc != 0x4199A8u) { return; }
    }
    ctx->pc = 0x4199A8u;
label_4199a8:
    // 0x4199a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4199a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4199ac:
    // 0x4199ac: 0xc0aeaa8  jal         func_2BAAA0
label_4199b0:
    if (ctx->pc == 0x4199B0u) {
        ctx->pc = 0x4199B0u;
            // 0x4199b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4199B4u;
        goto label_4199b4;
    }
    ctx->pc = 0x4199ACu;
    SET_GPR_U32(ctx, 31, 0x4199B4u);
    ctx->pc = 0x4199B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4199ACu;
            // 0x4199b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4199B4u; }
        if (ctx->pc != 0x4199B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4199B4u; }
        if (ctx->pc != 0x4199B4u) { return; }
    }
    ctx->pc = 0x4199B4u;
label_4199b4:
    // 0x4199b4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4199b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4199b8:
    // 0x4199b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4199b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4199bc:
    // 0x4199bc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4199c0:
    if (ctx->pc == 0x4199C0u) {
        ctx->pc = 0x4199C0u;
            // 0x4199c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4199C4u;
        goto label_4199c4;
    }
    ctx->pc = 0x4199BCu;
    {
        const bool branch_taken_0x4199bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4199bc) {
            ctx->pc = 0x4199C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4199BCu;
            // 0x4199c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4199D0u;
            goto label_4199d0;
        }
    }
    ctx->pc = 0x4199C4u;
label_4199c4:
    // 0x4199c4: 0xc0400a8  jal         func_1002A0
label_4199c8:
    if (ctx->pc == 0x4199C8u) {
        ctx->pc = 0x4199C8u;
            // 0x4199c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4199CCu;
        goto label_4199cc;
    }
    ctx->pc = 0x4199C4u;
    SET_GPR_U32(ctx, 31, 0x4199CCu);
    ctx->pc = 0x4199C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4199C4u;
            // 0x4199c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4199CCu; }
        if (ctx->pc != 0x4199CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4199CCu; }
        if (ctx->pc != 0x4199CCu) { return; }
    }
    ctx->pc = 0x4199CCu;
label_4199cc:
    // 0x4199cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4199ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4199d0:
    // 0x4199d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4199d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4199d4:
    // 0x4199d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4199d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4199d8:
    // 0x4199d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4199d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4199dc:
    // 0x4199dc: 0x3e00008  jr          $ra
label_4199e0:
    if (ctx->pc == 0x4199E0u) {
        ctx->pc = 0x4199E0u;
            // 0x4199e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4199E4u;
        goto label_4199e4;
    }
    ctx->pc = 0x4199DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4199E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4199DCu;
            // 0x4199e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4199E4u;
label_4199e4:
    // 0x4199e4: 0x0  nop
    ctx->pc = 0x4199e4u;
    // NOP
label_4199e8:
    // 0x4199e8: 0x0  nop
    ctx->pc = 0x4199e8u;
    // NOP
label_4199ec:
    // 0x4199ec: 0x0  nop
    ctx->pc = 0x4199ecu;
    // NOP
label_4199f0:
    // 0x4199f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4199f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_4199f4:
    // 0x4199f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4199f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4199f8:
    // 0x4199f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4199f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4199fc:
    // 0x4199fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4199fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_419a00:
    // 0x419a00: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x419a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_419a04:
    // 0x419a04: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x419a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_419a08:
    // 0x419a08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x419a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_419a0c:
    // 0x419a0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x419a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_419a10:
    // 0x419a10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x419a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_419a14:
    // 0x419a14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x419a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_419a18:
    // 0x419a18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x419a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_419a1c:
    // 0x419a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_419a20:
    // 0x419a20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x419a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_419a24:
    // 0x419a24: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x419a24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_419a28:
    // 0x419a28: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_419a2c:
    if (ctx->pc == 0x419A2Cu) {
        ctx->pc = 0x419A2Cu;
            // 0x419a2c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419A30u;
        goto label_419a30;
    }
    ctx->pc = 0x419A28u;
    {
        const bool branch_taken_0x419a28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x419A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419A28u;
            // 0x419a2c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a28) {
            ctx->pc = 0x419A78u;
            goto label_419a78;
        }
    }
    ctx->pc = 0x419A30u;
label_419a30:
    // 0x419a30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x419a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_419a34:
    // 0x419a34: 0x50a30089  beql        $a1, $v1, . + 4 + (0x89 << 2)
label_419a38:
    if (ctx->pc == 0x419A38u) {
        ctx->pc = 0x419A38u;
            // 0x419a38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x419A3Cu;
        goto label_419a3c;
    }
    ctx->pc = 0x419A34u;
    {
        const bool branch_taken_0x419a34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x419a34) {
            ctx->pc = 0x419A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419A34u;
            // 0x419a38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419C5Cu;
            goto label_419c5c;
        }
    }
    ctx->pc = 0x419A3Cu;
label_419a3c:
    // 0x419a3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x419a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_419a40:
    // 0x419a40: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_419a44:
    if (ctx->pc == 0x419A44u) {
        ctx->pc = 0x419A48u;
        goto label_419a48;
    }
    ctx->pc = 0x419A40u;
    {
        const bool branch_taken_0x419a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x419a40) {
            ctx->pc = 0x419A50u;
            goto label_419a50;
        }
    }
    ctx->pc = 0x419A48u;
label_419a48:
    // 0x419a48: 0x10000083  b           . + 4 + (0x83 << 2)
label_419a4c:
    if (ctx->pc == 0x419A4Cu) {
        ctx->pc = 0x419A50u;
        goto label_419a50;
    }
    ctx->pc = 0x419A48u;
    {
        const bool branch_taken_0x419a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419a48) {
            ctx->pc = 0x419C58u;
            goto label_419c58;
        }
    }
    ctx->pc = 0x419A50u;
label_419a50:
    // 0x419a50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x419a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_419a54:
    // 0x419a54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x419a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_419a58:
    // 0x419a58: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x419a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_419a5c:
    // 0x419a5c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x419a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_419a60:
    // 0x419a60: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x419a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_419a64:
    // 0x419a64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x419a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_419a68:
    // 0x419a68: 0x320f809  jalr        $t9
label_419a6c:
    if (ctx->pc == 0x419A6Cu) {
        ctx->pc = 0x419A6Cu;
            // 0x419a6c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x419A70u;
        goto label_419a70;
    }
    ctx->pc = 0x419A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419A70u);
        ctx->pc = 0x419A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419A68u;
            // 0x419a6c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x419A70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419A70u; }
            if (ctx->pc != 0x419A70u) { return; }
        }
        }
    }
    ctx->pc = 0x419A70u;
label_419a70:
    // 0x419a70: 0x10000079  b           . + 4 + (0x79 << 2)
label_419a74:
    if (ctx->pc == 0x419A74u) {
        ctx->pc = 0x419A78u;
        goto label_419a78;
    }
    ctx->pc = 0x419A70u;
    {
        const bool branch_taken_0x419a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419a70) {
            ctx->pc = 0x419C58u;
            goto label_419c58;
        }
    }
    ctx->pc = 0x419A78u;
label_419a78:
    // 0x419a78: 0x8ede0070  lw          $fp, 0x70($s6)
    ctx->pc = 0x419a78u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_419a7c:
    // 0x419a7c: 0x13c00076  beqz        $fp, . + 4 + (0x76 << 2)
label_419a80:
    if (ctx->pc == 0x419A80u) {
        ctx->pc = 0x419A84u;
        goto label_419a84;
    }
    ctx->pc = 0x419A7Cu;
    {
        const bool branch_taken_0x419a7c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x419a7c) {
            ctx->pc = 0x419C58u;
            goto label_419c58;
        }
    }
    ctx->pc = 0x419A84u;
label_419a84:
    // 0x419a84: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x419a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_419a88:
    // 0x419a88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x419a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_419a8c:
    // 0x419a8c: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x419a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_419a90:
    // 0x419a90: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x419a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_419a94:
    // 0x419a94: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x419a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_419a98:
    // 0x419a98: 0x26d50084  addiu       $s5, $s6, 0x84
    ctx->pc = 0x419a98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_419a9c:
    // 0x419a9c: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x419a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_419aa0:
    // 0x419aa0: 0x8cb70130  lw          $s7, 0x130($a1)
    ctx->pc = 0x419aa0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_419aa4:
    // 0x419aa4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x419aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_419aa8:
    // 0x419aa8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x419aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_419aac:
    // 0x419aac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x419aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_419ab0:
    // 0x419ab0: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x419ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_419ab4:
    // 0x419ab4: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x419ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_419ab8:
    // 0x419ab8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419abc:
    // 0x419abc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x419abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_419ac0:
    // 0x419ac0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x419ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_419ac4:
    // 0x419ac4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x419ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_419ac8:
    // 0x419ac8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x419ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_419acc:
    // 0x419acc: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x419accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_419ad0:
    // 0x419ad0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x419ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_419ad4:
    // 0x419ad4: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x419ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_419ad8:
    // 0x419ad8: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x419ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_419adc:
    // 0x419adc: 0xc04e738  jal         func_139CE0
label_419ae0:
    if (ctx->pc == 0x419AE0u) {
        ctx->pc = 0x419AE0u;
            // 0x419ae0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x419AE4u;
        goto label_419ae4;
    }
    ctx->pc = 0x419ADCu;
    SET_GPR_U32(ctx, 31, 0x419AE4u);
    ctx->pc = 0x419AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419ADCu;
            // 0x419ae0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419AE4u; }
        if (ctx->pc != 0x419AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419AE4u; }
        if (ctx->pc != 0x419AE4u) { return; }
    }
    ctx->pc = 0x419AE4u;
label_419ae4:
    // 0x419ae4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x419ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_419ae8:
    // 0x419ae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x419ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419aec:
    // 0x419aec: 0xc454c580  lwc1        $f20, -0x3A80($v0)
    ctx->pc = 0x419aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_419af0:
    // 0x419af0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x419af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419af4:
    // 0x419af4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x419af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419af8:
    // 0x419af8: 0x2e38804  sllv        $s1, $v1, $s7
    ctx->pc = 0x419af8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
label_419afc:
    // 0x419afc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x419afcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_419b00:
    // 0x419b00: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x419b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_419b04:
    // 0x419b04: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x419b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_419b08:
    // 0x419b08: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x419b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_419b0c:
    // 0x419b0c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x419b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_419b10:
    // 0x419b10: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x419b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_419b14:
    // 0x419b14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x419b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_419b18:
    // 0x419b18: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x419b18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_419b1c:
    // 0x419b1c: 0x266400dc  addiu       $a0, $s3, 0xDC
    ctx->pc = 0x419b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
label_419b20:
    // 0x419b20: 0xc0e054c  jal         func_381530
label_419b24:
    if (ctx->pc == 0x419B24u) {
        ctx->pc = 0x419B24u;
            // 0x419b24: 0xafb10138  sw          $s1, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 17));
        ctx->pc = 0x419B28u;
        goto label_419b28;
    }
    ctx->pc = 0x419B20u;
    SET_GPR_U32(ctx, 31, 0x419B28u);
    ctx->pc = 0x419B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B20u;
            // 0x419b24: 0xafb10138  sw          $s1, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381530u;
    if (runtime->hasFunction(0x381530u)) {
        auto targetFn = runtime->lookupFunction(0x381530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B28u; }
        if (ctx->pc != 0x419B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381530_0x381530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B28u; }
        if (ctx->pc != 0x419B28u) { return; }
    }
    ctx->pc = 0x419B28u;
label_419b28:
    // 0x419b28: 0xc0d639c  jal         func_358E70
label_419b2c:
    if (ctx->pc == 0x419B2Cu) {
        ctx->pc = 0x419B2Cu;
            // 0x419b2c: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x419B30u;
        goto label_419b30;
    }
    ctx->pc = 0x419B28u;
    SET_GPR_U32(ctx, 31, 0x419B30u);
    ctx->pc = 0x419B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B28u;
            // 0x419b2c: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B30u; }
        if (ctx->pc != 0x419B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B30u; }
        if (ctx->pc != 0x419B30u) { return; }
    }
    ctx->pc = 0x419B30u;
label_419b30:
    // 0x419b30: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_419b34:
    if (ctx->pc == 0x419B34u) {
        ctx->pc = 0x419B38u;
        goto label_419b38;
    }
    ctx->pc = 0x419B30u;
    {
        const bool branch_taken_0x419b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x419b30) {
            ctx->pc = 0x419C18u;
            goto label_419c18;
        }
    }
    ctx->pc = 0x419B38u;
label_419b38:
    // 0x419b38: 0xc0d1c14  jal         func_347050
label_419b3c:
    if (ctx->pc == 0x419B3Cu) {
        ctx->pc = 0x419B3Cu;
            // 0x419b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419B40u;
        goto label_419b40;
    }
    ctx->pc = 0x419B38u;
    SET_GPR_U32(ctx, 31, 0x419B40u);
    ctx->pc = 0x419B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B38u;
            // 0x419b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B40u; }
        if (ctx->pc != 0x419B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B40u; }
        if (ctx->pc != 0x419B40u) { return; }
    }
    ctx->pc = 0x419B40u;
label_419b40:
    // 0x419b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x419b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419b44:
    // 0x419b44: 0xc04f278  jal         func_13C9E0
label_419b48:
    if (ctx->pc == 0x419B48u) {
        ctx->pc = 0x419B48u;
            // 0x419b48: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x419B4Cu;
        goto label_419b4c;
    }
    ctx->pc = 0x419B44u;
    SET_GPR_U32(ctx, 31, 0x419B4Cu);
    ctx->pc = 0x419B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B44u;
            // 0x419b48: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B4Cu; }
        if (ctx->pc != 0x419B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B4Cu; }
        if (ctx->pc != 0x419B4Cu) { return; }
    }
    ctx->pc = 0x419B4Cu;
label_419b4c:
    // 0x419b4c: 0x8e6600d8  lw          $a2, 0xD8($s3)
    ctx->pc = 0x419b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_419b50:
    // 0x419b50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x419b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_419b54:
    // 0x419b54: 0xc04cdd0  jal         func_133740
label_419b58:
    if (ctx->pc == 0x419B58u) {
        ctx->pc = 0x419B58u;
            // 0x419b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419B5Cu;
        goto label_419b5c;
    }
    ctx->pc = 0x419B54u;
    SET_GPR_U32(ctx, 31, 0x419B5Cu);
    ctx->pc = 0x419B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B54u;
            // 0x419b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B5Cu; }
        if (ctx->pc != 0x419B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B5Cu; }
        if (ctx->pc != 0x419B5Cu) { return; }
    }
    ctx->pc = 0x419B5Cu;
label_419b5c:
    // 0x419b5c: 0xc0d1c10  jal         func_347040
label_419b60:
    if (ctx->pc == 0x419B60u) {
        ctx->pc = 0x419B60u;
            // 0x419b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419B64u;
        goto label_419b64;
    }
    ctx->pc = 0x419B5Cu;
    SET_GPR_U32(ctx, 31, 0x419B64u);
    ctx->pc = 0x419B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B5Cu;
            // 0x419b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B64u; }
        if (ctx->pc != 0x419B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B64u; }
        if (ctx->pc != 0x419B64u) { return; }
    }
    ctx->pc = 0x419B64u;
label_419b64:
    // 0x419b64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x419b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419b68:
    // 0x419b68: 0xc04ce80  jal         func_133A00
label_419b6c:
    if (ctx->pc == 0x419B6Cu) {
        ctx->pc = 0x419B6Cu;
            // 0x419b6c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x419B70u;
        goto label_419b70;
    }
    ctx->pc = 0x419B68u;
    SET_GPR_U32(ctx, 31, 0x419B70u);
    ctx->pc = 0x419B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B68u;
            // 0x419b6c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B70u; }
        if (ctx->pc != 0x419B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B70u; }
        if (ctx->pc != 0x419B70u) { return; }
    }
    ctx->pc = 0x419B70u;
label_419b70:
    // 0x419b70: 0xc0d4108  jal         func_350420
label_419b74:
    if (ctx->pc == 0x419B74u) {
        ctx->pc = 0x419B78u;
        goto label_419b78;
    }
    ctx->pc = 0x419B70u;
    SET_GPR_U32(ctx, 31, 0x419B78u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B78u; }
        if (ctx->pc != 0x419B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B78u; }
        if (ctx->pc != 0x419B78u) { return; }
    }
    ctx->pc = 0x419B78u;
label_419b78:
    // 0x419b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x419b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419b7c:
    // 0x419b7c: 0xc0d4104  jal         func_350410
label_419b80:
    if (ctx->pc == 0x419B80u) {
        ctx->pc = 0x419B80u;
            // 0x419b80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419B84u;
        goto label_419b84;
    }
    ctx->pc = 0x419B7Cu;
    SET_GPR_U32(ctx, 31, 0x419B84u);
    ctx->pc = 0x419B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B7Cu;
            // 0x419b80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B84u; }
        if (ctx->pc != 0x419B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419B84u; }
        if (ctx->pc != 0x419B84u) { return; }
    }
    ctx->pc = 0x419B84u;
label_419b84:
    // 0x419b84: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x419b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_419b88:
    // 0x419b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419b8c:
    // 0x419b8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x419b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_419b90:
    // 0x419b90: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x419b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_419b94:
    // 0x419b94: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x419b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419b98:
    // 0x419b98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x419b98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419b9c:
    // 0x419b9c: 0xc0d40ac  jal         func_3502B0
label_419ba0:
    if (ctx->pc == 0x419BA0u) {
        ctx->pc = 0x419BA0u;
            // 0x419ba0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x419BA4u;
        goto label_419ba4;
    }
    ctx->pc = 0x419B9Cu;
    SET_GPR_U32(ctx, 31, 0x419BA4u);
    ctx->pc = 0x419BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419B9Cu;
            // 0x419ba0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BA4u; }
        if (ctx->pc != 0x419BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BA4u; }
        if (ctx->pc != 0x419BA4u) { return; }
    }
    ctx->pc = 0x419BA4u;
label_419ba4:
    // 0x419ba4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x419ba4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_419ba8:
    // 0x419ba8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_419bac:
    if (ctx->pc == 0x419BACu) {
        ctx->pc = 0x419BACu;
            // 0x419bac: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x419BB0u;
        goto label_419bb0;
    }
    ctx->pc = 0x419BA8u;
    {
        const bool branch_taken_0x419ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x419BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419BA8u;
            // 0x419bac: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ba8) {
            ctx->pc = 0x419C18u;
            goto label_419c18;
        }
    }
    ctx->pc = 0x419BB0u;
label_419bb0:
    // 0x419bb0: 0x266400dc  addiu       $a0, $s3, 0xDC
    ctx->pc = 0x419bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
label_419bb4:
    // 0x419bb4: 0x27a50134  addiu       $a1, $sp, 0x134
    ctx->pc = 0x419bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_419bb8:
    // 0x419bb8: 0xc0e0544  jal         func_381510
label_419bbc:
    if (ctx->pc == 0x419BBCu) {
        ctx->pc = 0x419BBCu;
            // 0x419bbc: 0xafb10134  sw          $s1, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 17));
        ctx->pc = 0x419BC0u;
        goto label_419bc0;
    }
    ctx->pc = 0x419BB8u;
    SET_GPR_U32(ctx, 31, 0x419BC0u);
    ctx->pc = 0x419BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419BB8u;
            // 0x419bbc: 0xafb10134  sw          $s1, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381510u;
    if (runtime->hasFunction(0x381510u)) {
        auto targetFn = runtime->lookupFunction(0x381510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BC0u; }
        if (ctx->pc != 0x419BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381510_0x381510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BC0u; }
        if (ctx->pc != 0x419BC0u) { return; }
    }
    ctx->pc = 0x419BC0u;
label_419bc0:
    // 0x419bc0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x419bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_419bc4:
    // 0x419bc4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x419bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_419bc8:
    // 0x419bc8: 0xc106724  jal         func_419C90
label_419bcc:
    if (ctx->pc == 0x419BCCu) {
        ctx->pc = 0x419BCCu;
            // 0x419bcc: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->pc = 0x419BD0u;
        goto label_419bd0;
    }
    ctx->pc = 0x419BC8u;
    SET_GPR_U32(ctx, 31, 0x419BD0u);
    ctx->pc = 0x419BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419BC8u;
            // 0x419bcc: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x419C90u;
    if (runtime->hasFunction(0x419C90u)) {
        auto targetFn = runtime->lookupFunction(0x419C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BD0u; }
        if (ctx->pc != 0x419BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00419C90_0x419c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BD0u; }
        if (ctx->pc != 0x419BD0u) { return; }
    }
    ctx->pc = 0x419BD0u;
label_419bd0:
    // 0x419bd0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x419bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_419bd4:
    // 0x419bd4: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x419bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_419bd8:
    // 0x419bd8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x419bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_419bdc:
    // 0x419bdc: 0xc04e4a4  jal         func_139290
label_419be0:
    if (ctx->pc == 0x419BE0u) {
        ctx->pc = 0x419BE0u;
            // 0x419be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419BE4u;
        goto label_419be4;
    }
    ctx->pc = 0x419BDCu;
    SET_GPR_U32(ctx, 31, 0x419BE4u);
    ctx->pc = 0x419BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419BDCu;
            // 0x419be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BE4u; }
        if (ctx->pc != 0x419BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BE4u; }
        if (ctx->pc != 0x419BE4u) { return; }
    }
    ctx->pc = 0x419BE4u;
label_419be4:
    // 0x419be4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x419be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_419be8:
    // 0x419be8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x419be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_419bec:
    // 0x419bec: 0xc04cd60  jal         func_133580
label_419bf0:
    if (ctx->pc == 0x419BF0u) {
        ctx->pc = 0x419BF0u;
            // 0x419bf0: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x419BF4u;
        goto label_419bf4;
    }
    ctx->pc = 0x419BECu;
    SET_GPR_U32(ctx, 31, 0x419BF4u);
    ctx->pc = 0x419BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419BECu;
            // 0x419bf0: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BF4u; }
        if (ctx->pc != 0x419BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419BF4u; }
        if (ctx->pc != 0x419BF4u) { return; }
    }
    ctx->pc = 0x419BF4u;
label_419bf4:
    // 0x419bf4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x419bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_419bf8:
    // 0x419bf8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x419bf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_419bfc:
    // 0x419bfc: 0x320f809  jalr        $t9
label_419c00:
    if (ctx->pc == 0x419C00u) {
        ctx->pc = 0x419C00u;
            // 0x419c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419C04u;
        goto label_419c04;
    }
    ctx->pc = 0x419BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419C04u);
        ctx->pc = 0x419C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419BFCu;
            // 0x419c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x419C04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419C04u; }
            if (ctx->pc != 0x419C04u) { return; }
        }
        }
    }
    ctx->pc = 0x419C04u;
label_419c04:
    // 0x419c04: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x419c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_419c08:
    // 0x419c08: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x419c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_419c0c:
    // 0x419c0c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x419c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_419c10:
    // 0x419c10: 0xc054fd4  jal         func_153F50
label_419c14:
    if (ctx->pc == 0x419C14u) {
        ctx->pc = 0x419C14u;
            // 0x419c14: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419C18u;
        goto label_419c18;
    }
    ctx->pc = 0x419C10u;
    SET_GPR_U32(ctx, 31, 0x419C18u);
    ctx->pc = 0x419C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419C10u;
            // 0x419c14: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419C18u; }
        if (ctx->pc != 0x419C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419C18u; }
        if (ctx->pc != 0x419C18u) { return; }
    }
    ctx->pc = 0x419C18u;
label_419c18:
    // 0x419c18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x419c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_419c1c:
    // 0x419c1c: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x419c1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_419c20:
    // 0x419c20: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_419c24:
    if (ctx->pc == 0x419C24u) {
        ctx->pc = 0x419C24u;
            // 0x419c24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x419C28u;
        goto label_419c28;
    }
    ctx->pc = 0x419C20u;
    {
        const bool branch_taken_0x419c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x419C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419C20u;
            // 0x419c24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419c20) {
            ctx->pc = 0x419AFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_419afc;
        }
    }
    ctx->pc = 0x419C28u;
label_419c28:
    // 0x419c28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419c2c:
    // 0x419c2c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x419c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_419c30:
    // 0x419c30: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_419c34:
    if (ctx->pc == 0x419C34u) {
        ctx->pc = 0x419C34u;
            // 0x419c34: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x419C38u;
        goto label_419c38;
    }
    ctx->pc = 0x419C30u;
    {
        const bool branch_taken_0x419c30 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x419C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419C30u;
            // 0x419c34: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419c30) {
            ctx->pc = 0x419C58u;
            goto label_419c58;
        }
    }
    ctx->pc = 0x419C38u;
label_419c38:
    // 0x419c38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419c3c:
    // 0x419c3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x419c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_419c40:
    // 0x419c40: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x419c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_419c44:
    // 0x419c44: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x419c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_419c48:
    // 0x419c48: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x419c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_419c4c:
    // 0x419c4c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x419c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_419c50:
    // 0x419c50: 0xc055ea8  jal         func_157AA0
label_419c54:
    if (ctx->pc == 0x419C54u) {
        ctx->pc = 0x419C54u;
            // 0x419c54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419C58u;
        goto label_419c58;
    }
    ctx->pc = 0x419C50u;
    SET_GPR_U32(ctx, 31, 0x419C58u);
    ctx->pc = 0x419C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419C50u;
            // 0x419c54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419C58u; }
        if (ctx->pc != 0x419C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419C58u; }
        if (ctx->pc != 0x419C58u) { return; }
    }
    ctx->pc = 0x419C58u;
label_419c58:
    // 0x419c58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x419c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_419c5c:
    // 0x419c5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x419c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_419c60:
    // 0x419c60: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x419c60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_419c64:
    // 0x419c64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x419c64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_419c68:
    // 0x419c68: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x419c68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_419c6c:
    // 0x419c6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x419c6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_419c70:
    // 0x419c70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x419c70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_419c74:
    // 0x419c74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x419c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_419c78:
    // 0x419c78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x419c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_419c7c:
    // 0x419c7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x419c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419c80:
    // 0x419c80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419c84:
    // 0x419c84: 0x3e00008  jr          $ra
label_419c88:
    if (ctx->pc == 0x419C88u) {
        ctx->pc = 0x419C88u;
            // 0x419c88: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x419C8Cu;
        goto label_419c8c;
    }
    ctx->pc = 0x419C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419C84u;
            // 0x419c88: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x419C8Cu;
label_419c8c:
    // 0x419c8c: 0x0  nop
    ctx->pc = 0x419c8cu;
    // NOP
}
