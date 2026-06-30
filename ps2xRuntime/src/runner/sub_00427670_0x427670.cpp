#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00427670
// Address: 0x427670 - 0x428250
void sub_00427670_0x427670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427670_0x427670");
#endif

    switch (ctx->pc) {
        case 0x427670u: goto label_427670;
        case 0x427674u: goto label_427674;
        case 0x427678u: goto label_427678;
        case 0x42767cu: goto label_42767c;
        case 0x427680u: goto label_427680;
        case 0x427684u: goto label_427684;
        case 0x427688u: goto label_427688;
        case 0x42768cu: goto label_42768c;
        case 0x427690u: goto label_427690;
        case 0x427694u: goto label_427694;
        case 0x427698u: goto label_427698;
        case 0x42769cu: goto label_42769c;
        case 0x4276a0u: goto label_4276a0;
        case 0x4276a4u: goto label_4276a4;
        case 0x4276a8u: goto label_4276a8;
        case 0x4276acu: goto label_4276ac;
        case 0x4276b0u: goto label_4276b0;
        case 0x4276b4u: goto label_4276b4;
        case 0x4276b8u: goto label_4276b8;
        case 0x4276bcu: goto label_4276bc;
        case 0x4276c0u: goto label_4276c0;
        case 0x4276c4u: goto label_4276c4;
        case 0x4276c8u: goto label_4276c8;
        case 0x4276ccu: goto label_4276cc;
        case 0x4276d0u: goto label_4276d0;
        case 0x4276d4u: goto label_4276d4;
        case 0x4276d8u: goto label_4276d8;
        case 0x4276dcu: goto label_4276dc;
        case 0x4276e0u: goto label_4276e0;
        case 0x4276e4u: goto label_4276e4;
        case 0x4276e8u: goto label_4276e8;
        case 0x4276ecu: goto label_4276ec;
        case 0x4276f0u: goto label_4276f0;
        case 0x4276f4u: goto label_4276f4;
        case 0x4276f8u: goto label_4276f8;
        case 0x4276fcu: goto label_4276fc;
        case 0x427700u: goto label_427700;
        case 0x427704u: goto label_427704;
        case 0x427708u: goto label_427708;
        case 0x42770cu: goto label_42770c;
        case 0x427710u: goto label_427710;
        case 0x427714u: goto label_427714;
        case 0x427718u: goto label_427718;
        case 0x42771cu: goto label_42771c;
        case 0x427720u: goto label_427720;
        case 0x427724u: goto label_427724;
        case 0x427728u: goto label_427728;
        case 0x42772cu: goto label_42772c;
        case 0x427730u: goto label_427730;
        case 0x427734u: goto label_427734;
        case 0x427738u: goto label_427738;
        case 0x42773cu: goto label_42773c;
        case 0x427740u: goto label_427740;
        case 0x427744u: goto label_427744;
        case 0x427748u: goto label_427748;
        case 0x42774cu: goto label_42774c;
        case 0x427750u: goto label_427750;
        case 0x427754u: goto label_427754;
        case 0x427758u: goto label_427758;
        case 0x42775cu: goto label_42775c;
        case 0x427760u: goto label_427760;
        case 0x427764u: goto label_427764;
        case 0x427768u: goto label_427768;
        case 0x42776cu: goto label_42776c;
        case 0x427770u: goto label_427770;
        case 0x427774u: goto label_427774;
        case 0x427778u: goto label_427778;
        case 0x42777cu: goto label_42777c;
        case 0x427780u: goto label_427780;
        case 0x427784u: goto label_427784;
        case 0x427788u: goto label_427788;
        case 0x42778cu: goto label_42778c;
        case 0x427790u: goto label_427790;
        case 0x427794u: goto label_427794;
        case 0x427798u: goto label_427798;
        case 0x42779cu: goto label_42779c;
        case 0x4277a0u: goto label_4277a0;
        case 0x4277a4u: goto label_4277a4;
        case 0x4277a8u: goto label_4277a8;
        case 0x4277acu: goto label_4277ac;
        case 0x4277b0u: goto label_4277b0;
        case 0x4277b4u: goto label_4277b4;
        case 0x4277b8u: goto label_4277b8;
        case 0x4277bcu: goto label_4277bc;
        case 0x4277c0u: goto label_4277c0;
        case 0x4277c4u: goto label_4277c4;
        case 0x4277c8u: goto label_4277c8;
        case 0x4277ccu: goto label_4277cc;
        case 0x4277d0u: goto label_4277d0;
        case 0x4277d4u: goto label_4277d4;
        case 0x4277d8u: goto label_4277d8;
        case 0x4277dcu: goto label_4277dc;
        case 0x4277e0u: goto label_4277e0;
        case 0x4277e4u: goto label_4277e4;
        case 0x4277e8u: goto label_4277e8;
        case 0x4277ecu: goto label_4277ec;
        case 0x4277f0u: goto label_4277f0;
        case 0x4277f4u: goto label_4277f4;
        case 0x4277f8u: goto label_4277f8;
        case 0x4277fcu: goto label_4277fc;
        case 0x427800u: goto label_427800;
        case 0x427804u: goto label_427804;
        case 0x427808u: goto label_427808;
        case 0x42780cu: goto label_42780c;
        case 0x427810u: goto label_427810;
        case 0x427814u: goto label_427814;
        case 0x427818u: goto label_427818;
        case 0x42781cu: goto label_42781c;
        case 0x427820u: goto label_427820;
        case 0x427824u: goto label_427824;
        case 0x427828u: goto label_427828;
        case 0x42782cu: goto label_42782c;
        case 0x427830u: goto label_427830;
        case 0x427834u: goto label_427834;
        case 0x427838u: goto label_427838;
        case 0x42783cu: goto label_42783c;
        case 0x427840u: goto label_427840;
        case 0x427844u: goto label_427844;
        case 0x427848u: goto label_427848;
        case 0x42784cu: goto label_42784c;
        case 0x427850u: goto label_427850;
        case 0x427854u: goto label_427854;
        case 0x427858u: goto label_427858;
        case 0x42785cu: goto label_42785c;
        case 0x427860u: goto label_427860;
        case 0x427864u: goto label_427864;
        case 0x427868u: goto label_427868;
        case 0x42786cu: goto label_42786c;
        case 0x427870u: goto label_427870;
        case 0x427874u: goto label_427874;
        case 0x427878u: goto label_427878;
        case 0x42787cu: goto label_42787c;
        case 0x427880u: goto label_427880;
        case 0x427884u: goto label_427884;
        case 0x427888u: goto label_427888;
        case 0x42788cu: goto label_42788c;
        case 0x427890u: goto label_427890;
        case 0x427894u: goto label_427894;
        case 0x427898u: goto label_427898;
        case 0x42789cu: goto label_42789c;
        case 0x4278a0u: goto label_4278a0;
        case 0x4278a4u: goto label_4278a4;
        case 0x4278a8u: goto label_4278a8;
        case 0x4278acu: goto label_4278ac;
        case 0x4278b0u: goto label_4278b0;
        case 0x4278b4u: goto label_4278b4;
        case 0x4278b8u: goto label_4278b8;
        case 0x4278bcu: goto label_4278bc;
        case 0x4278c0u: goto label_4278c0;
        case 0x4278c4u: goto label_4278c4;
        case 0x4278c8u: goto label_4278c8;
        case 0x4278ccu: goto label_4278cc;
        case 0x4278d0u: goto label_4278d0;
        case 0x4278d4u: goto label_4278d4;
        case 0x4278d8u: goto label_4278d8;
        case 0x4278dcu: goto label_4278dc;
        case 0x4278e0u: goto label_4278e0;
        case 0x4278e4u: goto label_4278e4;
        case 0x4278e8u: goto label_4278e8;
        case 0x4278ecu: goto label_4278ec;
        case 0x4278f0u: goto label_4278f0;
        case 0x4278f4u: goto label_4278f4;
        case 0x4278f8u: goto label_4278f8;
        case 0x4278fcu: goto label_4278fc;
        case 0x427900u: goto label_427900;
        case 0x427904u: goto label_427904;
        case 0x427908u: goto label_427908;
        case 0x42790cu: goto label_42790c;
        case 0x427910u: goto label_427910;
        case 0x427914u: goto label_427914;
        case 0x427918u: goto label_427918;
        case 0x42791cu: goto label_42791c;
        case 0x427920u: goto label_427920;
        case 0x427924u: goto label_427924;
        case 0x427928u: goto label_427928;
        case 0x42792cu: goto label_42792c;
        case 0x427930u: goto label_427930;
        case 0x427934u: goto label_427934;
        case 0x427938u: goto label_427938;
        case 0x42793cu: goto label_42793c;
        case 0x427940u: goto label_427940;
        case 0x427944u: goto label_427944;
        case 0x427948u: goto label_427948;
        case 0x42794cu: goto label_42794c;
        case 0x427950u: goto label_427950;
        case 0x427954u: goto label_427954;
        case 0x427958u: goto label_427958;
        case 0x42795cu: goto label_42795c;
        case 0x427960u: goto label_427960;
        case 0x427964u: goto label_427964;
        case 0x427968u: goto label_427968;
        case 0x42796cu: goto label_42796c;
        case 0x427970u: goto label_427970;
        case 0x427974u: goto label_427974;
        case 0x427978u: goto label_427978;
        case 0x42797cu: goto label_42797c;
        case 0x427980u: goto label_427980;
        case 0x427984u: goto label_427984;
        case 0x427988u: goto label_427988;
        case 0x42798cu: goto label_42798c;
        case 0x427990u: goto label_427990;
        case 0x427994u: goto label_427994;
        case 0x427998u: goto label_427998;
        case 0x42799cu: goto label_42799c;
        case 0x4279a0u: goto label_4279a0;
        case 0x4279a4u: goto label_4279a4;
        case 0x4279a8u: goto label_4279a8;
        case 0x4279acu: goto label_4279ac;
        case 0x4279b0u: goto label_4279b0;
        case 0x4279b4u: goto label_4279b4;
        case 0x4279b8u: goto label_4279b8;
        case 0x4279bcu: goto label_4279bc;
        case 0x4279c0u: goto label_4279c0;
        case 0x4279c4u: goto label_4279c4;
        case 0x4279c8u: goto label_4279c8;
        case 0x4279ccu: goto label_4279cc;
        case 0x4279d0u: goto label_4279d0;
        case 0x4279d4u: goto label_4279d4;
        case 0x4279d8u: goto label_4279d8;
        case 0x4279dcu: goto label_4279dc;
        case 0x4279e0u: goto label_4279e0;
        case 0x4279e4u: goto label_4279e4;
        case 0x4279e8u: goto label_4279e8;
        case 0x4279ecu: goto label_4279ec;
        case 0x4279f0u: goto label_4279f0;
        case 0x4279f4u: goto label_4279f4;
        case 0x4279f8u: goto label_4279f8;
        case 0x4279fcu: goto label_4279fc;
        case 0x427a00u: goto label_427a00;
        case 0x427a04u: goto label_427a04;
        case 0x427a08u: goto label_427a08;
        case 0x427a0cu: goto label_427a0c;
        case 0x427a10u: goto label_427a10;
        case 0x427a14u: goto label_427a14;
        case 0x427a18u: goto label_427a18;
        case 0x427a1cu: goto label_427a1c;
        case 0x427a20u: goto label_427a20;
        case 0x427a24u: goto label_427a24;
        case 0x427a28u: goto label_427a28;
        case 0x427a2cu: goto label_427a2c;
        case 0x427a30u: goto label_427a30;
        case 0x427a34u: goto label_427a34;
        case 0x427a38u: goto label_427a38;
        case 0x427a3cu: goto label_427a3c;
        case 0x427a40u: goto label_427a40;
        case 0x427a44u: goto label_427a44;
        case 0x427a48u: goto label_427a48;
        case 0x427a4cu: goto label_427a4c;
        case 0x427a50u: goto label_427a50;
        case 0x427a54u: goto label_427a54;
        case 0x427a58u: goto label_427a58;
        case 0x427a5cu: goto label_427a5c;
        case 0x427a60u: goto label_427a60;
        case 0x427a64u: goto label_427a64;
        case 0x427a68u: goto label_427a68;
        case 0x427a6cu: goto label_427a6c;
        case 0x427a70u: goto label_427a70;
        case 0x427a74u: goto label_427a74;
        case 0x427a78u: goto label_427a78;
        case 0x427a7cu: goto label_427a7c;
        case 0x427a80u: goto label_427a80;
        case 0x427a84u: goto label_427a84;
        case 0x427a88u: goto label_427a88;
        case 0x427a8cu: goto label_427a8c;
        case 0x427a90u: goto label_427a90;
        case 0x427a94u: goto label_427a94;
        case 0x427a98u: goto label_427a98;
        case 0x427a9cu: goto label_427a9c;
        case 0x427aa0u: goto label_427aa0;
        case 0x427aa4u: goto label_427aa4;
        case 0x427aa8u: goto label_427aa8;
        case 0x427aacu: goto label_427aac;
        case 0x427ab0u: goto label_427ab0;
        case 0x427ab4u: goto label_427ab4;
        case 0x427ab8u: goto label_427ab8;
        case 0x427abcu: goto label_427abc;
        case 0x427ac0u: goto label_427ac0;
        case 0x427ac4u: goto label_427ac4;
        case 0x427ac8u: goto label_427ac8;
        case 0x427accu: goto label_427acc;
        case 0x427ad0u: goto label_427ad0;
        case 0x427ad4u: goto label_427ad4;
        case 0x427ad8u: goto label_427ad8;
        case 0x427adcu: goto label_427adc;
        case 0x427ae0u: goto label_427ae0;
        case 0x427ae4u: goto label_427ae4;
        case 0x427ae8u: goto label_427ae8;
        case 0x427aecu: goto label_427aec;
        case 0x427af0u: goto label_427af0;
        case 0x427af4u: goto label_427af4;
        case 0x427af8u: goto label_427af8;
        case 0x427afcu: goto label_427afc;
        case 0x427b00u: goto label_427b00;
        case 0x427b04u: goto label_427b04;
        case 0x427b08u: goto label_427b08;
        case 0x427b0cu: goto label_427b0c;
        case 0x427b10u: goto label_427b10;
        case 0x427b14u: goto label_427b14;
        case 0x427b18u: goto label_427b18;
        case 0x427b1cu: goto label_427b1c;
        case 0x427b20u: goto label_427b20;
        case 0x427b24u: goto label_427b24;
        case 0x427b28u: goto label_427b28;
        case 0x427b2cu: goto label_427b2c;
        case 0x427b30u: goto label_427b30;
        case 0x427b34u: goto label_427b34;
        case 0x427b38u: goto label_427b38;
        case 0x427b3cu: goto label_427b3c;
        case 0x427b40u: goto label_427b40;
        case 0x427b44u: goto label_427b44;
        case 0x427b48u: goto label_427b48;
        case 0x427b4cu: goto label_427b4c;
        case 0x427b50u: goto label_427b50;
        case 0x427b54u: goto label_427b54;
        case 0x427b58u: goto label_427b58;
        case 0x427b5cu: goto label_427b5c;
        case 0x427b60u: goto label_427b60;
        case 0x427b64u: goto label_427b64;
        case 0x427b68u: goto label_427b68;
        case 0x427b6cu: goto label_427b6c;
        case 0x427b70u: goto label_427b70;
        case 0x427b74u: goto label_427b74;
        case 0x427b78u: goto label_427b78;
        case 0x427b7cu: goto label_427b7c;
        case 0x427b80u: goto label_427b80;
        case 0x427b84u: goto label_427b84;
        case 0x427b88u: goto label_427b88;
        case 0x427b8cu: goto label_427b8c;
        case 0x427b90u: goto label_427b90;
        case 0x427b94u: goto label_427b94;
        case 0x427b98u: goto label_427b98;
        case 0x427b9cu: goto label_427b9c;
        case 0x427ba0u: goto label_427ba0;
        case 0x427ba4u: goto label_427ba4;
        case 0x427ba8u: goto label_427ba8;
        case 0x427bacu: goto label_427bac;
        case 0x427bb0u: goto label_427bb0;
        case 0x427bb4u: goto label_427bb4;
        case 0x427bb8u: goto label_427bb8;
        case 0x427bbcu: goto label_427bbc;
        case 0x427bc0u: goto label_427bc0;
        case 0x427bc4u: goto label_427bc4;
        case 0x427bc8u: goto label_427bc8;
        case 0x427bccu: goto label_427bcc;
        case 0x427bd0u: goto label_427bd0;
        case 0x427bd4u: goto label_427bd4;
        case 0x427bd8u: goto label_427bd8;
        case 0x427bdcu: goto label_427bdc;
        case 0x427be0u: goto label_427be0;
        case 0x427be4u: goto label_427be4;
        case 0x427be8u: goto label_427be8;
        case 0x427becu: goto label_427bec;
        case 0x427bf0u: goto label_427bf0;
        case 0x427bf4u: goto label_427bf4;
        case 0x427bf8u: goto label_427bf8;
        case 0x427bfcu: goto label_427bfc;
        case 0x427c00u: goto label_427c00;
        case 0x427c04u: goto label_427c04;
        case 0x427c08u: goto label_427c08;
        case 0x427c0cu: goto label_427c0c;
        case 0x427c10u: goto label_427c10;
        case 0x427c14u: goto label_427c14;
        case 0x427c18u: goto label_427c18;
        case 0x427c1cu: goto label_427c1c;
        case 0x427c20u: goto label_427c20;
        case 0x427c24u: goto label_427c24;
        case 0x427c28u: goto label_427c28;
        case 0x427c2cu: goto label_427c2c;
        case 0x427c30u: goto label_427c30;
        case 0x427c34u: goto label_427c34;
        case 0x427c38u: goto label_427c38;
        case 0x427c3cu: goto label_427c3c;
        case 0x427c40u: goto label_427c40;
        case 0x427c44u: goto label_427c44;
        case 0x427c48u: goto label_427c48;
        case 0x427c4cu: goto label_427c4c;
        case 0x427c50u: goto label_427c50;
        case 0x427c54u: goto label_427c54;
        case 0x427c58u: goto label_427c58;
        case 0x427c5cu: goto label_427c5c;
        case 0x427c60u: goto label_427c60;
        case 0x427c64u: goto label_427c64;
        case 0x427c68u: goto label_427c68;
        case 0x427c6cu: goto label_427c6c;
        case 0x427c70u: goto label_427c70;
        case 0x427c74u: goto label_427c74;
        case 0x427c78u: goto label_427c78;
        case 0x427c7cu: goto label_427c7c;
        case 0x427c80u: goto label_427c80;
        case 0x427c84u: goto label_427c84;
        case 0x427c88u: goto label_427c88;
        case 0x427c8cu: goto label_427c8c;
        case 0x427c90u: goto label_427c90;
        case 0x427c94u: goto label_427c94;
        case 0x427c98u: goto label_427c98;
        case 0x427c9cu: goto label_427c9c;
        case 0x427ca0u: goto label_427ca0;
        case 0x427ca4u: goto label_427ca4;
        case 0x427ca8u: goto label_427ca8;
        case 0x427cacu: goto label_427cac;
        case 0x427cb0u: goto label_427cb0;
        case 0x427cb4u: goto label_427cb4;
        case 0x427cb8u: goto label_427cb8;
        case 0x427cbcu: goto label_427cbc;
        case 0x427cc0u: goto label_427cc0;
        case 0x427cc4u: goto label_427cc4;
        case 0x427cc8u: goto label_427cc8;
        case 0x427cccu: goto label_427ccc;
        case 0x427cd0u: goto label_427cd0;
        case 0x427cd4u: goto label_427cd4;
        case 0x427cd8u: goto label_427cd8;
        case 0x427cdcu: goto label_427cdc;
        case 0x427ce0u: goto label_427ce0;
        case 0x427ce4u: goto label_427ce4;
        case 0x427ce8u: goto label_427ce8;
        case 0x427cecu: goto label_427cec;
        case 0x427cf0u: goto label_427cf0;
        case 0x427cf4u: goto label_427cf4;
        case 0x427cf8u: goto label_427cf8;
        case 0x427cfcu: goto label_427cfc;
        case 0x427d00u: goto label_427d00;
        case 0x427d04u: goto label_427d04;
        case 0x427d08u: goto label_427d08;
        case 0x427d0cu: goto label_427d0c;
        case 0x427d10u: goto label_427d10;
        case 0x427d14u: goto label_427d14;
        case 0x427d18u: goto label_427d18;
        case 0x427d1cu: goto label_427d1c;
        case 0x427d20u: goto label_427d20;
        case 0x427d24u: goto label_427d24;
        case 0x427d28u: goto label_427d28;
        case 0x427d2cu: goto label_427d2c;
        case 0x427d30u: goto label_427d30;
        case 0x427d34u: goto label_427d34;
        case 0x427d38u: goto label_427d38;
        case 0x427d3cu: goto label_427d3c;
        case 0x427d40u: goto label_427d40;
        case 0x427d44u: goto label_427d44;
        case 0x427d48u: goto label_427d48;
        case 0x427d4cu: goto label_427d4c;
        case 0x427d50u: goto label_427d50;
        case 0x427d54u: goto label_427d54;
        case 0x427d58u: goto label_427d58;
        case 0x427d5cu: goto label_427d5c;
        case 0x427d60u: goto label_427d60;
        case 0x427d64u: goto label_427d64;
        case 0x427d68u: goto label_427d68;
        case 0x427d6cu: goto label_427d6c;
        case 0x427d70u: goto label_427d70;
        case 0x427d74u: goto label_427d74;
        case 0x427d78u: goto label_427d78;
        case 0x427d7cu: goto label_427d7c;
        case 0x427d80u: goto label_427d80;
        case 0x427d84u: goto label_427d84;
        case 0x427d88u: goto label_427d88;
        case 0x427d8cu: goto label_427d8c;
        case 0x427d90u: goto label_427d90;
        case 0x427d94u: goto label_427d94;
        case 0x427d98u: goto label_427d98;
        case 0x427d9cu: goto label_427d9c;
        case 0x427da0u: goto label_427da0;
        case 0x427da4u: goto label_427da4;
        case 0x427da8u: goto label_427da8;
        case 0x427dacu: goto label_427dac;
        case 0x427db0u: goto label_427db0;
        case 0x427db4u: goto label_427db4;
        case 0x427db8u: goto label_427db8;
        case 0x427dbcu: goto label_427dbc;
        case 0x427dc0u: goto label_427dc0;
        case 0x427dc4u: goto label_427dc4;
        case 0x427dc8u: goto label_427dc8;
        case 0x427dccu: goto label_427dcc;
        case 0x427dd0u: goto label_427dd0;
        case 0x427dd4u: goto label_427dd4;
        case 0x427dd8u: goto label_427dd8;
        case 0x427ddcu: goto label_427ddc;
        case 0x427de0u: goto label_427de0;
        case 0x427de4u: goto label_427de4;
        case 0x427de8u: goto label_427de8;
        case 0x427decu: goto label_427dec;
        case 0x427df0u: goto label_427df0;
        case 0x427df4u: goto label_427df4;
        case 0x427df8u: goto label_427df8;
        case 0x427dfcu: goto label_427dfc;
        case 0x427e00u: goto label_427e00;
        case 0x427e04u: goto label_427e04;
        case 0x427e08u: goto label_427e08;
        case 0x427e0cu: goto label_427e0c;
        case 0x427e10u: goto label_427e10;
        case 0x427e14u: goto label_427e14;
        case 0x427e18u: goto label_427e18;
        case 0x427e1cu: goto label_427e1c;
        case 0x427e20u: goto label_427e20;
        case 0x427e24u: goto label_427e24;
        case 0x427e28u: goto label_427e28;
        case 0x427e2cu: goto label_427e2c;
        case 0x427e30u: goto label_427e30;
        case 0x427e34u: goto label_427e34;
        case 0x427e38u: goto label_427e38;
        case 0x427e3cu: goto label_427e3c;
        case 0x427e40u: goto label_427e40;
        case 0x427e44u: goto label_427e44;
        case 0x427e48u: goto label_427e48;
        case 0x427e4cu: goto label_427e4c;
        case 0x427e50u: goto label_427e50;
        case 0x427e54u: goto label_427e54;
        case 0x427e58u: goto label_427e58;
        case 0x427e5cu: goto label_427e5c;
        case 0x427e60u: goto label_427e60;
        case 0x427e64u: goto label_427e64;
        case 0x427e68u: goto label_427e68;
        case 0x427e6cu: goto label_427e6c;
        case 0x427e70u: goto label_427e70;
        case 0x427e74u: goto label_427e74;
        case 0x427e78u: goto label_427e78;
        case 0x427e7cu: goto label_427e7c;
        case 0x427e80u: goto label_427e80;
        case 0x427e84u: goto label_427e84;
        case 0x427e88u: goto label_427e88;
        case 0x427e8cu: goto label_427e8c;
        case 0x427e90u: goto label_427e90;
        case 0x427e94u: goto label_427e94;
        case 0x427e98u: goto label_427e98;
        case 0x427e9cu: goto label_427e9c;
        case 0x427ea0u: goto label_427ea0;
        case 0x427ea4u: goto label_427ea4;
        case 0x427ea8u: goto label_427ea8;
        case 0x427eacu: goto label_427eac;
        case 0x427eb0u: goto label_427eb0;
        case 0x427eb4u: goto label_427eb4;
        case 0x427eb8u: goto label_427eb8;
        case 0x427ebcu: goto label_427ebc;
        case 0x427ec0u: goto label_427ec0;
        case 0x427ec4u: goto label_427ec4;
        case 0x427ec8u: goto label_427ec8;
        case 0x427eccu: goto label_427ecc;
        case 0x427ed0u: goto label_427ed0;
        case 0x427ed4u: goto label_427ed4;
        case 0x427ed8u: goto label_427ed8;
        case 0x427edcu: goto label_427edc;
        case 0x427ee0u: goto label_427ee0;
        case 0x427ee4u: goto label_427ee4;
        case 0x427ee8u: goto label_427ee8;
        case 0x427eecu: goto label_427eec;
        case 0x427ef0u: goto label_427ef0;
        case 0x427ef4u: goto label_427ef4;
        case 0x427ef8u: goto label_427ef8;
        case 0x427efcu: goto label_427efc;
        case 0x427f00u: goto label_427f00;
        case 0x427f04u: goto label_427f04;
        case 0x427f08u: goto label_427f08;
        case 0x427f0cu: goto label_427f0c;
        case 0x427f10u: goto label_427f10;
        case 0x427f14u: goto label_427f14;
        case 0x427f18u: goto label_427f18;
        case 0x427f1cu: goto label_427f1c;
        case 0x427f20u: goto label_427f20;
        case 0x427f24u: goto label_427f24;
        case 0x427f28u: goto label_427f28;
        case 0x427f2cu: goto label_427f2c;
        case 0x427f30u: goto label_427f30;
        case 0x427f34u: goto label_427f34;
        case 0x427f38u: goto label_427f38;
        case 0x427f3cu: goto label_427f3c;
        case 0x427f40u: goto label_427f40;
        case 0x427f44u: goto label_427f44;
        case 0x427f48u: goto label_427f48;
        case 0x427f4cu: goto label_427f4c;
        case 0x427f50u: goto label_427f50;
        case 0x427f54u: goto label_427f54;
        case 0x427f58u: goto label_427f58;
        case 0x427f5cu: goto label_427f5c;
        case 0x427f60u: goto label_427f60;
        case 0x427f64u: goto label_427f64;
        case 0x427f68u: goto label_427f68;
        case 0x427f6cu: goto label_427f6c;
        case 0x427f70u: goto label_427f70;
        case 0x427f74u: goto label_427f74;
        case 0x427f78u: goto label_427f78;
        case 0x427f7cu: goto label_427f7c;
        case 0x427f80u: goto label_427f80;
        case 0x427f84u: goto label_427f84;
        case 0x427f88u: goto label_427f88;
        case 0x427f8cu: goto label_427f8c;
        case 0x427f90u: goto label_427f90;
        case 0x427f94u: goto label_427f94;
        case 0x427f98u: goto label_427f98;
        case 0x427f9cu: goto label_427f9c;
        case 0x427fa0u: goto label_427fa0;
        case 0x427fa4u: goto label_427fa4;
        case 0x427fa8u: goto label_427fa8;
        case 0x427facu: goto label_427fac;
        case 0x427fb0u: goto label_427fb0;
        case 0x427fb4u: goto label_427fb4;
        case 0x427fb8u: goto label_427fb8;
        case 0x427fbcu: goto label_427fbc;
        case 0x427fc0u: goto label_427fc0;
        case 0x427fc4u: goto label_427fc4;
        case 0x427fc8u: goto label_427fc8;
        case 0x427fccu: goto label_427fcc;
        case 0x427fd0u: goto label_427fd0;
        case 0x427fd4u: goto label_427fd4;
        case 0x427fd8u: goto label_427fd8;
        case 0x427fdcu: goto label_427fdc;
        case 0x427fe0u: goto label_427fe0;
        case 0x427fe4u: goto label_427fe4;
        case 0x427fe8u: goto label_427fe8;
        case 0x427fecu: goto label_427fec;
        case 0x427ff0u: goto label_427ff0;
        case 0x427ff4u: goto label_427ff4;
        case 0x427ff8u: goto label_427ff8;
        case 0x427ffcu: goto label_427ffc;
        case 0x428000u: goto label_428000;
        case 0x428004u: goto label_428004;
        case 0x428008u: goto label_428008;
        case 0x42800cu: goto label_42800c;
        case 0x428010u: goto label_428010;
        case 0x428014u: goto label_428014;
        case 0x428018u: goto label_428018;
        case 0x42801cu: goto label_42801c;
        case 0x428020u: goto label_428020;
        case 0x428024u: goto label_428024;
        case 0x428028u: goto label_428028;
        case 0x42802cu: goto label_42802c;
        case 0x428030u: goto label_428030;
        case 0x428034u: goto label_428034;
        case 0x428038u: goto label_428038;
        case 0x42803cu: goto label_42803c;
        case 0x428040u: goto label_428040;
        case 0x428044u: goto label_428044;
        case 0x428048u: goto label_428048;
        case 0x42804cu: goto label_42804c;
        case 0x428050u: goto label_428050;
        case 0x428054u: goto label_428054;
        case 0x428058u: goto label_428058;
        case 0x42805cu: goto label_42805c;
        case 0x428060u: goto label_428060;
        case 0x428064u: goto label_428064;
        case 0x428068u: goto label_428068;
        case 0x42806cu: goto label_42806c;
        case 0x428070u: goto label_428070;
        case 0x428074u: goto label_428074;
        case 0x428078u: goto label_428078;
        case 0x42807cu: goto label_42807c;
        case 0x428080u: goto label_428080;
        case 0x428084u: goto label_428084;
        case 0x428088u: goto label_428088;
        case 0x42808cu: goto label_42808c;
        case 0x428090u: goto label_428090;
        case 0x428094u: goto label_428094;
        case 0x428098u: goto label_428098;
        case 0x42809cu: goto label_42809c;
        case 0x4280a0u: goto label_4280a0;
        case 0x4280a4u: goto label_4280a4;
        case 0x4280a8u: goto label_4280a8;
        case 0x4280acu: goto label_4280ac;
        case 0x4280b0u: goto label_4280b0;
        case 0x4280b4u: goto label_4280b4;
        case 0x4280b8u: goto label_4280b8;
        case 0x4280bcu: goto label_4280bc;
        case 0x4280c0u: goto label_4280c0;
        case 0x4280c4u: goto label_4280c4;
        case 0x4280c8u: goto label_4280c8;
        case 0x4280ccu: goto label_4280cc;
        case 0x4280d0u: goto label_4280d0;
        case 0x4280d4u: goto label_4280d4;
        case 0x4280d8u: goto label_4280d8;
        case 0x4280dcu: goto label_4280dc;
        case 0x4280e0u: goto label_4280e0;
        case 0x4280e4u: goto label_4280e4;
        case 0x4280e8u: goto label_4280e8;
        case 0x4280ecu: goto label_4280ec;
        case 0x4280f0u: goto label_4280f0;
        case 0x4280f4u: goto label_4280f4;
        case 0x4280f8u: goto label_4280f8;
        case 0x4280fcu: goto label_4280fc;
        case 0x428100u: goto label_428100;
        case 0x428104u: goto label_428104;
        case 0x428108u: goto label_428108;
        case 0x42810cu: goto label_42810c;
        case 0x428110u: goto label_428110;
        case 0x428114u: goto label_428114;
        case 0x428118u: goto label_428118;
        case 0x42811cu: goto label_42811c;
        case 0x428120u: goto label_428120;
        case 0x428124u: goto label_428124;
        case 0x428128u: goto label_428128;
        case 0x42812cu: goto label_42812c;
        case 0x428130u: goto label_428130;
        case 0x428134u: goto label_428134;
        case 0x428138u: goto label_428138;
        case 0x42813cu: goto label_42813c;
        case 0x428140u: goto label_428140;
        case 0x428144u: goto label_428144;
        case 0x428148u: goto label_428148;
        case 0x42814cu: goto label_42814c;
        case 0x428150u: goto label_428150;
        case 0x428154u: goto label_428154;
        case 0x428158u: goto label_428158;
        case 0x42815cu: goto label_42815c;
        case 0x428160u: goto label_428160;
        case 0x428164u: goto label_428164;
        case 0x428168u: goto label_428168;
        case 0x42816cu: goto label_42816c;
        case 0x428170u: goto label_428170;
        case 0x428174u: goto label_428174;
        case 0x428178u: goto label_428178;
        case 0x42817cu: goto label_42817c;
        case 0x428180u: goto label_428180;
        case 0x428184u: goto label_428184;
        case 0x428188u: goto label_428188;
        case 0x42818cu: goto label_42818c;
        case 0x428190u: goto label_428190;
        case 0x428194u: goto label_428194;
        case 0x428198u: goto label_428198;
        case 0x42819cu: goto label_42819c;
        case 0x4281a0u: goto label_4281a0;
        case 0x4281a4u: goto label_4281a4;
        case 0x4281a8u: goto label_4281a8;
        case 0x4281acu: goto label_4281ac;
        case 0x4281b0u: goto label_4281b0;
        case 0x4281b4u: goto label_4281b4;
        case 0x4281b8u: goto label_4281b8;
        case 0x4281bcu: goto label_4281bc;
        case 0x4281c0u: goto label_4281c0;
        case 0x4281c4u: goto label_4281c4;
        case 0x4281c8u: goto label_4281c8;
        case 0x4281ccu: goto label_4281cc;
        case 0x4281d0u: goto label_4281d0;
        case 0x4281d4u: goto label_4281d4;
        case 0x4281d8u: goto label_4281d8;
        case 0x4281dcu: goto label_4281dc;
        case 0x4281e0u: goto label_4281e0;
        case 0x4281e4u: goto label_4281e4;
        case 0x4281e8u: goto label_4281e8;
        case 0x4281ecu: goto label_4281ec;
        case 0x4281f0u: goto label_4281f0;
        case 0x4281f4u: goto label_4281f4;
        case 0x4281f8u: goto label_4281f8;
        case 0x4281fcu: goto label_4281fc;
        case 0x428200u: goto label_428200;
        case 0x428204u: goto label_428204;
        case 0x428208u: goto label_428208;
        case 0x42820cu: goto label_42820c;
        case 0x428210u: goto label_428210;
        case 0x428214u: goto label_428214;
        case 0x428218u: goto label_428218;
        case 0x42821cu: goto label_42821c;
        case 0x428220u: goto label_428220;
        case 0x428224u: goto label_428224;
        case 0x428228u: goto label_428228;
        case 0x42822cu: goto label_42822c;
        case 0x428230u: goto label_428230;
        case 0x428234u: goto label_428234;
        case 0x428238u: goto label_428238;
        case 0x42823cu: goto label_42823c;
        case 0x428240u: goto label_428240;
        case 0x428244u: goto label_428244;
        case 0x428248u: goto label_428248;
        case 0x42824cu: goto label_42824c;
        default: break;
    }

    ctx->pc = 0x427670u;

label_427670:
    // 0x427670: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x427670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_427674:
    // 0x427674: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_427678:
    // 0x427678: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x427678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_42767c:
    // 0x42767c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x42767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_427680:
    // 0x427680: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x427680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_427684:
    // 0x427684: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x427684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_427688:
    // 0x427688: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x427688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_42768c:
    // 0x42768c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x42768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_427690:
    // 0x427690: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x427690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_427694:
    // 0x427694: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x427694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_427698:
    // 0x427698: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x427698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_42769c:
    // 0x42769c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4276a0:
    // 0x4276a0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4276a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4276a4:
    // 0x4276a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4276a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4276a8:
    // 0x4276a8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4276a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4276ac:
    // 0x4276ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4276acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4276b0:
    // 0x4276b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4276b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4276b4:
    // 0x4276b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4276b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4276b8:
    // 0x4276b8: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x4276b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4276bc:
    // 0x4276bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4276bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4276c0:
    // 0x4276c0: 0x8e960788  lw          $s6, 0x788($s4)
    ctx->pc = 0x4276c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1928)));
label_4276c4:
    // 0x4276c4: 0xc441ffe0  lwc1        $f1, -0x20($v0)
    ctx->pc = 0x4276c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4276c8:
    // 0x4276c8: 0x2ac10003  slti        $at, $s6, 0x3
    ctx->pc = 0x4276c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_4276cc:
    // 0x4276cc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4276ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4276d0:
    // 0x4276d0: 0xc440ffe4  lwc1        $f0, -0x1C($v0)
    ctx->pc = 0x4276d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4276d4:
    // 0x4276d4: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x4276d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4276d8:
    // 0x4276d8: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x4276d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
label_4276dc:
    // 0x4276dc: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x4276dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_4276e0:
    // 0x4276e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4276e4:
    if (ctx->pc == 0x4276E4u) {
        ctx->pc = 0x4276E4u;
            // 0x4276e4: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->pc = 0x4276E8u;
        goto label_4276e8;
    }
    ctx->pc = 0x4276E0u;
    {
        const bool branch_taken_0x4276e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4276E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4276E0u;
            // 0x4276e4: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4276e0) {
            ctx->pc = 0x4276F0u;
            goto label_4276f0;
        }
    }
    ctx->pc = 0x4276E8u;
label_4276e8:
    // 0x4276e8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4276e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4276ec:
    // 0x4276ec: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x4276ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_4276f0:
    // 0x4276f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4276f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4276f4:
    // 0x4276f4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4276f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4276f8:
    // 0x4276f8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x4276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_4276fc:
    // 0x4276fc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x4276fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_427700:
    // 0x427700: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_427704:
    if (ctx->pc == 0x427704u) {
        ctx->pc = 0x427708u;
        goto label_427708;
    }
    ctx->pc = 0x427700u;
    {
        const bool branch_taken_0x427700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x427700) {
            ctx->pc = 0x427738u;
            goto label_427738;
        }
    }
    ctx->pc = 0x427708u;
label_427708:
    // 0x427708: 0x27b10118  addiu       $s1, $sp, 0x118
    ctx->pc = 0x427708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_42770c:
    // 0x42770c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x42770cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_427710:
    // 0x427710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x427710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_427714:
    // 0x427714: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x427714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_427718:
    // 0x427718: 0x320f809  jalr        $t9
label_42771c:
    if (ctx->pc == 0x42771Cu) {
        ctx->pc = 0x42771Cu;
            // 0x42771c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427720u;
        goto label_427720;
    }
    ctx->pc = 0x427718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427720u);
        ctx->pc = 0x42771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427718u;
            // 0x42771c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x427720u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427720u; }
            if (ctx->pc != 0x427720u) { return; }
        }
        }
    }
    ctx->pc = 0x427720u;
label_427720:
    // 0x427720: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x427720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_427724:
    // 0x427724: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x427724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_427728:
    // 0x427728: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x427728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_42772c:
    // 0x42772c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_427730:
    if (ctx->pc == 0x427730u) {
        ctx->pc = 0x427730u;
            // 0x427730: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x427734u;
        goto label_427734;
    }
    ctx->pc = 0x42772Cu;
    {
        const bool branch_taken_0x42772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42772Cu;
            // 0x427730: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42772c) {
            ctx->pc = 0x42770Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42770c;
        }
    }
    ctx->pc = 0x427734u;
label_427734:
    // 0x427734: 0x0  nop
    ctx->pc = 0x427734u;
    // NOP
label_427738:
    // 0x427738: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x427738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_42773c:
    // 0x42773c: 0xc457ca50  lwc1        $f23, -0x35B0($v0)
    ctx->pc = 0x42773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_427740:
    // 0x427740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x427740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427744:
    // 0x427744: 0x27b20118  addiu       $s2, $sp, 0x118
    ctx->pc = 0x427744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_427748:
    // 0x427748: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x427748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_42774c:
    // 0x42774c: 0xc456ca54  lwc1        $f22, -0x35AC($v0)
    ctx->pc = 0x42774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_427750:
    // 0x427750: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x427750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_427754:
    // 0x427754: 0xc455ca58  lwc1        $f21, -0x35A8($v0)
    ctx->pc = 0x427754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_427758:
    // 0x427758: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x427758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_42775c:
    // 0x42775c: 0xc454ca5c  lwc1        $f20, -0x35A4($v0)
    ctx->pc = 0x42775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_427760:
    // 0x427760: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x427760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_427764:
    // 0x427764: 0x8ee50074  lw          $a1, 0x74($s7)
    ctx->pc = 0x427764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_427768:
    // 0x427768: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x427768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_42776c:
    // 0x42776c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x42776cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_427770:
    // 0x427770: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x427770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_427774:
    // 0x427774: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x427774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_427778:
    // 0x427778: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x427778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_42777c:
    // 0x42777c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_427780:
    if (ctx->pc == 0x427780u) {
        ctx->pc = 0x427780u;
            // 0x427780: 0x8c950000  lw          $s5, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x427784u;
        goto label_427784;
    }
    ctx->pc = 0x42777Cu;
    {
        const bool branch_taken_0x42777c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x427780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42777Cu;
            // 0x427780: 0x8c950000  lw          $s5, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42777c) {
            ctx->pc = 0x427798u;
            goto label_427798;
        }
    }
    ctx->pc = 0x427784u;
label_427784:
    // 0x427784: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x427784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_427788:
    // 0x427788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x427788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42778c:
    // 0x42778c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x42778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_427790:
    // 0x427790: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x427790u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_427794:
    // 0x427794: 0x0  nop
    ctx->pc = 0x427794u;
    // NOP
label_427798:
    // 0x427798: 0x8e8407b8  lw          $a0, 0x7B8($s4)
    ctx->pc = 0x427798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1976)));
label_42779c:
    // 0x42779c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4277a0:
    // 0x4277a0: 0xc0bc1d4  jal         func_2F0750
label_4277a4:
    if (ctx->pc == 0x4277A4u) {
        ctx->pc = 0x4277A4u;
            // 0x4277a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4277A8u;
        goto label_4277a8;
    }
    ctx->pc = 0x4277A0u;
    SET_GPR_U32(ctx, 31, 0x4277A8u);
    ctx->pc = 0x4277A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4277A0u;
            // 0x4277a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4277A8u; }
        if (ctx->pc != 0x4277A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4277A8u; }
        if (ctx->pc != 0x4277A8u) { return; }
    }
    ctx->pc = 0x4277A8u;
label_4277a8:
    // 0x4277a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4277a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4277ac:
    // 0x4277ac: 0x26b30050  addiu       $s3, $s5, 0x50
    ctx->pc = 0x4277acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_4277b0:
    // 0x4277b0: 0xaea20160  sw          $v0, 0x160($s5)
    ctx->pc = 0x4277b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 352), GPR_U32(ctx, 2));
label_4277b4:
    // 0x4277b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4277b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4277b8:
    // 0x4277b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4277b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4277bc:
    // 0x4277bc: 0xaea0016c  sw          $zero, 0x16C($s5)
    ctx->pc = 0x4277bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 0));
label_4277c0:
    // 0x4277c0: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x4277c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_4277c4:
    // 0x4277c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4277c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4277c8:
    // 0x4277c8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x4277c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4277cc:
    // 0x4277cc: 0xc0b89e4  jal         func_2E2790
label_4277d0:
    if (ctx->pc == 0x4277D0u) {
        ctx->pc = 0x4277D0u;
            // 0x4277d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4277D4u;
        goto label_4277d4;
    }
    ctx->pc = 0x4277CCu;
    SET_GPR_U32(ctx, 31, 0x4277D4u);
    ctx->pc = 0x4277D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4277CCu;
            // 0x4277d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4277D4u; }
        if (ctx->pc != 0x4277D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4277D4u; }
        if (ctx->pc != 0x4277D4u) { return; }
    }
    ctx->pc = 0x4277D4u;
label_4277d4:
    // 0x4277d4: 0x8ea50170  lw          $a1, 0x170($s5)
    ctx->pc = 0x4277d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 368)));
label_4277d8:
    // 0x4277d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4277d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4277dc:
    // 0x4277dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4277dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4277e0:
    // 0x4277e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4277e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4277e4:
    // 0x4277e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4277e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4277e8:
    // 0x4277e8: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x4277e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_4277ec:
    // 0x4277ec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4277ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4277f0:
    // 0x4277f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4277f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4277f4:
    // 0x4277f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4277f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4277f8:
    // 0x4277f8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x4277f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4277fc:
    // 0x4277fc: 0xc0b82c4  jal         func_2E0B10
label_427800:
    if (ctx->pc == 0x427800u) {
        ctx->pc = 0x427800u;
            // 0x427800: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x427804u;
        goto label_427804;
    }
    ctx->pc = 0x4277FCu;
    SET_GPR_U32(ctx, 31, 0x427804u);
    ctx->pc = 0x427800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4277FCu;
            // 0x427800: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427804u; }
        if (ctx->pc != 0x427804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427804u; }
        if (ctx->pc != 0x427804u) { return; }
    }
    ctx->pc = 0x427804u;
label_427804:
    // 0x427804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x427804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427808:
    // 0x427808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x427808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42780c:
    // 0x42780c: 0xa20311a7  sb          $v1, 0x11A7($s0)
    ctx->pc = 0x42780cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4519), (uint8_t)GPR_U32(ctx, 3));
label_427810:
    // 0x427810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x427810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_427814:
    // 0x427814: 0xa20211a6  sb          $v0, 0x11A6($s0)
    ctx->pc = 0x427814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4518), (uint8_t)GPR_U32(ctx, 2));
label_427818:
    // 0x427818: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x427818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_42781c:
    // 0x42781c: 0xc0b8160  jal         func_2E0580
label_427820:
    if (ctx->pc == 0x427820u) {
        ctx->pc = 0x427820u;
            // 0x427820: 0xa20311a9  sb          $v1, 0x11A9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4521), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x427824u;
        goto label_427824;
    }
    ctx->pc = 0x42781Cu;
    SET_GPR_U32(ctx, 31, 0x427824u);
    ctx->pc = 0x427820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42781Cu;
            // 0x427820: 0xa20311a9  sb          $v1, 0x11A9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4521), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427824u; }
        if (ctx->pc != 0x427824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427824u; }
        if (ctx->pc != 0x427824u) { return; }
    }
    ctx->pc = 0x427824u;
label_427824:
    // 0x427824: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x427824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_427828:
    // 0x427828: 0xc04cc04  jal         func_133010
label_42782c:
    if (ctx->pc == 0x42782Cu) {
        ctx->pc = 0x42782Cu;
            // 0x42782c: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x427830u;
        goto label_427830;
    }
    ctx->pc = 0x427828u;
    SET_GPR_U32(ctx, 31, 0x427830u);
    ctx->pc = 0x42782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427828u;
            // 0x42782c: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427830u; }
        if (ctx->pc != 0x427830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427830u; }
        if (ctx->pc != 0x427830u) { return; }
    }
    ctx->pc = 0x427830u;
label_427830:
    // 0x427830: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x427830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_427834:
    // 0x427834: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x427834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_427838:
    // 0x427838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x427838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42783c:
    // 0x42783c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x42783cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_427840:
    // 0x427840: 0xc04cc7c  jal         func_1331F0
label_427844:
    if (ctx->pc == 0x427844u) {
        ctx->pc = 0x427844u;
            // 0x427844: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427848u;
        goto label_427848;
    }
    ctx->pc = 0x427840u;
    SET_GPR_U32(ctx, 31, 0x427848u);
    ctx->pc = 0x427844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427840u;
            // 0x427844: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427848u; }
        if (ctx->pc != 0x427848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427848u; }
        if (ctx->pc != 0x427848u) { return; }
    }
    ctx->pc = 0x427848u;
label_427848:
    // 0x427848: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x427848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_42784c:
    // 0x42784c: 0xc04cc04  jal         func_133010
label_427850:
    if (ctx->pc == 0x427850u) {
        ctx->pc = 0x427850u;
            // 0x427850: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x427854u;
        goto label_427854;
    }
    ctx->pc = 0x42784Cu;
    SET_GPR_U32(ctx, 31, 0x427854u);
    ctx->pc = 0x427850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42784Cu;
            // 0x427850: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427854u; }
        if (ctx->pc != 0x427854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427854u; }
        if (ctx->pc != 0x427854u) { return; }
    }
    ctx->pc = 0x427854u;
label_427854:
    // 0x427854: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x427854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_427858:
    // 0x427858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x427858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42785c:
    // 0x42785c: 0xc04cbf0  jal         func_132FC0
label_427860:
    if (ctx->pc == 0x427860u) {
        ctx->pc = 0x427860u;
            // 0x427860: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x427864u;
        goto label_427864;
    }
    ctx->pc = 0x42785Cu;
    SET_GPR_U32(ctx, 31, 0x427864u);
    ctx->pc = 0x427860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42785Cu;
            // 0x427860: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427864u; }
        if (ctx->pc != 0x427864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427864u; }
        if (ctx->pc != 0x427864u) { return; }
    }
    ctx->pc = 0x427864u;
label_427864:
    // 0x427864: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x427864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_427868:
    // 0x427868: 0xc04cc44  jal         func_133110
label_42786c:
    if (ctx->pc == 0x42786Cu) {
        ctx->pc = 0x42786Cu;
            // 0x42786c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427870u;
        goto label_427870;
    }
    ctx->pc = 0x427868u;
    SET_GPR_U32(ctx, 31, 0x427870u);
    ctx->pc = 0x42786Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427868u;
            // 0x42786c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427870u; }
        if (ctx->pc != 0x427870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427870u; }
        if (ctx->pc != 0x427870u) { return; }
    }
    ctx->pc = 0x427870u;
label_427870:
    // 0x427870: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x427870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_427874:
    // 0x427874: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x427874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_427878:
    // 0x427878: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x427878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42787c:
    // 0x42787c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x42787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_427880:
    // 0x427880: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x427880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_427884:
    // 0x427884: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x427884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_427888:
    // 0x427888: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x427888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_42788c:
    // 0x42788c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x42788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_427890:
    // 0x427890: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x427890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_427894:
    // 0x427894: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x427894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_427898:
    // 0x427898: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x427898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42789c:
    // 0x42789c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x42789cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4278a0:
    // 0x4278a0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x4278a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4278a4:
    // 0x4278a4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x4278a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_4278a8:
    // 0x4278a8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x4278a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4278ac:
    // 0x4278ac: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x4278acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_4278b0:
    // 0x4278b0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x4278b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4278b4:
    // 0x4278b4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x4278b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_4278b8:
    // 0x4278b8: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x4278b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4278bc:
    // 0x4278bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x4278bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_4278c0:
    // 0x4278c0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x4278c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4278c4:
    // 0x4278c4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x4278c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_4278c8:
    // 0x4278c8: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x4278c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4278cc:
    // 0x4278cc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x4278ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_4278d0:
    // 0x4278d0: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x4278d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4278d4:
    // 0x4278d4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x4278d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_4278d8:
    // 0x4278d8: 0xe7b70100  swc1        $f23, 0x100($sp)
    ctx->pc = 0x4278d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4278dc:
    // 0x4278dc: 0xe7b60104  swc1        $f22, 0x104($sp)
    ctx->pc = 0x4278dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_4278e0:
    // 0x4278e0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x4278e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4278e4:
    // 0x4278e4: 0xe7b4010c  swc1        $f20, 0x10C($sp)
    ctx->pc = 0x4278e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4278e8:
    // 0x4278e8: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x4278e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_4278ec:
    // 0x4278ec: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x4278ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_4278f0:
    // 0x4278f0: 0xc04c994  jal         func_132650
label_4278f4:
    if (ctx->pc == 0x4278F4u) {
        ctx->pc = 0x4278F4u;
            // 0x4278f4: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x4278F8u;
        goto label_4278f8;
    }
    ctx->pc = 0x4278F0u;
    SET_GPR_U32(ctx, 31, 0x4278F8u);
    ctx->pc = 0x4278F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4278F0u;
            // 0x4278f4: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4278F8u; }
        if (ctx->pc != 0x4278F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4278F8u; }
        if (ctx->pc != 0x4278F8u) { return; }
    }
    ctx->pc = 0x4278F8u;
label_4278f8:
    // 0x4278f8: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x4278f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_4278fc:
    // 0x4278fc: 0xc04c720  jal         func_131C80
label_427900:
    if (ctx->pc == 0x427900u) {
        ctx->pc = 0x427900u;
            // 0x427900: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x427904u;
        goto label_427904;
    }
    ctx->pc = 0x4278FCu;
    SET_GPR_U32(ctx, 31, 0x427904u);
    ctx->pc = 0x427900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4278FCu;
            // 0x427900: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427904u; }
        if (ctx->pc != 0x427904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427904u; }
        if (ctx->pc != 0x427904u) { return; }
    }
    ctx->pc = 0x427904u;
label_427904:
    // 0x427904: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x427904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_427908:
    // 0x427908: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42790c:
    // 0x42790c: 0xa20311a5  sb          $v1, 0x11A5($s0)
    ctx->pc = 0x42790cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4517), (uint8_t)GPR_U32(ctx, 3));
label_427910:
    // 0x427910: 0x8c433e58  lw          $v1, 0x3E58($v0)
    ctx->pc = 0x427910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
label_427914:
    // 0x427914: 0x8e020d98  lw          $v0, 0xD98($s0)
    ctx->pc = 0x427914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_427918:
    // 0x427918: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x427918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42791c:
    // 0x42791c: 0x906200c0  lbu         $v0, 0xC0($v1)
    ctx->pc = 0x42791cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_427920:
    // 0x427920: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x427920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_427924:
    // 0x427924: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_427928:
    if (ctx->pc == 0x427928u) {
        ctx->pc = 0x42792Cu;
        goto label_42792c;
    }
    ctx->pc = 0x427924u;
    {
        const bool branch_taken_0x427924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x427924) {
            ctx->pc = 0x427938u;
            goto label_427938;
        }
    }
    ctx->pc = 0x42792Cu;
label_42792c:
    // 0x42792c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427930:
    // 0x427930: 0xa06200c0  sb          $v0, 0xC0($v1)
    ctx->pc = 0x427930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 2));
label_427934:
    // 0x427934: 0xa06200c4  sb          $v0, 0xC4($v1)
    ctx->pc = 0x427934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 196), (uint8_t)GPR_U32(ctx, 2));
label_427938:
    // 0x427938: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x427938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_42793c:
    // 0x42793c: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x42793cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_427940:
    // 0x427940: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
label_427944:
    if (ctx->pc == 0x427944u) {
        ctx->pc = 0x427944u;
            // 0x427944: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x427948u;
        goto label_427948;
    }
    ctx->pc = 0x427940u;
    {
        const bool branch_taken_0x427940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427940u;
            // 0x427944: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427940) {
            ctx->pc = 0x427760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_427760;
        }
    }
    ctx->pc = 0x427948u;
label_427948:
    // 0x427948: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42794c:
    // 0x42794c: 0xc0c2dd4  jal         func_30B750
label_427950:
    if (ctx->pc == 0x427950u) {
        ctx->pc = 0x427950u;
            // 0x427950: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->pc = 0x427954u;
        goto label_427954;
    }
    ctx->pc = 0x42794Cu;
    SET_GPR_U32(ctx, 31, 0x427954u);
    ctx->pc = 0x427950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42794Cu;
            // 0x427950: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B750u;
    if (runtime->hasFunction(0x30B750u)) {
        auto targetFn = runtime->lookupFunction(0x30B750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427954u; }
        if (ctx->pc != 0x427954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030B750_0x30b750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427954u; }
        if (ctx->pc != 0x427954u) { return; }
    }
    ctx->pc = 0x427954u;
label_427954:
    // 0x427954: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x427954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_427958:
    // 0x427958: 0x8c640d48  lw          $a0, 0xD48($v1)
    ctx->pc = 0x427958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3400)));
label_42795c:
    // 0x42795c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_427960:
    if (ctx->pc == 0x427960u) {
        ctx->pc = 0x427960u;
            // 0x427960: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x427964u;
        goto label_427964;
    }
    ctx->pc = 0x42795Cu;
    {
        const bool branch_taken_0x42795c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42795c) {
            ctx->pc = 0x427960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42795Cu;
            // 0x427960: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427970u;
            goto label_427970;
        }
    }
    ctx->pc = 0x427964u;
label_427964:
    // 0x427964: 0xc132f10  jal         func_4CBC40
label_427968:
    if (ctx->pc == 0x427968u) {
        ctx->pc = 0x42796Cu;
        goto label_42796c;
    }
    ctx->pc = 0x427964u;
    SET_GPR_U32(ctx, 31, 0x42796Cu);
    ctx->pc = 0x4CBC40u;
    if (runtime->hasFunction(0x4CBC40u)) {
        auto targetFn = runtime->lookupFunction(0x4CBC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42796Cu; }
        if (ctx->pc != 0x42796Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CBC40_0x4cbc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42796Cu; }
        if (ctx->pc != 0x42796Cu) { return; }
    }
    ctx->pc = 0x42796Cu;
label_42796c:
    // 0x42796c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x42796cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_427970:
    // 0x427970: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x427970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_427974:
    // 0x427974: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x427974u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_427978:
    // 0x427978: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x427978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_42797c:
    // 0x42797c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x42797cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_427980:
    // 0x427980: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x427980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_427984:
    // 0x427984: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x427984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_427988:
    // 0x427988: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x427988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_42798c:
    // 0x42798c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x42798cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_427990:
    // 0x427990: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x427990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_427994:
    // 0x427994: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x427994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_427998:
    // 0x427998: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x427998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42799c:
    // 0x42799c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x42799cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4279a0:
    // 0x4279a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4279a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4279a4:
    // 0x4279a4: 0x3e00008  jr          $ra
label_4279a8:
    if (ctx->pc == 0x4279A8u) {
        ctx->pc = 0x4279A8u;
            // 0x4279a8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4279ACu;
        goto label_4279ac;
    }
    ctx->pc = 0x4279A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4279A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4279A4u;
            // 0x4279a8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4279ACu;
label_4279ac:
    // 0x4279ac: 0x0  nop
    ctx->pc = 0x4279acu;
    // NOP
label_4279b0:
    // 0x4279b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4279b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_4279b4:
    // 0x4279b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4279b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4279b8:
    // 0x4279b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4279b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4279bc:
    // 0x4279bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4279bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4279c0:
    // 0x4279c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4279c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4279c4:
    // 0x4279c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4279c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4279c8:
    // 0x4279c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4279c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4279cc:
    // 0x4279cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4279ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4279d0:
    // 0x4279d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4279d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4279d4:
    // 0x4279d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4279d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4279d8:
    // 0x4279d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4279d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4279dc:
    // 0x4279dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4279dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4279e0:
    // 0x4279e0: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x4279e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
label_4279e4:
    // 0x4279e4: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x4279e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4279e8:
    // 0x4279e8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4279e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4279ec:
    // 0x4279ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4279f0:
    // 0x4279f0: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
label_4279f4:
    if (ctx->pc == 0x4279F4u) {
        ctx->pc = 0x4279F4u;
            // 0x4279f4: 0x8fa300dc  lw          $v1, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x4279F8u;
        goto label_4279f8;
    }
    ctx->pc = 0x4279F0u;
    {
        const bool branch_taken_0x4279f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4279f0) {
            ctx->pc = 0x4279F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4279F0u;
            // 0x4279f4: 0x8fa300dc  lw          $v1, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427A74u;
            goto label_427a74;
        }
    }
    ctx->pc = 0x4279F8u;
label_4279f8:
    // 0x4279f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4279f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4279fc:
    // 0x4279fc: 0x508300b6  beql        $a0, $v1, . + 4 + (0xB6 << 2)
label_427a00:
    if (ctx->pc == 0x427A00u) {
        ctx->pc = 0x427A00u;
            // 0x427a00: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x427A04u;
        goto label_427a04;
    }
    ctx->pc = 0x4279FCu;
    {
        const bool branch_taken_0x4279fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4279fc) {
            ctx->pc = 0x427A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4279FCu;
            // 0x427a00: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427CD8u;
            goto label_427cd8;
        }
    }
    ctx->pc = 0x427A04u;
label_427a04:
    // 0x427a04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x427a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_427a08:
    // 0x427a08: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_427a0c:
    if (ctx->pc == 0x427A0Cu) {
        ctx->pc = 0x427A0Cu;
            // 0x427a0c: 0x8ca40cb4  lw          $a0, 0xCB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
        ctx->pc = 0x427A10u;
        goto label_427a10;
    }
    ctx->pc = 0x427A08u;
    {
        const bool branch_taken_0x427a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x427a08) {
            ctx->pc = 0x427A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427A08u;
            // 0x427a0c: 0x8ca40cb4  lw          $a0, 0xCB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427A18u;
            goto label_427a18;
        }
    }
    ctx->pc = 0x427A10u;
label_427a10:
    // 0x427a10: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_427a14:
    if (ctx->pc == 0x427A14u) {
        ctx->pc = 0x427A18u;
        goto label_427a18;
    }
    ctx->pc = 0x427A10u;
    {
        const bool branch_taken_0x427a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427a10) {
            ctx->pc = 0x427CD4u;
            goto label_427cd4;
        }
    }
    ctx->pc = 0x427A18u;
label_427a18:
    // 0x427a18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x427a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427a1c:
    // 0x427a1c: 0x108300ad  beq         $a0, $v1, . + 4 + (0xAD << 2)
label_427a20:
    if (ctx->pc == 0x427A20u) {
        ctx->pc = 0x427A24u;
        goto label_427a24;
    }
    ctx->pc = 0x427A1Cu;
    {
        const bool branch_taken_0x427a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x427a1c) {
            ctx->pc = 0x427CD4u;
            goto label_427cd4;
        }
    }
    ctx->pc = 0x427A24u;
label_427a24:
    // 0x427a24: 0x8ca5077c  lw          $a1, 0x77C($a1)
    ctx->pc = 0x427a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1916)));
label_427a28:
    // 0x427a28: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x427a28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_427a2c:
    // 0x427a2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x427a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427a30:
    // 0x427a30: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x427a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_427a34:
    // 0x427a34: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x427a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
label_427a38:
    // 0x427a38: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x427a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_427a3c:
    // 0x427a3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x427a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_427a40:
    // 0x427a40: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x427a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_427a44:
    // 0x427a44: 0x8c630a5c  lw          $v1, 0xA5C($v1)
    ctx->pc = 0x427a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2652)));
label_427a48:
    // 0x427a48: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x427a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_427a4c:
    // 0x427a4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_427a50:
    if (ctx->pc == 0x427A50u) {
        ctx->pc = 0x427A50u;
            // 0x427a50: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x427A54u;
        goto label_427a54;
    }
    ctx->pc = 0x427A4Cu;
    {
        const bool branch_taken_0x427a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427A4Cu;
            // 0x427a50: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427a4c) {
            ctx->pc = 0x427A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_427a38;
        }
    }
    ctx->pc = 0x427A54u;
label_427a54:
    // 0x427a54: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x427a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_427a58:
    // 0x427a58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x427a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_427a5c:
    // 0x427a5c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x427a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_427a60:
    // 0x427a60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x427a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_427a64:
    // 0x427a64: 0x320f809  jalr        $t9
label_427a68:
    if (ctx->pc == 0x427A68u) {
        ctx->pc = 0x427A6Cu;
        goto label_427a6c;
    }
    ctx->pc = 0x427A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427A6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x427A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427A6Cu; }
            if (ctx->pc != 0x427A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x427A6Cu;
label_427a6c:
    // 0x427a6c: 0x10000099  b           . + 4 + (0x99 << 2)
label_427a70:
    if (ctx->pc == 0x427A70u) {
        ctx->pc = 0x427A74u;
        goto label_427a74;
    }
    ctx->pc = 0x427A6Cu;
    {
        const bool branch_taken_0x427a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427a6c) {
            ctx->pc = 0x427CD4u;
            goto label_427cd4;
        }
    }
    ctx->pc = 0x427A74u;
label_427a74:
    // 0x427a74: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x427a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_427a78:
    // 0x427a78: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
label_427a7c:
    if (ctx->pc == 0x427A7Cu) {
        ctx->pc = 0x427A7Cu;
            // 0x427a7c: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->pc = 0x427A80u;
        goto label_427a80;
    }
    ctx->pc = 0x427A78u;
    {
        const bool branch_taken_0x427a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x427A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427A78u;
            // 0x427a7c: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427a78) {
            ctx->pc = 0x427CD4u;
            goto label_427cd4;
        }
    }
    ctx->pc = 0x427A80u;
label_427a80:
    // 0x427a80: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x427a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_427a84:
    // 0x427a84: 0x24500084  addiu       $s0, $v0, 0x84
    ctx->pc = 0x427a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_427a88:
    // 0x427a88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_427a8c:
    // 0x427a8c: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x427a8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_427a90:
    // 0x427a90: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x427a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_427a94:
    // 0x427a94: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x427a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_427a98:
    // 0x427a98: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x427a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_427a9c:
    // 0x427a9c: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x427a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_427aa0:
    // 0x427aa0: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x427aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_427aa4:
    // 0x427aa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_427aa8:
    // 0x427aa8: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x427aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_427aac:
    // 0x427aac: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x427aacu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_427ab0:
    // 0x427ab0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x427ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_427ab4:
    // 0x427ab4: 0x904300a8  lbu         $v1, 0xA8($v0)
    ctx->pc = 0x427ab4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
label_427ab8:
    // 0x427ab8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x427ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_427abc:
    // 0x427abc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x427abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_427ac0:
    // 0x427ac0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x427ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_427ac4:
    // 0x427ac4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x427ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_427ac8:
    // 0x427ac8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_427acc:
    if (ctx->pc == 0x427ACCu) {
        ctx->pc = 0x427ACCu;
            // 0x427acc: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x427AD0u;
        goto label_427ad0;
    }
    ctx->pc = 0x427AC8u;
    {
        const bool branch_taken_0x427ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x427ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427AC8u;
            // 0x427acc: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ac8) {
            ctx->pc = 0x427AE8u;
            goto label_427ae8;
        }
    }
    ctx->pc = 0x427AD0u;
label_427ad0:
    // 0x427ad0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_427ad4:
    // 0x427ad4: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x427ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_427ad8:
    // 0x427ad8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x427ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_427adc:
    // 0x427adc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x427adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_427ae0:
    // 0x427ae0: 0x320f809  jalr        $t9
label_427ae4:
    if (ctx->pc == 0x427AE4u) {
        ctx->pc = 0x427AE8u;
        goto label_427ae8;
    }
    ctx->pc = 0x427AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427AE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x427AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427AE8u; }
            if (ctx->pc != 0x427AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x427AE8u;
label_427ae8:
    // 0x427ae8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x427ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_427aec:
    // 0x427aec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x427aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_427af0:
    // 0x427af0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x427af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_427af4:
    // 0x427af4: 0xc04e4a4  jal         func_139290
label_427af8:
    if (ctx->pc == 0x427AF8u) {
        ctx->pc = 0x427AF8u;
            // 0x427af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427AFCu;
        goto label_427afc;
    }
    ctx->pc = 0x427AF4u;
    SET_GPR_U32(ctx, 31, 0x427AFCu);
    ctx->pc = 0x427AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427AF4u;
            // 0x427af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427AFCu; }
        if (ctx->pc != 0x427AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427AFCu; }
        if (ctx->pc != 0x427AFCu) { return; }
    }
    ctx->pc = 0x427AFCu;
label_427afc:
    // 0x427afc: 0xc04e738  jal         func_139CE0
label_427b00:
    if (ctx->pc == 0x427B00u) {
        ctx->pc = 0x427B00u;
            // 0x427b00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x427B04u;
        goto label_427b04;
    }
    ctx->pc = 0x427AFCu;
    SET_GPR_U32(ctx, 31, 0x427B04u);
    ctx->pc = 0x427B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427AFCu;
            // 0x427b00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B04u; }
        if (ctx->pc != 0x427B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B04u; }
        if (ctx->pc != 0x427B04u) { return; }
    }
    ctx->pc = 0x427B04u;
label_427b04:
    // 0x427b04: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x427b04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427b08:
    // 0x427b08: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x427b08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427b0c:
    // 0x427b0c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x427b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_427b10:
    // 0x427b10: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x427b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_427b14:
    // 0x427b14: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x427b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_427b18:
    // 0x427b18: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x427b18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_427b1c:
    // 0x427b1c: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x427b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_427b20:
    // 0x427b20: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x427b20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_427b24:
    // 0x427b24: 0x1420005c  bnez        $at, . + 4 + (0x5C << 2)
label_427b28:
    if (ctx->pc == 0x427B28u) {
        ctx->pc = 0x427B28u;
            // 0x427b28: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427B2Cu;
        goto label_427b2c;
    }
    ctx->pc = 0x427B24u;
    {
        const bool branch_taken_0x427b24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x427B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427B24u;
            // 0x427b28: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427b24) {
            ctx->pc = 0x427C98u;
            goto label_427c98;
        }
    }
    ctx->pc = 0x427B2Cu;
label_427b2c:
    // 0x427b2c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x427b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_427b30:
    // 0x427b30: 0x8e440170  lw          $a0, 0x170($s2)
    ctx->pc = 0x427b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_427b34:
    // 0x427b34: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x427b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_427b38:
    // 0x427b38: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x427b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_427b3c:
    // 0x427b3c: 0x14830056  bne         $a0, $v1, . + 4 + (0x56 << 2)
label_427b40:
    if (ctx->pc == 0x427B40u) {
        ctx->pc = 0x427B44u;
        goto label_427b44;
    }
    ctx->pc = 0x427B3Cu;
    {
        const bool branch_taken_0x427b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x427b3c) {
            ctx->pc = 0x427C98u;
            goto label_427c98;
        }
    }
    ctx->pc = 0x427B44u;
label_427b44:
    // 0x427b44: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x427b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427b48:
    // 0x427b48: 0xc04f278  jal         func_13C9E0
label_427b4c:
    if (ctx->pc == 0x427B4Cu) {
        ctx->pc = 0x427B4Cu;
            // 0x427b4c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x427B50u;
        goto label_427b50;
    }
    ctx->pc = 0x427B48u;
    SET_GPR_U32(ctx, 31, 0x427B50u);
    ctx->pc = 0x427B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427B48u;
            // 0x427b4c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B50u; }
        if (ctx->pc != 0x427B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B50u; }
        if (ctx->pc != 0x427B50u) { return; }
    }
    ctx->pc = 0x427B50u;
label_427b50:
    // 0x427b50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x427b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427b54:
    // 0x427b54: 0xc04ce80  jal         func_133A00
label_427b58:
    if (ctx->pc == 0x427B58u) {
        ctx->pc = 0x427B58u;
            // 0x427b58: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x427B5Cu;
        goto label_427b5c;
    }
    ctx->pc = 0x427B54u;
    SET_GPR_U32(ctx, 31, 0x427B5Cu);
    ctx->pc = 0x427B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427B54u;
            // 0x427b58: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B5Cu; }
        if (ctx->pc != 0x427B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B5Cu; }
        if (ctx->pc != 0x427B5Cu) { return; }
    }
    ctx->pc = 0x427B5Cu;
label_427b5c:
    // 0x427b5c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x427b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_427b60:
    // 0x427b60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x427b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427b64:
    // 0x427b64: 0xc04cd60  jal         func_133580
label_427b68:
    if (ctx->pc == 0x427B68u) {
        ctx->pc = 0x427B68u;
            // 0x427b68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427B6Cu;
        goto label_427b6c;
    }
    ctx->pc = 0x427B64u;
    SET_GPR_U32(ctx, 31, 0x427B6Cu);
    ctx->pc = 0x427B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427B64u;
            // 0x427b68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B6Cu; }
        if (ctx->pc != 0x427B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B6Cu; }
        if (ctx->pc != 0x427B6Cu) { return; }
    }
    ctx->pc = 0x427B6Cu;
label_427b6c:
    // 0x427b6c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x427b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_427b70:
    // 0x427b70: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x427b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_427b74:
    // 0x427b74: 0x320f809  jalr        $t9
label_427b78:
    if (ctx->pc == 0x427B78u) {
        ctx->pc = 0x427B78u;
            // 0x427b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427B7Cu;
        goto label_427b7c;
    }
    ctx->pc = 0x427B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427B7Cu);
        ctx->pc = 0x427B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427B74u;
            // 0x427b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x427B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427B7Cu; }
            if (ctx->pc != 0x427B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x427B7Cu;
label_427b7c:
    // 0x427b7c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x427b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_427b80:
    // 0x427b80: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x427b80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_427b84:
    // 0x427b84: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x427b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_427b88:
    // 0x427b88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x427b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_427b8c:
    // 0x427b8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x427b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_427b90:
    // 0x427b90: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x427b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427b94:
    // 0x427b94: 0xc04cfcc  jal         func_133F30
label_427b98:
    if (ctx->pc == 0x427B98u) {
        ctx->pc = 0x427B98u;
            // 0x427b98: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x427B9Cu;
        goto label_427b9c;
    }
    ctx->pc = 0x427B94u;
    SET_GPR_U32(ctx, 31, 0x427B9Cu);
    ctx->pc = 0x427B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427B94u;
            // 0x427b98: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B9Cu; }
        if (ctx->pc != 0x427B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427B9Cu; }
        if (ctx->pc != 0x427B9Cu) { return; }
    }
    ctx->pc = 0x427B9Cu;
label_427b9c:
    // 0x427b9c: 0xc64c0168  lwc1        $f12, 0x168($s2)
    ctx->pc = 0x427b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_427ba0:
    // 0x427ba0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x427ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_427ba4:
    // 0x427ba4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x427ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_427ba8:
    // 0x427ba8: 0xc054bbc  jal         func_152EF0
label_427bac:
    if (ctx->pc == 0x427BACu) {
        ctx->pc = 0x427BACu;
            // 0x427bac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x427BB0u;
        goto label_427bb0;
    }
    ctx->pc = 0x427BA8u;
    SET_GPR_U32(ctx, 31, 0x427BB0u);
    ctx->pc = 0x427BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427BA8u;
            // 0x427bac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427BB0u; }
        if (ctx->pc != 0x427BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427BB0u; }
        if (ctx->pc != 0x427BB0u) { return; }
    }
    ctx->pc = 0x427BB0u;
label_427bb0:
    // 0x427bb0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x427bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_427bb4:
    // 0x427bb4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x427bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_427bb8:
    // 0x427bb8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x427bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_427bbc:
    // 0x427bbc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x427bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_427bc0:
    // 0x427bc0: 0xc054c2c  jal         func_1530B0
label_427bc4:
    if (ctx->pc == 0x427BC4u) {
        ctx->pc = 0x427BC4u;
            // 0x427bc4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x427BC8u;
        goto label_427bc8;
    }
    ctx->pc = 0x427BC0u;
    SET_GPR_U32(ctx, 31, 0x427BC8u);
    ctx->pc = 0x427BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427BC0u;
            // 0x427bc4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427BC8u; }
        if (ctx->pc != 0x427BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427BC8u; }
        if (ctx->pc != 0x427BC8u) { return; }
    }
    ctx->pc = 0x427BC8u;
label_427bc8:
    // 0x427bc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x427bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_427bcc:
    // 0x427bcc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x427bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_427bd0:
    // 0x427bd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_427bd4:
    // 0x427bd4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x427bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_427bd8:
    // 0x427bd8: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x427bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_427bdc:
    // 0x427bdc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x427bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_427be0:
    // 0x427be0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_427be4:
    if (ctx->pc == 0x427BE4u) {
        ctx->pc = 0x427BE4u;
            // 0x427be4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427BE8u;
        goto label_427be8;
    }
    ctx->pc = 0x427BE0u;
    {
        const bool branch_taken_0x427be0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x427BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427BE0u;
            // 0x427be4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427be0) {
            ctx->pc = 0x427BF0u;
            goto label_427bf0;
        }
    }
    ctx->pc = 0x427BE8u;
label_427be8:
    // 0x427be8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x427be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_427bec:
    // 0x427bec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x427becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_427bf0:
    // 0x427bf0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x427bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_427bf4:
    // 0x427bf4: 0x0  nop
    ctx->pc = 0x427bf4u;
    // NOP
label_427bf8:
    // 0x427bf8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x427bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427bfc:
    // 0x427bfc: 0xc04f278  jal         func_13C9E0
label_427c00:
    if (ctx->pc == 0x427C00u) {
        ctx->pc = 0x427C00u;
            // 0x427c00: 0x26450290  addiu       $a1, $s2, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
        ctx->pc = 0x427C04u;
        goto label_427c04;
    }
    ctx->pc = 0x427BFCu;
    SET_GPR_U32(ctx, 31, 0x427C04u);
    ctx->pc = 0x427C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427BFCu;
            // 0x427c00: 0x26450290  addiu       $a1, $s2, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C04u; }
        if (ctx->pc != 0x427C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C04u; }
        if (ctx->pc != 0x427C04u) { return; }
    }
    ctx->pc = 0x427C04u;
label_427c04:
    // 0x427c04: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x427c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427c08:
    // 0x427c08: 0xc04ce80  jal         func_133A00
label_427c0c:
    if (ctx->pc == 0x427C0Cu) {
        ctx->pc = 0x427C0Cu;
            // 0x427c0c: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->pc = 0x427C10u;
        goto label_427c10;
    }
    ctx->pc = 0x427C08u;
    SET_GPR_U32(ctx, 31, 0x427C10u);
    ctx->pc = 0x427C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427C08u;
            // 0x427c0c: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C10u; }
        if (ctx->pc != 0x427C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C10u; }
        if (ctx->pc != 0x427C10u) { return; }
    }
    ctx->pc = 0x427C10u;
label_427c10:
    // 0x427c10: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x427c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_427c14:
    // 0x427c14: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x427c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427c18:
    // 0x427c18: 0xc04cd60  jal         func_133580
label_427c1c:
    if (ctx->pc == 0x427C1Cu) {
        ctx->pc = 0x427C1Cu;
            // 0x427c1c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427C20u;
        goto label_427c20;
    }
    ctx->pc = 0x427C18u;
    SET_GPR_U32(ctx, 31, 0x427C20u);
    ctx->pc = 0x427C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427C18u;
            // 0x427c1c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C20u; }
        if (ctx->pc != 0x427C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C20u; }
        if (ctx->pc != 0x427C20u) { return; }
    }
    ctx->pc = 0x427C20u;
label_427c20:
    // 0x427c20: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x427c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_427c24:
    // 0x427c24: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x427c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_427c28:
    // 0x427c28: 0x320f809  jalr        $t9
label_427c2c:
    if (ctx->pc == 0x427C2Cu) {
        ctx->pc = 0x427C2Cu;
            // 0x427c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427C30u;
        goto label_427c30;
    }
    ctx->pc = 0x427C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427C30u);
        ctx->pc = 0x427C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427C28u;
            // 0x427c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x427C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427C30u; }
            if (ctx->pc != 0x427C30u) { return; }
        }
        }
    }
    ctx->pc = 0x427C30u;
label_427c30:
    // 0x427c30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x427c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_427c34:
    // 0x427c34: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x427c34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_427c38:
    // 0x427c38: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x427c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_427c3c:
    // 0x427c3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x427c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_427c40:
    // 0x427c40: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x427c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_427c44:
    // 0x427c44: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x427c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_427c48:
    // 0x427c48: 0xc04cfcc  jal         func_133F30
label_427c4c:
    if (ctx->pc == 0x427C4Cu) {
        ctx->pc = 0x427C4Cu;
            // 0x427c4c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x427C50u;
        goto label_427c50;
    }
    ctx->pc = 0x427C48u;
    SET_GPR_U32(ctx, 31, 0x427C50u);
    ctx->pc = 0x427C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427C48u;
            // 0x427c4c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C50u; }
        if (ctx->pc != 0x427C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C50u; }
        if (ctx->pc != 0x427C50u) { return; }
    }
    ctx->pc = 0x427C50u;
label_427c50:
    // 0x427c50: 0xc68c0168  lwc1        $f12, 0x168($s4)
    ctx->pc = 0x427c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_427c54:
    // 0x427c54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x427c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_427c58:
    // 0x427c58: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x427c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_427c5c:
    // 0x427c5c: 0xc054bbc  jal         func_152EF0
label_427c60:
    if (ctx->pc == 0x427C60u) {
        ctx->pc = 0x427C60u;
            // 0x427c60: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x427C64u;
        goto label_427c64;
    }
    ctx->pc = 0x427C5Cu;
    SET_GPR_U32(ctx, 31, 0x427C64u);
    ctx->pc = 0x427C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427C5Cu;
            // 0x427c60: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C64u; }
        if (ctx->pc != 0x427C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C64u; }
        if (ctx->pc != 0x427C64u) { return; }
    }
    ctx->pc = 0x427C64u;
label_427c64:
    // 0x427c64: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x427c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_427c68:
    // 0x427c68: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x427c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_427c6c:
    // 0x427c6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x427c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_427c70:
    // 0x427c70: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x427c70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_427c74:
    // 0x427c74: 0xc054c2c  jal         func_1530B0
label_427c78:
    if (ctx->pc == 0x427C78u) {
        ctx->pc = 0x427C78u;
            // 0x427c78: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x427C7Cu;
        goto label_427c7c;
    }
    ctx->pc = 0x427C74u;
    SET_GPR_U32(ctx, 31, 0x427C7Cu);
    ctx->pc = 0x427C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427C74u;
            // 0x427c78: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C7Cu; }
        if (ctx->pc != 0x427C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427C7Cu; }
        if (ctx->pc != 0x427C7Cu) { return; }
    }
    ctx->pc = 0x427C7Cu;
label_427c7c:
    // 0x427c7c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x427c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_427c80:
    // 0x427c80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x427c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_427c84:
    // 0x427c84: 0x265200b0  addiu       $s2, $s2, 0xB0
    ctx->pc = 0x427c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_427c88:
    // 0x427c88: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x427c88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_427c8c:
    // 0x427c8c: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_427c90:
    if (ctx->pc == 0x427C90u) {
        ctx->pc = 0x427C90u;
            // 0x427c90: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x427C94u;
        goto label_427c94;
    }
    ctx->pc = 0x427C8Cu;
    {
        const bool branch_taken_0x427c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x427C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427C8Cu;
            // 0x427c90: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427c8c) {
            ctx->pc = 0x427BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_427bf8;
        }
    }
    ctx->pc = 0x427C94u;
label_427c94:
    // 0x427c94: 0x0  nop
    ctx->pc = 0x427c94u;
    // NOP
label_427c98:
    // 0x427c98: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x427c98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_427c9c:
    // 0x427c9c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x427c9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_427ca0:
    // 0x427ca0: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x427ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_427ca4:
    // 0x427ca4: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
label_427ca8:
    if (ctx->pc == 0x427CA8u) {
        ctx->pc = 0x427CA8u;
            // 0x427ca8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x427CACu;
        goto label_427cac;
    }
    ctx->pc = 0x427CA4u;
    {
        const bool branch_taken_0x427ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x427CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427CA4u;
            // 0x427ca8: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ca4) {
            ctx->pc = 0x427B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_427b0c;
        }
    }
    ctx->pc = 0x427CACu;
label_427cac:
    // 0x427cac: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x427cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_427cb0:
    // 0x427cb0: 0x906300a8  lbu         $v1, 0xA8($v1)
    ctx->pc = 0x427cb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_427cb4:
    // 0x427cb4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_427cb8:
    if (ctx->pc == 0x427CB8u) {
        ctx->pc = 0x427CBCu;
        goto label_427cbc;
    }
    ctx->pc = 0x427CB4u;
    {
        const bool branch_taken_0x427cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x427cb4) {
            ctx->pc = 0x427CD4u;
            goto label_427cd4;
        }
    }
    ctx->pc = 0x427CBCu;
label_427cbc:
    // 0x427cbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x427cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_427cc0:
    // 0x427cc0: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x427cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_427cc4:
    // 0x427cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x427cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_427cc8:
    // 0x427cc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x427cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_427ccc:
    // 0x427ccc: 0x320f809  jalr        $t9
label_427cd0:
    if (ctx->pc == 0x427CD0u) {
        ctx->pc = 0x427CD4u;
        goto label_427cd4;
    }
    ctx->pc = 0x427CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427CD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x427CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427CD4u; }
            if (ctx->pc != 0x427CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x427CD4u;
label_427cd4:
    // 0x427cd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x427cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_427cd8:
    // 0x427cd8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x427cd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_427cdc:
    // 0x427cdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x427cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_427ce0:
    // 0x427ce0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x427ce0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_427ce4:
    // 0x427ce4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x427ce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_427ce8:
    // 0x427ce8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x427ce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_427cec:
    // 0x427cec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x427cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_427cf0:
    // 0x427cf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x427cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_427cf4:
    // 0x427cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x427cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_427cf8:
    // 0x427cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x427cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_427cfc:
    // 0x427cfc: 0x3e00008  jr          $ra
label_427d00:
    if (ctx->pc == 0x427D00u) {
        ctx->pc = 0x427D00u;
            // 0x427d00: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x427D04u;
        goto label_427d04;
    }
    ctx->pc = 0x427CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427CFCu;
            // 0x427d00: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x427D04u;
label_427d04:
    // 0x427d04: 0x0  nop
    ctx->pc = 0x427d04u;
    // NOP
label_427d08:
    // 0x427d08: 0x0  nop
    ctx->pc = 0x427d08u;
    // NOP
label_427d0c:
    // 0x427d0c: 0x0  nop
    ctx->pc = 0x427d0cu;
    // NOP
label_427d10:
    // 0x427d10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x427d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_427d14:
    // 0x427d14: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x427d14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_427d18:
    // 0x427d18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x427d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_427d1c:
    // 0x427d1c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x427d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_427d20:
    // 0x427d20: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x427d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_427d24:
    // 0x427d24: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x427d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_427d28:
    // 0x427d28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x427d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_427d2c:
    // 0x427d2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x427d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_427d30:
    // 0x427d30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x427d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_427d34:
    // 0x427d34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x427d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_427d38:
    // 0x427d38: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x427d38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_427d3c:
    // 0x427d3c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x427d3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_427d40:
    // 0x427d40: 0x10ac003f  beq         $a1, $t4, . + 4 + (0x3F << 2)
label_427d44:
    if (ctx->pc == 0x427D44u) {
        ctx->pc = 0x427D44u;
            // 0x427d44: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427D48u;
        goto label_427d48;
    }
    ctx->pc = 0x427D40u;
    {
        const bool branch_taken_0x427d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 12));
        ctx->pc = 0x427D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427D40u;
            // 0x427d44: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427d40) {
            ctx->pc = 0x427E40u;
            goto label_427e40;
        }
    }
    ctx->pc = 0x427D48u;
label_427d48:
    // 0x427d48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x427d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_427d4c:
    // 0x427d4c: 0x50a30039  beql        $a1, $v1, . + 4 + (0x39 << 2)
label_427d50:
    if (ctx->pc == 0x427D50u) {
        ctx->pc = 0x427D50u;
            // 0x427d50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x427D54u;
        goto label_427d54;
    }
    ctx->pc = 0x427D4Cu;
    {
        const bool branch_taken_0x427d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x427d4c) {
            ctx->pc = 0x427D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427D4Cu;
            // 0x427d50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427E34u;
            goto label_427e34;
        }
    }
    ctx->pc = 0x427D54u;
label_427d54:
    // 0x427d54: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x427d54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_427d58:
    // 0x427d58: 0x50ab0003  beql        $a1, $t3, . + 4 + (0x3 << 2)
label_427d5c:
    if (ctx->pc == 0x427D5Cu) {
        ctx->pc = 0x427D5Cu;
            // 0x427d5c: 0x928300a9  lbu         $v1, 0xA9($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 169)));
        ctx->pc = 0x427D60u;
        goto label_427d60;
    }
    ctx->pc = 0x427D58u;
    {
        const bool branch_taken_0x427d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        if (branch_taken_0x427d58) {
            ctx->pc = 0x427D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427D58u;
            // 0x427d5c: 0x928300a9  lbu         $v1, 0xA9($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 169)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427D68u;
            goto label_427d68;
        }
    }
    ctx->pc = 0x427D60u;
label_427d60:
    // 0x427d60: 0x1000012d  b           . + 4 + (0x12D << 2)
label_427d64:
    if (ctx->pc == 0x427D64u) {
        ctx->pc = 0x427D68u;
        goto label_427d68;
    }
    ctx->pc = 0x427D60u;
    {
        const bool branch_taken_0x427d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427d60) {
            ctx->pc = 0x428218u;
            goto label_428218;
        }
    }
    ctx->pc = 0x427D68u;
label_427d68:
    // 0x427d68: 0x1460012b  bnez        $v1, . + 4 + (0x12B << 2)
label_427d6c:
    if (ctx->pc == 0x427D6Cu) {
        ctx->pc = 0x427D70u;
        goto label_427d70;
    }
    ctx->pc = 0x427D68u;
    {
        const bool branch_taken_0x427d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x427d68) {
            ctx->pc = 0x428218u;
            goto label_428218;
        }
    }
    ctx->pc = 0x427D70u;
label_427d70:
    // 0x427d70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_427d74:
    // 0x427d74: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x427d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_427d78:
    // 0x427d78: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x427d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_427d7c:
    // 0x427d7c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x427d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_427d80:
    // 0x427d80: 0x240a61da  addiu       $t2, $zero, 0x61DA
    ctx->pc = 0x427d80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25050));
label_427d84:
    // 0x427d84: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x427d84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
label_427d88:
    // 0x427d88: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x427d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_427d8c:
    // 0x427d8c: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x427d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_427d90:
    // 0x427d90: 0x8c500780  lw          $s0, 0x780($v0)
    ctx->pc = 0x427d90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_427d94:
    // 0x427d94: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x427d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_427d98:
    // 0x427d98: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x427d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_427d9c:
    // 0x427d9c: 0x2484745c  addiu       $a0, $a0, 0x745C
    ctx->pc = 0x427d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29788));
label_427da0:
    // 0x427da0: 0x24a5ca30  addiu       $a1, $a1, -0x35D0
    ctx->pc = 0x427da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
label_427da4:
    // 0x427da4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x427da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427da8:
    // 0x427da8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_427dac:
    // 0x427dac: 0xa50a7450  sh          $t2, 0x7450($t0)
    ctx->pc = 0x427dacu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 29776), (uint16_t)GPR_U32(ctx, 10));
label_427db0:
    // 0x427db0: 0xa0ec7452  sb          $t4, 0x7452($a3)
    ctx->pc = 0x427db0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 29778), (uint8_t)GPR_U32(ctx, 12));
label_427db4:
    // 0x427db4: 0xa0c97453  sb          $t1, 0x7453($a2)
    ctx->pc = 0x427db4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 29779), (uint8_t)GPR_U32(ctx, 9));
label_427db8:
    // 0x427db8: 0xac6b7454  sw          $t3, 0x7454($v1)
    ctx->pc = 0x427db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29780), GPR_U32(ctx, 11));
label_427dbc:
    // 0x427dbc: 0xc04cb1c  jal         func_132C70
label_427dc0:
    if (ctx->pc == 0x427DC0u) {
        ctx->pc = 0x427DC0u;
            // 0x427dc0: 0xac407458  sw          $zero, 0x7458($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29784), GPR_U32(ctx, 0));
        ctx->pc = 0x427DC4u;
        goto label_427dc4;
    }
    ctx->pc = 0x427DBCu;
    SET_GPR_U32(ctx, 31, 0x427DC4u);
    ctx->pc = 0x427DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427DBCu;
            // 0x427dc0: 0xac407458  sw          $zero, 0x7458($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427DC4u; }
        if (ctx->pc != 0x427DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427DC4u; }
        if (ctx->pc != 0x427DC4u) { return; }
    }
    ctx->pc = 0x427DC4u;
label_427dc4:
    // 0x427dc4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x427dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_427dc8:
    // 0x427dc8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x427dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_427dcc:
    // 0x427dcc: 0x24847468  addiu       $a0, $a0, 0x7468
    ctx->pc = 0x427dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29800));
label_427dd0:
    // 0x427dd0: 0xc04cb1c  jal         func_132C70
label_427dd4:
    if (ctx->pc == 0x427DD4u) {
        ctx->pc = 0x427DD4u;
            // 0x427dd4: 0x24a5ca30  addiu       $a1, $a1, -0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
        ctx->pc = 0x427DD8u;
        goto label_427dd8;
    }
    ctx->pc = 0x427DD0u;
    SET_GPR_U32(ctx, 31, 0x427DD8u);
    ctx->pc = 0x427DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427DD0u;
            // 0x427dd4: 0x24a5ca30  addiu       $a1, $a1, -0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427DD8u; }
        if (ctx->pc != 0x427DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427DD8u; }
        if (ctx->pc != 0x427DD8u) { return; }
    }
    ctx->pc = 0x427DD8u;
label_427dd8:
    // 0x427dd8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x427dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_427ddc:
    // 0x427ddc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x427ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_427de0:
    // 0x427de0: 0x24847474  addiu       $a0, $a0, 0x7474
    ctx->pc = 0x427de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29812));
label_427de4:
    // 0x427de4: 0xc04cb1c  jal         func_132C70
label_427de8:
    if (ctx->pc == 0x427DE8u) {
        ctx->pc = 0x427DE8u;
            // 0x427de8: 0x24a5ca30  addiu       $a1, $a1, -0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
        ctx->pc = 0x427DECu;
        goto label_427dec;
    }
    ctx->pc = 0x427DE4u;
    SET_GPR_U32(ctx, 31, 0x427DECu);
    ctx->pc = 0x427DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427DE4u;
            // 0x427de8: 0x24a5ca30  addiu       $a1, $a1, -0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427DECu; }
        if (ctx->pc != 0x427DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427DECu; }
        if (ctx->pc != 0x427DECu) { return; }
    }
    ctx->pc = 0x427DECu;
label_427dec:
    // 0x427dec: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x427decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_427df0:
    // 0x427df0: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x427df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_427df4:
    // 0x427df4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x427df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_427df8:
    // 0x427df8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x427df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_427dfc:
    // 0x427dfc: 0x320f809  jalr        $t9
label_427e00:
    if (ctx->pc == 0x427E00u) {
        ctx->pc = 0x427E00u;
            // 0x427e00: 0x24a57450  addiu       $a1, $a1, 0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29776));
        ctx->pc = 0x427E04u;
        goto label_427e04;
    }
    ctx->pc = 0x427DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427E04u);
        ctx->pc = 0x427E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427DFCu;
            // 0x427e00: 0x24a57450  addiu       $a1, $a1, 0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29776));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x427E04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427E04u; }
            if (ctx->pc != 0x427E04u) { return; }
        }
        }
    }
    ctx->pc = 0x427E04u;
label_427e04:
    // 0x427e04: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x427e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_427e08:
    // 0x427e08: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x427e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_427e0c:
    // 0x427e0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x427e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_427e10:
    // 0x427e10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x427e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_427e14:
    // 0x427e14: 0xac710170  sw          $s1, 0x170($v1)
    ctx->pc = 0x427e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 17));
label_427e18:
    // 0x427e18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x427e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_427e1c:
    // 0x427e1c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x427e1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_427e20:
    // 0x427e20: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_427e24:
    if (ctx->pc == 0x427E24u) {
        ctx->pc = 0x427E24u;
            // 0x427e24: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x427E28u;
        goto label_427e28;
    }
    ctx->pc = 0x427E20u;
    {
        const bool branch_taken_0x427e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x427e20) {
            ctx->pc = 0x427E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427E20u;
            // 0x427e24: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_427df0;
        }
    }
    ctx->pc = 0x427E28u;
label_427e28:
    // 0x427e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x427e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427e2c:
    // 0x427e2c: 0x100000fa  b           . + 4 + (0xFA << 2)
label_427e30:
    if (ctx->pc == 0x427E30u) {
        ctx->pc = 0x427E30u;
            // 0x427e30: 0xa28300a9  sb          $v1, 0xA9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 169), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x427E34u;
        goto label_427e34;
    }
    ctx->pc = 0x427E2Cu;
    {
        const bool branch_taken_0x427e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427E2Cu;
            // 0x427e30: 0xa28300a9  sb          $v1, 0xA9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 169), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427e2c) {
            ctx->pc = 0x428218u;
            goto label_428218;
        }
    }
    ctx->pc = 0x427E34u;
label_427e34:
    // 0x427e34: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x427e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_427e38:
    // 0x427e38: 0x320f809  jalr        $t9
label_427e3c:
    if (ctx->pc == 0x427E3Cu) {
        ctx->pc = 0x427E40u;
        goto label_427e40;
    }
    ctx->pc = 0x427E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427E40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x427E40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427E40u; }
            if (ctx->pc != 0x427E40u) { return; }
        }
        }
    }
    ctx->pc = 0x427E40u;
label_427e40:
    // 0x427e40: 0x8e960070  lw          $s6, 0x70($s4)
    ctx->pc = 0x427e40u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_427e44:
    // 0x427e44: 0x12c000f4  beqz        $s6, . + 4 + (0xF4 << 2)
label_427e48:
    if (ctx->pc == 0x427E48u) {
        ctx->pc = 0x427E4Cu;
        goto label_427e4c;
    }
    ctx->pc = 0x427E44u;
    {
        const bool branch_taken_0x427e44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x427e44) {
            ctx->pc = 0x428218u;
            goto label_428218;
        }
    }
    ctx->pc = 0x427E4Cu;
label_427e4c:
    // 0x427e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x427e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427e50:
    // 0x427e50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x427e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_427e54:
    // 0x427e54: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x427e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_427e58:
    // 0x427e58: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x427e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_427e5c:
    // 0x427e5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x427e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_427e60:
    // 0x427e60: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x427e60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_427e64:
    // 0x427e64: 0xc0b6e44  jal         func_2DB910
label_427e68:
    if (ctx->pc == 0x427E68u) {
        ctx->pc = 0x427E68u;
            // 0x427e68: 0x2484ca00  addiu       $a0, $a0, -0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953472));
        ctx->pc = 0x427E6Cu;
        goto label_427e6c;
    }
    ctx->pc = 0x427E64u;
    SET_GPR_U32(ctx, 31, 0x427E6Cu);
    ctx->pc = 0x427E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427E64u;
            // 0x427e68: 0x2484ca00  addiu       $a0, $a0, -0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427E6Cu; }
        if (ctx->pc != 0x427E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427E6Cu; }
        if (ctx->pc != 0x427E6Cu) { return; }
    }
    ctx->pc = 0x427E6Cu;
label_427e6c:
    // 0x427e6c: 0xc10a220  jal         func_428880
label_427e70:
    if (ctx->pc == 0x427E70u) {
        ctx->pc = 0x427E70u;
            // 0x427e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427E74u;
        goto label_427e74;
    }
    ctx->pc = 0x427E6Cu;
    SET_GPR_U32(ctx, 31, 0x427E74u);
    ctx->pc = 0x427E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427E6Cu;
            // 0x427e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428880u;
    if (runtime->hasFunction(0x428880u)) {
        auto targetFn = runtime->lookupFunction(0x428880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427E74u; }
        if (ctx->pc != 0x427E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428880_0x428880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427E74u; }
        if (ctx->pc != 0x427E74u) { return; }
    }
    ctx->pc = 0x427E74u;
label_427e74:
    // 0x427e74: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x427e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_427e78:
    // 0x427e78: 0x102000df  beqz        $at, . + 4 + (0xDF << 2)
label_427e7c:
    if (ctx->pc == 0x427E7Cu) {
        ctx->pc = 0x427E80u;
        goto label_427e80;
    }
    ctx->pc = 0x427E78u;
    {
        const bool branch_taken_0x427e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x427e78) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x427E80u;
label_427e80:
    // 0x427e80: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x427e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_427e84:
    // 0x427e84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x427e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_427e88:
    // 0x427e88: 0x2463c9d0  addiu       $v1, $v1, -0x3630
    ctx->pc = 0x427e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953424));
label_427e8c:
    // 0x427e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x427e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_427e90:
    // 0x427e90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x427e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_427e94:
    // 0x427e94: 0x400008  jr          $v0
label_427e98:
    if (ctx->pc == 0x427E98u) {
        ctx->pc = 0x427E9Cu;
        goto label_427e9c;
    }
    ctx->pc = 0x427E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x427EA0u: goto label_427ea0;
            case 0x427EB8u: goto label_427eb8;
            case 0x427ED8u: goto label_427ed8;
            case 0x427F38u: goto label_427f38;
            case 0x427F48u: goto label_427f48;
            case 0x428040u: goto label_428040;
            case 0x4281F8u: goto label_4281f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x427E9Cu;
label_427e9c:
    // 0x427e9c: 0x0  nop
    ctx->pc = 0x427e9cu;
    // NOP
label_427ea0:
    // 0x427ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x427ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_427ea4:
    // 0x427ea4: 0xc10a21c  jal         func_428870
label_427ea8:
    if (ctx->pc == 0x427EA8u) {
        ctx->pc = 0x427EA8u;
            // 0x427ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x427EACu;
        goto label_427eac;
    }
    ctx->pc = 0x427EA4u;
    SET_GPR_U32(ctx, 31, 0x427EACu);
    ctx->pc = 0x427EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427EA4u;
            // 0x427ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428870u;
    if (runtime->hasFunction(0x428870u)) {
        auto targetFn = runtime->lookupFunction(0x428870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EACu; }
        if (ctx->pc != 0x427EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428870_0x428870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EACu; }
        if (ctx->pc != 0x427EACu) { return; }
    }
    ctx->pc = 0x427EACu;
label_427eac:
    // 0x427eac: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_427eb0:
    if (ctx->pc == 0x427EB0u) {
        ctx->pc = 0x427EB4u;
        goto label_427eb4;
    }
    ctx->pc = 0x427EACu;
    {
        const bool branch_taken_0x427eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427eac) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x427EB4u;
label_427eb4:
    // 0x427eb4: 0x0  nop
    ctx->pc = 0x427eb4u;
    // NOP
label_427eb8:
    // 0x427eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x427eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_427ebc:
    // 0x427ebc: 0xc10a21c  jal         func_428870
label_427ec0:
    if (ctx->pc == 0x427EC0u) {
        ctx->pc = 0x427EC0u;
            // 0x427ec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x427EC4u;
        goto label_427ec4;
    }
    ctx->pc = 0x427EBCu;
    SET_GPR_U32(ctx, 31, 0x427EC4u);
    ctx->pc = 0x427EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427EBCu;
            // 0x427ec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428870u;
    if (runtime->hasFunction(0x428870u)) {
        auto targetFn = runtime->lookupFunction(0x428870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EC4u; }
        if (ctx->pc != 0x427EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428870_0x428870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EC4u; }
        if (ctx->pc != 0x427EC4u) { return; }
    }
    ctx->pc = 0x427EC4u;
label_427ec4:
    // 0x427ec4: 0xc0d1c14  jal         func_347050
label_427ec8:
    if (ctx->pc == 0x427EC8u) {
        ctx->pc = 0x427EC8u;
            // 0x427ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427ECCu;
        goto label_427ecc;
    }
    ctx->pc = 0x427EC4u;
    SET_GPR_U32(ctx, 31, 0x427ECCu);
    ctx->pc = 0x427EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427EC4u;
            // 0x427ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427ECCu; }
        if (ctx->pc != 0x427ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427ECCu; }
        if (ctx->pc != 0x427ECCu) { return; }
    }
    ctx->pc = 0x427ECCu;
label_427ecc:
    // 0x427ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x427eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_427ed0:
    // 0x427ed0: 0xc0c05e0  jal         func_301780
label_427ed4:
    if (ctx->pc == 0x427ED4u) {
        ctx->pc = 0x427ED4u;
            // 0x427ed4: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x427ED8u;
        goto label_427ed8;
    }
    ctx->pc = 0x427ED0u;
    SET_GPR_U32(ctx, 31, 0x427ED8u);
    ctx->pc = 0x427ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427ED0u;
            // 0x427ed4: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427ED8u; }
        if (ctx->pc != 0x427ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427ED8u; }
        if (ctx->pc != 0x427ED8u) { return; }
    }
    ctx->pc = 0x427ED8u;
label_427ed8:
    // 0x427ed8: 0xc0775b8  jal         func_1DD6E0
label_427edc:
    if (ctx->pc == 0x427EDCu) {
        ctx->pc = 0x427EE0u;
        goto label_427ee0;
    }
    ctx->pc = 0x427ED8u;
    SET_GPR_U32(ctx, 31, 0x427EE0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EE0u; }
        if (ctx->pc != 0x427EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EE0u; }
        if (ctx->pc != 0x427EE0u) { return; }
    }
    ctx->pc = 0x427EE0u;
label_427ee0:
    // 0x427ee0: 0xc0775b4  jal         func_1DD6D0
label_427ee4:
    if (ctx->pc == 0x427EE4u) {
        ctx->pc = 0x427EE4u;
            // 0x427ee4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x427EE8u;
        goto label_427ee8;
    }
    ctx->pc = 0x427EE0u;
    SET_GPR_U32(ctx, 31, 0x427EE8u);
    ctx->pc = 0x427EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427EE0u;
            // 0x427ee4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EE8u; }
        if (ctx->pc != 0x427EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427EE8u; }
        if (ctx->pc != 0x427EE8u) { return; }
    }
    ctx->pc = 0x427EE8u;
label_427ee8:
    // 0x427ee8: 0xc622016c  lwc1        $f2, 0x16C($s1)
    ctx->pc = 0x427ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_427eec:
    // 0x427eec: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x427eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_427ef0:
    // 0x427ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x427ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_427ef4:
    // 0x427ef4: 0x0  nop
    ctx->pc = 0x427ef4u;
    // NOP
label_427ef8:
    // 0x427ef8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x427ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_427efc:
    // 0x427efc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x427efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_427f00:
    // 0x427f00: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_427f04:
    if (ctx->pc == 0x427F04u) {
        ctx->pc = 0x427F04u;
            // 0x427f04: 0xe620016c  swc1        $f0, 0x16C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
        ctx->pc = 0x427F08u;
        goto label_427f08;
    }
    ctx->pc = 0x427F00u;
    {
        const bool branch_taken_0x427f00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x427F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427F00u;
            // 0x427f04: 0xe620016c  swc1        $f0, 0x16C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x427f00) {
            ctx->pc = 0x427F38u;
            goto label_427f38;
        }
    }
    ctx->pc = 0x427F08u;
label_427f08:
    // 0x427f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x427f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_427f0c:
    // 0x427f0c: 0xc10a21c  jal         func_428870
label_427f10:
    if (ctx->pc == 0x427F10u) {
        ctx->pc = 0x427F10u;
            // 0x427f10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x427F14u;
        goto label_427f14;
    }
    ctx->pc = 0x427F0Cu;
    SET_GPR_U32(ctx, 31, 0x427F14u);
    ctx->pc = 0x427F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427F0Cu;
            // 0x427f10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428870u;
    if (runtime->hasFunction(0x428870u)) {
        auto targetFn = runtime->lookupFunction(0x428870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F14u; }
        if (ctx->pc != 0x427F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428870_0x428870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F14u; }
        if (ctx->pc != 0x427F14u) { return; }
    }
    ctx->pc = 0x427F14u;
label_427f14:
    // 0x427f14: 0xc0f0e90  jal         func_3C3A40
label_427f18:
    if (ctx->pc == 0x427F18u) {
        ctx->pc = 0x427F1Cu;
        goto label_427f1c;
    }
    ctx->pc = 0x427F14u;
    SET_GPR_U32(ctx, 31, 0x427F1Cu);
    ctx->pc = 0x3C3A40u;
    if (runtime->hasFunction(0x3C3A40u)) {
        auto targetFn = runtime->lookupFunction(0x3C3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F1Cu; }
        if (ctx->pc != 0x427F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3A40_0x3c3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F1Cu; }
        if (ctx->pc != 0x427F1Cu) { return; }
    }
    ctx->pc = 0x427F1Cu;
label_427f1c:
    // 0x427f1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x427f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_427f20:
    // 0x427f20: 0xc10a218  jal         func_428860
label_427f24:
    if (ctx->pc == 0x427F24u) {
        ctx->pc = 0x427F24u;
            // 0x427f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427F28u;
        goto label_427f28;
    }
    ctx->pc = 0x427F20u;
    SET_GPR_U32(ctx, 31, 0x427F28u);
    ctx->pc = 0x427F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427F20u;
            // 0x427f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428860u;
    if (runtime->hasFunction(0x428860u)) {
        auto targetFn = runtime->lookupFunction(0x428860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F28u; }
        if (ctx->pc != 0x427F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428860_0x428860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F28u; }
        if (ctx->pc != 0x427F28u) { return; }
    }
    ctx->pc = 0x427F28u;
label_427f28:
    // 0x427f28: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x427f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_427f2c:
    // 0x427f2c: 0xc0f0d68  jal         func_3C35A0
label_427f30:
    if (ctx->pc == 0x427F30u) {
        ctx->pc = 0x427F30u;
            // 0x427f30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427F34u;
        goto label_427f34;
    }
    ctx->pc = 0x427F2Cu;
    SET_GPR_U32(ctx, 31, 0x427F34u);
    ctx->pc = 0x427F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427F2Cu;
            // 0x427f30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C35A0u;
    if (runtime->hasFunction(0x3C35A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C35A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F34u; }
        if (ctx->pc != 0x427F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C35A0_0x3c35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F34u; }
        if (ctx->pc != 0x427F34u) { return; }
    }
    ctx->pc = 0x427F34u;
label_427f34:
    // 0x427f34: 0x0  nop
    ctx->pc = 0x427f34u;
    // NOP
label_427f38:
    // 0x427f38: 0xc10a0dc  jal         func_428370
label_427f3c:
    if (ctx->pc == 0x427F3Cu) {
        ctx->pc = 0x427F3Cu;
            // 0x427f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427F40u;
        goto label_427f40;
    }
    ctx->pc = 0x427F38u;
    SET_GPR_U32(ctx, 31, 0x427F40u);
    ctx->pc = 0x427F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427F38u;
            // 0x427f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428370u;
    if (runtime->hasFunction(0x428370u)) {
        auto targetFn = runtime->lookupFunction(0x428370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F40u; }
        if (ctx->pc != 0x427F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428370_0x428370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F40u; }
        if (ctx->pc != 0x427F40u) { return; }
    }
    ctx->pc = 0x427F40u;
label_427f40:
    // 0x427f40: 0x100000ad  b           . + 4 + (0xAD << 2)
label_427f44:
    if (ctx->pc == 0x427F44u) {
        ctx->pc = 0x427F48u;
        goto label_427f48;
    }
    ctx->pc = 0x427F40u;
    {
        const bool branch_taken_0x427f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427f40) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x427F48u;
label_427f48:
    // 0x427f48: 0xc10a0dc  jal         func_428370
label_427f4c:
    if (ctx->pc == 0x427F4Cu) {
        ctx->pc = 0x427F4Cu;
            // 0x427f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427F50u;
        goto label_427f50;
    }
    ctx->pc = 0x427F48u;
    SET_GPR_U32(ctx, 31, 0x427F50u);
    ctx->pc = 0x427F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427F48u;
            // 0x427f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428370u;
    if (runtime->hasFunction(0x428370u)) {
        auto targetFn = runtime->lookupFunction(0x428370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F50u; }
        if (ctx->pc != 0x427F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428370_0x428370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F50u; }
        if (ctx->pc != 0x427F50u) { return; }
    }
    ctx->pc = 0x427F50u;
label_427f50:
    // 0x427f50: 0xc0775b8  jal         func_1DD6E0
label_427f54:
    if (ctx->pc == 0x427F54u) {
        ctx->pc = 0x427F58u;
        goto label_427f58;
    }
    ctx->pc = 0x427F50u;
    SET_GPR_U32(ctx, 31, 0x427F58u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F58u; }
        if (ctx->pc != 0x427F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F58u; }
        if (ctx->pc != 0x427F58u) { return; }
    }
    ctx->pc = 0x427F58u;
label_427f58:
    // 0x427f58: 0xc0775b4  jal         func_1DD6D0
label_427f5c:
    if (ctx->pc == 0x427F5Cu) {
        ctx->pc = 0x427F5Cu;
            // 0x427f5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x427F60u;
        goto label_427f60;
    }
    ctx->pc = 0x427F58u;
    SET_GPR_U32(ctx, 31, 0x427F60u);
    ctx->pc = 0x427F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427F58u;
            // 0x427f5c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F60u; }
        if (ctx->pc != 0x427F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F60u; }
        if (ctx->pc != 0x427F60u) { return; }
    }
    ctx->pc = 0x427F60u;
label_427f60:
    // 0x427f60: 0xc622016c  lwc1        $f2, 0x16C($s1)
    ctx->pc = 0x427f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_427f64:
    // 0x427f64: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x427f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_427f68:
    // 0x427f68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x427f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_427f6c:
    // 0x427f6c: 0x0  nop
    ctx->pc = 0x427f6cu;
    // NOP
label_427f70:
    // 0x427f70: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x427f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_427f74:
    // 0x427f74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x427f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_427f78:
    // 0x427f78: 0x4500009f  bc1f        . + 4 + (0x9F << 2)
label_427f7c:
    if (ctx->pc == 0x427F7Cu) {
        ctx->pc = 0x427F7Cu;
            // 0x427f7c: 0xe620016c  swc1        $f0, 0x16C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
        ctx->pc = 0x427F80u;
        goto label_427f80;
    }
    ctx->pc = 0x427F78u;
    {
        const bool branch_taken_0x427f78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x427F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427F78u;
            // 0x427f7c: 0xe620016c  swc1        $f0, 0x16C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x427f78) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x427F80u;
label_427f80:
    // 0x427f80: 0xc10a218  jal         func_428860
label_427f84:
    if (ctx->pc == 0x427F84u) {
        ctx->pc = 0x427F84u;
            // 0x427f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427F88u;
        goto label_427f88;
    }
    ctx->pc = 0x427F80u;
    SET_GPR_U32(ctx, 31, 0x427F88u);
    ctx->pc = 0x427F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427F80u;
            // 0x427f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428860u;
    if (runtime->hasFunction(0x428860u)) {
        auto targetFn = runtime->lookupFunction(0x428860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F88u; }
        if (ctx->pc != 0x427F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428860_0x428860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427F88u; }
        if (ctx->pc != 0x427F88u) { return; }
    }
    ctx->pc = 0x427F88u;
label_427f88:
    // 0x427f88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x427f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_427f8c:
    // 0x427f8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_427f90:
    // 0x427f90: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x427f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_427f94:
    // 0x427f94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x427f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_427f98:
    // 0x427f98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_427f9c:
    // 0x427f9c: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x427f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_427fa0:
    // 0x427fa0: 0xc0770b4  jal         func_1DC2D0
label_427fa4:
    if (ctx->pc == 0x427FA4u) {
        ctx->pc = 0x427FA4u;
            // 0x427fa4: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x427FA8u;
        goto label_427fa8;
    }
    ctx->pc = 0x427FA0u;
    SET_GPR_U32(ctx, 31, 0x427FA8u);
    ctx->pc = 0x427FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FA0u;
            // 0x427fa4: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2D0u;
    if (runtime->hasFunction(0x1DC2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FA8u; }
        if (ctx->pc != 0x427FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2D0_0x1dc2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FA8u; }
        if (ctx->pc != 0x427FA8u) { return; }
    }
    ctx->pc = 0x427FA8u;
label_427fa8:
    // 0x427fa8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x427fa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_427fac:
    // 0x427fac: 0xc10a218  jal         func_428860
label_427fb0:
    if (ctx->pc == 0x427FB0u) {
        ctx->pc = 0x427FB0u;
            // 0x427fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427FB4u;
        goto label_427fb4;
    }
    ctx->pc = 0x427FACu;
    SET_GPR_U32(ctx, 31, 0x427FB4u);
    ctx->pc = 0x427FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FACu;
            // 0x427fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428860u;
    if (runtime->hasFunction(0x428860u)) {
        auto targetFn = runtime->lookupFunction(0x428860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FB4u; }
        if (ctx->pc != 0x427FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428860_0x428860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FB4u; }
        if (ctx->pc != 0x427FB4u) { return; }
    }
    ctx->pc = 0x427FB4u;
label_427fb4:
    // 0x427fb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x427fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_427fb8:
    // 0x427fb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x427fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_427fbc:
    // 0x427fbc: 0xc0bc1d4  jal         func_2F0750
label_427fc0:
    if (ctx->pc == 0x427FC0u) {
        ctx->pc = 0x427FC0u;
            // 0x427fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427FC4u;
        goto label_427fc4;
    }
    ctx->pc = 0x427FBCu;
    SET_GPR_U32(ctx, 31, 0x427FC4u);
    ctx->pc = 0x427FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FBCu;
            // 0x427fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FC4u; }
        if (ctx->pc != 0x427FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FC4u; }
        if (ctx->pc != 0x427FC4u) { return; }
    }
    ctx->pc = 0x427FC4u;
label_427fc4:
    // 0x427fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x427fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_427fc8:
    // 0x427fc8: 0xc10a0d8  jal         func_428360
label_427fcc:
    if (ctx->pc == 0x427FCCu) {
        ctx->pc = 0x427FCCu;
            // 0x427fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x427FD0u;
        goto label_427fd0;
    }
    ctx->pc = 0x427FC8u;
    SET_GPR_U32(ctx, 31, 0x427FD0u);
    ctx->pc = 0x427FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FC8u;
            // 0x427fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428360u;
    if (runtime->hasFunction(0x428360u)) {
        auto targetFn = runtime->lookupFunction(0x428360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FD0u; }
        if (ctx->pc != 0x427FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428360_0x428360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FD0u; }
        if (ctx->pc != 0x427FD0u) { return; }
    }
    ctx->pc = 0x427FD0u;
label_427fd0:
    // 0x427fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x427fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_427fd4:
    // 0x427fd4: 0xc0770ac  jal         func_1DC2B0
label_427fd8:
    if (ctx->pc == 0x427FD8u) {
        ctx->pc = 0x427FD8u;
            // 0x427fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427FDCu;
        goto label_427fdc;
    }
    ctx->pc = 0x427FD4u;
    SET_GPR_U32(ctx, 31, 0x427FDCu);
    ctx->pc = 0x427FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FD4u;
            // 0x427fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2B0u;
    if (runtime->hasFunction(0x1DC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FDCu; }
        if (ctx->pc != 0x427FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2B0_0x1dc2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FDCu; }
        if (ctx->pc != 0x427FDCu) { return; }
    }
    ctx->pc = 0x427FDCu;
label_427fdc:
    // 0x427fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x427fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_427fe0:
    // 0x427fe0: 0xc0770b8  jal         func_1DC2E0
label_427fe4:
    if (ctx->pc == 0x427FE4u) {
        ctx->pc = 0x427FE4u;
            // 0x427fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x427FE8u;
        goto label_427fe8;
    }
    ctx->pc = 0x427FE0u;
    SET_GPR_U32(ctx, 31, 0x427FE8u);
    ctx->pc = 0x427FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FE0u;
            // 0x427fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC2E0u;
    if (runtime->hasFunction(0x1DC2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FE8u; }
        if (ctx->pc != 0x427FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC2E0_0x1dc2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FE8u; }
        if (ctx->pc != 0x427FE8u) { return; }
    }
    ctx->pc = 0x427FE8u;
label_427fe8:
    // 0x427fe8: 0xc10a0d4  jal         func_428350
label_427fec:
    if (ctx->pc == 0x427FECu) {
        ctx->pc = 0x427FECu;
            // 0x427fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427FF0u;
        goto label_427ff0;
    }
    ctx->pc = 0x427FE8u;
    SET_GPR_U32(ctx, 31, 0x427FF0u);
    ctx->pc = 0x427FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FE8u;
            // 0x427fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428350u;
    if (runtime->hasFunction(0x428350u)) {
        auto targetFn = runtime->lookupFunction(0x428350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FF0u; }
        if (ctx->pc != 0x427FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428350_0x428350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FF0u; }
        if (ctx->pc != 0x427FF0u) { return; }
    }
    ctx->pc = 0x427FF0u;
label_427ff0:
    // 0x427ff0: 0xc10a0c0  jal         func_428300
label_427ff4:
    if (ctx->pc == 0x427FF4u) {
        ctx->pc = 0x427FF4u;
            // 0x427ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427FF8u;
        goto label_427ff8;
    }
    ctx->pc = 0x427FF0u;
    SET_GPR_U32(ctx, 31, 0x427FF8u);
    ctx->pc = 0x427FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FF0u;
            // 0x427ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428300u;
    if (runtime->hasFunction(0x428300u)) {
        auto targetFn = runtime->lookupFunction(0x428300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FF8u; }
        if (ctx->pc != 0x427FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428300_0x428300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427FF8u; }
        if (ctx->pc != 0x427FF8u) { return; }
    }
    ctx->pc = 0x427FF8u;
label_427ff8:
    // 0x427ff8: 0xc10a218  jal         func_428860
label_427ffc:
    if (ctx->pc == 0x427FFCu) {
        ctx->pc = 0x427FFCu;
            // 0x427ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428000u;
        goto label_428000;
    }
    ctx->pc = 0x427FF8u;
    SET_GPR_U32(ctx, 31, 0x428000u);
    ctx->pc = 0x427FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427FF8u;
            // 0x427ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428860u;
    if (runtime->hasFunction(0x428860u)) {
        auto targetFn = runtime->lookupFunction(0x428860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428000u; }
        if (ctx->pc != 0x428000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428860_0x428860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428000u; }
        if (ctx->pc != 0x428000u) { return; }
    }
    ctx->pc = 0x428000u;
label_428000:
    // 0x428000: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
label_428004:
    if (ctx->pc == 0x428004u) {
        ctx->pc = 0x428008u;
        goto label_428008;
    }
    ctx->pc = 0x428000u;
    {
        const bool branch_taken_0x428000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x428000) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x428008u;
label_428008:
    // 0x428008: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42800c:
    // 0x42800c: 0xc0c2db4  jal         func_30B6D0
label_428010:
    if (ctx->pc == 0x428010u) {
        ctx->pc = 0x428010u;
            // 0x428010: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->pc = 0x428014u;
        goto label_428014;
    }
    ctx->pc = 0x42800Cu;
    SET_GPR_U32(ctx, 31, 0x428014u);
    ctx->pc = 0x428010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42800Cu;
            // 0x428010: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30B6D0u;
    if (runtime->hasFunction(0x30B6D0u)) {
        auto targetFn = runtime->lookupFunction(0x30B6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428014u; }
        if (ctx->pc != 0x428014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030B6D0_0x30b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428014u; }
        if (ctx->pc != 0x428014u) { return; }
    }
    ctx->pc = 0x428014u;
label_428014:
    // 0x428014: 0xc10a0bc  jal         func_4282F0
label_428018:
    if (ctx->pc == 0x428018u) {
        ctx->pc = 0x42801Cu;
        goto label_42801c;
    }
    ctx->pc = 0x428014u;
    SET_GPR_U32(ctx, 31, 0x42801Cu);
    ctx->pc = 0x4282F0u;
    if (runtime->hasFunction(0x4282F0u)) {
        auto targetFn = runtime->lookupFunction(0x4282F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42801Cu; }
        if (ctx->pc != 0x42801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004282F0_0x4282f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42801Cu; }
        if (ctx->pc != 0x42801Cu) { return; }
    }
    ctx->pc = 0x42801Cu;
label_42801c:
    // 0x42801c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_428020:
    if (ctx->pc == 0x428020u) {
        ctx->pc = 0x428024u;
        goto label_428024;
    }
    ctx->pc = 0x42801Cu;
    {
        const bool branch_taken_0x42801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42801c) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x428024u;
label_428024:
    // 0x428024: 0xc10a0bc  jal         func_4282F0
label_428028:
    if (ctx->pc == 0x428028u) {
        ctx->pc = 0x42802Cu;
        goto label_42802c;
    }
    ctx->pc = 0x428024u;
    SET_GPR_U32(ctx, 31, 0x42802Cu);
    ctx->pc = 0x4282F0u;
    if (runtime->hasFunction(0x4282F0u)) {
        auto targetFn = runtime->lookupFunction(0x4282F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42802Cu; }
        if (ctx->pc != 0x42802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004282F0_0x4282f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42802Cu; }
        if (ctx->pc != 0x42802Cu) { return; }
    }
    ctx->pc = 0x42802Cu;
label_42802c:
    // 0x42802c: 0xc132f0c  jal         func_4CBC30
label_428030:
    if (ctx->pc == 0x428030u) {
        ctx->pc = 0x428030u;
            // 0x428030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428034u;
        goto label_428034;
    }
    ctx->pc = 0x42802Cu;
    SET_GPR_U32(ctx, 31, 0x428034u);
    ctx->pc = 0x428030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42802Cu;
            // 0x428030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBC30u;
    if (runtime->hasFunction(0x4CBC30u)) {
        auto targetFn = runtime->lookupFunction(0x4CBC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428034u; }
        if (ctx->pc != 0x428034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CBC30_0x4cbc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428034u; }
        if (ctx->pc != 0x428034u) { return; }
    }
    ctx->pc = 0x428034u;
label_428034:
    // 0x428034: 0x10000070  b           . + 4 + (0x70 << 2)
label_428038:
    if (ctx->pc == 0x428038u) {
        ctx->pc = 0x42803Cu;
        goto label_42803c;
    }
    ctx->pc = 0x428034u;
    {
        const bool branch_taken_0x428034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x428034) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x42803Cu;
label_42803c:
    // 0x42803c: 0x0  nop
    ctx->pc = 0x42803cu;
    // NOP
label_428040:
    // 0x428040: 0xc10a218  jal         func_428860
label_428044:
    if (ctx->pc == 0x428044u) {
        ctx->pc = 0x428044u;
            // 0x428044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428048u;
        goto label_428048;
    }
    ctx->pc = 0x428040u;
    SET_GPR_U32(ctx, 31, 0x428048u);
    ctx->pc = 0x428044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428040u;
            // 0x428044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428860u;
    if (runtime->hasFunction(0x428860u)) {
        auto targetFn = runtime->lookupFunction(0x428860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428048u; }
        if (ctx->pc != 0x428048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428860_0x428860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428048u; }
        if (ctx->pc != 0x428048u) { return; }
    }
    ctx->pc = 0x428048u;
label_428048:
    // 0x428048: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x428048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42804c:
    // 0x42804c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42804cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_428050:
    // 0x428050: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x428050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_428054:
    // 0x428054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x428054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_428058:
    // 0x428058: 0xc077574  jal         func_1DD5D0
label_42805c:
    if (ctx->pc == 0x42805Cu) {
        ctx->pc = 0x42805Cu;
            // 0x42805c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x428060u;
        goto label_428060;
    }
    ctx->pc = 0x428058u;
    SET_GPR_U32(ctx, 31, 0x428060u);
    ctx->pc = 0x42805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428058u;
            // 0x42805c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428060u; }
        if (ctx->pc != 0x428060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428060u; }
        if (ctx->pc != 0x428060u) { return; }
    }
    ctx->pc = 0x428060u;
label_428060:
    // 0x428060: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x428060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_428064:
    // 0x428064: 0x10430064  beq         $v0, $v1, . + 4 + (0x64 << 2)
label_428068:
    if (ctx->pc == 0x428068u) {
        ctx->pc = 0x42806Cu;
        goto label_42806c;
    }
    ctx->pc = 0x428064u;
    {
        const bool branch_taken_0x428064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x428064) {
            ctx->pc = 0x4281F8u;
            goto label_4281f8;
        }
    }
    ctx->pc = 0x42806Cu;
label_42806c:
    // 0x42806c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_428070:
    // 0x428070: 0xc0f0d18  jal         func_3C3460
label_428074:
    if (ctx->pc == 0x428074u) {
        ctx->pc = 0x428074u;
            // 0x428074: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x428078u;
        goto label_428078;
    }
    ctx->pc = 0x428070u;
    SET_GPR_U32(ctx, 31, 0x428078u);
    ctx->pc = 0x428074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428070u;
            // 0x428074: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3460u;
    if (runtime->hasFunction(0x3C3460u)) {
        auto targetFn = runtime->lookupFunction(0x3C3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428078u; }
        if (ctx->pc != 0x428078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3460_0x3c3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428078u; }
        if (ctx->pc != 0x428078u) { return; }
    }
    ctx->pc = 0x428078u;
label_428078:
    // 0x428078: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x428078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
label_42807c:
    // 0x42807c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x42807cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_428080:
    // 0x428080: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x428080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_428084:
    // 0x428084: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_428088:
    if (ctx->pc == 0x428088u) {
        ctx->pc = 0x42808Cu;
        goto label_42808c;
    }
    ctx->pc = 0x428084u;
    {
        const bool branch_taken_0x428084 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x428084) {
            ctx->pc = 0x428098u;
            goto label_428098;
        }
    }
    ctx->pc = 0x42808Cu;
label_42808c:
    // 0x42808c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x42808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_428090:
    // 0x428090: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x428090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_428094:
    // 0x428094: 0x0  nop
    ctx->pc = 0x428094u;
    // NOP
label_428098:
    // 0x428098: 0xc0cf0e4  jal         func_33C390
label_42809c:
    if (ctx->pc == 0x42809Cu) {
        ctx->pc = 0x4280A0u;
        goto label_4280a0;
    }
    ctx->pc = 0x428098u;
    SET_GPR_U32(ctx, 31, 0x4280A0u);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280A0u; }
        if (ctx->pc != 0x4280A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280A0u; }
        if (ctx->pc != 0x4280A0u) { return; }
    }
    ctx->pc = 0x4280A0u;
label_4280a0:
    // 0x4280a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4280a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4280a4:
    // 0x4280a4: 0xc0ceff0  jal         func_33BFC0
label_4280a8:
    if (ctx->pc == 0x4280A8u) {
        ctx->pc = 0x4280A8u;
            // 0x4280a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4280ACu;
        goto label_4280ac;
    }
    ctx->pc = 0x4280A4u;
    SET_GPR_U32(ctx, 31, 0x4280ACu);
    ctx->pc = 0x4280A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4280A4u;
            // 0x4280a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280ACu; }
        if (ctx->pc != 0x4280ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280ACu; }
        if (ctx->pc != 0x4280ACu) { return; }
    }
    ctx->pc = 0x4280ACu;
label_4280ac:
    // 0x4280ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4280acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4280b0:
    // 0x4280b0: 0xc10a0b8  jal         func_4282E0
label_4280b4:
    if (ctx->pc == 0x4280B4u) {
        ctx->pc = 0x4280B4u;
            // 0x4280b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4280B8u;
        goto label_4280b8;
    }
    ctx->pc = 0x4280B0u;
    SET_GPR_U32(ctx, 31, 0x4280B8u);
    ctx->pc = 0x4280B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4280B0u;
            // 0x4280b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4282E0u;
    if (runtime->hasFunction(0x4282E0u)) {
        auto targetFn = runtime->lookupFunction(0x4282E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280B8u; }
        if (ctx->pc != 0x4280B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004282E0_0x4282e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280B8u; }
        if (ctx->pc != 0x4280B8u) { return; }
    }
    ctx->pc = 0x4280B8u;
label_4280b8:
    // 0x4280b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4280b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4280bc:
    // 0x4280bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4280bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4280c0:
    // 0x4280c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4280c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4280c4:
    // 0x4280c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4280c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4280c8:
    // 0x4280c8: 0xc0b89e4  jal         func_2E2790
label_4280cc:
    if (ctx->pc == 0x4280CCu) {
        ctx->pc = 0x4280CCu;
            // 0x4280cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4280D0u;
        goto label_4280d0;
    }
    ctx->pc = 0x4280C8u;
    SET_GPR_U32(ctx, 31, 0x4280D0u);
    ctx->pc = 0x4280CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4280C8u;
            // 0x4280cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280D0u; }
        if (ctx->pc != 0x4280D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280D0u; }
        if (ctx->pc != 0x4280D0u) { return; }
    }
    ctx->pc = 0x4280D0u;
label_4280d0:
    // 0x4280d0: 0xc10a218  jal         func_428860
label_4280d4:
    if (ctx->pc == 0x4280D4u) {
        ctx->pc = 0x4280D4u;
            // 0x4280d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4280D8u;
        goto label_4280d8;
    }
    ctx->pc = 0x4280D0u;
    SET_GPR_U32(ctx, 31, 0x4280D8u);
    ctx->pc = 0x4280D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4280D0u;
            // 0x4280d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428860u;
    if (runtime->hasFunction(0x428860u)) {
        auto targetFn = runtime->lookupFunction(0x428860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280D8u; }
        if (ctx->pc != 0x4280D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428860_0x428860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280D8u; }
        if (ctx->pc != 0x4280D8u) { return; }
    }
    ctx->pc = 0x4280D8u;
label_4280d8:
    // 0x4280d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4280d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4280dc:
    // 0x4280dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4280dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4280e0:
    // 0x4280e0: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x4280e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_4280e4:
    // 0x4280e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4280e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4280e8:
    // 0x4280e8: 0xc07753c  jal         func_1DD4F0
label_4280ec:
    if (ctx->pc == 0x4280ECu) {
        ctx->pc = 0x4280ECu;
            // 0x4280ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x4280F0u;
        goto label_4280f0;
    }
    ctx->pc = 0x4280E8u;
    SET_GPR_U32(ctx, 31, 0x4280F0u);
    ctx->pc = 0x4280ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4280E8u;
            // 0x4280ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280F0u; }
        if (ctx->pc != 0x4280F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4280F0u; }
        if (ctx->pc != 0x4280F0u) { return; }
    }
    ctx->pc = 0x4280F0u;
label_4280f0:
    // 0x4280f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4280f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4280f4:
    // 0x4280f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4280f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4280f8:
    // 0x4280f8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4280f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4280fc:
    // 0x4280fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4280fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428100:
    // 0x428100: 0xc0b82c4  jal         func_2E0B10
label_428104:
    if (ctx->pc == 0x428104u) {
        ctx->pc = 0x428104u;
            // 0x428104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428108u;
        goto label_428108;
    }
    ctx->pc = 0x428100u;
    SET_GPR_U32(ctx, 31, 0x428108u);
    ctx->pc = 0x428104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428100u;
            // 0x428104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428108u; }
        if (ctx->pc != 0x428108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428108u; }
        if (ctx->pc != 0x428108u) { return; }
    }
    ctx->pc = 0x428108u;
label_428108:
    // 0x428108: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x428108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_42810c:
    // 0x42810c: 0xc0b8160  jal         func_2E0580
label_428110:
    if (ctx->pc == 0x428110u) {
        ctx->pc = 0x428110u;
            // 0x428110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428114u;
        goto label_428114;
    }
    ctx->pc = 0x42810Cu;
    SET_GPR_U32(ctx, 31, 0x428114u);
    ctx->pc = 0x428110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42810Cu;
            // 0x428110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428114u; }
        if (ctx->pc != 0x428114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428114u; }
        if (ctx->pc != 0x428114u) { return; }
    }
    ctx->pc = 0x428114u;
label_428114:
    // 0x428114: 0xc0e5f64  jal         func_397D90
label_428118:
    if (ctx->pc == 0x428118u) {
        ctx->pc = 0x428118u;
            // 0x428118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42811Cu;
        goto label_42811c;
    }
    ctx->pc = 0x428114u;
    SET_GPR_U32(ctx, 31, 0x42811Cu);
    ctx->pc = 0x428118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428114u;
            // 0x428118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397D90u;
    if (runtime->hasFunction(0x397D90u)) {
        auto targetFn = runtime->lookupFunction(0x397D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42811Cu; }
        if (ctx->pc != 0x42811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397D90_0x397d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42811Cu; }
        if (ctx->pc != 0x42811Cu) { return; }
    }
    ctx->pc = 0x42811Cu;
label_42811c:
    // 0x42811c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42811cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_428120:
    // 0x428120: 0xc04cc04  jal         func_133010
label_428124:
    if (ctx->pc == 0x428124u) {
        ctx->pc = 0x428124u;
            // 0x428124: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x428128u;
        goto label_428128;
    }
    ctx->pc = 0x428120u;
    SET_GPR_U32(ctx, 31, 0x428128u);
    ctx->pc = 0x428124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428120u;
            // 0x428124: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428128u; }
        if (ctx->pc != 0x428128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428128u; }
        if (ctx->pc != 0x428128u) { return; }
    }
    ctx->pc = 0x428128u;
label_428128:
    // 0x428128: 0xc0cefec  jal         func_33BFB0
label_42812c:
    if (ctx->pc == 0x42812Cu) {
        ctx->pc = 0x42812Cu;
            // 0x42812c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428130u;
        goto label_428130;
    }
    ctx->pc = 0x428128u;
    SET_GPR_U32(ctx, 31, 0x428130u);
    ctx->pc = 0x42812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428128u;
            // 0x42812c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428130u; }
        if (ctx->pc != 0x428130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428130u; }
        if (ctx->pc != 0x428130u) { return; }
    }
    ctx->pc = 0x428130u;
label_428130:
    // 0x428130: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x428130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_428134:
    // 0x428134: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x428134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_428138:
    // 0x428138: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x428138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_42813c:
    // 0x42813c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42813cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_428140:
    // 0x428140: 0xc04cc7c  jal         func_1331F0
label_428144:
    if (ctx->pc == 0x428144u) {
        ctx->pc = 0x428144u;
            // 0x428144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428148u;
        goto label_428148;
    }
    ctx->pc = 0x428140u;
    SET_GPR_U32(ctx, 31, 0x428148u);
    ctx->pc = 0x428144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428140u;
            // 0x428144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428148u; }
        if (ctx->pc != 0x428148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428148u; }
        if (ctx->pc != 0x428148u) { return; }
    }
    ctx->pc = 0x428148u;
label_428148:
    // 0x428148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x428148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42814c:
    // 0x42814c: 0xc0f8e34  jal         func_3E38D0
label_428150:
    if (ctx->pc == 0x428150u) {
        ctx->pc = 0x428150u;
            // 0x428150: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x428154u;
        goto label_428154;
    }
    ctx->pc = 0x42814Cu;
    SET_GPR_U32(ctx, 31, 0x428154u);
    ctx->pc = 0x428150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42814Cu;
            // 0x428150: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428154u; }
        if (ctx->pc != 0x428154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428154u; }
        if (ctx->pc != 0x428154u) { return; }
    }
    ctx->pc = 0x428154u;
label_428154:
    // 0x428154: 0xc0cefec  jal         func_33BFB0
label_428158:
    if (ctx->pc == 0x428158u) {
        ctx->pc = 0x428158u;
            // 0x428158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42815Cu;
        goto label_42815c;
    }
    ctx->pc = 0x428154u;
    SET_GPR_U32(ctx, 31, 0x42815Cu);
    ctx->pc = 0x428158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428154u;
            // 0x428158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42815Cu; }
        if (ctx->pc != 0x42815Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42815Cu; }
        if (ctx->pc != 0x42815Cu) { return; }
    }
    ctx->pc = 0x42815Cu;
label_42815c:
    // 0x42815c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x42815cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_428160:
    // 0x428160: 0xc0efc48  jal         func_3BF120
label_428164:
    if (ctx->pc == 0x428164u) {
        ctx->pc = 0x428164u;
            // 0x428164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428168u;
        goto label_428168;
    }
    ctx->pc = 0x428160u;
    SET_GPR_U32(ctx, 31, 0x428168u);
    ctx->pc = 0x428164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428160u;
            // 0x428164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428168u; }
        if (ctx->pc != 0x428168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428168u; }
        if (ctx->pc != 0x428168u) { return; }
    }
    ctx->pc = 0x428168u;
label_428168:
    // 0x428168: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x428168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42816c:
    // 0x42816c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x42816cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_428170:
    // 0x428170: 0xc04cbf0  jal         func_132FC0
label_428174:
    if (ctx->pc == 0x428174u) {
        ctx->pc = 0x428174u;
            // 0x428174: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x428178u;
        goto label_428178;
    }
    ctx->pc = 0x428170u;
    SET_GPR_U32(ctx, 31, 0x428178u);
    ctx->pc = 0x428174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428170u;
            // 0x428174: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428178u; }
        if (ctx->pc != 0x428178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428178u; }
        if (ctx->pc != 0x428178u) { return; }
    }
    ctx->pc = 0x428178u;
label_428178:
    // 0x428178: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x428178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_42817c:
    // 0x42817c: 0xc04cc44  jal         func_133110
label_428180:
    if (ctx->pc == 0x428180u) {
        ctx->pc = 0x428180u;
            // 0x428180: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428184u;
        goto label_428184;
    }
    ctx->pc = 0x42817Cu;
    SET_GPR_U32(ctx, 31, 0x428184u);
    ctx->pc = 0x428180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42817Cu;
            // 0x428180: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428184u; }
        if (ctx->pc != 0x428184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428184u; }
        if (ctx->pc != 0x428184u) { return; }
    }
    ctx->pc = 0x428184u;
label_428184:
    // 0x428184: 0xc0cefec  jal         func_33BFB0
label_428188:
    if (ctx->pc == 0x428188u) {
        ctx->pc = 0x428188u;
            // 0x428188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42818Cu;
        goto label_42818c;
    }
    ctx->pc = 0x428184u;
    SET_GPR_U32(ctx, 31, 0x42818Cu);
    ctx->pc = 0x428188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428184u;
            // 0x428188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42818Cu; }
        if (ctx->pc != 0x42818Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42818Cu; }
        if (ctx->pc != 0x42818Cu) { return; }
    }
    ctx->pc = 0x42818Cu;
label_42818c:
    // 0x42818c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_428190:
    // 0x428190: 0xc0efc48  jal         func_3BF120
label_428194:
    if (ctx->pc == 0x428194u) {
        ctx->pc = 0x428194u;
            // 0x428194: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x428198u;
        goto label_428198;
    }
    ctx->pc = 0x428190u;
    SET_GPR_U32(ctx, 31, 0x428198u);
    ctx->pc = 0x428194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428190u;
            // 0x428194: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428198u; }
        if (ctx->pc != 0x428198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428198u; }
        if (ctx->pc != 0x428198u) { return; }
    }
    ctx->pc = 0x428198u;
label_428198:
    // 0x428198: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x428198u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_42819c:
    // 0x42819c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x42819cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4281a0:
    // 0x4281a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4281a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4281a4:
    // 0x4281a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4281a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4281a8:
    // 0x4281a8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4281a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4281ac:
    // 0x4281ac: 0xc10a094  jal         func_428250
label_4281b0:
    if (ctx->pc == 0x4281B0u) {
        ctx->pc = 0x4281B0u;
            // 0x4281b0: 0x2508ca50  addiu       $t0, $t0, -0x35B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953552));
        ctx->pc = 0x4281B4u;
        goto label_4281b4;
    }
    ctx->pc = 0x4281ACu;
    SET_GPR_U32(ctx, 31, 0x4281B4u);
    ctx->pc = 0x4281B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281ACu;
            // 0x4281b0: 0x2508ca50  addiu       $t0, $t0, -0x35B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428250u;
    if (runtime->hasFunction(0x428250u)) {
        auto targetFn = runtime->lookupFunction(0x428250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281B4u; }
        if (ctx->pc != 0x4281B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428250_0x428250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281B4u; }
        if (ctx->pc != 0x4281B4u) { return; }
    }
    ctx->pc = 0x4281B4u;
label_4281b4:
    // 0x4281b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4281b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4281b8:
    // 0x4281b8: 0xc04c994  jal         func_132650
label_4281bc:
    if (ctx->pc == 0x4281BCu) {
        ctx->pc = 0x4281BCu;
            // 0x4281bc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4281C0u;
        goto label_4281c0;
    }
    ctx->pc = 0x4281B8u;
    SET_GPR_U32(ctx, 31, 0x4281C0u);
    ctx->pc = 0x4281BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281B8u;
            // 0x4281bc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281C0u; }
        if (ctx->pc != 0x4281C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281C0u; }
        if (ctx->pc != 0x4281C0u) { return; }
    }
    ctx->pc = 0x4281C0u;
label_4281c0:
    // 0x4281c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4281c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4281c4:
    // 0x4281c4: 0xc0e1b28  jal         func_386CA0
label_4281c8:
    if (ctx->pc == 0x4281C8u) {
        ctx->pc = 0x4281C8u;
            // 0x4281c8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4281CCu;
        goto label_4281cc;
    }
    ctx->pc = 0x4281C4u;
    SET_GPR_U32(ctx, 31, 0x4281CCu);
    ctx->pc = 0x4281C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281C4u;
            // 0x4281c8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281CCu; }
        if (ctx->pc != 0x4281CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281CCu; }
        if (ctx->pc != 0x4281CCu) { return; }
    }
    ctx->pc = 0x4281CCu;
label_4281cc:
    // 0x4281cc: 0xc0d1c14  jal         func_347050
label_4281d0:
    if (ctx->pc == 0x4281D0u) {
        ctx->pc = 0x4281D0u;
            // 0x4281d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4281D4u;
        goto label_4281d4;
    }
    ctx->pc = 0x4281CCu;
    SET_GPR_U32(ctx, 31, 0x4281D4u);
    ctx->pc = 0x4281D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281CCu;
            // 0x4281d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281D4u; }
        if (ctx->pc != 0x4281D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281D4u; }
        if (ctx->pc != 0x4281D4u) { return; }
    }
    ctx->pc = 0x4281D4u;
label_4281d4:
    // 0x4281d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4281d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4281d8:
    // 0x4281d8: 0xc0c05e0  jal         func_301780
label_4281dc:
    if (ctx->pc == 0x4281DCu) {
        ctx->pc = 0x4281DCu;
            // 0x4281dc: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x4281E0u;
        goto label_4281e0;
    }
    ctx->pc = 0x4281D8u;
    SET_GPR_U32(ctx, 31, 0x4281E0u);
    ctx->pc = 0x4281DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281D8u;
            // 0x4281dc: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281E0u; }
        if (ctx->pc != 0x4281E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281E0u; }
        if (ctx->pc != 0x4281E0u) { return; }
    }
    ctx->pc = 0x4281E0u;
label_4281e0:
    // 0x4281e0: 0xc10a0dc  jal         func_428370
label_4281e4:
    if (ctx->pc == 0x4281E4u) {
        ctx->pc = 0x4281E4u;
            // 0x4281e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4281E8u;
        goto label_4281e8;
    }
    ctx->pc = 0x4281E0u;
    SET_GPR_U32(ctx, 31, 0x4281E8u);
    ctx->pc = 0x4281E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281E0u;
            // 0x4281e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428370u;
    if (runtime->hasFunction(0x428370u)) {
        auto targetFn = runtime->lookupFunction(0x428370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281E8u; }
        if (ctx->pc != 0x4281E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428370_0x428370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281E8u; }
        if (ctx->pc != 0x4281E8u) { return; }
    }
    ctx->pc = 0x4281E8u;
label_4281e8:
    // 0x4281e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4281e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4281ec:
    // 0x4281ec: 0xc10a21c  jal         func_428870
label_4281f0:
    if (ctx->pc == 0x4281F0u) {
        ctx->pc = 0x4281F0u;
            // 0x4281f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4281F4u;
        goto label_4281f4;
    }
    ctx->pc = 0x4281ECu;
    SET_GPR_U32(ctx, 31, 0x4281F4u);
    ctx->pc = 0x4281F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281ECu;
            // 0x4281f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x428870u;
    if (runtime->hasFunction(0x428870u)) {
        auto targetFn = runtime->lookupFunction(0x428870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281F4u; }
        if (ctx->pc != 0x4281F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00428870_0x428870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4281F4u; }
        if (ctx->pc != 0x4281F4u) { return; }
    }
    ctx->pc = 0x4281F4u;
label_4281f4:
    // 0x4281f4: 0x0  nop
    ctx->pc = 0x4281f4u;
    // NOP
label_4281f8:
    // 0x4281f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4281f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4281fc:
    // 0x4281fc: 0xc0b6de0  jal         func_2DB780
label_428200:
    if (ctx->pc == 0x428200u) {
        ctx->pc = 0x428200u;
            // 0x428200: 0x2484c9f0  addiu       $a0, $a0, -0x3610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953456));
        ctx->pc = 0x428204u;
        goto label_428204;
    }
    ctx->pc = 0x4281FCu;
    SET_GPR_U32(ctx, 31, 0x428204u);
    ctx->pc = 0x428200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4281FCu;
            // 0x428200: 0x2484c9f0  addiu       $a0, $a0, -0x3610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428204u; }
        if (ctx->pc != 0x428204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428204u; }
        if (ctx->pc != 0x428204u) { return; }
    }
    ctx->pc = 0x428204u;
label_428204:
    // 0x428204: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x428204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_428208:
    // 0x428208: 0x276182b  sltu        $v1, $s3, $s6
    ctx->pc = 0x428208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_42820c:
    // 0x42820c: 0x1460ff11  bnez        $v1, . + 4 + (-0xEF << 2)
label_428210:
    if (ctx->pc == 0x428210u) {
        ctx->pc = 0x428210u;
            // 0x428210: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x428214u;
        goto label_428214;
    }
    ctx->pc = 0x42820Cu;
    {
        const bool branch_taken_0x42820c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x428210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42820Cu;
            // 0x428210: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42820c) {
            ctx->pc = 0x427E54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_427e54;
        }
    }
    ctx->pc = 0x428214u;
label_428214:
    // 0x428214: 0x0  nop
    ctx->pc = 0x428214u;
    // NOP
label_428218:
    // 0x428218: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x428218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_42821c:
    // 0x42821c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x42821cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_428220:
    // 0x428220: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x428220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_428224:
    // 0x428224: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x428224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_428228:
    // 0x428228: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x428228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42822c:
    // 0x42822c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x42822cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_428230:
    // 0x428230: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x428230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_428234:
    // 0x428234: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x428234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_428238:
    // 0x428238: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x428238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42823c:
    // 0x42823c: 0x3e00008  jr          $ra
label_428240:
    if (ctx->pc == 0x428240u) {
        ctx->pc = 0x428240u;
            // 0x428240: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x428244u;
        goto label_428244;
    }
    ctx->pc = 0x42823Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42823Cu;
            // 0x428240: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428244u;
label_428244:
    // 0x428244: 0x0  nop
    ctx->pc = 0x428244u;
    // NOP
label_428248:
    // 0x428248: 0x0  nop
    ctx->pc = 0x428248u;
    // NOP
label_42824c:
    // 0x42824c: 0x0  nop
    ctx->pc = 0x42824cu;
    // NOP
}
