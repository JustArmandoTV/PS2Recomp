#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002046C0
// Address: 0x2046c0 - 0x205160
void sub_002046C0_0x2046c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002046C0_0x2046c0");
#endif

    switch (ctx->pc) {
        case 0x2046c0u: goto label_2046c0;
        case 0x2046c4u: goto label_2046c4;
        case 0x2046c8u: goto label_2046c8;
        case 0x2046ccu: goto label_2046cc;
        case 0x2046d0u: goto label_2046d0;
        case 0x2046d4u: goto label_2046d4;
        case 0x2046d8u: goto label_2046d8;
        case 0x2046dcu: goto label_2046dc;
        case 0x2046e0u: goto label_2046e0;
        case 0x2046e4u: goto label_2046e4;
        case 0x2046e8u: goto label_2046e8;
        case 0x2046ecu: goto label_2046ec;
        case 0x2046f0u: goto label_2046f0;
        case 0x2046f4u: goto label_2046f4;
        case 0x2046f8u: goto label_2046f8;
        case 0x2046fcu: goto label_2046fc;
        case 0x204700u: goto label_204700;
        case 0x204704u: goto label_204704;
        case 0x204708u: goto label_204708;
        case 0x20470cu: goto label_20470c;
        case 0x204710u: goto label_204710;
        case 0x204714u: goto label_204714;
        case 0x204718u: goto label_204718;
        case 0x20471cu: goto label_20471c;
        case 0x204720u: goto label_204720;
        case 0x204724u: goto label_204724;
        case 0x204728u: goto label_204728;
        case 0x20472cu: goto label_20472c;
        case 0x204730u: goto label_204730;
        case 0x204734u: goto label_204734;
        case 0x204738u: goto label_204738;
        case 0x20473cu: goto label_20473c;
        case 0x204740u: goto label_204740;
        case 0x204744u: goto label_204744;
        case 0x204748u: goto label_204748;
        case 0x20474cu: goto label_20474c;
        case 0x204750u: goto label_204750;
        case 0x204754u: goto label_204754;
        case 0x204758u: goto label_204758;
        case 0x20475cu: goto label_20475c;
        case 0x204760u: goto label_204760;
        case 0x204764u: goto label_204764;
        case 0x204768u: goto label_204768;
        case 0x20476cu: goto label_20476c;
        case 0x204770u: goto label_204770;
        case 0x204774u: goto label_204774;
        case 0x204778u: goto label_204778;
        case 0x20477cu: goto label_20477c;
        case 0x204780u: goto label_204780;
        case 0x204784u: goto label_204784;
        case 0x204788u: goto label_204788;
        case 0x20478cu: goto label_20478c;
        case 0x204790u: goto label_204790;
        case 0x204794u: goto label_204794;
        case 0x204798u: goto label_204798;
        case 0x20479cu: goto label_20479c;
        case 0x2047a0u: goto label_2047a0;
        case 0x2047a4u: goto label_2047a4;
        case 0x2047a8u: goto label_2047a8;
        case 0x2047acu: goto label_2047ac;
        case 0x2047b0u: goto label_2047b0;
        case 0x2047b4u: goto label_2047b4;
        case 0x2047b8u: goto label_2047b8;
        case 0x2047bcu: goto label_2047bc;
        case 0x2047c0u: goto label_2047c0;
        case 0x2047c4u: goto label_2047c4;
        case 0x2047c8u: goto label_2047c8;
        case 0x2047ccu: goto label_2047cc;
        case 0x2047d0u: goto label_2047d0;
        case 0x2047d4u: goto label_2047d4;
        case 0x2047d8u: goto label_2047d8;
        case 0x2047dcu: goto label_2047dc;
        case 0x2047e0u: goto label_2047e0;
        case 0x2047e4u: goto label_2047e4;
        case 0x2047e8u: goto label_2047e8;
        case 0x2047ecu: goto label_2047ec;
        case 0x2047f0u: goto label_2047f0;
        case 0x2047f4u: goto label_2047f4;
        case 0x2047f8u: goto label_2047f8;
        case 0x2047fcu: goto label_2047fc;
        case 0x204800u: goto label_204800;
        case 0x204804u: goto label_204804;
        case 0x204808u: goto label_204808;
        case 0x20480cu: goto label_20480c;
        case 0x204810u: goto label_204810;
        case 0x204814u: goto label_204814;
        case 0x204818u: goto label_204818;
        case 0x20481cu: goto label_20481c;
        case 0x204820u: goto label_204820;
        case 0x204824u: goto label_204824;
        case 0x204828u: goto label_204828;
        case 0x20482cu: goto label_20482c;
        case 0x204830u: goto label_204830;
        case 0x204834u: goto label_204834;
        case 0x204838u: goto label_204838;
        case 0x20483cu: goto label_20483c;
        case 0x204840u: goto label_204840;
        case 0x204844u: goto label_204844;
        case 0x204848u: goto label_204848;
        case 0x20484cu: goto label_20484c;
        case 0x204850u: goto label_204850;
        case 0x204854u: goto label_204854;
        case 0x204858u: goto label_204858;
        case 0x20485cu: goto label_20485c;
        case 0x204860u: goto label_204860;
        case 0x204864u: goto label_204864;
        case 0x204868u: goto label_204868;
        case 0x20486cu: goto label_20486c;
        case 0x204870u: goto label_204870;
        case 0x204874u: goto label_204874;
        case 0x204878u: goto label_204878;
        case 0x20487cu: goto label_20487c;
        case 0x204880u: goto label_204880;
        case 0x204884u: goto label_204884;
        case 0x204888u: goto label_204888;
        case 0x20488cu: goto label_20488c;
        case 0x204890u: goto label_204890;
        case 0x204894u: goto label_204894;
        case 0x204898u: goto label_204898;
        case 0x20489cu: goto label_20489c;
        case 0x2048a0u: goto label_2048a0;
        case 0x2048a4u: goto label_2048a4;
        case 0x2048a8u: goto label_2048a8;
        case 0x2048acu: goto label_2048ac;
        case 0x2048b0u: goto label_2048b0;
        case 0x2048b4u: goto label_2048b4;
        case 0x2048b8u: goto label_2048b8;
        case 0x2048bcu: goto label_2048bc;
        case 0x2048c0u: goto label_2048c0;
        case 0x2048c4u: goto label_2048c4;
        case 0x2048c8u: goto label_2048c8;
        case 0x2048ccu: goto label_2048cc;
        case 0x2048d0u: goto label_2048d0;
        case 0x2048d4u: goto label_2048d4;
        case 0x2048d8u: goto label_2048d8;
        case 0x2048dcu: goto label_2048dc;
        case 0x2048e0u: goto label_2048e0;
        case 0x2048e4u: goto label_2048e4;
        case 0x2048e8u: goto label_2048e8;
        case 0x2048ecu: goto label_2048ec;
        case 0x2048f0u: goto label_2048f0;
        case 0x2048f4u: goto label_2048f4;
        case 0x2048f8u: goto label_2048f8;
        case 0x2048fcu: goto label_2048fc;
        case 0x204900u: goto label_204900;
        case 0x204904u: goto label_204904;
        case 0x204908u: goto label_204908;
        case 0x20490cu: goto label_20490c;
        case 0x204910u: goto label_204910;
        case 0x204914u: goto label_204914;
        case 0x204918u: goto label_204918;
        case 0x20491cu: goto label_20491c;
        case 0x204920u: goto label_204920;
        case 0x204924u: goto label_204924;
        case 0x204928u: goto label_204928;
        case 0x20492cu: goto label_20492c;
        case 0x204930u: goto label_204930;
        case 0x204934u: goto label_204934;
        case 0x204938u: goto label_204938;
        case 0x20493cu: goto label_20493c;
        case 0x204940u: goto label_204940;
        case 0x204944u: goto label_204944;
        case 0x204948u: goto label_204948;
        case 0x20494cu: goto label_20494c;
        case 0x204950u: goto label_204950;
        case 0x204954u: goto label_204954;
        case 0x204958u: goto label_204958;
        case 0x20495cu: goto label_20495c;
        case 0x204960u: goto label_204960;
        case 0x204964u: goto label_204964;
        case 0x204968u: goto label_204968;
        case 0x20496cu: goto label_20496c;
        case 0x204970u: goto label_204970;
        case 0x204974u: goto label_204974;
        case 0x204978u: goto label_204978;
        case 0x20497cu: goto label_20497c;
        case 0x204980u: goto label_204980;
        case 0x204984u: goto label_204984;
        case 0x204988u: goto label_204988;
        case 0x20498cu: goto label_20498c;
        case 0x204990u: goto label_204990;
        case 0x204994u: goto label_204994;
        case 0x204998u: goto label_204998;
        case 0x20499cu: goto label_20499c;
        case 0x2049a0u: goto label_2049a0;
        case 0x2049a4u: goto label_2049a4;
        case 0x2049a8u: goto label_2049a8;
        case 0x2049acu: goto label_2049ac;
        case 0x2049b0u: goto label_2049b0;
        case 0x2049b4u: goto label_2049b4;
        case 0x2049b8u: goto label_2049b8;
        case 0x2049bcu: goto label_2049bc;
        case 0x2049c0u: goto label_2049c0;
        case 0x2049c4u: goto label_2049c4;
        case 0x2049c8u: goto label_2049c8;
        case 0x2049ccu: goto label_2049cc;
        case 0x2049d0u: goto label_2049d0;
        case 0x2049d4u: goto label_2049d4;
        case 0x2049d8u: goto label_2049d8;
        case 0x2049dcu: goto label_2049dc;
        case 0x2049e0u: goto label_2049e0;
        case 0x2049e4u: goto label_2049e4;
        case 0x2049e8u: goto label_2049e8;
        case 0x2049ecu: goto label_2049ec;
        case 0x2049f0u: goto label_2049f0;
        case 0x2049f4u: goto label_2049f4;
        case 0x2049f8u: goto label_2049f8;
        case 0x2049fcu: goto label_2049fc;
        case 0x204a00u: goto label_204a00;
        case 0x204a04u: goto label_204a04;
        case 0x204a08u: goto label_204a08;
        case 0x204a0cu: goto label_204a0c;
        case 0x204a10u: goto label_204a10;
        case 0x204a14u: goto label_204a14;
        case 0x204a18u: goto label_204a18;
        case 0x204a1cu: goto label_204a1c;
        case 0x204a20u: goto label_204a20;
        case 0x204a24u: goto label_204a24;
        case 0x204a28u: goto label_204a28;
        case 0x204a2cu: goto label_204a2c;
        case 0x204a30u: goto label_204a30;
        case 0x204a34u: goto label_204a34;
        case 0x204a38u: goto label_204a38;
        case 0x204a3cu: goto label_204a3c;
        case 0x204a40u: goto label_204a40;
        case 0x204a44u: goto label_204a44;
        case 0x204a48u: goto label_204a48;
        case 0x204a4cu: goto label_204a4c;
        case 0x204a50u: goto label_204a50;
        case 0x204a54u: goto label_204a54;
        case 0x204a58u: goto label_204a58;
        case 0x204a5cu: goto label_204a5c;
        case 0x204a60u: goto label_204a60;
        case 0x204a64u: goto label_204a64;
        case 0x204a68u: goto label_204a68;
        case 0x204a6cu: goto label_204a6c;
        case 0x204a70u: goto label_204a70;
        case 0x204a74u: goto label_204a74;
        case 0x204a78u: goto label_204a78;
        case 0x204a7cu: goto label_204a7c;
        case 0x204a80u: goto label_204a80;
        case 0x204a84u: goto label_204a84;
        case 0x204a88u: goto label_204a88;
        case 0x204a8cu: goto label_204a8c;
        case 0x204a90u: goto label_204a90;
        case 0x204a94u: goto label_204a94;
        case 0x204a98u: goto label_204a98;
        case 0x204a9cu: goto label_204a9c;
        case 0x204aa0u: goto label_204aa0;
        case 0x204aa4u: goto label_204aa4;
        case 0x204aa8u: goto label_204aa8;
        case 0x204aacu: goto label_204aac;
        case 0x204ab0u: goto label_204ab0;
        case 0x204ab4u: goto label_204ab4;
        case 0x204ab8u: goto label_204ab8;
        case 0x204abcu: goto label_204abc;
        case 0x204ac0u: goto label_204ac0;
        case 0x204ac4u: goto label_204ac4;
        case 0x204ac8u: goto label_204ac8;
        case 0x204accu: goto label_204acc;
        case 0x204ad0u: goto label_204ad0;
        case 0x204ad4u: goto label_204ad4;
        case 0x204ad8u: goto label_204ad8;
        case 0x204adcu: goto label_204adc;
        case 0x204ae0u: goto label_204ae0;
        case 0x204ae4u: goto label_204ae4;
        case 0x204ae8u: goto label_204ae8;
        case 0x204aecu: goto label_204aec;
        case 0x204af0u: goto label_204af0;
        case 0x204af4u: goto label_204af4;
        case 0x204af8u: goto label_204af8;
        case 0x204afcu: goto label_204afc;
        case 0x204b00u: goto label_204b00;
        case 0x204b04u: goto label_204b04;
        case 0x204b08u: goto label_204b08;
        case 0x204b0cu: goto label_204b0c;
        case 0x204b10u: goto label_204b10;
        case 0x204b14u: goto label_204b14;
        case 0x204b18u: goto label_204b18;
        case 0x204b1cu: goto label_204b1c;
        case 0x204b20u: goto label_204b20;
        case 0x204b24u: goto label_204b24;
        case 0x204b28u: goto label_204b28;
        case 0x204b2cu: goto label_204b2c;
        case 0x204b30u: goto label_204b30;
        case 0x204b34u: goto label_204b34;
        case 0x204b38u: goto label_204b38;
        case 0x204b3cu: goto label_204b3c;
        case 0x204b40u: goto label_204b40;
        case 0x204b44u: goto label_204b44;
        case 0x204b48u: goto label_204b48;
        case 0x204b4cu: goto label_204b4c;
        case 0x204b50u: goto label_204b50;
        case 0x204b54u: goto label_204b54;
        case 0x204b58u: goto label_204b58;
        case 0x204b5cu: goto label_204b5c;
        case 0x204b60u: goto label_204b60;
        case 0x204b64u: goto label_204b64;
        case 0x204b68u: goto label_204b68;
        case 0x204b6cu: goto label_204b6c;
        case 0x204b70u: goto label_204b70;
        case 0x204b74u: goto label_204b74;
        case 0x204b78u: goto label_204b78;
        case 0x204b7cu: goto label_204b7c;
        case 0x204b80u: goto label_204b80;
        case 0x204b84u: goto label_204b84;
        case 0x204b88u: goto label_204b88;
        case 0x204b8cu: goto label_204b8c;
        case 0x204b90u: goto label_204b90;
        case 0x204b94u: goto label_204b94;
        case 0x204b98u: goto label_204b98;
        case 0x204b9cu: goto label_204b9c;
        case 0x204ba0u: goto label_204ba0;
        case 0x204ba4u: goto label_204ba4;
        case 0x204ba8u: goto label_204ba8;
        case 0x204bacu: goto label_204bac;
        case 0x204bb0u: goto label_204bb0;
        case 0x204bb4u: goto label_204bb4;
        case 0x204bb8u: goto label_204bb8;
        case 0x204bbcu: goto label_204bbc;
        case 0x204bc0u: goto label_204bc0;
        case 0x204bc4u: goto label_204bc4;
        case 0x204bc8u: goto label_204bc8;
        case 0x204bccu: goto label_204bcc;
        case 0x204bd0u: goto label_204bd0;
        case 0x204bd4u: goto label_204bd4;
        case 0x204bd8u: goto label_204bd8;
        case 0x204bdcu: goto label_204bdc;
        case 0x204be0u: goto label_204be0;
        case 0x204be4u: goto label_204be4;
        case 0x204be8u: goto label_204be8;
        case 0x204becu: goto label_204bec;
        case 0x204bf0u: goto label_204bf0;
        case 0x204bf4u: goto label_204bf4;
        case 0x204bf8u: goto label_204bf8;
        case 0x204bfcu: goto label_204bfc;
        case 0x204c00u: goto label_204c00;
        case 0x204c04u: goto label_204c04;
        case 0x204c08u: goto label_204c08;
        case 0x204c0cu: goto label_204c0c;
        case 0x204c10u: goto label_204c10;
        case 0x204c14u: goto label_204c14;
        case 0x204c18u: goto label_204c18;
        case 0x204c1cu: goto label_204c1c;
        case 0x204c20u: goto label_204c20;
        case 0x204c24u: goto label_204c24;
        case 0x204c28u: goto label_204c28;
        case 0x204c2cu: goto label_204c2c;
        case 0x204c30u: goto label_204c30;
        case 0x204c34u: goto label_204c34;
        case 0x204c38u: goto label_204c38;
        case 0x204c3cu: goto label_204c3c;
        case 0x204c40u: goto label_204c40;
        case 0x204c44u: goto label_204c44;
        case 0x204c48u: goto label_204c48;
        case 0x204c4cu: goto label_204c4c;
        case 0x204c50u: goto label_204c50;
        case 0x204c54u: goto label_204c54;
        case 0x204c58u: goto label_204c58;
        case 0x204c5cu: goto label_204c5c;
        case 0x204c60u: goto label_204c60;
        case 0x204c64u: goto label_204c64;
        case 0x204c68u: goto label_204c68;
        case 0x204c6cu: goto label_204c6c;
        case 0x204c70u: goto label_204c70;
        case 0x204c74u: goto label_204c74;
        case 0x204c78u: goto label_204c78;
        case 0x204c7cu: goto label_204c7c;
        case 0x204c80u: goto label_204c80;
        case 0x204c84u: goto label_204c84;
        case 0x204c88u: goto label_204c88;
        case 0x204c8cu: goto label_204c8c;
        case 0x204c90u: goto label_204c90;
        case 0x204c94u: goto label_204c94;
        case 0x204c98u: goto label_204c98;
        case 0x204c9cu: goto label_204c9c;
        case 0x204ca0u: goto label_204ca0;
        case 0x204ca4u: goto label_204ca4;
        case 0x204ca8u: goto label_204ca8;
        case 0x204cacu: goto label_204cac;
        case 0x204cb0u: goto label_204cb0;
        case 0x204cb4u: goto label_204cb4;
        case 0x204cb8u: goto label_204cb8;
        case 0x204cbcu: goto label_204cbc;
        case 0x204cc0u: goto label_204cc0;
        case 0x204cc4u: goto label_204cc4;
        case 0x204cc8u: goto label_204cc8;
        case 0x204cccu: goto label_204ccc;
        case 0x204cd0u: goto label_204cd0;
        case 0x204cd4u: goto label_204cd4;
        case 0x204cd8u: goto label_204cd8;
        case 0x204cdcu: goto label_204cdc;
        case 0x204ce0u: goto label_204ce0;
        case 0x204ce4u: goto label_204ce4;
        case 0x204ce8u: goto label_204ce8;
        case 0x204cecu: goto label_204cec;
        case 0x204cf0u: goto label_204cf0;
        case 0x204cf4u: goto label_204cf4;
        case 0x204cf8u: goto label_204cf8;
        case 0x204cfcu: goto label_204cfc;
        case 0x204d00u: goto label_204d00;
        case 0x204d04u: goto label_204d04;
        case 0x204d08u: goto label_204d08;
        case 0x204d0cu: goto label_204d0c;
        case 0x204d10u: goto label_204d10;
        case 0x204d14u: goto label_204d14;
        case 0x204d18u: goto label_204d18;
        case 0x204d1cu: goto label_204d1c;
        case 0x204d20u: goto label_204d20;
        case 0x204d24u: goto label_204d24;
        case 0x204d28u: goto label_204d28;
        case 0x204d2cu: goto label_204d2c;
        case 0x204d30u: goto label_204d30;
        case 0x204d34u: goto label_204d34;
        case 0x204d38u: goto label_204d38;
        case 0x204d3cu: goto label_204d3c;
        case 0x204d40u: goto label_204d40;
        case 0x204d44u: goto label_204d44;
        case 0x204d48u: goto label_204d48;
        case 0x204d4cu: goto label_204d4c;
        case 0x204d50u: goto label_204d50;
        case 0x204d54u: goto label_204d54;
        case 0x204d58u: goto label_204d58;
        case 0x204d5cu: goto label_204d5c;
        case 0x204d60u: goto label_204d60;
        case 0x204d64u: goto label_204d64;
        case 0x204d68u: goto label_204d68;
        case 0x204d6cu: goto label_204d6c;
        case 0x204d70u: goto label_204d70;
        case 0x204d74u: goto label_204d74;
        case 0x204d78u: goto label_204d78;
        case 0x204d7cu: goto label_204d7c;
        case 0x204d80u: goto label_204d80;
        case 0x204d84u: goto label_204d84;
        case 0x204d88u: goto label_204d88;
        case 0x204d8cu: goto label_204d8c;
        case 0x204d90u: goto label_204d90;
        case 0x204d94u: goto label_204d94;
        case 0x204d98u: goto label_204d98;
        case 0x204d9cu: goto label_204d9c;
        case 0x204da0u: goto label_204da0;
        case 0x204da4u: goto label_204da4;
        case 0x204da8u: goto label_204da8;
        case 0x204dacu: goto label_204dac;
        case 0x204db0u: goto label_204db0;
        case 0x204db4u: goto label_204db4;
        case 0x204db8u: goto label_204db8;
        case 0x204dbcu: goto label_204dbc;
        case 0x204dc0u: goto label_204dc0;
        case 0x204dc4u: goto label_204dc4;
        case 0x204dc8u: goto label_204dc8;
        case 0x204dccu: goto label_204dcc;
        case 0x204dd0u: goto label_204dd0;
        case 0x204dd4u: goto label_204dd4;
        case 0x204dd8u: goto label_204dd8;
        case 0x204ddcu: goto label_204ddc;
        case 0x204de0u: goto label_204de0;
        case 0x204de4u: goto label_204de4;
        case 0x204de8u: goto label_204de8;
        case 0x204decu: goto label_204dec;
        case 0x204df0u: goto label_204df0;
        case 0x204df4u: goto label_204df4;
        case 0x204df8u: goto label_204df8;
        case 0x204dfcu: goto label_204dfc;
        case 0x204e00u: goto label_204e00;
        case 0x204e04u: goto label_204e04;
        case 0x204e08u: goto label_204e08;
        case 0x204e0cu: goto label_204e0c;
        case 0x204e10u: goto label_204e10;
        case 0x204e14u: goto label_204e14;
        case 0x204e18u: goto label_204e18;
        case 0x204e1cu: goto label_204e1c;
        case 0x204e20u: goto label_204e20;
        case 0x204e24u: goto label_204e24;
        case 0x204e28u: goto label_204e28;
        case 0x204e2cu: goto label_204e2c;
        case 0x204e30u: goto label_204e30;
        case 0x204e34u: goto label_204e34;
        case 0x204e38u: goto label_204e38;
        case 0x204e3cu: goto label_204e3c;
        case 0x204e40u: goto label_204e40;
        case 0x204e44u: goto label_204e44;
        case 0x204e48u: goto label_204e48;
        case 0x204e4cu: goto label_204e4c;
        case 0x204e50u: goto label_204e50;
        case 0x204e54u: goto label_204e54;
        case 0x204e58u: goto label_204e58;
        case 0x204e5cu: goto label_204e5c;
        case 0x204e60u: goto label_204e60;
        case 0x204e64u: goto label_204e64;
        case 0x204e68u: goto label_204e68;
        case 0x204e6cu: goto label_204e6c;
        case 0x204e70u: goto label_204e70;
        case 0x204e74u: goto label_204e74;
        case 0x204e78u: goto label_204e78;
        case 0x204e7cu: goto label_204e7c;
        case 0x204e80u: goto label_204e80;
        case 0x204e84u: goto label_204e84;
        case 0x204e88u: goto label_204e88;
        case 0x204e8cu: goto label_204e8c;
        case 0x204e90u: goto label_204e90;
        case 0x204e94u: goto label_204e94;
        case 0x204e98u: goto label_204e98;
        case 0x204e9cu: goto label_204e9c;
        case 0x204ea0u: goto label_204ea0;
        case 0x204ea4u: goto label_204ea4;
        case 0x204ea8u: goto label_204ea8;
        case 0x204eacu: goto label_204eac;
        case 0x204eb0u: goto label_204eb0;
        case 0x204eb4u: goto label_204eb4;
        case 0x204eb8u: goto label_204eb8;
        case 0x204ebcu: goto label_204ebc;
        case 0x204ec0u: goto label_204ec0;
        case 0x204ec4u: goto label_204ec4;
        case 0x204ec8u: goto label_204ec8;
        case 0x204eccu: goto label_204ecc;
        case 0x204ed0u: goto label_204ed0;
        case 0x204ed4u: goto label_204ed4;
        case 0x204ed8u: goto label_204ed8;
        case 0x204edcu: goto label_204edc;
        case 0x204ee0u: goto label_204ee0;
        case 0x204ee4u: goto label_204ee4;
        case 0x204ee8u: goto label_204ee8;
        case 0x204eecu: goto label_204eec;
        case 0x204ef0u: goto label_204ef0;
        case 0x204ef4u: goto label_204ef4;
        case 0x204ef8u: goto label_204ef8;
        case 0x204efcu: goto label_204efc;
        case 0x204f00u: goto label_204f00;
        case 0x204f04u: goto label_204f04;
        case 0x204f08u: goto label_204f08;
        case 0x204f0cu: goto label_204f0c;
        case 0x204f10u: goto label_204f10;
        case 0x204f14u: goto label_204f14;
        case 0x204f18u: goto label_204f18;
        case 0x204f1cu: goto label_204f1c;
        case 0x204f20u: goto label_204f20;
        case 0x204f24u: goto label_204f24;
        case 0x204f28u: goto label_204f28;
        case 0x204f2cu: goto label_204f2c;
        case 0x204f30u: goto label_204f30;
        case 0x204f34u: goto label_204f34;
        case 0x204f38u: goto label_204f38;
        case 0x204f3cu: goto label_204f3c;
        case 0x204f40u: goto label_204f40;
        case 0x204f44u: goto label_204f44;
        case 0x204f48u: goto label_204f48;
        case 0x204f4cu: goto label_204f4c;
        case 0x204f50u: goto label_204f50;
        case 0x204f54u: goto label_204f54;
        case 0x204f58u: goto label_204f58;
        case 0x204f5cu: goto label_204f5c;
        case 0x204f60u: goto label_204f60;
        case 0x204f64u: goto label_204f64;
        case 0x204f68u: goto label_204f68;
        case 0x204f6cu: goto label_204f6c;
        case 0x204f70u: goto label_204f70;
        case 0x204f74u: goto label_204f74;
        case 0x204f78u: goto label_204f78;
        case 0x204f7cu: goto label_204f7c;
        case 0x204f80u: goto label_204f80;
        case 0x204f84u: goto label_204f84;
        case 0x204f88u: goto label_204f88;
        case 0x204f8cu: goto label_204f8c;
        case 0x204f90u: goto label_204f90;
        case 0x204f94u: goto label_204f94;
        case 0x204f98u: goto label_204f98;
        case 0x204f9cu: goto label_204f9c;
        case 0x204fa0u: goto label_204fa0;
        case 0x204fa4u: goto label_204fa4;
        case 0x204fa8u: goto label_204fa8;
        case 0x204facu: goto label_204fac;
        case 0x204fb0u: goto label_204fb0;
        case 0x204fb4u: goto label_204fb4;
        case 0x204fb8u: goto label_204fb8;
        case 0x204fbcu: goto label_204fbc;
        case 0x204fc0u: goto label_204fc0;
        case 0x204fc4u: goto label_204fc4;
        case 0x204fc8u: goto label_204fc8;
        case 0x204fccu: goto label_204fcc;
        case 0x204fd0u: goto label_204fd0;
        case 0x204fd4u: goto label_204fd4;
        case 0x204fd8u: goto label_204fd8;
        case 0x204fdcu: goto label_204fdc;
        case 0x204fe0u: goto label_204fe0;
        case 0x204fe4u: goto label_204fe4;
        case 0x204fe8u: goto label_204fe8;
        case 0x204fecu: goto label_204fec;
        case 0x204ff0u: goto label_204ff0;
        case 0x204ff4u: goto label_204ff4;
        case 0x204ff8u: goto label_204ff8;
        case 0x204ffcu: goto label_204ffc;
        case 0x205000u: goto label_205000;
        case 0x205004u: goto label_205004;
        case 0x205008u: goto label_205008;
        case 0x20500cu: goto label_20500c;
        case 0x205010u: goto label_205010;
        case 0x205014u: goto label_205014;
        case 0x205018u: goto label_205018;
        case 0x20501cu: goto label_20501c;
        case 0x205020u: goto label_205020;
        case 0x205024u: goto label_205024;
        case 0x205028u: goto label_205028;
        case 0x20502cu: goto label_20502c;
        case 0x205030u: goto label_205030;
        case 0x205034u: goto label_205034;
        case 0x205038u: goto label_205038;
        case 0x20503cu: goto label_20503c;
        case 0x205040u: goto label_205040;
        case 0x205044u: goto label_205044;
        case 0x205048u: goto label_205048;
        case 0x20504cu: goto label_20504c;
        case 0x205050u: goto label_205050;
        case 0x205054u: goto label_205054;
        case 0x205058u: goto label_205058;
        case 0x20505cu: goto label_20505c;
        case 0x205060u: goto label_205060;
        case 0x205064u: goto label_205064;
        case 0x205068u: goto label_205068;
        case 0x20506cu: goto label_20506c;
        case 0x205070u: goto label_205070;
        case 0x205074u: goto label_205074;
        case 0x205078u: goto label_205078;
        case 0x20507cu: goto label_20507c;
        case 0x205080u: goto label_205080;
        case 0x205084u: goto label_205084;
        case 0x205088u: goto label_205088;
        case 0x20508cu: goto label_20508c;
        case 0x205090u: goto label_205090;
        case 0x205094u: goto label_205094;
        case 0x205098u: goto label_205098;
        case 0x20509cu: goto label_20509c;
        case 0x2050a0u: goto label_2050a0;
        case 0x2050a4u: goto label_2050a4;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050acu: goto label_2050ac;
        case 0x2050b0u: goto label_2050b0;
        case 0x2050b4u: goto label_2050b4;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050bcu: goto label_2050bc;
        case 0x2050c0u: goto label_2050c0;
        case 0x2050c4u: goto label_2050c4;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ccu: goto label_2050cc;
        case 0x2050d0u: goto label_2050d0;
        case 0x2050d4u: goto label_2050d4;
        case 0x2050d8u: goto label_2050d8;
        case 0x2050dcu: goto label_2050dc;
        case 0x2050e0u: goto label_2050e0;
        case 0x2050e4u: goto label_2050e4;
        case 0x2050e8u: goto label_2050e8;
        case 0x2050ecu: goto label_2050ec;
        case 0x2050f0u: goto label_2050f0;
        case 0x2050f4u: goto label_2050f4;
        case 0x2050f8u: goto label_2050f8;
        case 0x2050fcu: goto label_2050fc;
        case 0x205100u: goto label_205100;
        case 0x205104u: goto label_205104;
        case 0x205108u: goto label_205108;
        case 0x20510cu: goto label_20510c;
        case 0x205110u: goto label_205110;
        case 0x205114u: goto label_205114;
        case 0x205118u: goto label_205118;
        case 0x20511cu: goto label_20511c;
        case 0x205120u: goto label_205120;
        case 0x205124u: goto label_205124;
        case 0x205128u: goto label_205128;
        case 0x20512cu: goto label_20512c;
        case 0x205130u: goto label_205130;
        case 0x205134u: goto label_205134;
        case 0x205138u: goto label_205138;
        case 0x20513cu: goto label_20513c;
        case 0x205140u: goto label_205140;
        case 0x205144u: goto label_205144;
        case 0x205148u: goto label_205148;
        case 0x20514cu: goto label_20514c;
        case 0x205150u: goto label_205150;
        case 0x205154u: goto label_205154;
        case 0x205158u: goto label_205158;
        case 0x20515cu: goto label_20515c;
        default: break;
    }

    ctx->pc = 0x2046c0u;

label_2046c0:
    // 0x2046c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2046c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2046c4:
    // 0x2046c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2046c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2046c8:
    // 0x2046c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2046c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2046cc:
    // 0x2046cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2046ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2046d0:
    // 0x2046d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2046d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2046d4:
    // 0x2046d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2046d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2046d8:
    // 0x2046d8: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x2046d8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2046dc:
    // 0x2046dc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x2046dcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2046e0:
    // 0x2046e0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2046e0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2046e4:
    // 0x2046e4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2046e4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2046e8:
    // 0x2046e8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2046e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2046ec:
    // 0x2046ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2046ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2046f0:
    // 0x2046f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2046f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2046f4:
    // 0x2046f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2046f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2046f8:
    // 0x2046f8: 0x10a0006f  beqz        $a1, . + 4 + (0x6F << 2)
label_2046fc:
    if (ctx->pc == 0x2046FCu) {
        ctx->pc = 0x2046FCu;
            // 0x2046fc: 0xa0850040  sb          $a1, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x204700u;
        goto label_204700;
    }
    ctx->pc = 0x2046F8u;
    {
        const bool branch_taken_0x2046f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2046F8u;
            // 0x2046fc: 0xa0850040  sb          $a1, 0x40($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046f8) {
            ctx->pc = 0x2048B8u;
            goto label_2048b8;
        }
    }
    ctx->pc = 0x204700u;
label_204700:
    // 0x204700: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x204700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_204704:
    // 0x204704: 0x3c047f7f  lui         $a0, 0x7F7F
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32639 << 16));
label_204708:
    // 0x204708: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x204708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_20470c:
    // 0x20470c: 0x3484ffee  ori         $a0, $a0, 0xFFEE
    ctx->pc = 0x20470cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65518);
label_204710:
    // 0x204710: 0x4483c000  mtc1        $v1, $f24
    ctx->pc = 0x204710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_204714:
    // 0x204714: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x204714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204718:
    // 0x204718: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_20471c:
    // 0x20471c: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x20471cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_204720:
    // 0x204720: 0x0  nop
    ctx->pc = 0x204720u;
    // NOP
label_204724:
    // 0x204724: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x204724u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_204728:
    // 0x204728: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x204728u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_20472c:
    // 0x20472c: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x20472cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_204730:
    // 0x204730: 0x4600c646  mov.s       $f25, $f24
    ctx->pc = 0x204730u;
    ctx->f[25] = FPU_MOV_S(ctx->f[24]);
label_204734:
    // 0x204734: 0x4600c686  mov.s       $f26, $f24
    ctx->pc = 0x204734u;
    ctx->f[26] = FPU_MOV_S(ctx->f[24]);
label_204738:
    // 0x204738: 0x18600035  blez        $v1, . + 4 + (0x35 << 2)
label_20473c:
    if (ctx->pc == 0x20473Cu) {
        ctx->pc = 0x20473Cu;
            // 0x20473c: 0x4600c6c6  mov.s       $f27, $f24 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x204740u;
        goto label_204740;
    }
    ctx->pc = 0x204738u;
    {
        const bool branch_taken_0x204738 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x20473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204738u;
            // 0x20473c: 0x4600c6c6  mov.s       $f27, $f24 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204738) {
            ctx->pc = 0x204810u;
            goto label_204810;
        }
    }
    ctx->pc = 0x204740u;
label_204740:
    // 0x204740: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204744:
    // 0x204744: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x204744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_204748:
    // 0x204748: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_20474c:
    // 0x20474c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20474cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_204750:
    // 0x204750: 0x24a5d6e0  addiu       $a1, $a1, -0x2920
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
label_204754:
    // 0x204754: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x204754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_204758:
    // 0x204758: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20475c:
    // 0x20475c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20475cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204760:
    // 0x204760: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x204760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_204764:
    // 0x204764: 0x320f809  jalr        $t9
label_204768:
    if (ctx->pc == 0x204768u) {
        ctx->pc = 0x204768u;
            // 0x204768: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20476Cu;
        goto label_20476c;
    }
    ctx->pc = 0x204764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20476Cu);
        ctx->pc = 0x204768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204764u;
            // 0x204768: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20476Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20476Cu; }
            if (ctx->pc != 0x20476Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20476Cu;
label_20476c:
    // 0x20476c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x20476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204770:
    // 0x204770: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x204770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204774:
    // 0x204774: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_204778:
    if (ctx->pc == 0x204778u) {
        ctx->pc = 0x204778u;
            // 0x204778: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x20477Cu;
        goto label_20477c;
    }
    ctx->pc = 0x204774u;
    {
        const bool branch_taken_0x204774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204774u;
            // 0x204778: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204774) {
            ctx->pc = 0x204784u;
            goto label_204784;
        }
    }
    ctx->pc = 0x20477Cu;
label_20477c:
    // 0x20477c: 0x10000003  b           . + 4 + (0x3 << 2)
label_204780:
    if (ctx->pc == 0x204780u) {
        ctx->pc = 0x204780u;
            // 0x204780: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x204784u;
        goto label_204784;
    }
    ctx->pc = 0x20477Cu;
    {
        const bool branch_taken_0x20477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20477Cu;
            // 0x204780: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20477c) {
            ctx->pc = 0x20478Cu;
            goto label_20478c;
        }
    }
    ctx->pc = 0x204784u;
label_204784:
    // 0x204784: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x204784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_204788:
    // 0x204788: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x204788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20478c:
    // 0x20478c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x20478cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204790:
    // 0x204790: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_204794:
    if (ctx->pc == 0x204794u) {
        ctx->pc = 0x204794u;
            // 0x204794: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x204798u;
        goto label_204798;
    }
    ctx->pc = 0x204790u;
    {
        const bool branch_taken_0x204790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204790) {
            ctx->pc = 0x204794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204790u;
            // 0x204794: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204798u;
            goto label_204798;
        }
    }
    ctx->pc = 0x204798u;
label_204798:
    // 0x204798: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x204798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20479c:
    // 0x20479c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x20479cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2047a0:
    // 0x2047a0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2047a4:
    if (ctx->pc == 0x2047A4u) {
        ctx->pc = 0x2047A4u;
            // 0x2047a4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2047A8u;
        goto label_2047a8;
    }
    ctx->pc = 0x2047A0u;
    {
        const bool branch_taken_0x2047a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2047a0) {
            ctx->pc = 0x2047A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2047A0u;
            // 0x2047a4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2047A8u;
            goto label_2047a8;
        }
    }
    ctx->pc = 0x2047A8u;
label_2047a8:
    // 0x2047a8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2047a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2047ac:
    // 0x2047ac: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2047acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2047b0:
    // 0x2047b0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2047b4:
    if (ctx->pc == 0x2047B4u) {
        ctx->pc = 0x2047B4u;
            // 0x2047b4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2047B8u;
        goto label_2047b8;
    }
    ctx->pc = 0x2047B0u;
    {
        const bool branch_taken_0x2047b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2047b0) {
            ctx->pc = 0x2047B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2047B0u;
            // 0x2047b4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2047B8u;
            goto label_2047b8;
        }
    }
    ctx->pc = 0x2047B8u;
label_2047b8:
    // 0x2047b8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2047b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2047bc:
    // 0x2047bc: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x2047bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2047c0:
    // 0x2047c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2047c4:
    if (ctx->pc == 0x2047C4u) {
        ctx->pc = 0x2047C4u;
            // 0x2047c4: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2047C8u;
        goto label_2047c8;
    }
    ctx->pc = 0x2047C0u;
    {
        const bool branch_taken_0x2047c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2047c0) {
            ctx->pc = 0x2047C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2047C0u;
            // 0x2047c4: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2047C8u;
            goto label_2047c8;
        }
    }
    ctx->pc = 0x2047C8u;
label_2047c8:
    // 0x2047c8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2047c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2047cc:
    // 0x2047cc: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x2047ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2047d0:
    // 0x2047d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2047d4:
    if (ctx->pc == 0x2047D4u) {
        ctx->pc = 0x2047D4u;
            // 0x2047d4: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2047D8u;
        goto label_2047d8;
    }
    ctx->pc = 0x2047D0u;
    {
        const bool branch_taken_0x2047d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2047d0) {
            ctx->pc = 0x2047D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2047D0u;
            // 0x2047d4: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2047D8u;
            goto label_2047d8;
        }
    }
    ctx->pc = 0x2047D8u;
label_2047d8:
    // 0x2047d8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2047d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2047dc:
    // 0x2047dc: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x2047dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2047e0:
    // 0x2047e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2047e4:
    if (ctx->pc == 0x2047E4u) {
        ctx->pc = 0x2047E4u;
            // 0x2047e4: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2047E8u;
        goto label_2047e8;
    }
    ctx->pc = 0x2047E0u;
    {
        const bool branch_taken_0x2047e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2047e0) {
            ctx->pc = 0x2047E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2047E0u;
            // 0x2047e4: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2047E8u;
            goto label_2047e8;
        }
    }
    ctx->pc = 0x2047E8u;
label_2047e8:
    // 0x2047e8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2047e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2047ec:
    // 0x2047ec: 0x4600d836  c.le.s      $f27, $f0
    ctx->pc = 0x2047ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[27], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2047f0:
    // 0x2047f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2047f4:
    if (ctx->pc == 0x2047F4u) {
        ctx->pc = 0x2047F4u;
            // 0x2047f4: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2047F8u;
        goto label_2047f8;
    }
    ctx->pc = 0x2047F0u;
    {
        const bool branch_taken_0x2047f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2047f0) {
            ctx->pc = 0x2047F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2047F0u;
            // 0x2047f4: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2047F8u;
            goto label_2047f8;
        }
    }
    ctx->pc = 0x2047F8u;
label_2047f8:
    // 0x2047f8: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2047f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2047fc:
    // 0x2047fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2047fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_204800:
    // 0x204800: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x204800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_204804:
    // 0x204804: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_204808:
    if (ctx->pc == 0x204808u) {
        ctx->pc = 0x204808u;
            // 0x204808: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x20480Cu;
        goto label_20480c;
    }
    ctx->pc = 0x204804u;
    {
        const bool branch_taken_0x204804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204804u;
            // 0x204808: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204804) {
            ctx->pc = 0x204744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204744;
        }
    }
    ctx->pc = 0x20480Cu;
label_20480c:
    // 0x20480c: 0x0  nop
    ctx->pc = 0x20480cu;
    // NOP
label_204810:
    // 0x204810: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x204810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_204814:
    // 0x204814: 0x4618a000  add.s       $f0, $f20, $f24
    ctx->pc = 0x204814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
label_204818:
    // 0x204818: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x204818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_20481c:
    // 0x20481c: 0x4619a800  add.s       $f0, $f21, $f25
    ctx->pc = 0x20481cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
label_204820:
    // 0x204820: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x204820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_204824:
    // 0x204824: 0x461ab000  add.s       $f0, $f22, $f26
    ctx->pc = 0x204824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[26]);
label_204828:
    // 0x204828: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x204828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_20482c:
    // 0x20482c: 0x461bb900  add.s       $f4, $f23, $f27
    ctx->pc = 0x20482cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[23], ctx->f[27]);
label_204830:
    // 0x204830: 0xe644003c  swc1        $f4, 0x3C($s2)
    ctx->pc = 0x204830u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_204834:
    // 0x204834: 0xc6440030  lwc1        $f4, 0x30($s2)
    ctx->pc = 0x204834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_204838:
    // 0x204838: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x204838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_20483c:
    // 0x20483c: 0x4614c0c1  sub.s       $f3, $f24, $f20
    ctx->pc = 0x20483cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
label_204840:
    // 0x204840: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x204840u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_204844:
    // 0x204844: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x204844u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_204848:
    // 0x204848: 0xc6440034  lwc1        $f4, 0x34($s2)
    ctx->pc = 0x204848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20484c:
    // 0x20484c: 0x4615c881  sub.s       $f2, $f25, $f21
    ctx->pc = 0x20484cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[25], ctx->f[21]);
label_204850:
    // 0x204850: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x204850u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_204854:
    // 0x204854: 0xe6440034  swc1        $f4, 0x34($s2)
    ctx->pc = 0x204854u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_204858:
    // 0x204858: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x204858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20485c:
    // 0x20485c: 0x4616d041  sub.s       $f1, $f26, $f22
    ctx->pc = 0x20485cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[22]);
label_204860:
    // 0x204860: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x204860u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_204864:
    // 0x204864: 0xe6440038  swc1        $f4, 0x38($s2)
    ctx->pc = 0x204864u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_204868:
    // 0x204868: 0xc644003c  lwc1        $f4, 0x3C($s2)
    ctx->pc = 0x204868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_20486c:
    // 0x20486c: 0x4617d801  sub.s       $f0, $f27, $f23
    ctx->pc = 0x20486cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[23]);
label_204870:
    // 0x204870: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x204870u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_204874:
    // 0x204874: 0xe644003c  swc1        $f4, 0x3C($s2)
    ctx->pc = 0x204874u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_204878:
    // 0x204878: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x204878u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_20487c:
    // 0x20487c: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x20487cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_204880:
    // 0x204880: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x204880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_204884:
    // 0x204884: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x204884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_204888:
    // 0x204888: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x204888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20488c:
    // 0x20488c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x20488cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_204890:
    // 0x204890: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x204890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_204894:
    // 0x204894: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x204894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204898:
    // 0x204898: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x204898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_20489c:
    // 0x20489c: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x20489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_2048a0:
    // 0x2048a0: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x2048a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2048a4:
    // 0x2048a4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2048a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2048a8:
    // 0x2048a8: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x2048a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_2048ac:
    // 0x2048ac: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x2048acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2048b0:
    // 0x2048b0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2048b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2048b4:
    // 0x2048b4: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x2048b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_2048b8:
    // 0x2048b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2048b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2048bc:
    // 0x2048bc: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x2048bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2048c0:
    // 0x2048c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2048c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2048c4:
    // 0x2048c4: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x2048c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2048c8:
    // 0x2048c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2048c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2048cc:
    // 0x2048cc: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2048ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2048d0:
    // 0x2048d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2048d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2048d4:
    // 0x2048d4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2048d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2048d8:
    // 0x2048d8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2048d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2048dc:
    // 0x2048dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2048dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2048e0:
    // 0x2048e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2048e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2048e4:
    // 0x2048e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2048e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2048e8:
    // 0x2048e8: 0x3e00008  jr          $ra
label_2048ec:
    if (ctx->pc == 0x2048ECu) {
        ctx->pc = 0x2048ECu;
            // 0x2048ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2048F0u;
        goto label_2048f0;
    }
    ctx->pc = 0x2048E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2048ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048E8u;
            // 0x2048ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2048F0u;
label_2048f0:
    // 0x2048f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2048f4:
    // 0x2048f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2048f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2048f8:
    // 0x2048f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2048f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2048fc:
    // 0x2048fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2048fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_204900:
    // 0x204900: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x204900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204904:
    // 0x204904: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x204904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_204908:
    // 0x204908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x204908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20490c:
    // 0x20490c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_204910:
    // 0x204910: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x204910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_204914:
    // 0x204914: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x204914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_204918:
    // 0x204918: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x204918u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20491c:
    // 0x20491c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20491cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_204920:
    // 0x204920: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x204920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_204924:
    // 0x204924: 0x90830040  lbu         $v1, 0x40($a0)
    ctx->pc = 0x204924u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
label_204928:
    // 0x204928: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_20492c:
    if (ctx->pc == 0x20492Cu) {
        ctx->pc = 0x20492Cu;
            // 0x20492c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x204930u;
        goto label_204930;
    }
    ctx->pc = 0x204928u;
    {
        const bool branch_taken_0x204928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204928u;
            // 0x20492c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204928) {
            ctx->pc = 0x204AB4u;
            goto label_204ab4;
        }
    }
    ctx->pc = 0x204930u;
label_204930:
    // 0x204930: 0xc6820020  lwc1        $f2, 0x20($s4)
    ctx->pc = 0x204930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204934:
    // 0x204934: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x204934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_204938:
    // 0x204938: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x204938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20493c:
    // 0x20493c: 0xc6860024  lwc1        $f6, 0x24($s4)
    ctx->pc = 0x20493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_204940:
    // 0x204940: 0x460d1042  mul.s       $f1, $f2, $f13
    ctx->pc = 0x204940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
label_204944:
    // 0x204944: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x204944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_204948:
    // 0x204948: 0xc6920028  lwc1        $f18, 0x28($s4)
    ctx->pc = 0x204948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_20494c:
    // 0x20494c: 0x46000c05  abs.s       $f16, $f1
    ctx->pc = 0x20494cu;
    ctx->f[16] = FPU_ABS_S(ctx->f[1]);
label_204950:
    // 0x204950: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x204950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_204954:
    // 0x204954: 0x460c1042  mul.s       $f1, $f2, $f12
    ctx->pc = 0x204954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_204958:
    // 0x204958: 0x46000bc5  abs.s       $f15, $f1
    ctx->pc = 0x204958u;
    ctx->f[15] = FPU_ABS_S(ctx->f[1]);
label_20495c:
    // 0x20495c: 0xc66b0008  lwc1        $f11, 0x8($s3)
    ctx->pc = 0x20495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_204960:
    // 0x204960: 0x460b1042  mul.s       $f1, $f2, $f11
    ctx->pc = 0x204960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_204964:
    // 0x204964: 0x46000b85  abs.s       $f14, $f1
    ctx->pc = 0x204964u;
    ctx->f[14] = FPU_ABS_S(ctx->f[1]);
label_204968:
    // 0x204968: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x204968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20496c:
    // 0x20496c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x20496cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_204970:
    // 0x204970: 0x46000905  abs.s       $f4, $f1
    ctx->pc = 0x204970u;
    ctx->f[4] = FPU_ABS_S(ctx->f[1]);
label_204974:
    // 0x204974: 0xc66a0010  lwc1        $f10, 0x10($s3)
    ctx->pc = 0x204974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_204978:
    // 0x204978: 0x460a3042  mul.s       $f1, $f6, $f10
    ctx->pc = 0x204978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
label_20497c:
    // 0x20497c: 0x460008c5  abs.s       $f3, $f1
    ctx->pc = 0x20497cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[1]);
label_204980:
    // 0x204980: 0xc6690014  lwc1        $f9, 0x14($s3)
    ctx->pc = 0x204980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_204984:
    // 0x204984: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x204984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_204988:
    // 0x204988: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x204988u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
label_20498c:
    // 0x20498c: 0xc6680018  lwc1        $f8, 0x18($s3)
    ctx->pc = 0x20498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_204990:
    // 0x204990: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x204990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
label_204994:
    // 0x204994: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x204994u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_204998:
    // 0x204998: 0xc665001c  lwc1        $f5, 0x1C($s3)
    ctx->pc = 0x204998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20499c:
    // 0x20499c: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x20499cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_2049a0:
    // 0x2049a0: 0x46002d85  abs.s       $f22, $f5
    ctx->pc = 0x2049a0u;
    ctx->f[22] = FPU_ABS_S(ctx->f[5]);
label_2049a4:
    // 0x2049a4: 0xc6670020  lwc1        $f7, 0x20($s3)
    ctx->pc = 0x2049a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2049a8:
    // 0x2049a8: 0x46079142  mul.s       $f5, $f18, $f7
    ctx->pc = 0x2049a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[18], ctx->f[7]);
label_2049ac:
    // 0x2049ac: 0x46002d45  abs.s       $f21, $f5
    ctx->pc = 0x2049acu;
    ctx->f[21] = FPU_ABS_S(ctx->f[5]);
label_2049b0:
    // 0x2049b0: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x2049b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2049b4:
    // 0x2049b4: 0x46069142  mul.s       $f5, $f18, $f6
    ctx->pc = 0x2049b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[18], ctx->f[6]);
label_2049b8:
    // 0x2049b8: 0x46002d05  abs.s       $f20, $f5
    ctx->pc = 0x2049b8u;
    ctx->f[20] = FPU_ABS_S(ctx->f[5]);
label_2049bc:
    // 0x2049bc: 0xc6650028  lwc1        $f5, 0x28($s3)
    ctx->pc = 0x2049bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2049c0:
    // 0x2049c0: 0x46059442  mul.s       $f17, $f18, $f5
    ctx->pc = 0x2049c0u;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[5]);
label_2049c4:
    // 0x2049c4: 0x46008cc5  abs.s       $f19, $f17
    ctx->pc = 0x2049c4u;
    ctx->f[19] = FPU_ABS_S(ctx->f[17]);
label_2049c8:
    // 0x2049c8: 0xc671002c  lwc1        $f17, 0x2C($s3)
    ctx->pc = 0x2049c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_2049cc:
    // 0x2049cc: 0x46119442  mul.s       $f17, $f18, $f17
    ctx->pc = 0x2049ccu;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[17]);
label_2049d0:
    // 0x2049d0: 0x46008c45  abs.s       $f17, $f17
    ctx->pc = 0x2049d0u;
    ctx->f[17] = FPU_ABS_S(ctx->f[17]);
label_2049d4:
    // 0x2049d4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2049d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2049d8:
    // 0x2049d8: 0x46038400  add.s       $f16, $f16, $f3
    ctx->pc = 0x2049d8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
label_2049dc:
    // 0x2049dc: 0x460278c0  add.s       $f3, $f15, $f2
    ctx->pc = 0x2049dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[2]);
label_2049e0:
    // 0x2049e0: 0x46017080  add.s       $f2, $f14, $f1
    ctx->pc = 0x2049e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
label_2049e4:
    // 0x2049e4: 0x4600a380  add.s       $f14, $f20, $f0
    ctx->pc = 0x2049e4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2049e8:
    // 0x2049e8: 0x46162040  add.s       $f1, $f4, $f22
    ctx->pc = 0x2049e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[22]);
label_2049ec:
    // 0x2049ec: 0x460e18c0  add.s       $f3, $f3, $f14
    ctx->pc = 0x2049ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[14]);
label_2049f0:
    // 0x2049f0: 0x4600a900  add.s       $f4, $f21, $f0
    ctx->pc = 0x2049f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2049f4:
    // 0x2049f4: 0x46009b80  add.s       $f14, $f19, $f0
    ctx->pc = 0x2049f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[19], ctx->f[0]);
label_2049f8:
    // 0x2049f8: 0x46048100  add.s       $f4, $f16, $f4
    ctx->pc = 0x2049f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[16], ctx->f[4]);
label_2049fc:
    // 0x2049fc: 0x46008800  add.s       $f0, $f17, $f0
    ctx->pc = 0x2049fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[17], ctx->f[0]);
label_204a00:
    // 0x204a00: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x204a00u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_204a04:
    // 0x204a04: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x204a04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
label_204a08:
    // 0x204a08: 0xc6900034  lwc1        $f16, 0x34($s4)
    ctx->pc = 0x204a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_204a0c:
    // 0x204a0c: 0xc6910030  lwc1        $f17, 0x30($s4)
    ctx->pc = 0x204a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_204a10:
    // 0x204a10: 0xc68f0038  lwc1        $f15, 0x38($s4)
    ctx->pc = 0x204a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_204a14:
    // 0x204a14: 0x460a801a  mula.s      $f16, $f10
    ctx->pc = 0x204a14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[10]);
label_204a18:
    // 0x204a18: 0x460d881e  madda.s     $f17, $f13
    ctx->pc = 0x204a18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[13]));
label_204a1c:
    // 0x204a1c: 0x46077b5c  madd.s      $f13, $f15, $f7
    ctx->pc = 0x204a1cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_204a20:
    // 0x204a20: 0x4609801a  mula.s      $f16, $f9
    ctx->pc = 0x204a20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[9]);
label_204a24:
    // 0x204a24: 0x460c881e  madda.s     $f17, $f12
    ctx->pc = 0x204a24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[12]));
label_204a28:
    // 0x204a28: 0x46067a9c  madd.s      $f10, $f15, $f6
    ctx->pc = 0x204a28u;
    ctx->f[10] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[6]));
label_204a2c:
    // 0x204a2c: 0x4608801a  mula.s      $f16, $f8
    ctx->pc = 0x204a2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
label_204a30:
    // 0x204a30: 0x460b881e  madda.s     $f17, $f11
    ctx->pc = 0x204a30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[11]));
label_204a34:
    // 0x204a34: 0xc66b0030  lwc1        $f11, 0x30($s3)
    ctx->pc = 0x204a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_204a38:
    // 0x204a38: 0xc6690034  lwc1        $f9, 0x34($s3)
    ctx->pc = 0x204a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_204a3c:
    // 0x204a3c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x204a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_204a40:
    // 0x204a40: 0x460d5ac0  add.s       $f11, $f11, $f13
    ctx->pc = 0x204a40u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[13]);
label_204a44:
    // 0x204a44: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x204a44u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
label_204a48:
    // 0x204a48: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x204a48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_204a4c:
    // 0x204a4c: 0xc6670038  lwc1        $f7, 0x38($s3)
    ctx->pc = 0x204a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_204a50:
    // 0x204a50: 0x46057a1c  madd.s      $f8, $f15, $f5
    ctx->pc = 0x204a50u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[5]));
label_204a54:
    // 0x204a54: 0x4600a487  neg.s       $f18, $f20
    ctx->pc = 0x204a54u;
    ctx->f[18] = FPU_NEG_S(ctx->f[20]);
label_204a58:
    // 0x204a58: 0x46083a00  add.s       $f8, $f7, $f8
    ctx->pc = 0x204a58u;
    ctx->f[8] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_204a5c:
    // 0x204a5c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x204a5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_204a60:
    // 0x204a60: 0x460b21c0  add.s       $f7, $f4, $f11
    ctx->pc = 0x204a60u;
    ctx->f[7] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
label_204a64:
    // 0x204a64: 0x460024c7  neg.s       $f19, $f4
    ctx->pc = 0x204a64u;
    ctx->f[19] = FPU_NEG_S(ctx->f[4]);
label_204a68:
    // 0x204a68: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x204a68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_204a6c:
    // 0x204a6c: 0xe6470010  swc1        $f7, 0x10($s2)
    ctx->pc = 0x204a6cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_204a70:
    // 0x204a70: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x204a70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_204a74:
    // 0x204a74: 0xe6430014  swc1        $f3, 0x14($s2)
    ctx->pc = 0x204a74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_204a78:
    // 0x204a78: 0x460ea180  add.s       $f6, $f20, $f14
    ctx->pc = 0x204a78u;
    ctx->f[6] = FPU_ADD_S(ctx->f[20], ctx->f[14]);
label_204a7c:
    // 0x204a7c: 0xe6420018  swc1        $f2, 0x18($s2)
    ctx->pc = 0x204a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_204a80:
    // 0x204a80: 0x460b9900  add.s       $f4, $f19, $f11
    ctx->pc = 0x204a80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[19], ctx->f[11]);
label_204a84:
    // 0x204a84: 0xe646001c  swc1        $f6, 0x1C($s2)
    ctx->pc = 0x204a84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_204a88:
    // 0x204a88: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x204a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_204a8c:
    // 0x204a8c: 0xe6440000  swc1        $f4, 0x0($s2)
    ctx->pc = 0x204a8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_204a90:
    // 0x204a90: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x204a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_204a94:
    // 0x204a94: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x204a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_204a98:
    // 0x204a98: 0x460e9140  add.s       $f5, $f18, $f14
    ctx->pc = 0x204a98u;
    ctx->f[5] = FPU_ADD_S(ctx->f[18], ctx->f[14]);
label_204a9c:
    // 0x204a9c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x204a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_204aa0:
    // 0x204aa0: 0xe7ab0070  swc1        $f11, 0x70($sp)
    ctx->pc = 0x204aa0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_204aa4:
    // 0x204aa4: 0xe7a90074  swc1        $f9, 0x74($sp)
    ctx->pc = 0x204aa4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_204aa8:
    // 0x204aa8: 0xe7a80078  swc1        $f8, 0x78($sp)
    ctx->pc = 0x204aa8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_204aac:
    // 0x204aac: 0x1000004e  b           . + 4 + (0x4E << 2)
label_204ab0:
    if (ctx->pc == 0x204AB0u) {
        ctx->pc = 0x204AB0u;
            // 0x204ab0: 0xe645000c  swc1        $f5, 0xC($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->pc = 0x204AB4u;
        goto label_204ab4;
    }
    ctx->pc = 0x204AACu;
    {
        const bool branch_taken_0x204aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204AACu;
            // 0x204ab0: 0xe645000c  swc1        $f5, 0xC($s2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204aac) {
            ctx->pc = 0x204BE8u;
            goto label_204be8;
        }
    }
    ctx->pc = 0x204AB4u;
label_204ab4:
    // 0x204ab4: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x204ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_204ab8:
    // 0x204ab8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x204ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204abc:
    // 0x204abc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204ac0:
    // 0x204ac0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x204ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_204ac4:
    // 0x204ac4: 0x320f809  jalr        $t9
label_204ac8:
    if (ctx->pc == 0x204AC8u) {
        ctx->pc = 0x204ACCu;
        goto label_204acc;
    }
    ctx->pc = 0x204AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204ACCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x204ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204ACCu; }
            if (ctx->pc != 0x204ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x204ACCu;
label_204acc:
    // 0x204acc: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x204accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_204ad0:
    // 0x204ad0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x204ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_204ad4:
    // 0x204ad4: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
label_204ad8:
    if (ctx->pc == 0x204AD8u) {
        ctx->pc = 0x204AD8u;
            // 0x204ad8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x204ADCu;
        goto label_204adc;
    }
    ctx->pc = 0x204AD4u;
    {
        const bool branch_taken_0x204ad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x204AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204AD4u;
            // 0x204ad8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ad4) {
            ctx->pc = 0x204BE8u;
            goto label_204be8;
        }
    }
    ctx->pc = 0x204ADCu;
label_204adc:
    // 0x204adc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_204ae0:
    // 0x204ae0: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x204ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_204ae4:
    // 0x204ae4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x204ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204ae8:
    // 0x204ae8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x204ae8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_204aec:
    // 0x204aec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x204aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_204af0:
    // 0x204af0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x204af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204af4:
    // 0x204af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204af8:
    // 0x204af8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_204afc:
    // 0x204afc: 0x320f809  jalr        $t9
label_204b00:
    if (ctx->pc == 0x204B00u) {
        ctx->pc = 0x204B00u;
            // 0x204b00: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x204B04u;
        goto label_204b04;
    }
    ctx->pc = 0x204AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204B04u);
        ctx->pc = 0x204B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204AFCu;
            // 0x204b00: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204B04u; }
            if (ctx->pc != 0x204B04u) { return; }
        }
        }
    }
    ctx->pc = 0x204B04u;
label_204b04:
    // 0x204b04: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x204b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204b08:
    // 0x204b08: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x204b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204b0c:
    // 0x204b0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x204b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204b10:
    // 0x204b10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_204b14:
    if (ctx->pc == 0x204B14u) {
        ctx->pc = 0x204B14u;
            // 0x204b14: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x204B18u;
        goto label_204b18;
    }
    ctx->pc = 0x204B10u;
    {
        const bool branch_taken_0x204b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x204B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204B10u;
            // 0x204b14: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b10) {
            ctx->pc = 0x204B20u;
            goto label_204b20;
        }
    }
    ctx->pc = 0x204B18u;
label_204b18:
    // 0x204b18: 0x10000003  b           . + 4 + (0x3 << 2)
label_204b1c:
    if (ctx->pc == 0x204B1Cu) {
        ctx->pc = 0x204B1Cu;
            // 0x204b1c: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x204B20u;
        goto label_204b20;
    }
    ctx->pc = 0x204B18u;
    {
        const bool branch_taken_0x204b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204B18u;
            // 0x204b1c: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b18) {
            ctx->pc = 0x204B28u;
            goto label_204b28;
        }
    }
    ctx->pc = 0x204B20u;
label_204b20:
    // 0x204b20: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x204b20u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_204b24:
    // 0x204b24: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x204b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_204b28:
    // 0x204b28: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x204b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204b2c:
    // 0x204b2c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x204b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204b30:
    // 0x204b30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x204b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204b34:
    // 0x204b34: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_204b38:
    if (ctx->pc == 0x204B38u) {
        ctx->pc = 0x204B38u;
            // 0x204b38: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x204B3Cu;
        goto label_204b3c;
    }
    ctx->pc = 0x204B34u;
    {
        const bool branch_taken_0x204b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204b34) {
            ctx->pc = 0x204B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204B34u;
            // 0x204b38: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204B3Cu;
            goto label_204b3c;
        }
    }
    ctx->pc = 0x204B3Cu;
label_204b3c:
    // 0x204b3c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x204b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_204b40:
    // 0x204b40: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x204b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204b44:
    // 0x204b44: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x204b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204b48:
    // 0x204b48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x204b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204b4c:
    // 0x204b4c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_204b50:
    if (ctx->pc == 0x204B50u) {
        ctx->pc = 0x204B50u;
            // 0x204b50: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x204B54u;
        goto label_204b54;
    }
    ctx->pc = 0x204B4Cu;
    {
        const bool branch_taken_0x204b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204b4c) {
            ctx->pc = 0x204B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204B4Cu;
            // 0x204b50: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204B54u;
            goto label_204b54;
        }
    }
    ctx->pc = 0x204B54u;
label_204b54:
    // 0x204b54: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x204b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_204b58:
    // 0x204b58: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x204b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204b5c:
    // 0x204b5c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x204b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204b60:
    // 0x204b60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x204b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204b64:
    // 0x204b64: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_204b68:
    if (ctx->pc == 0x204B68u) {
        ctx->pc = 0x204B68u;
            // 0x204b68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x204B6Cu;
        goto label_204b6c;
    }
    ctx->pc = 0x204B64u;
    {
        const bool branch_taken_0x204b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204b64) {
            ctx->pc = 0x204B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204B64u;
            // 0x204b68: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204B6Cu;
            goto label_204b6c;
        }
    }
    ctx->pc = 0x204B6Cu;
label_204b6c:
    // 0x204b6c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x204b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_204b70:
    // 0x204b70: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x204b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204b74:
    // 0x204b74: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x204b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204b78:
    // 0x204b78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x204b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204b7c:
    // 0x204b7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_204b80:
    if (ctx->pc == 0x204B80u) {
        ctx->pc = 0x204B80u;
            // 0x204b80: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x204B84u;
        goto label_204b84;
    }
    ctx->pc = 0x204B7Cu;
    {
        const bool branch_taken_0x204b7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204b7c) {
            ctx->pc = 0x204B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204B7Cu;
            // 0x204b80: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204B84u;
            goto label_204b84;
        }
    }
    ctx->pc = 0x204B84u;
label_204b84:
    // 0x204b84: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x204b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_204b88:
    // 0x204b88: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x204b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204b8c:
    // 0x204b8c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x204b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204b90:
    // 0x204b90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x204b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204b94:
    // 0x204b94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_204b98:
    if (ctx->pc == 0x204B98u) {
        ctx->pc = 0x204B98u;
            // 0x204b98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x204B9Cu;
        goto label_204b9c;
    }
    ctx->pc = 0x204B94u;
    {
        const bool branch_taken_0x204b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204b94) {
            ctx->pc = 0x204B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204B94u;
            // 0x204b98: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204B9Cu;
            goto label_204b9c;
        }
    }
    ctx->pc = 0x204B9Cu;
label_204b9c:
    // 0x204b9c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x204b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_204ba0:
    // 0x204ba0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x204ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204ba4:
    // 0x204ba4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x204ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204ba8:
    // 0x204ba8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x204ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204bac:
    // 0x204bac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_204bb0:
    if (ctx->pc == 0x204BB0u) {
        ctx->pc = 0x204BB0u;
            // 0x204bb0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x204BB4u;
        goto label_204bb4;
    }
    ctx->pc = 0x204BACu;
    {
        const bool branch_taken_0x204bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204bac) {
            ctx->pc = 0x204BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204BACu;
            // 0x204bb0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204BB4u;
            goto label_204bb4;
        }
    }
    ctx->pc = 0x204BB4u;
label_204bb4:
    // 0x204bb4: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x204bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_204bb8:
    // 0x204bb8: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x204bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204bbc:
    // 0x204bbc: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x204bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204bc0:
    // 0x204bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x204bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204bc4:
    // 0x204bc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_204bc8:
    if (ctx->pc == 0x204BC8u) {
        ctx->pc = 0x204BC8u;
            // 0x204bc8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x204BCCu;
        goto label_204bcc;
    }
    ctx->pc = 0x204BC4u;
    {
        const bool branch_taken_0x204bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204bc4) {
            ctx->pc = 0x204BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204BC4u;
            // 0x204bc8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x204BCCu;
            goto label_204bcc;
        }
    }
    ctx->pc = 0x204BCCu;
label_204bcc:
    // 0x204bcc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x204bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_204bd0:
    // 0x204bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x204bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_204bd4:
    // 0x204bd4: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_204bd8:
    // 0x204bd8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x204bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_204bdc:
    // 0x204bdc: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_204be0:
    if (ctx->pc == 0x204BE0u) {
        ctx->pc = 0x204BE0u;
            // 0x204be0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x204BE4u;
        goto label_204be4;
    }
    ctx->pc = 0x204BDCu;
    {
        const bool branch_taken_0x204bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204BDCu;
            // 0x204be0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bdc) {
            ctx->pc = 0x204AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204ae0;
        }
    }
    ctx->pc = 0x204BE4u;
label_204be4:
    // 0x204be4: 0x0  nop
    ctx->pc = 0x204be4u;
    // NOP
label_204be8:
    // 0x204be8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x204be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_204bec:
    // 0x204bec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x204becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204bf0:
    // 0x204bf0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x204bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_204bf4:
    // 0x204bf4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x204bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204bf8:
    // 0x204bf8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x204bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_204bfc:
    // 0x204bfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x204bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204c00:
    // 0x204c00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x204c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_204c04:
    // 0x204c04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204c08:
    // 0x204c08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x204c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204c0c:
    // 0x204c0c: 0x3e00008  jr          $ra
label_204c10:
    if (ctx->pc == 0x204C10u) {
        ctx->pc = 0x204C10u;
            // 0x204c10: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x204C14u;
        goto label_204c14;
    }
    ctx->pc = 0x204C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C0Cu;
            // 0x204c10: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204C14u;
label_204c14:
    // 0x204c14: 0x0  nop
    ctx->pc = 0x204c14u;
    // NOP
label_204c18:
    // 0x204c18: 0x0  nop
    ctx->pc = 0x204c18u;
    // NOP
label_204c1c:
    // 0x204c1c: 0x0  nop
    ctx->pc = 0x204c1cu;
    // NOP
label_204c20:
    // 0x204c20: 0x3e00008  jr          $ra
label_204c24:
    if (ctx->pc == 0x204C24u) {
        ctx->pc = 0x204C24u;
            // 0x204c24: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x204C28u;
        goto label_204c28;
    }
    ctx->pc = 0x204C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C20u;
            // 0x204c24: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204C28u;
label_204c28:
    // 0x204c28: 0x0  nop
    ctx->pc = 0x204c28u;
    // NOP
label_204c2c:
    // 0x204c2c: 0x0  nop
    ctx->pc = 0x204c2cu;
    // NOP
label_204c30:
    // 0x204c30: 0x3e00008  jr          $ra
label_204c34:
    if (ctx->pc == 0x204C34u) {
        ctx->pc = 0x204C34u;
            // 0x204c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204C38u;
        goto label_204c38;
    }
    ctx->pc = 0x204C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C30u;
            // 0x204c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204C38u;
label_204c38:
    // 0x204c38: 0x0  nop
    ctx->pc = 0x204c38u;
    // NOP
label_204c3c:
    // 0x204c3c: 0x0  nop
    ctx->pc = 0x204c3cu;
    // NOP
label_204c40:
    // 0x204c40: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_204c44:
    // 0x204c44: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x204c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_204c48:
    // 0x204c48: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x204c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_204c4c:
    // 0x204c4c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_204c50:
    if (ctx->pc == 0x204C50u) {
        ctx->pc = 0x204C50u;
            // 0x204c50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x204C54u;
        goto label_204c54;
    }
    ctx->pc = 0x204C4Cu;
    {
        const bool branch_taken_0x204c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204c4c) {
            ctx->pc = 0x204C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204C4Cu;
            // 0x204c50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204C54u;
            goto label_204c54;
        }
    }
    ctx->pc = 0x204C54u;
label_204c54:
    // 0x204c54: 0x3e00008  jr          $ra
label_204c58:
    if (ctx->pc == 0x204C58u) {
        ctx->pc = 0x204C5Cu;
        goto label_204c5c;
    }
    ctx->pc = 0x204C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204C5Cu;
label_204c5c:
    // 0x204c5c: 0x0  nop
    ctx->pc = 0x204c5cu;
    // NOP
label_204c60:
    // 0x204c60: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x204c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_204c64:
    // 0x204c64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_204c68:
    // 0x204c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204c6c:
    // 0x204c6c: 0x3e00008  jr          $ra
label_204c70:
    if (ctx->pc == 0x204C70u) {
        ctx->pc = 0x204C70u;
            // 0x204c70: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x204C74u;
        goto label_204c74;
    }
    ctx->pc = 0x204C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C6Cu;
            // 0x204c70: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204C74u;
label_204c74:
    // 0x204c74: 0x0  nop
    ctx->pc = 0x204c74u;
    // NOP
label_204c78:
    // 0x204c78: 0x0  nop
    ctx->pc = 0x204c78u;
    // NOP
label_204c7c:
    // 0x204c7c: 0x0  nop
    ctx->pc = 0x204c7cu;
    // NOP
label_204c80:
    // 0x204c80: 0x3e00008  jr          $ra
label_204c84:
    if (ctx->pc == 0x204C84u) {
        ctx->pc = 0x204C84u;
            // 0x204c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204C88u;
        goto label_204c88;
    }
    ctx->pc = 0x204C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C80u;
            // 0x204c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204C88u;
label_204c88:
    // 0x204c88: 0x0  nop
    ctx->pc = 0x204c88u;
    // NOP
label_204c8c:
    // 0x204c8c: 0x0  nop
    ctx->pc = 0x204c8cu;
    // NOP
label_204c90:
    // 0x204c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_204c94:
    // 0x204c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204c98:
    // 0x204c98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x204c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_204c9c:
    // 0x204c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_204ca0:
    // 0x204ca0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_204ca4:
    // 0x204ca4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x204ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204ca8:
    // 0x204ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204cac:
    // 0x204cac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x204cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204cb0:
    // 0x204cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204cb4:
    // 0x204cb4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x204cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_204cb8:
    // 0x204cb8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x204cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_204cbc:
    // 0x204cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204cc0:
    // 0x204cc0: 0x24a5b700  addiu       $a1, $a1, -0x4900
    ctx->pc = 0x204cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
label_204cc4:
    // 0x204cc4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x204cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_204cc8:
    // 0x204cc8: 0x320f809  jalr        $t9
label_204ccc:
    if (ctx->pc == 0x204CCCu) {
        ctx->pc = 0x204CCCu;
            // 0x204ccc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204CD0u;
        goto label_204cd0;
    }
    ctx->pc = 0x204CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204CD0u);
        ctx->pc = 0x204CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204CC8u;
            // 0x204ccc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204CD0u; }
            if (ctx->pc != 0x204CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x204CD0u;
label_204cd0:
    // 0x204cd0: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x204cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_204cd4:
    // 0x204cd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x204cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_204cd8:
    // 0x204cd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x204cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_204cdc:
    // 0x204cdc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_204ce0:
    if (ctx->pc == 0x204CE0u) {
        ctx->pc = 0x204CE0u;
            // 0x204ce0: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->pc = 0x204CE4u;
        goto label_204ce4;
    }
    ctx->pc = 0x204CDCu;
    {
        const bool branch_taken_0x204cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204cdc) {
            ctx->pc = 0x204CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204CDCu;
            // 0x204ce0: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204D1Cu;
            goto label_204d1c;
        }
    }
    ctx->pc = 0x204CE4u;
label_204ce4:
    // 0x204ce4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_204ce8:
    // 0x204ce8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x204ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_204cec:
    // 0x204cec: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x204cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_204cf0:
    // 0x204cf0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x204cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_204cf4:
    // 0x204cf4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x204cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_204cf8:
    // 0x204cf8: 0x8e670044  lw          $a3, 0x44($s3)
    ctx->pc = 0x204cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_204cfc:
    // 0x204cfc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x204cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_204d00:
    // 0x204d00: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x204d00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_204d04:
    // 0x204d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204d08:
    // 0x204d08: 0x24a5b710  addiu       $a1, $a1, -0x48F0
    ctx->pc = 0x204d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948624));
label_204d0c:
    // 0x204d0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204d10:
    // 0x204d10: 0x320f809  jalr        $t9
label_204d14:
    if (ctx->pc == 0x204D14u) {
        ctx->pc = 0x204D14u;
            // 0x204d14: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x204D18u;
        goto label_204d18;
    }
    ctx->pc = 0x204D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204D18u);
        ctx->pc = 0x204D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D10u;
            // 0x204d14: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204D18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204D18u; }
            if (ctx->pc != 0x204D18u) { return; }
        }
        }
    }
    ctx->pc = 0x204D18u;
label_204d18:
    // 0x204d18: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x204d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_204d1c:
    // 0x204d1c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_204d20:
    if (ctx->pc == 0x204D20u) {
        ctx->pc = 0x204D20u;
            // 0x204d20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204D24u;
        goto label_204d24;
    }
    ctx->pc = 0x204D1Cu;
    {
        const bool branch_taken_0x204d1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x204D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D1Cu;
            // 0x204d20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d1c) {
            ctx->pc = 0x204D68u;
            goto label_204d68;
        }
    }
    ctx->pc = 0x204D24u;
label_204d24:
    // 0x204d24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204d28:
    // 0x204d28: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x204d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_204d2c:
    // 0x204d2c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x204d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_204d30:
    // 0x204d30: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x204d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_204d34:
    // 0x204d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204d38:
    // 0x204d38: 0x24a5b720  addiu       $a1, $a1, -0x48E0
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948640));
label_204d3c:
    // 0x204d3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x204d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_204d40:
    // 0x204d40: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204d44:
    // 0x204d44: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_204d48:
    // 0x204d48: 0x320f809  jalr        $t9
label_204d4c:
    if (ctx->pc == 0x204D4Cu) {
        ctx->pc = 0x204D4Cu;
            // 0x204d4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x204D50u;
        goto label_204d50;
    }
    ctx->pc = 0x204D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204D50u);
        ctx->pc = 0x204D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D48u;
            // 0x204d4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204D50u; }
            if (ctx->pc != 0x204D50u) { return; }
        }
        }
    }
    ctx->pc = 0x204D50u;
label_204d50:
    // 0x204d50: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x204d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_204d54:
    // 0x204d54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_204d58:
    // 0x204d58: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x204d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_204d5c:
    // 0x204d5c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_204d60:
    if (ctx->pc == 0x204D60u) {
        ctx->pc = 0x204D60u;
            // 0x204d60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x204D64u;
        goto label_204d64;
    }
    ctx->pc = 0x204D5Cu;
    {
        const bool branch_taken_0x204d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D5Cu;
            // 0x204d60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d5c) {
            ctx->pc = 0x204D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204d28;
        }
    }
    ctx->pc = 0x204D64u;
label_204d64:
    // 0x204d64: 0x0  nop
    ctx->pc = 0x204d64u;
    // NOP
label_204d68:
    // 0x204d68: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x204d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_204d6c:
    // 0x204d6c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x204d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_204d70:
    // 0x204d70: 0x320f809  jalr        $t9
label_204d74:
    if (ctx->pc == 0x204D74u) {
        ctx->pc = 0x204D74u;
            // 0x204d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204D78u;
        goto label_204d78;
    }
    ctx->pc = 0x204D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204D78u);
        ctx->pc = 0x204D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D70u;
            // 0x204d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204D78u; }
            if (ctx->pc != 0x204D78u) { return; }
        }
        }
    }
    ctx->pc = 0x204D78u;
label_204d78:
    // 0x204d78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x204d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_204d7c:
    // 0x204d7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204d80:
    // 0x204d80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204d80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204d84:
    // 0x204d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204d88:
    // 0x204d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_204d8c:
    // 0x204d8c: 0x3e00008  jr          $ra
label_204d90:
    if (ctx->pc == 0x204D90u) {
        ctx->pc = 0x204D90u;
            // 0x204d90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x204D94u;
        goto label_204d94;
    }
    ctx->pc = 0x204D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D8Cu;
            // 0x204d90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204D94u;
label_204d94:
    // 0x204d94: 0x0  nop
    ctx->pc = 0x204d94u;
    // NOP
label_204d98:
    // 0x204d98: 0x0  nop
    ctx->pc = 0x204d98u;
    // NOP
label_204d9c:
    // 0x204d9c: 0x0  nop
    ctx->pc = 0x204d9cu;
    // NOP
label_204da0:
    // 0x204da0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x204da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_204da4:
    // 0x204da4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x204da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_204da8:
    // 0x204da8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x204da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_204dac:
    // 0x204dac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x204dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_204db0:
    // 0x204db0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x204db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_204db4:
    // 0x204db4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x204db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_204db8:
    // 0x204db8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x204db8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204dbc:
    // 0x204dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_204dc0:
    // 0x204dc0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x204dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_204dc4:
    // 0x204dc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_204dc8:
    // 0x204dc8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x204dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204dcc:
    // 0x204dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204dd0:
    // 0x204dd0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x204dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_204dd4:
    // 0x204dd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204dd8:
    // 0x204dd8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x204dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_204ddc:
    // 0x204ddc: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x204ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_204de0:
    // 0x204de0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x204de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_204de4:
    // 0x204de4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x204de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_204de8:
    // 0x204de8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_204dec:
    if (ctx->pc == 0x204DECu) {
        ctx->pc = 0x204DECu;
            // 0x204dec: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x204DF0u;
        goto label_204df0;
    }
    ctx->pc = 0x204DE8u;
    {
        const bool branch_taken_0x204de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204DE8u;
            // 0x204dec: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204de8) {
            ctx->pc = 0x204E18u;
            goto label_204e18;
        }
    }
    ctx->pc = 0x204DF0u;
label_204df0:
    // 0x204df0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_204df4:
    // 0x204df4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x204df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_204df8:
    // 0x204df8: 0x2442b728  addiu       $v0, $v0, -0x48D8
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948648));
label_204dfc:
    // 0x204dfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x204dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_204e00:
    // 0x204e00: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x204e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_204e04:
    // 0x204e04: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x204e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_204e08:
    // 0x204e08: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x204e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_204e0c:
    // 0x204e0c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x204e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_204e10:
    // 0x204e10: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x204e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_204e14:
    // 0x204e14: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x204e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_204e18:
    // 0x204e18: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x204e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_204e1c:
    // 0x204e1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x204e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_204e20:
    // 0x204e20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_204e24:
    // 0x204e24: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x204e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_204e28:
    // 0x204e28: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_204e2c:
    // 0x204e2c: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x204e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_204e30:
    // 0x204e30: 0x320f809  jalr        $t9
label_204e34:
    if (ctx->pc == 0x204E34u) {
        ctx->pc = 0x204E34u;
            // 0x204e34: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x204E38u;
        goto label_204e38;
    }
    ctx->pc = 0x204E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204E38u);
        ctx->pc = 0x204E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E30u;
            // 0x204e34: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204E38u; }
            if (ctx->pc != 0x204E38u) { return; }
        }
        }
    }
    ctx->pc = 0x204E38u;
label_204e38:
    // 0x204e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204e3c:
    // 0x204e3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x204e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204e40:
    // 0x204e40: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
label_204e44:
    if (ctx->pc == 0x204E44u) {
        ctx->pc = 0x204E48u;
        goto label_204e48;
    }
    ctx->pc = 0x204E40u;
    {
        const bool branch_taken_0x204e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x204e40) {
            ctx->pc = 0x204EB8u;
            goto label_204eb8;
        }
    }
    ctx->pc = 0x204E48u;
label_204e48:
    // 0x204e48: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x204e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_204e4c:
    // 0x204e4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x204e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_204e50:
    // 0x204e50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_204e54:
    // 0x204e54: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x204e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_204e58:
    // 0x204e58: 0x320f809  jalr        $t9
label_204e5c:
    if (ctx->pc == 0x204E5Cu) {
        ctx->pc = 0x204E5Cu;
            // 0x204e5c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x204E60u;
        goto label_204e60;
    }
    ctx->pc = 0x204E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204E60u);
        ctx->pc = 0x204E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E58u;
            // 0x204e5c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204E60u; }
            if (ctx->pc != 0x204E60u) { return; }
        }
        }
    }
    ctx->pc = 0x204E60u;
label_204e60:
    // 0x204e60: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x204e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204e64:
    // 0x204e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204e68:
    // 0x204e68: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x204e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_204e6c:
    // 0x204e6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x204e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204e70:
    // 0x204e70: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_204e74:
    // 0x204e74: 0x320f809  jalr        $t9
label_204e78:
    if (ctx->pc == 0x204E78u) {
        ctx->pc = 0x204E78u;
            // 0x204e78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204E7Cu;
        goto label_204e7c;
    }
    ctx->pc = 0x204E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204E7Cu);
        ctx->pc = 0x204E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E74u;
            // 0x204e78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204E7Cu; }
            if (ctx->pc != 0x204E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x204E7Cu;
label_204e7c:
    // 0x204e7c: 0x83a20278  lb          $v0, 0x278($sp)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 632)));
label_204e80:
    // 0x204e80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_204e84:
    if (ctx->pc == 0x204E84u) {
        ctx->pc = 0x204E88u;
        goto label_204e88;
    }
    ctx->pc = 0x204E80u;
    {
        const bool branch_taken_0x204e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e80) {
            ctx->pc = 0x204E90u;
            goto label_204e90;
        }
    }
    ctx->pc = 0x204E88u;
label_204e88:
    // 0x204e88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x204e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_204e8c:
    // 0x204e8c: 0x0  nop
    ctx->pc = 0x204e8cu;
    // NOP
label_204e90:
    // 0x204e90: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x204e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_204e94:
    // 0x204e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_204e98:
    // 0x204e98: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x204e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_204e9c:
    // 0x204e9c: 0x320f809  jalr        $t9
label_204ea0:
    if (ctx->pc == 0x204EA0u) {
        ctx->pc = 0x204EA0u;
            // 0x204ea0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204EA4u;
        goto label_204ea4;
    }
    ctx->pc = 0x204E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204EA4u);
        ctx->pc = 0x204EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E9Cu;
            // 0x204ea0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204EA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204EA4u; }
            if (ctx->pc != 0x204EA4u) { return; }
        }
        }
    }
    ctx->pc = 0x204EA4u;
label_204ea4:
    // 0x204ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204ea8:
    // 0x204ea8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204eac:
    // 0x204eac: 0x5602ffe7  bnel        $s0, $v0, . + 4 + (-0x19 << 2)
label_204eb0:
    if (ctx->pc == 0x204EB0u) {
        ctx->pc = 0x204EB0u;
            // 0x204eb0: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x204EB4u;
        goto label_204eb4;
    }
    ctx->pc = 0x204EACu;
    {
        const bool branch_taken_0x204eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x204eac) {
            ctx->pc = 0x204EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204EACu;
            // 0x204eb0: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204E4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204e4c;
        }
    }
    ctx->pc = 0x204EB4u;
label_204eb4:
    // 0x204eb4: 0x0  nop
    ctx->pc = 0x204eb4u;
    // NOP
label_204eb8:
    // 0x204eb8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_204ebc:
    // 0x204ebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204ec0:
    // 0x204ec0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_204ec4:
    // 0x204ec4: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_204ec8:
    if (ctx->pc == 0x204EC8u) {
        ctx->pc = 0x204EC8u;
            // 0x204ec8: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x204ECCu;
        goto label_204ecc;
    }
    ctx->pc = 0x204EC4u;
    {
        const bool branch_taken_0x204ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x204EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204EC4u;
            // 0x204ec8: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ec4) {
            ctx->pc = 0x204EDCu;
            goto label_204edc;
        }
    }
    ctx->pc = 0x204ECCu;
label_204ecc:
    // 0x204ecc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x204eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_204ed0:
    // 0x204ed0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x204ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_204ed4:
    // 0x204ed4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_204ed8:
    // 0x204ed8: 0xac510020  sw          $s1, 0x20($v0)
    ctx->pc = 0x204ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
label_204edc:
    // 0x204edc: 0x2201027  not         $v0, $s1
    ctx->pc = 0x204edcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 17) | GPR_U64(ctx, 0)));
label_204ee0:
    // 0x204ee0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x204ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_204ee4:
    // 0x204ee4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x204ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_204ee8:
    // 0x204ee8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x204ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_204eec:
    // 0x204eec: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x204eecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_204ef0:
    // 0x204ef0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_204ef4:
    // 0x204ef4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x204ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_204ef8:
    // 0x204ef8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x204ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_204efc:
    // 0x204efc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x204efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_204f00:
    // 0x204f00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_204f04:
    if (ctx->pc == 0x204F04u) {
        ctx->pc = 0x204F04u;
            // 0x204f04: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x204F08u;
        goto label_204f08;
    }
    ctx->pc = 0x204F00u;
    {
        const bool branch_taken_0x204f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204F00u;
            // 0x204f04: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204f00) {
            ctx->pc = 0x204F30u;
            goto label_204f30;
        }
    }
    ctx->pc = 0x204F08u;
label_204f08:
    // 0x204f08: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_204f0c:
    // 0x204f0c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x204f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_204f10:
    // 0x204f10: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_204f14:
    // 0x204f14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x204f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_204f18:
    // 0x204f18: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_204f1c:
    // 0x204f1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x204f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_204f20:
    // 0x204f20: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_204f24:
    // 0x204f24: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x204f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_204f28:
    // 0x204f28: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x204f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_204f2c:
    // 0x204f2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x204f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_204f30:
    // 0x204f30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x204f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_204f34:
    // 0x204f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204f38:
    // 0x204f38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x204f38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204f3c:
    // 0x204f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x204f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204f40:
    // 0x204f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204f44:
    // 0x204f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204f48:
    // 0x204f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204f4c:
    // 0x204f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_204f50:
    // 0x204f50: 0x3e00008  jr          $ra
label_204f54:
    if (ctx->pc == 0x204F54u) {
        ctx->pc = 0x204F54u;
            // 0x204f54: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x204F58u;
        goto label_204f58;
    }
    ctx->pc = 0x204F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204F50u;
            // 0x204f54: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204F58u;
label_204f58:
    // 0x204f58: 0x0  nop
    ctx->pc = 0x204f58u;
    // NOP
label_204f5c:
    // 0x204f5c: 0x0  nop
    ctx->pc = 0x204f5cu;
    // NOP
label_204f60:
    // 0x204f60: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x204f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_204f64:
    // 0x204f64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x204f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_204f68:
    // 0x204f68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x204f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_204f6c:
    // 0x204f6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x204f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_204f70:
    // 0x204f70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x204f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_204f74:
    // 0x204f74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_204f78:
    // 0x204f78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x204f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204f7c:
    // 0x204f7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_204f80:
    // 0x204f80: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_204f84:
    // 0x204f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204f88:
    // 0x204f88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x204f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204f8c:
    // 0x204f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204f90:
    // 0x204f90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x204f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_204f94:
    // 0x204f94: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x204f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_204f98:
    // 0x204f98: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x204f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_204f9c:
    // 0x204f9c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x204f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_204fa0:
    // 0x204fa0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x204fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_204fa4:
    // 0x204fa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_204fa8:
    if (ctx->pc == 0x204FA8u) {
        ctx->pc = 0x204FA8u;
            // 0x204fa8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x204FACu;
        goto label_204fac;
    }
    ctx->pc = 0x204FA4u;
    {
        const bool branch_taken_0x204fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204FA4u;
            // 0x204fa8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fa4) {
            ctx->pc = 0x204FD4u;
            goto label_204fd4;
        }
    }
    ctx->pc = 0x204FACu;
label_204fac:
    // 0x204fac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_204fb0:
    // 0x204fb0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x204fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_204fb4:
    // 0x204fb4: 0x2442b738  addiu       $v0, $v0, -0x48C8
    ctx->pc = 0x204fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948664));
label_204fb8:
    // 0x204fb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x204fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_204fbc:
    // 0x204fbc: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x204fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_204fc0:
    // 0x204fc0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x204fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_204fc4:
    // 0x204fc4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_204fc8:
    // 0x204fc8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x204fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_204fcc:
    // 0x204fcc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x204fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_204fd0:
    // 0x204fd0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x204fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_204fd4:
    // 0x204fd4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x204fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_204fd8:
    // 0x204fd8: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x204fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_204fdc:
    // 0x204fdc: 0x320f809  jalr        $t9
label_204fe0:
    if (ctx->pc == 0x204FE0u) {
        ctx->pc = 0x204FE0u;
            // 0x204fe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204FE4u;
        goto label_204fe4;
    }
    ctx->pc = 0x204FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204FE4u);
        ctx->pc = 0x204FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204FDCu;
            // 0x204fe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204FE4u; }
            if (ctx->pc != 0x204FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x204FE4u;
label_204fe4:
    // 0x204fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204fe8:
    // 0x204fe8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x204fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204fec:
    // 0x204fec: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
label_204ff0:
    if (ctx->pc == 0x204FF0u) {
        ctx->pc = 0x204FF4u;
        goto label_204ff4;
    }
    ctx->pc = 0x204FECu;
    {
        const bool branch_taken_0x204fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x204fec) {
            ctx->pc = 0x205060u;
            goto label_205060;
        }
    }
    ctx->pc = 0x204FF4u;
label_204ff4:
    // 0x204ff4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x204ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_204ff8:
    // 0x204ff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x204ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_204ffc:
    // 0x204ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205000:
    // 0x205000: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x205000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_205004:
    // 0x205004: 0x320f809  jalr        $t9
label_205008:
    if (ctx->pc == 0x205008u) {
        ctx->pc = 0x205008u;
            // 0x205008: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20500Cu;
        goto label_20500c;
    }
    ctx->pc = 0x205004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20500Cu);
        ctx->pc = 0x205008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205004u;
            // 0x205008: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20500Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20500Cu; }
            if (ctx->pc != 0x20500Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20500Cu;
label_20500c:
    // 0x20500c: 0xafb2006c  sw          $s2, 0x6C($sp)
    ctx->pc = 0x20500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 18));
label_205010:
    // 0x205010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205014:
    // 0x205014: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x205014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_205018:
    // 0x205018: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x205018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20501c:
    // 0x20501c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_205020:
    // 0x205020: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x205020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_205024:
    // 0x205024: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x205024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_205028:
    // 0x205028: 0xafb00064  sw          $s0, 0x64($sp)
    ctx->pc = 0x205028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 16));
label_20502c:
    // 0x20502c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205030:
    // 0x205030: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_205034:
    // 0x205034: 0x320f809  jalr        $t9
label_205038:
    if (ctx->pc == 0x205038u) {
        ctx->pc = 0x205038u;
            // 0x205038: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20503Cu;
        goto label_20503c;
    }
    ctx->pc = 0x205034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20503Cu);
        ctx->pc = 0x205038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205034u;
            // 0x205038: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20503Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20503Cu; }
            if (ctx->pc != 0x20503Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20503Cu;
label_20503c:
    // 0x20503c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x20503cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_205040:
    // 0x205040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205044:
    // 0x205044: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x205044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_205048:
    // 0x205048: 0x320f809  jalr        $t9
label_20504c:
    if (ctx->pc == 0x20504Cu) {
        ctx->pc = 0x20504Cu;
            // 0x20504c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205050u;
        goto label_205050;
    }
    ctx->pc = 0x205048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205050u);
        ctx->pc = 0x20504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205048u;
            // 0x20504c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205050u; }
            if (ctx->pc != 0x205050u) { return; }
        }
        }
    }
    ctx->pc = 0x205050u;
label_205050:
    // 0x205050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205054:
    // 0x205054: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_205058:
    // 0x205058: 0x5603ffe7  bnel        $s0, $v1, . + 4 + (-0x19 << 2)
label_20505c:
    if (ctx->pc == 0x20505Cu) {
        ctx->pc = 0x20505Cu;
            // 0x20505c: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x205060u;
        goto label_205060;
    }
    ctx->pc = 0x205058u;
    {
        const bool branch_taken_0x205058 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x205058) {
            ctx->pc = 0x20505Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205058u;
            // 0x20505c: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204ff8;
        }
    }
    ctx->pc = 0x205060u;
label_205060:
    // 0x205060: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_205064:
    // 0x205064: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_205068:
    // 0x205068: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x205068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_20506c:
    // 0x20506c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_205070:
    // 0x205070: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x205070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_205074:
    // 0x205074: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x205074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_205078:
    // 0x205078: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20507c:
    if (ctx->pc == 0x20507Cu) {
        ctx->pc = 0x20507Cu;
            // 0x20507c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x205080u;
        goto label_205080;
    }
    ctx->pc = 0x205078u;
    {
        const bool branch_taken_0x205078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205078u;
            // 0x20507c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205078) {
            ctx->pc = 0x2050A8u;
            goto label_2050a8;
        }
    }
    ctx->pc = 0x205080u;
label_205080:
    // 0x205080: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x205080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_205084:
    // 0x205084: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x205084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_205088:
    // 0x205088: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x205088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_20508c:
    // 0x20508c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20508cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_205090:
    // 0x205090: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x205090u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_205094:
    // 0x205094: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x205094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_205098:
    // 0x205098: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x205098u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_20509c:
    // 0x20509c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x20509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2050a0:
    // 0x2050a0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2050a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2050a4:
    // 0x2050a4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2050a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2050a8:
    // 0x2050a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2050a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2050ac:
    // 0x2050ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2050acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2050b0:
    // 0x2050b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2050b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2050b4:
    // 0x2050b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2050b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2050b8:
    // 0x2050b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2050b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2050bc:
    // 0x2050bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2050bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2050c0:
    // 0x2050c0: 0x3e00008  jr          $ra
label_2050c4:
    if (ctx->pc == 0x2050C4u) {
        ctx->pc = 0x2050C4u;
            // 0x2050c4: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2050C8u;
        goto label_2050c8;
    }
    ctx->pc = 0x2050C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2050C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2050C0u;
            // 0x2050c4: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2050C8u;
label_2050c8:
    // 0x2050c8: 0x0  nop
    ctx->pc = 0x2050c8u;
    // NOP
label_2050cc:
    // 0x2050cc: 0x0  nop
    ctx->pc = 0x2050ccu;
    // NOP
label_2050d0:
    // 0x2050d0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_2050d4:
    if (ctx->pc == 0x2050D4u) {
        ctx->pc = 0x2050D4u;
            // 0x2050d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2050D8u;
        goto label_2050d8;
    }
    ctx->pc = 0x2050D0u;
    {
        const bool branch_taken_0x2050d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050d0) {
            ctx->pc = 0x2050D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2050D0u;
            // 0x2050d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2050E0u;
            goto label_2050e0;
        }
    }
    ctx->pc = 0x2050D8u;
label_2050d8:
    // 0x2050d8: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2050d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_2050dc:
    // 0x2050dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2050dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2050e0:
    // 0x2050e0: 0x3e00008  jr          $ra
label_2050e4:
    if (ctx->pc == 0x2050E4u) {
        ctx->pc = 0x2050E8u;
        goto label_2050e8;
    }
    ctx->pc = 0x2050E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2050E8u;
label_2050e8:
    // 0x2050e8: 0x0  nop
    ctx->pc = 0x2050e8u;
    // NOP
label_2050ec:
    // 0x2050ec: 0x0  nop
    ctx->pc = 0x2050ecu;
    // NOP
label_2050f0:
    // 0x2050f0: 0x3e00008  jr          $ra
label_2050f4:
    if (ctx->pc == 0x2050F4u) {
        ctx->pc = 0x2050F4u;
            // 0x2050f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2050F8u;
        goto label_2050f8;
    }
    ctx->pc = 0x2050F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2050F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2050F0u;
            // 0x2050f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2050F8u;
label_2050f8:
    // 0x2050f8: 0x0  nop
    ctx->pc = 0x2050f8u;
    // NOP
label_2050fc:
    // 0x2050fc: 0x0  nop
    ctx->pc = 0x2050fcu;
    // NOP
label_205100:
    // 0x205100: 0x8081318  j           func_204C60
label_205104:
    if (ctx->pc == 0x205104u) {
        ctx->pc = 0x205104u;
            // 0x205104: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->pc = 0x205108u;
        goto label_205108;
    }
    ctx->pc = 0x205100u;
    ctx->pc = 0x205104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205100u;
            // 0x205104: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204C60u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_204c60;
    ctx->pc = 0x205108u;
label_205108:
    // 0x205108: 0x0  nop
    ctx->pc = 0x205108u;
    // NOP
label_20510c:
    // 0x20510c: 0x0  nop
    ctx->pc = 0x20510cu;
    // NOP
label_205110:
    // 0x205110: 0x8081320  j           func_204C80
label_205114:
    if (ctx->pc == 0x205114u) {
        ctx->pc = 0x205114u;
            // 0x205114: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->pc = 0x205118u;
        goto label_205118;
    }
    ctx->pc = 0x205110u;
    ctx->pc = 0x205114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205110u;
            // 0x205114: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204C80u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_204c80;
    ctx->pc = 0x205118u;
label_205118:
    // 0x205118: 0x0  nop
    ctx->pc = 0x205118u;
    // NOP
label_20511c:
    // 0x20511c: 0x0  nop
    ctx->pc = 0x20511cu;
    // NOP
label_205120:
    // 0x205120: 0x8081310  j           func_204C40
label_205124:
    if (ctx->pc == 0x205124u) {
        ctx->pc = 0x205124u;
            // 0x205124: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->pc = 0x205128u;
        goto label_205128;
    }
    ctx->pc = 0x205120u;
    ctx->pc = 0x205124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205120u;
            // 0x205124: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204C40u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_204c40;
    ctx->pc = 0x205128u;
label_205128:
    // 0x205128: 0x0  nop
    ctx->pc = 0x205128u;
    // NOP
label_20512c:
    // 0x20512c: 0x0  nop
    ctx->pc = 0x20512cu;
    // NOP
label_205130:
    // 0x205130: 0x808130c  j           func_204C30
label_205134:
    if (ctx->pc == 0x205134u) {
        ctx->pc = 0x205134u;
            // 0x205134: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->pc = 0x205138u;
        goto label_205138;
    }
    ctx->pc = 0x205130u;
    ctx->pc = 0x205134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205130u;
            // 0x205134: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204C30u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_204c30;
    ctx->pc = 0x205138u;
label_205138:
    // 0x205138: 0x0  nop
    ctx->pc = 0x205138u;
    // NOP
label_20513c:
    // 0x20513c: 0x0  nop
    ctx->pc = 0x20513cu;
    // NOP
label_205140:
    // 0x205140: 0x8081308  j           func_204C20
label_205144:
    if (ctx->pc == 0x205144u) {
        ctx->pc = 0x205144u;
            // 0x205144: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->pc = 0x205148u;
        goto label_205148;
    }
    ctx->pc = 0x205140u;
    ctx->pc = 0x205144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205140u;
            // 0x205144: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204C20u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_204c20;
    ctx->pc = 0x205148u;
label_205148:
    // 0x205148: 0x0  nop
    ctx->pc = 0x205148u;
    // NOP
label_20514c:
    // 0x20514c: 0x0  nop
    ctx->pc = 0x20514cu;
    // NOP
label_205150:
    // 0x205150: 0x8081038  j           func_2040E0
label_205154:
    if (ctx->pc == 0x205154u) {
        ctx->pc = 0x205154u;
            // 0x205154: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->pc = 0x205158u;
        goto label_205158;
    }
    ctx->pc = 0x205150u;
    ctx->pc = 0x205154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205150u;
            // 0x205154: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2040E0u;
    {
        auto targetFn = runtime->lookupFunction(0x2040E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x205158u;
label_205158:
    // 0x205158: 0x0  nop
    ctx->pc = 0x205158u;
    // NOP
label_20515c:
    // 0x20515c: 0x0  nop
    ctx->pc = 0x20515cu;
    // NOP
}
