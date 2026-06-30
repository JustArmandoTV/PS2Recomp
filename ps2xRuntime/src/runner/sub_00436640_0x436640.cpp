#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00436640
// Address: 0x436640 - 0x437350
void sub_00436640_0x436640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436640_0x436640");
#endif

    switch (ctx->pc) {
        case 0x436640u: goto label_436640;
        case 0x436644u: goto label_436644;
        case 0x436648u: goto label_436648;
        case 0x43664cu: goto label_43664c;
        case 0x436650u: goto label_436650;
        case 0x436654u: goto label_436654;
        case 0x436658u: goto label_436658;
        case 0x43665cu: goto label_43665c;
        case 0x436660u: goto label_436660;
        case 0x436664u: goto label_436664;
        case 0x436668u: goto label_436668;
        case 0x43666cu: goto label_43666c;
        case 0x436670u: goto label_436670;
        case 0x436674u: goto label_436674;
        case 0x436678u: goto label_436678;
        case 0x43667cu: goto label_43667c;
        case 0x436680u: goto label_436680;
        case 0x436684u: goto label_436684;
        case 0x436688u: goto label_436688;
        case 0x43668cu: goto label_43668c;
        case 0x436690u: goto label_436690;
        case 0x436694u: goto label_436694;
        case 0x436698u: goto label_436698;
        case 0x43669cu: goto label_43669c;
        case 0x4366a0u: goto label_4366a0;
        case 0x4366a4u: goto label_4366a4;
        case 0x4366a8u: goto label_4366a8;
        case 0x4366acu: goto label_4366ac;
        case 0x4366b0u: goto label_4366b0;
        case 0x4366b4u: goto label_4366b4;
        case 0x4366b8u: goto label_4366b8;
        case 0x4366bcu: goto label_4366bc;
        case 0x4366c0u: goto label_4366c0;
        case 0x4366c4u: goto label_4366c4;
        case 0x4366c8u: goto label_4366c8;
        case 0x4366ccu: goto label_4366cc;
        case 0x4366d0u: goto label_4366d0;
        case 0x4366d4u: goto label_4366d4;
        case 0x4366d8u: goto label_4366d8;
        case 0x4366dcu: goto label_4366dc;
        case 0x4366e0u: goto label_4366e0;
        case 0x4366e4u: goto label_4366e4;
        case 0x4366e8u: goto label_4366e8;
        case 0x4366ecu: goto label_4366ec;
        case 0x4366f0u: goto label_4366f0;
        case 0x4366f4u: goto label_4366f4;
        case 0x4366f8u: goto label_4366f8;
        case 0x4366fcu: goto label_4366fc;
        case 0x436700u: goto label_436700;
        case 0x436704u: goto label_436704;
        case 0x436708u: goto label_436708;
        case 0x43670cu: goto label_43670c;
        case 0x436710u: goto label_436710;
        case 0x436714u: goto label_436714;
        case 0x436718u: goto label_436718;
        case 0x43671cu: goto label_43671c;
        case 0x436720u: goto label_436720;
        case 0x436724u: goto label_436724;
        case 0x436728u: goto label_436728;
        case 0x43672cu: goto label_43672c;
        case 0x436730u: goto label_436730;
        case 0x436734u: goto label_436734;
        case 0x436738u: goto label_436738;
        case 0x43673cu: goto label_43673c;
        case 0x436740u: goto label_436740;
        case 0x436744u: goto label_436744;
        case 0x436748u: goto label_436748;
        case 0x43674cu: goto label_43674c;
        case 0x436750u: goto label_436750;
        case 0x436754u: goto label_436754;
        case 0x436758u: goto label_436758;
        case 0x43675cu: goto label_43675c;
        case 0x436760u: goto label_436760;
        case 0x436764u: goto label_436764;
        case 0x436768u: goto label_436768;
        case 0x43676cu: goto label_43676c;
        case 0x436770u: goto label_436770;
        case 0x436774u: goto label_436774;
        case 0x436778u: goto label_436778;
        case 0x43677cu: goto label_43677c;
        case 0x436780u: goto label_436780;
        case 0x436784u: goto label_436784;
        case 0x436788u: goto label_436788;
        case 0x43678cu: goto label_43678c;
        case 0x436790u: goto label_436790;
        case 0x436794u: goto label_436794;
        case 0x436798u: goto label_436798;
        case 0x43679cu: goto label_43679c;
        case 0x4367a0u: goto label_4367a0;
        case 0x4367a4u: goto label_4367a4;
        case 0x4367a8u: goto label_4367a8;
        case 0x4367acu: goto label_4367ac;
        case 0x4367b0u: goto label_4367b0;
        case 0x4367b4u: goto label_4367b4;
        case 0x4367b8u: goto label_4367b8;
        case 0x4367bcu: goto label_4367bc;
        case 0x4367c0u: goto label_4367c0;
        case 0x4367c4u: goto label_4367c4;
        case 0x4367c8u: goto label_4367c8;
        case 0x4367ccu: goto label_4367cc;
        case 0x4367d0u: goto label_4367d0;
        case 0x4367d4u: goto label_4367d4;
        case 0x4367d8u: goto label_4367d8;
        case 0x4367dcu: goto label_4367dc;
        case 0x4367e0u: goto label_4367e0;
        case 0x4367e4u: goto label_4367e4;
        case 0x4367e8u: goto label_4367e8;
        case 0x4367ecu: goto label_4367ec;
        case 0x4367f0u: goto label_4367f0;
        case 0x4367f4u: goto label_4367f4;
        case 0x4367f8u: goto label_4367f8;
        case 0x4367fcu: goto label_4367fc;
        case 0x436800u: goto label_436800;
        case 0x436804u: goto label_436804;
        case 0x436808u: goto label_436808;
        case 0x43680cu: goto label_43680c;
        case 0x436810u: goto label_436810;
        case 0x436814u: goto label_436814;
        case 0x436818u: goto label_436818;
        case 0x43681cu: goto label_43681c;
        case 0x436820u: goto label_436820;
        case 0x436824u: goto label_436824;
        case 0x436828u: goto label_436828;
        case 0x43682cu: goto label_43682c;
        case 0x436830u: goto label_436830;
        case 0x436834u: goto label_436834;
        case 0x436838u: goto label_436838;
        case 0x43683cu: goto label_43683c;
        case 0x436840u: goto label_436840;
        case 0x436844u: goto label_436844;
        case 0x436848u: goto label_436848;
        case 0x43684cu: goto label_43684c;
        case 0x436850u: goto label_436850;
        case 0x436854u: goto label_436854;
        case 0x436858u: goto label_436858;
        case 0x43685cu: goto label_43685c;
        case 0x436860u: goto label_436860;
        case 0x436864u: goto label_436864;
        case 0x436868u: goto label_436868;
        case 0x43686cu: goto label_43686c;
        case 0x436870u: goto label_436870;
        case 0x436874u: goto label_436874;
        case 0x436878u: goto label_436878;
        case 0x43687cu: goto label_43687c;
        case 0x436880u: goto label_436880;
        case 0x436884u: goto label_436884;
        case 0x436888u: goto label_436888;
        case 0x43688cu: goto label_43688c;
        case 0x436890u: goto label_436890;
        case 0x436894u: goto label_436894;
        case 0x436898u: goto label_436898;
        case 0x43689cu: goto label_43689c;
        case 0x4368a0u: goto label_4368a0;
        case 0x4368a4u: goto label_4368a4;
        case 0x4368a8u: goto label_4368a8;
        case 0x4368acu: goto label_4368ac;
        case 0x4368b0u: goto label_4368b0;
        case 0x4368b4u: goto label_4368b4;
        case 0x4368b8u: goto label_4368b8;
        case 0x4368bcu: goto label_4368bc;
        case 0x4368c0u: goto label_4368c0;
        case 0x4368c4u: goto label_4368c4;
        case 0x4368c8u: goto label_4368c8;
        case 0x4368ccu: goto label_4368cc;
        case 0x4368d0u: goto label_4368d0;
        case 0x4368d4u: goto label_4368d4;
        case 0x4368d8u: goto label_4368d8;
        case 0x4368dcu: goto label_4368dc;
        case 0x4368e0u: goto label_4368e0;
        case 0x4368e4u: goto label_4368e4;
        case 0x4368e8u: goto label_4368e8;
        case 0x4368ecu: goto label_4368ec;
        case 0x4368f0u: goto label_4368f0;
        case 0x4368f4u: goto label_4368f4;
        case 0x4368f8u: goto label_4368f8;
        case 0x4368fcu: goto label_4368fc;
        case 0x436900u: goto label_436900;
        case 0x436904u: goto label_436904;
        case 0x436908u: goto label_436908;
        case 0x43690cu: goto label_43690c;
        case 0x436910u: goto label_436910;
        case 0x436914u: goto label_436914;
        case 0x436918u: goto label_436918;
        case 0x43691cu: goto label_43691c;
        case 0x436920u: goto label_436920;
        case 0x436924u: goto label_436924;
        case 0x436928u: goto label_436928;
        case 0x43692cu: goto label_43692c;
        case 0x436930u: goto label_436930;
        case 0x436934u: goto label_436934;
        case 0x436938u: goto label_436938;
        case 0x43693cu: goto label_43693c;
        case 0x436940u: goto label_436940;
        case 0x436944u: goto label_436944;
        case 0x436948u: goto label_436948;
        case 0x43694cu: goto label_43694c;
        case 0x436950u: goto label_436950;
        case 0x436954u: goto label_436954;
        case 0x436958u: goto label_436958;
        case 0x43695cu: goto label_43695c;
        case 0x436960u: goto label_436960;
        case 0x436964u: goto label_436964;
        case 0x436968u: goto label_436968;
        case 0x43696cu: goto label_43696c;
        case 0x436970u: goto label_436970;
        case 0x436974u: goto label_436974;
        case 0x436978u: goto label_436978;
        case 0x43697cu: goto label_43697c;
        case 0x436980u: goto label_436980;
        case 0x436984u: goto label_436984;
        case 0x436988u: goto label_436988;
        case 0x43698cu: goto label_43698c;
        case 0x436990u: goto label_436990;
        case 0x436994u: goto label_436994;
        case 0x436998u: goto label_436998;
        case 0x43699cu: goto label_43699c;
        case 0x4369a0u: goto label_4369a0;
        case 0x4369a4u: goto label_4369a4;
        case 0x4369a8u: goto label_4369a8;
        case 0x4369acu: goto label_4369ac;
        case 0x4369b0u: goto label_4369b0;
        case 0x4369b4u: goto label_4369b4;
        case 0x4369b8u: goto label_4369b8;
        case 0x4369bcu: goto label_4369bc;
        case 0x4369c0u: goto label_4369c0;
        case 0x4369c4u: goto label_4369c4;
        case 0x4369c8u: goto label_4369c8;
        case 0x4369ccu: goto label_4369cc;
        case 0x4369d0u: goto label_4369d0;
        case 0x4369d4u: goto label_4369d4;
        case 0x4369d8u: goto label_4369d8;
        case 0x4369dcu: goto label_4369dc;
        case 0x4369e0u: goto label_4369e0;
        case 0x4369e4u: goto label_4369e4;
        case 0x4369e8u: goto label_4369e8;
        case 0x4369ecu: goto label_4369ec;
        case 0x4369f0u: goto label_4369f0;
        case 0x4369f4u: goto label_4369f4;
        case 0x4369f8u: goto label_4369f8;
        case 0x4369fcu: goto label_4369fc;
        case 0x436a00u: goto label_436a00;
        case 0x436a04u: goto label_436a04;
        case 0x436a08u: goto label_436a08;
        case 0x436a0cu: goto label_436a0c;
        case 0x436a10u: goto label_436a10;
        case 0x436a14u: goto label_436a14;
        case 0x436a18u: goto label_436a18;
        case 0x436a1cu: goto label_436a1c;
        case 0x436a20u: goto label_436a20;
        case 0x436a24u: goto label_436a24;
        case 0x436a28u: goto label_436a28;
        case 0x436a2cu: goto label_436a2c;
        case 0x436a30u: goto label_436a30;
        case 0x436a34u: goto label_436a34;
        case 0x436a38u: goto label_436a38;
        case 0x436a3cu: goto label_436a3c;
        case 0x436a40u: goto label_436a40;
        case 0x436a44u: goto label_436a44;
        case 0x436a48u: goto label_436a48;
        case 0x436a4cu: goto label_436a4c;
        case 0x436a50u: goto label_436a50;
        case 0x436a54u: goto label_436a54;
        case 0x436a58u: goto label_436a58;
        case 0x436a5cu: goto label_436a5c;
        case 0x436a60u: goto label_436a60;
        case 0x436a64u: goto label_436a64;
        case 0x436a68u: goto label_436a68;
        case 0x436a6cu: goto label_436a6c;
        case 0x436a70u: goto label_436a70;
        case 0x436a74u: goto label_436a74;
        case 0x436a78u: goto label_436a78;
        case 0x436a7cu: goto label_436a7c;
        case 0x436a80u: goto label_436a80;
        case 0x436a84u: goto label_436a84;
        case 0x436a88u: goto label_436a88;
        case 0x436a8cu: goto label_436a8c;
        case 0x436a90u: goto label_436a90;
        case 0x436a94u: goto label_436a94;
        case 0x436a98u: goto label_436a98;
        case 0x436a9cu: goto label_436a9c;
        case 0x436aa0u: goto label_436aa0;
        case 0x436aa4u: goto label_436aa4;
        case 0x436aa8u: goto label_436aa8;
        case 0x436aacu: goto label_436aac;
        case 0x436ab0u: goto label_436ab0;
        case 0x436ab4u: goto label_436ab4;
        case 0x436ab8u: goto label_436ab8;
        case 0x436abcu: goto label_436abc;
        case 0x436ac0u: goto label_436ac0;
        case 0x436ac4u: goto label_436ac4;
        case 0x436ac8u: goto label_436ac8;
        case 0x436accu: goto label_436acc;
        case 0x436ad0u: goto label_436ad0;
        case 0x436ad4u: goto label_436ad4;
        case 0x436ad8u: goto label_436ad8;
        case 0x436adcu: goto label_436adc;
        case 0x436ae0u: goto label_436ae0;
        case 0x436ae4u: goto label_436ae4;
        case 0x436ae8u: goto label_436ae8;
        case 0x436aecu: goto label_436aec;
        case 0x436af0u: goto label_436af0;
        case 0x436af4u: goto label_436af4;
        case 0x436af8u: goto label_436af8;
        case 0x436afcu: goto label_436afc;
        case 0x436b00u: goto label_436b00;
        case 0x436b04u: goto label_436b04;
        case 0x436b08u: goto label_436b08;
        case 0x436b0cu: goto label_436b0c;
        case 0x436b10u: goto label_436b10;
        case 0x436b14u: goto label_436b14;
        case 0x436b18u: goto label_436b18;
        case 0x436b1cu: goto label_436b1c;
        case 0x436b20u: goto label_436b20;
        case 0x436b24u: goto label_436b24;
        case 0x436b28u: goto label_436b28;
        case 0x436b2cu: goto label_436b2c;
        case 0x436b30u: goto label_436b30;
        case 0x436b34u: goto label_436b34;
        case 0x436b38u: goto label_436b38;
        case 0x436b3cu: goto label_436b3c;
        case 0x436b40u: goto label_436b40;
        case 0x436b44u: goto label_436b44;
        case 0x436b48u: goto label_436b48;
        case 0x436b4cu: goto label_436b4c;
        case 0x436b50u: goto label_436b50;
        case 0x436b54u: goto label_436b54;
        case 0x436b58u: goto label_436b58;
        case 0x436b5cu: goto label_436b5c;
        case 0x436b60u: goto label_436b60;
        case 0x436b64u: goto label_436b64;
        case 0x436b68u: goto label_436b68;
        case 0x436b6cu: goto label_436b6c;
        case 0x436b70u: goto label_436b70;
        case 0x436b74u: goto label_436b74;
        case 0x436b78u: goto label_436b78;
        case 0x436b7cu: goto label_436b7c;
        case 0x436b80u: goto label_436b80;
        case 0x436b84u: goto label_436b84;
        case 0x436b88u: goto label_436b88;
        case 0x436b8cu: goto label_436b8c;
        case 0x436b90u: goto label_436b90;
        case 0x436b94u: goto label_436b94;
        case 0x436b98u: goto label_436b98;
        case 0x436b9cu: goto label_436b9c;
        case 0x436ba0u: goto label_436ba0;
        case 0x436ba4u: goto label_436ba4;
        case 0x436ba8u: goto label_436ba8;
        case 0x436bacu: goto label_436bac;
        case 0x436bb0u: goto label_436bb0;
        case 0x436bb4u: goto label_436bb4;
        case 0x436bb8u: goto label_436bb8;
        case 0x436bbcu: goto label_436bbc;
        case 0x436bc0u: goto label_436bc0;
        case 0x436bc4u: goto label_436bc4;
        case 0x436bc8u: goto label_436bc8;
        case 0x436bccu: goto label_436bcc;
        case 0x436bd0u: goto label_436bd0;
        case 0x436bd4u: goto label_436bd4;
        case 0x436bd8u: goto label_436bd8;
        case 0x436bdcu: goto label_436bdc;
        case 0x436be0u: goto label_436be0;
        case 0x436be4u: goto label_436be4;
        case 0x436be8u: goto label_436be8;
        case 0x436becu: goto label_436bec;
        case 0x436bf0u: goto label_436bf0;
        case 0x436bf4u: goto label_436bf4;
        case 0x436bf8u: goto label_436bf8;
        case 0x436bfcu: goto label_436bfc;
        case 0x436c00u: goto label_436c00;
        case 0x436c04u: goto label_436c04;
        case 0x436c08u: goto label_436c08;
        case 0x436c0cu: goto label_436c0c;
        case 0x436c10u: goto label_436c10;
        case 0x436c14u: goto label_436c14;
        case 0x436c18u: goto label_436c18;
        case 0x436c1cu: goto label_436c1c;
        case 0x436c20u: goto label_436c20;
        case 0x436c24u: goto label_436c24;
        case 0x436c28u: goto label_436c28;
        case 0x436c2cu: goto label_436c2c;
        case 0x436c30u: goto label_436c30;
        case 0x436c34u: goto label_436c34;
        case 0x436c38u: goto label_436c38;
        case 0x436c3cu: goto label_436c3c;
        case 0x436c40u: goto label_436c40;
        case 0x436c44u: goto label_436c44;
        case 0x436c48u: goto label_436c48;
        case 0x436c4cu: goto label_436c4c;
        case 0x436c50u: goto label_436c50;
        case 0x436c54u: goto label_436c54;
        case 0x436c58u: goto label_436c58;
        case 0x436c5cu: goto label_436c5c;
        case 0x436c60u: goto label_436c60;
        case 0x436c64u: goto label_436c64;
        case 0x436c68u: goto label_436c68;
        case 0x436c6cu: goto label_436c6c;
        case 0x436c70u: goto label_436c70;
        case 0x436c74u: goto label_436c74;
        case 0x436c78u: goto label_436c78;
        case 0x436c7cu: goto label_436c7c;
        case 0x436c80u: goto label_436c80;
        case 0x436c84u: goto label_436c84;
        case 0x436c88u: goto label_436c88;
        case 0x436c8cu: goto label_436c8c;
        case 0x436c90u: goto label_436c90;
        case 0x436c94u: goto label_436c94;
        case 0x436c98u: goto label_436c98;
        case 0x436c9cu: goto label_436c9c;
        case 0x436ca0u: goto label_436ca0;
        case 0x436ca4u: goto label_436ca4;
        case 0x436ca8u: goto label_436ca8;
        case 0x436cacu: goto label_436cac;
        case 0x436cb0u: goto label_436cb0;
        case 0x436cb4u: goto label_436cb4;
        case 0x436cb8u: goto label_436cb8;
        case 0x436cbcu: goto label_436cbc;
        case 0x436cc0u: goto label_436cc0;
        case 0x436cc4u: goto label_436cc4;
        case 0x436cc8u: goto label_436cc8;
        case 0x436cccu: goto label_436ccc;
        case 0x436cd0u: goto label_436cd0;
        case 0x436cd4u: goto label_436cd4;
        case 0x436cd8u: goto label_436cd8;
        case 0x436cdcu: goto label_436cdc;
        case 0x436ce0u: goto label_436ce0;
        case 0x436ce4u: goto label_436ce4;
        case 0x436ce8u: goto label_436ce8;
        case 0x436cecu: goto label_436cec;
        case 0x436cf0u: goto label_436cf0;
        case 0x436cf4u: goto label_436cf4;
        case 0x436cf8u: goto label_436cf8;
        case 0x436cfcu: goto label_436cfc;
        case 0x436d00u: goto label_436d00;
        case 0x436d04u: goto label_436d04;
        case 0x436d08u: goto label_436d08;
        case 0x436d0cu: goto label_436d0c;
        case 0x436d10u: goto label_436d10;
        case 0x436d14u: goto label_436d14;
        case 0x436d18u: goto label_436d18;
        case 0x436d1cu: goto label_436d1c;
        case 0x436d20u: goto label_436d20;
        case 0x436d24u: goto label_436d24;
        case 0x436d28u: goto label_436d28;
        case 0x436d2cu: goto label_436d2c;
        case 0x436d30u: goto label_436d30;
        case 0x436d34u: goto label_436d34;
        case 0x436d38u: goto label_436d38;
        case 0x436d3cu: goto label_436d3c;
        case 0x436d40u: goto label_436d40;
        case 0x436d44u: goto label_436d44;
        case 0x436d48u: goto label_436d48;
        case 0x436d4cu: goto label_436d4c;
        case 0x436d50u: goto label_436d50;
        case 0x436d54u: goto label_436d54;
        case 0x436d58u: goto label_436d58;
        case 0x436d5cu: goto label_436d5c;
        case 0x436d60u: goto label_436d60;
        case 0x436d64u: goto label_436d64;
        case 0x436d68u: goto label_436d68;
        case 0x436d6cu: goto label_436d6c;
        case 0x436d70u: goto label_436d70;
        case 0x436d74u: goto label_436d74;
        case 0x436d78u: goto label_436d78;
        case 0x436d7cu: goto label_436d7c;
        case 0x436d80u: goto label_436d80;
        case 0x436d84u: goto label_436d84;
        case 0x436d88u: goto label_436d88;
        case 0x436d8cu: goto label_436d8c;
        case 0x436d90u: goto label_436d90;
        case 0x436d94u: goto label_436d94;
        case 0x436d98u: goto label_436d98;
        case 0x436d9cu: goto label_436d9c;
        case 0x436da0u: goto label_436da0;
        case 0x436da4u: goto label_436da4;
        case 0x436da8u: goto label_436da8;
        case 0x436dacu: goto label_436dac;
        case 0x436db0u: goto label_436db0;
        case 0x436db4u: goto label_436db4;
        case 0x436db8u: goto label_436db8;
        case 0x436dbcu: goto label_436dbc;
        case 0x436dc0u: goto label_436dc0;
        case 0x436dc4u: goto label_436dc4;
        case 0x436dc8u: goto label_436dc8;
        case 0x436dccu: goto label_436dcc;
        case 0x436dd0u: goto label_436dd0;
        case 0x436dd4u: goto label_436dd4;
        case 0x436dd8u: goto label_436dd8;
        case 0x436ddcu: goto label_436ddc;
        case 0x436de0u: goto label_436de0;
        case 0x436de4u: goto label_436de4;
        case 0x436de8u: goto label_436de8;
        case 0x436decu: goto label_436dec;
        case 0x436df0u: goto label_436df0;
        case 0x436df4u: goto label_436df4;
        case 0x436df8u: goto label_436df8;
        case 0x436dfcu: goto label_436dfc;
        case 0x436e00u: goto label_436e00;
        case 0x436e04u: goto label_436e04;
        case 0x436e08u: goto label_436e08;
        case 0x436e0cu: goto label_436e0c;
        case 0x436e10u: goto label_436e10;
        case 0x436e14u: goto label_436e14;
        case 0x436e18u: goto label_436e18;
        case 0x436e1cu: goto label_436e1c;
        case 0x436e20u: goto label_436e20;
        case 0x436e24u: goto label_436e24;
        case 0x436e28u: goto label_436e28;
        case 0x436e2cu: goto label_436e2c;
        case 0x436e30u: goto label_436e30;
        case 0x436e34u: goto label_436e34;
        case 0x436e38u: goto label_436e38;
        case 0x436e3cu: goto label_436e3c;
        case 0x436e40u: goto label_436e40;
        case 0x436e44u: goto label_436e44;
        case 0x436e48u: goto label_436e48;
        case 0x436e4cu: goto label_436e4c;
        case 0x436e50u: goto label_436e50;
        case 0x436e54u: goto label_436e54;
        case 0x436e58u: goto label_436e58;
        case 0x436e5cu: goto label_436e5c;
        case 0x436e60u: goto label_436e60;
        case 0x436e64u: goto label_436e64;
        case 0x436e68u: goto label_436e68;
        case 0x436e6cu: goto label_436e6c;
        case 0x436e70u: goto label_436e70;
        case 0x436e74u: goto label_436e74;
        case 0x436e78u: goto label_436e78;
        case 0x436e7cu: goto label_436e7c;
        case 0x436e80u: goto label_436e80;
        case 0x436e84u: goto label_436e84;
        case 0x436e88u: goto label_436e88;
        case 0x436e8cu: goto label_436e8c;
        case 0x436e90u: goto label_436e90;
        case 0x436e94u: goto label_436e94;
        case 0x436e98u: goto label_436e98;
        case 0x436e9cu: goto label_436e9c;
        case 0x436ea0u: goto label_436ea0;
        case 0x436ea4u: goto label_436ea4;
        case 0x436ea8u: goto label_436ea8;
        case 0x436eacu: goto label_436eac;
        case 0x436eb0u: goto label_436eb0;
        case 0x436eb4u: goto label_436eb4;
        case 0x436eb8u: goto label_436eb8;
        case 0x436ebcu: goto label_436ebc;
        case 0x436ec0u: goto label_436ec0;
        case 0x436ec4u: goto label_436ec4;
        case 0x436ec8u: goto label_436ec8;
        case 0x436eccu: goto label_436ecc;
        case 0x436ed0u: goto label_436ed0;
        case 0x436ed4u: goto label_436ed4;
        case 0x436ed8u: goto label_436ed8;
        case 0x436edcu: goto label_436edc;
        case 0x436ee0u: goto label_436ee0;
        case 0x436ee4u: goto label_436ee4;
        case 0x436ee8u: goto label_436ee8;
        case 0x436eecu: goto label_436eec;
        case 0x436ef0u: goto label_436ef0;
        case 0x436ef4u: goto label_436ef4;
        case 0x436ef8u: goto label_436ef8;
        case 0x436efcu: goto label_436efc;
        case 0x436f00u: goto label_436f00;
        case 0x436f04u: goto label_436f04;
        case 0x436f08u: goto label_436f08;
        case 0x436f0cu: goto label_436f0c;
        case 0x436f10u: goto label_436f10;
        case 0x436f14u: goto label_436f14;
        case 0x436f18u: goto label_436f18;
        case 0x436f1cu: goto label_436f1c;
        case 0x436f20u: goto label_436f20;
        case 0x436f24u: goto label_436f24;
        case 0x436f28u: goto label_436f28;
        case 0x436f2cu: goto label_436f2c;
        case 0x436f30u: goto label_436f30;
        case 0x436f34u: goto label_436f34;
        case 0x436f38u: goto label_436f38;
        case 0x436f3cu: goto label_436f3c;
        case 0x436f40u: goto label_436f40;
        case 0x436f44u: goto label_436f44;
        case 0x436f48u: goto label_436f48;
        case 0x436f4cu: goto label_436f4c;
        case 0x436f50u: goto label_436f50;
        case 0x436f54u: goto label_436f54;
        case 0x436f58u: goto label_436f58;
        case 0x436f5cu: goto label_436f5c;
        case 0x436f60u: goto label_436f60;
        case 0x436f64u: goto label_436f64;
        case 0x436f68u: goto label_436f68;
        case 0x436f6cu: goto label_436f6c;
        case 0x436f70u: goto label_436f70;
        case 0x436f74u: goto label_436f74;
        case 0x436f78u: goto label_436f78;
        case 0x436f7cu: goto label_436f7c;
        case 0x436f80u: goto label_436f80;
        case 0x436f84u: goto label_436f84;
        case 0x436f88u: goto label_436f88;
        case 0x436f8cu: goto label_436f8c;
        case 0x436f90u: goto label_436f90;
        case 0x436f94u: goto label_436f94;
        case 0x436f98u: goto label_436f98;
        case 0x436f9cu: goto label_436f9c;
        case 0x436fa0u: goto label_436fa0;
        case 0x436fa4u: goto label_436fa4;
        case 0x436fa8u: goto label_436fa8;
        case 0x436facu: goto label_436fac;
        case 0x436fb0u: goto label_436fb0;
        case 0x436fb4u: goto label_436fb4;
        case 0x436fb8u: goto label_436fb8;
        case 0x436fbcu: goto label_436fbc;
        case 0x436fc0u: goto label_436fc0;
        case 0x436fc4u: goto label_436fc4;
        case 0x436fc8u: goto label_436fc8;
        case 0x436fccu: goto label_436fcc;
        case 0x436fd0u: goto label_436fd0;
        case 0x436fd4u: goto label_436fd4;
        case 0x436fd8u: goto label_436fd8;
        case 0x436fdcu: goto label_436fdc;
        case 0x436fe0u: goto label_436fe0;
        case 0x436fe4u: goto label_436fe4;
        case 0x436fe8u: goto label_436fe8;
        case 0x436fecu: goto label_436fec;
        case 0x436ff0u: goto label_436ff0;
        case 0x436ff4u: goto label_436ff4;
        case 0x436ff8u: goto label_436ff8;
        case 0x436ffcu: goto label_436ffc;
        case 0x437000u: goto label_437000;
        case 0x437004u: goto label_437004;
        case 0x437008u: goto label_437008;
        case 0x43700cu: goto label_43700c;
        case 0x437010u: goto label_437010;
        case 0x437014u: goto label_437014;
        case 0x437018u: goto label_437018;
        case 0x43701cu: goto label_43701c;
        case 0x437020u: goto label_437020;
        case 0x437024u: goto label_437024;
        case 0x437028u: goto label_437028;
        case 0x43702cu: goto label_43702c;
        case 0x437030u: goto label_437030;
        case 0x437034u: goto label_437034;
        case 0x437038u: goto label_437038;
        case 0x43703cu: goto label_43703c;
        case 0x437040u: goto label_437040;
        case 0x437044u: goto label_437044;
        case 0x437048u: goto label_437048;
        case 0x43704cu: goto label_43704c;
        case 0x437050u: goto label_437050;
        case 0x437054u: goto label_437054;
        case 0x437058u: goto label_437058;
        case 0x43705cu: goto label_43705c;
        case 0x437060u: goto label_437060;
        case 0x437064u: goto label_437064;
        case 0x437068u: goto label_437068;
        case 0x43706cu: goto label_43706c;
        case 0x437070u: goto label_437070;
        case 0x437074u: goto label_437074;
        case 0x437078u: goto label_437078;
        case 0x43707cu: goto label_43707c;
        case 0x437080u: goto label_437080;
        case 0x437084u: goto label_437084;
        case 0x437088u: goto label_437088;
        case 0x43708cu: goto label_43708c;
        case 0x437090u: goto label_437090;
        case 0x437094u: goto label_437094;
        case 0x437098u: goto label_437098;
        case 0x43709cu: goto label_43709c;
        case 0x4370a0u: goto label_4370a0;
        case 0x4370a4u: goto label_4370a4;
        case 0x4370a8u: goto label_4370a8;
        case 0x4370acu: goto label_4370ac;
        case 0x4370b0u: goto label_4370b0;
        case 0x4370b4u: goto label_4370b4;
        case 0x4370b8u: goto label_4370b8;
        case 0x4370bcu: goto label_4370bc;
        case 0x4370c0u: goto label_4370c0;
        case 0x4370c4u: goto label_4370c4;
        case 0x4370c8u: goto label_4370c8;
        case 0x4370ccu: goto label_4370cc;
        case 0x4370d0u: goto label_4370d0;
        case 0x4370d4u: goto label_4370d4;
        case 0x4370d8u: goto label_4370d8;
        case 0x4370dcu: goto label_4370dc;
        case 0x4370e0u: goto label_4370e0;
        case 0x4370e4u: goto label_4370e4;
        case 0x4370e8u: goto label_4370e8;
        case 0x4370ecu: goto label_4370ec;
        case 0x4370f0u: goto label_4370f0;
        case 0x4370f4u: goto label_4370f4;
        case 0x4370f8u: goto label_4370f8;
        case 0x4370fcu: goto label_4370fc;
        case 0x437100u: goto label_437100;
        case 0x437104u: goto label_437104;
        case 0x437108u: goto label_437108;
        case 0x43710cu: goto label_43710c;
        case 0x437110u: goto label_437110;
        case 0x437114u: goto label_437114;
        case 0x437118u: goto label_437118;
        case 0x43711cu: goto label_43711c;
        case 0x437120u: goto label_437120;
        case 0x437124u: goto label_437124;
        case 0x437128u: goto label_437128;
        case 0x43712cu: goto label_43712c;
        case 0x437130u: goto label_437130;
        case 0x437134u: goto label_437134;
        case 0x437138u: goto label_437138;
        case 0x43713cu: goto label_43713c;
        case 0x437140u: goto label_437140;
        case 0x437144u: goto label_437144;
        case 0x437148u: goto label_437148;
        case 0x43714cu: goto label_43714c;
        case 0x437150u: goto label_437150;
        case 0x437154u: goto label_437154;
        case 0x437158u: goto label_437158;
        case 0x43715cu: goto label_43715c;
        case 0x437160u: goto label_437160;
        case 0x437164u: goto label_437164;
        case 0x437168u: goto label_437168;
        case 0x43716cu: goto label_43716c;
        case 0x437170u: goto label_437170;
        case 0x437174u: goto label_437174;
        case 0x437178u: goto label_437178;
        case 0x43717cu: goto label_43717c;
        case 0x437180u: goto label_437180;
        case 0x437184u: goto label_437184;
        case 0x437188u: goto label_437188;
        case 0x43718cu: goto label_43718c;
        case 0x437190u: goto label_437190;
        case 0x437194u: goto label_437194;
        case 0x437198u: goto label_437198;
        case 0x43719cu: goto label_43719c;
        case 0x4371a0u: goto label_4371a0;
        case 0x4371a4u: goto label_4371a4;
        case 0x4371a8u: goto label_4371a8;
        case 0x4371acu: goto label_4371ac;
        case 0x4371b0u: goto label_4371b0;
        case 0x4371b4u: goto label_4371b4;
        case 0x4371b8u: goto label_4371b8;
        case 0x4371bcu: goto label_4371bc;
        case 0x4371c0u: goto label_4371c0;
        case 0x4371c4u: goto label_4371c4;
        case 0x4371c8u: goto label_4371c8;
        case 0x4371ccu: goto label_4371cc;
        case 0x4371d0u: goto label_4371d0;
        case 0x4371d4u: goto label_4371d4;
        case 0x4371d8u: goto label_4371d8;
        case 0x4371dcu: goto label_4371dc;
        case 0x4371e0u: goto label_4371e0;
        case 0x4371e4u: goto label_4371e4;
        case 0x4371e8u: goto label_4371e8;
        case 0x4371ecu: goto label_4371ec;
        case 0x4371f0u: goto label_4371f0;
        case 0x4371f4u: goto label_4371f4;
        case 0x4371f8u: goto label_4371f8;
        case 0x4371fcu: goto label_4371fc;
        case 0x437200u: goto label_437200;
        case 0x437204u: goto label_437204;
        case 0x437208u: goto label_437208;
        case 0x43720cu: goto label_43720c;
        case 0x437210u: goto label_437210;
        case 0x437214u: goto label_437214;
        case 0x437218u: goto label_437218;
        case 0x43721cu: goto label_43721c;
        case 0x437220u: goto label_437220;
        case 0x437224u: goto label_437224;
        case 0x437228u: goto label_437228;
        case 0x43722cu: goto label_43722c;
        case 0x437230u: goto label_437230;
        case 0x437234u: goto label_437234;
        case 0x437238u: goto label_437238;
        case 0x43723cu: goto label_43723c;
        case 0x437240u: goto label_437240;
        case 0x437244u: goto label_437244;
        case 0x437248u: goto label_437248;
        case 0x43724cu: goto label_43724c;
        case 0x437250u: goto label_437250;
        case 0x437254u: goto label_437254;
        case 0x437258u: goto label_437258;
        case 0x43725cu: goto label_43725c;
        case 0x437260u: goto label_437260;
        case 0x437264u: goto label_437264;
        case 0x437268u: goto label_437268;
        case 0x43726cu: goto label_43726c;
        case 0x437270u: goto label_437270;
        case 0x437274u: goto label_437274;
        case 0x437278u: goto label_437278;
        case 0x43727cu: goto label_43727c;
        case 0x437280u: goto label_437280;
        case 0x437284u: goto label_437284;
        case 0x437288u: goto label_437288;
        case 0x43728cu: goto label_43728c;
        case 0x437290u: goto label_437290;
        case 0x437294u: goto label_437294;
        case 0x437298u: goto label_437298;
        case 0x43729cu: goto label_43729c;
        case 0x4372a0u: goto label_4372a0;
        case 0x4372a4u: goto label_4372a4;
        case 0x4372a8u: goto label_4372a8;
        case 0x4372acu: goto label_4372ac;
        case 0x4372b0u: goto label_4372b0;
        case 0x4372b4u: goto label_4372b4;
        case 0x4372b8u: goto label_4372b8;
        case 0x4372bcu: goto label_4372bc;
        case 0x4372c0u: goto label_4372c0;
        case 0x4372c4u: goto label_4372c4;
        case 0x4372c8u: goto label_4372c8;
        case 0x4372ccu: goto label_4372cc;
        case 0x4372d0u: goto label_4372d0;
        case 0x4372d4u: goto label_4372d4;
        case 0x4372d8u: goto label_4372d8;
        case 0x4372dcu: goto label_4372dc;
        case 0x4372e0u: goto label_4372e0;
        case 0x4372e4u: goto label_4372e4;
        case 0x4372e8u: goto label_4372e8;
        case 0x4372ecu: goto label_4372ec;
        case 0x4372f0u: goto label_4372f0;
        case 0x4372f4u: goto label_4372f4;
        case 0x4372f8u: goto label_4372f8;
        case 0x4372fcu: goto label_4372fc;
        case 0x437300u: goto label_437300;
        case 0x437304u: goto label_437304;
        case 0x437308u: goto label_437308;
        case 0x43730cu: goto label_43730c;
        case 0x437310u: goto label_437310;
        case 0x437314u: goto label_437314;
        case 0x437318u: goto label_437318;
        case 0x43731cu: goto label_43731c;
        case 0x437320u: goto label_437320;
        case 0x437324u: goto label_437324;
        case 0x437328u: goto label_437328;
        case 0x43732cu: goto label_43732c;
        case 0x437330u: goto label_437330;
        case 0x437334u: goto label_437334;
        case 0x437338u: goto label_437338;
        case 0x43733cu: goto label_43733c;
        case 0x437340u: goto label_437340;
        case 0x437344u: goto label_437344;
        case 0x437348u: goto label_437348;
        case 0x43734cu: goto label_43734c;
        default: break;
    }

    ctx->pc = 0x436640u;

label_436640:
    // 0x436640: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x436640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_436644:
    // 0x436644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x436644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_436648:
    // 0x436648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x436648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43664c:
    // 0x43664c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_436650:
    // 0x436650: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x436650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_436654:
    // 0x436654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x436654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_436658:
    // 0x436658: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x436658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43665c:
    // 0x43665c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_436660:
    // 0x436660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x436660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_436664:
    // 0x436664: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x436664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_436668:
    // 0x436668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x436668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43666c:
    // 0x43666c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x43666cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_436670:
    // 0x436670: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x436670u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_436674:
    // 0x436674: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
label_436678:
    if (ctx->pc == 0x436678u) {
        ctx->pc = 0x436678u;
            // 0x436678: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43667Cu;
        goto label_43667c;
    }
    ctx->pc = 0x436674u;
    {
        const bool branch_taken_0x436674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436674u;
            // 0x436678: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436674) {
            ctx->pc = 0x4368ACu;
            goto label_4368ac;
        }
    }
    ctx->pc = 0x43667Cu;
label_43667c:
    // 0x43667c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_436680:
    // 0x436680: 0xc04f278  jal         func_13C9E0
label_436684:
    if (ctx->pc == 0x436684u) {
        ctx->pc = 0x436684u;
            // 0x436684: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x436688u;
        goto label_436688;
    }
    ctx->pc = 0x436680u;
    SET_GPR_U32(ctx, 31, 0x436688u);
    ctx->pc = 0x436684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436680u;
            // 0x436684: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436688u; }
        if (ctx->pc != 0x436688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436688u; }
        if (ctx->pc != 0x436688u) { return; }
    }
    ctx->pc = 0x436688u;
label_436688:
    // 0x436688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x436688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43668c:
    // 0x43668c: 0xc04ce80  jal         func_133A00
label_436690:
    if (ctx->pc == 0x436690u) {
        ctx->pc = 0x436690u;
            // 0x436690: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x436694u;
        goto label_436694;
    }
    ctx->pc = 0x43668Cu;
    SET_GPR_U32(ctx, 31, 0x436694u);
    ctx->pc = 0x436690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43668Cu;
            // 0x436690: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436694u; }
        if (ctx->pc != 0x436694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436694u; }
        if (ctx->pc != 0x436694u) { return; }
    }
    ctx->pc = 0x436694u;
label_436694:
    // 0x436694: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x436694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_436698:
    // 0x436698: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x436698u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_43669c:
    // 0x43669c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x43669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4366a0:
    // 0x4366a0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x4366a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4366a4:
    // 0x4366a4: 0xc07698c  jal         func_1DA630
label_4366a8:
    if (ctx->pc == 0x4366A8u) {
        ctx->pc = 0x4366A8u;
            // 0x4366a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4366ACu;
        goto label_4366ac;
    }
    ctx->pc = 0x4366A4u;
    SET_GPR_U32(ctx, 31, 0x4366ACu);
    ctx->pc = 0x4366A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4366A4u;
            // 0x4366a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4366ACu; }
        if (ctx->pc != 0x4366ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4366ACu; }
        if (ctx->pc != 0x4366ACu) { return; }
    }
    ctx->pc = 0x4366ACu;
label_4366ac:
    // 0x4366ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4366acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4366b0:
    // 0x4366b0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4366b4:
    if (ctx->pc == 0x4366B4u) {
        ctx->pc = 0x4366B8u;
        goto label_4366b8;
    }
    ctx->pc = 0x4366B0u;
    {
        const bool branch_taken_0x4366b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4366b0) {
            ctx->pc = 0x4366C0u;
            goto label_4366c0;
        }
    }
    ctx->pc = 0x4366B8u;
label_4366b8:
    // 0x4366b8: 0x10000033  b           . + 4 + (0x33 << 2)
label_4366bc:
    if (ctx->pc == 0x4366BCu) {
        ctx->pc = 0x4366BCu;
            // 0x4366bc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4366C0u;
        goto label_4366c0;
    }
    ctx->pc = 0x4366B8u;
    {
        const bool branch_taken_0x4366b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4366BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4366B8u;
            // 0x4366bc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4366b8) {
            ctx->pc = 0x436788u;
            goto label_436788;
        }
    }
    ctx->pc = 0x4366C0u;
label_4366c0:
    // 0x4366c0: 0xc0576f4  jal         func_15DBD0
label_4366c4:
    if (ctx->pc == 0x4366C4u) {
        ctx->pc = 0x4366C8u;
        goto label_4366c8;
    }
    ctx->pc = 0x4366C0u;
    SET_GPR_U32(ctx, 31, 0x4366C8u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4366C8u; }
        if (ctx->pc != 0x4366C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4366C8u; }
        if (ctx->pc != 0x4366C8u) { return; }
    }
    ctx->pc = 0x4366C8u;
label_4366c8:
    // 0x4366c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4366c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4366cc:
    // 0x4366cc: 0xc076984  jal         func_1DA610
label_4366d0:
    if (ctx->pc == 0x4366D0u) {
        ctx->pc = 0x4366D0u;
            // 0x4366d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4366D4u;
        goto label_4366d4;
    }
    ctx->pc = 0x4366CCu;
    SET_GPR_U32(ctx, 31, 0x4366D4u);
    ctx->pc = 0x4366D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4366CCu;
            // 0x4366d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4366D4u; }
        if (ctx->pc != 0x4366D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4366D4u; }
        if (ctx->pc != 0x4366D4u) { return; }
    }
    ctx->pc = 0x4366D4u;
label_4366d4:
    // 0x4366d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4366d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4366d8:
    // 0x4366d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4366d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4366dc:
    // 0x4366dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4366e0:
    // 0x4366e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4366e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4366e4:
    // 0x4366e4: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x4366e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4366e8:
    // 0x4366e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4366e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4366ec:
    // 0x4366ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4366ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4366f0:
    // 0x4366f0: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x4366f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4366f4:
    // 0x4366f4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4366f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4366f8:
    // 0x4366f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4366f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4366fc:
    // 0x4366fc: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x4366fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436700:
    // 0x436700: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x436700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_436704:
    // 0x436704: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x436704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_436708:
    // 0x436708: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x436708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_43670c:
    // 0x43670c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x43670cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_436710:
    // 0x436710: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x436710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_436714:
    // 0x436714: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x436714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436718:
    // 0x436718: 0xc04cca0  jal         func_133280
label_43671c:
    if (ctx->pc == 0x43671Cu) {
        ctx->pc = 0x43671Cu;
            // 0x43671c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x436720u;
        goto label_436720;
    }
    ctx->pc = 0x436718u;
    SET_GPR_U32(ctx, 31, 0x436720u);
    ctx->pc = 0x43671Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436718u;
            // 0x43671c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436720u; }
        if (ctx->pc != 0x436720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436720u; }
        if (ctx->pc != 0x436720u) { return; }
    }
    ctx->pc = 0x436720u;
label_436720:
    // 0x436720: 0xc076980  jal         func_1DA600
label_436724:
    if (ctx->pc == 0x436724u) {
        ctx->pc = 0x436724u;
            // 0x436724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436728u;
        goto label_436728;
    }
    ctx->pc = 0x436720u;
    SET_GPR_U32(ctx, 31, 0x436728u);
    ctx->pc = 0x436724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436720u;
            // 0x436724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436728u; }
        if (ctx->pc != 0x436728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436728u; }
        if (ctx->pc != 0x436728u) { return; }
    }
    ctx->pc = 0x436728u;
label_436728:
    // 0x436728: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x436728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43672c:
    // 0x43672c: 0xc04cc34  jal         func_1330D0
label_436730:
    if (ctx->pc == 0x436730u) {
        ctx->pc = 0x436730u;
            // 0x436730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436734u;
        goto label_436734;
    }
    ctx->pc = 0x43672Cu;
    SET_GPR_U32(ctx, 31, 0x436734u);
    ctx->pc = 0x436730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43672Cu;
            // 0x436730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436734u; }
        if (ctx->pc != 0x436734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436734u; }
        if (ctx->pc != 0x436734u) { return; }
    }
    ctx->pc = 0x436734u;
label_436734:
    // 0x436734: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x436734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_436738:
    // 0x436738: 0xc461ce60  lwc1        $f1, -0x31A0($v1)
    ctx->pc = 0x436738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43673c:
    // 0x43673c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43673cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_436740:
    // 0x436740: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_436744:
    if (ctx->pc == 0x436744u) {
        ctx->pc = 0x436744u;
            // 0x436744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436748u;
        goto label_436748;
    }
    ctx->pc = 0x436740u;
    {
        const bool branch_taken_0x436740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x436740) {
            ctx->pc = 0x436744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436740u;
            // 0x436744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436750u;
            goto label_436750;
        }
    }
    ctx->pc = 0x436748u;
label_436748:
    // 0x436748: 0x1000000f  b           . + 4 + (0xF << 2)
label_43674c:
    if (ctx->pc == 0x43674Cu) {
        ctx->pc = 0x43674Cu;
            // 0x43674c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x436750u;
        goto label_436750;
    }
    ctx->pc = 0x436748u;
    {
        const bool branch_taken_0x436748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436748u;
            // 0x43674c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436748) {
            ctx->pc = 0x436788u;
            goto label_436788;
        }
    }
    ctx->pc = 0x436750u;
label_436750:
    // 0x436750: 0xc07697c  jal         func_1DA5F0
label_436754:
    if (ctx->pc == 0x436754u) {
        ctx->pc = 0x436758u;
        goto label_436758;
    }
    ctx->pc = 0x436750u;
    SET_GPR_U32(ctx, 31, 0x436758u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436758u; }
        if (ctx->pc != 0x436758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436758u; }
        if (ctx->pc != 0x436758u) { return; }
    }
    ctx->pc = 0x436758u;
label_436758:
    // 0x436758: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x436758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43675c:
    // 0x43675c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x43675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_436760:
    // 0x436760: 0xc04cd60  jal         func_133580
label_436764:
    if (ctx->pc == 0x436764u) {
        ctx->pc = 0x436764u;
            // 0x436764: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436768u;
        goto label_436768;
    }
    ctx->pc = 0x436760u;
    SET_GPR_U32(ctx, 31, 0x436768u);
    ctx->pc = 0x436764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436760u;
            // 0x436764: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436768u; }
        if (ctx->pc != 0x436768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436768u; }
        if (ctx->pc != 0x436768u) { return; }
    }
    ctx->pc = 0x436768u;
label_436768:
    // 0x436768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x436768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43676c:
    // 0x43676c: 0xc04c650  jal         func_131940
label_436770:
    if (ctx->pc == 0x436770u) {
        ctx->pc = 0x436770u;
            // 0x436770: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x436774u;
        goto label_436774;
    }
    ctx->pc = 0x43676Cu;
    SET_GPR_U32(ctx, 31, 0x436774u);
    ctx->pc = 0x436770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43676Cu;
            // 0x436770: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436774u; }
        if (ctx->pc != 0x436774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436774u; }
        if (ctx->pc != 0x436774u) { return; }
    }
    ctx->pc = 0x436774u;
label_436774:
    // 0x436774: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x436774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_436778:
    // 0x436778: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x436778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_43677c:
    // 0x43677c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x43677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_436780:
    // 0x436780: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x436780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_436784:
    // 0x436784: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x436784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_436788:
    // 0x436788: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x436788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_43678c:
    // 0x43678c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_436790:
    if (ctx->pc == 0x436790u) {
        ctx->pc = 0x436790u;
            // 0x436790: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x436794u;
        goto label_436794;
    }
    ctx->pc = 0x43678Cu;
    {
        const bool branch_taken_0x43678c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x436790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43678Cu;
            // 0x436790: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43678c) {
            ctx->pc = 0x43679Cu;
            goto label_43679c;
        }
    }
    ctx->pc = 0x436794u;
label_436794:
    // 0x436794: 0x10000046  b           . + 4 + (0x46 << 2)
label_436798:
    if (ctx->pc == 0x436798u) {
        ctx->pc = 0x436798u;
            // 0x436798: 0xa2a000e4  sb          $zero, 0xE4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 228), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x43679Cu;
        goto label_43679c;
    }
    ctx->pc = 0x436794u;
    {
        const bool branch_taken_0x436794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436794u;
            // 0x436798: 0xa2a000e4  sb          $zero, 0xE4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 228), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436794) {
            ctx->pc = 0x4368B0u;
            goto label_4368b0;
        }
    }
    ctx->pc = 0x43679Cu;
label_43679c:
    // 0x43679c: 0xc6ac00dc  lwc1        $f12, 0xDC($s5)
    ctx->pc = 0x43679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4367a0:
    // 0x4367a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4367a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4367a4:
    // 0x4367a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4367a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4367a8:
    // 0x4367a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4367a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4367ac:
    // 0x4367ac: 0xc04ce50  jal         func_133940
label_4367b0:
    if (ctx->pc == 0x4367B0u) {
        ctx->pc = 0x4367B0u;
            // 0x4367b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4367B4u;
        goto label_4367b4;
    }
    ctx->pc = 0x4367ACu;
    SET_GPR_U32(ctx, 31, 0x4367B4u);
    ctx->pc = 0x4367B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4367ACu;
            // 0x4367b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4367B4u; }
        if (ctx->pc != 0x4367B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4367B4u; }
        if (ctx->pc != 0x4367B4u) { return; }
    }
    ctx->pc = 0x4367B4u;
label_4367b4:
    // 0x4367b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4367b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4367b8:
    // 0x4367b8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4367b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4367bc:
    // 0x4367bc: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x4367bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4367c0:
    // 0x4367c0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4367c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4367c4:
    // 0x4367c4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4367c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4367c8:
    // 0x4367c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4367c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4367cc:
    // 0x4367cc: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x4367ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4367d0:
    // 0x4367d0: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x4367d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4367d4:
    // 0x4367d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4367d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4367d8:
    // 0x4367d8: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x4367d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4367dc:
    // 0x4367dc: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4367dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4367e0:
    // 0x4367e0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4367e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4367e4:
    // 0x4367e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4367e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4367e8:
    // 0x4367e8: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x4367e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4367ec:
    // 0x4367ec: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x4367ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4367f0:
    // 0x4367f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4367f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4367f4:
    // 0x4367f4: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x4367f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4367f8:
    // 0x4367f8: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x4367f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_4367fc:
    // 0x4367fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4367fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_436800:
    // 0x436800: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x436800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_436804:
    // 0x436804: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x436804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_436808:
    // 0x436808: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x436808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_43680c:
    // 0x43680c: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x43680cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_436810:
    // 0x436810: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x436810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_436814:
    // 0x436814: 0x12a9021  addu        $s2, $t1, $t2
    ctx->pc = 0x436814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_436818:
    // 0x436818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x436818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43681c:
    // 0x43681c: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x43681cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_436820:
    // 0x436820: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x436820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_436824:
    // 0x436824: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x436824u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
label_436828:
    // 0x436828: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x436828u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_43682c:
    // 0x43682c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x43682cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_436830:
    // 0x436830: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x436830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_436834:
    // 0x436834: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x436834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_436838:
    // 0x436838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x436838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_43683c:
    // 0x43683c: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x43683cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_436840:
    // 0x436840: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x436840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_436844:
    // 0x436844: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x436844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_436848:
    // 0x436848: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x436848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_43684c:
    // 0x43684c: 0xc04e4a4  jal         func_139290
label_436850:
    if (ctx->pc == 0x436850u) {
        ctx->pc = 0x436850u;
            // 0x436850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436854u;
        goto label_436854;
    }
    ctx->pc = 0x43684Cu;
    SET_GPR_U32(ctx, 31, 0x436854u);
    ctx->pc = 0x436850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43684Cu;
            // 0x436850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436854u; }
        if (ctx->pc != 0x436854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436854u; }
        if (ctx->pc != 0x436854u) { return; }
    }
    ctx->pc = 0x436854u;
label_436854:
    // 0x436854: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x436854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_436858:
    // 0x436858: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x436858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43685c:
    // 0x43685c: 0xc04cd60  jal         func_133580
label_436860:
    if (ctx->pc == 0x436860u) {
        ctx->pc = 0x436860u;
            // 0x436860: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x436864u;
        goto label_436864;
    }
    ctx->pc = 0x43685Cu;
    SET_GPR_U32(ctx, 31, 0x436864u);
    ctx->pc = 0x436860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43685Cu;
            // 0x436860: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436864u; }
        if (ctx->pc != 0x436864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436864u; }
        if (ctx->pc != 0x436864u) { return; }
    }
    ctx->pc = 0x436864u;
label_436864:
    // 0x436864: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x436864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_436868:
    // 0x436868: 0xc04cce8  jal         func_1333A0
label_43686c:
    if (ctx->pc == 0x43686Cu) {
        ctx->pc = 0x43686Cu;
            // 0x43686c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x436870u;
        goto label_436870;
    }
    ctx->pc = 0x436868u;
    SET_GPR_U32(ctx, 31, 0x436870u);
    ctx->pc = 0x43686Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436868u;
            // 0x43686c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436870u; }
        if (ctx->pc != 0x436870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436870u; }
        if (ctx->pc != 0x436870u) { return; }
    }
    ctx->pc = 0x436870u;
label_436870:
    // 0x436870: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x436870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_436874:
    // 0x436874: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x436874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_436878:
    // 0x436878: 0x320f809  jalr        $t9
label_43687c:
    if (ctx->pc == 0x43687Cu) {
        ctx->pc = 0x43687Cu;
            // 0x43687c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436880u;
        goto label_436880;
    }
    ctx->pc = 0x436878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x436880u);
        ctx->pc = 0x43687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436878u;
            // 0x43687c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x436880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x436880u; }
            if (ctx->pc != 0x436880u) { return; }
        }
        }
    }
    ctx->pc = 0x436880u;
label_436880:
    // 0x436880: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x436880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_436884:
    // 0x436884: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x436884u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_436888:
    // 0x436888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x436888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43688c:
    // 0x43688c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43688cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_436890:
    // 0x436890: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x436890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_436894:
    // 0x436894: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x436894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_436898:
    // 0x436898: 0xc04cfcc  jal         func_133F30
label_43689c:
    if (ctx->pc == 0x43689Cu) {
        ctx->pc = 0x43689Cu;
            // 0x43689c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4368A0u;
        goto label_4368a0;
    }
    ctx->pc = 0x436898u;
    SET_GPR_U32(ctx, 31, 0x4368A0u);
    ctx->pc = 0x43689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436898u;
            // 0x43689c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4368A0u; }
        if (ctx->pc != 0x4368A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4368A0u; }
        if (ctx->pc != 0x4368A0u) { return; }
    }
    ctx->pc = 0x4368A0u;
label_4368a0:
    // 0x4368a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4368a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4368a4:
    // 0x4368a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4368a8:
    if (ctx->pc == 0x4368A8u) {
        ctx->pc = 0x4368A8u;
            // 0x4368a8: 0xa2a300e4  sb          $v1, 0xE4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 228), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4368ACu;
        goto label_4368ac;
    }
    ctx->pc = 0x4368A4u;
    {
        const bool branch_taken_0x4368a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4368A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4368A4u;
            // 0x4368a8: 0xa2a300e4  sb          $v1, 0xE4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 228), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4368a4) {
            ctx->pc = 0x4368B0u;
            goto label_4368b0;
        }
    }
    ctx->pc = 0x4368ACu;
label_4368ac:
    // 0x4368ac: 0xa2a000e4  sb          $zero, 0xE4($s5)
    ctx->pc = 0x4368acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 228), (uint8_t)GPR_U32(ctx, 0));
label_4368b0:
    // 0x4368b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4368b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4368b4:
    // 0x4368b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4368b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4368b8:
    // 0x4368b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4368b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4368bc:
    // 0x4368bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4368bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4368c0:
    // 0x4368c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4368c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4368c4:
    // 0x4368c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4368c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4368c8:
    // 0x4368c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4368c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4368cc:
    // 0x4368cc: 0x3e00008  jr          $ra
label_4368d0:
    if (ctx->pc == 0x4368D0u) {
        ctx->pc = 0x4368D0u;
            // 0x4368d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4368D4u;
        goto label_4368d4;
    }
    ctx->pc = 0x4368CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4368D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4368CCu;
            // 0x4368d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4368D4u;
label_4368d4:
    // 0x4368d4: 0x0  nop
    ctx->pc = 0x4368d4u;
    // NOP
label_4368d8:
    // 0x4368d8: 0x0  nop
    ctx->pc = 0x4368d8u;
    // NOP
label_4368dc:
    // 0x4368dc: 0x0  nop
    ctx->pc = 0x4368dcu;
    // NOP
label_4368e0:
    // 0x4368e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4368e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4368e4:
    // 0x4368e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4368e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4368e8:
    // 0x4368e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4368e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4368ec:
    // 0x4368ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4368ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4368f0:
    // 0x4368f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4368f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4368f4:
    // 0x4368f4: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4368f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4368f8:
    // 0x4368f8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4368f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4368fc:
    // 0x4368fc: 0xc0dc9bc  jal         func_3726F0
label_436900:
    if (ctx->pc == 0x436900u) {
        ctx->pc = 0x436900u;
            // 0x436900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436904u;
        goto label_436904;
    }
    ctx->pc = 0x4368FCu;
    SET_GPR_U32(ctx, 31, 0x436904u);
    ctx->pc = 0x436900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4368FCu;
            // 0x436900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436904u; }
        if (ctx->pc != 0x436904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436904u; }
        if (ctx->pc != 0x436904u) { return; }
    }
    ctx->pc = 0x436904u;
label_436904:
    // 0x436904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x436904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_436908:
    // 0x436908: 0xc0dc9a0  jal         func_372680
label_43690c:
    if (ctx->pc == 0x43690Cu) {
        ctx->pc = 0x43690Cu;
            // 0x43690c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x436910u;
        goto label_436910;
    }
    ctx->pc = 0x436908u;
    SET_GPR_U32(ctx, 31, 0x436910u);
    ctx->pc = 0x43690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436908u;
            // 0x43690c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436910u; }
        if (ctx->pc != 0x436910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436910u; }
        if (ctx->pc != 0x436910u) { return; }
    }
    ctx->pc = 0x436910u;
label_436910:
    // 0x436910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x436910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_436914:
    // 0x436914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x436914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_436918:
    // 0x436918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x436918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43691c:
    // 0x43691c: 0x3e00008  jr          $ra
label_436920:
    if (ctx->pc == 0x436920u) {
        ctx->pc = 0x436920u;
            // 0x436920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x436924u;
        goto label_436924;
    }
    ctx->pc = 0x43691Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43691Cu;
            // 0x436920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436924u;
label_436924:
    // 0x436924: 0x0  nop
    ctx->pc = 0x436924u;
    // NOP
label_436928:
    // 0x436928: 0x0  nop
    ctx->pc = 0x436928u;
    // NOP
label_43692c:
    // 0x43692c: 0x0  nop
    ctx->pc = 0x43692cu;
    // NOP
label_436930:
    // 0x436930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x436930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_436934:
    // 0x436934: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x436934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_436938:
    // 0x436938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x436938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43693c:
    // 0x43693c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x43693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_436940:
    // 0x436940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x436940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_436944:
    // 0x436944: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x436944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_436948:
    // 0x436948: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x436948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_43694c:
    // 0x43694c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43694cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_436950:
    // 0x436950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x436950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_436954:
    // 0x436954: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x436954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_436958:
    // 0x436958: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x436958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43695c:
    // 0x43695c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43695cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_436960:
    // 0x436960: 0xc08bff0  jal         func_22FFC0
label_436964:
    if (ctx->pc == 0x436964u) {
        ctx->pc = 0x436964u;
            // 0x436964: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436968u;
        goto label_436968;
    }
    ctx->pc = 0x436960u;
    SET_GPR_U32(ctx, 31, 0x436968u);
    ctx->pc = 0x436964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436960u;
            // 0x436964: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436968u; }
        if (ctx->pc != 0x436968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436968u; }
        if (ctx->pc != 0x436968u) { return; }
    }
    ctx->pc = 0x436968u;
label_436968:
    // 0x436968: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x436968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43696c:
    // 0x43696c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_436970:
    // 0x436970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x436970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436974:
    // 0x436974: 0xc08914c  jal         func_224530
label_436978:
    if (ctx->pc == 0x436978u) {
        ctx->pc = 0x436978u;
            // 0x436978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43697Cu;
        goto label_43697c;
    }
    ctx->pc = 0x436974u;
    SET_GPR_U32(ctx, 31, 0x43697Cu);
    ctx->pc = 0x436978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436974u;
            // 0x436978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43697Cu; }
        if (ctx->pc != 0x43697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43697Cu; }
        if (ctx->pc != 0x43697Cu) { return; }
    }
    ctx->pc = 0x43697Cu;
label_43697c:
    // 0x43697c: 0xc0e393c  jal         func_38E4F0
label_436980:
    if (ctx->pc == 0x436980u) {
        ctx->pc = 0x436980u;
            // 0x436980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436984u;
        goto label_436984;
    }
    ctx->pc = 0x43697Cu;
    SET_GPR_U32(ctx, 31, 0x436984u);
    ctx->pc = 0x436980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43697Cu;
            // 0x436980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436984u; }
        if (ctx->pc != 0x436984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436984u; }
        if (ctx->pc != 0x436984u) { return; }
    }
    ctx->pc = 0x436984u;
label_436984:
    // 0x436984: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x436984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_436988:
    // 0x436988: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x436988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43698c:
    // 0x43698c: 0x34667084  ori         $a2, $v1, 0x7084
    ctx->pc = 0x43698cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_436990:
    // 0x436990: 0x2409f9fb  addiu       $t1, $zero, -0x605
    ctx->pc = 0x436990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_436994:
    // 0x436994: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x436994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_436998:
    // 0x436998: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x436998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43699c:
    // 0x43699c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x43699cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_4369a0:
    // 0x4369a0: 0xaca60154  sw          $a2, 0x154($a1)
    ctx->pc = 0x4369a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 6));
label_4369a4:
    // 0x4369a4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x4369a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_4369a8:
    // 0x4369a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4369a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4369ac:
    // 0x4369ac: 0x346bcccd  ori         $t3, $v1, 0xCCCD
    ctx->pc = 0x4369acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4369b0:
    // 0x4369b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4369b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4369b4:
    // 0x4369b4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4369b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4369b8:
    // 0x4369b8: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x4369b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_4369bc:
    // 0x4369bc: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x4369bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
label_4369c0:
    // 0x4369c0: 0x8e0a0050  lw          $t2, 0x50($s0)
    ctx->pc = 0x4369c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4369c4:
    // 0x4369c4: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x4369c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_4369c8:
    // 0x4369c8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4369c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4369cc:
    // 0x4369cc: 0xad4b015c  sw          $t3, 0x15C($t2)
    ctx->pc = 0x4369ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 348), GPR_U32(ctx, 11));
label_4369d0:
    // 0x4369d0: 0x8e0a0050  lw          $t2, 0x50($s0)
    ctx->pc = 0x4369d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4369d4:
    // 0x4369d4: 0xad4b0160  sw          $t3, 0x160($t2)
    ctx->pc = 0x4369d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 352), GPR_U32(ctx, 11));
label_4369d8:
    // 0x4369d8: 0x8e0a00b0  lw          $t2, 0xB0($s0)
    ctx->pc = 0x4369d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4369dc:
    // 0x4369dc: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x4369dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_4369e0:
    // 0x4369e0: 0x35290604  ori         $t1, $t1, 0x604
    ctx->pc = 0x4369e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1540);
label_4369e4:
    // 0x4369e4: 0xae0900b0  sw          $t1, 0xB0($s0)
    ctx->pc = 0x4369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 9));
label_4369e8:
    // 0x4369e8: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x4369e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_4369ec:
    // 0x4369ec: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4369ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4369f0:
    // 0x4369f0: 0xa2080066  sb          $t0, 0x66($s0)
    ctx->pc = 0x4369f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 8));
label_4369f4:
    // 0x4369f4: 0xa2070067  sb          $a3, 0x67($s0)
    ctx->pc = 0x4369f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 7));
label_4369f8:
    // 0x4369f8: 0xa2060068  sb          $a2, 0x68($s0)
    ctx->pc = 0x4369f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 6));
label_4369fc:
    // 0x4369fc: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4369fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_436a00:
    // 0x436a00: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x436a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
label_436a04:
    // 0x436a04: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x436a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_436a08:
    // 0x436a08: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x436a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_436a0c:
    // 0x436a0c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x436a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_436a10:
    // 0x436a10: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x436a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_436a14:
    // 0x436a14: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x436a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_436a18:
    // 0x436a18: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x436a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_436a1c:
    // 0x436a1c: 0xa20000e4  sb          $zero, 0xE4($s0)
    ctx->pc = 0x436a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 0));
label_436a20:
    // 0x436a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x436a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_436a24:
    // 0x436a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x436a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_436a28:
    // 0x436a28: 0x3e00008  jr          $ra
label_436a2c:
    if (ctx->pc == 0x436A2Cu) {
        ctx->pc = 0x436A2Cu;
            // 0x436a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x436A30u;
        goto label_436a30;
    }
    ctx->pc = 0x436A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436A28u;
            // 0x436a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436A30u;
label_436a30:
    // 0x436a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x436a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_436a34:
    // 0x436a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x436a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_436a38:
    // 0x436a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x436a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_436a3c:
    // 0x436a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x436a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_436a40:
    // 0x436a40: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x436a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_436a44:
    // 0x436a44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_436a48:
    if (ctx->pc == 0x436A48u) {
        ctx->pc = 0x436A48u;
            // 0x436a48: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x436A4Cu;
        goto label_436a4c;
    }
    ctx->pc = 0x436A44u;
    {
        const bool branch_taken_0x436a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x436a44) {
            ctx->pc = 0x436A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436A44u;
            // 0x436a48: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436A60u;
            goto label_436a60;
        }
    }
    ctx->pc = 0x436A4Cu;
label_436a4c:
    // 0x436a4c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x436a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_436a50:
    // 0x436a50: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x436a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_436a54:
    // 0x436a54: 0x320f809  jalr        $t9
label_436a58:
    if (ctx->pc == 0x436A58u) {
        ctx->pc = 0x436A58u;
            // 0x436a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x436A5Cu;
        goto label_436a5c;
    }
    ctx->pc = 0x436A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x436A5Cu);
        ctx->pc = 0x436A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436A54u;
            // 0x436a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x436A5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x436A5Cu; }
            if (ctx->pc != 0x436A5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x436A5Cu;
label_436a5c:
    // 0x436a5c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x436a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_436a60:
    // 0x436a60: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x436a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_436a64:
    // 0x436a64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_436a68:
    if (ctx->pc == 0x436A68u) {
        ctx->pc = 0x436A68u;
            // 0x436a68: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x436A6Cu;
        goto label_436a6c;
    }
    ctx->pc = 0x436A64u;
    {
        const bool branch_taken_0x436a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x436a64) {
            ctx->pc = 0x436A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436A64u;
            // 0x436a68: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436A80u;
            goto label_436a80;
        }
    }
    ctx->pc = 0x436A6Cu;
label_436a6c:
    // 0x436a6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x436a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_436a70:
    // 0x436a70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x436a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_436a74:
    // 0x436a74: 0x320f809  jalr        $t9
label_436a78:
    if (ctx->pc == 0x436A78u) {
        ctx->pc = 0x436A78u;
            // 0x436a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x436A7Cu;
        goto label_436a7c;
    }
    ctx->pc = 0x436A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x436A7Cu);
        ctx->pc = 0x436A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436A74u;
            // 0x436a78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x436A7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x436A7Cu; }
            if (ctx->pc != 0x436A7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x436A7Cu;
label_436a7c:
    // 0x436a7c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x436a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_436a80:
    // 0x436a80: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x436a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_436a84:
    // 0x436a84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_436a88:
    if (ctx->pc == 0x436A88u) {
        ctx->pc = 0x436A88u;
            // 0x436a88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x436A8Cu;
        goto label_436a8c;
    }
    ctx->pc = 0x436A84u;
    {
        const bool branch_taken_0x436a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x436a84) {
            ctx->pc = 0x436A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436A84u;
            // 0x436a88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436AA0u;
            goto label_436aa0;
        }
    }
    ctx->pc = 0x436A8Cu;
label_436a8c:
    // 0x436a8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x436a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_436a90:
    // 0x436a90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x436a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_436a94:
    // 0x436a94: 0x320f809  jalr        $t9
label_436a98:
    if (ctx->pc == 0x436A98u) {
        ctx->pc = 0x436A98u;
            // 0x436a98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x436A9Cu;
        goto label_436a9c;
    }
    ctx->pc = 0x436A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x436A9Cu);
        ctx->pc = 0x436A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436A94u;
            // 0x436a98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x436A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x436A9Cu; }
            if (ctx->pc != 0x436A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x436A9Cu;
label_436a9c:
    // 0x436a9c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x436a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_436aa0:
    // 0x436aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x436aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_436aa4:
    // 0x436aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x436aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_436aa8:
    // 0x436aa8: 0x3e00008  jr          $ra
label_436aac:
    if (ctx->pc == 0x436AACu) {
        ctx->pc = 0x436AACu;
            // 0x436aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x436AB0u;
        goto label_436ab0;
    }
    ctx->pc = 0x436AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436AA8u;
            // 0x436aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436AB0u;
label_436ab0:
    // 0x436ab0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x436ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_436ab4:
    // 0x436ab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x436ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_436ab8:
    // 0x436ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x436ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_436abc:
    // 0x436abc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x436abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_436ac0:
    // 0x436ac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x436ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_436ac4:
    // 0x436ac4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x436ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_436ac8:
    // 0x436ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x436ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_436acc:
    // 0x436acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x436accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_436ad0:
    // 0x436ad0: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x436ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436ad4:
    // 0x436ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x436ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_436ad8:
    // 0x436ad8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_436adc:
    if (ctx->pc == 0x436ADCu) {
        ctx->pc = 0x436ADCu;
            // 0x436adc: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->pc = 0x436AE0u;
        goto label_436ae0;
    }
    ctx->pc = 0x436AD8u;
    {
        const bool branch_taken_0x436ad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x436ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436AD8u;
            // 0x436adc: 0xe48100dc  swc1        $f1, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x436ad8) {
            ctx->pc = 0x436AE8u;
            goto label_436ae8;
        }
    }
    ctx->pc = 0x436AE0u;
label_436ae0:
    // 0x436ae0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x436ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_436ae4:
    // 0x436ae4: 0xae6200dc  sw          $v0, 0xDC($s3)
    ctx->pc = 0x436ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 2));
label_436ae8:
    // 0x436ae8: 0xc0892d0  jal         func_224B40
label_436aec:
    if (ctx->pc == 0x436AECu) {
        ctx->pc = 0x436AECu;
            // 0x436aec: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x436AF0u;
        goto label_436af0;
    }
    ctx->pc = 0x436AE8u;
    SET_GPR_U32(ctx, 31, 0x436AF0u);
    ctx->pc = 0x436AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436AE8u;
            // 0x436aec: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436AF0u; }
        if (ctx->pc != 0x436AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436AF0u; }
        if (ctx->pc != 0x436AF0u) { return; }
    }
    ctx->pc = 0x436AF0u;
label_436af0:
    // 0x436af0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x436af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_436af4:
    // 0x436af4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x436af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_436af8:
    // 0x436af8: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x436af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_436afc:
    // 0x436afc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x436afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_436b00:
    // 0x436b00: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x436b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_436b04:
    // 0x436b04: 0xc0a7a88  jal         func_29EA20
label_436b08:
    if (ctx->pc == 0x436B08u) {
        ctx->pc = 0x436B08u;
            // 0x436b08: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x436B0Cu;
        goto label_436b0c;
    }
    ctx->pc = 0x436B04u;
    SET_GPR_U32(ctx, 31, 0x436B0Cu);
    ctx->pc = 0x436B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436B04u;
            // 0x436b08: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B0Cu; }
        if (ctx->pc != 0x436B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B0Cu; }
        if (ctx->pc != 0x436B0Cu) { return; }
    }
    ctx->pc = 0x436B0Cu;
label_436b0c:
    // 0x436b0c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x436b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_436b10:
    // 0x436b10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x436b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_436b14:
    // 0x436b14: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_436b18:
    if (ctx->pc == 0x436B18u) {
        ctx->pc = 0x436B18u;
            // 0x436b18: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x436B1Cu;
        goto label_436b1c;
    }
    ctx->pc = 0x436B14u;
    {
        const bool branch_taken_0x436b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x436B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436B14u;
            // 0x436b18: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436b14) {
            ctx->pc = 0x436B38u;
            goto label_436b38;
        }
    }
    ctx->pc = 0x436B1Cu;
label_436b1c:
    // 0x436b1c: 0xc66000dc  lwc1        $f0, 0xDC($s3)
    ctx->pc = 0x436b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436b20:
    // 0x436b20: 0x3c024118  lui         $v0, 0x4118
    ctx->pc = 0x436b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16664 << 16));
label_436b24:
    // 0x436b24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x436b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_436b28:
    // 0x436b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x436b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_436b2c:
    // 0x436b2c: 0xc0827ac  jal         func_209EB0
label_436b30:
    if (ctx->pc == 0x436B30u) {
        ctx->pc = 0x436B30u;
            // 0x436b30: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x436B34u;
        goto label_436b34;
    }
    ctx->pc = 0x436B2Cu;
    SET_GPR_U32(ctx, 31, 0x436B34u);
    ctx->pc = 0x436B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436B2Cu;
            // 0x436b30: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B34u; }
        if (ctx->pc != 0x436B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B34u; }
        if (ctx->pc != 0x436B34u) { return; }
    }
    ctx->pc = 0x436B34u;
label_436b34:
    // 0x436b34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x436b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_436b38:
    // 0x436b38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x436b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_436b3c:
    // 0x436b3c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x436b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_436b40:
    // 0x436b40: 0xc0b6e68  jal         func_2DB9A0
label_436b44:
    if (ctx->pc == 0x436B44u) {
        ctx->pc = 0x436B44u;
            // 0x436b44: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x436B48u;
        goto label_436b48;
    }
    ctx->pc = 0x436B40u;
    SET_GPR_U32(ctx, 31, 0x436B48u);
    ctx->pc = 0x436B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436B40u;
            // 0x436b44: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B48u; }
        if (ctx->pc != 0x436B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B48u; }
        if (ctx->pc != 0x436B48u) { return; }
    }
    ctx->pc = 0x436B48u;
label_436b48:
    // 0x436b48: 0xc0b6dac  jal         func_2DB6B0
label_436b4c:
    if (ctx->pc == 0x436B4Cu) {
        ctx->pc = 0x436B4Cu;
            // 0x436b4c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x436B50u;
        goto label_436b50;
    }
    ctx->pc = 0x436B48u;
    SET_GPR_U32(ctx, 31, 0x436B50u);
    ctx->pc = 0x436B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436B48u;
            // 0x436b4c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B50u; }
        if (ctx->pc != 0x436B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B50u; }
        if (ctx->pc != 0x436B50u) { return; }
    }
    ctx->pc = 0x436B50u;
label_436b50:
    // 0x436b50: 0xc0cac94  jal         func_32B250
label_436b54:
    if (ctx->pc == 0x436B54u) {
        ctx->pc = 0x436B54u;
            // 0x436b54: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x436B58u;
        goto label_436b58;
    }
    ctx->pc = 0x436B50u;
    SET_GPR_U32(ctx, 31, 0x436B58u);
    ctx->pc = 0x436B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436B50u;
            // 0x436b54: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B58u; }
        if (ctx->pc != 0x436B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B58u; }
        if (ctx->pc != 0x436B58u) { return; }
    }
    ctx->pc = 0x436B58u;
label_436b58:
    // 0x436b58: 0xc0cac84  jal         func_32B210
label_436b5c:
    if (ctx->pc == 0x436B5Cu) {
        ctx->pc = 0x436B5Cu;
            // 0x436b5c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x436B60u;
        goto label_436b60;
    }
    ctx->pc = 0x436B58u;
    SET_GPR_U32(ctx, 31, 0x436B60u);
    ctx->pc = 0x436B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436B58u;
            // 0x436b5c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B60u; }
        if (ctx->pc != 0x436B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B60u; }
        if (ctx->pc != 0x436B60u) { return; }
    }
    ctx->pc = 0x436B60u;
label_436b60:
    // 0x436b60: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x436b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_436b64:
    // 0x436b64: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x436b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_436b68:
    // 0x436b68: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x436b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_436b6c:
    // 0x436b6c: 0xc0a562c  jal         func_2958B0
label_436b70:
    if (ctx->pc == 0x436B70u) {
        ctx->pc = 0x436B70u;
            // 0x436b70: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x436B74u;
        goto label_436b74;
    }
    ctx->pc = 0x436B6Cu;
    SET_GPR_U32(ctx, 31, 0x436B74u);
    ctx->pc = 0x436B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436B6Cu;
            // 0x436b70: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B74u; }
        if (ctx->pc != 0x436B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436B74u; }
        if (ctx->pc != 0x436B74u) { return; }
    }
    ctx->pc = 0x436B74u;
label_436b74:
    // 0x436b74: 0xafb200d4  sw          $s2, 0xD4($sp)
    ctx->pc = 0x436b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 18));
label_436b78:
    // 0x436b78: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x436b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_436b7c:
    // 0x436b7c: 0xc6670018  lwc1        $f7, 0x18($s3)
    ctx->pc = 0x436b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_436b80:
    // 0x436b80: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x436b80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_436b84:
    // 0x436b84: 0xc6660014  lwc1        $f6, 0x14($s3)
    ctx->pc = 0x436b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_436b88:
    // 0x436b88: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x436b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_436b8c:
    // 0x436b8c: 0xc6650010  lwc1        $f5, 0x10($s3)
    ctx->pc = 0x436b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_436b90:
    // 0x436b90: 0x34460180  ori         $a2, $v0, 0x180
    ctx->pc = 0x436b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_436b94:
    // 0x436b94: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x436b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_436b98:
    // 0x436b98: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x436b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_436b9c:
    // 0x436b9c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x436b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436ba0:
    // 0x436ba0: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x436ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_436ba4:
    // 0x436ba4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x436ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436ba8:
    // 0x436ba8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x436ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_436bac:
    // 0x436bac: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x436bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_436bb0:
    // 0x436bb0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x436bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_436bb4:
    // 0x436bb4: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x436bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_436bb8:
    // 0x436bb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x436bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436bbc:
    // 0x436bbc: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x436bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_436bc0:
    // 0x436bc0: 0xa3a50180  sb          $a1, 0x180($sp)
    ctx->pc = 0x436bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 5));
label_436bc4:
    // 0x436bc4: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x436bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_436bc8:
    // 0x436bc8: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x436bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
label_436bcc:
    // 0x436bcc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x436bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436bd0:
    // 0x436bd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x436bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_436bd4:
    // 0x436bd4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x436bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436bd8:
    // 0x436bd8: 0xafa40164  sw          $a0, 0x164($sp)
    ctx->pc = 0x436bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 4));
label_436bdc:
    // 0x436bdc: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x436bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_436be0:
    // 0x436be0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x436be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_436be4:
    // 0x436be4: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x436be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_436be8:
    // 0x436be8: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x436be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_436bec:
    // 0x436bec: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x436becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_436bf0:
    // 0x436bf0: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x436bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_436bf4:
    // 0x436bf4: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x436bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_436bf8:
    // 0x436bf8: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x436bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
label_436bfc:
    // 0x436bfc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x436bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436c00:
    // 0x436c00: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x436c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
label_436c04:
    // 0x436c04: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x436c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436c08:
    // 0x436c08: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x436c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_436c0c:
    // 0x436c0c: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x436c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_436c10:
    // 0x436c10: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x436c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_436c14:
    // 0x436c14: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x436c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_436c18:
    // 0x436c18: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x436c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_436c1c:
    // 0x436c1c: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x436c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_436c20:
    // 0x436c20: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x436c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436c24:
    // 0x436c24: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x436c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436c28:
    // 0x436c28: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x436c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_436c2c:
    // 0x436c2c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x436c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_436c30:
    // 0x436c30: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x436c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_436c34:
    // 0x436c34: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x436c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_436c38:
    // 0x436c38: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x436c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_436c3c:
    // 0x436c3c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x436c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_436c40:
    // 0x436c40: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x436c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436c44:
    // 0x436c44: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x436c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436c48:
    // 0x436c48: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x436c48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_436c4c:
    // 0x436c4c: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x436c4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_436c50:
    // 0x436c50: 0xe7a700e8  swc1        $f7, 0xE8($sp)
    ctx->pc = 0x436c50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_436c54:
    // 0x436c54: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x436c54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_436c58:
    // 0x436c58: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x436c58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_436c5c:
    // 0x436c5c: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x436c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_436c60:
    // 0x436c60: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x436c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_436c64:
    // 0x436c64: 0xc0a7a88  jal         func_29EA20
label_436c68:
    if (ctx->pc == 0x436C68u) {
        ctx->pc = 0x436C68u;
            // 0x436c68: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x436C6Cu;
        goto label_436c6c;
    }
    ctx->pc = 0x436C64u;
    SET_GPR_U32(ctx, 31, 0x436C6Cu);
    ctx->pc = 0x436C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436C64u;
            // 0x436c68: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436C6Cu; }
        if (ctx->pc != 0x436C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436C6Cu; }
        if (ctx->pc != 0x436C6Cu) { return; }
    }
    ctx->pc = 0x436C6Cu;
label_436c6c:
    // 0x436c6c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x436c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_436c70:
    // 0x436c70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x436c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_436c74:
    // 0x436c74: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_436c78:
    if (ctx->pc == 0x436C78u) {
        ctx->pc = 0x436C78u;
            // 0x436c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x436C7Cu;
        goto label_436c7c;
    }
    ctx->pc = 0x436C74u;
    {
        const bool branch_taken_0x436c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x436C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436C74u;
            // 0x436c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436c74) {
            ctx->pc = 0x436CC4u;
            goto label_436cc4;
        }
    }
    ctx->pc = 0x436C7Cu;
label_436c7c:
    // 0x436c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x436c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_436c80:
    // 0x436c80: 0xc088ef4  jal         func_223BD0
label_436c84:
    if (ctx->pc == 0x436C84u) {
        ctx->pc = 0x436C84u;
            // 0x436c84: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x436C88u;
        goto label_436c88;
    }
    ctx->pc = 0x436C80u;
    SET_GPR_U32(ctx, 31, 0x436C88u);
    ctx->pc = 0x436C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436C80u;
            // 0x436c84: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436C88u; }
        if (ctx->pc != 0x436C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436C88u; }
        if (ctx->pc != 0x436C88u) { return; }
    }
    ctx->pc = 0x436C88u;
label_436c88:
    // 0x436c88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x436c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_436c8c:
    // 0x436c8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x436c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_436c90:
    // 0x436c90: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x436c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_436c94:
    // 0x436c94: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x436c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_436c98:
    // 0x436c98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x436c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_436c9c:
    // 0x436c9c: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x436c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_436ca0:
    // 0x436ca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x436ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_436ca4:
    // 0x436ca4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x436ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_436ca8:
    // 0x436ca8: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x436ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_436cac:
    // 0x436cac: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x436cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_436cb0:
    // 0x436cb0: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x436cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_436cb4:
    // 0x436cb4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x436cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_436cb8:
    // 0x436cb8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x436cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_436cbc:
    // 0x436cbc: 0xc088b38  jal         func_222CE0
label_436cc0:
    if (ctx->pc == 0x436CC0u) {
        ctx->pc = 0x436CC0u;
            // 0x436cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436CC4u;
        goto label_436cc4;
    }
    ctx->pc = 0x436CBCu;
    SET_GPR_U32(ctx, 31, 0x436CC4u);
    ctx->pc = 0x436CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436CBCu;
            // 0x436cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436CC4u; }
        if (ctx->pc != 0x436CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436CC4u; }
        if (ctx->pc != 0x436CC4u) { return; }
    }
    ctx->pc = 0x436CC4u;
label_436cc4:
    // 0x436cc4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x436cc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_436cc8:
    // 0x436cc8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_436ccc:
    if (ctx->pc == 0x436CCCu) {
        ctx->pc = 0x436CCCu;
            // 0x436ccc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x436CD0u;
        goto label_436cd0;
    }
    ctx->pc = 0x436CC8u;
    {
        const bool branch_taken_0x436cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x436cc8) {
            ctx->pc = 0x436CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436CC8u;
            // 0x436ccc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436D0Cu;
            goto label_436d0c;
        }
    }
    ctx->pc = 0x436CD0u;
label_436cd0:
    // 0x436cd0: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x436cd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_436cd4:
    // 0x436cd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x436cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_436cd8:
    // 0x436cd8: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x436cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_436cdc:
    // 0x436cdc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x436cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_436ce0:
    // 0x436ce0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x436ce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_436ce4:
    // 0x436ce4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_436ce8:
    if (ctx->pc == 0x436CE8u) {
        ctx->pc = 0x436CECu;
        goto label_436cec;
    }
    ctx->pc = 0x436CE4u;
    {
        const bool branch_taken_0x436ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436ce4) {
            ctx->pc = 0x436D08u;
            goto label_436d08;
        }
    }
    ctx->pc = 0x436CECu;
label_436cec:
    // 0x436cec: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_436cf0:
    if (ctx->pc == 0x436CF0u) {
        ctx->pc = 0x436CF4u;
        goto label_436cf4;
    }
    ctx->pc = 0x436CECu;
    {
        const bool branch_taken_0x436cec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x436cec) {
            ctx->pc = 0x436D08u;
            goto label_436d08;
        }
    }
    ctx->pc = 0x436CF4u;
label_436cf4:
    // 0x436cf4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x436cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_436cf8:
    // 0x436cf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x436cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_436cfc:
    // 0x436cfc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x436cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_436d00:
    // 0x436d00: 0x320f809  jalr        $t9
label_436d04:
    if (ctx->pc == 0x436D04u) {
        ctx->pc = 0x436D04u;
            // 0x436d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x436D08u;
        goto label_436d08;
    }
    ctx->pc = 0x436D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x436D08u);
        ctx->pc = 0x436D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436D00u;
            // 0x436d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x436D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x436D08u; }
            if (ctx->pc != 0x436D08u) { return; }
        }
        }
    }
    ctx->pc = 0x436D08u;
label_436d08:
    // 0x436d08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x436d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_436d0c:
    // 0x436d0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x436d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_436d10:
    // 0x436d10: 0xc08c164  jal         func_230590
label_436d14:
    if (ctx->pc == 0x436D14u) {
        ctx->pc = 0x436D14u;
            // 0x436d14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x436D18u;
        goto label_436d18;
    }
    ctx->pc = 0x436D10u;
    SET_GPR_U32(ctx, 31, 0x436D18u);
    ctx->pc = 0x436D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436D10u;
            // 0x436d14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436D18u; }
        if (ctx->pc != 0x436D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436D18u; }
        if (ctx->pc != 0x436D18u) { return; }
    }
    ctx->pc = 0x436D18u;
label_436d18:
    // 0x436d18: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x436d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_436d1c:
    // 0x436d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x436d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_436d20:
    // 0x436d20: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x436d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_436d24:
    // 0x436d24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x436d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_436d28:
    // 0x436d28: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x436d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_436d2c:
    // 0x436d2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x436d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436d30:
    // 0x436d30: 0xc08914c  jal         func_224530
label_436d34:
    if (ctx->pc == 0x436D34u) {
        ctx->pc = 0x436D34u;
            // 0x436d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436D38u;
        goto label_436d38;
    }
    ctx->pc = 0x436D30u;
    SET_GPR_U32(ctx, 31, 0x436D38u);
    ctx->pc = 0x436D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436D30u;
            // 0x436d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436D38u; }
        if (ctx->pc != 0x436D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436D38u; }
        if (ctx->pc != 0x436D38u) { return; }
    }
    ctx->pc = 0x436D38u;
label_436d38:
    // 0x436d38: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x436d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_436d3c:
    // 0x436d3c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x436d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_436d40:
    // 0x436d40: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x436d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_436d44:
    // 0x436d44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x436d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_436d48:
    // 0x436d48: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x436d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_436d4c:
    // 0x436d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x436d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_436d50:
    // 0x436d50: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x436d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_436d54:
    // 0x436d54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x436d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_436d58:
    // 0x436d58: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x436d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_436d5c:
    // 0x436d5c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x436d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_436d60:
    // 0x436d60: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x436d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436d64:
    // 0x436d64: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x436d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436d68:
    // 0x436d68: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x436d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_436d6c:
    // 0x436d6c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x436d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_436d70:
    // 0x436d70: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x436d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_436d74:
    // 0x436d74: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x436d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_436d78:
    // 0x436d78: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x436d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_436d7c:
    // 0x436d7c: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x436d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_436d80:
    // 0x436d80: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x436d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_436d84:
    // 0x436d84: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x436d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_436d88:
    // 0x436d88: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x436d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_436d8c:
    // 0x436d8c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x436d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_436d90:
    // 0x436d90: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x436d90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_436d94:
    // 0x436d94: 0xc0892b0  jal         func_224AC0
label_436d98:
    if (ctx->pc == 0x436D98u) {
        ctx->pc = 0x436D98u;
            // 0x436d98: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x436D9Cu;
        goto label_436d9c;
    }
    ctx->pc = 0x436D94u;
    SET_GPR_U32(ctx, 31, 0x436D9Cu);
    ctx->pc = 0x436D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436D94u;
            // 0x436d98: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436D9Cu; }
        if (ctx->pc != 0x436D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436D9Cu; }
        if (ctx->pc != 0x436D9Cu) { return; }
    }
    ctx->pc = 0x436D9Cu;
label_436d9c:
    // 0x436d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x436d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_436da0:
    // 0x436da0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x436da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_436da4:
    // 0x436da4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x436da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_436da8:
    // 0x436da8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x436da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_436dac:
    // 0x436dac: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x436dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_436db0:
    // 0x436db0: 0xc0891d8  jal         func_224760
label_436db4:
    if (ctx->pc == 0x436DB4u) {
        ctx->pc = 0x436DB4u;
            // 0x436db4: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x436DB8u;
        goto label_436db8;
    }
    ctx->pc = 0x436DB0u;
    SET_GPR_U32(ctx, 31, 0x436DB8u);
    ctx->pc = 0x436DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436DB0u;
            // 0x436db4: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436DB8u; }
        if (ctx->pc != 0x436DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436DB8u; }
        if (ctx->pc != 0x436DB8u) { return; }
    }
    ctx->pc = 0x436DB8u;
label_436db8:
    // 0x436db8: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x436db8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
label_436dbc:
    // 0x436dbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x436dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_436dc0:
    // 0x436dc0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x436dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_436dc4:
    // 0x436dc4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x436dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_436dc8:
    // 0x436dc8: 0xc0a7a88  jal         func_29EA20
label_436dcc:
    if (ctx->pc == 0x436DCCu) {
        ctx->pc = 0x436DCCu;
            // 0x436dcc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x436DD0u;
        goto label_436dd0;
    }
    ctx->pc = 0x436DC8u;
    SET_GPR_U32(ctx, 31, 0x436DD0u);
    ctx->pc = 0x436DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436DC8u;
            // 0x436dcc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436DD0u; }
        if (ctx->pc != 0x436DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436DD0u; }
        if (ctx->pc != 0x436DD0u) { return; }
    }
    ctx->pc = 0x436DD0u;
label_436dd0:
    // 0x436dd0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x436dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_436dd4:
    // 0x436dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x436dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_436dd8:
    // 0x436dd8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_436ddc:
    if (ctx->pc == 0x436DDCu) {
        ctx->pc = 0x436DDCu;
            // 0x436ddc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x436DE0u;
        goto label_436de0;
    }
    ctx->pc = 0x436DD8u;
    {
        const bool branch_taken_0x436dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x436DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436DD8u;
            // 0x436ddc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436dd8) {
            ctx->pc = 0x436DFCu;
            goto label_436dfc;
        }
    }
    ctx->pc = 0x436DE0u;
label_436de0:
    // 0x436de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x436de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_436de4:
    // 0x436de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x436de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_436de8:
    // 0x436de8: 0xc0869d0  jal         func_21A740
label_436dec:
    if (ctx->pc == 0x436DECu) {
        ctx->pc = 0x436DECu;
            // 0x436dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436DF0u;
        goto label_436df0;
    }
    ctx->pc = 0x436DE8u;
    SET_GPR_U32(ctx, 31, 0x436DF0u);
    ctx->pc = 0x436DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436DE8u;
            // 0x436dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436DF0u; }
        if (ctx->pc != 0x436DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436DF0u; }
        if (ctx->pc != 0x436DF0u) { return; }
    }
    ctx->pc = 0x436DF0u;
label_436df0:
    // 0x436df0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x436df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_436df4:
    // 0x436df4: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x436df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_436df8:
    // 0x436df8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x436df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_436dfc:
    // 0x436dfc: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x436dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_436e00:
    // 0x436e00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x436e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_436e04:
    // 0x436e04: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x436e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_436e08:
    // 0x436e08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x436e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_436e0c:
    // 0x436e0c: 0xc08c650  jal         func_231940
label_436e10:
    if (ctx->pc == 0x436E10u) {
        ctx->pc = 0x436E10u;
            // 0x436e10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436E14u;
        goto label_436e14;
    }
    ctx->pc = 0x436E0Cu;
    SET_GPR_U32(ctx, 31, 0x436E14u);
    ctx->pc = 0x436E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436E0Cu;
            // 0x436e10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436E14u; }
        if (ctx->pc != 0x436E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436E14u; }
        if (ctx->pc != 0x436E14u) { return; }
    }
    ctx->pc = 0x436E14u;
label_436e14:
    // 0x436e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x436e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436e18:
    // 0x436e18: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x436e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_436e1c:
    // 0x436e1c: 0xae63008c  sw          $v1, 0x8C($s3)
    ctx->pc = 0x436e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
label_436e20:
    // 0x436e20: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x436e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_436e24:
    // 0x436e24: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x436e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_436e28:
    // 0x436e28: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x436e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_436e2c:
    // 0x436e2c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x436e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_436e30:
    // 0x436e30: 0xae630078  sw          $v1, 0x78($s3)
    ctx->pc = 0x436e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 3));
label_436e34:
    // 0x436e34: 0xc040180  jal         func_100600
label_436e38:
    if (ctx->pc == 0x436E38u) {
        ctx->pc = 0x436E38u;
            // 0x436e38: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x436E3Cu;
        goto label_436e3c;
    }
    ctx->pc = 0x436E34u;
    SET_GPR_U32(ctx, 31, 0x436E3Cu);
    ctx->pc = 0x436E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436E34u;
            // 0x436e38: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436E3Cu; }
        if (ctx->pc != 0x436E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436E3Cu; }
        if (ctx->pc != 0x436E3Cu) { return; }
    }
    ctx->pc = 0x436E3Cu;
label_436e3c:
    // 0x436e3c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_436e40:
    if (ctx->pc == 0x436E40u) {
        ctx->pc = 0x436E40u;
            // 0x436e40: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x436E44u;
        goto label_436e44;
    }
    ctx->pc = 0x436E3Cu;
    {
        const bool branch_taken_0x436e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x436e3c) {
            ctx->pc = 0x436E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436E3Cu;
            // 0x436e40: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436E8Cu;
            goto label_436e8c;
        }
    }
    ctx->pc = 0x436E44u;
label_436e44:
    // 0x436e44: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x436e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_436e48:
    // 0x436e48: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x436e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_436e4c:
    // 0x436e4c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x436e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_436e50:
    // 0x436e50: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x436e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_436e54:
    // 0x436e54: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x436e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_436e58:
    // 0x436e58: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x436e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_436e5c:
    // 0x436e5c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x436e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_436e60:
    // 0x436e60: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x436e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_436e64:
    // 0x436e64: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x436e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_436e68:
    // 0x436e68: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x436e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_436e6c:
    // 0x436e6c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x436e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_436e70:
    // 0x436e70: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x436e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_436e74:
    // 0x436e74: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x436e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_436e78:
    // 0x436e78: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x436e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_436e7c:
    // 0x436e7c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x436e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_436e80:
    // 0x436e80: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x436e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_436e84:
    // 0x436e84: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x436e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_436e88:
    // 0x436e88: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x436e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
label_436e8c:
    // 0x436e8c: 0x2406f9fb  addiu       $a2, $zero, -0x605
    ctx->pc = 0x436e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_436e90:
    // 0x436e90: 0x8e6700b0  lw          $a3, 0xB0($s3)
    ctx->pc = 0x436e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_436e94:
    // 0x436e94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x436e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_436e98:
    // 0x436e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x436e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436e9c:
    // 0x436e9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x436e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_436ea0:
    // 0x436ea0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x436ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_436ea4:
    // 0x436ea4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x436ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_436ea8:
    // 0x436ea8: 0x34c60604  ori         $a2, $a2, 0x604
    ctx->pc = 0x436ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1540);
label_436eac:
    // 0x436eac: 0xae6600b0  sw          $a2, 0xB0($s3)
    ctx->pc = 0x436eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 6));
label_436eb0:
    // 0x436eb0: 0xa2600064  sb          $zero, 0x64($s3)
    ctx->pc = 0x436eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 0));
label_436eb4:
    // 0x436eb4: 0xa2600065  sb          $zero, 0x65($s3)
    ctx->pc = 0x436eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 101), (uint8_t)GPR_U32(ctx, 0));
label_436eb8:
    // 0x436eb8: 0xa2650066  sb          $a1, 0x66($s3)
    ctx->pc = 0x436eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 102), (uint8_t)GPR_U32(ctx, 5));
label_436ebc:
    // 0x436ebc: 0xa2630067  sb          $v1, 0x67($s3)
    ctx->pc = 0x436ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 103), (uint8_t)GPR_U32(ctx, 3));
label_436ec0:
    // 0x436ec0: 0xa2620068  sb          $v0, 0x68($s3)
    ctx->pc = 0x436ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 2));
label_436ec4:
    // 0x436ec4: 0xc040180  jal         func_100600
label_436ec8:
    if (ctx->pc == 0x436EC8u) {
        ctx->pc = 0x436EC8u;
            // 0x436ec8: 0xa2630069  sb          $v1, 0x69($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x436ECCu;
        goto label_436ecc;
    }
    ctx->pc = 0x436EC4u;
    SET_GPR_U32(ctx, 31, 0x436ECCu);
    ctx->pc = 0x436EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436EC4u;
            // 0x436ec8: 0xa2630069  sb          $v1, 0x69($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436ECCu; }
        if (ctx->pc != 0x436ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436ECCu; }
        if (ctx->pc != 0x436ECCu) { return; }
    }
    ctx->pc = 0x436ECCu;
label_436ecc:
    // 0x436ecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x436eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_436ed0:
    // 0x436ed0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_436ed4:
    if (ctx->pc == 0x436ED4u) {
        ctx->pc = 0x436ED4u;
            // 0x436ed4: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x436ED8u;
        goto label_436ed8;
    }
    ctx->pc = 0x436ED0u;
    {
        const bool branch_taken_0x436ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x436ed0) {
            ctx->pc = 0x436ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436ED0u;
            // 0x436ed4: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436F10u;
            goto label_436f10;
        }
    }
    ctx->pc = 0x436ED8u;
label_436ed8:
    // 0x436ed8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x436ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_436edc:
    // 0x436edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x436edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_436ee0:
    // 0x436ee0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x436ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_436ee4:
    // 0x436ee4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x436ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_436ee8:
    // 0x436ee8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x436ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_436eec:
    // 0x436eec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x436eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_436ef0:
    // 0x436ef0: 0xc040138  jal         func_1004E0
label_436ef4:
    if (ctx->pc == 0x436EF4u) {
        ctx->pc = 0x436EF4u;
            // 0x436ef4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x436EF8u;
        goto label_436ef8;
    }
    ctx->pc = 0x436EF0u;
    SET_GPR_U32(ctx, 31, 0x436EF8u);
    ctx->pc = 0x436EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436EF0u;
            // 0x436ef4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436EF8u; }
        if (ctx->pc != 0x436EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436EF8u; }
        if (ctx->pc != 0x436EF8u) { return; }
    }
    ctx->pc = 0x436EF8u;
label_436ef8:
    // 0x436ef8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x436ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_436efc:
    // 0x436efc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x436efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_436f00:
    // 0x436f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x436f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_436f04:
    // 0x436f04: 0xc04a576  jal         func_1295D8
label_436f08:
    if (ctx->pc == 0x436F08u) {
        ctx->pc = 0x436F08u;
            // 0x436f08: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x436F0Cu;
        goto label_436f0c;
    }
    ctx->pc = 0x436F04u;
    SET_GPR_U32(ctx, 31, 0x436F0Cu);
    ctx->pc = 0x436F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436F04u;
            // 0x436f08: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F0Cu; }
        if (ctx->pc != 0x436F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F0Cu; }
        if (ctx->pc != 0x436F0Cu) { return; }
    }
    ctx->pc = 0x436F0Cu;
label_436f0c:
    // 0x436f0c: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x436f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_436f10:
    // 0x436f10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x436f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_436f14:
    // 0x436f14: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x436f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_436f18:
    // 0x436f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x436f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_436f1c:
    // 0x436f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x436f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_436f20:
    // 0x436f20: 0x240613ae  addiu       $a2, $zero, 0x13AE
    ctx->pc = 0x436f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5038));
label_436f24:
    // 0x436f24: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x436f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_436f28:
    // 0x436f28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x436f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_436f2c:
    // 0x436f2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x436f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_436f30:
    // 0x436f30: 0xc122cd8  jal         func_48B360
label_436f34:
    if (ctx->pc == 0x436F34u) {
        ctx->pc = 0x436F34u;
            // 0x436f34: 0xae7000e0  sw          $s0, 0xE0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 16));
        ctx->pc = 0x436F38u;
        goto label_436f38;
    }
    ctx->pc = 0x436F30u;
    SET_GPR_U32(ctx, 31, 0x436F38u);
    ctx->pc = 0x436F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436F30u;
            // 0x436f34: 0xae7000e0  sw          $s0, 0xE0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F38u; }
        if (ctx->pc != 0x436F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F38u; }
        if (ctx->pc != 0x436F38u) { return; }
    }
    ctx->pc = 0x436F38u;
label_436f38:
    // 0x436f38: 0x3c0245c8  lui         $v0, 0x45C8
    ctx->pc = 0x436f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
label_436f3c:
    // 0x436f3c: 0x8e6400e0  lw          $a0, 0xE0($s3)
    ctx->pc = 0x436f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_436f40:
    // 0x436f40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x436f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_436f44:
    // 0x436f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x436f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436f48:
    // 0x436f48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x436f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_436f4c:
    // 0x436f4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x436f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_436f50:
    // 0x436f50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x436f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_436f54:
    // 0x436f54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x436f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_436f58:
    // 0x436f58: 0xc122cd8  jal         func_48B360
label_436f5c:
    if (ctx->pc == 0x436F5Cu) {
        ctx->pc = 0x436F5Cu;
            // 0x436f5c: 0x344613ae  ori         $a2, $v0, 0x13AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5038);
        ctx->pc = 0x436F60u;
        goto label_436f60;
    }
    ctx->pc = 0x436F58u;
    SET_GPR_U32(ctx, 31, 0x436F60u);
    ctx->pc = 0x436F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436F58u;
            // 0x436f5c: 0x344613ae  ori         $a2, $v0, 0x13AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5038);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F60u; }
        if (ctx->pc != 0x436F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F60u; }
        if (ctx->pc != 0x436F60u) { return; }
    }
    ctx->pc = 0x436F60u;
label_436f60:
    // 0x436f60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x436f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_436f64:
    // 0x436f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x436f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_436f68:
    // 0x436f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x436f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_436f6c:
    // 0x436f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x436f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_436f70:
    // 0x436f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x436f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_436f74:
    // 0x436f74: 0x3e00008  jr          $ra
label_436f78:
    if (ctx->pc == 0x436F78u) {
        ctx->pc = 0x436F78u;
            // 0x436f78: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x436F7Cu;
        goto label_436f7c;
    }
    ctx->pc = 0x436F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436F74u;
            // 0x436f78: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436F7Cu;
label_436f7c:
    // 0x436f7c: 0x0  nop
    ctx->pc = 0x436f7cu;
    // NOP
label_436f80:
    // 0x436f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x436f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_436f84:
    // 0x436f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x436f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_436f88:
    // 0x436f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x436f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_436f8c:
    // 0x436f8c: 0xc0aeebc  jal         func_2BBAF0
label_436f90:
    if (ctx->pc == 0x436F90u) {
        ctx->pc = 0x436F90u;
            // 0x436f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436F94u;
        goto label_436f94;
    }
    ctx->pc = 0x436F8Cu;
    SET_GPR_U32(ctx, 31, 0x436F94u);
    ctx->pc = 0x436F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436F8Cu;
            // 0x436f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F94u; }
        if (ctx->pc != 0x436F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F94u; }
        if (ctx->pc != 0x436F94u) { return; }
    }
    ctx->pc = 0x436F94u;
label_436f94:
    // 0x436f94: 0xc0aeeb4  jal         func_2BBAD0
label_436f98:
    if (ctx->pc == 0x436F98u) {
        ctx->pc = 0x436F98u;
            // 0x436f98: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x436F9Cu;
        goto label_436f9c;
    }
    ctx->pc = 0x436F94u;
    SET_GPR_U32(ctx, 31, 0x436F9Cu);
    ctx->pc = 0x436F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436F94u;
            // 0x436f98: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F9Cu; }
        if (ctx->pc != 0x436F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436F9Cu; }
        if (ctx->pc != 0x436F9Cu) { return; }
    }
    ctx->pc = 0x436F9Cu;
label_436f9c:
    // 0x436f9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x436f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_436fa0:
    // 0x436fa0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x436fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_436fa4:
    // 0x436fa4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x436fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_436fa8:
    // 0x436fa8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x436fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_436fac:
    // 0x436fac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x436facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_436fb0:
    // 0x436fb0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x436fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_436fb4:
    // 0x436fb4: 0xc0aeea4  jal         func_2BBA90
label_436fb8:
    if (ctx->pc == 0x436FB8u) {
        ctx->pc = 0x436FB8u;
            // 0x436fb8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x436FBCu;
        goto label_436fbc;
    }
    ctx->pc = 0x436FB4u;
    SET_GPR_U32(ctx, 31, 0x436FBCu);
    ctx->pc = 0x436FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436FB4u;
            // 0x436fb8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436FBCu; }
        if (ctx->pc != 0x436FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436FBCu; }
        if (ctx->pc != 0x436FBCu) { return; }
    }
    ctx->pc = 0x436FBCu;
label_436fbc:
    // 0x436fbc: 0xc0aee8c  jal         func_2BBA30
label_436fc0:
    if (ctx->pc == 0x436FC0u) {
        ctx->pc = 0x436FC0u;
            // 0x436fc0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x436FC4u;
        goto label_436fc4;
    }
    ctx->pc = 0x436FBCu;
    SET_GPR_U32(ctx, 31, 0x436FC4u);
    ctx->pc = 0x436FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436FBCu;
            // 0x436fc0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436FC4u; }
        if (ctx->pc != 0x436FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436FC4u; }
        if (ctx->pc != 0x436FC4u) { return; }
    }
    ctx->pc = 0x436FC4u;
label_436fc4:
    // 0x436fc4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x436fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_436fc8:
    // 0x436fc8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x436fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_436fcc:
    // 0x436fcc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x436fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_436fd0:
    // 0x436fd0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x436fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_436fd4:
    // 0x436fd4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x436fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_436fd8:
    // 0x436fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x436fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436fdc:
    // 0x436fdc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x436fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_436fe0:
    // 0x436fe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x436fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_436fe4:
    // 0x436fe4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x436fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_436fe8:
    // 0x436fe8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x436fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_436fec:
    // 0x436fec: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x436fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_436ff0:
    // 0x436ff0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x436ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_436ff4:
    // 0x436ff4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x436ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_436ff8:
    // 0x436ff8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x436ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_436ffc:
    // 0x436ffc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x436ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_437000:
    // 0x437000: 0xc0775b8  jal         func_1DD6E0
label_437004:
    if (ctx->pc == 0x437004u) {
        ctx->pc = 0x437004u;
            // 0x437004: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x437008u;
        goto label_437008;
    }
    ctx->pc = 0x437000u;
    SET_GPR_U32(ctx, 31, 0x437008u);
    ctx->pc = 0x437004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437000u;
            // 0x437004: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437008u; }
        if (ctx->pc != 0x437008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437008u; }
        if (ctx->pc != 0x437008u) { return; }
    }
    ctx->pc = 0x437008u;
label_437008:
    // 0x437008: 0xc077314  jal         func_1DCC50
label_43700c:
    if (ctx->pc == 0x43700Cu) {
        ctx->pc = 0x43700Cu;
            // 0x43700c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x437010u;
        goto label_437010;
    }
    ctx->pc = 0x437008u;
    SET_GPR_U32(ctx, 31, 0x437010u);
    ctx->pc = 0x43700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437008u;
            // 0x43700c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437010u; }
        if (ctx->pc != 0x437010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437010u; }
        if (ctx->pc != 0x437010u) { return; }
    }
    ctx->pc = 0x437010u;
label_437010:
    // 0x437010: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x437010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_437014:
    // 0x437014: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x437014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_437018:
    // 0x437018: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x437018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_43701c:
    // 0x43701c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x43701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_437020:
    // 0x437020: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x437020u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_437024:
    // 0x437024: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x437024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_437028:
    // 0x437028: 0x2463cc50  addiu       $v1, $v1, -0x33B0
    ctx->pc = 0x437028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954064));
label_43702c:
    // 0x43702c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x43702cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_437030:
    // 0x437030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x437030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_437034:
    // 0x437034: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x437034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
label_437038:
    // 0x437038: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x437038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_43703c:
    // 0x43703c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43703cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_437040:
    // 0x437040: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x437040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_437044:
    // 0x437044: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x437044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_437048:
    // 0x437048: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x437048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43704c:
    // 0x43704c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x43704cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_437050:
    // 0x437050: 0x320f809  jalr        $t9
label_437054:
    if (ctx->pc == 0x437054u) {
        ctx->pc = 0x437054u;
            // 0x437054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437058u;
        goto label_437058;
    }
    ctx->pc = 0x437050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x437058u);
        ctx->pc = 0x437054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437050u;
            // 0x437054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x437058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x437058u; }
            if (ctx->pc != 0x437058u) { return; }
        }
        }
    }
    ctx->pc = 0x437058u;
label_437058:
    // 0x437058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x437058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43705c:
    // 0x43705c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43705cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_437060:
    // 0x437060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x437060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_437064:
    // 0x437064: 0x3e00008  jr          $ra
label_437068:
    if (ctx->pc == 0x437068u) {
        ctx->pc = 0x437068u;
            // 0x437068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43706Cu;
        goto label_43706c;
    }
    ctx->pc = 0x437064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x437068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437064u;
            // 0x437068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43706Cu;
label_43706c:
    // 0x43706c: 0x0  nop
    ctx->pc = 0x43706cu;
    // NOP
label_437070:
    // 0x437070: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x437070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_437074:
    // 0x437074: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x437074u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_437078:
    // 0x437078: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x437078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_43707c:
    // 0x43707c: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x43707cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_437080:
    // 0x437080: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x437080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_437084:
    // 0x437084: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x437084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_437088:
    // 0x437088: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x437088u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_43708c:
    // 0x43708c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x43708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_437090:
    // 0x437090: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x437090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_437094:
    // 0x437094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x437094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_437098:
    // 0x437098: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x437098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_43709c:
    // 0x43709c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43709cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4370a0:
    // 0x4370a0: 0x3e00008  jr          $ra
label_4370a4:
    if (ctx->pc == 0x4370A4u) {
        ctx->pc = 0x4370A4u;
            // 0x4370a4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x4370A8u;
        goto label_4370a8;
    }
    ctx->pc = 0x4370A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4370A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4370A0u;
            // 0x4370a4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4370A8u;
label_4370a8:
    // 0x4370a8: 0x0  nop
    ctx->pc = 0x4370a8u;
    // NOP
label_4370ac:
    // 0x4370ac: 0x0  nop
    ctx->pc = 0x4370acu;
    // NOP
label_4370b0:
    // 0x4370b0: 0x3e00008  jr          $ra
label_4370b4:
    if (ctx->pc == 0x4370B4u) {
        ctx->pc = 0x4370B4u;
            // 0x4370b4: 0x24024e2a  addiu       $v0, $zero, 0x4E2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20010));
        ctx->pc = 0x4370B8u;
        goto label_4370b8;
    }
    ctx->pc = 0x4370B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4370B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4370B0u;
            // 0x4370b4: 0x24024e2a  addiu       $v0, $zero, 0x4E2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4370B8u;
label_4370b8:
    // 0x4370b8: 0x0  nop
    ctx->pc = 0x4370b8u;
    // NOP
label_4370bc:
    // 0x4370bc: 0x0  nop
    ctx->pc = 0x4370bcu;
    // NOP
label_4370c0:
    // 0x4370c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4370c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4370c4:
    // 0x4370c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4370c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4370c8:
    // 0x4370c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4370c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4370cc:
    // 0x4370cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4370ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4370d0:
    // 0x4370d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4370d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4370d4:
    // 0x4370d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4370d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4370d8:
    // 0x4370d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4370d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4370dc:
    // 0x4370dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4370dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4370e0:
    // 0x4370e0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4370e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4370e4:
    // 0x4370e4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4370e8:
    if (ctx->pc == 0x4370E8u) {
        ctx->pc = 0x4370E8u;
            // 0x4370e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4370ECu;
        goto label_4370ec;
    }
    ctx->pc = 0x4370E4u;
    {
        const bool branch_taken_0x4370e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4370E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4370E4u;
            // 0x4370e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4370e4) {
            ctx->pc = 0x437128u;
            goto label_437128;
        }
    }
    ctx->pc = 0x4370ECu;
label_4370ec:
    // 0x4370ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4370ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4370f0:
    // 0x4370f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4370f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4370f4:
    // 0x4370f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4370f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4370f8:
    // 0x4370f8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4370f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4370fc:
    // 0x4370fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4370fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_437100:
    // 0x437100: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x437100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_437104:
    // 0x437104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x437104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_437108:
    // 0x437108: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x437108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_43710c:
    // 0x43710c: 0x320f809  jalr        $t9
label_437110:
    if (ctx->pc == 0x437110u) {
        ctx->pc = 0x437114u;
        goto label_437114;
    }
    ctx->pc = 0x43710Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x437114u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x437114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x437114u; }
            if (ctx->pc != 0x437114u) { return; }
        }
        }
    }
    ctx->pc = 0x437114u;
label_437114:
    // 0x437114: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x437114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_437118:
    // 0x437118: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x437118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43711c:
    // 0x43711c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x43711cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_437120:
    // 0x437120: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_437124:
    if (ctx->pc == 0x437124u) {
        ctx->pc = 0x437124u;
            // 0x437124: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x437128u;
        goto label_437128;
    }
    ctx->pc = 0x437120u;
    {
        const bool branch_taken_0x437120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437120u;
            // 0x437124: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437120) {
            ctx->pc = 0x4370F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4370f8;
        }
    }
    ctx->pc = 0x437128u;
label_437128:
    // 0x437128: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x437128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43712c:
    // 0x43712c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x43712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_437130:
    // 0x437130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x437130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_437134:
    // 0x437134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x437134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_437138:
    // 0x437138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x437138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43713c:
    // 0x43713c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43713cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_437140:
    // 0x437140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x437140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_437144:
    // 0x437144: 0x3e00008  jr          $ra
label_437148:
    if (ctx->pc == 0x437148u) {
        ctx->pc = 0x437148u;
            // 0x437148: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43714Cu;
        goto label_43714c;
    }
    ctx->pc = 0x437144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x437148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437144u;
            // 0x437148: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43714Cu;
label_43714c:
    // 0x43714c: 0x0  nop
    ctx->pc = 0x43714cu;
    // NOP
label_437150:
    // 0x437150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x437150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_437154:
    // 0x437154: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x437154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437158:
    // 0x437158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x437158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43715c:
    // 0x43715c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x43715cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_437160:
    // 0x437160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x437160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_437164:
    // 0x437164: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x437164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_437168:
    // 0x437168: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x437168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43716c:
    // 0x43716c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x43716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_437170:
    // 0x437170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x437170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_437174:
    // 0x437174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x437174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_437178:
    // 0x437178: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x437178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_43717c:
    // 0x43717c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x43717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437180:
    // 0x437180: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x437180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_437184:
    // 0x437184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x437184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_437188:
    // 0x437188: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x437188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_43718c:
    // 0x43718c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x43718cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_437190:
    // 0x437190: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x437190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_437194:
    // 0x437194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x437194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_437198:
    // 0x437198: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x437198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_43719c:
    // 0x43719c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x43719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4371a0:
    // 0x4371a0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4371a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4371a4:
    // 0x4371a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4371a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4371a8:
    // 0x4371a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4371a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4371ac:
    // 0x4371ac: 0xc0a997c  jal         func_2A65F0
label_4371b0:
    if (ctx->pc == 0x4371B0u) {
        ctx->pc = 0x4371B0u;
            // 0x4371b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4371B4u;
        goto label_4371b4;
    }
    ctx->pc = 0x4371ACu;
    SET_GPR_U32(ctx, 31, 0x4371B4u);
    ctx->pc = 0x4371B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4371ACu;
            // 0x4371b0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4371B4u; }
        if (ctx->pc != 0x4371B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4371B4u; }
        if (ctx->pc != 0x4371B4u) { return; }
    }
    ctx->pc = 0x4371B4u;
label_4371b4:
    // 0x4371b4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4371b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4371b8:
    // 0x4371b8: 0xc0d879c  jal         func_361E70
label_4371bc:
    if (ctx->pc == 0x4371BCu) {
        ctx->pc = 0x4371BCu;
            // 0x4371bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4371C0u;
        goto label_4371c0;
    }
    ctx->pc = 0x4371B8u;
    SET_GPR_U32(ctx, 31, 0x4371C0u);
    ctx->pc = 0x4371BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4371B8u;
            // 0x4371bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4371C0u; }
        if (ctx->pc != 0x4371C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4371C0u; }
        if (ctx->pc != 0x4371C0u) { return; }
    }
    ctx->pc = 0x4371C0u;
label_4371c0:
    // 0x4371c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4371c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4371c4:
    // 0x4371c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4371c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4371c8:
    // 0x4371c8: 0x3e00008  jr          $ra
label_4371cc:
    if (ctx->pc == 0x4371CCu) {
        ctx->pc = 0x4371CCu;
            // 0x4371cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4371D0u;
        goto label_4371d0;
    }
    ctx->pc = 0x4371C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4371CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4371C8u;
            // 0x4371cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4371D0u;
label_4371d0:
    // 0x4371d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4371d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4371d4:
    // 0x4371d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4371d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4371d8:
    // 0x4371d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4371d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4371dc:
    // 0x4371dc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4371dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4371e0:
    // 0x4371e0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4371e4:
    if (ctx->pc == 0x4371E4u) {
        ctx->pc = 0x4371E4u;
            // 0x4371e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4371E8u;
        goto label_4371e8;
    }
    ctx->pc = 0x4371E0u;
    {
        const bool branch_taken_0x4371e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4371E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4371E0u;
            // 0x4371e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4371e0) {
            ctx->pc = 0x437300u;
            goto label_437300;
        }
    }
    ctx->pc = 0x4371E8u;
label_4371e8:
    // 0x4371e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4371e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4371ec:
    // 0x4371ec: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4371ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4371f0:
    // 0x4371f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4371f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4371f4:
    // 0x4371f4: 0xc075128  jal         func_1D44A0
label_4371f8:
    if (ctx->pc == 0x4371F8u) {
        ctx->pc = 0x4371F8u;
            // 0x4371f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4371FCu;
        goto label_4371fc;
    }
    ctx->pc = 0x4371F4u;
    SET_GPR_U32(ctx, 31, 0x4371FCu);
    ctx->pc = 0x4371F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4371F4u;
            // 0x4371f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4371FCu; }
        if (ctx->pc != 0x4371FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4371FCu; }
        if (ctx->pc != 0x4371FCu) { return; }
    }
    ctx->pc = 0x4371FCu;
label_4371fc:
    // 0x4371fc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4371fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_437200:
    // 0x437200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_437204:
    // 0x437204: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x437204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_437208:
    // 0x437208: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x437208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43720c:
    // 0x43720c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43720cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_437210:
    // 0x437210: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_437214:
    if (ctx->pc == 0x437214u) {
        ctx->pc = 0x437214u;
            // 0x437214: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x437218u;
        goto label_437218;
    }
    ctx->pc = 0x437210u;
    {
        const bool branch_taken_0x437210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x437214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437210u;
            // 0x437214: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437210) {
            ctx->pc = 0x437220u;
            goto label_437220;
        }
    }
    ctx->pc = 0x437218u;
label_437218:
    // 0x437218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43721c:
    // 0x43721c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x43721cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_437220:
    // 0x437220: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x437220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_437224:
    // 0x437224: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_437228:
    // 0x437228: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x437228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_43722c:
    // 0x43722c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_437230:
    // 0x437230: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x437230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_437234:
    // 0x437234: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_437238:
    if (ctx->pc == 0x437238u) {
        ctx->pc = 0x437238u;
            // 0x437238: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43723Cu;
        goto label_43723c;
    }
    ctx->pc = 0x437234u;
    {
        const bool branch_taken_0x437234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x437234) {
            ctx->pc = 0x437238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437234u;
            // 0x437238: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437248u;
            goto label_437248;
        }
    }
    ctx->pc = 0x43723Cu;
label_43723c:
    // 0x43723c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_437240:
    // 0x437240: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x437240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_437244:
    // 0x437244: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x437244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_437248:
    // 0x437248: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43724c:
    // 0x43724c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x43724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_437250:
    // 0x437250: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x437250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_437254:
    // 0x437254: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x437254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_437258:
    // 0x437258: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43725c:
    if (ctx->pc == 0x43725Cu) {
        ctx->pc = 0x43725Cu;
            // 0x43725c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x437260u;
        goto label_437260;
    }
    ctx->pc = 0x437258u;
    {
        const bool branch_taken_0x437258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x437258) {
            ctx->pc = 0x43725Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437258u;
            // 0x43725c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43726Cu;
            goto label_43726c;
        }
    }
    ctx->pc = 0x437260u;
label_437260:
    // 0x437260: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x437260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_437264:
    // 0x437264: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x437264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_437268:
    // 0x437268: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x437268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43726c:
    // 0x43726c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43726cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_437270:
    // 0x437270: 0x320f809  jalr        $t9
label_437274:
    if (ctx->pc == 0x437274u) {
        ctx->pc = 0x437274u;
            // 0x437274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437278u;
        goto label_437278;
    }
    ctx->pc = 0x437270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x437278u);
        ctx->pc = 0x437274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437270u;
            // 0x437274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x437278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x437278u; }
            if (ctx->pc != 0x437278u) { return; }
        }
        }
    }
    ctx->pc = 0x437278u;
label_437278:
    // 0x437278: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x437278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43727c:
    // 0x43727c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43727cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_437280:
    // 0x437280: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x437280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_437284:
    // 0x437284: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x437284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_437288:
    // 0x437288: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x437288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43728c:
    // 0x43728c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43728cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_437290:
    // 0x437290: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_437294:
    if (ctx->pc == 0x437294u) {
        ctx->pc = 0x437294u;
            // 0x437294: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x437298u;
        goto label_437298;
    }
    ctx->pc = 0x437290u;
    {
        const bool branch_taken_0x437290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x437290) {
            ctx->pc = 0x437294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437290u;
            // 0x437294: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4372A4u;
            goto label_4372a4;
        }
    }
    ctx->pc = 0x437298u;
label_437298:
    // 0x437298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x437298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43729c:
    // 0x43729c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x43729cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4372a0:
    // 0x4372a0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4372a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4372a4:
    // 0x4372a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4372a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4372a8:
    // 0x4372a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4372a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4372ac:
    // 0x4372ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4372acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4372b0:
    // 0x4372b0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4372b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4372b4:
    // 0x4372b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4372b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4372b8:
    // 0x4372b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4372bc:
    if (ctx->pc == 0x4372BCu) {
        ctx->pc = 0x4372C0u;
        goto label_4372c0;
    }
    ctx->pc = 0x4372B8u;
    {
        const bool branch_taken_0x4372b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4372b8) {
            ctx->pc = 0x4372C8u;
            goto label_4372c8;
        }
    }
    ctx->pc = 0x4372C0u;
label_4372c0:
    // 0x4372c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4372c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4372c4:
    // 0x4372c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4372c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4372c8:
    // 0x4372c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4372c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4372cc:
    // 0x4372cc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4372ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4372d0:
    // 0x4372d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4372d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4372d4:
    // 0x4372d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4372d8:
    if (ctx->pc == 0x4372D8u) {
        ctx->pc = 0x4372DCu;
        goto label_4372dc;
    }
    ctx->pc = 0x4372D4u;
    {
        const bool branch_taken_0x4372d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4372d4) {
            ctx->pc = 0x4372E4u;
            goto label_4372e4;
        }
    }
    ctx->pc = 0x4372DCu;
label_4372dc:
    // 0x4372dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4372dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4372e0:
    // 0x4372e0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4372e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4372e4:
    // 0x4372e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4372e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4372e8:
    // 0x4372e8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4372e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4372ec:
    // 0x4372ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4372ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4372f0:
    // 0x4372f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4372f4:
    if (ctx->pc == 0x4372F4u) {
        ctx->pc = 0x4372F4u;
            // 0x4372f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4372F8u;
        goto label_4372f8;
    }
    ctx->pc = 0x4372F0u;
    {
        const bool branch_taken_0x4372f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4372f0) {
            ctx->pc = 0x4372F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4372F0u;
            // 0x4372f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437304u;
            goto label_437304;
        }
    }
    ctx->pc = 0x4372F8u;
label_4372f8:
    // 0x4372f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4372f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4372fc:
    // 0x4372fc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4372fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_437300:
    // 0x437300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x437300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_437304:
    // 0x437304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x437304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_437308:
    // 0x437308: 0x3e00008  jr          $ra
label_43730c:
    if (ctx->pc == 0x43730Cu) {
        ctx->pc = 0x43730Cu;
            // 0x43730c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x437310u;
        goto label_437310;
    }
    ctx->pc = 0x437308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437308u;
            // 0x43730c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x437310u;
label_437310:
    // 0x437310: 0x810d558  j           func_435560
label_437314:
    if (ctx->pc == 0x437314u) {
        ctx->pc = 0x437314u;
            // 0x437314: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x437318u;
        goto label_437318;
    }
    ctx->pc = 0x437310u;
    ctx->pc = 0x437314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437310u;
            // 0x437314: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435560u;
    {
        auto targetFn = runtime->lookupFunction(0x435560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x437318u;
label_437318:
    // 0x437318: 0x0  nop
    ctx->pc = 0x437318u;
    // NOP
label_43731c:
    // 0x43731c: 0x0  nop
    ctx->pc = 0x43731cu;
    // NOP
label_437320:
    // 0x437320: 0x810d718  j           func_435C60
label_437324:
    if (ctx->pc == 0x437324u) {
        ctx->pc = 0x437324u;
            // 0x437324: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x437328u;
        goto label_437328;
    }
    ctx->pc = 0x437320u;
    ctx->pc = 0x437324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437320u;
            // 0x437324: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435C60u;
    {
        auto targetFn = runtime->lookupFunction(0x435C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x437328u;
label_437328:
    // 0x437328: 0x0  nop
    ctx->pc = 0x437328u;
    // NOP
label_43732c:
    // 0x43732c: 0x0  nop
    ctx->pc = 0x43732cu;
    // NOP
label_437330:
    // 0x437330: 0x810d500  j           func_435400
label_437334:
    if (ctx->pc == 0x437334u) {
        ctx->pc = 0x437334u;
            // 0x437334: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x437338u;
        goto label_437338;
    }
    ctx->pc = 0x437330u;
    ctx->pc = 0x437334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437330u;
            // 0x437334: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435400u;
    if (runtime->hasFunction(0x435400u)) {
        auto targetFn = runtime->lookupFunction(0x435400u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00435400_0x435400(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x437338u;
label_437338:
    // 0x437338: 0x0  nop
    ctx->pc = 0x437338u;
    // NOP
label_43733c:
    // 0x43733c: 0x0  nop
    ctx->pc = 0x43733cu;
    // NOP
label_437340:
    // 0x437340: 0x810d4dc  j           func_435370
label_437344:
    if (ctx->pc == 0x437344u) {
        ctx->pc = 0x437344u;
            // 0x437344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x437348u;
        goto label_437348;
    }
    ctx->pc = 0x437340u;
    ctx->pc = 0x437344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437340u;
            // 0x437344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435370u;
    {
        auto targetFn = runtime->lookupFunction(0x435370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x437348u;
label_437348:
    // 0x437348: 0x0  nop
    ctx->pc = 0x437348u;
    // NOP
label_43734c:
    // 0x43734c: 0x0  nop
    ctx->pc = 0x43734cu;
    // NOP
}
