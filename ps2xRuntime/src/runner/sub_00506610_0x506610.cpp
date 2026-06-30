#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00506610
// Address: 0x506610 - 0x507850
void sub_00506610_0x506610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506610_0x506610");
#endif

    switch (ctx->pc) {
        case 0x506610u: goto label_506610;
        case 0x506614u: goto label_506614;
        case 0x506618u: goto label_506618;
        case 0x50661cu: goto label_50661c;
        case 0x506620u: goto label_506620;
        case 0x506624u: goto label_506624;
        case 0x506628u: goto label_506628;
        case 0x50662cu: goto label_50662c;
        case 0x506630u: goto label_506630;
        case 0x506634u: goto label_506634;
        case 0x506638u: goto label_506638;
        case 0x50663cu: goto label_50663c;
        case 0x506640u: goto label_506640;
        case 0x506644u: goto label_506644;
        case 0x506648u: goto label_506648;
        case 0x50664cu: goto label_50664c;
        case 0x506650u: goto label_506650;
        case 0x506654u: goto label_506654;
        case 0x506658u: goto label_506658;
        case 0x50665cu: goto label_50665c;
        case 0x506660u: goto label_506660;
        case 0x506664u: goto label_506664;
        case 0x506668u: goto label_506668;
        case 0x50666cu: goto label_50666c;
        case 0x506670u: goto label_506670;
        case 0x506674u: goto label_506674;
        case 0x506678u: goto label_506678;
        case 0x50667cu: goto label_50667c;
        case 0x506680u: goto label_506680;
        case 0x506684u: goto label_506684;
        case 0x506688u: goto label_506688;
        case 0x50668cu: goto label_50668c;
        case 0x506690u: goto label_506690;
        case 0x506694u: goto label_506694;
        case 0x506698u: goto label_506698;
        case 0x50669cu: goto label_50669c;
        case 0x5066a0u: goto label_5066a0;
        case 0x5066a4u: goto label_5066a4;
        case 0x5066a8u: goto label_5066a8;
        case 0x5066acu: goto label_5066ac;
        case 0x5066b0u: goto label_5066b0;
        case 0x5066b4u: goto label_5066b4;
        case 0x5066b8u: goto label_5066b8;
        case 0x5066bcu: goto label_5066bc;
        case 0x5066c0u: goto label_5066c0;
        case 0x5066c4u: goto label_5066c4;
        case 0x5066c8u: goto label_5066c8;
        case 0x5066ccu: goto label_5066cc;
        case 0x5066d0u: goto label_5066d0;
        case 0x5066d4u: goto label_5066d4;
        case 0x5066d8u: goto label_5066d8;
        case 0x5066dcu: goto label_5066dc;
        case 0x5066e0u: goto label_5066e0;
        case 0x5066e4u: goto label_5066e4;
        case 0x5066e8u: goto label_5066e8;
        case 0x5066ecu: goto label_5066ec;
        case 0x5066f0u: goto label_5066f0;
        case 0x5066f4u: goto label_5066f4;
        case 0x5066f8u: goto label_5066f8;
        case 0x5066fcu: goto label_5066fc;
        case 0x506700u: goto label_506700;
        case 0x506704u: goto label_506704;
        case 0x506708u: goto label_506708;
        case 0x50670cu: goto label_50670c;
        case 0x506710u: goto label_506710;
        case 0x506714u: goto label_506714;
        case 0x506718u: goto label_506718;
        case 0x50671cu: goto label_50671c;
        case 0x506720u: goto label_506720;
        case 0x506724u: goto label_506724;
        case 0x506728u: goto label_506728;
        case 0x50672cu: goto label_50672c;
        case 0x506730u: goto label_506730;
        case 0x506734u: goto label_506734;
        case 0x506738u: goto label_506738;
        case 0x50673cu: goto label_50673c;
        case 0x506740u: goto label_506740;
        case 0x506744u: goto label_506744;
        case 0x506748u: goto label_506748;
        case 0x50674cu: goto label_50674c;
        case 0x506750u: goto label_506750;
        case 0x506754u: goto label_506754;
        case 0x506758u: goto label_506758;
        case 0x50675cu: goto label_50675c;
        case 0x506760u: goto label_506760;
        case 0x506764u: goto label_506764;
        case 0x506768u: goto label_506768;
        case 0x50676cu: goto label_50676c;
        case 0x506770u: goto label_506770;
        case 0x506774u: goto label_506774;
        case 0x506778u: goto label_506778;
        case 0x50677cu: goto label_50677c;
        case 0x506780u: goto label_506780;
        case 0x506784u: goto label_506784;
        case 0x506788u: goto label_506788;
        case 0x50678cu: goto label_50678c;
        case 0x506790u: goto label_506790;
        case 0x506794u: goto label_506794;
        case 0x506798u: goto label_506798;
        case 0x50679cu: goto label_50679c;
        case 0x5067a0u: goto label_5067a0;
        case 0x5067a4u: goto label_5067a4;
        case 0x5067a8u: goto label_5067a8;
        case 0x5067acu: goto label_5067ac;
        case 0x5067b0u: goto label_5067b0;
        case 0x5067b4u: goto label_5067b4;
        case 0x5067b8u: goto label_5067b8;
        case 0x5067bcu: goto label_5067bc;
        case 0x5067c0u: goto label_5067c0;
        case 0x5067c4u: goto label_5067c4;
        case 0x5067c8u: goto label_5067c8;
        case 0x5067ccu: goto label_5067cc;
        case 0x5067d0u: goto label_5067d0;
        case 0x5067d4u: goto label_5067d4;
        case 0x5067d8u: goto label_5067d8;
        case 0x5067dcu: goto label_5067dc;
        case 0x5067e0u: goto label_5067e0;
        case 0x5067e4u: goto label_5067e4;
        case 0x5067e8u: goto label_5067e8;
        case 0x5067ecu: goto label_5067ec;
        case 0x5067f0u: goto label_5067f0;
        case 0x5067f4u: goto label_5067f4;
        case 0x5067f8u: goto label_5067f8;
        case 0x5067fcu: goto label_5067fc;
        case 0x506800u: goto label_506800;
        case 0x506804u: goto label_506804;
        case 0x506808u: goto label_506808;
        case 0x50680cu: goto label_50680c;
        case 0x506810u: goto label_506810;
        case 0x506814u: goto label_506814;
        case 0x506818u: goto label_506818;
        case 0x50681cu: goto label_50681c;
        case 0x506820u: goto label_506820;
        case 0x506824u: goto label_506824;
        case 0x506828u: goto label_506828;
        case 0x50682cu: goto label_50682c;
        case 0x506830u: goto label_506830;
        case 0x506834u: goto label_506834;
        case 0x506838u: goto label_506838;
        case 0x50683cu: goto label_50683c;
        case 0x506840u: goto label_506840;
        case 0x506844u: goto label_506844;
        case 0x506848u: goto label_506848;
        case 0x50684cu: goto label_50684c;
        case 0x506850u: goto label_506850;
        case 0x506854u: goto label_506854;
        case 0x506858u: goto label_506858;
        case 0x50685cu: goto label_50685c;
        case 0x506860u: goto label_506860;
        case 0x506864u: goto label_506864;
        case 0x506868u: goto label_506868;
        case 0x50686cu: goto label_50686c;
        case 0x506870u: goto label_506870;
        case 0x506874u: goto label_506874;
        case 0x506878u: goto label_506878;
        case 0x50687cu: goto label_50687c;
        case 0x506880u: goto label_506880;
        case 0x506884u: goto label_506884;
        case 0x506888u: goto label_506888;
        case 0x50688cu: goto label_50688c;
        case 0x506890u: goto label_506890;
        case 0x506894u: goto label_506894;
        case 0x506898u: goto label_506898;
        case 0x50689cu: goto label_50689c;
        case 0x5068a0u: goto label_5068a0;
        case 0x5068a4u: goto label_5068a4;
        case 0x5068a8u: goto label_5068a8;
        case 0x5068acu: goto label_5068ac;
        case 0x5068b0u: goto label_5068b0;
        case 0x5068b4u: goto label_5068b4;
        case 0x5068b8u: goto label_5068b8;
        case 0x5068bcu: goto label_5068bc;
        case 0x5068c0u: goto label_5068c0;
        case 0x5068c4u: goto label_5068c4;
        case 0x5068c8u: goto label_5068c8;
        case 0x5068ccu: goto label_5068cc;
        case 0x5068d0u: goto label_5068d0;
        case 0x5068d4u: goto label_5068d4;
        case 0x5068d8u: goto label_5068d8;
        case 0x5068dcu: goto label_5068dc;
        case 0x5068e0u: goto label_5068e0;
        case 0x5068e4u: goto label_5068e4;
        case 0x5068e8u: goto label_5068e8;
        case 0x5068ecu: goto label_5068ec;
        case 0x5068f0u: goto label_5068f0;
        case 0x5068f4u: goto label_5068f4;
        case 0x5068f8u: goto label_5068f8;
        case 0x5068fcu: goto label_5068fc;
        case 0x506900u: goto label_506900;
        case 0x506904u: goto label_506904;
        case 0x506908u: goto label_506908;
        case 0x50690cu: goto label_50690c;
        case 0x506910u: goto label_506910;
        case 0x506914u: goto label_506914;
        case 0x506918u: goto label_506918;
        case 0x50691cu: goto label_50691c;
        case 0x506920u: goto label_506920;
        case 0x506924u: goto label_506924;
        case 0x506928u: goto label_506928;
        case 0x50692cu: goto label_50692c;
        case 0x506930u: goto label_506930;
        case 0x506934u: goto label_506934;
        case 0x506938u: goto label_506938;
        case 0x50693cu: goto label_50693c;
        case 0x506940u: goto label_506940;
        case 0x506944u: goto label_506944;
        case 0x506948u: goto label_506948;
        case 0x50694cu: goto label_50694c;
        case 0x506950u: goto label_506950;
        case 0x506954u: goto label_506954;
        case 0x506958u: goto label_506958;
        case 0x50695cu: goto label_50695c;
        case 0x506960u: goto label_506960;
        case 0x506964u: goto label_506964;
        case 0x506968u: goto label_506968;
        case 0x50696cu: goto label_50696c;
        case 0x506970u: goto label_506970;
        case 0x506974u: goto label_506974;
        case 0x506978u: goto label_506978;
        case 0x50697cu: goto label_50697c;
        case 0x506980u: goto label_506980;
        case 0x506984u: goto label_506984;
        case 0x506988u: goto label_506988;
        case 0x50698cu: goto label_50698c;
        case 0x506990u: goto label_506990;
        case 0x506994u: goto label_506994;
        case 0x506998u: goto label_506998;
        case 0x50699cu: goto label_50699c;
        case 0x5069a0u: goto label_5069a0;
        case 0x5069a4u: goto label_5069a4;
        case 0x5069a8u: goto label_5069a8;
        case 0x5069acu: goto label_5069ac;
        case 0x5069b0u: goto label_5069b0;
        case 0x5069b4u: goto label_5069b4;
        case 0x5069b8u: goto label_5069b8;
        case 0x5069bcu: goto label_5069bc;
        case 0x5069c0u: goto label_5069c0;
        case 0x5069c4u: goto label_5069c4;
        case 0x5069c8u: goto label_5069c8;
        case 0x5069ccu: goto label_5069cc;
        case 0x5069d0u: goto label_5069d0;
        case 0x5069d4u: goto label_5069d4;
        case 0x5069d8u: goto label_5069d8;
        case 0x5069dcu: goto label_5069dc;
        case 0x5069e0u: goto label_5069e0;
        case 0x5069e4u: goto label_5069e4;
        case 0x5069e8u: goto label_5069e8;
        case 0x5069ecu: goto label_5069ec;
        case 0x5069f0u: goto label_5069f0;
        case 0x5069f4u: goto label_5069f4;
        case 0x5069f8u: goto label_5069f8;
        case 0x5069fcu: goto label_5069fc;
        case 0x506a00u: goto label_506a00;
        case 0x506a04u: goto label_506a04;
        case 0x506a08u: goto label_506a08;
        case 0x506a0cu: goto label_506a0c;
        case 0x506a10u: goto label_506a10;
        case 0x506a14u: goto label_506a14;
        case 0x506a18u: goto label_506a18;
        case 0x506a1cu: goto label_506a1c;
        case 0x506a20u: goto label_506a20;
        case 0x506a24u: goto label_506a24;
        case 0x506a28u: goto label_506a28;
        case 0x506a2cu: goto label_506a2c;
        case 0x506a30u: goto label_506a30;
        case 0x506a34u: goto label_506a34;
        case 0x506a38u: goto label_506a38;
        case 0x506a3cu: goto label_506a3c;
        case 0x506a40u: goto label_506a40;
        case 0x506a44u: goto label_506a44;
        case 0x506a48u: goto label_506a48;
        case 0x506a4cu: goto label_506a4c;
        case 0x506a50u: goto label_506a50;
        case 0x506a54u: goto label_506a54;
        case 0x506a58u: goto label_506a58;
        case 0x506a5cu: goto label_506a5c;
        case 0x506a60u: goto label_506a60;
        case 0x506a64u: goto label_506a64;
        case 0x506a68u: goto label_506a68;
        case 0x506a6cu: goto label_506a6c;
        case 0x506a70u: goto label_506a70;
        case 0x506a74u: goto label_506a74;
        case 0x506a78u: goto label_506a78;
        case 0x506a7cu: goto label_506a7c;
        case 0x506a80u: goto label_506a80;
        case 0x506a84u: goto label_506a84;
        case 0x506a88u: goto label_506a88;
        case 0x506a8cu: goto label_506a8c;
        case 0x506a90u: goto label_506a90;
        case 0x506a94u: goto label_506a94;
        case 0x506a98u: goto label_506a98;
        case 0x506a9cu: goto label_506a9c;
        case 0x506aa0u: goto label_506aa0;
        case 0x506aa4u: goto label_506aa4;
        case 0x506aa8u: goto label_506aa8;
        case 0x506aacu: goto label_506aac;
        case 0x506ab0u: goto label_506ab0;
        case 0x506ab4u: goto label_506ab4;
        case 0x506ab8u: goto label_506ab8;
        case 0x506abcu: goto label_506abc;
        case 0x506ac0u: goto label_506ac0;
        case 0x506ac4u: goto label_506ac4;
        case 0x506ac8u: goto label_506ac8;
        case 0x506accu: goto label_506acc;
        case 0x506ad0u: goto label_506ad0;
        case 0x506ad4u: goto label_506ad4;
        case 0x506ad8u: goto label_506ad8;
        case 0x506adcu: goto label_506adc;
        case 0x506ae0u: goto label_506ae0;
        case 0x506ae4u: goto label_506ae4;
        case 0x506ae8u: goto label_506ae8;
        case 0x506aecu: goto label_506aec;
        case 0x506af0u: goto label_506af0;
        case 0x506af4u: goto label_506af4;
        case 0x506af8u: goto label_506af8;
        case 0x506afcu: goto label_506afc;
        case 0x506b00u: goto label_506b00;
        case 0x506b04u: goto label_506b04;
        case 0x506b08u: goto label_506b08;
        case 0x506b0cu: goto label_506b0c;
        case 0x506b10u: goto label_506b10;
        case 0x506b14u: goto label_506b14;
        case 0x506b18u: goto label_506b18;
        case 0x506b1cu: goto label_506b1c;
        case 0x506b20u: goto label_506b20;
        case 0x506b24u: goto label_506b24;
        case 0x506b28u: goto label_506b28;
        case 0x506b2cu: goto label_506b2c;
        case 0x506b30u: goto label_506b30;
        case 0x506b34u: goto label_506b34;
        case 0x506b38u: goto label_506b38;
        case 0x506b3cu: goto label_506b3c;
        case 0x506b40u: goto label_506b40;
        case 0x506b44u: goto label_506b44;
        case 0x506b48u: goto label_506b48;
        case 0x506b4cu: goto label_506b4c;
        case 0x506b50u: goto label_506b50;
        case 0x506b54u: goto label_506b54;
        case 0x506b58u: goto label_506b58;
        case 0x506b5cu: goto label_506b5c;
        case 0x506b60u: goto label_506b60;
        case 0x506b64u: goto label_506b64;
        case 0x506b68u: goto label_506b68;
        case 0x506b6cu: goto label_506b6c;
        case 0x506b70u: goto label_506b70;
        case 0x506b74u: goto label_506b74;
        case 0x506b78u: goto label_506b78;
        case 0x506b7cu: goto label_506b7c;
        case 0x506b80u: goto label_506b80;
        case 0x506b84u: goto label_506b84;
        case 0x506b88u: goto label_506b88;
        case 0x506b8cu: goto label_506b8c;
        case 0x506b90u: goto label_506b90;
        case 0x506b94u: goto label_506b94;
        case 0x506b98u: goto label_506b98;
        case 0x506b9cu: goto label_506b9c;
        case 0x506ba0u: goto label_506ba0;
        case 0x506ba4u: goto label_506ba4;
        case 0x506ba8u: goto label_506ba8;
        case 0x506bacu: goto label_506bac;
        case 0x506bb0u: goto label_506bb0;
        case 0x506bb4u: goto label_506bb4;
        case 0x506bb8u: goto label_506bb8;
        case 0x506bbcu: goto label_506bbc;
        case 0x506bc0u: goto label_506bc0;
        case 0x506bc4u: goto label_506bc4;
        case 0x506bc8u: goto label_506bc8;
        case 0x506bccu: goto label_506bcc;
        case 0x506bd0u: goto label_506bd0;
        case 0x506bd4u: goto label_506bd4;
        case 0x506bd8u: goto label_506bd8;
        case 0x506bdcu: goto label_506bdc;
        case 0x506be0u: goto label_506be0;
        case 0x506be4u: goto label_506be4;
        case 0x506be8u: goto label_506be8;
        case 0x506becu: goto label_506bec;
        case 0x506bf0u: goto label_506bf0;
        case 0x506bf4u: goto label_506bf4;
        case 0x506bf8u: goto label_506bf8;
        case 0x506bfcu: goto label_506bfc;
        case 0x506c00u: goto label_506c00;
        case 0x506c04u: goto label_506c04;
        case 0x506c08u: goto label_506c08;
        case 0x506c0cu: goto label_506c0c;
        case 0x506c10u: goto label_506c10;
        case 0x506c14u: goto label_506c14;
        case 0x506c18u: goto label_506c18;
        case 0x506c1cu: goto label_506c1c;
        case 0x506c20u: goto label_506c20;
        case 0x506c24u: goto label_506c24;
        case 0x506c28u: goto label_506c28;
        case 0x506c2cu: goto label_506c2c;
        case 0x506c30u: goto label_506c30;
        case 0x506c34u: goto label_506c34;
        case 0x506c38u: goto label_506c38;
        case 0x506c3cu: goto label_506c3c;
        case 0x506c40u: goto label_506c40;
        case 0x506c44u: goto label_506c44;
        case 0x506c48u: goto label_506c48;
        case 0x506c4cu: goto label_506c4c;
        case 0x506c50u: goto label_506c50;
        case 0x506c54u: goto label_506c54;
        case 0x506c58u: goto label_506c58;
        case 0x506c5cu: goto label_506c5c;
        case 0x506c60u: goto label_506c60;
        case 0x506c64u: goto label_506c64;
        case 0x506c68u: goto label_506c68;
        case 0x506c6cu: goto label_506c6c;
        case 0x506c70u: goto label_506c70;
        case 0x506c74u: goto label_506c74;
        case 0x506c78u: goto label_506c78;
        case 0x506c7cu: goto label_506c7c;
        case 0x506c80u: goto label_506c80;
        case 0x506c84u: goto label_506c84;
        case 0x506c88u: goto label_506c88;
        case 0x506c8cu: goto label_506c8c;
        case 0x506c90u: goto label_506c90;
        case 0x506c94u: goto label_506c94;
        case 0x506c98u: goto label_506c98;
        case 0x506c9cu: goto label_506c9c;
        case 0x506ca0u: goto label_506ca0;
        case 0x506ca4u: goto label_506ca4;
        case 0x506ca8u: goto label_506ca8;
        case 0x506cacu: goto label_506cac;
        case 0x506cb0u: goto label_506cb0;
        case 0x506cb4u: goto label_506cb4;
        case 0x506cb8u: goto label_506cb8;
        case 0x506cbcu: goto label_506cbc;
        case 0x506cc0u: goto label_506cc0;
        case 0x506cc4u: goto label_506cc4;
        case 0x506cc8u: goto label_506cc8;
        case 0x506cccu: goto label_506ccc;
        case 0x506cd0u: goto label_506cd0;
        case 0x506cd4u: goto label_506cd4;
        case 0x506cd8u: goto label_506cd8;
        case 0x506cdcu: goto label_506cdc;
        case 0x506ce0u: goto label_506ce0;
        case 0x506ce4u: goto label_506ce4;
        case 0x506ce8u: goto label_506ce8;
        case 0x506cecu: goto label_506cec;
        case 0x506cf0u: goto label_506cf0;
        case 0x506cf4u: goto label_506cf4;
        case 0x506cf8u: goto label_506cf8;
        case 0x506cfcu: goto label_506cfc;
        case 0x506d00u: goto label_506d00;
        case 0x506d04u: goto label_506d04;
        case 0x506d08u: goto label_506d08;
        case 0x506d0cu: goto label_506d0c;
        case 0x506d10u: goto label_506d10;
        case 0x506d14u: goto label_506d14;
        case 0x506d18u: goto label_506d18;
        case 0x506d1cu: goto label_506d1c;
        case 0x506d20u: goto label_506d20;
        case 0x506d24u: goto label_506d24;
        case 0x506d28u: goto label_506d28;
        case 0x506d2cu: goto label_506d2c;
        case 0x506d30u: goto label_506d30;
        case 0x506d34u: goto label_506d34;
        case 0x506d38u: goto label_506d38;
        case 0x506d3cu: goto label_506d3c;
        case 0x506d40u: goto label_506d40;
        case 0x506d44u: goto label_506d44;
        case 0x506d48u: goto label_506d48;
        case 0x506d4cu: goto label_506d4c;
        case 0x506d50u: goto label_506d50;
        case 0x506d54u: goto label_506d54;
        case 0x506d58u: goto label_506d58;
        case 0x506d5cu: goto label_506d5c;
        case 0x506d60u: goto label_506d60;
        case 0x506d64u: goto label_506d64;
        case 0x506d68u: goto label_506d68;
        case 0x506d6cu: goto label_506d6c;
        case 0x506d70u: goto label_506d70;
        case 0x506d74u: goto label_506d74;
        case 0x506d78u: goto label_506d78;
        case 0x506d7cu: goto label_506d7c;
        case 0x506d80u: goto label_506d80;
        case 0x506d84u: goto label_506d84;
        case 0x506d88u: goto label_506d88;
        case 0x506d8cu: goto label_506d8c;
        case 0x506d90u: goto label_506d90;
        case 0x506d94u: goto label_506d94;
        case 0x506d98u: goto label_506d98;
        case 0x506d9cu: goto label_506d9c;
        case 0x506da0u: goto label_506da0;
        case 0x506da4u: goto label_506da4;
        case 0x506da8u: goto label_506da8;
        case 0x506dacu: goto label_506dac;
        case 0x506db0u: goto label_506db0;
        case 0x506db4u: goto label_506db4;
        case 0x506db8u: goto label_506db8;
        case 0x506dbcu: goto label_506dbc;
        case 0x506dc0u: goto label_506dc0;
        case 0x506dc4u: goto label_506dc4;
        case 0x506dc8u: goto label_506dc8;
        case 0x506dccu: goto label_506dcc;
        case 0x506dd0u: goto label_506dd0;
        case 0x506dd4u: goto label_506dd4;
        case 0x506dd8u: goto label_506dd8;
        case 0x506ddcu: goto label_506ddc;
        case 0x506de0u: goto label_506de0;
        case 0x506de4u: goto label_506de4;
        case 0x506de8u: goto label_506de8;
        case 0x506decu: goto label_506dec;
        case 0x506df0u: goto label_506df0;
        case 0x506df4u: goto label_506df4;
        case 0x506df8u: goto label_506df8;
        case 0x506dfcu: goto label_506dfc;
        case 0x506e00u: goto label_506e00;
        case 0x506e04u: goto label_506e04;
        case 0x506e08u: goto label_506e08;
        case 0x506e0cu: goto label_506e0c;
        case 0x506e10u: goto label_506e10;
        case 0x506e14u: goto label_506e14;
        case 0x506e18u: goto label_506e18;
        case 0x506e1cu: goto label_506e1c;
        case 0x506e20u: goto label_506e20;
        case 0x506e24u: goto label_506e24;
        case 0x506e28u: goto label_506e28;
        case 0x506e2cu: goto label_506e2c;
        case 0x506e30u: goto label_506e30;
        case 0x506e34u: goto label_506e34;
        case 0x506e38u: goto label_506e38;
        case 0x506e3cu: goto label_506e3c;
        case 0x506e40u: goto label_506e40;
        case 0x506e44u: goto label_506e44;
        case 0x506e48u: goto label_506e48;
        case 0x506e4cu: goto label_506e4c;
        case 0x506e50u: goto label_506e50;
        case 0x506e54u: goto label_506e54;
        case 0x506e58u: goto label_506e58;
        case 0x506e5cu: goto label_506e5c;
        case 0x506e60u: goto label_506e60;
        case 0x506e64u: goto label_506e64;
        case 0x506e68u: goto label_506e68;
        case 0x506e6cu: goto label_506e6c;
        case 0x506e70u: goto label_506e70;
        case 0x506e74u: goto label_506e74;
        case 0x506e78u: goto label_506e78;
        case 0x506e7cu: goto label_506e7c;
        case 0x506e80u: goto label_506e80;
        case 0x506e84u: goto label_506e84;
        case 0x506e88u: goto label_506e88;
        case 0x506e8cu: goto label_506e8c;
        case 0x506e90u: goto label_506e90;
        case 0x506e94u: goto label_506e94;
        case 0x506e98u: goto label_506e98;
        case 0x506e9cu: goto label_506e9c;
        case 0x506ea0u: goto label_506ea0;
        case 0x506ea4u: goto label_506ea4;
        case 0x506ea8u: goto label_506ea8;
        case 0x506eacu: goto label_506eac;
        case 0x506eb0u: goto label_506eb0;
        case 0x506eb4u: goto label_506eb4;
        case 0x506eb8u: goto label_506eb8;
        case 0x506ebcu: goto label_506ebc;
        case 0x506ec0u: goto label_506ec0;
        case 0x506ec4u: goto label_506ec4;
        case 0x506ec8u: goto label_506ec8;
        case 0x506eccu: goto label_506ecc;
        case 0x506ed0u: goto label_506ed0;
        case 0x506ed4u: goto label_506ed4;
        case 0x506ed8u: goto label_506ed8;
        case 0x506edcu: goto label_506edc;
        case 0x506ee0u: goto label_506ee0;
        case 0x506ee4u: goto label_506ee4;
        case 0x506ee8u: goto label_506ee8;
        case 0x506eecu: goto label_506eec;
        case 0x506ef0u: goto label_506ef0;
        case 0x506ef4u: goto label_506ef4;
        case 0x506ef8u: goto label_506ef8;
        case 0x506efcu: goto label_506efc;
        case 0x506f00u: goto label_506f00;
        case 0x506f04u: goto label_506f04;
        case 0x506f08u: goto label_506f08;
        case 0x506f0cu: goto label_506f0c;
        case 0x506f10u: goto label_506f10;
        case 0x506f14u: goto label_506f14;
        case 0x506f18u: goto label_506f18;
        case 0x506f1cu: goto label_506f1c;
        case 0x506f20u: goto label_506f20;
        case 0x506f24u: goto label_506f24;
        case 0x506f28u: goto label_506f28;
        case 0x506f2cu: goto label_506f2c;
        case 0x506f30u: goto label_506f30;
        case 0x506f34u: goto label_506f34;
        case 0x506f38u: goto label_506f38;
        case 0x506f3cu: goto label_506f3c;
        case 0x506f40u: goto label_506f40;
        case 0x506f44u: goto label_506f44;
        case 0x506f48u: goto label_506f48;
        case 0x506f4cu: goto label_506f4c;
        case 0x506f50u: goto label_506f50;
        case 0x506f54u: goto label_506f54;
        case 0x506f58u: goto label_506f58;
        case 0x506f5cu: goto label_506f5c;
        case 0x506f60u: goto label_506f60;
        case 0x506f64u: goto label_506f64;
        case 0x506f68u: goto label_506f68;
        case 0x506f6cu: goto label_506f6c;
        case 0x506f70u: goto label_506f70;
        case 0x506f74u: goto label_506f74;
        case 0x506f78u: goto label_506f78;
        case 0x506f7cu: goto label_506f7c;
        case 0x506f80u: goto label_506f80;
        case 0x506f84u: goto label_506f84;
        case 0x506f88u: goto label_506f88;
        case 0x506f8cu: goto label_506f8c;
        case 0x506f90u: goto label_506f90;
        case 0x506f94u: goto label_506f94;
        case 0x506f98u: goto label_506f98;
        case 0x506f9cu: goto label_506f9c;
        case 0x506fa0u: goto label_506fa0;
        case 0x506fa4u: goto label_506fa4;
        case 0x506fa8u: goto label_506fa8;
        case 0x506facu: goto label_506fac;
        case 0x506fb0u: goto label_506fb0;
        case 0x506fb4u: goto label_506fb4;
        case 0x506fb8u: goto label_506fb8;
        case 0x506fbcu: goto label_506fbc;
        case 0x506fc0u: goto label_506fc0;
        case 0x506fc4u: goto label_506fc4;
        case 0x506fc8u: goto label_506fc8;
        case 0x506fccu: goto label_506fcc;
        case 0x506fd0u: goto label_506fd0;
        case 0x506fd4u: goto label_506fd4;
        case 0x506fd8u: goto label_506fd8;
        case 0x506fdcu: goto label_506fdc;
        case 0x506fe0u: goto label_506fe0;
        case 0x506fe4u: goto label_506fe4;
        case 0x506fe8u: goto label_506fe8;
        case 0x506fecu: goto label_506fec;
        case 0x506ff0u: goto label_506ff0;
        case 0x506ff4u: goto label_506ff4;
        case 0x506ff8u: goto label_506ff8;
        case 0x506ffcu: goto label_506ffc;
        case 0x507000u: goto label_507000;
        case 0x507004u: goto label_507004;
        case 0x507008u: goto label_507008;
        case 0x50700cu: goto label_50700c;
        case 0x507010u: goto label_507010;
        case 0x507014u: goto label_507014;
        case 0x507018u: goto label_507018;
        case 0x50701cu: goto label_50701c;
        case 0x507020u: goto label_507020;
        case 0x507024u: goto label_507024;
        case 0x507028u: goto label_507028;
        case 0x50702cu: goto label_50702c;
        case 0x507030u: goto label_507030;
        case 0x507034u: goto label_507034;
        case 0x507038u: goto label_507038;
        case 0x50703cu: goto label_50703c;
        case 0x507040u: goto label_507040;
        case 0x507044u: goto label_507044;
        case 0x507048u: goto label_507048;
        case 0x50704cu: goto label_50704c;
        case 0x507050u: goto label_507050;
        case 0x507054u: goto label_507054;
        case 0x507058u: goto label_507058;
        case 0x50705cu: goto label_50705c;
        case 0x507060u: goto label_507060;
        case 0x507064u: goto label_507064;
        case 0x507068u: goto label_507068;
        case 0x50706cu: goto label_50706c;
        case 0x507070u: goto label_507070;
        case 0x507074u: goto label_507074;
        case 0x507078u: goto label_507078;
        case 0x50707cu: goto label_50707c;
        case 0x507080u: goto label_507080;
        case 0x507084u: goto label_507084;
        case 0x507088u: goto label_507088;
        case 0x50708cu: goto label_50708c;
        case 0x507090u: goto label_507090;
        case 0x507094u: goto label_507094;
        case 0x507098u: goto label_507098;
        case 0x50709cu: goto label_50709c;
        case 0x5070a0u: goto label_5070a0;
        case 0x5070a4u: goto label_5070a4;
        case 0x5070a8u: goto label_5070a8;
        case 0x5070acu: goto label_5070ac;
        case 0x5070b0u: goto label_5070b0;
        case 0x5070b4u: goto label_5070b4;
        case 0x5070b8u: goto label_5070b8;
        case 0x5070bcu: goto label_5070bc;
        case 0x5070c0u: goto label_5070c0;
        case 0x5070c4u: goto label_5070c4;
        case 0x5070c8u: goto label_5070c8;
        case 0x5070ccu: goto label_5070cc;
        case 0x5070d0u: goto label_5070d0;
        case 0x5070d4u: goto label_5070d4;
        case 0x5070d8u: goto label_5070d8;
        case 0x5070dcu: goto label_5070dc;
        case 0x5070e0u: goto label_5070e0;
        case 0x5070e4u: goto label_5070e4;
        case 0x5070e8u: goto label_5070e8;
        case 0x5070ecu: goto label_5070ec;
        case 0x5070f0u: goto label_5070f0;
        case 0x5070f4u: goto label_5070f4;
        case 0x5070f8u: goto label_5070f8;
        case 0x5070fcu: goto label_5070fc;
        case 0x507100u: goto label_507100;
        case 0x507104u: goto label_507104;
        case 0x507108u: goto label_507108;
        case 0x50710cu: goto label_50710c;
        case 0x507110u: goto label_507110;
        case 0x507114u: goto label_507114;
        case 0x507118u: goto label_507118;
        case 0x50711cu: goto label_50711c;
        case 0x507120u: goto label_507120;
        case 0x507124u: goto label_507124;
        case 0x507128u: goto label_507128;
        case 0x50712cu: goto label_50712c;
        case 0x507130u: goto label_507130;
        case 0x507134u: goto label_507134;
        case 0x507138u: goto label_507138;
        case 0x50713cu: goto label_50713c;
        case 0x507140u: goto label_507140;
        case 0x507144u: goto label_507144;
        case 0x507148u: goto label_507148;
        case 0x50714cu: goto label_50714c;
        case 0x507150u: goto label_507150;
        case 0x507154u: goto label_507154;
        case 0x507158u: goto label_507158;
        case 0x50715cu: goto label_50715c;
        case 0x507160u: goto label_507160;
        case 0x507164u: goto label_507164;
        case 0x507168u: goto label_507168;
        case 0x50716cu: goto label_50716c;
        case 0x507170u: goto label_507170;
        case 0x507174u: goto label_507174;
        case 0x507178u: goto label_507178;
        case 0x50717cu: goto label_50717c;
        case 0x507180u: goto label_507180;
        case 0x507184u: goto label_507184;
        case 0x507188u: goto label_507188;
        case 0x50718cu: goto label_50718c;
        case 0x507190u: goto label_507190;
        case 0x507194u: goto label_507194;
        case 0x507198u: goto label_507198;
        case 0x50719cu: goto label_50719c;
        case 0x5071a0u: goto label_5071a0;
        case 0x5071a4u: goto label_5071a4;
        case 0x5071a8u: goto label_5071a8;
        case 0x5071acu: goto label_5071ac;
        case 0x5071b0u: goto label_5071b0;
        case 0x5071b4u: goto label_5071b4;
        case 0x5071b8u: goto label_5071b8;
        case 0x5071bcu: goto label_5071bc;
        case 0x5071c0u: goto label_5071c0;
        case 0x5071c4u: goto label_5071c4;
        case 0x5071c8u: goto label_5071c8;
        case 0x5071ccu: goto label_5071cc;
        case 0x5071d0u: goto label_5071d0;
        case 0x5071d4u: goto label_5071d4;
        case 0x5071d8u: goto label_5071d8;
        case 0x5071dcu: goto label_5071dc;
        case 0x5071e0u: goto label_5071e0;
        case 0x5071e4u: goto label_5071e4;
        case 0x5071e8u: goto label_5071e8;
        case 0x5071ecu: goto label_5071ec;
        case 0x5071f0u: goto label_5071f0;
        case 0x5071f4u: goto label_5071f4;
        case 0x5071f8u: goto label_5071f8;
        case 0x5071fcu: goto label_5071fc;
        case 0x507200u: goto label_507200;
        case 0x507204u: goto label_507204;
        case 0x507208u: goto label_507208;
        case 0x50720cu: goto label_50720c;
        case 0x507210u: goto label_507210;
        case 0x507214u: goto label_507214;
        case 0x507218u: goto label_507218;
        case 0x50721cu: goto label_50721c;
        case 0x507220u: goto label_507220;
        case 0x507224u: goto label_507224;
        case 0x507228u: goto label_507228;
        case 0x50722cu: goto label_50722c;
        case 0x507230u: goto label_507230;
        case 0x507234u: goto label_507234;
        case 0x507238u: goto label_507238;
        case 0x50723cu: goto label_50723c;
        case 0x507240u: goto label_507240;
        case 0x507244u: goto label_507244;
        case 0x507248u: goto label_507248;
        case 0x50724cu: goto label_50724c;
        case 0x507250u: goto label_507250;
        case 0x507254u: goto label_507254;
        case 0x507258u: goto label_507258;
        case 0x50725cu: goto label_50725c;
        case 0x507260u: goto label_507260;
        case 0x507264u: goto label_507264;
        case 0x507268u: goto label_507268;
        case 0x50726cu: goto label_50726c;
        case 0x507270u: goto label_507270;
        case 0x507274u: goto label_507274;
        case 0x507278u: goto label_507278;
        case 0x50727cu: goto label_50727c;
        case 0x507280u: goto label_507280;
        case 0x507284u: goto label_507284;
        case 0x507288u: goto label_507288;
        case 0x50728cu: goto label_50728c;
        case 0x507290u: goto label_507290;
        case 0x507294u: goto label_507294;
        case 0x507298u: goto label_507298;
        case 0x50729cu: goto label_50729c;
        case 0x5072a0u: goto label_5072a0;
        case 0x5072a4u: goto label_5072a4;
        case 0x5072a8u: goto label_5072a8;
        case 0x5072acu: goto label_5072ac;
        case 0x5072b0u: goto label_5072b0;
        case 0x5072b4u: goto label_5072b4;
        case 0x5072b8u: goto label_5072b8;
        case 0x5072bcu: goto label_5072bc;
        case 0x5072c0u: goto label_5072c0;
        case 0x5072c4u: goto label_5072c4;
        case 0x5072c8u: goto label_5072c8;
        case 0x5072ccu: goto label_5072cc;
        case 0x5072d0u: goto label_5072d0;
        case 0x5072d4u: goto label_5072d4;
        case 0x5072d8u: goto label_5072d8;
        case 0x5072dcu: goto label_5072dc;
        case 0x5072e0u: goto label_5072e0;
        case 0x5072e4u: goto label_5072e4;
        case 0x5072e8u: goto label_5072e8;
        case 0x5072ecu: goto label_5072ec;
        case 0x5072f0u: goto label_5072f0;
        case 0x5072f4u: goto label_5072f4;
        case 0x5072f8u: goto label_5072f8;
        case 0x5072fcu: goto label_5072fc;
        case 0x507300u: goto label_507300;
        case 0x507304u: goto label_507304;
        case 0x507308u: goto label_507308;
        case 0x50730cu: goto label_50730c;
        case 0x507310u: goto label_507310;
        case 0x507314u: goto label_507314;
        case 0x507318u: goto label_507318;
        case 0x50731cu: goto label_50731c;
        case 0x507320u: goto label_507320;
        case 0x507324u: goto label_507324;
        case 0x507328u: goto label_507328;
        case 0x50732cu: goto label_50732c;
        case 0x507330u: goto label_507330;
        case 0x507334u: goto label_507334;
        case 0x507338u: goto label_507338;
        case 0x50733cu: goto label_50733c;
        case 0x507340u: goto label_507340;
        case 0x507344u: goto label_507344;
        case 0x507348u: goto label_507348;
        case 0x50734cu: goto label_50734c;
        case 0x507350u: goto label_507350;
        case 0x507354u: goto label_507354;
        case 0x507358u: goto label_507358;
        case 0x50735cu: goto label_50735c;
        case 0x507360u: goto label_507360;
        case 0x507364u: goto label_507364;
        case 0x507368u: goto label_507368;
        case 0x50736cu: goto label_50736c;
        case 0x507370u: goto label_507370;
        case 0x507374u: goto label_507374;
        case 0x507378u: goto label_507378;
        case 0x50737cu: goto label_50737c;
        case 0x507380u: goto label_507380;
        case 0x507384u: goto label_507384;
        case 0x507388u: goto label_507388;
        case 0x50738cu: goto label_50738c;
        case 0x507390u: goto label_507390;
        case 0x507394u: goto label_507394;
        case 0x507398u: goto label_507398;
        case 0x50739cu: goto label_50739c;
        case 0x5073a0u: goto label_5073a0;
        case 0x5073a4u: goto label_5073a4;
        case 0x5073a8u: goto label_5073a8;
        case 0x5073acu: goto label_5073ac;
        case 0x5073b0u: goto label_5073b0;
        case 0x5073b4u: goto label_5073b4;
        case 0x5073b8u: goto label_5073b8;
        case 0x5073bcu: goto label_5073bc;
        case 0x5073c0u: goto label_5073c0;
        case 0x5073c4u: goto label_5073c4;
        case 0x5073c8u: goto label_5073c8;
        case 0x5073ccu: goto label_5073cc;
        case 0x5073d0u: goto label_5073d0;
        case 0x5073d4u: goto label_5073d4;
        case 0x5073d8u: goto label_5073d8;
        case 0x5073dcu: goto label_5073dc;
        case 0x5073e0u: goto label_5073e0;
        case 0x5073e4u: goto label_5073e4;
        case 0x5073e8u: goto label_5073e8;
        case 0x5073ecu: goto label_5073ec;
        case 0x5073f0u: goto label_5073f0;
        case 0x5073f4u: goto label_5073f4;
        case 0x5073f8u: goto label_5073f8;
        case 0x5073fcu: goto label_5073fc;
        case 0x507400u: goto label_507400;
        case 0x507404u: goto label_507404;
        case 0x507408u: goto label_507408;
        case 0x50740cu: goto label_50740c;
        case 0x507410u: goto label_507410;
        case 0x507414u: goto label_507414;
        case 0x507418u: goto label_507418;
        case 0x50741cu: goto label_50741c;
        case 0x507420u: goto label_507420;
        case 0x507424u: goto label_507424;
        case 0x507428u: goto label_507428;
        case 0x50742cu: goto label_50742c;
        case 0x507430u: goto label_507430;
        case 0x507434u: goto label_507434;
        case 0x507438u: goto label_507438;
        case 0x50743cu: goto label_50743c;
        case 0x507440u: goto label_507440;
        case 0x507444u: goto label_507444;
        case 0x507448u: goto label_507448;
        case 0x50744cu: goto label_50744c;
        case 0x507450u: goto label_507450;
        case 0x507454u: goto label_507454;
        case 0x507458u: goto label_507458;
        case 0x50745cu: goto label_50745c;
        case 0x507460u: goto label_507460;
        case 0x507464u: goto label_507464;
        case 0x507468u: goto label_507468;
        case 0x50746cu: goto label_50746c;
        case 0x507470u: goto label_507470;
        case 0x507474u: goto label_507474;
        case 0x507478u: goto label_507478;
        case 0x50747cu: goto label_50747c;
        case 0x507480u: goto label_507480;
        case 0x507484u: goto label_507484;
        case 0x507488u: goto label_507488;
        case 0x50748cu: goto label_50748c;
        case 0x507490u: goto label_507490;
        case 0x507494u: goto label_507494;
        case 0x507498u: goto label_507498;
        case 0x50749cu: goto label_50749c;
        case 0x5074a0u: goto label_5074a0;
        case 0x5074a4u: goto label_5074a4;
        case 0x5074a8u: goto label_5074a8;
        case 0x5074acu: goto label_5074ac;
        case 0x5074b0u: goto label_5074b0;
        case 0x5074b4u: goto label_5074b4;
        case 0x5074b8u: goto label_5074b8;
        case 0x5074bcu: goto label_5074bc;
        case 0x5074c0u: goto label_5074c0;
        case 0x5074c4u: goto label_5074c4;
        case 0x5074c8u: goto label_5074c8;
        case 0x5074ccu: goto label_5074cc;
        case 0x5074d0u: goto label_5074d0;
        case 0x5074d4u: goto label_5074d4;
        case 0x5074d8u: goto label_5074d8;
        case 0x5074dcu: goto label_5074dc;
        case 0x5074e0u: goto label_5074e0;
        case 0x5074e4u: goto label_5074e4;
        case 0x5074e8u: goto label_5074e8;
        case 0x5074ecu: goto label_5074ec;
        case 0x5074f0u: goto label_5074f0;
        case 0x5074f4u: goto label_5074f4;
        case 0x5074f8u: goto label_5074f8;
        case 0x5074fcu: goto label_5074fc;
        case 0x507500u: goto label_507500;
        case 0x507504u: goto label_507504;
        case 0x507508u: goto label_507508;
        case 0x50750cu: goto label_50750c;
        case 0x507510u: goto label_507510;
        case 0x507514u: goto label_507514;
        case 0x507518u: goto label_507518;
        case 0x50751cu: goto label_50751c;
        case 0x507520u: goto label_507520;
        case 0x507524u: goto label_507524;
        case 0x507528u: goto label_507528;
        case 0x50752cu: goto label_50752c;
        case 0x507530u: goto label_507530;
        case 0x507534u: goto label_507534;
        case 0x507538u: goto label_507538;
        case 0x50753cu: goto label_50753c;
        case 0x507540u: goto label_507540;
        case 0x507544u: goto label_507544;
        case 0x507548u: goto label_507548;
        case 0x50754cu: goto label_50754c;
        case 0x507550u: goto label_507550;
        case 0x507554u: goto label_507554;
        case 0x507558u: goto label_507558;
        case 0x50755cu: goto label_50755c;
        case 0x507560u: goto label_507560;
        case 0x507564u: goto label_507564;
        case 0x507568u: goto label_507568;
        case 0x50756cu: goto label_50756c;
        case 0x507570u: goto label_507570;
        case 0x507574u: goto label_507574;
        case 0x507578u: goto label_507578;
        case 0x50757cu: goto label_50757c;
        case 0x507580u: goto label_507580;
        case 0x507584u: goto label_507584;
        case 0x507588u: goto label_507588;
        case 0x50758cu: goto label_50758c;
        case 0x507590u: goto label_507590;
        case 0x507594u: goto label_507594;
        case 0x507598u: goto label_507598;
        case 0x50759cu: goto label_50759c;
        case 0x5075a0u: goto label_5075a0;
        case 0x5075a4u: goto label_5075a4;
        case 0x5075a8u: goto label_5075a8;
        case 0x5075acu: goto label_5075ac;
        case 0x5075b0u: goto label_5075b0;
        case 0x5075b4u: goto label_5075b4;
        case 0x5075b8u: goto label_5075b8;
        case 0x5075bcu: goto label_5075bc;
        case 0x5075c0u: goto label_5075c0;
        case 0x5075c4u: goto label_5075c4;
        case 0x5075c8u: goto label_5075c8;
        case 0x5075ccu: goto label_5075cc;
        case 0x5075d0u: goto label_5075d0;
        case 0x5075d4u: goto label_5075d4;
        case 0x5075d8u: goto label_5075d8;
        case 0x5075dcu: goto label_5075dc;
        case 0x5075e0u: goto label_5075e0;
        case 0x5075e4u: goto label_5075e4;
        case 0x5075e8u: goto label_5075e8;
        case 0x5075ecu: goto label_5075ec;
        case 0x5075f0u: goto label_5075f0;
        case 0x5075f4u: goto label_5075f4;
        case 0x5075f8u: goto label_5075f8;
        case 0x5075fcu: goto label_5075fc;
        case 0x507600u: goto label_507600;
        case 0x507604u: goto label_507604;
        case 0x507608u: goto label_507608;
        case 0x50760cu: goto label_50760c;
        case 0x507610u: goto label_507610;
        case 0x507614u: goto label_507614;
        case 0x507618u: goto label_507618;
        case 0x50761cu: goto label_50761c;
        case 0x507620u: goto label_507620;
        case 0x507624u: goto label_507624;
        case 0x507628u: goto label_507628;
        case 0x50762cu: goto label_50762c;
        case 0x507630u: goto label_507630;
        case 0x507634u: goto label_507634;
        case 0x507638u: goto label_507638;
        case 0x50763cu: goto label_50763c;
        case 0x507640u: goto label_507640;
        case 0x507644u: goto label_507644;
        case 0x507648u: goto label_507648;
        case 0x50764cu: goto label_50764c;
        case 0x507650u: goto label_507650;
        case 0x507654u: goto label_507654;
        case 0x507658u: goto label_507658;
        case 0x50765cu: goto label_50765c;
        case 0x507660u: goto label_507660;
        case 0x507664u: goto label_507664;
        case 0x507668u: goto label_507668;
        case 0x50766cu: goto label_50766c;
        case 0x507670u: goto label_507670;
        case 0x507674u: goto label_507674;
        case 0x507678u: goto label_507678;
        case 0x50767cu: goto label_50767c;
        case 0x507680u: goto label_507680;
        case 0x507684u: goto label_507684;
        case 0x507688u: goto label_507688;
        case 0x50768cu: goto label_50768c;
        case 0x507690u: goto label_507690;
        case 0x507694u: goto label_507694;
        case 0x507698u: goto label_507698;
        case 0x50769cu: goto label_50769c;
        case 0x5076a0u: goto label_5076a0;
        case 0x5076a4u: goto label_5076a4;
        case 0x5076a8u: goto label_5076a8;
        case 0x5076acu: goto label_5076ac;
        case 0x5076b0u: goto label_5076b0;
        case 0x5076b4u: goto label_5076b4;
        case 0x5076b8u: goto label_5076b8;
        case 0x5076bcu: goto label_5076bc;
        case 0x5076c0u: goto label_5076c0;
        case 0x5076c4u: goto label_5076c4;
        case 0x5076c8u: goto label_5076c8;
        case 0x5076ccu: goto label_5076cc;
        case 0x5076d0u: goto label_5076d0;
        case 0x5076d4u: goto label_5076d4;
        case 0x5076d8u: goto label_5076d8;
        case 0x5076dcu: goto label_5076dc;
        case 0x5076e0u: goto label_5076e0;
        case 0x5076e4u: goto label_5076e4;
        case 0x5076e8u: goto label_5076e8;
        case 0x5076ecu: goto label_5076ec;
        case 0x5076f0u: goto label_5076f0;
        case 0x5076f4u: goto label_5076f4;
        case 0x5076f8u: goto label_5076f8;
        case 0x5076fcu: goto label_5076fc;
        case 0x507700u: goto label_507700;
        case 0x507704u: goto label_507704;
        case 0x507708u: goto label_507708;
        case 0x50770cu: goto label_50770c;
        case 0x507710u: goto label_507710;
        case 0x507714u: goto label_507714;
        case 0x507718u: goto label_507718;
        case 0x50771cu: goto label_50771c;
        case 0x507720u: goto label_507720;
        case 0x507724u: goto label_507724;
        case 0x507728u: goto label_507728;
        case 0x50772cu: goto label_50772c;
        case 0x507730u: goto label_507730;
        case 0x507734u: goto label_507734;
        case 0x507738u: goto label_507738;
        case 0x50773cu: goto label_50773c;
        case 0x507740u: goto label_507740;
        case 0x507744u: goto label_507744;
        case 0x507748u: goto label_507748;
        case 0x50774cu: goto label_50774c;
        case 0x507750u: goto label_507750;
        case 0x507754u: goto label_507754;
        case 0x507758u: goto label_507758;
        case 0x50775cu: goto label_50775c;
        case 0x507760u: goto label_507760;
        case 0x507764u: goto label_507764;
        case 0x507768u: goto label_507768;
        case 0x50776cu: goto label_50776c;
        case 0x507770u: goto label_507770;
        case 0x507774u: goto label_507774;
        case 0x507778u: goto label_507778;
        case 0x50777cu: goto label_50777c;
        case 0x507780u: goto label_507780;
        case 0x507784u: goto label_507784;
        case 0x507788u: goto label_507788;
        case 0x50778cu: goto label_50778c;
        case 0x507790u: goto label_507790;
        case 0x507794u: goto label_507794;
        case 0x507798u: goto label_507798;
        case 0x50779cu: goto label_50779c;
        case 0x5077a0u: goto label_5077a0;
        case 0x5077a4u: goto label_5077a4;
        case 0x5077a8u: goto label_5077a8;
        case 0x5077acu: goto label_5077ac;
        case 0x5077b0u: goto label_5077b0;
        case 0x5077b4u: goto label_5077b4;
        case 0x5077b8u: goto label_5077b8;
        case 0x5077bcu: goto label_5077bc;
        case 0x5077c0u: goto label_5077c0;
        case 0x5077c4u: goto label_5077c4;
        case 0x5077c8u: goto label_5077c8;
        case 0x5077ccu: goto label_5077cc;
        case 0x5077d0u: goto label_5077d0;
        case 0x5077d4u: goto label_5077d4;
        case 0x5077d8u: goto label_5077d8;
        case 0x5077dcu: goto label_5077dc;
        case 0x5077e0u: goto label_5077e0;
        case 0x5077e4u: goto label_5077e4;
        case 0x5077e8u: goto label_5077e8;
        case 0x5077ecu: goto label_5077ec;
        case 0x5077f0u: goto label_5077f0;
        case 0x5077f4u: goto label_5077f4;
        case 0x5077f8u: goto label_5077f8;
        case 0x5077fcu: goto label_5077fc;
        case 0x507800u: goto label_507800;
        case 0x507804u: goto label_507804;
        case 0x507808u: goto label_507808;
        case 0x50780cu: goto label_50780c;
        case 0x507810u: goto label_507810;
        case 0x507814u: goto label_507814;
        case 0x507818u: goto label_507818;
        case 0x50781cu: goto label_50781c;
        case 0x507820u: goto label_507820;
        case 0x507824u: goto label_507824;
        case 0x507828u: goto label_507828;
        case 0x50782cu: goto label_50782c;
        case 0x507830u: goto label_507830;
        case 0x507834u: goto label_507834;
        case 0x507838u: goto label_507838;
        case 0x50783cu: goto label_50783c;
        case 0x507840u: goto label_507840;
        case 0x507844u: goto label_507844;
        case 0x507848u: goto label_507848;
        case 0x50784cu: goto label_50784c;
        default: break;
    }

    ctx->pc = 0x506610u;

label_506610:
    // 0x506610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x506610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_506614:
    // 0x506614: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x506614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_506618:
    // 0x506618: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x506618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_50661c:
    // 0x50661c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_506620:
    // 0x506620: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x506620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_506624:
    // 0x506624: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x506624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_506628:
    // 0x506628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x506628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50662c:
    // 0x50662c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x50662cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_506630:
    // 0x506630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x506630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_506634:
    // 0x506634: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x506634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_506638:
    // 0x506638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x506638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50663c:
    // 0x50663c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x50663cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_506640:
    // 0x506640: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x506640u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_506644:
    // 0x506644: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_506648:
    if (ctx->pc == 0x506648u) {
        ctx->pc = 0x506648u;
            // 0x506648: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50664Cu;
        goto label_50664c;
    }
    ctx->pc = 0x506644u;
    {
        const bool branch_taken_0x506644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x506648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506644u;
            // 0x506648: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506644) {
            ctx->pc = 0x506844u;
            goto label_506844;
        }
    }
    ctx->pc = 0x50664Cu;
label_50664c:
    // 0x50664c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x50664cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_506650:
    // 0x506650: 0x5860007d  blezl       $v1, . + 4 + (0x7D << 2)
label_506654:
    if (ctx->pc == 0x506654u) {
        ctx->pc = 0x506654u;
            // 0x506654: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x506658u;
        goto label_506658;
    }
    ctx->pc = 0x506650u;
    {
        const bool branch_taken_0x506650 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x506650) {
            ctx->pc = 0x506654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506650u;
            // 0x506654: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x506848u;
            goto label_506848;
        }
    }
    ctx->pc = 0x506658u;
label_506658:
    // 0x506658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x506658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50665c:
    // 0x50665c: 0xc04f278  jal         func_13C9E0
label_506660:
    if (ctx->pc == 0x506660u) {
        ctx->pc = 0x506660u;
            // 0x506660: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x506664u;
        goto label_506664;
    }
    ctx->pc = 0x50665Cu;
    SET_GPR_U32(ctx, 31, 0x506664u);
    ctx->pc = 0x506660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50665Cu;
            // 0x506660: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506664u; }
        if (ctx->pc != 0x506664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506664u; }
        if (ctx->pc != 0x506664u) { return; }
    }
    ctx->pc = 0x506664u;
label_506664:
    // 0x506664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x506664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_506668:
    // 0x506668: 0xc04ce80  jal         func_133A00
label_50666c:
    if (ctx->pc == 0x50666Cu) {
        ctx->pc = 0x50666Cu;
            // 0x50666c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x506670u;
        goto label_506670;
    }
    ctx->pc = 0x506668u;
    SET_GPR_U32(ctx, 31, 0x506670u);
    ctx->pc = 0x50666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506668u;
            // 0x50666c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506670u; }
        if (ctx->pc != 0x506670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506670u; }
        if (ctx->pc != 0x506670u) { return; }
    }
    ctx->pc = 0x506670u;
label_506670:
    // 0x506670: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x506670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_506674:
    // 0x506674: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x506674u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_506678:
    // 0x506678: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x506678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_50667c:
    // 0x50667c: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x50667cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_506680:
    // 0x506680: 0xc07698c  jal         func_1DA630
label_506684:
    if (ctx->pc == 0x506684u) {
        ctx->pc = 0x506684u;
            // 0x506684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506688u;
        goto label_506688;
    }
    ctx->pc = 0x506680u;
    SET_GPR_U32(ctx, 31, 0x506688u);
    ctx->pc = 0x506684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506680u;
            // 0x506684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506688u; }
        if (ctx->pc != 0x506688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506688u; }
        if (ctx->pc != 0x506688u) { return; }
    }
    ctx->pc = 0x506688u;
label_506688:
    // 0x506688: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x506688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50668c:
    // 0x50668c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_506690:
    if (ctx->pc == 0x506690u) {
        ctx->pc = 0x506694u;
        goto label_506694;
    }
    ctx->pc = 0x50668Cu;
    {
        const bool branch_taken_0x50668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50668c) {
            ctx->pc = 0x50669Cu;
            goto label_50669c;
        }
    }
    ctx->pc = 0x506694u;
label_506694:
    // 0x506694: 0x10000033  b           . + 4 + (0x33 << 2)
label_506698:
    if (ctx->pc == 0x506698u) {
        ctx->pc = 0x506698u;
            // 0x506698: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50669Cu;
        goto label_50669c;
    }
    ctx->pc = 0x506694u;
    {
        const bool branch_taken_0x506694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506694u;
            // 0x506698: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506694) {
            ctx->pc = 0x506764u;
            goto label_506764;
        }
    }
    ctx->pc = 0x50669Cu;
label_50669c:
    // 0x50669c: 0xc0576f4  jal         func_15DBD0
label_5066a0:
    if (ctx->pc == 0x5066A0u) {
        ctx->pc = 0x5066A4u;
        goto label_5066a4;
    }
    ctx->pc = 0x50669Cu;
    SET_GPR_U32(ctx, 31, 0x5066A4u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5066A4u; }
        if (ctx->pc != 0x5066A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5066A4u; }
        if (ctx->pc != 0x5066A4u) { return; }
    }
    ctx->pc = 0x5066A4u;
label_5066a4:
    // 0x5066a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5066a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5066a8:
    // 0x5066a8: 0xc076984  jal         func_1DA610
label_5066ac:
    if (ctx->pc == 0x5066ACu) {
        ctx->pc = 0x5066ACu;
            // 0x5066ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5066B0u;
        goto label_5066b0;
    }
    ctx->pc = 0x5066A8u;
    SET_GPR_U32(ctx, 31, 0x5066B0u);
    ctx->pc = 0x5066ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5066A8u;
            // 0x5066ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5066B0u; }
        if (ctx->pc != 0x5066B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5066B0u; }
        if (ctx->pc != 0x5066B0u) { return; }
    }
    ctx->pc = 0x5066B0u;
label_5066b0:
    // 0x5066b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5066b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5066b4:
    // 0x5066b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x5066b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5066b8:
    // 0x5066b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5066b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5066bc:
    // 0x5066bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5066bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5066c0:
    // 0x5066c0: 0xc442ccd0  lwc1        $f2, -0x3330($v0)
    ctx->pc = 0x5066c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5066c4:
    // 0x5066c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x5066c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5066c8:
    // 0x5066c8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5066c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5066cc:
    // 0x5066cc: 0xc441ccd8  lwc1        $f1, -0x3328($v0)
    ctx->pc = 0x5066ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5066d0:
    // 0x5066d0: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x5066d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_5066d4:
    // 0x5066d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5066d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5066d8:
    // 0x5066d8: 0xc440ccdc  lwc1        $f0, -0x3324($v0)
    ctx->pc = 0x5066d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5066dc:
    // 0x5066dc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x5066dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_5066e0:
    // 0x5066e0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5066e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5066e4:
    // 0x5066e4: 0x8c42ccd4  lw          $v0, -0x332C($v0)
    ctx->pc = 0x5066e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954196)));
label_5066e8:
    // 0x5066e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x5066e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_5066ec:
    // 0x5066ec: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x5066ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_5066f0:
    // 0x5066f0: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x5066f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5066f4:
    // 0x5066f4: 0xc04cca0  jal         func_133280
label_5066f8:
    if (ctx->pc == 0x5066F8u) {
        ctx->pc = 0x5066F8u;
            // 0x5066f8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x5066FCu;
        goto label_5066fc;
    }
    ctx->pc = 0x5066F4u;
    SET_GPR_U32(ctx, 31, 0x5066FCu);
    ctx->pc = 0x5066F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5066F4u;
            // 0x5066f8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5066FCu; }
        if (ctx->pc != 0x5066FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5066FCu; }
        if (ctx->pc != 0x5066FCu) { return; }
    }
    ctx->pc = 0x5066FCu;
label_5066fc:
    // 0x5066fc: 0xc076980  jal         func_1DA600
label_506700:
    if (ctx->pc == 0x506700u) {
        ctx->pc = 0x506700u;
            // 0x506700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506704u;
        goto label_506704;
    }
    ctx->pc = 0x5066FCu;
    SET_GPR_U32(ctx, 31, 0x506704u);
    ctx->pc = 0x506700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5066FCu;
            // 0x506700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506704u; }
        if (ctx->pc != 0x506704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506704u; }
        if (ctx->pc != 0x506704u) { return; }
    }
    ctx->pc = 0x506704u;
label_506704:
    // 0x506704: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x506704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_506708:
    // 0x506708: 0xc04cc34  jal         func_1330D0
label_50670c:
    if (ctx->pc == 0x50670Cu) {
        ctx->pc = 0x50670Cu;
            // 0x50670c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506710u;
        goto label_506710;
    }
    ctx->pc = 0x506708u;
    SET_GPR_U32(ctx, 31, 0x506710u);
    ctx->pc = 0x50670Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506708u;
            // 0x50670c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506710u; }
        if (ctx->pc != 0x506710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506710u; }
        if (ctx->pc != 0x506710u) { return; }
    }
    ctx->pc = 0x506710u;
label_506710:
    // 0x506710: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x506710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_506714:
    // 0x506714: 0xc461b250  lwc1        $f1, -0x4DB0($v1)
    ctx->pc = 0x506714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506718:
    // 0x506718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x506718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50671c:
    // 0x50671c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_506720:
    if (ctx->pc == 0x506720u) {
        ctx->pc = 0x506720u;
            // 0x506720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506724u;
        goto label_506724;
    }
    ctx->pc = 0x50671Cu;
    {
        const bool branch_taken_0x50671c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50671c) {
            ctx->pc = 0x506720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50671Cu;
            // 0x506720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50672Cu;
            goto label_50672c;
        }
    }
    ctx->pc = 0x506724u;
label_506724:
    // 0x506724: 0x1000000f  b           . + 4 + (0xF << 2)
label_506728:
    if (ctx->pc == 0x506728u) {
        ctx->pc = 0x506728u;
            // 0x506728: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x50672Cu;
        goto label_50672c;
    }
    ctx->pc = 0x506724u;
    {
        const bool branch_taken_0x506724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506724u;
            // 0x506728: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506724) {
            ctx->pc = 0x506764u;
            goto label_506764;
        }
    }
    ctx->pc = 0x50672Cu;
label_50672c:
    // 0x50672c: 0xc07697c  jal         func_1DA5F0
label_506730:
    if (ctx->pc == 0x506730u) {
        ctx->pc = 0x506734u;
        goto label_506734;
    }
    ctx->pc = 0x50672Cu;
    SET_GPR_U32(ctx, 31, 0x506734u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506734u; }
        if (ctx->pc != 0x506734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506734u; }
        if (ctx->pc != 0x506734u) { return; }
    }
    ctx->pc = 0x506734u;
label_506734:
    // 0x506734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x506734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_506738:
    // 0x506738: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x506738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50673c:
    // 0x50673c: 0xc04cd60  jal         func_133580
label_506740:
    if (ctx->pc == 0x506740u) {
        ctx->pc = 0x506740u;
            // 0x506740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506744u;
        goto label_506744;
    }
    ctx->pc = 0x50673Cu;
    SET_GPR_U32(ctx, 31, 0x506744u);
    ctx->pc = 0x506740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50673Cu;
            // 0x506740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506744u; }
        if (ctx->pc != 0x506744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506744u; }
        if (ctx->pc != 0x506744u) { return; }
    }
    ctx->pc = 0x506744u;
label_506744:
    // 0x506744: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x506744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_506748:
    // 0x506748: 0xc04c650  jal         func_131940
label_50674c:
    if (ctx->pc == 0x50674Cu) {
        ctx->pc = 0x50674Cu;
            // 0x50674c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x506750u;
        goto label_506750;
    }
    ctx->pc = 0x506748u;
    SET_GPR_U32(ctx, 31, 0x506750u);
    ctx->pc = 0x50674Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506748u;
            // 0x50674c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506750u; }
        if (ctx->pc != 0x506750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506750u; }
        if (ctx->pc != 0x506750u) { return; }
    }
    ctx->pc = 0x506750u;
label_506750:
    // 0x506750: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x506750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_506754:
    // 0x506754: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x506754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_506758:
    // 0x506758: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x506758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_50675c:
    // 0x50675c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_506760:
    // 0x506760: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x506760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_506764:
    // 0x506764: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x506764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_506768:
    // 0x506768: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_50676c:
    if (ctx->pc == 0x50676Cu) {
        ctx->pc = 0x50676Cu;
            // 0x50676c: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x506770u;
        goto label_506770;
    }
    ctx->pc = 0x506768u;
    {
        const bool branch_taken_0x506768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x50676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506768u;
            // 0x50676c: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506768) {
            ctx->pc = 0x506844u;
            goto label_506844;
        }
    }
    ctx->pc = 0x506770u;
label_506770:
    // 0x506770: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x506770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_506774:
    // 0x506774: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x506774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_506778:
    // 0x506778: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x506778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_50677c:
    // 0x50677c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x50677cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_506780:
    // 0x506780: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x506780u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_506784:
    // 0x506784: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x506784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_506788:
    // 0x506788: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x506788u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_50678c:
    // 0x50678c: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x50678cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_506790:
    // 0x506790: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x506790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_506794:
    // 0x506794: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x506794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_506798:
    // 0x506798: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x506798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_50679c:
    // 0x50679c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x50679cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_5067a0:
    // 0x5067a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5067a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5067a4:
    // 0x5067a4: 0x869021  addu        $s2, $a0, $a2
    ctx->pc = 0x5067a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_5067a8:
    // 0x5067a8: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x5067a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_5067ac:
    // 0x5067ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x5067acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_5067b0:
    // 0x5067b0: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x5067b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_5067b4:
    // 0x5067b4: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x5067b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_5067b8:
    // 0x5067b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5067b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5067bc:
    // 0x5067bc: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x5067bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_5067c0:
    // 0x5067c0: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x5067c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_5067c4:
    // 0x5067c4: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x5067c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_5067c8:
    // 0x5067c8: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x5067c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5067cc:
    // 0x5067cc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x5067ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_5067d0:
    // 0x5067d0: 0x12aa821  addu        $s5, $t1, $t2
    ctx->pc = 0x5067d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_5067d4:
    // 0x5067d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5067d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5067d8:
    // 0x5067d8: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x5067d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_5067dc:
    // 0x5067dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5067dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5067e0:
    // 0x5067e0: 0xad350000  sw          $s5, 0x0($t1)
    ctx->pc = 0x5067e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 21));
label_5067e4:
    // 0x5067e4: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x5067e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_5067e8:
    // 0x5067e8: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x5067e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_5067ec:
    // 0x5067ec: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x5067ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_5067f0:
    // 0x5067f0: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x5067f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_5067f4:
    // 0x5067f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5067f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_5067f8:
    // 0x5067f8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x5067f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_5067fc:
    // 0x5067fc: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x5067fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_506800:
    // 0x506800: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x506800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_506804:
    // 0x506804: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x506804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_506808:
    // 0x506808: 0xc04e4a4  jal         func_139290
label_50680c:
    if (ctx->pc == 0x50680Cu) {
        ctx->pc = 0x50680Cu;
            // 0x50680c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506810u;
        goto label_506810;
    }
    ctx->pc = 0x506808u;
    SET_GPR_U32(ctx, 31, 0x506810u);
    ctx->pc = 0x50680Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506808u;
            // 0x50680c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506810u; }
        if (ctx->pc != 0x506810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506810u; }
        if (ctx->pc != 0x506810u) { return; }
    }
    ctx->pc = 0x506810u;
label_506810:
    // 0x506810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x506810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_506814:
    // 0x506814: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x506814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_506818:
    // 0x506818: 0xc04cd60  jal         func_133580
label_50681c:
    if (ctx->pc == 0x50681Cu) {
        ctx->pc = 0x50681Cu;
            // 0x50681c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506820u;
        goto label_506820;
    }
    ctx->pc = 0x506818u;
    SET_GPR_U32(ctx, 31, 0x506820u);
    ctx->pc = 0x50681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506818u;
            // 0x50681c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506820u; }
        if (ctx->pc != 0x506820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506820u; }
        if (ctx->pc != 0x506820u) { return; }
    }
    ctx->pc = 0x506820u;
label_506820:
    // 0x506820: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x506820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_506824:
    // 0x506824: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x506824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_506828:
    // 0x506828: 0x320f809  jalr        $t9
label_50682c:
    if (ctx->pc == 0x50682Cu) {
        ctx->pc = 0x50682Cu;
            // 0x50682c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506830u;
        goto label_506830;
    }
    ctx->pc = 0x506828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x506830u);
        ctx->pc = 0x50682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506828u;
            // 0x50682c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x506830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x506830u; }
            if (ctx->pc != 0x506830u) { return; }
        }
        }
    }
    ctx->pc = 0x506830u;
label_506830:
    // 0x506830: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x506830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_506834:
    // 0x506834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x506834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_506838:
    // 0x506838: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x506838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50683c:
    // 0x50683c: 0xc054fd4  jal         func_153F50
label_506840:
    if (ctx->pc == 0x506840u) {
        ctx->pc = 0x506840u;
            // 0x506840: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506844u;
        goto label_506844;
    }
    ctx->pc = 0x50683Cu;
    SET_GPR_U32(ctx, 31, 0x506844u);
    ctx->pc = 0x506840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50683Cu;
            // 0x506840: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506844u; }
        if (ctx->pc != 0x506844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506844u; }
        if (ctx->pc != 0x506844u) { return; }
    }
    ctx->pc = 0x506844u;
label_506844:
    // 0x506844: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x506844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_506848:
    // 0x506848: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x506848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50684c:
    // 0x50684c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50684cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_506850:
    // 0x506850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x506850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_506854:
    // 0x506854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x506854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_506858:
    // 0x506858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x506858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50685c:
    // 0x50685c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50685cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_506860:
    // 0x506860: 0x3e00008  jr          $ra
label_506864:
    if (ctx->pc == 0x506864u) {
        ctx->pc = 0x506864u;
            // 0x506864: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x506868u;
        goto label_506868;
    }
    ctx->pc = 0x506860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506860u;
            // 0x506864: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506868u;
label_506868:
    // 0x506868: 0x0  nop
    ctx->pc = 0x506868u;
    // NOP
label_50686c:
    // 0x50686c: 0x0  nop
    ctx->pc = 0x50686cu;
    // NOP
label_506870:
    // 0x506870: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x506870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
label_506874:
    // 0x506874: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x506874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_506878:
    // 0x506878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x506878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50687c:
    // 0x50687c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_506880:
    // 0x506880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x506880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_506884:
    // 0x506884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x506884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_506888:
    // 0x506888: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x506888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50688c:
    // 0x50688c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_506890:
    // 0x506890: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x506890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_506894:
    // 0x506894: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x506894u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_506898:
    // 0x506898: 0xc0dc9bc  jal         func_3726F0
label_50689c:
    if (ctx->pc == 0x50689Cu) {
        ctx->pc = 0x50689Cu;
            // 0x50689c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5068A0u;
        goto label_5068a0;
    }
    ctx->pc = 0x506898u;
    SET_GPR_U32(ctx, 31, 0x5068A0u);
    ctx->pc = 0x50689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506898u;
            // 0x50689c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5068A0u; }
        if (ctx->pc != 0x5068A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5068A0u; }
        if (ctx->pc != 0x5068A0u) { return; }
    }
    ctx->pc = 0x5068A0u;
label_5068a0:
    // 0x5068a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5068a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5068a4:
    // 0x5068a4: 0xc0dc9a0  jal         func_372680
label_5068a8:
    if (ctx->pc == 0x5068A8u) {
        ctx->pc = 0x5068A8u;
            // 0x5068a8: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x5068ACu;
        goto label_5068ac;
    }
    ctx->pc = 0x5068A4u;
    SET_GPR_U32(ctx, 31, 0x5068ACu);
    ctx->pc = 0x5068A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5068A4u;
            // 0x5068a8: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5068ACu; }
        if (ctx->pc != 0x5068ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5068ACu; }
        if (ctx->pc != 0x5068ACu) { return; }
    }
    ctx->pc = 0x5068ACu;
label_5068ac:
    // 0x5068ac: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x5068acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_5068b0:
    // 0x5068b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5068b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5068b4:
    // 0x5068b4: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
label_5068b8:
    if (ctx->pc == 0x5068B8u) {
        ctx->pc = 0x5068BCu;
        goto label_5068bc;
    }
    ctx->pc = 0x5068B4u;
    {
        const bool branch_taken_0x5068b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5068b4) {
            ctx->pc = 0x506A6Cu;
            goto label_506a6c;
        }
    }
    ctx->pc = 0x5068BCu;
label_5068bc:
    // 0x5068bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5068bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5068c0:
    // 0x5068c0: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_5068c4:
    if (ctx->pc == 0x5068C4u) {
        ctx->pc = 0x5068C4u;
            // 0x5068c4: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->pc = 0x5068C8u;
        goto label_5068c8;
    }
    ctx->pc = 0x5068C0u;
    {
        const bool branch_taken_0x5068c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5068c0) {
            ctx->pc = 0x5068C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5068C0u;
            // 0x5068c4: 0x8e4200e4  lw          $v0, 0xE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5068DCu;
            goto label_5068dc;
        }
    }
    ctx->pc = 0x5068C8u;
label_5068c8:
    // 0x5068c8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_5068cc:
    if (ctx->pc == 0x5068CCu) {
        ctx->pc = 0x5068CCu;
            // 0x5068cc: 0xae4300e0  sw          $v1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x5068D0u;
        goto label_5068d0;
    }
    ctx->pc = 0x5068C8u;
    {
        const bool branch_taken_0x5068c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5068c8) {
            ctx->pc = 0x5068CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5068C8u;
            // 0x5068cc: 0xae4300e0  sw          $v1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5068D8u;
            goto label_5068d8;
        }
    }
    ctx->pc = 0x5068D0u;
label_5068d0:
    // 0x5068d0: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_5068d4:
    if (ctx->pc == 0x5068D4u) {
        ctx->pc = 0x5068D4u;
            // 0x5068d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x5068D8u;
        goto label_5068d8;
    }
    ctx->pc = 0x5068D0u;
    {
        const bool branch_taken_0x5068d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5068D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5068D0u;
            // 0x5068d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5068d0) {
            ctx->pc = 0x506B64u;
            goto label_506b64;
        }
    }
    ctx->pc = 0x5068D8u;
label_5068d8:
    // 0x5068d8: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x5068d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_5068dc:
    // 0x5068dc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x5068dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_5068e0:
    // 0x5068e0: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x5068e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_5068e4:
    // 0x5068e4: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x5068e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5068e8:
    // 0x5068e8: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x5068e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
label_5068ec:
    // 0x5068ec: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x5068ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5068f0:
    // 0x5068f0: 0xe6200158  swc1        $f0, 0x158($s1)
    ctx->pc = 0x5068f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
label_5068f4:
    // 0x5068f4: 0x8e5300e4  lw          $s3, 0xE4($s2)
    ctx->pc = 0x5068f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_5068f8:
    // 0x5068f8: 0x267400e0  addiu       $s4, $s3, 0xE0
    ctx->pc = 0x5068f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_5068fc:
    // 0x5068fc: 0xc140150  jal         func_500540
label_506900:
    if (ctx->pc == 0x506900u) {
        ctx->pc = 0x506900u;
            // 0x506900: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506904u;
        goto label_506904;
    }
    ctx->pc = 0x5068FCu;
    SET_GPR_U32(ctx, 31, 0x506904u);
    ctx->pc = 0x506900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5068FCu;
            // 0x506900: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506904u; }
        if (ctx->pc != 0x506904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506904u; }
        if (ctx->pc != 0x506904u) { return; }
    }
    ctx->pc = 0x506904u;
label_506904:
    // 0x506904: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x506904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_506908:
    // 0x506908: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x506908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_50690c:
    // 0x50690c: 0xc04cbe0  jal         func_132F80
label_506910:
    if (ctx->pc == 0x506910u) {
        ctx->pc = 0x506910u;
            // 0x506910: 0x27a60370  addiu       $a2, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x506914u;
        goto label_506914;
    }
    ctx->pc = 0x50690Cu;
    SET_GPR_U32(ctx, 31, 0x506914u);
    ctx->pc = 0x506910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50690Cu;
            // 0x506910: 0x27a60370  addiu       $a2, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506914u; }
        if (ctx->pc != 0x506914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506914u; }
        if (ctx->pc != 0x506914u) { return; }
    }
    ctx->pc = 0x506914u;
label_506914:
    // 0x506914: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x506914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_506918:
    // 0x506918: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x506918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50691c:
    // 0x50691c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x50691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_506920:
    // 0x506920: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x506920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_506924:
    // 0x506924: 0xc140150  jal         func_500540
label_506928:
    if (ctx->pc == 0x506928u) {
        ctx->pc = 0x506928u;
            // 0x506928: 0xafa20200  sw          $v0, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
        ctx->pc = 0x50692Cu;
        goto label_50692c;
    }
    ctx->pc = 0x506924u;
    SET_GPR_U32(ctx, 31, 0x50692Cu);
    ctx->pc = 0x506928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506924u;
            // 0x506928: 0xafa20200  sw          $v0, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50692Cu; }
        if (ctx->pc != 0x50692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50692Cu; }
        if (ctx->pc != 0x50692Cu) { return; }
    }
    ctx->pc = 0x50692Cu;
label_50692c:
    // 0x50692c: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x50692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_506930:
    // 0x506930: 0xc04f278  jal         func_13C9E0
label_506934:
    if (ctx->pc == 0x506934u) {
        ctx->pc = 0x506934u;
            // 0x506934: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x506938u;
        goto label_506938;
    }
    ctx->pc = 0x506930u;
    SET_GPR_U32(ctx, 31, 0x506938u);
    ctx->pc = 0x506934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506930u;
            // 0x506934: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506938u; }
        if (ctx->pc != 0x506938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506938u; }
        if (ctx->pc != 0x506938u) { return; }
    }
    ctx->pc = 0x506938u;
label_506938:
    // 0x506938: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x506938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50693c:
    // 0x50693c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x50693cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_506940:
    // 0x506940: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x506940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_506944:
    // 0x506944: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x506944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_506948:
    // 0x506948: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x506948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_50694c:
    // 0x50694c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x50694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_506950:
    // 0x506950: 0xc04cca0  jal         func_133280
label_506954:
    if (ctx->pc == 0x506954u) {
        ctx->pc = 0x506954u;
            // 0x506954: 0x24c6b240  addiu       $a2, $a2, -0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947392));
        ctx->pc = 0x506958u;
        goto label_506958;
    }
    ctx->pc = 0x506950u;
    SET_GPR_U32(ctx, 31, 0x506958u);
    ctx->pc = 0x506954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506950u;
            // 0x506954: 0x24c6b240  addiu       $a2, $a2, -0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506958u; }
        if (ctx->pc != 0x506958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506958u; }
        if (ctx->pc != 0x506958u) { return; }
    }
    ctx->pc = 0x506958u;
label_506958:
    // 0x506958: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x506958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_50695c:
    // 0x50695c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x50695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_506960:
    // 0x506960: 0xc04cbe0  jal         func_132F80
label_506964:
    if (ctx->pc == 0x506964u) {
        ctx->pc = 0x506964u;
            // 0x506964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506968u;
        goto label_506968;
    }
    ctx->pc = 0x506960u;
    SET_GPR_U32(ctx, 31, 0x506968u);
    ctx->pc = 0x506964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506960u;
            // 0x506964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506968u; }
        if (ctx->pc != 0x506968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506968u; }
        if (ctx->pc != 0x506968u) { return; }
    }
    ctx->pc = 0x506968u;
label_506968:
    // 0x506968: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x506968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_50696c:
    // 0x50696c: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x50696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_506970:
    // 0x506970: 0xc04cc90  jal         func_133240
label_506974:
    if (ctx->pc == 0x506974u) {
        ctx->pc = 0x506974u;
            // 0x506974: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x506978u;
        goto label_506978;
    }
    ctx->pc = 0x506970u;
    SET_GPR_U32(ctx, 31, 0x506978u);
    ctx->pc = 0x506974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506970u;
            // 0x506974: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506978u; }
        if (ctx->pc != 0x506978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506978u; }
        if (ctx->pc != 0x506978u) { return; }
    }
    ctx->pc = 0x506978u;
label_506978:
    // 0x506978: 0xc7a403a0  lwc1        $f4, 0x3A0($sp)
    ctx->pc = 0x506978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_50697c:
    // 0x50697c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506980:
    // 0x506980: 0xc7a303a4  lwc1        $f3, 0x3A4($sp)
    ctx->pc = 0x506980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_506984:
    // 0x506984: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x506984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_506988:
    // 0x506988: 0xc7a203a8  lwc1        $f2, 0x3A8($sp)
    ctx->pc = 0x506988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50698c:
    // 0x50698c: 0xafa0039c  sw          $zero, 0x39C($sp)
    ctx->pc = 0x50698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 924), GPR_U32(ctx, 0));
label_506990:
    // 0x506990: 0xe7a40390  swc1        $f4, 0x390($sp)
    ctx->pc = 0x506990u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
label_506994:
    // 0x506994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x506994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_506998:
    // 0x506998: 0xe7a30394  swc1        $f3, 0x394($sp)
    ctx->pc = 0x506998u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
label_50699c:
    // 0x50699c: 0xe7a20398  swc1        $f2, 0x398($sp)
    ctx->pc = 0x50699cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_5069a0:
    // 0x5069a0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x5069a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5069a4:
    // 0x5069a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5069a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5069a8:
    // 0x5069a8: 0x0  nop
    ctx->pc = 0x5069a8u;
    // NOP
label_5069ac:
    // 0x5069ac: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x5069acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_5069b0:
    // 0x5069b0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x5069b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_5069b4:
    // 0x5069b4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x5069b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_5069b8:
    // 0x5069b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x5069b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5069bc:
    // 0x5069bc: 0xe7a40390  swc1        $f4, 0x390($sp)
    ctx->pc = 0x5069bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
label_5069c0:
    // 0x5069c0: 0xe7a30394  swc1        $f3, 0x394($sp)
    ctx->pc = 0x5069c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
label_5069c4:
    // 0x5069c4: 0xe7a20398  swc1        $f2, 0x398($sp)
    ctx->pc = 0x5069c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_5069c8:
    // 0x5069c8: 0xe7a1039c  swc1        $f1, 0x39C($sp)
    ctx->pc = 0x5069c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
label_5069cc:
    // 0x5069cc: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x5069ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5069d0:
    // 0x5069d0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x5069d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_5069d4:
    // 0x5069d4: 0xe7a00390  swc1        $f0, 0x390($sp)
    ctx->pc = 0x5069d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
label_5069d8:
    // 0x5069d8: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x5069d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5069dc:
    // 0x5069dc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x5069dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_5069e0:
    // 0x5069e0: 0xe7a00394  swc1        $f0, 0x394($sp)
    ctx->pc = 0x5069e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
label_5069e4:
    // 0x5069e4: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x5069e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5069e8:
    // 0x5069e8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x5069e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_5069ec:
    // 0x5069ec: 0xe7a00398  swc1        $f0, 0x398($sp)
    ctx->pc = 0x5069ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_5069f0:
    // 0x5069f0: 0xc600018c  lwc1        $f0, 0x18C($s0)
    ctx->pc = 0x5069f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5069f4:
    // 0x5069f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x5069f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_5069f8:
    // 0x5069f8: 0xc088b74  jal         func_222DD0
label_5069fc:
    if (ctx->pc == 0x5069FCu) {
        ctx->pc = 0x5069FCu;
            // 0x5069fc: 0xe7a0039c  swc1        $f0, 0x39C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
        ctx->pc = 0x506A00u;
        goto label_506a00;
    }
    ctx->pc = 0x5069F8u;
    SET_GPR_U32(ctx, 31, 0x506A00u);
    ctx->pc = 0x5069FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5069F8u;
            // 0x5069fc: 0xe7a0039c  swc1        $f0, 0x39C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A00u; }
        if (ctx->pc != 0x506A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A00u; }
        if (ctx->pc != 0x506A00u) { return; }
    }
    ctx->pc = 0x506A00u;
label_506a00:
    // 0x506a00: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x506a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_506a04:
    // 0x506a04: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x506a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_506a08:
    // 0x506a08: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x506a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_506a0c:
    // 0x506a0c: 0x320f809  jalr        $t9
label_506a10:
    if (ctx->pc == 0x506A10u) {
        ctx->pc = 0x506A10u;
            // 0x506a10: 0x27a50390  addiu       $a1, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x506A14u;
        goto label_506a14;
    }
    ctx->pc = 0x506A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x506A14u);
        ctx->pc = 0x506A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506A0Cu;
            // 0x506a10: 0x27a50390  addiu       $a1, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x506A14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x506A14u; }
            if (ctx->pc != 0x506A14u) { return; }
        }
        }
    }
    ctx->pc = 0x506A14u;
label_506a14:
    // 0x506a14: 0xc088b74  jal         func_222DD0
label_506a18:
    if (ctx->pc == 0x506A18u) {
        ctx->pc = 0x506A18u;
            // 0x506a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506A1Cu;
        goto label_506a1c;
    }
    ctx->pc = 0x506A14u;
    SET_GPR_U32(ctx, 31, 0x506A1Cu);
    ctx->pc = 0x506A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506A14u;
            // 0x506a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A1Cu; }
        if (ctx->pc != 0x506A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A1Cu; }
        if (ctx->pc != 0x506A1Cu) { return; }
    }
    ctx->pc = 0x506A1Cu;
label_506a1c:
    // 0x506a1c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x506a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_506a20:
    // 0x506a20: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x506a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_506a24:
    // 0x506a24: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x506a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_506a28:
    // 0x506a28: 0x320f809  jalr        $t9
label_506a2c:
    if (ctx->pc == 0x506A2Cu) {
        ctx->pc = 0x506A2Cu;
            // 0x506a2c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x506A30u;
        goto label_506a30;
    }
    ctx->pc = 0x506A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x506A30u);
        ctx->pc = 0x506A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506A28u;
            // 0x506a2c: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x506A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x506A30u; }
            if (ctx->pc != 0x506A30u) { return; }
        }
        }
    }
    ctx->pc = 0x506A30u;
label_506a30:
    // 0x506a30: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x506a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_506a34:
    // 0x506a34: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x506a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_506a38:
    // 0x506a38: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x506a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_506a3c:
    // 0x506a3c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
label_506a40:
    if (ctx->pc == 0x506A40u) {
        ctx->pc = 0x506A44u;
        goto label_506a44;
    }
    ctx->pc = 0x506A3Cu;
    {
        const bool branch_taken_0x506a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x506a3c) {
            ctx->pc = 0x506B60u;
            goto label_506b60;
        }
    }
    ctx->pc = 0x506A44u;
label_506a44:
    // 0x506a44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x506a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506a48:
    // 0x506a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x506a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_506a4c:
    // 0x506a4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x506a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_506a50:
    // 0x506a50: 0xc08914c  jal         func_224530
label_506a54:
    if (ctx->pc == 0x506A54u) {
        ctx->pc = 0x506A54u;
            // 0x506a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506A58u;
        goto label_506a58;
    }
    ctx->pc = 0x506A50u;
    SET_GPR_U32(ctx, 31, 0x506A58u);
    ctx->pc = 0x506A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506A50u;
            // 0x506a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A58u; }
        if (ctx->pc != 0x506A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A58u; }
        if (ctx->pc != 0x506A58u) { return; }
    }
    ctx->pc = 0x506A58u;
label_506a58:
    // 0x506a58: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x506a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_506a5c:
    // 0x506a5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x506a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_506a60:
    // 0x506a60: 0xae4400f0  sw          $a0, 0xF0($s2)
    ctx->pc = 0x506a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 4));
label_506a64:
    // 0x506a64: 0x1000003e  b           . + 4 + (0x3E << 2)
label_506a68:
    if (ctx->pc == 0x506A68u) {
        ctx->pc = 0x506A68u;
            // 0x506a68: 0xae4300e0  sw          $v1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x506A6Cu;
        goto label_506a6c;
    }
    ctx->pc = 0x506A64u;
    {
        const bool branch_taken_0x506a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506A64u;
            // 0x506a68: 0xae4300e0  sw          $v1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506a64) {
            ctx->pc = 0x506B60u;
            goto label_506b60;
        }
    }
    ctx->pc = 0x506A6Cu;
label_506a6c:
    // 0x506a6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x506a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_506a70:
    // 0x506a70: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x506a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_506a74:
    // 0x506a74: 0xc64100f0  lwc1        $f1, 0xF0($s2)
    ctx->pc = 0x506a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506a78:
    // 0x506a78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x506a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_506a7c:
    // 0x506a7c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x506a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506a80:
    // 0x506a80: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x506a80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_506a84:
    // 0x506a84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x506a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_506a88:
    // 0x506a88: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_506a8c:
    if (ctx->pc == 0x506A8Cu) {
        ctx->pc = 0x506A8Cu;
            // 0x506a8c: 0xe64100f0  swc1        $f1, 0xF0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
        ctx->pc = 0x506A90u;
        goto label_506a90;
    }
    ctx->pc = 0x506A88u;
    {
        const bool branch_taken_0x506a88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x506A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506A88u;
            // 0x506a8c: 0xe64100f0  swc1        $f1, 0xF0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x506a88) {
            ctx->pc = 0x506B60u;
            goto label_506b60;
        }
    }
    ctx->pc = 0x506A90u;
label_506a90:
    // 0x506a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x506a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_506a94:
    // 0x506a94: 0xc0e32a4  jal         func_38CA90
label_506a98:
    if (ctx->pc == 0x506A98u) {
        ctx->pc = 0x506A98u;
            // 0x506a98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x506A9Cu;
        goto label_506a9c;
    }
    ctx->pc = 0x506A94u;
    SET_GPR_U32(ctx, 31, 0x506A9Cu);
    ctx->pc = 0x506A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506A94u;
            // 0x506a98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A9Cu; }
        if (ctx->pc != 0x506A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506A9Cu; }
        if (ctx->pc != 0x506A9Cu) { return; }
    }
    ctx->pc = 0x506A9Cu;
label_506a9c:
    // 0x506a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x506a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506aa0:
    // 0x506aa0: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x506aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_506aa4:
    // 0x506aa4: 0xc0e082c  jal         func_3820B0
label_506aa8:
    if (ctx->pc == 0x506AA8u) {
        ctx->pc = 0x506AA8u;
            // 0x506aa8: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x506AACu;
        goto label_506aac;
    }
    ctx->pc = 0x506AA4u;
    SET_GPR_U32(ctx, 31, 0x506AACu);
    ctx->pc = 0x506AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506AA4u;
            // 0x506aa8: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AACu; }
        if (ctx->pc != 0x506AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AACu; }
        if (ctx->pc != 0x506AACu) { return; }
    }
    ctx->pc = 0x506AACu;
label_506aac:
    // 0x506aac: 0xc0e0828  jal         func_3820A0
label_506ab0:
    if (ctx->pc == 0x506AB0u) {
        ctx->pc = 0x506AB0u;
            // 0x506ab0: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x506AB4u;
        goto label_506ab4;
    }
    ctx->pc = 0x506AACu;
    SET_GPR_U32(ctx, 31, 0x506AB4u);
    ctx->pc = 0x506AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506AACu;
            // 0x506ab0: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AB4u; }
        if (ctx->pc != 0x506AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AB4u; }
        if (ctx->pc != 0x506AB4u) { return; }
    }
    ctx->pc = 0x506AB4u;
label_506ab4:
    // 0x506ab4: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x506ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_506ab8:
    // 0x506ab8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_506abc:
    if (ctx->pc == 0x506ABCu) {
        ctx->pc = 0x506ABCu;
            // 0x506abc: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x506AC0u;
        goto label_506ac0;
    }
    ctx->pc = 0x506AB8u;
    {
        const bool branch_taken_0x506ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x506ab8) {
            ctx->pc = 0x506ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506AB8u;
            // 0x506abc: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x506AF0u;
            goto label_506af0;
        }
    }
    ctx->pc = 0x506AC0u;
label_506ac0:
    // 0x506ac0: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x506ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_506ac4:
    // 0x506ac4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x506ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_506ac8:
    // 0x506ac8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_506acc:
    if (ctx->pc == 0x506ACCu) {
        ctx->pc = 0x506AD0u;
        goto label_506ad0;
    }
    ctx->pc = 0x506AC8u;
    {
        const bool branch_taken_0x506ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x506ac8) {
            ctx->pc = 0x506AECu;
            goto label_506aec;
        }
    }
    ctx->pc = 0x506AD0u;
label_506ad0:
    // 0x506ad0: 0xc0dc408  jal         func_371020
label_506ad4:
    if (ctx->pc == 0x506AD4u) {
        ctx->pc = 0x506AD4u;
            // 0x506ad4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x506AD8u;
        goto label_506ad8;
    }
    ctx->pc = 0x506AD0u;
    SET_GPR_U32(ctx, 31, 0x506AD8u);
    ctx->pc = 0x506AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506AD0u;
            // 0x506ad4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AD8u; }
        if (ctx->pc != 0x506AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AD8u; }
        if (ctx->pc != 0x506AD8u) { return; }
    }
    ctx->pc = 0x506AD8u;
label_506ad8:
    // 0x506ad8: 0xc0e0824  jal         func_382090
label_506adc:
    if (ctx->pc == 0x506ADCu) {
        ctx->pc = 0x506ADCu;
            // 0x506adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506AE0u;
        goto label_506ae0;
    }
    ctx->pc = 0x506AD8u;
    SET_GPR_U32(ctx, 31, 0x506AE0u);
    ctx->pc = 0x506ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506AD8u;
            // 0x506adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AE0u; }
        if (ctx->pc != 0x506AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AE0u; }
        if (ctx->pc != 0x506AE0u) { return; }
    }
    ctx->pc = 0x506AE0u;
label_506ae0:
    // 0x506ae0: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x506ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_506ae4:
    // 0x506ae4: 0xc0e081c  jal         func_382070
label_506ae8:
    if (ctx->pc == 0x506AE8u) {
        ctx->pc = 0x506AE8u;
            // 0x506ae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506AECu;
        goto label_506aec;
    }
    ctx->pc = 0x506AE4u;
    SET_GPR_U32(ctx, 31, 0x506AECu);
    ctx->pc = 0x506AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506AE4u;
            // 0x506ae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AECu; }
        if (ctx->pc != 0x506AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AECu; }
        if (ctx->pc != 0x506AECu) { return; }
    }
    ctx->pc = 0x506AECu;
label_506aec:
    // 0x506aec: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x506aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_506af0:
    // 0x506af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x506af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_506af4:
    // 0x506af4: 0xc0e080c  jal         func_382030
label_506af8:
    if (ctx->pc == 0x506AF8u) {
        ctx->pc = 0x506AF8u;
            // 0x506af8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x506AFCu;
        goto label_506afc;
    }
    ctx->pc = 0x506AF4u;
    SET_GPR_U32(ctx, 31, 0x506AFCu);
    ctx->pc = 0x506AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506AF4u;
            // 0x506af8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AFCu; }
        if (ctx->pc != 0x506AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506AFCu; }
        if (ctx->pc != 0x506AFCu) { return; }
    }
    ctx->pc = 0x506AFCu;
label_506afc:
    // 0x506afc: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x506afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_506b00:
    // 0x506b00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x506b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_506b04:
    // 0x506b04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x506b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506b08:
    // 0x506b08: 0xc08914c  jal         func_224530
label_506b0c:
    if (ctx->pc == 0x506B0Cu) {
        ctx->pc = 0x506B0Cu;
            // 0x506b0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506B10u;
        goto label_506b10;
    }
    ctx->pc = 0x506B08u;
    SET_GPR_U32(ctx, 31, 0x506B10u);
    ctx->pc = 0x506B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506B08u;
            // 0x506b0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B10u; }
        if (ctx->pc != 0x506B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B10u; }
        if (ctx->pc != 0x506B10u) { return; }
    }
    ctx->pc = 0x506B10u;
label_506b10:
    // 0x506b10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x506b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_506b14:
    // 0x506b14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x506b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_506b18:
    // 0x506b18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x506b18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_506b1c:
    // 0x506b1c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x506b1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_506b20:
    // 0x506b20: 0xc0b6df0  jal         func_2DB7C0
label_506b24:
    if (ctx->pc == 0x506B24u) {
        ctx->pc = 0x506B24u;
            // 0x506b24: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x506B28u;
        goto label_506b28;
    }
    ctx->pc = 0x506B20u;
    SET_GPR_U32(ctx, 31, 0x506B28u);
    ctx->pc = 0x506B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506B20u;
            // 0x506b24: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B28u; }
        if (ctx->pc != 0x506B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B28u; }
        if (ctx->pc != 0x506B28u) { return; }
    }
    ctx->pc = 0x506B28u;
label_506b28:
    // 0x506b28: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x506b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_506b2c:
    // 0x506b2c: 0xc0e07f8  jal         func_381FE0
label_506b30:
    if (ctx->pc == 0x506B30u) {
        ctx->pc = 0x506B30u;
            // 0x506b30: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x506B34u;
        goto label_506b34;
    }
    ctx->pc = 0x506B2Cu;
    SET_GPR_U32(ctx, 31, 0x506B34u);
    ctx->pc = 0x506B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506B2Cu;
            // 0x506b30: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B34u; }
        if (ctx->pc != 0x506B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B34u; }
        if (ctx->pc != 0x506B34u) { return; }
    }
    ctx->pc = 0x506B34u;
label_506b34:
    // 0x506b34: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x506b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_506b38:
    // 0x506b38: 0xc0dc3f4  jal         func_370FD0
label_506b3c:
    if (ctx->pc == 0x506B3Cu) {
        ctx->pc = 0x506B3Cu;
            // 0x506b3c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x506B40u;
        goto label_506b40;
    }
    ctx->pc = 0x506B38u;
    SET_GPR_U32(ctx, 31, 0x506B40u);
    ctx->pc = 0x506B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506B38u;
            // 0x506b3c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B40u; }
        if (ctx->pc != 0x506B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506B40u; }
        if (ctx->pc != 0x506B40u) { return; }
    }
    ctx->pc = 0x506B40u;
label_506b40:
    // 0x506b40: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x506b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_506b44:
    // 0x506b44: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x506b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_506b48:
    // 0x506b48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_506b4c:
    if (ctx->pc == 0x506B4Cu) {
        ctx->pc = 0x506B50u;
        goto label_506b50;
    }
    ctx->pc = 0x506B48u;
    {
        const bool branch_taken_0x506b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x506b48) {
            ctx->pc = 0x506B60u;
            goto label_506b60;
        }
    }
    ctx->pc = 0x506B50u;
label_506b50:
    // 0x506b50: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x506b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_506b54:
    // 0x506b54: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x506b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_506b58:
    // 0x506b58: 0x320f809  jalr        $t9
label_506b5c:
    if (ctx->pc == 0x506B5Cu) {
        ctx->pc = 0x506B5Cu;
            // 0x506b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506B60u;
        goto label_506b60;
    }
    ctx->pc = 0x506B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x506B60u);
        ctx->pc = 0x506B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506B58u;
            // 0x506b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x506B60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x506B60u; }
            if (ctx->pc != 0x506B60u) { return; }
        }
        }
    }
    ctx->pc = 0x506B60u;
label_506b60:
    // 0x506b60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x506b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_506b64:
    // 0x506b64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x506b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_506b68:
    // 0x506b68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x506b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_506b6c:
    // 0x506b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x506b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_506b70:
    // 0x506b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x506b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_506b74:
    // 0x506b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x506b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_506b78:
    // 0x506b78: 0x3e00008  jr          $ra
label_506b7c:
    if (ctx->pc == 0x506B7Cu) {
        ctx->pc = 0x506B7Cu;
            // 0x506b7c: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->pc = 0x506B80u;
        goto label_506b80;
    }
    ctx->pc = 0x506B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506B78u;
            // 0x506b7c: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506B80u;
label_506b80:
    // 0x506b80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x506b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_506b84:
    // 0x506b84: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x506b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
label_506b88:
    // 0x506b88: 0x3e00008  jr          $ra
label_506b8c:
    if (ctx->pc == 0x506B8Cu) {
        ctx->pc = 0x506B8Cu;
            // 0x506b8c: 0xa0800065  sb          $zero, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x506B90u;
        goto label_506b90;
    }
    ctx->pc = 0x506B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506B88u;
            // 0x506b8c: 0xa0800065  sb          $zero, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506B90u;
label_506b90:
    // 0x506b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x506b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506b94:
    // 0x506b94: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x506b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
label_506b98:
    // 0x506b98: 0x3e00008  jr          $ra
label_506b9c:
    if (ctx->pc == 0x506B9Cu) {
        ctx->pc = 0x506B9Cu;
            // 0x506b9c: 0xa0830065  sb          $v1, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x506BA0u;
        goto label_506ba0;
    }
    ctx->pc = 0x506B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506B98u;
            // 0x506b9c: 0xa0830065  sb          $v1, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506BA0u;
label_506ba0:
    // 0x506ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x506ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_506ba4:
    // 0x506ba4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x506ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_506ba8:
    // 0x506ba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x506ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_506bac:
    // 0x506bac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x506bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_506bb0:
    // 0x506bb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x506bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_506bb4:
    // 0x506bb4: 0x24c6b2e8  addiu       $a2, $a2, -0x4D18
    ctx->pc = 0x506bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947560));
label_506bb8:
    // 0x506bb8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x506bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506bbc:
    // 0x506bbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x506bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_506bc0:
    // 0x506bc0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x506bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506bc4:
    // 0x506bc4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x506bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506bc8:
    // 0x506bc8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x506bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_506bcc:
    // 0x506bcc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x506bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_506bd0:
    // 0x506bd0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x506bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_506bd4:
    // 0x506bd4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x506bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506bd8:
    // 0x506bd8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x506bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506bdc:
    // 0x506bdc: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x506bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506be0:
    // 0x506be0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x506be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_506be4:
    // 0x506be4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x506be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_506be8:
    // 0x506be8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x506be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_506bec:
    // 0x506bec: 0xc04cafc  jal         func_132BF0
label_506bf0:
    if (ctx->pc == 0x506BF0u) {
        ctx->pc = 0x506BF0u;
            // 0x506bf0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x506BF4u;
        goto label_506bf4;
    }
    ctx->pc = 0x506BECu;
    SET_GPR_U32(ctx, 31, 0x506BF4u);
    ctx->pc = 0x506BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506BECu;
            // 0x506bf0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506BF4u; }
        if (ctx->pc != 0x506BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506BF4u; }
        if (ctx->pc != 0x506BF4u) { return; }
    }
    ctx->pc = 0x506BF4u;
label_506bf4:
    // 0x506bf4: 0xc040180  jal         func_100600
label_506bf8:
    if (ctx->pc == 0x506BF8u) {
        ctx->pc = 0x506BF8u;
            // 0x506bf8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x506BFCu;
        goto label_506bfc;
    }
    ctx->pc = 0x506BF4u;
    SET_GPR_U32(ctx, 31, 0x506BFCu);
    ctx->pc = 0x506BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506BF4u;
            // 0x506bf8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506BFCu; }
        if (ctx->pc != 0x506BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506BFCu; }
        if (ctx->pc != 0x506BFCu) { return; }
    }
    ctx->pc = 0x506BFCu;
label_506bfc:
    // 0x506bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x506bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_506c00:
    // 0x506c00: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_506c04:
    if (ctx->pc == 0x506C04u) {
        ctx->pc = 0x506C04u;
            // 0x506c04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x506C08u;
        goto label_506c08;
    }
    ctx->pc = 0x506C00u;
    {
        const bool branch_taken_0x506c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x506c00) {
            ctx->pc = 0x506C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506C00u;
            // 0x506c04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x506CACu;
            goto label_506cac;
        }
    }
    ctx->pc = 0x506C08u;
label_506c08:
    // 0x506c08: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x506c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_506c0c:
    // 0x506c0c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x506c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_506c10:
    // 0x506c10: 0xc441b328  lwc1        $f1, -0x4CD8($v0)
    ctx->pc = 0x506c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506c14:
    // 0x506c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x506c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_506c18:
    // 0x506c18: 0x0  nop
    ctx->pc = 0x506c18u;
    // NOP
label_506c1c:
    // 0x506c1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x506c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_506c20:
    // 0x506c20: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_506c24:
    if (ctx->pc == 0x506C24u) {
        ctx->pc = 0x506C24u;
            // 0x506c24: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x506C28u;
        goto label_506c28;
    }
    ctx->pc = 0x506C20u;
    {
        const bool branch_taken_0x506c20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x506c20) {
            ctx->pc = 0x506C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506C20u;
            // 0x506c24: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x506C38u;
            goto label_506c38;
        }
    }
    ctx->pc = 0x506C28u;
label_506c28:
    // 0x506c28: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x506c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_506c2c:
    // 0x506c2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x506c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_506c30:
    // 0x506c30: 0x10000006  b           . + 4 + (0x6 << 2)
label_506c34:
    if (ctx->pc == 0x506C34u) {
        ctx->pc = 0x506C38u;
        goto label_506c38;
    }
    ctx->pc = 0x506C30u;
    {
        const bool branch_taken_0x506c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x506c30) {
            ctx->pc = 0x506C4Cu;
            goto label_506c4c;
        }
    }
    ctx->pc = 0x506C38u;
label_506c38:
    // 0x506c38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x506c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_506c3c:
    // 0x506c3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x506c3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_506c40:
    // 0x506c40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x506c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_506c44:
    // 0x506c44: 0x0  nop
    ctx->pc = 0x506c44u;
    // NOP
label_506c48:
    // 0x506c48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x506c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_506c4c:
    // 0x506c4c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x506c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_506c50:
    // 0x506c50: 0x3c090067  lui         $t1, 0x67
    ctx->pc = 0x506c50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)103 << 16));
label_506c54:
    // 0x506c54: 0x2442b2f8  addiu       $v0, $v0, -0x4D08
    ctx->pc = 0x506c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947576));
label_506c58:
    // 0x506c58: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x506c58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
label_506c5c:
    // 0x506c5c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x506c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_506c60:
    // 0x506c60: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x506c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_506c64:
    // 0x506c64: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x506c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_506c68:
    // 0x506c68: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x506c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_506c6c:
    // 0x506c6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x506c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_506c70:
    // 0x506c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x506c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_506c74:
    // 0x506c74: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x506c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_506c78:
    // 0x506c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x506c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506c7c:
    // 0x506c7c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x506c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_506c80:
    // 0x506c80: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x506c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_506c84:
    // 0x506c84: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x506c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_506c88:
    // 0x506c88: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x506c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_506c8c:
    // 0x506c8c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x506c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_506c90:
    // 0x506c90: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x506c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_506c94:
    // 0x506c94: 0x2529b308  addiu       $t1, $t1, -0x4CF8
    ctx->pc = 0x506c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947592));
label_506c98:
    // 0x506c98: 0x254ab318  addiu       $t2, $t2, -0x4CE8
    ctx->pc = 0x506c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294947608));
label_506c9c:
    // 0x506c9c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x506c9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_506ca0:
    // 0x506ca0: 0xc0db488  jal         func_36D220
label_506ca4:
    if (ctx->pc == 0x506CA4u) {
        ctx->pc = 0x506CA4u;
            // 0x506ca4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x506CA8u;
        goto label_506ca8;
    }
    ctx->pc = 0x506CA0u;
    SET_GPR_U32(ctx, 31, 0x506CA8u);
    ctx->pc = 0x506CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506CA0u;
            // 0x506ca4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506CA8u; }
        if (ctx->pc != 0x506CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506CA8u; }
        if (ctx->pc != 0x506CA8u) { return; }
    }
    ctx->pc = 0x506CA8u;
label_506ca8:
    // 0x506ca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x506ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_506cac:
    // 0x506cac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x506cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_506cb0:
    // 0x506cb0: 0x3e00008  jr          $ra
label_506cb4:
    if (ctx->pc == 0x506CB4u) {
        ctx->pc = 0x506CB4u;
            // 0x506cb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x506CB8u;
        goto label_506cb8;
    }
    ctx->pc = 0x506CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506CB0u;
            // 0x506cb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506CB8u;
label_506cb8:
    // 0x506cb8: 0x0  nop
    ctx->pc = 0x506cb8u;
    // NOP
label_506cbc:
    // 0x506cbc: 0x0  nop
    ctx->pc = 0x506cbcu;
    // NOP
label_506cc0:
    // 0x506cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x506cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_506cc4:
    // 0x506cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x506cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_506cc8:
    // 0x506cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x506cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_506ccc:
    // 0x506ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x506cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_506cd0:
    // 0x506cd0: 0xc04ab66  jal         func_12AD98
label_506cd4:
    if (ctx->pc == 0x506CD4u) {
        ctx->pc = 0x506CD4u;
            // 0x506cd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x506CD8u;
        goto label_506cd8;
    }
    ctx->pc = 0x506CD0u;
    SET_GPR_U32(ctx, 31, 0x506CD8u);
    ctx->pc = 0x506CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506CD0u;
            // 0x506cd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506CD8u; }
        if (ctx->pc != 0x506CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506CD8u; }
        if (ctx->pc != 0x506CD8u) { return; }
    }
    ctx->pc = 0x506CD8u;
label_506cd8:
    // 0x506cd8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x506cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_506cdc:
    // 0x506cdc: 0xc04ab66  jal         func_12AD98
label_506ce0:
    if (ctx->pc == 0x506CE0u) {
        ctx->pc = 0x506CE0u;
            // 0x506ce0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x506CE4u;
        goto label_506ce4;
    }
    ctx->pc = 0x506CDCu;
    SET_GPR_U32(ctx, 31, 0x506CE4u);
    ctx->pc = 0x506CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506CDCu;
            // 0x506ce0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506CE4u; }
        if (ctx->pc != 0x506CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506CE4u; }
        if (ctx->pc != 0x506CE4u) { return; }
    }
    ctx->pc = 0x506CE4u;
label_506ce4:
    // 0x506ce4: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x506ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_506ce8:
    // 0x506ce8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x506ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_506cec:
    // 0x506cec: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_506cf0:
    if (ctx->pc == 0x506CF0u) {
        ctx->pc = 0x506CF0u;
            // 0x506cf0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x506CF4u;
        goto label_506cf4;
    }
    ctx->pc = 0x506CECu;
    {
        const bool branch_taken_0x506cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x506cec) {
            ctx->pc = 0x506CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506CECu;
            // 0x506cf0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x506D08u;
            goto label_506d08;
        }
    }
    ctx->pc = 0x506CF4u;
label_506cf4:
    // 0x506cf4: 0x8e2400e8  lw          $a0, 0xE8($s1)
    ctx->pc = 0x506cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_506cf8:
    // 0x506cf8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x506cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_506cfc:
    // 0x506cfc: 0xc122d2c  jal         func_48B4B0
label_506d00:
    if (ctx->pc == 0x506D00u) {
        ctx->pc = 0x506D00u;
            // 0x506d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506D04u;
        goto label_506d04;
    }
    ctx->pc = 0x506CFCu;
    SET_GPR_U32(ctx, 31, 0x506D04u);
    ctx->pc = 0x506D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506CFCu;
            // 0x506d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506D04u; }
        if (ctx->pc != 0x506D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506D04u; }
        if (ctx->pc != 0x506D04u) { return; }
    }
    ctx->pc = 0x506D04u;
label_506d04:
    // 0x506d04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x506d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_506d08:
    // 0x506d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x506d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_506d0c:
    // 0x506d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x506d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_506d10:
    // 0x506d10: 0x3e00008  jr          $ra
label_506d14:
    if (ctx->pc == 0x506D14u) {
        ctx->pc = 0x506D14u;
            // 0x506d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x506D18u;
        goto label_506d18;
    }
    ctx->pc = 0x506D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506D10u;
            // 0x506d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506D18u;
label_506d18:
    // 0x506d18: 0x0  nop
    ctx->pc = 0x506d18u;
    // NOP
label_506d1c:
    // 0x506d1c: 0x0  nop
    ctx->pc = 0x506d1cu;
    // NOP
label_506d20:
    // 0x506d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x506d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_506d24:
    // 0x506d24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x506d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506d28:
    // 0x506d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x506d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_506d2c:
    // 0x506d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x506d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_506d30:
    // 0x506d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x506d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_506d34:
    // 0x506d34: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x506d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_506d38:
    // 0x506d38: 0xc122d2c  jal         func_48B4B0
label_506d3c:
    if (ctx->pc == 0x506D3Cu) {
        ctx->pc = 0x506D3Cu;
            // 0x506d3c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x506D40u;
        goto label_506d40;
    }
    ctx->pc = 0x506D38u;
    SET_GPR_U32(ctx, 31, 0x506D40u);
    ctx->pc = 0x506D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506D38u;
            // 0x506d3c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506D40u; }
        if (ctx->pc != 0x506D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506D40u; }
        if (ctx->pc != 0x506D40u) { return; }
    }
    ctx->pc = 0x506D40u;
label_506d40:
    // 0x506d40: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x506d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_506d44:
    // 0x506d44: 0xc0ba938  jal         func_2EA4E0
label_506d48:
    if (ctx->pc == 0x506D48u) {
        ctx->pc = 0x506D48u;
            // 0x506d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506D4Cu;
        goto label_506d4c;
    }
    ctx->pc = 0x506D44u;
    SET_GPR_U32(ctx, 31, 0x506D4Cu);
    ctx->pc = 0x506D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506D44u;
            // 0x506d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506D4Cu; }
        if (ctx->pc != 0x506D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506D4Cu; }
        if (ctx->pc != 0x506D4Cu) { return; }
    }
    ctx->pc = 0x506D4Cu;
label_506d4c:
    // 0x506d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x506d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_506d50:
    // 0x506d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x506d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_506d54:
    // 0x506d54: 0x3e00008  jr          $ra
label_506d58:
    if (ctx->pc == 0x506D58u) {
        ctx->pc = 0x506D58u;
            // 0x506d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x506D5Cu;
        goto label_506d5c;
    }
    ctx->pc = 0x506D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506D54u;
            // 0x506d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506D5Cu;
label_506d5c:
    // 0x506d5c: 0x0  nop
    ctx->pc = 0x506d5cu;
    // NOP
label_506d60:
    // 0x506d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x506d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_506d64:
    // 0x506d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x506d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_506d68:
    // 0x506d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x506d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_506d6c:
    // 0x506d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x506d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_506d70:
    // 0x506d70: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x506d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_506d74:
    // 0x506d74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_506d78:
    if (ctx->pc == 0x506D78u) {
        ctx->pc = 0x506D78u;
            // 0x506d78: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x506D7Cu;
        goto label_506d7c;
    }
    ctx->pc = 0x506D74u;
    {
        const bool branch_taken_0x506d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x506d74) {
            ctx->pc = 0x506D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506D74u;
            // 0x506d78: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x506D90u;
            goto label_506d90;
        }
    }
    ctx->pc = 0x506D7Cu;
label_506d7c:
    // 0x506d7c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x506d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_506d80:
    // 0x506d80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x506d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_506d84:
    // 0x506d84: 0x320f809  jalr        $t9
label_506d88:
    if (ctx->pc == 0x506D88u) {
        ctx->pc = 0x506D88u;
            // 0x506d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x506D8Cu;
        goto label_506d8c;
    }
    ctx->pc = 0x506D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x506D8Cu);
        ctx->pc = 0x506D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506D84u;
            // 0x506d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x506D8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x506D8Cu; }
            if (ctx->pc != 0x506D8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x506D8Cu;
label_506d8c:
    // 0x506d8c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x506d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_506d90:
    // 0x506d90: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x506d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_506d94:
    // 0x506d94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_506d98:
    if (ctx->pc == 0x506D98u) {
        ctx->pc = 0x506D98u;
            // 0x506d98: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x506D9Cu;
        goto label_506d9c;
    }
    ctx->pc = 0x506D94u;
    {
        const bool branch_taken_0x506d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x506d94) {
            ctx->pc = 0x506D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506D94u;
            // 0x506d98: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x506DB0u;
            goto label_506db0;
        }
    }
    ctx->pc = 0x506D9Cu;
label_506d9c:
    // 0x506d9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x506d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_506da0:
    // 0x506da0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x506da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_506da4:
    // 0x506da4: 0x320f809  jalr        $t9
label_506da8:
    if (ctx->pc == 0x506DA8u) {
        ctx->pc = 0x506DA8u;
            // 0x506da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x506DACu;
        goto label_506dac;
    }
    ctx->pc = 0x506DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x506DACu);
        ctx->pc = 0x506DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506DA4u;
            // 0x506da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x506DACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x506DACu; }
            if (ctx->pc != 0x506DACu) { return; }
        }
        }
    }
    ctx->pc = 0x506DACu;
label_506dac:
    // 0x506dac: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x506dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_506db0:
    // 0x506db0: 0xc0400a8  jal         func_1002A0
label_506db4:
    if (ctx->pc == 0x506DB4u) {
        ctx->pc = 0x506DB4u;
            // 0x506db4: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->pc = 0x506DB8u;
        goto label_506db8;
    }
    ctx->pc = 0x506DB0u;
    SET_GPR_U32(ctx, 31, 0x506DB8u);
    ctx->pc = 0x506DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506DB0u;
            // 0x506db4: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506DB8u; }
        if (ctx->pc != 0x506DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506DB8u; }
        if (ctx->pc != 0x506DB8u) { return; }
    }
    ctx->pc = 0x506DB8u;
label_506db8:
    // 0x506db8: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x506db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_506dbc:
    // 0x506dbc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x506dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_506dc0:
    // 0x506dc0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_506dc4:
    if (ctx->pc == 0x506DC4u) {
        ctx->pc = 0x506DC4u;
            // 0x506dc4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x506DC8u;
        goto label_506dc8;
    }
    ctx->pc = 0x506DC0u;
    {
        const bool branch_taken_0x506dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x506dc0) {
            ctx->pc = 0x506DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506DC0u;
            // 0x506dc4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x506DDCu;
            goto label_506ddc;
        }
    }
    ctx->pc = 0x506DC8u;
label_506dc8:
    // 0x506dc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x506dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_506dcc:
    // 0x506dcc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x506dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_506dd0:
    // 0x506dd0: 0x320f809  jalr        $t9
label_506dd4:
    if (ctx->pc == 0x506DD4u) {
        ctx->pc = 0x506DD4u;
            // 0x506dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x506DD8u;
        goto label_506dd8;
    }
    ctx->pc = 0x506DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x506DD8u);
        ctx->pc = 0x506DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506DD0u;
            // 0x506dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x506DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x506DD8u; }
            if (ctx->pc != 0x506DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x506DD8u;
label_506dd8:
    // 0x506dd8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x506dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_506ddc:
    // 0x506ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x506ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_506de0:
    // 0x506de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x506de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_506de4:
    // 0x506de4: 0x3e00008  jr          $ra
label_506de8:
    if (ctx->pc == 0x506DE8u) {
        ctx->pc = 0x506DE8u;
            // 0x506de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x506DECu;
        goto label_506dec;
    }
    ctx->pc = 0x506DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506DE4u;
            // 0x506de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x506DECu;
label_506dec:
    // 0x506dec: 0x0  nop
    ctx->pc = 0x506decu;
    // NOP
label_506df0:
    // 0x506df0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x506df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_506df4:
    // 0x506df4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x506df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_506df8:
    // 0x506df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x506df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_506dfc:
    // 0x506dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x506dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_506e00:
    // 0x506e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x506e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_506e04:
    // 0x506e04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x506e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_506e08:
    // 0x506e08: 0xc0892d0  jal         func_224B40
label_506e0c:
    if (ctx->pc == 0x506E0Cu) {
        ctx->pc = 0x506E0Cu;
            // 0x506e0c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x506E10u;
        goto label_506e10;
    }
    ctx->pc = 0x506E08u;
    SET_GPR_U32(ctx, 31, 0x506E10u);
    ctx->pc = 0x506E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506E08u;
            // 0x506e0c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E10u; }
        if (ctx->pc != 0x506E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E10u; }
        if (ctx->pc != 0x506E10u) { return; }
    }
    ctx->pc = 0x506E10u;
label_506e10:
    // 0x506e10: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x506e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_506e14:
    // 0x506e14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x506e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_506e18:
    // 0x506e18: 0x8c42aaf8  lw          $v0, -0x5508($v0)
    ctx->pc = 0x506e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945528)));
label_506e1c:
    // 0x506e1c: 0x8c500094  lw          $s0, 0x94($v0)
    ctx->pc = 0x506e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_506e20:
    // 0x506e20: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x506e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_506e24:
    // 0x506e24: 0xc0b6e68  jal         func_2DB9A0
label_506e28:
    if (ctx->pc == 0x506E28u) {
        ctx->pc = 0x506E28u;
            // 0x506e28: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x506E2Cu;
        goto label_506e2c;
    }
    ctx->pc = 0x506E24u;
    SET_GPR_U32(ctx, 31, 0x506E2Cu);
    ctx->pc = 0x506E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506E24u;
            // 0x506e28: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E2Cu; }
        if (ctx->pc != 0x506E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E2Cu; }
        if (ctx->pc != 0x506E2Cu) { return; }
    }
    ctx->pc = 0x506E2Cu;
label_506e2c:
    // 0x506e2c: 0xc0b6dac  jal         func_2DB6B0
label_506e30:
    if (ctx->pc == 0x506E30u) {
        ctx->pc = 0x506E30u;
            // 0x506e30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x506E34u;
        goto label_506e34;
    }
    ctx->pc = 0x506E2Cu;
    SET_GPR_U32(ctx, 31, 0x506E34u);
    ctx->pc = 0x506E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506E2Cu;
            // 0x506e30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E34u; }
        if (ctx->pc != 0x506E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E34u; }
        if (ctx->pc != 0x506E34u) { return; }
    }
    ctx->pc = 0x506E34u;
label_506e34:
    // 0x506e34: 0xc0cac94  jal         func_32B250
label_506e38:
    if (ctx->pc == 0x506E38u) {
        ctx->pc = 0x506E38u;
            // 0x506e38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x506E3Cu;
        goto label_506e3c;
    }
    ctx->pc = 0x506E34u;
    SET_GPR_U32(ctx, 31, 0x506E3Cu);
    ctx->pc = 0x506E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506E34u;
            // 0x506e38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E3Cu; }
        if (ctx->pc != 0x506E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E3Cu; }
        if (ctx->pc != 0x506E3Cu) { return; }
    }
    ctx->pc = 0x506E3Cu;
label_506e3c:
    // 0x506e3c: 0xc0cac84  jal         func_32B210
label_506e40:
    if (ctx->pc == 0x506E40u) {
        ctx->pc = 0x506E40u;
            // 0x506e40: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x506E44u;
        goto label_506e44;
    }
    ctx->pc = 0x506E3Cu;
    SET_GPR_U32(ctx, 31, 0x506E44u);
    ctx->pc = 0x506E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506E3Cu;
            // 0x506e40: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E44u; }
        if (ctx->pc != 0x506E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E44u; }
        if (ctx->pc != 0x506E44u) { return; }
    }
    ctx->pc = 0x506E44u;
label_506e44:
    // 0x506e44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x506e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_506e48:
    // 0x506e48: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x506e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_506e4c:
    // 0x506e4c: 0xc44cc920  lwc1        $f12, -0x36E0($v0)
    ctx->pc = 0x506e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_506e50:
    // 0x506e50: 0xc0a5a68  jal         func_2969A0
label_506e54:
    if (ctx->pc == 0x506E54u) {
        ctx->pc = 0x506E54u;
            // 0x506e54: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x506E58u;
        goto label_506e58;
    }
    ctx->pc = 0x506E50u;
    SET_GPR_U32(ctx, 31, 0x506E58u);
    ctx->pc = 0x506E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506E50u;
            // 0x506e54: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E58u; }
        if (ctx->pc != 0x506E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506E58u; }
        if (ctx->pc != 0x506E58u) { return; }
    }
    ctx->pc = 0x506E58u;
label_506e58:
    // 0x506e58: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x506e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_506e5c:
    // 0x506e5c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x506e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_506e60:
    // 0x506e60: 0xc6280018  lwc1        $f8, 0x18($s1)
    ctx->pc = 0x506e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_506e64:
    // 0x506e64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x506e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_506e68:
    // 0x506e68: 0xc6270014  lwc1        $f7, 0x14($s1)
    ctx->pc = 0x506e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_506e6c:
    // 0x506e6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x506e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506e70:
    // 0x506e70: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x506e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_506e74:
    // 0x506e74: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x506e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_506e78:
    // 0x506e78: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x506e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506e7c:
    // 0x506e7c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x506e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_506e80:
    // 0x506e80: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x506e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506e84:
    // 0x506e84: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x506e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506e88:
    // 0x506e88: 0xa3a40172  sb          $a0, 0x172($sp)
    ctx->pc = 0x506e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 4));
label_506e8c:
    // 0x506e8c: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x506e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_506e90:
    // 0x506e90: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x506e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_506e94:
    // 0x506e94: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x506e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_506e98:
    // 0x506e98: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x506e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_506e9c:
    // 0x506e9c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x506e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_506ea0:
    // 0x506ea0: 0xc445b0e8  lwc1        $f5, -0x4F18($v0)
    ctx->pc = 0x506ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_506ea4:
    // 0x506ea4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x506ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506ea8:
    // 0x506ea8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x506ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506eac:
    // 0x506eac: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x506eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506eb0:
    // 0x506eb0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x506eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_506eb4:
    // 0x506eb4: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x506eb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_506eb8:
    // 0x506eb8: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x506eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_506ebc:
    // 0x506ebc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x506ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_506ec0:
    // 0x506ec0: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x506ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_506ec4:
    // 0x506ec4: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x506ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_506ec8:
    // 0x506ec8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x506ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_506ecc:
    // 0x506ecc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x506eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506ed0:
    // 0x506ed0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x506ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_506ed4:
    // 0x506ed4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x506ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_506ed8:
    // 0x506ed8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x506ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506edc:
    // 0x506edc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x506edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_506ee0:
    // 0x506ee0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x506ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506ee4:
    // 0x506ee4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x506ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506ee8:
    // 0x506ee8: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x506ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_506eec:
    // 0x506eec: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x506eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_506ef0:
    // 0x506ef0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x506ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_506ef4:
    // 0x506ef4: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x506ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506ef8:
    // 0x506ef8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x506ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506efc:
    // 0x506efc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x506efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506f00:
    // 0x506f00: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x506f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_506f04:
    // 0x506f04: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x506f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_506f08:
    // 0x506f08: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x506f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_506f0c:
    // 0x506f0c: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x506f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_506f10:
    // 0x506f10: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x506f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_506f14:
    // 0x506f14: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x506f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506f18:
    // 0x506f18: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x506f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506f1c:
    // 0x506f1c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x506f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506f20:
    // 0x506f20: 0xe7a600d0  swc1        $f6, 0xD0($sp)
    ctx->pc = 0x506f20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_506f24:
    // 0x506f24: 0xe7a700d4  swc1        $f7, 0xD4($sp)
    ctx->pc = 0x506f24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_506f28:
    // 0x506f28: 0xe7a800d8  swc1        $f8, 0xD8($sp)
    ctx->pc = 0x506f28u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_506f2c:
    // 0x506f2c: 0xe7a50168  swc1        $f5, 0x168($sp)
    ctx->pc = 0x506f2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_506f30:
    // 0x506f30: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x506f30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_506f34:
    // 0x506f34: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x506f34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_506f38:
    // 0x506f38: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x506f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_506f3c:
    // 0x506f3c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x506f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_506f40:
    // 0x506f40: 0xc0a7a88  jal         func_29EA20
label_506f44:
    if (ctx->pc == 0x506F44u) {
        ctx->pc = 0x506F44u;
            // 0x506f44: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x506F48u;
        goto label_506f48;
    }
    ctx->pc = 0x506F40u;
    SET_GPR_U32(ctx, 31, 0x506F48u);
    ctx->pc = 0x506F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506F40u;
            // 0x506f44: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506F48u; }
        if (ctx->pc != 0x506F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506F48u; }
        if (ctx->pc != 0x506F48u) { return; }
    }
    ctx->pc = 0x506F48u;
label_506f48:
    // 0x506f48: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x506f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_506f4c:
    // 0x506f4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x506f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_506f50:
    // 0x506f50: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_506f54:
    if (ctx->pc == 0x506F54u) {
        ctx->pc = 0x506F54u;
            // 0x506f54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x506F58u;
        goto label_506f58;
    }
    ctx->pc = 0x506F50u;
    {
        const bool branch_taken_0x506f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x506F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506F50u;
            // 0x506f54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506f50) {
            ctx->pc = 0x506FA0u;
            goto label_506fa0;
        }
    }
    ctx->pc = 0x506F58u;
label_506f58:
    // 0x506f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x506f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_506f5c:
    // 0x506f5c: 0xc088ef4  jal         func_223BD0
label_506f60:
    if (ctx->pc == 0x506F60u) {
        ctx->pc = 0x506F60u;
            // 0x506f60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x506F64u;
        goto label_506f64;
    }
    ctx->pc = 0x506F5Cu;
    SET_GPR_U32(ctx, 31, 0x506F64u);
    ctx->pc = 0x506F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506F5Cu;
            // 0x506f60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506F64u; }
        if (ctx->pc != 0x506F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506F64u; }
        if (ctx->pc != 0x506F64u) { return; }
    }
    ctx->pc = 0x506F64u;
label_506f64:
    // 0x506f64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x506f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_506f68:
    // 0x506f68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x506f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_506f6c:
    // 0x506f6c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x506f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_506f70:
    // 0x506f70: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x506f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_506f74:
    // 0x506f74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x506f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_506f78:
    // 0x506f78: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x506f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_506f7c:
    // 0x506f7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x506f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_506f80:
    // 0x506f80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x506f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_506f84:
    // 0x506f84: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x506f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_506f88:
    // 0x506f88: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x506f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_506f8c:
    // 0x506f8c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x506f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_506f90:
    // 0x506f90: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x506f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_506f94:
    // 0x506f94: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x506f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_506f98:
    // 0x506f98: 0xc088b38  jal         func_222CE0
label_506f9c:
    if (ctx->pc == 0x506F9Cu) {
        ctx->pc = 0x506F9Cu;
            // 0x506f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x506FA0u;
        goto label_506fa0;
    }
    ctx->pc = 0x506F98u;
    SET_GPR_U32(ctx, 31, 0x506FA0u);
    ctx->pc = 0x506F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506F98u;
            // 0x506f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506FA0u; }
        if (ctx->pc != 0x506FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506FA0u; }
        if (ctx->pc != 0x506FA0u) { return; }
    }
    ctx->pc = 0x506FA0u;
label_506fa0:
    // 0x506fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x506fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_506fa4:
    // 0x506fa4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x506fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_506fa8:
    // 0x506fa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x506fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506fac:
    // 0x506fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x506facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_506fb0:
    // 0x506fb0: 0xc08914c  jal         func_224530
label_506fb4:
    if (ctx->pc == 0x506FB4u) {
        ctx->pc = 0x506FB4u;
            // 0x506fb4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x506FB8u;
        goto label_506fb8;
    }
    ctx->pc = 0x506FB0u;
    SET_GPR_U32(ctx, 31, 0x506FB8u);
    ctx->pc = 0x506FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506FB0u;
            // 0x506fb4: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506FB8u; }
        if (ctx->pc != 0x506FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506FB8u; }
        if (ctx->pc != 0x506FB8u) { return; }
    }
    ctx->pc = 0x506FB8u;
label_506fb8:
    // 0x506fb8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x506fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506fbc:
    // 0x506fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x506fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_506fc0:
    // 0x506fc0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x506fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506fc4:
    // 0x506fc4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x506fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_506fc8:
    // 0x506fc8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x506fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506fcc:
    // 0x506fcc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x506fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_506fd0:
    // 0x506fd0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x506fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_506fd4:
    // 0x506fd4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x506fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_506fd8:
    // 0x506fd8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x506fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_506fdc:
    // 0x506fdc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x506fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_506fe0:
    // 0x506fe0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x506fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_506fe4:
    // 0x506fe4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x506fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_506fe8:
    // 0x506fe8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x506fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_506fec:
    // 0x506fec: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x506fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_506ff0:
    // 0x506ff0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x506ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_506ff4:
    // 0x506ff4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x506ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_506ff8:
    // 0x506ff8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x506ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_506ffc:
    // 0x506ffc: 0xc0892b0  jal         func_224AC0
label_507000:
    if (ctx->pc == 0x507000u) {
        ctx->pc = 0x507000u;
            // 0x507000: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x507004u;
        goto label_507004;
    }
    ctx->pc = 0x506FFCu;
    SET_GPR_U32(ctx, 31, 0x507004u);
    ctx->pc = 0x507000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506FFCu;
            // 0x507000: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507004u; }
        if (ctx->pc != 0x507004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507004u; }
        if (ctx->pc != 0x507004u) { return; }
    }
    ctx->pc = 0x507004u;
label_507004:
    // 0x507004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x507004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507008:
    // 0x507008: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x507008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_50700c:
    // 0x50700c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x50700cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_507010:
    // 0x507010: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x507010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_507014:
    // 0x507014: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x507014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_507018:
    // 0x507018: 0xc0891d8  jal         func_224760
label_50701c:
    if (ctx->pc == 0x50701Cu) {
        ctx->pc = 0x50701Cu;
            // 0x50701c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x507020u;
        goto label_507020;
    }
    ctx->pc = 0x507018u;
    SET_GPR_U32(ctx, 31, 0x507020u);
    ctx->pc = 0x50701Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507018u;
            // 0x50701c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507020u; }
        if (ctx->pc != 0x507020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507020u; }
        if (ctx->pc != 0x507020u) { return; }
    }
    ctx->pc = 0x507020u;
label_507020:
    // 0x507020: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x507020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_507024:
    // 0x507024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x507024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507028:
    // 0x507028: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x507028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50702c:
    // 0x50702c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_507030:
    // 0x507030: 0xc08c164  jal         func_230590
label_507034:
    if (ctx->pc == 0x507034u) {
        ctx->pc = 0x507034u;
            // 0x507034: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x507038u;
        goto label_507038;
    }
    ctx->pc = 0x507030u;
    SET_GPR_U32(ctx, 31, 0x507038u);
    ctx->pc = 0x507034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507030u;
            // 0x507034: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507038u; }
        if (ctx->pc != 0x507038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507038u; }
        if (ctx->pc != 0x507038u) { return; }
    }
    ctx->pc = 0x507038u;
label_507038:
    // 0x507038: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x507038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_50703c:
    // 0x50703c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_507040:
    // 0x507040: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x507040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_507044:
    // 0x507044: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x507044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_507048:
    // 0x507048: 0xc0a7a88  jal         func_29EA20
label_50704c:
    if (ctx->pc == 0x50704Cu) {
        ctx->pc = 0x50704Cu;
            // 0x50704c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x507050u;
        goto label_507050;
    }
    ctx->pc = 0x507048u;
    SET_GPR_U32(ctx, 31, 0x507050u);
    ctx->pc = 0x50704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507048u;
            // 0x50704c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507050u; }
        if (ctx->pc != 0x507050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507050u; }
        if (ctx->pc != 0x507050u) { return; }
    }
    ctx->pc = 0x507050u;
label_507050:
    // 0x507050: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x507050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_507054:
    // 0x507054: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x507054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_507058:
    // 0x507058: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_50705c:
    if (ctx->pc == 0x50705Cu) {
        ctx->pc = 0x50705Cu;
            // 0x50705c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x507060u;
        goto label_507060;
    }
    ctx->pc = 0x507058u;
    {
        const bool branch_taken_0x507058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x50705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507058u;
            // 0x50705c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507058) {
            ctx->pc = 0x50707Cu;
            goto label_50707c;
        }
    }
    ctx->pc = 0x507060u;
label_507060:
    // 0x507060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x507060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_507064:
    // 0x507064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x507064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507068:
    // 0x507068: 0xc0869d0  jal         func_21A740
label_50706c:
    if (ctx->pc == 0x50706Cu) {
        ctx->pc = 0x50706Cu;
            // 0x50706c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507070u;
        goto label_507070;
    }
    ctx->pc = 0x507068u;
    SET_GPR_U32(ctx, 31, 0x507070u);
    ctx->pc = 0x50706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507068u;
            // 0x50706c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507070u; }
        if (ctx->pc != 0x507070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507070u; }
        if (ctx->pc != 0x507070u) { return; }
    }
    ctx->pc = 0x507070u;
label_507070:
    // 0x507070: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x507070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_507074:
    // 0x507074: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x507074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_507078:
    // 0x507078: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x507078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_50707c:
    // 0x50707c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x50707cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_507080:
    // 0x507080: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x507080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_507084:
    // 0x507084: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x507084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_507088:
    // 0x507088: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x507088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50708c:
    // 0x50708c: 0xc08c650  jal         func_231940
label_507090:
    if (ctx->pc == 0x507090u) {
        ctx->pc = 0x507090u;
            // 0x507090: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507094u;
        goto label_507094;
    }
    ctx->pc = 0x50708Cu;
    SET_GPR_U32(ctx, 31, 0x507094u);
    ctx->pc = 0x507090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50708Cu;
            // 0x507090: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507094u; }
        if (ctx->pc != 0x507094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507094u; }
        if (ctx->pc != 0x507094u) { return; }
    }
    ctx->pc = 0x507094u;
label_507094:
    // 0x507094: 0xc040180  jal         func_100600
label_507098:
    if (ctx->pc == 0x507098u) {
        ctx->pc = 0x507098u;
            // 0x507098: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x50709Cu;
        goto label_50709c;
    }
    ctx->pc = 0x507094u;
    SET_GPR_U32(ctx, 31, 0x50709Cu);
    ctx->pc = 0x507098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507094u;
            // 0x507098: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50709Cu; }
        if (ctx->pc != 0x50709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50709Cu; }
        if (ctx->pc != 0x50709Cu) { return; }
    }
    ctx->pc = 0x50709Cu;
label_50709c:
    // 0x50709c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_5070a0:
    if (ctx->pc == 0x5070A0u) {
        ctx->pc = 0x5070A0u;
            // 0x5070a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5070A4u;
        goto label_5070a4;
    }
    ctx->pc = 0x50709Cu;
    {
        const bool branch_taken_0x50709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5070A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50709Cu;
            // 0x5070a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50709c) {
            ctx->pc = 0x50710Cu;
            goto label_50710c;
        }
    }
    ctx->pc = 0x5070A4u;
label_5070a4:
    // 0x5070a4: 0x8e270050  lw          $a3, 0x50($s1)
    ctx->pc = 0x5070a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_5070a8:
    // 0x5070a8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x5070a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_5070ac:
    // 0x5070ac: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x5070acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_5070b0:
    // 0x5070b0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5070b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5070b4:
    // 0x5070b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5070b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5070b8:
    // 0x5070b8: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x5070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_5070bc:
    // 0x5070bc: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x5070bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_5070c0:
    // 0x5070c0: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x5070c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_5070c4:
    // 0x5070c4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x5070c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_5070c8:
    // 0x5070c8: 0x24a5b270  addiu       $a1, $a1, -0x4D90
    ctx->pc = 0x5070c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947440));
label_5070cc:
    // 0x5070cc: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x5070ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_5070d0:
    // 0x5070d0: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x5070d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_5070d4:
    // 0x5070d4: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x5070d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_5070d8:
    // 0x5070d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x5070d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_5070dc:
    // 0x5070dc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x5070dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_5070e0:
    // 0x5070e0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x5070e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_5070e4:
    // 0x5070e4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x5070e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_5070e8:
    // 0x5070e8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x5070e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_5070ec:
    // 0x5070ec: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x5070ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_5070f0:
    // 0x5070f0: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x5070f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_5070f4:
    // 0x5070f4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x5070f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_5070f8:
    // 0x5070f8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x5070f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_5070fc:
    // 0x5070fc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x5070fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_507100:
    // 0x507100: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x507100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_507104:
    // 0x507104: 0xc04c968  jal         func_1325A0
label_507108:
    if (ctx->pc == 0x507108u) {
        ctx->pc = 0x507108u;
            // 0x507108: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x50710Cu;
        goto label_50710c;
    }
    ctx->pc = 0x507104u;
    SET_GPR_U32(ctx, 31, 0x50710Cu);
    ctx->pc = 0x507108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507104u;
            // 0x507108: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50710Cu; }
        if (ctx->pc != 0x50710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50710Cu; }
        if (ctx->pc != 0x50710Cu) { return; }
    }
    ctx->pc = 0x50710Cu;
label_50710c:
    // 0x50710c: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x50710cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
label_507110:
    // 0x507110: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x507110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_507114:
    // 0x507114: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x507114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_507118:
    // 0x507118: 0x2409fffb  addiu       $t1, $zero, -0x5
    ctx->pc = 0x507118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_50711c:
    // 0x50711c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x50711cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_507120:
    // 0x507120: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x507120u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
label_507124:
    // 0x507124: 0x3c0644e1  lui         $a2, 0x44E1
    ctx->pc = 0x507124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17633 << 16));
label_507128:
    // 0x507128: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x507128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50712c:
    // 0x50712c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x50712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_507130:
    // 0x507130: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x507130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_507134:
    // 0x507134: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x507134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_507138:
    // 0x507138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x507138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50713c:
    // 0x50713c: 0x8e2a00b0  lw          $t2, 0xB0($s1)
    ctx->pc = 0x50713cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_507140:
    // 0x507140: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x507140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_507144:
    // 0x507144: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x507144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_507148:
    // 0x507148: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x507148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_50714c:
    // 0x50714c: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x50714cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_507150:
    // 0x507150: 0xae28008c  sw          $t0, 0x8C($s1)
    ctx->pc = 0x507150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 8));
label_507154:
    // 0x507154: 0xae270070  sw          $a3, 0x70($s1)
    ctx->pc = 0x507154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 7));
label_507158:
    // 0x507158: 0xae270078  sw          $a3, 0x78($s1)
    ctx->pc = 0x507158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 7));
label_50715c:
    // 0x50715c: 0xae260080  sw          $a2, 0x80($s1)
    ctx->pc = 0x50715cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 6));
label_507160:
    // 0x507160: 0xa2250068  sb          $a1, 0x68($s1)
    ctx->pc = 0x507160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 5));
label_507164:
    // 0x507164: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x507164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_507168:
    // 0x507168: 0xa220006a  sb          $zero, 0x6A($s1)
    ctx->pc = 0x507168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 0));
label_50716c:
    // 0x50716c: 0xa223006b  sb          $v1, 0x6B($s1)
    ctx->pc = 0x50716cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 3));
label_507170:
    // 0x507170: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x507170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_507174:
    // 0x507174: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x507174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_507178:
    // 0x507178: 0xa2220066  sb          $v0, 0x66($s1)
    ctx->pc = 0x507178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 2));
label_50717c:
    // 0x50717c: 0xc040180  jal         func_100600
label_507180:
    if (ctx->pc == 0x507180u) {
        ctx->pc = 0x507180u;
            // 0x507180: 0xa2230067  sb          $v1, 0x67($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x507184u;
        goto label_507184;
    }
    ctx->pc = 0x50717Cu;
    SET_GPR_U32(ctx, 31, 0x507184u);
    ctx->pc = 0x507180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50717Cu;
            // 0x507180: 0xa2230067  sb          $v1, 0x67($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507184u; }
        if (ctx->pc != 0x507184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507184u; }
        if (ctx->pc != 0x507184u) { return; }
    }
    ctx->pc = 0x507184u;
label_507184:
    // 0x507184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x507184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_507188:
    // 0x507188: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_50718c:
    if (ctx->pc == 0x50718Cu) {
        ctx->pc = 0x50718Cu;
            // 0x50718c: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->pc = 0x507190u;
        goto label_507190;
    }
    ctx->pc = 0x507188u;
    {
        const bool branch_taken_0x507188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x507188) {
            ctx->pc = 0x50718Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507188u;
            // 0x50718c: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5071C8u;
            goto label_5071c8;
        }
    }
    ctx->pc = 0x507190u;
label_507190:
    // 0x507190: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x507190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_507194:
    // 0x507194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x507194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_507198:
    // 0x507198: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x507198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_50719c:
    // 0x50719c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x50719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_5071a0:
    // 0x5071a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5071a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5071a4:
    // 0x5071a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x5071a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_5071a8:
    // 0x5071a8: 0xc040138  jal         func_1004E0
label_5071ac:
    if (ctx->pc == 0x5071ACu) {
        ctx->pc = 0x5071ACu;
            // 0x5071ac: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x5071B0u;
        goto label_5071b0;
    }
    ctx->pc = 0x5071A8u;
    SET_GPR_U32(ctx, 31, 0x5071B0u);
    ctx->pc = 0x5071ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5071A8u;
            // 0x5071ac: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5071B0u; }
        if (ctx->pc != 0x5071B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5071B0u; }
        if (ctx->pc != 0x5071B0u) { return; }
    }
    ctx->pc = 0x5071B0u;
label_5071b0:
    // 0x5071b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x5071b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_5071b4:
    // 0x5071b4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x5071b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_5071b8:
    // 0x5071b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5071b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5071bc:
    // 0x5071bc: 0xc04a576  jal         func_1295D8
label_5071c0:
    if (ctx->pc == 0x5071C0u) {
        ctx->pc = 0x5071C0u;
            // 0x5071c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5071C4u;
        goto label_5071c4;
    }
    ctx->pc = 0x5071BCu;
    SET_GPR_U32(ctx, 31, 0x5071C4u);
    ctx->pc = 0x5071C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5071BCu;
            // 0x5071c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5071C4u; }
        if (ctx->pc != 0x5071C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5071C4u; }
        if (ctx->pc != 0x5071C4u) { return; }
    }
    ctx->pc = 0x5071C4u;
label_5071c4:
    // 0x5071c4: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x5071c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_5071c8:
    // 0x5071c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5071c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5071cc:
    // 0x5071cc: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x5071ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_5071d0:
    // 0x5071d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5071d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5071d4:
    // 0x5071d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5071d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5071d8:
    // 0x5071d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5071d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5071dc:
    // 0x5071dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5071dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5071e0:
    // 0x5071e0: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x5071e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
label_5071e4:
    // 0x5071e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5071e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5071e8:
    // 0x5071e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5071e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5071ec:
    // 0x5071ec: 0xc122cd8  jal         func_48B360
label_5071f0:
    if (ctx->pc == 0x5071F0u) {
        ctx->pc = 0x5071F0u;
            // 0x5071f0: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->pc = 0x5071F4u;
        goto label_5071f4;
    }
    ctx->pc = 0x5071ECu;
    SET_GPR_U32(ctx, 31, 0x5071F4u);
    ctx->pc = 0x5071F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5071ECu;
            // 0x5071f0: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5071F4u; }
        if (ctx->pc != 0x5071F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5071F4u; }
        if (ctx->pc != 0x5071F4u) { return; }
    }
    ctx->pc = 0x5071F4u;
label_5071f4:
    // 0x5071f4: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x5071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_5071f8:
    // 0x5071f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5071f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5071fc:
    // 0x5071fc: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x5071fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_507200:
    // 0x507200: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x507200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_507204:
    // 0x507204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x507204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_507208:
    // 0x507208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x507208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50720c:
    // 0x50720c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50720cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_507210:
    // 0x507210: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x507210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_507214:
    // 0x507214: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x507214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_507218:
    // 0x507218: 0xc122cd8  jal         func_48B360
label_50721c:
    if (ctx->pc == 0x50721Cu) {
        ctx->pc = 0x50721Cu;
            // 0x50721c: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->pc = 0x507220u;
        goto label_507220;
    }
    ctx->pc = 0x507218u;
    SET_GPR_U32(ctx, 31, 0x507220u);
    ctx->pc = 0x50721Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507218u;
            // 0x50721c: 0x344611ae  ori         $a2, $v0, 0x11AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507220u; }
        if (ctx->pc != 0x507220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507220u; }
        if (ctx->pc != 0x507220u) { return; }
    }
    ctx->pc = 0x507220u;
label_507220:
    // 0x507220: 0xc040180  jal         func_100600
label_507224:
    if (ctx->pc == 0x507224u) {
        ctx->pc = 0x507224u;
            // 0x507224: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x507228u;
        goto label_507228;
    }
    ctx->pc = 0x507220u;
    SET_GPR_U32(ctx, 31, 0x507228u);
    ctx->pc = 0x507224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507220u;
            // 0x507224: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507228u; }
        if (ctx->pc != 0x507228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507228u; }
        if (ctx->pc != 0x507228u) { return; }
    }
    ctx->pc = 0x507228u;
label_507228:
    // 0x507228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x507228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50722c:
    // 0x50722c: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x50722cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
label_507230:
    // 0x507230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x507230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507234:
    // 0x507234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x507234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_507238:
    // 0x507238: 0xc04a576  jal         func_1295D8
label_50723c:
    if (ctx->pc == 0x50723Cu) {
        ctx->pc = 0x50723Cu;
            // 0x50723c: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x507240u;
        goto label_507240;
    }
    ctx->pc = 0x507238u;
    SET_GPR_U32(ctx, 31, 0x507240u);
    ctx->pc = 0x50723Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507238u;
            // 0x50723c: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507240u; }
        if (ctx->pc != 0x507240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507240u; }
        if (ctx->pc != 0x507240u) { return; }
    }
    ctx->pc = 0x507240u;
label_507240:
    // 0x507240: 0x24034679  addiu       $v1, $zero, 0x4679
    ctx->pc = 0x507240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18041));
label_507244:
    // 0x507244: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x507244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_507248:
    // 0x507248: 0x8e2300ec  lw          $v1, 0xEC($s1)
    ctx->pc = 0x507248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_50724c:
    // 0x50724c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x50724cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_507250:
    // 0x507250: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x507250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_507254:
    // 0x507254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x507254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_507258:
    // 0x507258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x507258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50725c:
    // 0x50725c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50725cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_507260:
    // 0x507260: 0x3e00008  jr          $ra
label_507264:
    if (ctx->pc == 0x507264u) {
        ctx->pc = 0x507264u;
            // 0x507264: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x507268u;
        goto label_507268;
    }
    ctx->pc = 0x507260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507260u;
            // 0x507264: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x507268u;
label_507268:
    // 0x507268: 0x0  nop
    ctx->pc = 0x507268u;
    // NOP
label_50726c:
    // 0x50726c: 0x0  nop
    ctx->pc = 0x50726cu;
    // NOP
label_507270:
    // 0x507270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x507270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_507274:
    // 0x507274: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x507274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_507278:
    // 0x507278: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x507278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_50727c:
    // 0x50727c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_507280:
    // 0x507280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_507284:
    // 0x507284: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x507284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_507288:
    // 0x507288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50728c:
    // 0x50728c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x50728cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_507290:
    // 0x507290: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x507290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_507294:
    // 0x507294: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x507294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_507298:
    // 0x507298: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_50729c:
    if (ctx->pc == 0x50729Cu) {
        ctx->pc = 0x50729Cu;
            // 0x50729c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5072A0u;
        goto label_5072a0;
    }
    ctx->pc = 0x507298u;
    {
        const bool branch_taken_0x507298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x507298) {
            ctx->pc = 0x50729Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507298u;
            // 0x50729c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5072BCu;
            goto label_5072bc;
        }
    }
    ctx->pc = 0x5072A0u;
label_5072a0:
    // 0x5072a0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5072a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5072a4:
    // 0x5072a4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x5072a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5072a8:
    // 0x5072a8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5072a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5072ac:
    // 0x5072ac: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x5072acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
label_5072b0:
    // 0x5072b0: 0x50640065  beql        $v1, $a0, . + 4 + (0x65 << 2)
label_5072b4:
    if (ctx->pc == 0x5072B4u) {
        ctx->pc = 0x5072B4u;
            // 0x5072b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x5072B8u;
        goto label_5072b8;
    }
    ctx->pc = 0x5072B0u;
    {
        const bool branch_taken_0x5072b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x5072b0) {
            ctx->pc = 0x5072B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5072B0u;
            // 0x5072b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507448u;
            goto label_507448;
        }
    }
    ctx->pc = 0x5072B8u;
label_5072b8:
    // 0x5072b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5072b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5072bc:
    // 0x5072bc: 0xc0e39b4  jal         func_38E6D0
label_5072c0:
    if (ctx->pc == 0x5072C0u) {
        ctx->pc = 0x5072C4u;
        goto label_5072c4;
    }
    ctx->pc = 0x5072BCu;
    SET_GPR_U32(ctx, 31, 0x5072C4u);
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5072C4u; }
        if (ctx->pc != 0x5072C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5072C4u; }
        if (ctx->pc != 0x5072C4u) { return; }
    }
    ctx->pc = 0x5072C4u;
label_5072c4:
    // 0x5072c4: 0x8e510050  lw          $s1, 0x50($s2)
    ctx->pc = 0x5072c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_5072c8:
    // 0x5072c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x5072c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_5072cc:
    // 0x5072cc: 0x8e5000e4  lw          $s0, 0xE4($s2)
    ctx->pc = 0x5072ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_5072d0:
    // 0x5072d0: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x5072d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_5072d4:
    // 0x5072d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5072d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5072d8:
    // 0x5072d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5072d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5072dc:
    // 0x5072dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5072dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5072e0:
    // 0x5072e0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x5072e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_5072e4:
    // 0x5072e4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5072e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5072e8:
    // 0x5072e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5072e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5072ec:
    // 0x5072ec: 0xc08bff0  jal         func_22FFC0
label_5072f0:
    if (ctx->pc == 0x5072F0u) {
        ctx->pc = 0x5072F0u;
            // 0x5072f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5072F4u;
        goto label_5072f4;
    }
    ctx->pc = 0x5072ECu;
    SET_GPR_U32(ctx, 31, 0x5072F4u);
    ctx->pc = 0x5072F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5072ECu;
            // 0x5072f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5072F4u; }
        if (ctx->pc != 0x5072F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5072F4u; }
        if (ctx->pc != 0x5072F4u) { return; }
    }
    ctx->pc = 0x5072F4u;
label_5072f4:
    // 0x5072f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5072f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5072f8:
    // 0x5072f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x5072f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5072fc:
    // 0x5072fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5072fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_507300:
    // 0x507300: 0xc08914c  jal         func_224530
label_507304:
    if (ctx->pc == 0x507304u) {
        ctx->pc = 0x507304u;
            // 0x507304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507308u;
        goto label_507308;
    }
    ctx->pc = 0x507300u;
    SET_GPR_U32(ctx, 31, 0x507308u);
    ctx->pc = 0x507304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507300u;
            // 0x507304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507308u; }
        if (ctx->pc != 0x507308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507308u; }
        if (ctx->pc != 0x507308u) { return; }
    }
    ctx->pc = 0x507308u;
label_507308:
    // 0x507308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x507308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50730c:
    // 0x50730c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x50730cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_507310:
    // 0x507310: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x507310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_507314:
    // 0x507314: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x507314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_507318:
    // 0x507318: 0xc088b74  jal         func_222DD0
label_50731c:
    if (ctx->pc == 0x50731Cu) {
        ctx->pc = 0x50731Cu;
            // 0x50731c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x507320u;
        goto label_507320;
    }
    ctx->pc = 0x507318u;
    SET_GPR_U32(ctx, 31, 0x507320u);
    ctx->pc = 0x50731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507318u;
            // 0x50731c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507320u; }
        if (ctx->pc != 0x507320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507320u; }
        if (ctx->pc != 0x507320u) { return; }
    }
    ctx->pc = 0x507320u;
label_507320:
    // 0x507320: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x507320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_507324:
    // 0x507324: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x507324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_507328:
    // 0x507328: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x507328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_50732c:
    // 0x50732c: 0x320f809  jalr        $t9
label_507330:
    if (ctx->pc == 0x507330u) {
        ctx->pc = 0x507330u;
            // 0x507330: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x507334u;
        goto label_507334;
    }
    ctx->pc = 0x50732Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507334u);
        ctx->pc = 0x507330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50732Cu;
            // 0x507330: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x507334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507334u; }
            if (ctx->pc != 0x507334u) { return; }
        }
        }
    }
    ctx->pc = 0x507334u;
label_507334:
    // 0x507334: 0xc088b74  jal         func_222DD0
label_507338:
    if (ctx->pc == 0x507338u) {
        ctx->pc = 0x507338u;
            // 0x507338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50733Cu;
        goto label_50733c;
    }
    ctx->pc = 0x507334u;
    SET_GPR_U32(ctx, 31, 0x50733Cu);
    ctx->pc = 0x507338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507334u;
            // 0x507338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50733Cu; }
        if (ctx->pc != 0x50733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50733Cu; }
        if (ctx->pc != 0x50733Cu) { return; }
    }
    ctx->pc = 0x50733Cu;
label_50733c:
    // 0x50733c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x50733cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_507340:
    // 0x507340: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x507340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_507344:
    // 0x507344: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x507344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_507348:
    // 0x507348: 0x320f809  jalr        $t9
label_50734c:
    if (ctx->pc == 0x50734Cu) {
        ctx->pc = 0x50734Cu;
            // 0x50734c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x507350u;
        goto label_507350;
    }
    ctx->pc = 0x507348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507350u);
        ctx->pc = 0x50734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507348u;
            // 0x50734c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x507350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507350u; }
            if (ctx->pc != 0x507350u) { return; }
        }
        }
    }
    ctx->pc = 0x507350u;
label_507350:
    // 0x507350: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x507350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_507354:
    // 0x507354: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x507354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
label_507358:
    // 0x507358: 0xc440b0e8  lwc1        $f0, -0x4F18($v0)
    ctx->pc = 0x507358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50735c:
    // 0x50735c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50735cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_507360:
    // 0x507360: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x507360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_507364:
    // 0x507364: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x507364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_507368:
    // 0x507368: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x507368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
label_50736c:
    // 0x50736c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x50736cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_507370:
    // 0x507370: 0xae260158  sw          $a2, 0x158($s1)
    ctx->pc = 0x507370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 6));
label_507374:
    // 0x507374: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x507374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_507378:
    // 0x507378: 0xae23015c  sw          $v1, 0x15C($s1)
    ctx->pc = 0x507378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 3));
label_50737c:
    // 0x50737c: 0xae230160  sw          $v1, 0x160($s1)
    ctx->pc = 0x50737cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
label_507380:
    // 0x507380: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x507380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_507384:
    // 0x507384: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x507384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_507388:
    // 0x507388: 0xc04f278  jal         func_13C9E0
label_50738c:
    if (ctx->pc == 0x50738Cu) {
        ctx->pc = 0x50738Cu;
            // 0x50738c: 0xae220214  sw          $v0, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
        ctx->pc = 0x507390u;
        goto label_507390;
    }
    ctx->pc = 0x507388u;
    SET_GPR_U32(ctx, 31, 0x507390u);
    ctx->pc = 0x50738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507388u;
            // 0x50738c: 0xae220214  sw          $v0, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507390u; }
        if (ctx->pc != 0x507390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507390u; }
        if (ctx->pc != 0x507390u) { return; }
    }
    ctx->pc = 0x507390u;
label_507390:
    // 0x507390: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x507390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_507394:
    // 0x507394: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x507394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_507398:
    // 0x507398: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x507398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50739c:
    // 0x50739c: 0xc04cca0  jal         func_133280
label_5073a0:
    if (ctx->pc == 0x5073A0u) {
        ctx->pc = 0x5073A0u;
            // 0x5073a0: 0x24c6b240  addiu       $a2, $a2, -0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947392));
        ctx->pc = 0x5073A4u;
        goto label_5073a4;
    }
    ctx->pc = 0x50739Cu;
    SET_GPR_U32(ctx, 31, 0x5073A4u);
    ctx->pc = 0x5073A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50739Cu;
            // 0x5073a0: 0x24c6b240  addiu       $a2, $a2, -0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5073A4u; }
        if (ctx->pc != 0x5073A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5073A4u; }
        if (ctx->pc != 0x5073A4u) { return; }
    }
    ctx->pc = 0x5073A4u;
label_5073a4:
    // 0x5073a4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x5073a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_5073a8:
    // 0x5073a8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x5073a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_5073ac:
    // 0x5073ac: 0xc04cbe0  jal         func_132F80
label_5073b0:
    if (ctx->pc == 0x5073B0u) {
        ctx->pc = 0x5073B0u;
            // 0x5073b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5073B4u;
        goto label_5073b4;
    }
    ctx->pc = 0x5073ACu;
    SET_GPR_U32(ctx, 31, 0x5073B4u);
    ctx->pc = 0x5073B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5073ACu;
            // 0x5073b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5073B4u; }
        if (ctx->pc != 0x5073B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5073B4u; }
        if (ctx->pc != 0x5073B4u) { return; }
    }
    ctx->pc = 0x5073B4u;
label_5073b4:
    // 0x5073b4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x5073b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_5073b8:
    // 0x5073b8: 0xc04c720  jal         func_131C80
label_5073bc:
    if (ctx->pc == 0x5073BCu) {
        ctx->pc = 0x5073BCu;
            // 0x5073bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x5073C0u;
        goto label_5073c0;
    }
    ctx->pc = 0x5073B8u;
    SET_GPR_U32(ctx, 31, 0x5073C0u);
    ctx->pc = 0x5073BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5073B8u;
            // 0x5073bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5073C0u; }
        if (ctx->pc != 0x5073C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5073C0u; }
        if (ctx->pc != 0x5073C0u) { return; }
    }
    ctx->pc = 0x5073C0u;
label_5073c0:
    // 0x5073c0: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x5073c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_5073c4:
    // 0x5073c4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x5073c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5073c8:
    // 0x5073c8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x5073c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5073cc:
    // 0x5073cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x5073ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5073d0:
    // 0x5073d0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x5073d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5073d4:
    // 0x5073d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x5073d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_5073d8:
    // 0x5073d8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x5073d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_5073dc:
    // 0x5073dc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x5073dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_5073e0:
    // 0x5073e0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x5073e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_5073e4:
    // 0x5073e4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x5073e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_5073e8:
    // 0x5073e8: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x5073e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5073ec:
    // 0x5073ec: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x5073ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5073f0:
    // 0x5073f0: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x5073f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5073f4:
    // 0x5073f4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x5073f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5073f8:
    // 0x5073f8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x5073f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_5073fc:
    // 0x5073fc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x5073fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_507400:
    // 0x507400: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x507400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_507404:
    // 0x507404: 0xc0892b0  jal         func_224AC0
label_507408:
    if (ctx->pc == 0x507408u) {
        ctx->pc = 0x507408u;
            // 0x507408: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x50740Cu;
        goto label_50740c;
    }
    ctx->pc = 0x507404u;
    SET_GPR_U32(ctx, 31, 0x50740Cu);
    ctx->pc = 0x507408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507404u;
            // 0x507408: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50740Cu; }
        if (ctx->pc != 0x50740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50740Cu; }
        if (ctx->pc != 0x50740Cu) { return; }
    }
    ctx->pc = 0x50740Cu;
label_50740c:
    // 0x50740c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_507410:
    // 0x507410: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x507410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_507414:
    // 0x507414: 0xa24300cc  sb          $v1, 0xCC($s2)
    ctx->pc = 0x507414u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 204), (uint8_t)GPR_U32(ctx, 3));
label_507418:
    // 0x507418: 0xae4400c4  sw          $a0, 0xC4($s2)
    ctx->pc = 0x507418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 4));
label_50741c:
    // 0x50741c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50741cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_507420:
    // 0x507420: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x507420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_507424:
    // 0x507424: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x507424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_507428:
    // 0x507428: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x507428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_50742c:
    // 0x50742c: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x50742cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_507430:
    // 0x507430: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x507430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_507434:
    // 0x507434: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x507434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_507438:
    // 0x507438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x507438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50743c:
    // 0x50743c: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x50743cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
label_507440:
    // 0x507440: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x507440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_507444:
    // 0x507444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x507444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_507448:
    // 0x507448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x507448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50744c:
    // 0x50744c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50744cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_507450:
    // 0x507450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_507454:
    // 0x507454: 0x3e00008  jr          $ra
label_507458:
    if (ctx->pc == 0x507458u) {
        ctx->pc = 0x507458u;
            // 0x507458: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50745Cu;
        goto label_50745c;
    }
    ctx->pc = 0x507454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507454u;
            // 0x507458: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50745Cu;
label_50745c:
    // 0x50745c: 0x0  nop
    ctx->pc = 0x50745cu;
    // NOP
label_507460:
    // 0x507460: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x507460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_507464:
    // 0x507464: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x507464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_507468:
    // 0x507468: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x507468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_50746c:
    // 0x50746c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x50746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_507470:
    // 0x507470: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x507470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_507474:
    // 0x507474: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x507474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_507478:
    // 0x507478: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x507478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_50747c:
    // 0x50747c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_507480:
    // 0x507480: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x507480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_507484:
    // 0x507484: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x507484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_507488:
    // 0x507488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50748c:
    // 0x50748c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_507490:
    // 0x507490: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x507490u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_507494:
    // 0x507494: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_507498:
    if (ctx->pc == 0x507498u) {
        ctx->pc = 0x507498u;
            // 0x507498: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50749Cu;
        goto label_50749c;
    }
    ctx->pc = 0x507494u;
    {
        const bool branch_taken_0x507494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x507498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507494u;
            // 0x507498: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507494) {
            ctx->pc = 0x5074E4u;
            goto label_5074e4;
        }
    }
    ctx->pc = 0x50749Cu;
label_50749c:
    // 0x50749c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5074a0:
    // 0x5074a0: 0x50a30081  beql        $a1, $v1, . + 4 + (0x81 << 2)
label_5074a4:
    if (ctx->pc == 0x5074A4u) {
        ctx->pc = 0x5074A4u;
            // 0x5074a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x5074A8u;
        goto label_5074a8;
    }
    ctx->pc = 0x5074A0u;
    {
        const bool branch_taken_0x5074a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5074a0) {
            ctx->pc = 0x5074A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5074A0u;
            // 0x5074a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5076A8u;
            goto label_5076a8;
        }
    }
    ctx->pc = 0x5074A8u;
label_5074a8:
    // 0x5074a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5074a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5074ac:
    // 0x5074ac: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_5074b0:
    if (ctx->pc == 0x5074B0u) {
        ctx->pc = 0x5074B4u;
        goto label_5074b4;
    }
    ctx->pc = 0x5074ACu;
    {
        const bool branch_taken_0x5074ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5074ac) {
            ctx->pc = 0x5074BCu;
            goto label_5074bc;
        }
    }
    ctx->pc = 0x5074B4u;
label_5074b4:
    // 0x5074b4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_5074b8:
    if (ctx->pc == 0x5074B8u) {
        ctx->pc = 0x5074BCu;
        goto label_5074bc;
    }
    ctx->pc = 0x5074B4u;
    {
        const bool branch_taken_0x5074b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5074b4) {
            ctx->pc = 0x5076A4u;
            goto label_5076a4;
        }
    }
    ctx->pc = 0x5074BCu;
label_5074bc:
    // 0x5074bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5074bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5074c0:
    // 0x5074c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5074c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5074c4:
    // 0x5074c4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5074c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5074c8:
    // 0x5074c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5074c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5074cc:
    // 0x5074cc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x5074ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_5074d0:
    // 0x5074d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5074d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_5074d4:
    // 0x5074d4: 0x320f809  jalr        $t9
label_5074d8:
    if (ctx->pc == 0x5074D8u) {
        ctx->pc = 0x5074D8u;
            // 0x5074d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5074DCu;
        goto label_5074dc;
    }
    ctx->pc = 0x5074D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5074DCu);
        ctx->pc = 0x5074D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5074D4u;
            // 0x5074d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5074DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5074DCu; }
            if (ctx->pc != 0x5074DCu) { return; }
        }
        }
    }
    ctx->pc = 0x5074DCu;
label_5074dc:
    // 0x5074dc: 0x10000071  b           . + 4 + (0x71 << 2)
label_5074e0:
    if (ctx->pc == 0x5074E0u) {
        ctx->pc = 0x5074E4u;
        goto label_5074e4;
    }
    ctx->pc = 0x5074DCu;
    {
        const bool branch_taken_0x5074dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5074dc) {
            ctx->pc = 0x5076A4u;
            goto label_5076a4;
        }
    }
    ctx->pc = 0x5074E4u;
label_5074e4:
    // 0x5074e4: 0x8e320070  lw          $s2, 0x70($s1)
    ctx->pc = 0x5074e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_5074e8:
    // 0x5074e8: 0x1240006e  beqz        $s2, . + 4 + (0x6E << 2)
label_5074ec:
    if (ctx->pc == 0x5074ECu) {
        ctx->pc = 0x5074F0u;
        goto label_5074f0;
    }
    ctx->pc = 0x5074E8u;
    {
        const bool branch_taken_0x5074e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x5074e8) {
            ctx->pc = 0x5076A4u;
            goto label_5076a4;
        }
    }
    ctx->pc = 0x5074F0u;
label_5074f0:
    // 0x5074f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5074f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5074f4:
    // 0x5074f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5074f8:
    // 0x5074f8: 0x8c46d130  lw          $a2, -0x2ED0($v0)
    ctx->pc = 0x5074f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5074fc:
    // 0x5074fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x5074fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_507500:
    // 0x507500: 0x8c70e378  lw          $s0, -0x1C88($v1)
    ctx->pc = 0x507500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_507504:
    // 0x507504: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x507504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_507508:
    // 0x507508: 0x8e3e0088  lw          $fp, 0x88($s1)
    ctx->pc = 0x507508u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_50750c:
    // 0x50750c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x50750cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_507510:
    // 0x507510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x507510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_507514:
    // 0x507514: 0x8cd40130  lw          $s4, 0x130($a2)
    ctx->pc = 0x507514u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_507518:
    // 0x507518: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x507518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_50751c:
    // 0x50751c: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x50751cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_507520:
    // 0x507520: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x507520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_507524:
    // 0x507524: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x507524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_507528:
    // 0x507528: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x507528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50752c:
    // 0x50752c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x50752cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_507530:
    // 0x507530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x507530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_507534:
    // 0x507534: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x507534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_507538:
    // 0x507538: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x507538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_50753c:
    // 0x50753c: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x50753cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_507540:
    // 0x507540: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x507540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_507544:
    // 0x507544: 0x24b60010  addiu       $s6, $a1, 0x10
    ctx->pc = 0x507544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_507548:
    // 0x507548: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x507548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_50754c:
    // 0x50754c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x50754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_507550:
    // 0x507550: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x507550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_507554:
    // 0x507554: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x507554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_507558:
    // 0x507558: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x507558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50755c:
    // 0x50755c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x50755cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_507560:
    // 0x507560: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x507560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_507564:
    // 0x507564: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x507564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_507568:
    // 0x507568: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x507568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50756c:
    // 0x50756c: 0xc142034  jal         func_5080D0
label_507570:
    if (ctx->pc == 0x507570u) {
        ctx->pc = 0x507570u;
            // 0x507570: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507574u;
        goto label_507574;
    }
    ctx->pc = 0x50756Cu;
    SET_GPR_U32(ctx, 31, 0x507574u);
    ctx->pc = 0x507570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50756Cu;
            // 0x507570: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5080D0u;
    if (runtime->hasFunction(0x5080D0u)) {
        auto targetFn = runtime->lookupFunction(0x5080D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507574u; }
        if (ctx->pc != 0x507574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005080D0_0x5080d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507574u; }
        if (ctx->pc != 0x507574u) { return; }
    }
    ctx->pc = 0x507574u;
label_507574:
    // 0x507574: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x507574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_507578:
    // 0x507578: 0x2b2182b  sltu        $v1, $s5, $s2
    ctx->pc = 0x507578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_50757c:
    // 0x50757c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_507580:
    if (ctx->pc == 0x507580u) {
        ctx->pc = 0x507580u;
            // 0x507580: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x507584u;
        goto label_507584;
    }
    ctx->pc = 0x50757Cu;
    {
        const bool branch_taken_0x50757c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x507580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50757Cu;
            // 0x507580: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50757c) {
            ctx->pc = 0x50754Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50754c;
        }
    }
    ctx->pc = 0x507584u;
label_507584:
    // 0x507584: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x507584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_507588:
    // 0x507588: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x507588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_50758c:
    // 0x50758c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_507590:
    if (ctx->pc == 0x507590u) {
        ctx->pc = 0x507594u;
        goto label_507594;
    }
    ctx->pc = 0x50758Cu;
    {
        const bool branch_taken_0x50758c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x50758c) {
            ctx->pc = 0x5075C8u;
            goto label_5075c8;
        }
    }
    ctx->pc = 0x507594u;
label_507594:
    // 0x507594: 0xc04e738  jal         func_139CE0
label_507598:
    if (ctx->pc == 0x507598u) {
        ctx->pc = 0x507598u;
            // 0x507598: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->pc = 0x50759Cu;
        goto label_50759c;
    }
    ctx->pc = 0x507594u;
    SET_GPR_U32(ctx, 31, 0x50759Cu);
    ctx->pc = 0x507598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507594u;
            // 0x507598: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50759Cu; }
        if (ctx->pc != 0x50759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50759Cu; }
        if (ctx->pc != 0x50759Cu) { return; }
    }
    ctx->pc = 0x50759Cu;
label_50759c:
    // 0x50759c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50759cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5075a0:
    // 0x5075a0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x5075a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_5075a4:
    // 0x5075a4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x5075a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_5075a8:
    // 0x5075a8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x5075a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_5075ac:
    // 0x5075ac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x5075acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_5075b0:
    // 0x5075b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5075b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5075b4:
    // 0x5075b4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x5075b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_5075b8:
    // 0x5075b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5075bc:
    // 0x5075bc: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x5075bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_5075c0:
    // 0x5075c0: 0xc055ea8  jal         func_157AA0
label_5075c4:
    if (ctx->pc == 0x5075C4u) {
        ctx->pc = 0x5075C4u;
            // 0x5075c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5075C8u;
        goto label_5075c8;
    }
    ctx->pc = 0x5075C0u;
    SET_GPR_U32(ctx, 31, 0x5075C8u);
    ctx->pc = 0x5075C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5075C0u;
            // 0x5075c4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5075C8u; }
        if (ctx->pc != 0x5075C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5075C8u; }
        if (ctx->pc != 0x5075C8u) { return; }
    }
    ctx->pc = 0x5075C8u;
label_5075c8:
    // 0x5075c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x5075c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_5075cc:
    // 0x5075cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5075ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5075d0:
    // 0x5075d0: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x5075d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_5075d4:
    // 0x5075d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5075d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5075d8:
    // 0x5075d8: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x5075d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_5075dc:
    // 0x5075dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x5075dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5075e0:
    // 0x5075e0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x5075e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_5075e4:
    // 0x5075e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5075e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5075e8:
    // 0x5075e8: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x5075e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_5075ec:
    // 0x5075ec: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x5075ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5075f0:
    // 0x5075f0: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x5075f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_5075f4:
    // 0x5075f4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_5075f8:
    if (ctx->pc == 0x5075F8u) {
        ctx->pc = 0x5075FCu;
        goto label_5075fc;
    }
    ctx->pc = 0x5075F4u;
    {
        const bool branch_taken_0x5075f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5075f4) {
            ctx->pc = 0x507648u;
            goto label_507648;
        }
    }
    ctx->pc = 0x5075FCu;
label_5075fc:
    // 0x5075fc: 0x8ca300e0  lw          $v1, 0xE0($a1)
    ctx->pc = 0x5075fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
label_507600:
    // 0x507600: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x507600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_507604:
    // 0x507604: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x507604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_507608:
    // 0x507608: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_50760c:
    if (ctx->pc == 0x50760Cu) {
        ctx->pc = 0x507610u;
        goto label_507610;
    }
    ctx->pc = 0x507608u;
    {
        const bool branch_taken_0x507608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x507608) {
            ctx->pc = 0x50761Cu;
            goto label_50761c;
        }
    }
    ctx->pc = 0x507610u;
label_507610:
    // 0x507610: 0x8ca300e4  lw          $v1, 0xE4($a1)
    ctx->pc = 0x507610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 228)));
label_507614:
    // 0x507614: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x507614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_507618:
    // 0x507618: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x507618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_50761c:
    // 0x50761c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_507620:
    if (ctx->pc == 0x507620u) {
        ctx->pc = 0x507624u;
        goto label_507624;
    }
    ctx->pc = 0x50761Cu;
    {
        const bool branch_taken_0x50761c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50761c) {
            ctx->pc = 0x507648u;
            goto label_507648;
        }
    }
    ctx->pc = 0x507624u;
label_507624:
    // 0x507624: 0x24a402b0  addiu       $a0, $a1, 0x2B0
    ctx->pc = 0x507624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
label_507628:
    // 0x507628: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x507628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_50762c:
    // 0x50762c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x50762cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_507630:
    // 0x507630: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x507630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507634:
    // 0x507634: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x507634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_507638:
    // 0x507638: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x507638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50763c:
    // 0x50763c: 0xc141984  jal         func_506610
label_507640:
    if (ctx->pc == 0x507640u) {
        ctx->pc = 0x507640u;
            // 0x507640: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507644u;
        goto label_507644;
    }
    ctx->pc = 0x50763Cu;
    SET_GPR_U32(ctx, 31, 0x507644u);
    ctx->pc = 0x507640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50763Cu;
            // 0x507640: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x506610u;
    goto label_506610;
    ctx->pc = 0x507644u;
label_507644:
    // 0x507644: 0x0  nop
    ctx->pc = 0x507644u;
    // NOP
label_507648:
    // 0x507648: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x507648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50764c:
    // 0x50764c: 0x272182b  sltu        $v1, $s3, $s2
    ctx->pc = 0x50764cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_507650:
    // 0x507650: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_507654:
    if (ctx->pc == 0x507654u) {
        ctx->pc = 0x507654u;
            // 0x507654: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x507658u;
        goto label_507658;
    }
    ctx->pc = 0x507650u;
    {
        const bool branch_taken_0x507650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x507654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507650u;
            // 0x507654: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507650) {
            ctx->pc = 0x5075E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5075e0;
        }
    }
    ctx->pc = 0x507658u;
label_507658:
    // 0x507658: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x507658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50765c:
    // 0x50765c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x50765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_507660:
    // 0x507660: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_507664:
    if (ctx->pc == 0x507664u) {
        ctx->pc = 0x507668u;
        goto label_507668;
    }
    ctx->pc = 0x507660u;
    {
        const bool branch_taken_0x507660 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x507660) {
            ctx->pc = 0x5076A4u;
            goto label_5076a4;
        }
    }
    ctx->pc = 0x507668u;
label_507668:
    // 0x507668: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x507668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_50766c:
    // 0x50766c: 0xc04e738  jal         func_139CE0
label_507670:
    if (ctx->pc == 0x507670u) {
        ctx->pc = 0x507670u;
            // 0x507670: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x507674u;
        goto label_507674;
    }
    ctx->pc = 0x50766Cu;
    SET_GPR_U32(ctx, 31, 0x507674u);
    ctx->pc = 0x507670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50766Cu;
            // 0x507670: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507674u; }
        if (ctx->pc != 0x507674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507674u; }
        if (ctx->pc != 0x507674u) { return; }
    }
    ctx->pc = 0x507674u;
label_507674:
    // 0x507674: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x507674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_507678:
    // 0x507678: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x507678u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_50767c:
    // 0x50767c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x50767cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_507680:
    // 0x507680: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x507680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_507684:
    // 0x507684: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x507684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_507688:
    // 0x507688: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x507688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_50768c:
    // 0x50768c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_507690:
    // 0x507690: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x507690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_507694:
    // 0x507694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x507694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_507698:
    // 0x507698: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x507698u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_50769c:
    // 0x50769c: 0xc055ea8  jal         func_157AA0
label_5076a0:
    if (ctx->pc == 0x5076A0u) {
        ctx->pc = 0x5076A0u;
            // 0x5076a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5076A4u;
        goto label_5076a4;
    }
    ctx->pc = 0x50769Cu;
    SET_GPR_U32(ctx, 31, 0x5076A4u);
    ctx->pc = 0x5076A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50769Cu;
            // 0x5076a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5076A4u; }
        if (ctx->pc != 0x5076A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5076A4u; }
        if (ctx->pc != 0x5076A4u) { return; }
    }
    ctx->pc = 0x5076A4u;
label_5076a4:
    // 0x5076a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x5076a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_5076a8:
    // 0x5076a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x5076a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5076ac:
    // 0x5076ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5076acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5076b0:
    // 0x5076b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5076b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5076b4:
    // 0x5076b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5076b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5076b8:
    // 0x5076b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5076b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5076bc:
    // 0x5076bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5076bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5076c0:
    // 0x5076c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5076c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5076c4:
    // 0x5076c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5076c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5076c8:
    // 0x5076c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5076c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5076cc:
    // 0x5076cc: 0x3e00008  jr          $ra
label_5076d0:
    if (ctx->pc == 0x5076D0u) {
        ctx->pc = 0x5076D0u;
            // 0x5076d0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5076D4u;
        goto label_5076d4;
    }
    ctx->pc = 0x5076CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5076D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5076CCu;
            // 0x5076d0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5076D4u;
label_5076d4:
    // 0x5076d4: 0x0  nop
    ctx->pc = 0x5076d4u;
    // NOP
label_5076d8:
    // 0x5076d8: 0x0  nop
    ctx->pc = 0x5076d8u;
    // NOP
label_5076dc:
    // 0x5076dc: 0x0  nop
    ctx->pc = 0x5076dcu;
    // NOP
label_5076e0:
    // 0x5076e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5076e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5076e4:
    // 0x5076e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5076e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5076e8:
    // 0x5076e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5076e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5076ec:
    // 0x5076ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5076ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5076f0:
    // 0x5076f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5076f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5076f4:
    // 0x5076f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5076f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5076f8:
    // 0x5076f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5076f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5076fc:
    // 0x5076fc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5076fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_507700:
    // 0x507700: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_507704:
    if (ctx->pc == 0x507704u) {
        ctx->pc = 0x507704u;
            // 0x507704: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507708u;
        goto label_507708;
    }
    ctx->pc = 0x507700u;
    {
        const bool branch_taken_0x507700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x507704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507700u;
            // 0x507704: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507700) {
            ctx->pc = 0x507734u;
            goto label_507734;
        }
    }
    ctx->pc = 0x507708u;
label_507708:
    // 0x507708: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x507708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50770c:
    // 0x50770c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_507710:
    if (ctx->pc == 0x507710u) {
        ctx->pc = 0x507710u;
            // 0x507710: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x507714u;
        goto label_507714;
    }
    ctx->pc = 0x50770Cu;
    {
        const bool branch_taken_0x50770c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50770c) {
            ctx->pc = 0x507710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50770Cu;
            // 0x507710: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507728u;
            goto label_507728;
        }
    }
    ctx->pc = 0x507714u;
label_507714:
    // 0x507714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x507714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_507718:
    // 0x507718: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
label_50771c:
    if (ctx->pc == 0x50771Cu) {
        ctx->pc = 0x507720u;
        goto label_507720;
    }
    ctx->pc = 0x507718u;
    {
        const bool branch_taken_0x507718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x507718) {
            ctx->pc = 0x5077A8u;
            goto label_5077a8;
        }
    }
    ctx->pc = 0x507720u;
label_507720:
    // 0x507720: 0x10000021  b           . + 4 + (0x21 << 2)
label_507724:
    if (ctx->pc == 0x507724u) {
        ctx->pc = 0x507728u;
        goto label_507728;
    }
    ctx->pc = 0x507720u;
    {
        const bool branch_taken_0x507720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x507720) {
            ctx->pc = 0x5077A8u;
            goto label_5077a8;
        }
    }
    ctx->pc = 0x507728u;
label_507728:
    // 0x507728: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x507728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_50772c:
    // 0x50772c: 0x320f809  jalr        $t9
label_507730:
    if (ctx->pc == 0x507730u) {
        ctx->pc = 0x507734u;
        goto label_507734;
    }
    ctx->pc = 0x50772Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507734u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x507734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507734u; }
            if (ctx->pc != 0x507734u) { return; }
        }
        }
    }
    ctx->pc = 0x507734u;
label_507734:
    // 0x507734: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x507734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_507738:
    // 0x507738: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_50773c:
    if (ctx->pc == 0x50773Cu) {
        ctx->pc = 0x507740u;
        goto label_507740;
    }
    ctx->pc = 0x507738u;
    {
        const bool branch_taken_0x507738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x507738) {
            ctx->pc = 0x5077A8u;
            goto label_5077a8;
        }
    }
    ctx->pc = 0x507740u;
label_507740:
    // 0x507740: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x507740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_507744:
    // 0x507744: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x507744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_507748:
    // 0x507748: 0x8c430cb4  lw          $v1, 0xCB4($v0)
    ctx->pc = 0x507748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_50774c:
    // 0x50774c: 0x8c420cb8  lw          $v0, 0xCB8($v0)
    ctx->pc = 0x50774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3256)));
label_507750:
    // 0x507750: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_507754:
    if (ctx->pc == 0x507754u) {
        ctx->pc = 0x507754u;
            // 0x507754: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507758u;
        goto label_507758;
    }
    ctx->pc = 0x507750u;
    {
        const bool branch_taken_0x507750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x507750) {
            ctx->pc = 0x507754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507750u;
            // 0x507754: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507758u;
            goto label_507758;
        }
    }
    ctx->pc = 0x507758u;
label_507758:
    // 0x507758: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x507758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50775c:
    // 0x50775c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_507760:
    if (ctx->pc == 0x507760u) {
        ctx->pc = 0x507760u;
            // 0x507760: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507764u;
        goto label_507764;
    }
    ctx->pc = 0x50775Cu;
    {
        const bool branch_taken_0x50775c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50775c) {
            ctx->pc = 0x507760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50775Cu;
            // 0x507760: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507778u;
            goto label_507778;
        }
    }
    ctx->pc = 0x507764u;
label_507764:
    // 0x507764: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x507764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_507768:
    // 0x507768: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x507768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50776c:
    // 0x50776c: 0x320f809  jalr        $t9
label_507770:
    if (ctx->pc == 0x507770u) {
        ctx->pc = 0x507770u;
            // 0x507770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507774u;
        goto label_507774;
    }
    ctx->pc = 0x50776Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507774u);
        ctx->pc = 0x507770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50776Cu;
            // 0x507770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x507774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507774u; }
            if (ctx->pc != 0x507774u) { return; }
        }
        }
    }
    ctx->pc = 0x507774u;
label_507774:
    // 0x507774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x507774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_507778:
    // 0x507778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x507778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50777c:
    // 0x50777c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x50777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_507780:
    // 0x507780: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x507780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_507784:
    // 0x507784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x507784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_507788:
    // 0x507788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x507788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50778c:
    // 0x50778c: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x50778cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_507790:
    // 0x507790: 0x320f809  jalr        $t9
label_507794:
    if (ctx->pc == 0x507794u) {
        ctx->pc = 0x507798u;
        goto label_507798;
    }
    ctx->pc = 0x507790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507798u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x507798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507798u; }
            if (ctx->pc != 0x507798u) { return; }
        }
        }
    }
    ctx->pc = 0x507798u;
label_507798:
    // 0x507798: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x507798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50779c:
    // 0x50779c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x50779cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5077a0:
    // 0x5077a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_5077a4:
    if (ctx->pc == 0x5077A4u) {
        ctx->pc = 0x5077A4u;
            // 0x5077a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5077A8u;
        goto label_5077a8;
    }
    ctx->pc = 0x5077A0u;
    {
        const bool branch_taken_0x5077a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5077A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5077A0u;
            // 0x5077a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5077a0) {
            ctx->pc = 0x50777Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50777c;
        }
    }
    ctx->pc = 0x5077A8u;
label_5077a8:
    // 0x5077a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5077a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5077ac:
    // 0x5077ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5077acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5077b0:
    // 0x5077b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5077b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5077b4:
    // 0x5077b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5077b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5077b8:
    // 0x5077b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5077b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5077bc:
    // 0x5077bc: 0x3e00008  jr          $ra
label_5077c0:
    if (ctx->pc == 0x5077C0u) {
        ctx->pc = 0x5077C0u;
            // 0x5077c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5077C4u;
        goto label_5077c4;
    }
    ctx->pc = 0x5077BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5077C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5077BCu;
            // 0x5077c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5077C4u;
label_5077c4:
    // 0x5077c4: 0x0  nop
    ctx->pc = 0x5077c4u;
    // NOP
label_5077c8:
    // 0x5077c8: 0x0  nop
    ctx->pc = 0x5077c8u;
    // NOP
label_5077cc:
    // 0x5077cc: 0x0  nop
    ctx->pc = 0x5077ccu;
    // NOP
label_5077d0:
    // 0x5077d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5077d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5077d4:
    // 0x5077d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5077d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5077d8:
    // 0x5077d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5077d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5077dc:
    // 0x5077dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5077dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5077e0:
    // 0x5077e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5077e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5077e4:
    // 0x5077e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5077e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5077e8:
    // 0x5077e8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x5077e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_5077ec:
    // 0x5077ec: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_5077f0:
    if (ctx->pc == 0x5077F0u) {
        ctx->pc = 0x5077F0u;
            // 0x5077f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5077F4u;
        goto label_5077f4;
    }
    ctx->pc = 0x5077ECu;
    {
        const bool branch_taken_0x5077ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5077F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5077ECu;
            // 0x5077f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5077ec) {
            ctx->pc = 0x507828u;
            goto label_507828;
        }
    }
    ctx->pc = 0x5077F4u;
label_5077f4:
    // 0x5077f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5077f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5077f8:
    // 0x5077f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5077f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5077fc:
    // 0x5077fc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x5077fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_507800:
    // 0x507800: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x507800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_507804:
    // 0x507804: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x507804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_507808:
    // 0x507808: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x507808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50780c:
    // 0x50780c: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x50780cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_507810:
    // 0x507810: 0x320f809  jalr        $t9
label_507814:
    if (ctx->pc == 0x507814u) {
        ctx->pc = 0x507818u;
        goto label_507818;
    }
    ctx->pc = 0x507810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507818u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x507818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507818u; }
            if (ctx->pc != 0x507818u) { return; }
        }
        }
    }
    ctx->pc = 0x507818u;
label_507818:
    // 0x507818: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x507818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50781c:
    // 0x50781c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x50781cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_507820:
    // 0x507820: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_507824:
    if (ctx->pc == 0x507824u) {
        ctx->pc = 0x507824u;
            // 0x507824: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x507828u;
        goto label_507828;
    }
    ctx->pc = 0x507820u;
    {
        const bool branch_taken_0x507820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x507824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507820u;
            // 0x507824: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507820) {
            ctx->pc = 0x5077FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5077fc;
        }
    }
    ctx->pc = 0x507828u;
label_507828:
    // 0x507828: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x507828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50782c:
    // 0x50782c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50782cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_507830:
    // 0x507830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x507830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_507834:
    // 0x507834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x507834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_507838:
    // 0x507838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50783c:
    // 0x50783c: 0x3e00008  jr          $ra
label_507840:
    if (ctx->pc == 0x507840u) {
        ctx->pc = 0x507840u;
            // 0x507840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x507844u;
        goto label_507844;
    }
    ctx->pc = 0x50783Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50783Cu;
            // 0x507840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x507844u;
label_507844:
    // 0x507844: 0x0  nop
    ctx->pc = 0x507844u;
    // NOP
label_507848:
    // 0x507848: 0x0  nop
    ctx->pc = 0x507848u;
    // NOP
label_50784c:
    // 0x50784c: 0x0  nop
    ctx->pc = 0x50784cu;
    // NOP
}
