#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004894A0
// Address: 0x4894a0 - 0x489f60
void sub_004894A0_0x4894a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004894A0_0x4894a0");
#endif

    switch (ctx->pc) {
        case 0x4894a0u: goto label_4894a0;
        case 0x4894a4u: goto label_4894a4;
        case 0x4894a8u: goto label_4894a8;
        case 0x4894acu: goto label_4894ac;
        case 0x4894b0u: goto label_4894b0;
        case 0x4894b4u: goto label_4894b4;
        case 0x4894b8u: goto label_4894b8;
        case 0x4894bcu: goto label_4894bc;
        case 0x4894c0u: goto label_4894c0;
        case 0x4894c4u: goto label_4894c4;
        case 0x4894c8u: goto label_4894c8;
        case 0x4894ccu: goto label_4894cc;
        case 0x4894d0u: goto label_4894d0;
        case 0x4894d4u: goto label_4894d4;
        case 0x4894d8u: goto label_4894d8;
        case 0x4894dcu: goto label_4894dc;
        case 0x4894e0u: goto label_4894e0;
        case 0x4894e4u: goto label_4894e4;
        case 0x4894e8u: goto label_4894e8;
        case 0x4894ecu: goto label_4894ec;
        case 0x4894f0u: goto label_4894f0;
        case 0x4894f4u: goto label_4894f4;
        case 0x4894f8u: goto label_4894f8;
        case 0x4894fcu: goto label_4894fc;
        case 0x489500u: goto label_489500;
        case 0x489504u: goto label_489504;
        case 0x489508u: goto label_489508;
        case 0x48950cu: goto label_48950c;
        case 0x489510u: goto label_489510;
        case 0x489514u: goto label_489514;
        case 0x489518u: goto label_489518;
        case 0x48951cu: goto label_48951c;
        case 0x489520u: goto label_489520;
        case 0x489524u: goto label_489524;
        case 0x489528u: goto label_489528;
        case 0x48952cu: goto label_48952c;
        case 0x489530u: goto label_489530;
        case 0x489534u: goto label_489534;
        case 0x489538u: goto label_489538;
        case 0x48953cu: goto label_48953c;
        case 0x489540u: goto label_489540;
        case 0x489544u: goto label_489544;
        case 0x489548u: goto label_489548;
        case 0x48954cu: goto label_48954c;
        case 0x489550u: goto label_489550;
        case 0x489554u: goto label_489554;
        case 0x489558u: goto label_489558;
        case 0x48955cu: goto label_48955c;
        case 0x489560u: goto label_489560;
        case 0x489564u: goto label_489564;
        case 0x489568u: goto label_489568;
        case 0x48956cu: goto label_48956c;
        case 0x489570u: goto label_489570;
        case 0x489574u: goto label_489574;
        case 0x489578u: goto label_489578;
        case 0x48957cu: goto label_48957c;
        case 0x489580u: goto label_489580;
        case 0x489584u: goto label_489584;
        case 0x489588u: goto label_489588;
        case 0x48958cu: goto label_48958c;
        case 0x489590u: goto label_489590;
        case 0x489594u: goto label_489594;
        case 0x489598u: goto label_489598;
        case 0x48959cu: goto label_48959c;
        case 0x4895a0u: goto label_4895a0;
        case 0x4895a4u: goto label_4895a4;
        case 0x4895a8u: goto label_4895a8;
        case 0x4895acu: goto label_4895ac;
        case 0x4895b0u: goto label_4895b0;
        case 0x4895b4u: goto label_4895b4;
        case 0x4895b8u: goto label_4895b8;
        case 0x4895bcu: goto label_4895bc;
        case 0x4895c0u: goto label_4895c0;
        case 0x4895c4u: goto label_4895c4;
        case 0x4895c8u: goto label_4895c8;
        case 0x4895ccu: goto label_4895cc;
        case 0x4895d0u: goto label_4895d0;
        case 0x4895d4u: goto label_4895d4;
        case 0x4895d8u: goto label_4895d8;
        case 0x4895dcu: goto label_4895dc;
        case 0x4895e0u: goto label_4895e0;
        case 0x4895e4u: goto label_4895e4;
        case 0x4895e8u: goto label_4895e8;
        case 0x4895ecu: goto label_4895ec;
        case 0x4895f0u: goto label_4895f0;
        case 0x4895f4u: goto label_4895f4;
        case 0x4895f8u: goto label_4895f8;
        case 0x4895fcu: goto label_4895fc;
        case 0x489600u: goto label_489600;
        case 0x489604u: goto label_489604;
        case 0x489608u: goto label_489608;
        case 0x48960cu: goto label_48960c;
        case 0x489610u: goto label_489610;
        case 0x489614u: goto label_489614;
        case 0x489618u: goto label_489618;
        case 0x48961cu: goto label_48961c;
        case 0x489620u: goto label_489620;
        case 0x489624u: goto label_489624;
        case 0x489628u: goto label_489628;
        case 0x48962cu: goto label_48962c;
        case 0x489630u: goto label_489630;
        case 0x489634u: goto label_489634;
        case 0x489638u: goto label_489638;
        case 0x48963cu: goto label_48963c;
        case 0x489640u: goto label_489640;
        case 0x489644u: goto label_489644;
        case 0x489648u: goto label_489648;
        case 0x48964cu: goto label_48964c;
        case 0x489650u: goto label_489650;
        case 0x489654u: goto label_489654;
        case 0x489658u: goto label_489658;
        case 0x48965cu: goto label_48965c;
        case 0x489660u: goto label_489660;
        case 0x489664u: goto label_489664;
        case 0x489668u: goto label_489668;
        case 0x48966cu: goto label_48966c;
        case 0x489670u: goto label_489670;
        case 0x489674u: goto label_489674;
        case 0x489678u: goto label_489678;
        case 0x48967cu: goto label_48967c;
        case 0x489680u: goto label_489680;
        case 0x489684u: goto label_489684;
        case 0x489688u: goto label_489688;
        case 0x48968cu: goto label_48968c;
        case 0x489690u: goto label_489690;
        case 0x489694u: goto label_489694;
        case 0x489698u: goto label_489698;
        case 0x48969cu: goto label_48969c;
        case 0x4896a0u: goto label_4896a0;
        case 0x4896a4u: goto label_4896a4;
        case 0x4896a8u: goto label_4896a8;
        case 0x4896acu: goto label_4896ac;
        case 0x4896b0u: goto label_4896b0;
        case 0x4896b4u: goto label_4896b4;
        case 0x4896b8u: goto label_4896b8;
        case 0x4896bcu: goto label_4896bc;
        case 0x4896c0u: goto label_4896c0;
        case 0x4896c4u: goto label_4896c4;
        case 0x4896c8u: goto label_4896c8;
        case 0x4896ccu: goto label_4896cc;
        case 0x4896d0u: goto label_4896d0;
        case 0x4896d4u: goto label_4896d4;
        case 0x4896d8u: goto label_4896d8;
        case 0x4896dcu: goto label_4896dc;
        case 0x4896e0u: goto label_4896e0;
        case 0x4896e4u: goto label_4896e4;
        case 0x4896e8u: goto label_4896e8;
        case 0x4896ecu: goto label_4896ec;
        case 0x4896f0u: goto label_4896f0;
        case 0x4896f4u: goto label_4896f4;
        case 0x4896f8u: goto label_4896f8;
        case 0x4896fcu: goto label_4896fc;
        case 0x489700u: goto label_489700;
        case 0x489704u: goto label_489704;
        case 0x489708u: goto label_489708;
        case 0x48970cu: goto label_48970c;
        case 0x489710u: goto label_489710;
        case 0x489714u: goto label_489714;
        case 0x489718u: goto label_489718;
        case 0x48971cu: goto label_48971c;
        case 0x489720u: goto label_489720;
        case 0x489724u: goto label_489724;
        case 0x489728u: goto label_489728;
        case 0x48972cu: goto label_48972c;
        case 0x489730u: goto label_489730;
        case 0x489734u: goto label_489734;
        case 0x489738u: goto label_489738;
        case 0x48973cu: goto label_48973c;
        case 0x489740u: goto label_489740;
        case 0x489744u: goto label_489744;
        case 0x489748u: goto label_489748;
        case 0x48974cu: goto label_48974c;
        case 0x489750u: goto label_489750;
        case 0x489754u: goto label_489754;
        case 0x489758u: goto label_489758;
        case 0x48975cu: goto label_48975c;
        case 0x489760u: goto label_489760;
        case 0x489764u: goto label_489764;
        case 0x489768u: goto label_489768;
        case 0x48976cu: goto label_48976c;
        case 0x489770u: goto label_489770;
        case 0x489774u: goto label_489774;
        case 0x489778u: goto label_489778;
        case 0x48977cu: goto label_48977c;
        case 0x489780u: goto label_489780;
        case 0x489784u: goto label_489784;
        case 0x489788u: goto label_489788;
        case 0x48978cu: goto label_48978c;
        case 0x489790u: goto label_489790;
        case 0x489794u: goto label_489794;
        case 0x489798u: goto label_489798;
        case 0x48979cu: goto label_48979c;
        case 0x4897a0u: goto label_4897a0;
        case 0x4897a4u: goto label_4897a4;
        case 0x4897a8u: goto label_4897a8;
        case 0x4897acu: goto label_4897ac;
        case 0x4897b0u: goto label_4897b0;
        case 0x4897b4u: goto label_4897b4;
        case 0x4897b8u: goto label_4897b8;
        case 0x4897bcu: goto label_4897bc;
        case 0x4897c0u: goto label_4897c0;
        case 0x4897c4u: goto label_4897c4;
        case 0x4897c8u: goto label_4897c8;
        case 0x4897ccu: goto label_4897cc;
        case 0x4897d0u: goto label_4897d0;
        case 0x4897d4u: goto label_4897d4;
        case 0x4897d8u: goto label_4897d8;
        case 0x4897dcu: goto label_4897dc;
        case 0x4897e0u: goto label_4897e0;
        case 0x4897e4u: goto label_4897e4;
        case 0x4897e8u: goto label_4897e8;
        case 0x4897ecu: goto label_4897ec;
        case 0x4897f0u: goto label_4897f0;
        case 0x4897f4u: goto label_4897f4;
        case 0x4897f8u: goto label_4897f8;
        case 0x4897fcu: goto label_4897fc;
        case 0x489800u: goto label_489800;
        case 0x489804u: goto label_489804;
        case 0x489808u: goto label_489808;
        case 0x48980cu: goto label_48980c;
        case 0x489810u: goto label_489810;
        case 0x489814u: goto label_489814;
        case 0x489818u: goto label_489818;
        case 0x48981cu: goto label_48981c;
        case 0x489820u: goto label_489820;
        case 0x489824u: goto label_489824;
        case 0x489828u: goto label_489828;
        case 0x48982cu: goto label_48982c;
        case 0x489830u: goto label_489830;
        case 0x489834u: goto label_489834;
        case 0x489838u: goto label_489838;
        case 0x48983cu: goto label_48983c;
        case 0x489840u: goto label_489840;
        case 0x489844u: goto label_489844;
        case 0x489848u: goto label_489848;
        case 0x48984cu: goto label_48984c;
        case 0x489850u: goto label_489850;
        case 0x489854u: goto label_489854;
        case 0x489858u: goto label_489858;
        case 0x48985cu: goto label_48985c;
        case 0x489860u: goto label_489860;
        case 0x489864u: goto label_489864;
        case 0x489868u: goto label_489868;
        case 0x48986cu: goto label_48986c;
        case 0x489870u: goto label_489870;
        case 0x489874u: goto label_489874;
        case 0x489878u: goto label_489878;
        case 0x48987cu: goto label_48987c;
        case 0x489880u: goto label_489880;
        case 0x489884u: goto label_489884;
        case 0x489888u: goto label_489888;
        case 0x48988cu: goto label_48988c;
        case 0x489890u: goto label_489890;
        case 0x489894u: goto label_489894;
        case 0x489898u: goto label_489898;
        case 0x48989cu: goto label_48989c;
        case 0x4898a0u: goto label_4898a0;
        case 0x4898a4u: goto label_4898a4;
        case 0x4898a8u: goto label_4898a8;
        case 0x4898acu: goto label_4898ac;
        case 0x4898b0u: goto label_4898b0;
        case 0x4898b4u: goto label_4898b4;
        case 0x4898b8u: goto label_4898b8;
        case 0x4898bcu: goto label_4898bc;
        case 0x4898c0u: goto label_4898c0;
        case 0x4898c4u: goto label_4898c4;
        case 0x4898c8u: goto label_4898c8;
        case 0x4898ccu: goto label_4898cc;
        case 0x4898d0u: goto label_4898d0;
        case 0x4898d4u: goto label_4898d4;
        case 0x4898d8u: goto label_4898d8;
        case 0x4898dcu: goto label_4898dc;
        case 0x4898e0u: goto label_4898e0;
        case 0x4898e4u: goto label_4898e4;
        case 0x4898e8u: goto label_4898e8;
        case 0x4898ecu: goto label_4898ec;
        case 0x4898f0u: goto label_4898f0;
        case 0x4898f4u: goto label_4898f4;
        case 0x4898f8u: goto label_4898f8;
        case 0x4898fcu: goto label_4898fc;
        case 0x489900u: goto label_489900;
        case 0x489904u: goto label_489904;
        case 0x489908u: goto label_489908;
        case 0x48990cu: goto label_48990c;
        case 0x489910u: goto label_489910;
        case 0x489914u: goto label_489914;
        case 0x489918u: goto label_489918;
        case 0x48991cu: goto label_48991c;
        case 0x489920u: goto label_489920;
        case 0x489924u: goto label_489924;
        case 0x489928u: goto label_489928;
        case 0x48992cu: goto label_48992c;
        case 0x489930u: goto label_489930;
        case 0x489934u: goto label_489934;
        case 0x489938u: goto label_489938;
        case 0x48993cu: goto label_48993c;
        case 0x489940u: goto label_489940;
        case 0x489944u: goto label_489944;
        case 0x489948u: goto label_489948;
        case 0x48994cu: goto label_48994c;
        case 0x489950u: goto label_489950;
        case 0x489954u: goto label_489954;
        case 0x489958u: goto label_489958;
        case 0x48995cu: goto label_48995c;
        case 0x489960u: goto label_489960;
        case 0x489964u: goto label_489964;
        case 0x489968u: goto label_489968;
        case 0x48996cu: goto label_48996c;
        case 0x489970u: goto label_489970;
        case 0x489974u: goto label_489974;
        case 0x489978u: goto label_489978;
        case 0x48997cu: goto label_48997c;
        case 0x489980u: goto label_489980;
        case 0x489984u: goto label_489984;
        case 0x489988u: goto label_489988;
        case 0x48998cu: goto label_48998c;
        case 0x489990u: goto label_489990;
        case 0x489994u: goto label_489994;
        case 0x489998u: goto label_489998;
        case 0x48999cu: goto label_48999c;
        case 0x4899a0u: goto label_4899a0;
        case 0x4899a4u: goto label_4899a4;
        case 0x4899a8u: goto label_4899a8;
        case 0x4899acu: goto label_4899ac;
        case 0x4899b0u: goto label_4899b0;
        case 0x4899b4u: goto label_4899b4;
        case 0x4899b8u: goto label_4899b8;
        case 0x4899bcu: goto label_4899bc;
        case 0x4899c0u: goto label_4899c0;
        case 0x4899c4u: goto label_4899c4;
        case 0x4899c8u: goto label_4899c8;
        case 0x4899ccu: goto label_4899cc;
        case 0x4899d0u: goto label_4899d0;
        case 0x4899d4u: goto label_4899d4;
        case 0x4899d8u: goto label_4899d8;
        case 0x4899dcu: goto label_4899dc;
        case 0x4899e0u: goto label_4899e0;
        case 0x4899e4u: goto label_4899e4;
        case 0x4899e8u: goto label_4899e8;
        case 0x4899ecu: goto label_4899ec;
        case 0x4899f0u: goto label_4899f0;
        case 0x4899f4u: goto label_4899f4;
        case 0x4899f8u: goto label_4899f8;
        case 0x4899fcu: goto label_4899fc;
        case 0x489a00u: goto label_489a00;
        case 0x489a04u: goto label_489a04;
        case 0x489a08u: goto label_489a08;
        case 0x489a0cu: goto label_489a0c;
        case 0x489a10u: goto label_489a10;
        case 0x489a14u: goto label_489a14;
        case 0x489a18u: goto label_489a18;
        case 0x489a1cu: goto label_489a1c;
        case 0x489a20u: goto label_489a20;
        case 0x489a24u: goto label_489a24;
        case 0x489a28u: goto label_489a28;
        case 0x489a2cu: goto label_489a2c;
        case 0x489a30u: goto label_489a30;
        case 0x489a34u: goto label_489a34;
        case 0x489a38u: goto label_489a38;
        case 0x489a3cu: goto label_489a3c;
        case 0x489a40u: goto label_489a40;
        case 0x489a44u: goto label_489a44;
        case 0x489a48u: goto label_489a48;
        case 0x489a4cu: goto label_489a4c;
        case 0x489a50u: goto label_489a50;
        case 0x489a54u: goto label_489a54;
        case 0x489a58u: goto label_489a58;
        case 0x489a5cu: goto label_489a5c;
        case 0x489a60u: goto label_489a60;
        case 0x489a64u: goto label_489a64;
        case 0x489a68u: goto label_489a68;
        case 0x489a6cu: goto label_489a6c;
        case 0x489a70u: goto label_489a70;
        case 0x489a74u: goto label_489a74;
        case 0x489a78u: goto label_489a78;
        case 0x489a7cu: goto label_489a7c;
        case 0x489a80u: goto label_489a80;
        case 0x489a84u: goto label_489a84;
        case 0x489a88u: goto label_489a88;
        case 0x489a8cu: goto label_489a8c;
        case 0x489a90u: goto label_489a90;
        case 0x489a94u: goto label_489a94;
        case 0x489a98u: goto label_489a98;
        case 0x489a9cu: goto label_489a9c;
        case 0x489aa0u: goto label_489aa0;
        case 0x489aa4u: goto label_489aa4;
        case 0x489aa8u: goto label_489aa8;
        case 0x489aacu: goto label_489aac;
        case 0x489ab0u: goto label_489ab0;
        case 0x489ab4u: goto label_489ab4;
        case 0x489ab8u: goto label_489ab8;
        case 0x489abcu: goto label_489abc;
        case 0x489ac0u: goto label_489ac0;
        case 0x489ac4u: goto label_489ac4;
        case 0x489ac8u: goto label_489ac8;
        case 0x489accu: goto label_489acc;
        case 0x489ad0u: goto label_489ad0;
        case 0x489ad4u: goto label_489ad4;
        case 0x489ad8u: goto label_489ad8;
        case 0x489adcu: goto label_489adc;
        case 0x489ae0u: goto label_489ae0;
        case 0x489ae4u: goto label_489ae4;
        case 0x489ae8u: goto label_489ae8;
        case 0x489aecu: goto label_489aec;
        case 0x489af0u: goto label_489af0;
        case 0x489af4u: goto label_489af4;
        case 0x489af8u: goto label_489af8;
        case 0x489afcu: goto label_489afc;
        case 0x489b00u: goto label_489b00;
        case 0x489b04u: goto label_489b04;
        case 0x489b08u: goto label_489b08;
        case 0x489b0cu: goto label_489b0c;
        case 0x489b10u: goto label_489b10;
        case 0x489b14u: goto label_489b14;
        case 0x489b18u: goto label_489b18;
        case 0x489b1cu: goto label_489b1c;
        case 0x489b20u: goto label_489b20;
        case 0x489b24u: goto label_489b24;
        case 0x489b28u: goto label_489b28;
        case 0x489b2cu: goto label_489b2c;
        case 0x489b30u: goto label_489b30;
        case 0x489b34u: goto label_489b34;
        case 0x489b38u: goto label_489b38;
        case 0x489b3cu: goto label_489b3c;
        case 0x489b40u: goto label_489b40;
        case 0x489b44u: goto label_489b44;
        case 0x489b48u: goto label_489b48;
        case 0x489b4cu: goto label_489b4c;
        case 0x489b50u: goto label_489b50;
        case 0x489b54u: goto label_489b54;
        case 0x489b58u: goto label_489b58;
        case 0x489b5cu: goto label_489b5c;
        case 0x489b60u: goto label_489b60;
        case 0x489b64u: goto label_489b64;
        case 0x489b68u: goto label_489b68;
        case 0x489b6cu: goto label_489b6c;
        case 0x489b70u: goto label_489b70;
        case 0x489b74u: goto label_489b74;
        case 0x489b78u: goto label_489b78;
        case 0x489b7cu: goto label_489b7c;
        case 0x489b80u: goto label_489b80;
        case 0x489b84u: goto label_489b84;
        case 0x489b88u: goto label_489b88;
        case 0x489b8cu: goto label_489b8c;
        case 0x489b90u: goto label_489b90;
        case 0x489b94u: goto label_489b94;
        case 0x489b98u: goto label_489b98;
        case 0x489b9cu: goto label_489b9c;
        case 0x489ba0u: goto label_489ba0;
        case 0x489ba4u: goto label_489ba4;
        case 0x489ba8u: goto label_489ba8;
        case 0x489bacu: goto label_489bac;
        case 0x489bb0u: goto label_489bb0;
        case 0x489bb4u: goto label_489bb4;
        case 0x489bb8u: goto label_489bb8;
        case 0x489bbcu: goto label_489bbc;
        case 0x489bc0u: goto label_489bc0;
        case 0x489bc4u: goto label_489bc4;
        case 0x489bc8u: goto label_489bc8;
        case 0x489bccu: goto label_489bcc;
        case 0x489bd0u: goto label_489bd0;
        case 0x489bd4u: goto label_489bd4;
        case 0x489bd8u: goto label_489bd8;
        case 0x489bdcu: goto label_489bdc;
        case 0x489be0u: goto label_489be0;
        case 0x489be4u: goto label_489be4;
        case 0x489be8u: goto label_489be8;
        case 0x489becu: goto label_489bec;
        case 0x489bf0u: goto label_489bf0;
        case 0x489bf4u: goto label_489bf4;
        case 0x489bf8u: goto label_489bf8;
        case 0x489bfcu: goto label_489bfc;
        case 0x489c00u: goto label_489c00;
        case 0x489c04u: goto label_489c04;
        case 0x489c08u: goto label_489c08;
        case 0x489c0cu: goto label_489c0c;
        case 0x489c10u: goto label_489c10;
        case 0x489c14u: goto label_489c14;
        case 0x489c18u: goto label_489c18;
        case 0x489c1cu: goto label_489c1c;
        case 0x489c20u: goto label_489c20;
        case 0x489c24u: goto label_489c24;
        case 0x489c28u: goto label_489c28;
        case 0x489c2cu: goto label_489c2c;
        case 0x489c30u: goto label_489c30;
        case 0x489c34u: goto label_489c34;
        case 0x489c38u: goto label_489c38;
        case 0x489c3cu: goto label_489c3c;
        case 0x489c40u: goto label_489c40;
        case 0x489c44u: goto label_489c44;
        case 0x489c48u: goto label_489c48;
        case 0x489c4cu: goto label_489c4c;
        case 0x489c50u: goto label_489c50;
        case 0x489c54u: goto label_489c54;
        case 0x489c58u: goto label_489c58;
        case 0x489c5cu: goto label_489c5c;
        case 0x489c60u: goto label_489c60;
        case 0x489c64u: goto label_489c64;
        case 0x489c68u: goto label_489c68;
        case 0x489c6cu: goto label_489c6c;
        case 0x489c70u: goto label_489c70;
        case 0x489c74u: goto label_489c74;
        case 0x489c78u: goto label_489c78;
        case 0x489c7cu: goto label_489c7c;
        case 0x489c80u: goto label_489c80;
        case 0x489c84u: goto label_489c84;
        case 0x489c88u: goto label_489c88;
        case 0x489c8cu: goto label_489c8c;
        case 0x489c90u: goto label_489c90;
        case 0x489c94u: goto label_489c94;
        case 0x489c98u: goto label_489c98;
        case 0x489c9cu: goto label_489c9c;
        case 0x489ca0u: goto label_489ca0;
        case 0x489ca4u: goto label_489ca4;
        case 0x489ca8u: goto label_489ca8;
        case 0x489cacu: goto label_489cac;
        case 0x489cb0u: goto label_489cb0;
        case 0x489cb4u: goto label_489cb4;
        case 0x489cb8u: goto label_489cb8;
        case 0x489cbcu: goto label_489cbc;
        case 0x489cc0u: goto label_489cc0;
        case 0x489cc4u: goto label_489cc4;
        case 0x489cc8u: goto label_489cc8;
        case 0x489cccu: goto label_489ccc;
        case 0x489cd0u: goto label_489cd0;
        case 0x489cd4u: goto label_489cd4;
        case 0x489cd8u: goto label_489cd8;
        case 0x489cdcu: goto label_489cdc;
        case 0x489ce0u: goto label_489ce0;
        case 0x489ce4u: goto label_489ce4;
        case 0x489ce8u: goto label_489ce8;
        case 0x489cecu: goto label_489cec;
        case 0x489cf0u: goto label_489cf0;
        case 0x489cf4u: goto label_489cf4;
        case 0x489cf8u: goto label_489cf8;
        case 0x489cfcu: goto label_489cfc;
        case 0x489d00u: goto label_489d00;
        case 0x489d04u: goto label_489d04;
        case 0x489d08u: goto label_489d08;
        case 0x489d0cu: goto label_489d0c;
        case 0x489d10u: goto label_489d10;
        case 0x489d14u: goto label_489d14;
        case 0x489d18u: goto label_489d18;
        case 0x489d1cu: goto label_489d1c;
        case 0x489d20u: goto label_489d20;
        case 0x489d24u: goto label_489d24;
        case 0x489d28u: goto label_489d28;
        case 0x489d2cu: goto label_489d2c;
        case 0x489d30u: goto label_489d30;
        case 0x489d34u: goto label_489d34;
        case 0x489d38u: goto label_489d38;
        case 0x489d3cu: goto label_489d3c;
        case 0x489d40u: goto label_489d40;
        case 0x489d44u: goto label_489d44;
        case 0x489d48u: goto label_489d48;
        case 0x489d4cu: goto label_489d4c;
        case 0x489d50u: goto label_489d50;
        case 0x489d54u: goto label_489d54;
        case 0x489d58u: goto label_489d58;
        case 0x489d5cu: goto label_489d5c;
        case 0x489d60u: goto label_489d60;
        case 0x489d64u: goto label_489d64;
        case 0x489d68u: goto label_489d68;
        case 0x489d6cu: goto label_489d6c;
        case 0x489d70u: goto label_489d70;
        case 0x489d74u: goto label_489d74;
        case 0x489d78u: goto label_489d78;
        case 0x489d7cu: goto label_489d7c;
        case 0x489d80u: goto label_489d80;
        case 0x489d84u: goto label_489d84;
        case 0x489d88u: goto label_489d88;
        case 0x489d8cu: goto label_489d8c;
        case 0x489d90u: goto label_489d90;
        case 0x489d94u: goto label_489d94;
        case 0x489d98u: goto label_489d98;
        case 0x489d9cu: goto label_489d9c;
        case 0x489da0u: goto label_489da0;
        case 0x489da4u: goto label_489da4;
        case 0x489da8u: goto label_489da8;
        case 0x489dacu: goto label_489dac;
        case 0x489db0u: goto label_489db0;
        case 0x489db4u: goto label_489db4;
        case 0x489db8u: goto label_489db8;
        case 0x489dbcu: goto label_489dbc;
        case 0x489dc0u: goto label_489dc0;
        case 0x489dc4u: goto label_489dc4;
        case 0x489dc8u: goto label_489dc8;
        case 0x489dccu: goto label_489dcc;
        case 0x489dd0u: goto label_489dd0;
        case 0x489dd4u: goto label_489dd4;
        case 0x489dd8u: goto label_489dd8;
        case 0x489ddcu: goto label_489ddc;
        case 0x489de0u: goto label_489de0;
        case 0x489de4u: goto label_489de4;
        case 0x489de8u: goto label_489de8;
        case 0x489decu: goto label_489dec;
        case 0x489df0u: goto label_489df0;
        case 0x489df4u: goto label_489df4;
        case 0x489df8u: goto label_489df8;
        case 0x489dfcu: goto label_489dfc;
        case 0x489e00u: goto label_489e00;
        case 0x489e04u: goto label_489e04;
        case 0x489e08u: goto label_489e08;
        case 0x489e0cu: goto label_489e0c;
        case 0x489e10u: goto label_489e10;
        case 0x489e14u: goto label_489e14;
        case 0x489e18u: goto label_489e18;
        case 0x489e1cu: goto label_489e1c;
        case 0x489e20u: goto label_489e20;
        case 0x489e24u: goto label_489e24;
        case 0x489e28u: goto label_489e28;
        case 0x489e2cu: goto label_489e2c;
        case 0x489e30u: goto label_489e30;
        case 0x489e34u: goto label_489e34;
        case 0x489e38u: goto label_489e38;
        case 0x489e3cu: goto label_489e3c;
        case 0x489e40u: goto label_489e40;
        case 0x489e44u: goto label_489e44;
        case 0x489e48u: goto label_489e48;
        case 0x489e4cu: goto label_489e4c;
        case 0x489e50u: goto label_489e50;
        case 0x489e54u: goto label_489e54;
        case 0x489e58u: goto label_489e58;
        case 0x489e5cu: goto label_489e5c;
        case 0x489e60u: goto label_489e60;
        case 0x489e64u: goto label_489e64;
        case 0x489e68u: goto label_489e68;
        case 0x489e6cu: goto label_489e6c;
        case 0x489e70u: goto label_489e70;
        case 0x489e74u: goto label_489e74;
        case 0x489e78u: goto label_489e78;
        case 0x489e7cu: goto label_489e7c;
        case 0x489e80u: goto label_489e80;
        case 0x489e84u: goto label_489e84;
        case 0x489e88u: goto label_489e88;
        case 0x489e8cu: goto label_489e8c;
        case 0x489e90u: goto label_489e90;
        case 0x489e94u: goto label_489e94;
        case 0x489e98u: goto label_489e98;
        case 0x489e9cu: goto label_489e9c;
        case 0x489ea0u: goto label_489ea0;
        case 0x489ea4u: goto label_489ea4;
        case 0x489ea8u: goto label_489ea8;
        case 0x489eacu: goto label_489eac;
        case 0x489eb0u: goto label_489eb0;
        case 0x489eb4u: goto label_489eb4;
        case 0x489eb8u: goto label_489eb8;
        case 0x489ebcu: goto label_489ebc;
        case 0x489ec0u: goto label_489ec0;
        case 0x489ec4u: goto label_489ec4;
        case 0x489ec8u: goto label_489ec8;
        case 0x489eccu: goto label_489ecc;
        case 0x489ed0u: goto label_489ed0;
        case 0x489ed4u: goto label_489ed4;
        case 0x489ed8u: goto label_489ed8;
        case 0x489edcu: goto label_489edc;
        case 0x489ee0u: goto label_489ee0;
        case 0x489ee4u: goto label_489ee4;
        case 0x489ee8u: goto label_489ee8;
        case 0x489eecu: goto label_489eec;
        case 0x489ef0u: goto label_489ef0;
        case 0x489ef4u: goto label_489ef4;
        case 0x489ef8u: goto label_489ef8;
        case 0x489efcu: goto label_489efc;
        case 0x489f00u: goto label_489f00;
        case 0x489f04u: goto label_489f04;
        case 0x489f08u: goto label_489f08;
        case 0x489f0cu: goto label_489f0c;
        case 0x489f10u: goto label_489f10;
        case 0x489f14u: goto label_489f14;
        case 0x489f18u: goto label_489f18;
        case 0x489f1cu: goto label_489f1c;
        case 0x489f20u: goto label_489f20;
        case 0x489f24u: goto label_489f24;
        case 0x489f28u: goto label_489f28;
        case 0x489f2cu: goto label_489f2c;
        case 0x489f30u: goto label_489f30;
        case 0x489f34u: goto label_489f34;
        case 0x489f38u: goto label_489f38;
        case 0x489f3cu: goto label_489f3c;
        case 0x489f40u: goto label_489f40;
        case 0x489f44u: goto label_489f44;
        case 0x489f48u: goto label_489f48;
        case 0x489f4cu: goto label_489f4c;
        case 0x489f50u: goto label_489f50;
        case 0x489f54u: goto label_489f54;
        case 0x489f58u: goto label_489f58;
        case 0x489f5cu: goto label_489f5c;
        default: break;
    }

    ctx->pc = 0x4894a0u;

label_4894a0:
    // 0x4894a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4894a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4894a4:
    // 0x4894a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4894a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4894a8:
    // 0x4894a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4894a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4894ac:
    // 0x4894ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4894acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4894b0:
    // 0x4894b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4894b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4894b4:
    // 0x4894b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4894b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4894b8:
    // 0x4894b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4894b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4894bc:
    // 0x4894bc: 0xc075a44  jal         func_1D6910
label_4894c0:
    if (ctx->pc == 0x4894C0u) {
        ctx->pc = 0x4894C0u;
            // 0x4894c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4894C4u;
        goto label_4894c4;
    }
    ctx->pc = 0x4894BCu;
    SET_GPR_U32(ctx, 31, 0x4894C4u);
    ctx->pc = 0x4894C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4894BCu;
            // 0x4894c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (runtime->hasFunction(0x1D6910u)) {
        auto targetFn = runtime->lookupFunction(0x1D6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4894C4u; }
        if (ctx->pc != 0x4894C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6910_0x1d6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4894C4u; }
        if (ctx->pc != 0x4894C4u) { return; }
    }
    ctx->pc = 0x4894C4u;
label_4894c4:
    // 0x4894c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4894c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4894c8:
    // 0x4894c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4894c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4894cc:
    // 0x4894cc: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x4894ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
label_4894d0:
    // 0x4894d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x4894d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_4894d4:
    // 0x4894d4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4894d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4894d8:
    // 0x4894d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4894d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4894dc:
    // 0x4894dc: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x4894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_4894e0:
    // 0x4894e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4894e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4894e4:
    // 0x4894e4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x4894e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_4894e8:
    // 0x4894e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4894e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4894ec:
    // 0x4894ec: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x4894ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_4894f0:
    // 0x4894f0: 0x2463f7c0  addiu       $v1, $v1, -0x840
    ctx->pc = 0x4894f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965184));
label_4894f4:
    // 0x4894f4: 0xae24006c  sw          $a0, 0x6C($s1)
    ctx->pc = 0x4894f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
label_4894f8:
    // 0x4894f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4894f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4894fc:
    // 0x4894fc: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x4894fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_489500:
    // 0x489500: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x489500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_489504:
    // 0x489504: 0xae250074  sw          $a1, 0x74($s1)
    ctx->pc = 0x489504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 5));
label_489508:
    // 0x489508: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x489508u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_48950c:
    // 0x48950c: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x48950cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_489510:
    // 0x489510: 0xc04cbd8  jal         func_132F60
label_489514:
    if (ctx->pc == 0x489514u) {
        ctx->pc = 0x489514u;
            // 0x489514: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x489518u;
        goto label_489518;
    }
    ctx->pc = 0x489510u;
    SET_GPR_U32(ctx, 31, 0x489518u);
    ctx->pc = 0x489514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489510u;
            // 0x489514: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489518u; }
        if (ctx->pc != 0x489518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489518u; }
        if (ctx->pc != 0x489518u) { return; }
    }
    ctx->pc = 0x489518u;
label_489518:
    // 0x489518: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x489518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_48951c:
    // 0x48951c: 0xc04cc04  jal         func_133010
label_489520:
    if (ctx->pc == 0x489520u) {
        ctx->pc = 0x489520u;
            // 0x489520: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x489524u;
        goto label_489524;
    }
    ctx->pc = 0x48951Cu;
    SET_GPR_U32(ctx, 31, 0x489524u);
    ctx->pc = 0x489520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48951Cu;
            // 0x489520: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489524u; }
        if (ctx->pc != 0x489524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489524u; }
        if (ctx->pc != 0x489524u) { return; }
    }
    ctx->pc = 0x489524u;
label_489524:
    // 0x489524: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x489524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_489528:
    // 0x489528: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x489528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_48952c:
    // 0x48952c: 0xc040180  jal         func_100600
label_489530:
    if (ctx->pc == 0x489530u) {
        ctx->pc = 0x489530u;
            // 0x489530: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x489534u;
        goto label_489534;
    }
    ctx->pc = 0x48952Cu;
    SET_GPR_U32(ctx, 31, 0x489534u);
    ctx->pc = 0x489530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48952Cu;
            // 0x489530: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489534u; }
        if (ctx->pc != 0x489534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489534u; }
        if (ctx->pc != 0x489534u) { return; }
    }
    ctx->pc = 0x489534u;
label_489534:
    // 0x489534: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_489538:
    if (ctx->pc == 0x489538u) {
        ctx->pc = 0x489538u;
            // 0x489538: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x48953Cu;
        goto label_48953c;
    }
    ctx->pc = 0x489534u;
    {
        const bool branch_taken_0x489534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489534) {
            ctx->pc = 0x489538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489534u;
            // 0x489538: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489558u;
            goto label_489558;
        }
    }
    ctx->pc = 0x48953Cu;
label_48953c:
    // 0x48953c: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x48953cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_489540:
    // 0x489540: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x489540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_489544:
    // 0x489544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x489544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_489548:
    // 0x489548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x489548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48954c:
    // 0x48954c: 0xc0c3f60  jal         func_30FD80
label_489550:
    if (ctx->pc == 0x489550u) {
        ctx->pc = 0x489550u;
            // 0x489550: 0x24c60960  addiu       $a2, $a2, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2400));
        ctx->pc = 0x489554u;
        goto label_489554;
    }
    ctx->pc = 0x48954Cu;
    SET_GPR_U32(ctx, 31, 0x489554u);
    ctx->pc = 0x489550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48954Cu;
            // 0x489550: 0x24c60960  addiu       $a2, $a2, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489554u; }
        if (ctx->pc != 0x489554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489554u; }
        if (ctx->pc != 0x489554u) { return; }
    }
    ctx->pc = 0x489554u;
label_489554:
    // 0x489554: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x489554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_489558:
    // 0x489558: 0xc040180  jal         func_100600
label_48955c:
    if (ctx->pc == 0x48955Cu) {
        ctx->pc = 0x48955Cu;
            // 0x48955c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x489560u;
        goto label_489560;
    }
    ctx->pc = 0x489558u;
    SET_GPR_U32(ctx, 31, 0x489560u);
    ctx->pc = 0x48955Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489558u;
            // 0x48955c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489560u; }
        if (ctx->pc != 0x489560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489560u; }
        if (ctx->pc != 0x489560u) { return; }
    }
    ctx->pc = 0x489560u;
label_489560:
    // 0x489560: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_489564:
    if (ctx->pc == 0x489564u) {
        ctx->pc = 0x489564u;
            // 0x489564: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x489568u;
        goto label_489568;
    }
    ctx->pc = 0x489560u;
    {
        const bool branch_taken_0x489560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489560) {
            ctx->pc = 0x489564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489560u;
            // 0x489564: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489584u;
            goto label_489584;
        }
    }
    ctx->pc = 0x489568u;
label_489568:
    // 0x489568: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x489568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_48956c:
    // 0x48956c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x48956cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_489570:
    // 0x489570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x489570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_489574:
    // 0x489574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x489574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_489578:
    // 0x489578: 0xc0c3f60  jal         func_30FD80
label_48957c:
    if (ctx->pc == 0x48957Cu) {
        ctx->pc = 0x48957Cu;
            // 0x48957c: 0x24c609a0  addiu       $a2, $a2, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2464));
        ctx->pc = 0x489580u;
        goto label_489580;
    }
    ctx->pc = 0x489578u;
    SET_GPR_U32(ctx, 31, 0x489580u);
    ctx->pc = 0x48957Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489578u;
            // 0x48957c: 0x24c609a0  addiu       $a2, $a2, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489580u; }
        if (ctx->pc != 0x489580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489580u; }
        if (ctx->pc != 0x489580u) { return; }
    }
    ctx->pc = 0x489580u;
label_489580:
    // 0x489580: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x489580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_489584:
    // 0x489584: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x489584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_489588:
    // 0x489588: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x489588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48958c:
    // 0x48958c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x48958cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489590:
    // 0x489590: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x489590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_489594:
    // 0x489594: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489594u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489598:
    // 0x489598: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x489598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_48959c:
    // 0x48959c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x48959cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4895a0:
    // 0x4895a0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x4895a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_4895a4:
    // 0x4895a4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4895a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4895a8:
    // 0x4895a8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x4895a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_4895ac:
    // 0x4895ac: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4895acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4895b0:
    // 0x4895b0: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x4895b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_4895b4:
    // 0x4895b4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4895b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4895b8:
    // 0x4895b8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x4895b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_4895bc:
    // 0x4895bc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4895bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4895c0:
    // 0x4895c0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x4895c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_4895c4:
    // 0x4895c4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4895c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4895c8:
    // 0x4895c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4895c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4895cc:
    // 0x4895cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4895ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4895d0:
    // 0x4895d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4895d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4895d4:
    // 0x4895d4: 0x3e00008  jr          $ra
label_4895d8:
    if (ctx->pc == 0x4895D8u) {
        ctx->pc = 0x4895D8u;
            // 0x4895d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4895DCu;
        goto label_4895dc;
    }
    ctx->pc = 0x4895D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4895D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4895D4u;
            // 0x4895d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4895DCu;
label_4895dc:
    // 0x4895dc: 0x0  nop
    ctx->pc = 0x4895dcu;
    // NOP
label_4895e0:
    // 0x4895e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4895e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4895e4:
    // 0x4895e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4895e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4895e8:
    // 0x4895e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4895e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4895ec:
    // 0x4895ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4895ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4895f0:
    // 0x4895f0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4895f4:
    if (ctx->pc == 0x4895F4u) {
        ctx->pc = 0x4895F4u;
            // 0x4895f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4895F8u;
        goto label_4895f8;
    }
    ctx->pc = 0x4895F0u;
    {
        const bool branch_taken_0x4895f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4895f0) {
            ctx->pc = 0x4895F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4895F0u;
            // 0x4895f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489630u;
            goto label_489630;
        }
    }
    ctx->pc = 0x4895F8u;
label_4895f8:
    // 0x4895f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4895f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4895fc:
    // 0x4895fc: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x4895fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
label_489600:
    // 0x489600: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_489604:
    if (ctx->pc == 0x489604u) {
        ctx->pc = 0x489604u;
            // 0x489604: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x489608u;
        goto label_489608;
    }
    ctx->pc = 0x489600u;
    {
        const bool branch_taken_0x489600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x489604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489600u;
            // 0x489604: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489600) {
            ctx->pc = 0x489614u;
            goto label_489614;
        }
    }
    ctx->pc = 0x489608u;
label_489608:
    // 0x489608: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x489608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_48960c:
    // 0x48960c: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x48960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_489610:
    // 0x489610: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x489610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_489614:
    // 0x489614: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x489614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_489618:
    // 0x489618: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x489618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48961c:
    // 0x48961c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_489620:
    if (ctx->pc == 0x489620u) {
        ctx->pc = 0x489624u;
        goto label_489624;
    }
    ctx->pc = 0x48961Cu;
    {
        const bool branch_taken_0x48961c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48961c) {
            ctx->pc = 0x48962Cu;
            goto label_48962c;
        }
    }
    ctx->pc = 0x489624u;
label_489624:
    // 0x489624: 0xc0400a8  jal         func_1002A0
label_489628:
    if (ctx->pc == 0x489628u) {
        ctx->pc = 0x489628u;
            // 0x489628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48962Cu;
        goto label_48962c;
    }
    ctx->pc = 0x489624u;
    SET_GPR_U32(ctx, 31, 0x48962Cu);
    ctx->pc = 0x489628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489624u;
            // 0x489628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48962Cu; }
        if (ctx->pc != 0x48962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48962Cu; }
        if (ctx->pc != 0x48962Cu) { return; }
    }
    ctx->pc = 0x48962Cu;
label_48962c:
    // 0x48962c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48962cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_489630:
    // 0x489630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x489630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_489634:
    // 0x489634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_489638:
    // 0x489638: 0x3e00008  jr          $ra
label_48963c:
    if (ctx->pc == 0x48963Cu) {
        ctx->pc = 0x48963Cu;
            // 0x48963c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x489640u;
        goto label_489640;
    }
    ctx->pc = 0x489638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489638u;
            // 0x48963c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489640u;
label_489640:
    // 0x489640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_489644:
    // 0x489644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x489644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_489648:
    // 0x489648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x489648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48964c:
    // 0x48964c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_489650:
    // 0x489650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x489650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_489654:
    // 0x489654: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_489658:
    if (ctx->pc == 0x489658u) {
        ctx->pc = 0x489658u;
            // 0x489658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48965Cu;
        goto label_48965c;
    }
    ctx->pc = 0x489654u;
    {
        const bool branch_taken_0x489654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x489658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489654u;
            // 0x489658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489654) {
            ctx->pc = 0x4896B4u;
            goto label_4896b4;
        }
    }
    ctx->pc = 0x48965Cu;
label_48965c:
    // 0x48965c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_489660:
    // 0x489660: 0x2442f7c0  addiu       $v0, $v0, -0x840
    ctx->pc = 0x489660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965184));
label_489664:
    // 0x489664: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x489664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_489668:
    // 0x489668: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x489668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_48966c:
    // 0x48966c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x48966cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_489670:
    // 0x489670: 0x320f809  jalr        $t9
label_489674:
    if (ctx->pc == 0x489674u) {
        ctx->pc = 0x489678u;
        goto label_489678;
    }
    ctx->pc = 0x489670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x489678u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x489678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x489678u; }
            if (ctx->pc != 0x489678u) { return; }
        }
        }
    }
    ctx->pc = 0x489678u;
label_489678:
    // 0x489678: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_48967c:
    if (ctx->pc == 0x48967Cu) {
        ctx->pc = 0x48967Cu;
            // 0x48967c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x489680u;
        goto label_489680;
    }
    ctx->pc = 0x489678u;
    {
        const bool branch_taken_0x489678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x489678) {
            ctx->pc = 0x48967Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489678u;
            // 0x48967c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4896A0u;
            goto label_4896a0;
        }
    }
    ctx->pc = 0x489680u;
label_489680:
    // 0x489680: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x489680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_489684:
    // 0x489684: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x489684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
label_489688:
    // 0x489688: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_48968c:
    if (ctx->pc == 0x48968Cu) {
        ctx->pc = 0x48968Cu;
            // 0x48968c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x489690u;
        goto label_489690;
    }
    ctx->pc = 0x489688u;
    {
        const bool branch_taken_0x489688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48968Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489688u;
            // 0x48968c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489688) {
            ctx->pc = 0x48969Cu;
            goto label_48969c;
        }
    }
    ctx->pc = 0x489690u;
label_489690:
    // 0x489690: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x489690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_489694:
    // 0x489694: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x489694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_489698:
    // 0x489698: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x489698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_48969c:
    // 0x48969c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x48969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4896a0:
    // 0x4896a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4896a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4896a4:
    // 0x4896a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4896a8:
    if (ctx->pc == 0x4896A8u) {
        ctx->pc = 0x4896A8u;
            // 0x4896a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4896ACu;
        goto label_4896ac;
    }
    ctx->pc = 0x4896A4u;
    {
        const bool branch_taken_0x4896a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4896a4) {
            ctx->pc = 0x4896A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4896A4u;
            // 0x4896a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4896B8u;
            goto label_4896b8;
        }
    }
    ctx->pc = 0x4896ACu;
label_4896ac:
    // 0x4896ac: 0xc0400a8  jal         func_1002A0
label_4896b0:
    if (ctx->pc == 0x4896B0u) {
        ctx->pc = 0x4896B0u;
            // 0x4896b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4896B4u;
        goto label_4896b4;
    }
    ctx->pc = 0x4896ACu;
    SET_GPR_U32(ctx, 31, 0x4896B4u);
    ctx->pc = 0x4896B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4896ACu;
            // 0x4896b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4896B4u; }
        if (ctx->pc != 0x4896B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4896B4u; }
        if (ctx->pc != 0x4896B4u) { return; }
    }
    ctx->pc = 0x4896B4u;
label_4896b4:
    // 0x4896b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4896b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4896b8:
    // 0x4896b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4896b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4896bc:
    // 0x4896bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4896bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4896c0:
    // 0x4896c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4896c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4896c4:
    // 0x4896c4: 0x3e00008  jr          $ra
label_4896c8:
    if (ctx->pc == 0x4896C8u) {
        ctx->pc = 0x4896C8u;
            // 0x4896c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4896CCu;
        goto label_4896cc;
    }
    ctx->pc = 0x4896C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4896C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4896C4u;
            // 0x4896c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4896CCu;
label_4896cc:
    // 0x4896cc: 0x0  nop
    ctx->pc = 0x4896ccu;
    // NOP
label_4896d0:
    // 0x4896d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4896d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4896d4:
    // 0x4896d4: 0x3e00008  jr          $ra
label_4896d8:
    if (ctx->pc == 0x4896D8u) {
        ctx->pc = 0x4896D8u;
            // 0x4896d8: 0xc4405680  lwc1        $f0, 0x5680($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4896DCu;
        goto label_4896dc;
    }
    ctx->pc = 0x4896D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4896D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4896D4u;
            // 0x4896d8: 0xc4405680  lwc1        $f0, 0x5680($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4896DCu;
label_4896dc:
    // 0x4896dc: 0x0  nop
    ctx->pc = 0x4896dcu;
    // NOP
label_4896e0:
    // 0x4896e0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4896e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4896e4:
    // 0x4896e4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x4896e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4896e8:
    // 0x4896e8: 0xc4405680  lwc1        $f0, 0x5680($v0)
    ctx->pc = 0x4896e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4896ec:
    // 0x4896ec: 0x3e00008  jr          $ra
label_4896f0:
    if (ctx->pc == 0x4896F0u) {
        ctx->pc = 0x4896F0u;
            // 0x4896f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4896F4u;
        goto label_4896f4;
    }
    ctx->pc = 0x4896ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4896F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4896ECu;
            // 0x4896f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4896F4u;
label_4896f4:
    // 0x4896f4: 0x0  nop
    ctx->pc = 0x4896f4u;
    // NOP
label_4896f8:
    // 0x4896f8: 0x0  nop
    ctx->pc = 0x4896f8u;
    // NOP
label_4896fc:
    // 0x4896fc: 0x0  nop
    ctx->pc = 0x4896fcu;
    // NOP
label_489700:
    // 0x489700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x489700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_489704:
    // 0x489704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x489704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_489708:
    // 0x489708: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x489708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_48970c:
    // 0x48970c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_489710:
    // 0x489710: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x489710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_489714:
    // 0x489714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x489714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_489718:
    // 0x489718: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x489718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_48971c:
    // 0x48971c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x48971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_489720:
    // 0x489720: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x489720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_489724:
    // 0x489724: 0x2484fa38  addiu       $a0, $a0, -0x5C8
    ctx->pc = 0x489724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965816));
label_489728:
    // 0x489728: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x489728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48972c:
    // 0x48972c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x48972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_489730:
    // 0x489730: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x489730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_489734:
    // 0x489734: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x489734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_489738:
    // 0x489738: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x489738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_48973c:
    // 0x48973c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x48973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_489740:
    // 0x489740: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x489740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_489744:
    // 0x489744: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x489744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_489748:
    // 0x489748: 0xc075128  jal         func_1D44A0
label_48974c:
    if (ctx->pc == 0x48974Cu) {
        ctx->pc = 0x48974Cu;
            // 0x48974c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x489750u;
        goto label_489750;
    }
    ctx->pc = 0x489748u;
    SET_GPR_U32(ctx, 31, 0x489750u);
    ctx->pc = 0x48974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489748u;
            // 0x48974c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489750u; }
        if (ctx->pc != 0x489750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489750u; }
        if (ctx->pc != 0x489750u) { return; }
    }
    ctx->pc = 0x489750u;
label_489750:
    // 0x489750: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x489750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_489754:
    // 0x489754: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_489758:
    // 0x489758: 0x8c65fa38  lw          $a1, -0x5C8($v1)
    ctx->pc = 0x489758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965816)));
label_48975c:
    // 0x48975c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x48975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_489760:
    // 0x489760: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x489760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_489764:
    // 0x489764: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x489764u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_489768:
    // 0x489768: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_48976c:
    if (ctx->pc == 0x48976Cu) {
        ctx->pc = 0x489770u;
        goto label_489770;
    }
    ctx->pc = 0x489768u;
    {
        const bool branch_taken_0x489768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489768) {
            ctx->pc = 0x489778u;
            goto label_489778;
        }
    }
    ctx->pc = 0x489770u;
label_489770:
    // 0x489770: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_489774:
    // 0x489774: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x489774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_489778:
    // 0x489778: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48977c:
    // 0x48977c: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x48977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_489780:
    // 0x489780: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x489780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_489784:
    // 0x489784: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x489784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_489788:
    // 0x489788: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_48978c:
    if (ctx->pc == 0x48978Cu) {
        ctx->pc = 0x48978Cu;
            // 0x48978c: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x489790u;
        goto label_489790;
    }
    ctx->pc = 0x489788u;
    {
        const bool branch_taken_0x489788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x48978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489788u;
            // 0x48978c: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489788) {
            ctx->pc = 0x489798u;
            goto label_489798;
        }
    }
    ctx->pc = 0x489790u;
label_489790:
    // 0x489790: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_489794:
    // 0x489794: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x489794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_489798:
    // 0x489798: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48979c:
    // 0x48979c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4897a0:
    // 0x4897a0: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4897a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4897a4:
    // 0x4897a4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4897a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4897a8:
    // 0x4897a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4897ac:
    if (ctx->pc == 0x4897ACu) {
        ctx->pc = 0x4897B0u;
        goto label_4897b0;
    }
    ctx->pc = 0x4897A8u;
    {
        const bool branch_taken_0x4897a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4897a8) {
            ctx->pc = 0x4897B8u;
            goto label_4897b8;
        }
    }
    ctx->pc = 0x4897B0u;
label_4897b0:
    // 0x4897b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4897b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4897b4:
    // 0x4897b4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4897b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4897b8:
    // 0x4897b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4897b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4897bc:
    // 0x4897bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4897bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4897c0:
    // 0x4897c0: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x4897c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_4897c4:
    // 0x4897c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4897c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4897c8:
    // 0x4897c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4897cc:
    if (ctx->pc == 0x4897CCu) {
        ctx->pc = 0x4897D0u;
        goto label_4897d0;
    }
    ctx->pc = 0x4897C8u;
    {
        const bool branch_taken_0x4897c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4897c8) {
            ctx->pc = 0x4897D8u;
            goto label_4897d8;
        }
    }
    ctx->pc = 0x4897D0u;
label_4897d0:
    // 0x4897d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4897d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4897d4:
    // 0x4897d4: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x4897d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_4897d8:
    // 0x4897d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4897d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4897dc:
    // 0x4897dc: 0x8c42f5b8  lw          $v0, -0xA48($v0)
    ctx->pc = 0x4897dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964664)));
label_4897e0:
    // 0x4897e0: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_4897e4:
    if (ctx->pc == 0x4897E4u) {
        ctx->pc = 0x4897E4u;
            // 0x4897e4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x4897E8u;
        goto label_4897e8;
    }
    ctx->pc = 0x4897E0u;
    {
        const bool branch_taken_0x4897e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4897e0) {
            ctx->pc = 0x4897E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4897E0u;
            // 0x4897e4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4898C4u;
            goto label_4898c4;
        }
    }
    ctx->pc = 0x4897E8u;
label_4897e8:
    // 0x4897e8: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x4897e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4897ec:
    // 0x4897ec: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4897ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4897f0:
    // 0x4897f0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4897f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4897f4:
    // 0x4897f4: 0x2484f5b8  addiu       $a0, $a0, -0xA48
    ctx->pc = 0x4897f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964664));
label_4897f8:
    // 0x4897f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4897f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4897fc:
    // 0x4897fc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4897fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_489800:
    // 0x489800: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x489800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_489804:
    // 0x489804: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x489804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_489808:
    // 0x489808: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x489808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_48980c:
    // 0x48980c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x48980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_489810:
    // 0x489810: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x489810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_489814:
    // 0x489814: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x489814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_489818:
    // 0x489818: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x489818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48981c:
    // 0x48981c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x48981cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_489820:
    // 0x489820: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x489820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_489824:
    // 0x489824: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x489824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_489828:
    // 0x489828: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x489828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_48982c:
    // 0x48982c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x48982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_489830:
    // 0x489830: 0xc075128  jal         func_1D44A0
label_489834:
    if (ctx->pc == 0x489834u) {
        ctx->pc = 0x489834u;
            // 0x489834: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x489838u;
        goto label_489838;
    }
    ctx->pc = 0x489830u;
    SET_GPR_U32(ctx, 31, 0x489838u);
    ctx->pc = 0x489834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489830u;
            // 0x489834: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489838u; }
        if (ctx->pc != 0x489838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489838u; }
        if (ctx->pc != 0x489838u) { return; }
    }
    ctx->pc = 0x489838u;
label_489838:
    // 0x489838: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x489838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_48983c:
    // 0x48983c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_489840:
    // 0x489840: 0x8c65f5b8  lw          $a1, -0xA48($v1)
    ctx->pc = 0x489840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964664)));
label_489844:
    // 0x489844: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x489844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_489848:
    // 0x489848: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x489848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_48984c:
    // 0x48984c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x48984cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_489850:
    // 0x489850: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_489854:
    if (ctx->pc == 0x489854u) {
        ctx->pc = 0x489858u;
        goto label_489858;
    }
    ctx->pc = 0x489850u;
    {
        const bool branch_taken_0x489850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489850) {
            ctx->pc = 0x489860u;
            goto label_489860;
        }
    }
    ctx->pc = 0x489858u;
label_489858:
    // 0x489858: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48985c:
    // 0x48985c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x48985cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_489860:
    // 0x489860: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_489864:
    // 0x489864: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x489864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_489868:
    // 0x489868: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x489868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_48986c:
    // 0x48986c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x48986cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_489870:
    // 0x489870: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_489874:
    if (ctx->pc == 0x489874u) {
        ctx->pc = 0x489874u;
            // 0x489874: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x489878u;
        goto label_489878;
    }
    ctx->pc = 0x489870u;
    {
        const bool branch_taken_0x489870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x489874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489870u;
            // 0x489874: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489870) {
            ctx->pc = 0x489880u;
            goto label_489880;
        }
    }
    ctx->pc = 0x489878u;
label_489878:
    // 0x489878: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48987c:
    // 0x48987c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x48987cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_489880:
    // 0x489880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_489884:
    // 0x489884: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x489884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_489888:
    // 0x489888: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x489888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_48988c:
    // 0x48988c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x48988cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_489890:
    // 0x489890: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_489894:
    if (ctx->pc == 0x489894u) {
        ctx->pc = 0x489898u;
        goto label_489898;
    }
    ctx->pc = 0x489890u;
    {
        const bool branch_taken_0x489890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489890) {
            ctx->pc = 0x4898A0u;
            goto label_4898a0;
        }
    }
    ctx->pc = 0x489898u;
label_489898:
    // 0x489898: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48989c:
    // 0x48989c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x48989cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4898a0:
    // 0x4898a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4898a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4898a4:
    // 0x4898a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4898a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4898a8:
    // 0x4898a8: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x4898a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_4898ac:
    // 0x4898ac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4898acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4898b0:
    // 0x4898b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4898b4:
    if (ctx->pc == 0x4898B4u) {
        ctx->pc = 0x4898B8u;
        goto label_4898b8;
    }
    ctx->pc = 0x4898B0u;
    {
        const bool branch_taken_0x4898b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4898b0) {
            ctx->pc = 0x4898C0u;
            goto label_4898c0;
        }
    }
    ctx->pc = 0x4898B8u;
label_4898b8:
    // 0x4898b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4898b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4898bc:
    // 0x4898bc: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x4898bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_4898c0:
    // 0x4898c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4898c4:
    // 0x4898c4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4898c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4898c8:
    // 0x4898c8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4898cc:
    // 0x4898cc: 0x2484fa78  addiu       $a0, $a0, -0x588
    ctx->pc = 0x4898ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965880));
label_4898d0:
    // 0x4898d0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4898d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4898d4:
    // 0x4898d4: 0xc074ea0  jal         func_1D3A80
label_4898d8:
    if (ctx->pc == 0x4898D8u) {
        ctx->pc = 0x4898D8u;
            // 0x4898d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4898DCu;
        goto label_4898dc;
    }
    ctx->pc = 0x4898D4u;
    SET_GPR_U32(ctx, 31, 0x4898DCu);
    ctx->pc = 0x4898D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4898D4u;
            // 0x4898d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4898DCu; }
        if (ctx->pc != 0x4898DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4898DCu; }
        if (ctx->pc != 0x4898DCu) { return; }
    }
    ctx->pc = 0x4898DCu;
label_4898dc:
    // 0x4898dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4898dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4898e0:
    // 0x4898e0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4898e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4898e4:
    // 0x4898e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x4898e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4898e8:
    // 0x4898e8: 0x2484fa7c  addiu       $a0, $a0, -0x584
    ctx->pc = 0x4898e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965884));
label_4898ec:
    // 0x4898ec: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x4898ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4898f0:
    // 0x4898f0: 0xc074ea0  jal         func_1D3A80
label_4898f4:
    if (ctx->pc == 0x4898F4u) {
        ctx->pc = 0x4898F4u;
            // 0x4898f4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4898F8u;
        goto label_4898f8;
    }
    ctx->pc = 0x4898F0u;
    SET_GPR_U32(ctx, 31, 0x4898F8u);
    ctx->pc = 0x4898F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4898F0u;
            // 0x4898f4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4898F8u; }
        if (ctx->pc != 0x4898F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4898F8u; }
        if (ctx->pc != 0x4898F8u) { return; }
    }
    ctx->pc = 0x4898F8u;
label_4898f8:
    // 0x4898f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4898f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4898fc:
    // 0x4898fc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4898fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_489900:
    // 0x489900: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x489900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_489904:
    // 0x489904: 0x2484fa60  addiu       $a0, $a0, -0x5A0
    ctx->pc = 0x489904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965856));
label_489908:
    // 0x489908: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x489908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_48990c:
    // 0x48990c: 0xc074ea0  jal         func_1D3A80
label_489910:
    if (ctx->pc == 0x489910u) {
        ctx->pc = 0x489910u;
            // 0x489910: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x489914u;
        goto label_489914;
    }
    ctx->pc = 0x48990Cu;
    SET_GPR_U32(ctx, 31, 0x489914u);
    ctx->pc = 0x489910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48990Cu;
            // 0x489910: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489914u; }
        if (ctx->pc != 0x489914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489914u; }
        if (ctx->pc != 0x489914u) { return; }
    }
    ctx->pc = 0x489914u;
label_489914:
    // 0x489914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x489914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_489918:
    // 0x489918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48991c:
    // 0x48991c: 0x3e00008  jr          $ra
label_489920:
    if (ctx->pc == 0x489920u) {
        ctx->pc = 0x489920u;
            // 0x489920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x489924u;
        goto label_489924;
    }
    ctx->pc = 0x48991Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48991Cu;
            // 0x489920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489924u;
label_489924:
    // 0x489924: 0x0  nop
    ctx->pc = 0x489924u;
    // NOP
label_489928:
    // 0x489928: 0x0  nop
    ctx->pc = 0x489928u;
    // NOP
label_48992c:
    // 0x48992c: 0x0  nop
    ctx->pc = 0x48992cu;
    // NOP
label_489930:
    // 0x489930: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x489930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_489934:
    // 0x489934: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x489934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_489938:
    // 0x489938: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x489938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_48993c:
    // 0x48993c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x48993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_489940:
    // 0x489940: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x489940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_489944:
    // 0x489944: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x489944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_489948:
    // 0x489948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x489948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_48994c:
    // 0x48994c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_489950:
    // 0x489950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x489950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_489954:
    // 0x489954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x489954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_489958:
    // 0x489958: 0xc075740  jal         func_1D5D00
label_48995c:
    if (ctx->pc == 0x48995Cu) {
        ctx->pc = 0x48995Cu;
            // 0x48995c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x489960u;
        goto label_489960;
    }
    ctx->pc = 0x489958u;
    SET_GPR_U32(ctx, 31, 0x489960u);
    ctx->pc = 0x48995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489958u;
            // 0x48995c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489960u; }
        if (ctx->pc != 0x489960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489960u; }
        if (ctx->pc != 0x489960u) { return; }
    }
    ctx->pc = 0x489960u;
label_489960:
    // 0x489960: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x489960u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_489964:
    // 0x489964: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x489964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_489968:
    // 0x489968: 0x8e250db0  lw          $a1, 0xDB0($s1)
    ctx->pc = 0x489968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_48996c:
    // 0x48996c: 0x14a4006a  bne         $a1, $a0, . + 4 + (0x6A << 2)
label_489970:
    if (ctx->pc == 0x489970u) {
        ctx->pc = 0x489970u;
            // 0x489970: 0x8e230550  lw          $v1, 0x550($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
        ctx->pc = 0x489974u;
        goto label_489974;
    }
    ctx->pc = 0x48996Cu;
    {
        const bool branch_taken_0x48996c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x489970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48996Cu;
            // 0x489970: 0x8e230550  lw          $v1, 0x550($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48996c) {
            ctx->pc = 0x489B18u;
            goto label_489b18;
        }
    }
    ctx->pc = 0x489974u;
label_489974:
    // 0x489974: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x489974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_489978:
    // 0x489978: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x489978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_48997c:
    // 0x48997c: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x48997cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_489980:
    // 0x489980: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x489980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_489984:
    // 0x489984: 0x8c95e378  lw          $s5, -0x1C88($a0)
    ctx->pc = 0x489984u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_489988:
    // 0x489988: 0x2610fa38  addiu       $s0, $s0, -0x5C8
    ctx->pc = 0x489988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
label_48998c:
    // 0x48998c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48998cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489990:
    // 0x489990: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x489990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_489994:
    // 0x489994: 0x8c46d130  lw          $a2, -0x2ED0($v0)
    ctx->pc = 0x489994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_489998:
    // 0x489998: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x489998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_48999c:
    // 0x48999c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x48999cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4899a0:
    // 0x4899a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4899a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4899a4:
    // 0x4899a4: 0x8cc90130  lw          $t1, 0x130($a2)
    ctx->pc = 0x4899a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_4899a8:
    // 0x4899a8: 0x8c45d120  lw          $a1, -0x2EE0($v0)
    ctx->pc = 0x4899a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4899ac:
    // 0x4899ac: 0x8c86fa7c  lw          $a2, -0x584($a0)
    ctx->pc = 0x4899acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965884)));
label_4899b0:
    // 0x4899b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4899b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4899b4:
    // 0x4899b4: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x4899b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4899b8:
    // 0x4899b8: 0x8c47fa78  lw          $a3, -0x588($v0)
    ctx->pc = 0x4899b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965880)));
label_4899bc:
    // 0x4899bc: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x4899bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4899c0:
    // 0x4899c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4899c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4899c4:
    // 0x4899c4: 0x8c45fa18  lw          $a1, -0x5E8($v0)
    ctx->pc = 0x4899c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
label_4899c8:
    // 0x4899c8: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x4899c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4899cc:
    // 0x4899cc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x4899ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4899d0:
    // 0x4899d0: 0x8064010f  lb          $a0, 0x10F($v1)
    ctx->pc = 0x4899d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_4899d4:
    // 0x4899d4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x4899d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4899d8:
    // 0x4899d8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_4899dc:
    if (ctx->pc == 0x4899DCu) {
        ctx->pc = 0x4899DCu;
            // 0x4899dc: 0x25160010  addiu       $s6, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->pc = 0x4899E0u;
        goto label_4899e0;
    }
    ctx->pc = 0x4899D8u;
    {
        const bool branch_taken_0x4899d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4899DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4899D8u;
            // 0x4899dc: 0x25160010  addiu       $s6, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4899d8) {
            ctx->pc = 0x4899F0u;
            goto label_4899f0;
        }
    }
    ctx->pc = 0x4899E0u;
label_4899e0:
    // 0x4899e0: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4899e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_4899e4:
    // 0x4899e4: 0xc474003c  lwc1        $f20, 0x3C($v1)
    ctx->pc = 0x4899e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4899e8:
    // 0x4899e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_4899ec:
    if (ctx->pc == 0x4899ECu) {
        ctx->pc = 0x4899ECu;
            // 0x4899ec: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4899F0u;
        goto label_4899f0;
    }
    ctx->pc = 0x4899E8u;
    {
        const bool branch_taken_0x4899e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4899ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4899E8u;
            // 0x4899ec: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4899e8) {
            ctx->pc = 0x489A28u;
            goto label_489a28;
        }
    }
    ctx->pc = 0x4899F0u;
label_4899f0:
    // 0x4899f0: 0x2482fff1  addiu       $v0, $a0, -0xF
    ctx->pc = 0x4899f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967281));
label_4899f4:
    // 0x4899f4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x4899f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4899f8:
    // 0x4899f8: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_4899fc:
    if (ctx->pc == 0x4899FCu) {
        ctx->pc = 0x4899FCu;
            // 0x4899fc: 0x2482fff3  addiu       $v0, $a0, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
        ctx->pc = 0x489A00u;
        goto label_489a00;
    }
    ctx->pc = 0x4899F8u;
    {
        const bool branch_taken_0x4899f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4899f8) {
            ctx->pc = 0x4899FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4899F8u;
            // 0x4899fc: 0x2482fff3  addiu       $v0, $a0, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489A10u;
            goto label_489a10;
        }
    }
    ctx->pc = 0x489A00u;
label_489a00:
    // 0x489a00: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x489a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_489a04:
    // 0x489a04: 0xc474003c  lwc1        $f20, 0x3C($v1)
    ctx->pc = 0x489a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_489a08:
    // 0x489a08: 0x10000007  b           . + 4 + (0x7 << 2)
label_489a0c:
    if (ctx->pc == 0x489A0Cu) {
        ctx->pc = 0x489A0Cu;
            // 0x489a0c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489A10u;
        goto label_489a10;
    }
    ctx->pc = 0x489A08u;
    {
        const bool branch_taken_0x489a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489A08u;
            // 0x489a0c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489a08) {
            ctx->pc = 0x489A28u;
            goto label_489a28;
        }
    }
    ctx->pc = 0x489A10u;
label_489a10:
    // 0x489a10: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x489a10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_489a14:
    // 0x489a14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_489a18:
    if (ctx->pc == 0x489A18u) {
        ctx->pc = 0x489A18u;
            // 0x489a18: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x489A1Cu;
        goto label_489a1c;
    }
    ctx->pc = 0x489A14u;
    {
        const bool branch_taken_0x489a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489a14) {
            ctx->pc = 0x489A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489A14u;
            // 0x489a18: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489A28u;
            goto label_489a28;
        }
    }
    ctx->pc = 0x489A1Cu;
label_489a1c:
    // 0x489a1c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x489a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_489a20:
    // 0x489a20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x489a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_489a24:
    // 0x489a24: 0xc474003c  lwc1        $f20, 0x3C($v1)
    ctx->pc = 0x489a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_489a28:
    // 0x489a28: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x489a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_489a2c:
    // 0x489a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x489a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_489a30:
    // 0x489a30: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x489a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_489a34:
    // 0x489a34: 0x320f809  jalr        $t9
label_489a38:
    if (ctx->pc == 0x489A38u) {
        ctx->pc = 0x489A38u;
            // 0x489a38: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x489A3Cu;
        goto label_489a3c;
    }
    ctx->pc = 0x489A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x489A3Cu);
        ctx->pc = 0x489A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489A34u;
            // 0x489a38: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x489A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x489A3Cu; }
            if (ctx->pc != 0x489A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x489A3Cu;
label_489a3c:
    // 0x489a3c: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x489a3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
label_489a40:
    // 0x489a40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x489a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_489a44:
    // 0x489a44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x489a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_489a48:
    // 0x489a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x489a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489a4c:
    // 0x489a4c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x489a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_489a50:
    // 0x489a50: 0xc04e4a4  jal         func_139290
label_489a54:
    if (ctx->pc == 0x489A54u) {
        ctx->pc = 0x489A54u;
            // 0x489a54: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->pc = 0x489A58u;
        goto label_489a58;
    }
    ctx->pc = 0x489A50u;
    SET_GPR_U32(ctx, 31, 0x489A58u);
    ctx->pc = 0x489A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489A50u;
            // 0x489a54: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489A58u; }
        if (ctx->pc != 0x489A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489A58u; }
        if (ctx->pc != 0x489A58u) { return; }
    }
    ctx->pc = 0x489A58u;
label_489a58:
    // 0x489a58: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x489a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_489a5c:
    // 0x489a5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x489a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_489a60:
    // 0x489a60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x489a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_489a64:
    // 0x489a64: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x489a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_489a68:
    // 0x489a68: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x489a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_489a6c:
    // 0x489a6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x489a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_489a70:
    // 0x489a70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x489a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_489a74:
    // 0x489a74: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x489a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_489a78:
    // 0x489a78: 0xc0517b0  jal         func_145EC0
label_489a7c:
    if (ctx->pc == 0x489A7Cu) {
        ctx->pc = 0x489A7Cu;
            // 0x489a7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489A80u;
        goto label_489a80;
    }
    ctx->pc = 0x489A78u;
    SET_GPR_U32(ctx, 31, 0x489A80u);
    ctx->pc = 0x489A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489A78u;
            // 0x489a7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489A80u; }
        if (ctx->pc != 0x489A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489A80u; }
        if (ctx->pc != 0x489A80u) { return; }
    }
    ctx->pc = 0x489A80u;
label_489a80:
    // 0x489a80: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x489a80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_489a84:
    // 0x489a84: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x489a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_489a88:
    // 0x489a88: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x489a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_489a8c:
    // 0x489a8c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x489a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_489a90:
    // 0x489a90: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x489a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_489a94:
    // 0x489a94: 0xc04cd60  jal         func_133580
label_489a98:
    if (ctx->pc == 0x489A98u) {
        ctx->pc = 0x489A98u;
            // 0x489a98: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x489A9Cu;
        goto label_489a9c;
    }
    ctx->pc = 0x489A94u;
    SET_GPR_U32(ctx, 31, 0x489A9Cu);
    ctx->pc = 0x489A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489A94u;
            // 0x489a98: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489A9Cu; }
        if (ctx->pc != 0x489A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489A9Cu; }
        if (ctx->pc != 0x489A9Cu) { return; }
    }
    ctx->pc = 0x489A9Cu;
label_489a9c:
    // 0x489a9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x489a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_489aa0:
    // 0x489aa0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x489aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_489aa4:
    // 0x489aa4: 0xc04cd60  jal         func_133580
label_489aa8:
    if (ctx->pc == 0x489AA8u) {
        ctx->pc = 0x489AA8u;
            // 0x489aa8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489AACu;
        goto label_489aac;
    }
    ctx->pc = 0x489AA4u;
    SET_GPR_U32(ctx, 31, 0x489AACu);
    ctx->pc = 0x489AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489AA4u;
            // 0x489aa8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489AACu; }
        if (ctx->pc != 0x489AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489AACu; }
        if (ctx->pc != 0x489AACu) { return; }
    }
    ctx->pc = 0x489AACu;
label_489aac:
    // 0x489aac: 0x5660000b  bnel        $s3, $zero, . + 4 + (0xB << 2)
label_489ab0:
    if (ctx->pc == 0x489AB0u) {
        ctx->pc = 0x489AB0u;
            // 0x489ab0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x489AB4u;
        goto label_489ab4;
    }
    ctx->pc = 0x489AACu;
    {
        const bool branch_taken_0x489aac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x489aac) {
            ctx->pc = 0x489AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489AACu;
            // 0x489ab0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489ADCu;
            goto label_489adc;
        }
    }
    ctx->pc = 0x489AB4u;
label_489ab4:
    // 0x489ab4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x489ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_489ab8:
    // 0x489ab8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x489ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_489abc:
    // 0x489abc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x489abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_489ac0:
    // 0x489ac0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x489ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_489ac4:
    // 0x489ac4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x489ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_489ac8:
    // 0x489ac8: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x489ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_489acc:
    // 0x489acc: 0xc04cfcc  jal         func_133F30
label_489ad0:
    if (ctx->pc == 0x489AD0u) {
        ctx->pc = 0x489AD0u;
            // 0x489ad0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489AD4u;
        goto label_489ad4;
    }
    ctx->pc = 0x489ACCu;
    SET_GPR_U32(ctx, 31, 0x489AD4u);
    ctx->pc = 0x489AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489ACCu;
            // 0x489ad0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489AD4u; }
        if (ctx->pc != 0x489AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489AD4u; }
        if (ctx->pc != 0x489AD4u) { return; }
    }
    ctx->pc = 0x489AD4u;
label_489ad4:
    // 0x489ad4: 0x1000000b  b           . + 4 + (0xB << 2)
label_489ad8:
    if (ctx->pc == 0x489AD8u) {
        ctx->pc = 0x489AD8u;
            // 0x489ad8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x489ADCu;
        goto label_489adc;
    }
    ctx->pc = 0x489AD4u;
    {
        const bool branch_taken_0x489ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489AD4u;
            // 0x489ad8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489ad4) {
            ctx->pc = 0x489B04u;
            goto label_489b04;
        }
    }
    ctx->pc = 0x489ADCu;
label_489adc:
    // 0x489adc: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x489adcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_489ae0:
    // 0x489ae0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x489ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_489ae4:
    // 0x489ae4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x489ae4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_489ae8:
    // 0x489ae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x489ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_489aec:
    // 0x489aec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x489aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_489af0:
    // 0x489af0: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x489af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_489af4:
    // 0x489af4: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x489af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_489af8:
    // 0x489af8: 0xc04cff4  jal         func_133FD0
label_489afc:
    if (ctx->pc == 0x489AFCu) {
        ctx->pc = 0x489AFCu;
            // 0x489afc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489B00u;
        goto label_489b00;
    }
    ctx->pc = 0x489AF8u;
    SET_GPR_U32(ctx, 31, 0x489B00u);
    ctx->pc = 0x489AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489AF8u;
            // 0x489afc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489B00u; }
        if (ctx->pc != 0x489B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489B00u; }
        if (ctx->pc != 0x489B00u) { return; }
    }
    ctx->pc = 0x489B00u;
label_489b00:
    // 0x489b00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x489b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_489b04:
    // 0x489b04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x489b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_489b08:
    // 0x489b08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x489b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_489b0c:
    // 0x489b0c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x489b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_489b10:
    // 0x489b10: 0xc050044  jal         func_140110
label_489b14:
    if (ctx->pc == 0x489B14u) {
        ctx->pc = 0x489B14u;
            // 0x489b14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489B18u;
        goto label_489b18;
    }
    ctx->pc = 0x489B10u;
    SET_GPR_U32(ctx, 31, 0x489B18u);
    ctx->pc = 0x489B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489B10u;
            // 0x489b14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489B18u; }
        if (ctx->pc != 0x489B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489B18u; }
        if (ctx->pc != 0x489B18u) { return; }
    }
    ctx->pc = 0x489B18u;
label_489b18:
    // 0x489b18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x489b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_489b1c:
    // 0x489b1c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x489b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_489b20:
    // 0x489b20: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x489b20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_489b24:
    // 0x489b24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x489b24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_489b28:
    // 0x489b28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x489b28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_489b2c:
    // 0x489b2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x489b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_489b30:
    // 0x489b30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x489b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489b34:
    // 0x489b34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x489b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_489b38:
    // 0x489b38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x489b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_489b3c:
    // 0x489b3c: 0x3e00008  jr          $ra
label_489b40:
    if (ctx->pc == 0x489B40u) {
        ctx->pc = 0x489B40u;
            // 0x489b40: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x489B44u;
        goto label_489b44;
    }
    ctx->pc = 0x489B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489B3Cu;
            // 0x489b40: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489B44u;
label_489b44:
    // 0x489b44: 0x0  nop
    ctx->pc = 0x489b44u;
    // NOP
label_489b48:
    // 0x489b48: 0x0  nop
    ctx->pc = 0x489b48u;
    // NOP
label_489b4c:
    // 0x489b4c: 0x0  nop
    ctx->pc = 0x489b4cu;
    // NOP
label_489b50:
    // 0x489b50: 0x3e00008  jr          $ra
label_489b54:
    if (ctx->pc == 0x489B54u) {
        ctx->pc = 0x489B58u;
        goto label_489b58;
    }
    ctx->pc = 0x489B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489B58u;
label_489b58:
    // 0x489b58: 0x0  nop
    ctx->pc = 0x489b58u;
    // NOP
label_489b5c:
    // 0x489b5c: 0x0  nop
    ctx->pc = 0x489b5cu;
    // NOP
label_489b60:
    // 0x489b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x489b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_489b64:
    // 0x489b64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x489b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_489b68:
    // 0x489b68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x489b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_489b6c:
    // 0x489b6c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x489b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_489b70:
    // 0x489b70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x489b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_489b74:
    // 0x489b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x489b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_489b78:
    // 0x489b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x489b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_489b7c:
    // 0x489b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_489b80:
    // 0x489b80: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x489b80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_489b84:
    // 0x489b84: 0x820311ad  lb          $v1, 0x11AD($s0)
    ctx->pc = 0x489b84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_489b88:
    // 0x489b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x489b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_489b8c:
    // 0x489b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x489b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_489b90:
    // 0x489b90: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x489b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_489b94:
    // 0x489b94: 0xc075830  jal         func_1D60C0
label_489b98:
    if (ctx->pc == 0x489B98u) {
        ctx->pc = 0x489B98u;
            // 0x489b98: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489B9Cu;
        goto label_489b9c;
    }
    ctx->pc = 0x489B94u;
    SET_GPR_U32(ctx, 31, 0x489B9Cu);
    ctx->pc = 0x489B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489B94u;
            // 0x489b98: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489B9Cu; }
        if (ctx->pc != 0x489B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489B9Cu; }
        if (ctx->pc != 0x489B9Cu) { return; }
    }
    ctx->pc = 0x489B9Cu;
label_489b9c:
    // 0x489b9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x489b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_489ba0:
    // 0x489ba0: 0x50430064  beql        $v0, $v1, . + 4 + (0x64 << 2)
label_489ba4:
    if (ctx->pc == 0x489BA4u) {
        ctx->pc = 0x489BA4u;
            // 0x489ba4: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x489BA8u;
        goto label_489ba8;
    }
    ctx->pc = 0x489BA0u;
    {
        const bool branch_taken_0x489ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x489ba0) {
            ctx->pc = 0x489BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489BA0u;
            // 0x489ba4: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489D34u;
            goto label_489d34;
        }
    }
    ctx->pc = 0x489BA8u;
label_489ba8:
    // 0x489ba8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x489ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_489bac:
    // 0x489bac: 0x50430034  beql        $v0, $v1, . + 4 + (0x34 << 2)
label_489bb0:
    if (ctx->pc == 0x489BB0u) {
        ctx->pc = 0x489BB0u;
            // 0x489bb0: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x489BB4u;
        goto label_489bb4;
    }
    ctx->pc = 0x489BACu;
    {
        const bool branch_taken_0x489bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x489bac) {
            ctx->pc = 0x489BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489BACu;
            // 0x489bb0: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489C80u;
            goto label_489c80;
        }
    }
    ctx->pc = 0x489BB4u;
label_489bb4:
    // 0x489bb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x489bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_489bb8:
    // 0x489bb8: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_489bbc:
    if (ctx->pc == 0x489BBCu) {
        ctx->pc = 0x489BBCu;
            // 0x489bbc: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x489BC0u;
        goto label_489bc0;
    }
    ctx->pc = 0x489BB8u;
    {
        const bool branch_taken_0x489bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x489bb8) {
            ctx->pc = 0x489BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489BB8u;
            // 0x489bbc: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489BC8u;
            goto label_489bc8;
        }
    }
    ctx->pc = 0x489BC0u;
label_489bc0:
    // 0x489bc0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_489bc4:
    if (ctx->pc == 0x489BC4u) {
        ctx->pc = 0x489BC8u;
        goto label_489bc8;
    }
    ctx->pc = 0x489BC0u;
    {
        const bool branch_taken_0x489bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489bc0) {
            ctx->pc = 0x489D30u;
            goto label_489d30;
        }
    }
    ctx->pc = 0x489BC8u;
label_489bc8:
    // 0x489bc8: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x489bc8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_489bcc:
    // 0x489bcc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_489bd0:
    if (ctx->pc == 0x489BD0u) {
        ctx->pc = 0x489BD0u;
            // 0x489bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489BD4u;
        goto label_489bd4;
    }
    ctx->pc = 0x489BCCu;
    {
        const bool branch_taken_0x489bcc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x489BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489BCCu;
            // 0x489bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489bcc) {
            ctx->pc = 0x489BE4u;
            goto label_489be4;
        }
    }
    ctx->pc = 0x489BD4u;
label_489bd4:
    // 0x489bd4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x489bd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_489bd8:
    // 0x489bd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_489bdc:
    if (ctx->pc == 0x489BDCu) {
        ctx->pc = 0x489BE0u;
        goto label_489be0;
    }
    ctx->pc = 0x489BD8u;
    {
        const bool branch_taken_0x489bd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489bd8) {
            ctx->pc = 0x489BE4u;
            goto label_489be4;
        }
    }
    ctx->pc = 0x489BE0u;
label_489be0:
    // 0x489be0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x489be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489be4:
    // 0x489be4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_489be8:
    if (ctx->pc == 0x489BE8u) {
        ctx->pc = 0x489BECu;
        goto label_489bec;
    }
    ctx->pc = 0x489BE4u;
    {
        const bool branch_taken_0x489be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x489be4) {
            ctx->pc = 0x489C00u;
            goto label_489c00;
        }
    }
    ctx->pc = 0x489BECu;
label_489bec:
    // 0x489bec: 0xc075eb4  jal         func_1D7AD0
label_489bf0:
    if (ctx->pc == 0x489BF0u) {
        ctx->pc = 0x489BF0u;
            // 0x489bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489BF4u;
        goto label_489bf4;
    }
    ctx->pc = 0x489BECu;
    SET_GPR_U32(ctx, 31, 0x489BF4u);
    ctx->pc = 0x489BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489BECu;
            // 0x489bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489BF4u; }
        if (ctx->pc != 0x489BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489BF4u; }
        if (ctx->pc != 0x489BF4u) { return; }
    }
    ctx->pc = 0x489BF4u;
label_489bf4:
    // 0x489bf4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_489bf8:
    if (ctx->pc == 0x489BF8u) {
        ctx->pc = 0x489BFCu;
        goto label_489bfc;
    }
    ctx->pc = 0x489BF4u;
    {
        const bool branch_taken_0x489bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489bf4) {
            ctx->pc = 0x489C00u;
            goto label_489c00;
        }
    }
    ctx->pc = 0x489BFCu;
label_489bfc:
    // 0x489bfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x489bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489c00:
    // 0x489c00: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_489c04:
    if (ctx->pc == 0x489C04u) {
        ctx->pc = 0x489C04u;
            // 0x489c04: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x489C08u;
        goto label_489c08;
    }
    ctx->pc = 0x489C00u;
    {
        const bool branch_taken_0x489c00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x489c00) {
            ctx->pc = 0x489C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489C00u;
            // 0x489c04: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489C70u;
            goto label_489c70;
        }
    }
    ctx->pc = 0x489C08u;
label_489c08:
    // 0x489c08: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x489c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_489c0c:
    // 0x489c0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x489c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_489c10:
    // 0x489c10: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_489c14:
    if (ctx->pc == 0x489C14u) {
        ctx->pc = 0x489C18u;
        goto label_489c18;
    }
    ctx->pc = 0x489C10u;
    {
        const bool branch_taken_0x489c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x489c10) {
            ctx->pc = 0x489C6Cu;
            goto label_489c6c;
        }
    }
    ctx->pc = 0x489C18u;
label_489c18:
    // 0x489c18: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x489c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_489c1c:
    // 0x489c1c: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x489c1cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_489c20:
    // 0x489c20: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_489c24:
    if (ctx->pc == 0x489C24u) {
        ctx->pc = 0x489C24u;
            // 0x489c24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489C28u;
        goto label_489c28;
    }
    ctx->pc = 0x489C20u;
    {
        const bool branch_taken_0x489c20 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x489C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489C20u;
            // 0x489c24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489c20) {
            ctx->pc = 0x489C38u;
            goto label_489c38;
        }
    }
    ctx->pc = 0x489C28u;
label_489c28:
    // 0x489c28: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x489c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_489c2c:
    // 0x489c2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_489c30:
    if (ctx->pc == 0x489C30u) {
        ctx->pc = 0x489C34u;
        goto label_489c34;
    }
    ctx->pc = 0x489C2Cu;
    {
        const bool branch_taken_0x489c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489c2c) {
            ctx->pc = 0x489C38u;
            goto label_489c38;
        }
    }
    ctx->pc = 0x489C34u;
label_489c34:
    // 0x489c34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x489c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489c38:
    // 0x489c38: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_489c3c:
    if (ctx->pc == 0x489C3Cu) {
        ctx->pc = 0x489C40u;
        goto label_489c40;
    }
    ctx->pc = 0x489C38u;
    {
        const bool branch_taken_0x489c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x489c38) {
            ctx->pc = 0x489C54u;
            goto label_489c54;
        }
    }
    ctx->pc = 0x489C40u;
label_489c40:
    // 0x489c40: 0xc075eb4  jal         func_1D7AD0
label_489c44:
    if (ctx->pc == 0x489C44u) {
        ctx->pc = 0x489C44u;
            // 0x489c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489C48u;
        goto label_489c48;
    }
    ctx->pc = 0x489C40u;
    SET_GPR_U32(ctx, 31, 0x489C48u);
    ctx->pc = 0x489C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489C40u;
            // 0x489c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489C48u; }
        if (ctx->pc != 0x489C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489C48u; }
        if (ctx->pc != 0x489C48u) { return; }
    }
    ctx->pc = 0x489C48u;
label_489c48:
    // 0x489c48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_489c4c:
    if (ctx->pc == 0x489C4Cu) {
        ctx->pc = 0x489C50u;
        goto label_489c50;
    }
    ctx->pc = 0x489C48u;
    {
        const bool branch_taken_0x489c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489c48) {
            ctx->pc = 0x489C54u;
            goto label_489c54;
        }
    }
    ctx->pc = 0x489C50u;
label_489c50:
    // 0x489c50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x489c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489c54:
    // 0x489c54: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_489c58:
    if (ctx->pc == 0x489C58u) {
        ctx->pc = 0x489C5Cu;
        goto label_489c5c;
    }
    ctx->pc = 0x489C54u;
    {
        const bool branch_taken_0x489c54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x489c54) {
            ctx->pc = 0x489C6Cu;
            goto label_489c6c;
        }
    }
    ctx->pc = 0x489C5Cu;
label_489c5c:
    // 0x489c5c: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x489c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_489c60:
    // 0x489c60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x489c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_489c64:
    // 0x489c64: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
label_489c68:
    if (ctx->pc == 0x489C68u) {
        ctx->pc = 0x489C6Cu;
        goto label_489c6c;
    }
    ctx->pc = 0x489C64u;
    {
        const bool branch_taken_0x489c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x489c64) {
            ctx->pc = 0x489D30u;
            goto label_489d30;
        }
    }
    ctx->pc = 0x489C6Cu;
label_489c6c:
    // 0x489c6c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x489c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_489c70:
    // 0x489c70: 0xc073234  jal         func_1CC8D0
label_489c74:
    if (ctx->pc == 0x489C74u) {
        ctx->pc = 0x489C74u;
            // 0x489c74: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x489C78u;
        goto label_489c78;
    }
    ctx->pc = 0x489C70u;
    SET_GPR_U32(ctx, 31, 0x489C78u);
    ctx->pc = 0x489C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489C70u;
            // 0x489c74: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489C78u; }
        if (ctx->pc != 0x489C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489C78u; }
        if (ctx->pc != 0x489C78u) { return; }
    }
    ctx->pc = 0x489C78u;
label_489c78:
    // 0x489c78: 0x1000002d  b           . + 4 + (0x2D << 2)
label_489c7c:
    if (ctx->pc == 0x489C7Cu) {
        ctx->pc = 0x489C80u;
        goto label_489c80;
    }
    ctx->pc = 0x489C78u;
    {
        const bool branch_taken_0x489c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489c78) {
            ctx->pc = 0x489D30u;
            goto label_489d30;
        }
    }
    ctx->pc = 0x489C80u;
label_489c80:
    // 0x489c80: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x489c80u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_489c84:
    // 0x489c84: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_489c88:
    if (ctx->pc == 0x489C88u) {
        ctx->pc = 0x489C88u;
            // 0x489c88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489C8Cu;
        goto label_489c8c;
    }
    ctx->pc = 0x489C84u;
    {
        const bool branch_taken_0x489c84 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x489C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489C84u;
            // 0x489c88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489c84) {
            ctx->pc = 0x489C9Cu;
            goto label_489c9c;
        }
    }
    ctx->pc = 0x489C8Cu;
label_489c8c:
    // 0x489c8c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x489c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_489c90:
    // 0x489c90: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_489c94:
    if (ctx->pc == 0x489C94u) {
        ctx->pc = 0x489C98u;
        goto label_489c98;
    }
    ctx->pc = 0x489C90u;
    {
        const bool branch_taken_0x489c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489c90) {
            ctx->pc = 0x489C9Cu;
            goto label_489c9c;
        }
    }
    ctx->pc = 0x489C98u;
label_489c98:
    // 0x489c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x489c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489c9c:
    // 0x489c9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_489ca0:
    if (ctx->pc == 0x489CA0u) {
        ctx->pc = 0x489CA4u;
        goto label_489ca4;
    }
    ctx->pc = 0x489C9Cu;
    {
        const bool branch_taken_0x489c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x489c9c) {
            ctx->pc = 0x489CB8u;
            goto label_489cb8;
        }
    }
    ctx->pc = 0x489CA4u;
label_489ca4:
    // 0x489ca4: 0xc075eb4  jal         func_1D7AD0
label_489ca8:
    if (ctx->pc == 0x489CA8u) {
        ctx->pc = 0x489CA8u;
            // 0x489ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489CACu;
        goto label_489cac;
    }
    ctx->pc = 0x489CA4u;
    SET_GPR_U32(ctx, 31, 0x489CACu);
    ctx->pc = 0x489CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489CA4u;
            // 0x489ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489CACu; }
        if (ctx->pc != 0x489CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489CACu; }
        if (ctx->pc != 0x489CACu) { return; }
    }
    ctx->pc = 0x489CACu;
label_489cac:
    // 0x489cac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_489cb0:
    if (ctx->pc == 0x489CB0u) {
        ctx->pc = 0x489CB4u;
        goto label_489cb4;
    }
    ctx->pc = 0x489CACu;
    {
        const bool branch_taken_0x489cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489cac) {
            ctx->pc = 0x489CB8u;
            goto label_489cb8;
        }
    }
    ctx->pc = 0x489CB4u;
label_489cb4:
    // 0x489cb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x489cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489cb8:
    // 0x489cb8: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_489cbc:
    if (ctx->pc == 0x489CBCu) {
        ctx->pc = 0x489CBCu;
            // 0x489cbc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x489CC0u;
        goto label_489cc0;
    }
    ctx->pc = 0x489CB8u;
    {
        const bool branch_taken_0x489cb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x489cb8) {
            ctx->pc = 0x489CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489CB8u;
            // 0x489cbc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489D28u;
            goto label_489d28;
        }
    }
    ctx->pc = 0x489CC0u;
label_489cc0:
    // 0x489cc0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x489cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_489cc4:
    // 0x489cc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x489cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_489cc8:
    // 0x489cc8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_489ccc:
    if (ctx->pc == 0x489CCCu) {
        ctx->pc = 0x489CD0u;
        goto label_489cd0;
    }
    ctx->pc = 0x489CC8u;
    {
        const bool branch_taken_0x489cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x489cc8) {
            ctx->pc = 0x489D24u;
            goto label_489d24;
        }
    }
    ctx->pc = 0x489CD0u;
label_489cd0:
    // 0x489cd0: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x489cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_489cd4:
    // 0x489cd4: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x489cd4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_489cd8:
    // 0x489cd8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_489cdc:
    if (ctx->pc == 0x489CDCu) {
        ctx->pc = 0x489CDCu;
            // 0x489cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489CE0u;
        goto label_489ce0;
    }
    ctx->pc = 0x489CD8u;
    {
        const bool branch_taken_0x489cd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x489CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489CD8u;
            // 0x489cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489cd8) {
            ctx->pc = 0x489CF0u;
            goto label_489cf0;
        }
    }
    ctx->pc = 0x489CE0u;
label_489ce0:
    // 0x489ce0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x489ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_489ce4:
    // 0x489ce4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_489ce8:
    if (ctx->pc == 0x489CE8u) {
        ctx->pc = 0x489CECu;
        goto label_489cec;
    }
    ctx->pc = 0x489CE4u;
    {
        const bool branch_taken_0x489ce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x489ce4) {
            ctx->pc = 0x489CF0u;
            goto label_489cf0;
        }
    }
    ctx->pc = 0x489CECu;
label_489cec:
    // 0x489cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x489cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_489cf0:
    // 0x489cf0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_489cf4:
    if (ctx->pc == 0x489CF4u) {
        ctx->pc = 0x489CF8u;
        goto label_489cf8;
    }
    ctx->pc = 0x489CF0u;
    {
        const bool branch_taken_0x489cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x489cf0) {
            ctx->pc = 0x489D0Cu;
            goto label_489d0c;
        }
    }
    ctx->pc = 0x489CF8u;
label_489cf8:
    // 0x489cf8: 0xc075eb4  jal         func_1D7AD0
label_489cfc:
    if (ctx->pc == 0x489CFCu) {
        ctx->pc = 0x489CFCu;
            // 0x489cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489D00u;
        goto label_489d00;
    }
    ctx->pc = 0x489CF8u;
    SET_GPR_U32(ctx, 31, 0x489D00u);
    ctx->pc = 0x489CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489CF8u;
            // 0x489cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489D00u; }
        if (ctx->pc != 0x489D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489D00u; }
        if (ctx->pc != 0x489D00u) { return; }
    }
    ctx->pc = 0x489D00u;
label_489d00:
    // 0x489d00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_489d04:
    if (ctx->pc == 0x489D04u) {
        ctx->pc = 0x489D08u;
        goto label_489d08;
    }
    ctx->pc = 0x489D00u;
    {
        const bool branch_taken_0x489d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489d00) {
            ctx->pc = 0x489D0Cu;
            goto label_489d0c;
        }
    }
    ctx->pc = 0x489D08u;
label_489d08:
    // 0x489d08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x489d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489d0c:
    // 0x489d0c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_489d10:
    if (ctx->pc == 0x489D10u) {
        ctx->pc = 0x489D14u;
        goto label_489d14;
    }
    ctx->pc = 0x489D0Cu;
    {
        const bool branch_taken_0x489d0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x489d0c) {
            ctx->pc = 0x489D24u;
            goto label_489d24;
        }
    }
    ctx->pc = 0x489D14u;
label_489d14:
    // 0x489d14: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x489d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_489d18:
    // 0x489d18: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x489d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_489d1c:
    // 0x489d1c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_489d20:
    if (ctx->pc == 0x489D20u) {
        ctx->pc = 0x489D24u;
        goto label_489d24;
    }
    ctx->pc = 0x489D1Cu;
    {
        const bool branch_taken_0x489d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x489d1c) {
            ctx->pc = 0x489D30u;
            goto label_489d30;
        }
    }
    ctx->pc = 0x489D24u;
label_489d24:
    // 0x489d24: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x489d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_489d28:
    // 0x489d28: 0xc073234  jal         func_1CC8D0
label_489d2c:
    if (ctx->pc == 0x489D2Cu) {
        ctx->pc = 0x489D2Cu;
            // 0x489d2c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x489D30u;
        goto label_489d30;
    }
    ctx->pc = 0x489D28u;
    SET_GPR_U32(ctx, 31, 0x489D30u);
    ctx->pc = 0x489D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489D28u;
            // 0x489d2c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489D30u; }
        if (ctx->pc != 0x489D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489D30u; }
        if (ctx->pc != 0x489D30u) { return; }
    }
    ctx->pc = 0x489D30u;
label_489d30:
    // 0x489d30: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x489d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_489d34:
    // 0x489d34: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x489d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_489d38:
    // 0x489d38: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_489d3c:
    if (ctx->pc == 0x489D3Cu) {
        ctx->pc = 0x489D3Cu;
            // 0x489d3c: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x489D40u;
        goto label_489d40;
    }
    ctx->pc = 0x489D38u;
    {
        const bool branch_taken_0x489d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x489d38) {
            ctx->pc = 0x489D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489D38u;
            // 0x489d3c: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489D5Cu;
            goto label_489d5c;
        }
    }
    ctx->pc = 0x489D40u;
label_489d40:
    // 0x489d40: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x489d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_489d44:
    // 0x489d44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489d48:
    // 0x489d48: 0x0  nop
    ctx->pc = 0x489d48u;
    // NOP
label_489d4c:
    // 0x489d4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x489d4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_489d50:
    // 0x489d50: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_489d54:
    if (ctx->pc == 0x489D54u) {
        ctx->pc = 0x489D54u;
            // 0x489d54: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x489D58u;
        goto label_489d58;
    }
    ctx->pc = 0x489D50u;
    {
        const bool branch_taken_0x489d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x489d50) {
            ctx->pc = 0x489D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489D50u;
            // 0x489d54: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489DBCu;
            goto label_489dbc;
        }
    }
    ctx->pc = 0x489D58u;
label_489d58:
    // 0x489d58: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x489d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_489d5c:
    // 0x489d5c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_489d60:
    if (ctx->pc == 0x489D60u) {
        ctx->pc = 0x489D60u;
            // 0x489d60: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x489D64u;
        goto label_489d64;
    }
    ctx->pc = 0x489D5Cu;
    {
        const bool branch_taken_0x489d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x489d5c) {
            ctx->pc = 0x489D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489D5Cu;
            // 0x489d60: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489D78u;
            goto label_489d78;
        }
    }
    ctx->pc = 0x489D64u;
label_489d64:
    // 0x489d64: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x489d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_489d68:
    // 0x489d68: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x489d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_489d6c:
    // 0x489d6c: 0xc057b7c  jal         func_15EDF0
label_489d70:
    if (ctx->pc == 0x489D70u) {
        ctx->pc = 0x489D70u;
            // 0x489d70: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x489D74u;
        goto label_489d74;
    }
    ctx->pc = 0x489D6Cu;
    SET_GPR_U32(ctx, 31, 0x489D74u);
    ctx->pc = 0x489D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489D6Cu;
            // 0x489d70: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489D74u; }
        if (ctx->pc != 0x489D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489D74u; }
        if (ctx->pc != 0x489D74u) { return; }
    }
    ctx->pc = 0x489D74u;
label_489d74:
    // 0x489d74: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x489d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_489d78:
    // 0x489d78: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x489d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_489d7c:
    // 0x489d7c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489d7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489d80:
    // 0x489d80: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x489d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_489d84:
    // 0x489d84: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489d84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489d88:
    // 0x489d88: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x489d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_489d8c:
    // 0x489d8c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489d8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489d90:
    // 0x489d90: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x489d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_489d94:
    // 0x489d94: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489d94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489d98:
    // 0x489d98: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x489d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_489d9c:
    // 0x489d9c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489d9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489da0:
    // 0x489da0: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x489da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_489da4:
    // 0x489da4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489da4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489da8:
    // 0x489da8: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x489da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_489dac:
    // 0x489dac: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489dacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489db0:
    // 0x489db0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x489db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_489db4:
    // 0x489db4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489db4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489db8:
    // 0x489db8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x489db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_489dbc:
    // 0x489dbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x489dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_489dc0:
    // 0x489dc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x489dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_489dc4:
    // 0x489dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x489dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_489dc8:
    // 0x489dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_489dcc:
    // 0x489dcc: 0x3e00008  jr          $ra
label_489dd0:
    if (ctx->pc == 0x489DD0u) {
        ctx->pc = 0x489DD0u;
            // 0x489dd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x489DD4u;
        goto label_489dd4;
    }
    ctx->pc = 0x489DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489DCCu;
            // 0x489dd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489DD4u;
label_489dd4:
    // 0x489dd4: 0x0  nop
    ctx->pc = 0x489dd4u;
    // NOP
label_489dd8:
    // 0x489dd8: 0x0  nop
    ctx->pc = 0x489dd8u;
    // NOP
label_489ddc:
    // 0x489ddc: 0x0  nop
    ctx->pc = 0x489ddcu;
    // NOP
label_489de0:
    // 0x489de0: 0x3e00008  jr          $ra
label_489de4:
    if (ctx->pc == 0x489DE4u) {
        ctx->pc = 0x489DE8u;
        goto label_489de8;
    }
    ctx->pc = 0x489DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489DE8u;
label_489de8:
    // 0x489de8: 0x0  nop
    ctx->pc = 0x489de8u;
    // NOP
label_489dec:
    // 0x489dec: 0x0  nop
    ctx->pc = 0x489decu;
    // NOP
label_489df0:
    // 0x489df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_489df4:
    // 0x489df4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x489df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_489df8:
    // 0x489df8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x489df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_489dfc:
    // 0x489dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x489dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_489e00:
    // 0x489e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_489e04:
    // 0x489e04: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x489e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_489e08:
    // 0x489e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x489e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_489e0c:
    // 0x489e0c: 0x8c640d60  lw          $a0, 0xD60($v1)
    ctx->pc = 0x489e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_489e10:
    // 0x489e10: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x489e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_489e14:
    // 0x489e14: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x489e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_489e18:
    // 0x489e18: 0x320f809  jalr        $t9
label_489e1c:
    if (ctx->pc == 0x489E1Cu) {
        ctx->pc = 0x489E1Cu;
            // 0x489e1c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x489E20u;
        goto label_489e20;
    }
    ctx->pc = 0x489E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x489E20u);
        ctx->pc = 0x489E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489E18u;
            // 0x489e1c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x489E20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x489E20u; }
            if (ctx->pc != 0x489E20u) { return; }
        }
        }
    }
    ctx->pc = 0x489E20u;
label_489e20:
    // 0x489e20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x489e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_489e24:
    // 0x489e24: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x489e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_489e28:
    // 0x489e28: 0xc12ca3c  jal         func_4B28F0
label_489e2c:
    if (ctx->pc == 0x489E2Cu) {
        ctx->pc = 0x489E2Cu;
            // 0x489e2c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x489E30u;
        goto label_489e30;
    }
    ctx->pc = 0x489E28u;
    SET_GPR_U32(ctx, 31, 0x489E30u);
    ctx->pc = 0x489E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489E28u;
            // 0x489e2c: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489E30u; }
        if (ctx->pc != 0x489E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489E30u; }
        if (ctx->pc != 0x489E30u) { return; }
    }
    ctx->pc = 0x489E30u;
label_489e30:
    // 0x489e30: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x489e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_489e34:
    // 0x489e34: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489e34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489e38:
    // 0x489e38: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x489e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_489e3c:
    // 0x489e3c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489e40:
    // 0x489e40: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x489e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_489e44:
    // 0x489e44: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489e44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489e48:
    // 0x489e48: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x489e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_489e4c:
    // 0x489e4c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489e50:
    // 0x489e50: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x489e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_489e54:
    // 0x489e54: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489e54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489e58:
    // 0x489e58: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x489e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_489e5c:
    // 0x489e5c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489e60:
    // 0x489e60: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x489e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_489e64:
    // 0x489e64: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489e64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489e68:
    // 0x489e68: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x489e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_489e6c:
    // 0x489e6c: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x489e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_489e70:
    // 0x489e70: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x489e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_489e74:
    // 0x489e74: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_489e78:
    if (ctx->pc == 0x489E78u) {
        ctx->pc = 0x489E78u;
            // 0x489e78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x489E7Cu;
        goto label_489e7c;
    }
    ctx->pc = 0x489E74u;
    {
        const bool branch_taken_0x489e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x489e74) {
            ctx->pc = 0x489E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489E74u;
            // 0x489e78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x489EC8u;
            goto label_489ec8;
        }
    }
    ctx->pc = 0x489E7Cu;
label_489e7c:
    // 0x489e7c: 0xc040180  jal         func_100600
label_489e80:
    if (ctx->pc == 0x489E80u) {
        ctx->pc = 0x489E80u;
            // 0x489e80: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x489E84u;
        goto label_489e84;
    }
    ctx->pc = 0x489E7Cu;
    SET_GPR_U32(ctx, 31, 0x489E84u);
    ctx->pc = 0x489E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489E7Cu;
            // 0x489e80: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489E84u; }
        if (ctx->pc != 0x489E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489E84u; }
        if (ctx->pc != 0x489E84u) { return; }
    }
    ctx->pc = 0x489E84u;
label_489e84:
    // 0x489e84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_489e88:
    if (ctx->pc == 0x489E88u) {
        ctx->pc = 0x489E88u;
            // 0x489e88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489E8Cu;
        goto label_489e8c;
    }
    ctx->pc = 0x489E84u;
    {
        const bool branch_taken_0x489e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x489E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489E84u;
            // 0x489e88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489e84) {
            ctx->pc = 0x489EC0u;
            goto label_489ec0;
        }
    }
    ctx->pc = 0x489E8Cu;
label_489e8c:
    // 0x489e8c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x489e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_489e90:
    // 0x489e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x489e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_489e94:
    // 0x489e94: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x489e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_489e98:
    // 0x489e98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x489e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_489e9c:
    // 0x489e9c: 0xc10ca68  jal         func_4329A0
label_489ea0:
    if (ctx->pc == 0x489EA0u) {
        ctx->pc = 0x489EA0u;
            // 0x489ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489EA4u;
        goto label_489ea4;
    }
    ctx->pc = 0x489E9Cu;
    SET_GPR_U32(ctx, 31, 0x489EA4u);
    ctx->pc = 0x489EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489E9Cu;
            // 0x489ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489EA4u; }
        if (ctx->pc != 0x489EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489EA4u; }
        if (ctx->pc != 0x489EA4u) { return; }
    }
    ctx->pc = 0x489EA4u;
label_489ea4:
    // 0x489ea4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x489ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_489ea8:
    // 0x489ea8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x489ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_489eac:
    // 0x489eac: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x489eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_489eb0:
    // 0x489eb0: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x489eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_489eb4:
    // 0x489eb4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x489eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_489eb8:
    // 0x489eb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x489eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_489ebc:
    // 0x489ebc: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x489ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_489ec0:
    // 0x489ec0: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x489ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_489ec4:
    // 0x489ec4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x489ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_489ec8:
    // 0x489ec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x489ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_489ecc:
    // 0x489ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_489ed0:
    // 0x489ed0: 0x3e00008  jr          $ra
label_489ed4:
    if (ctx->pc == 0x489ED4u) {
        ctx->pc = 0x489ED4u;
            // 0x489ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x489ED8u;
        goto label_489ed8;
    }
    ctx->pc = 0x489ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489ED0u;
            // 0x489ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489ED8u;
label_489ed8:
    // 0x489ed8: 0x0  nop
    ctx->pc = 0x489ed8u;
    // NOP
label_489edc:
    // 0x489edc: 0x0  nop
    ctx->pc = 0x489edcu;
    // NOP
label_489ee0:
    // 0x489ee0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x489ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_489ee4:
    // 0x489ee4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x489ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_489ee8:
    // 0x489ee8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x489ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_489eec:
    // 0x489eec: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x489eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_489ef0:
    // 0x489ef0: 0x8cc60030  lw          $a2, 0x30($a2)
    ctx->pc = 0x489ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_489ef4:
    // 0x489ef4: 0xacc012a8  sw          $zero, 0x12A8($a2)
    ctx->pc = 0x489ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4776), GPR_U32(ctx, 0));
label_489ef8:
    // 0x489ef8: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x489ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_489efc:
    // 0x489efc: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x489efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_489f00:
    // 0x489f00: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x489f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
label_489f04:
    // 0x489f04: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x489f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
label_489f08:
    // 0x489f08: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x489f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_489f0c:
    // 0x489f0c: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x489f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
label_489f10:
    // 0x489f10: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x489f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_489f14:
    // 0x489f14: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x489f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_489f18:
    // 0x489f18: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x489f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_489f1c:
    // 0x489f1c: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x489f1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_489f20:
    // 0x489f20: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x489f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_489f24:
    // 0x489f24: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x489f24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
label_489f28:
    // 0x489f28: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x489f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_489f2c:
    // 0x489f2c: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x489f2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_489f30:
    // 0x489f30: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x489f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_489f34:
    // 0x489f34: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x489f34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
label_489f38:
    // 0x489f38: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x489f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_489f3c:
    // 0x489f3c: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x489f3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_489f40:
    // 0x489f40: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x489f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_489f44:
    // 0x489f44: 0xa4a30064  sh          $v1, 0x64($a1)
    ctx->pc = 0x489f44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
label_489f48:
    // 0x489f48: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x489f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_489f4c:
    // 0x489f4c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x489f4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_489f50:
    // 0x489f50: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x489f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_489f54:
    // 0x489f54: 0x3e00008  jr          $ra
label_489f58:
    if (ctx->pc == 0x489F58u) {
        ctx->pc = 0x489F58u;
            // 0x489f58: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x489F5Cu;
        goto label_489f5c;
    }
    ctx->pc = 0x489F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x489F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x489F54u;
            // 0x489f58: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x489F5Cu;
label_489f5c:
    // 0x489f5c: 0x0  nop
    ctx->pc = 0x489f5cu;
    // NOP
}
