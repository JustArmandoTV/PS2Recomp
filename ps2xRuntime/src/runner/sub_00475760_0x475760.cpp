#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00475760
// Address: 0x475760 - 0x476640
void sub_00475760_0x475760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475760_0x475760");
#endif

    switch (ctx->pc) {
        case 0x475760u: goto label_475760;
        case 0x475764u: goto label_475764;
        case 0x475768u: goto label_475768;
        case 0x47576cu: goto label_47576c;
        case 0x475770u: goto label_475770;
        case 0x475774u: goto label_475774;
        case 0x475778u: goto label_475778;
        case 0x47577cu: goto label_47577c;
        case 0x475780u: goto label_475780;
        case 0x475784u: goto label_475784;
        case 0x475788u: goto label_475788;
        case 0x47578cu: goto label_47578c;
        case 0x475790u: goto label_475790;
        case 0x475794u: goto label_475794;
        case 0x475798u: goto label_475798;
        case 0x47579cu: goto label_47579c;
        case 0x4757a0u: goto label_4757a0;
        case 0x4757a4u: goto label_4757a4;
        case 0x4757a8u: goto label_4757a8;
        case 0x4757acu: goto label_4757ac;
        case 0x4757b0u: goto label_4757b0;
        case 0x4757b4u: goto label_4757b4;
        case 0x4757b8u: goto label_4757b8;
        case 0x4757bcu: goto label_4757bc;
        case 0x4757c0u: goto label_4757c0;
        case 0x4757c4u: goto label_4757c4;
        case 0x4757c8u: goto label_4757c8;
        case 0x4757ccu: goto label_4757cc;
        case 0x4757d0u: goto label_4757d0;
        case 0x4757d4u: goto label_4757d4;
        case 0x4757d8u: goto label_4757d8;
        case 0x4757dcu: goto label_4757dc;
        case 0x4757e0u: goto label_4757e0;
        case 0x4757e4u: goto label_4757e4;
        case 0x4757e8u: goto label_4757e8;
        case 0x4757ecu: goto label_4757ec;
        case 0x4757f0u: goto label_4757f0;
        case 0x4757f4u: goto label_4757f4;
        case 0x4757f8u: goto label_4757f8;
        case 0x4757fcu: goto label_4757fc;
        case 0x475800u: goto label_475800;
        case 0x475804u: goto label_475804;
        case 0x475808u: goto label_475808;
        case 0x47580cu: goto label_47580c;
        case 0x475810u: goto label_475810;
        case 0x475814u: goto label_475814;
        case 0x475818u: goto label_475818;
        case 0x47581cu: goto label_47581c;
        case 0x475820u: goto label_475820;
        case 0x475824u: goto label_475824;
        case 0x475828u: goto label_475828;
        case 0x47582cu: goto label_47582c;
        case 0x475830u: goto label_475830;
        case 0x475834u: goto label_475834;
        case 0x475838u: goto label_475838;
        case 0x47583cu: goto label_47583c;
        case 0x475840u: goto label_475840;
        case 0x475844u: goto label_475844;
        case 0x475848u: goto label_475848;
        case 0x47584cu: goto label_47584c;
        case 0x475850u: goto label_475850;
        case 0x475854u: goto label_475854;
        case 0x475858u: goto label_475858;
        case 0x47585cu: goto label_47585c;
        case 0x475860u: goto label_475860;
        case 0x475864u: goto label_475864;
        case 0x475868u: goto label_475868;
        case 0x47586cu: goto label_47586c;
        case 0x475870u: goto label_475870;
        case 0x475874u: goto label_475874;
        case 0x475878u: goto label_475878;
        case 0x47587cu: goto label_47587c;
        case 0x475880u: goto label_475880;
        case 0x475884u: goto label_475884;
        case 0x475888u: goto label_475888;
        case 0x47588cu: goto label_47588c;
        case 0x475890u: goto label_475890;
        case 0x475894u: goto label_475894;
        case 0x475898u: goto label_475898;
        case 0x47589cu: goto label_47589c;
        case 0x4758a0u: goto label_4758a0;
        case 0x4758a4u: goto label_4758a4;
        case 0x4758a8u: goto label_4758a8;
        case 0x4758acu: goto label_4758ac;
        case 0x4758b0u: goto label_4758b0;
        case 0x4758b4u: goto label_4758b4;
        case 0x4758b8u: goto label_4758b8;
        case 0x4758bcu: goto label_4758bc;
        case 0x4758c0u: goto label_4758c0;
        case 0x4758c4u: goto label_4758c4;
        case 0x4758c8u: goto label_4758c8;
        case 0x4758ccu: goto label_4758cc;
        case 0x4758d0u: goto label_4758d0;
        case 0x4758d4u: goto label_4758d4;
        case 0x4758d8u: goto label_4758d8;
        case 0x4758dcu: goto label_4758dc;
        case 0x4758e0u: goto label_4758e0;
        case 0x4758e4u: goto label_4758e4;
        case 0x4758e8u: goto label_4758e8;
        case 0x4758ecu: goto label_4758ec;
        case 0x4758f0u: goto label_4758f0;
        case 0x4758f4u: goto label_4758f4;
        case 0x4758f8u: goto label_4758f8;
        case 0x4758fcu: goto label_4758fc;
        case 0x475900u: goto label_475900;
        case 0x475904u: goto label_475904;
        case 0x475908u: goto label_475908;
        case 0x47590cu: goto label_47590c;
        case 0x475910u: goto label_475910;
        case 0x475914u: goto label_475914;
        case 0x475918u: goto label_475918;
        case 0x47591cu: goto label_47591c;
        case 0x475920u: goto label_475920;
        case 0x475924u: goto label_475924;
        case 0x475928u: goto label_475928;
        case 0x47592cu: goto label_47592c;
        case 0x475930u: goto label_475930;
        case 0x475934u: goto label_475934;
        case 0x475938u: goto label_475938;
        case 0x47593cu: goto label_47593c;
        case 0x475940u: goto label_475940;
        case 0x475944u: goto label_475944;
        case 0x475948u: goto label_475948;
        case 0x47594cu: goto label_47594c;
        case 0x475950u: goto label_475950;
        case 0x475954u: goto label_475954;
        case 0x475958u: goto label_475958;
        case 0x47595cu: goto label_47595c;
        case 0x475960u: goto label_475960;
        case 0x475964u: goto label_475964;
        case 0x475968u: goto label_475968;
        case 0x47596cu: goto label_47596c;
        case 0x475970u: goto label_475970;
        case 0x475974u: goto label_475974;
        case 0x475978u: goto label_475978;
        case 0x47597cu: goto label_47597c;
        case 0x475980u: goto label_475980;
        case 0x475984u: goto label_475984;
        case 0x475988u: goto label_475988;
        case 0x47598cu: goto label_47598c;
        case 0x475990u: goto label_475990;
        case 0x475994u: goto label_475994;
        case 0x475998u: goto label_475998;
        case 0x47599cu: goto label_47599c;
        case 0x4759a0u: goto label_4759a0;
        case 0x4759a4u: goto label_4759a4;
        case 0x4759a8u: goto label_4759a8;
        case 0x4759acu: goto label_4759ac;
        case 0x4759b0u: goto label_4759b0;
        case 0x4759b4u: goto label_4759b4;
        case 0x4759b8u: goto label_4759b8;
        case 0x4759bcu: goto label_4759bc;
        case 0x4759c0u: goto label_4759c0;
        case 0x4759c4u: goto label_4759c4;
        case 0x4759c8u: goto label_4759c8;
        case 0x4759ccu: goto label_4759cc;
        case 0x4759d0u: goto label_4759d0;
        case 0x4759d4u: goto label_4759d4;
        case 0x4759d8u: goto label_4759d8;
        case 0x4759dcu: goto label_4759dc;
        case 0x4759e0u: goto label_4759e0;
        case 0x4759e4u: goto label_4759e4;
        case 0x4759e8u: goto label_4759e8;
        case 0x4759ecu: goto label_4759ec;
        case 0x4759f0u: goto label_4759f0;
        case 0x4759f4u: goto label_4759f4;
        case 0x4759f8u: goto label_4759f8;
        case 0x4759fcu: goto label_4759fc;
        case 0x475a00u: goto label_475a00;
        case 0x475a04u: goto label_475a04;
        case 0x475a08u: goto label_475a08;
        case 0x475a0cu: goto label_475a0c;
        case 0x475a10u: goto label_475a10;
        case 0x475a14u: goto label_475a14;
        case 0x475a18u: goto label_475a18;
        case 0x475a1cu: goto label_475a1c;
        case 0x475a20u: goto label_475a20;
        case 0x475a24u: goto label_475a24;
        case 0x475a28u: goto label_475a28;
        case 0x475a2cu: goto label_475a2c;
        case 0x475a30u: goto label_475a30;
        case 0x475a34u: goto label_475a34;
        case 0x475a38u: goto label_475a38;
        case 0x475a3cu: goto label_475a3c;
        case 0x475a40u: goto label_475a40;
        case 0x475a44u: goto label_475a44;
        case 0x475a48u: goto label_475a48;
        case 0x475a4cu: goto label_475a4c;
        case 0x475a50u: goto label_475a50;
        case 0x475a54u: goto label_475a54;
        case 0x475a58u: goto label_475a58;
        case 0x475a5cu: goto label_475a5c;
        case 0x475a60u: goto label_475a60;
        case 0x475a64u: goto label_475a64;
        case 0x475a68u: goto label_475a68;
        case 0x475a6cu: goto label_475a6c;
        case 0x475a70u: goto label_475a70;
        case 0x475a74u: goto label_475a74;
        case 0x475a78u: goto label_475a78;
        case 0x475a7cu: goto label_475a7c;
        case 0x475a80u: goto label_475a80;
        case 0x475a84u: goto label_475a84;
        case 0x475a88u: goto label_475a88;
        case 0x475a8cu: goto label_475a8c;
        case 0x475a90u: goto label_475a90;
        case 0x475a94u: goto label_475a94;
        case 0x475a98u: goto label_475a98;
        case 0x475a9cu: goto label_475a9c;
        case 0x475aa0u: goto label_475aa0;
        case 0x475aa4u: goto label_475aa4;
        case 0x475aa8u: goto label_475aa8;
        case 0x475aacu: goto label_475aac;
        case 0x475ab0u: goto label_475ab0;
        case 0x475ab4u: goto label_475ab4;
        case 0x475ab8u: goto label_475ab8;
        case 0x475abcu: goto label_475abc;
        case 0x475ac0u: goto label_475ac0;
        case 0x475ac4u: goto label_475ac4;
        case 0x475ac8u: goto label_475ac8;
        case 0x475accu: goto label_475acc;
        case 0x475ad0u: goto label_475ad0;
        case 0x475ad4u: goto label_475ad4;
        case 0x475ad8u: goto label_475ad8;
        case 0x475adcu: goto label_475adc;
        case 0x475ae0u: goto label_475ae0;
        case 0x475ae4u: goto label_475ae4;
        case 0x475ae8u: goto label_475ae8;
        case 0x475aecu: goto label_475aec;
        case 0x475af0u: goto label_475af0;
        case 0x475af4u: goto label_475af4;
        case 0x475af8u: goto label_475af8;
        case 0x475afcu: goto label_475afc;
        case 0x475b00u: goto label_475b00;
        case 0x475b04u: goto label_475b04;
        case 0x475b08u: goto label_475b08;
        case 0x475b0cu: goto label_475b0c;
        case 0x475b10u: goto label_475b10;
        case 0x475b14u: goto label_475b14;
        case 0x475b18u: goto label_475b18;
        case 0x475b1cu: goto label_475b1c;
        case 0x475b20u: goto label_475b20;
        case 0x475b24u: goto label_475b24;
        case 0x475b28u: goto label_475b28;
        case 0x475b2cu: goto label_475b2c;
        case 0x475b30u: goto label_475b30;
        case 0x475b34u: goto label_475b34;
        case 0x475b38u: goto label_475b38;
        case 0x475b3cu: goto label_475b3c;
        case 0x475b40u: goto label_475b40;
        case 0x475b44u: goto label_475b44;
        case 0x475b48u: goto label_475b48;
        case 0x475b4cu: goto label_475b4c;
        case 0x475b50u: goto label_475b50;
        case 0x475b54u: goto label_475b54;
        case 0x475b58u: goto label_475b58;
        case 0x475b5cu: goto label_475b5c;
        case 0x475b60u: goto label_475b60;
        case 0x475b64u: goto label_475b64;
        case 0x475b68u: goto label_475b68;
        case 0x475b6cu: goto label_475b6c;
        case 0x475b70u: goto label_475b70;
        case 0x475b74u: goto label_475b74;
        case 0x475b78u: goto label_475b78;
        case 0x475b7cu: goto label_475b7c;
        case 0x475b80u: goto label_475b80;
        case 0x475b84u: goto label_475b84;
        case 0x475b88u: goto label_475b88;
        case 0x475b8cu: goto label_475b8c;
        case 0x475b90u: goto label_475b90;
        case 0x475b94u: goto label_475b94;
        case 0x475b98u: goto label_475b98;
        case 0x475b9cu: goto label_475b9c;
        case 0x475ba0u: goto label_475ba0;
        case 0x475ba4u: goto label_475ba4;
        case 0x475ba8u: goto label_475ba8;
        case 0x475bacu: goto label_475bac;
        case 0x475bb0u: goto label_475bb0;
        case 0x475bb4u: goto label_475bb4;
        case 0x475bb8u: goto label_475bb8;
        case 0x475bbcu: goto label_475bbc;
        case 0x475bc0u: goto label_475bc0;
        case 0x475bc4u: goto label_475bc4;
        case 0x475bc8u: goto label_475bc8;
        case 0x475bccu: goto label_475bcc;
        case 0x475bd0u: goto label_475bd0;
        case 0x475bd4u: goto label_475bd4;
        case 0x475bd8u: goto label_475bd8;
        case 0x475bdcu: goto label_475bdc;
        case 0x475be0u: goto label_475be0;
        case 0x475be4u: goto label_475be4;
        case 0x475be8u: goto label_475be8;
        case 0x475becu: goto label_475bec;
        case 0x475bf0u: goto label_475bf0;
        case 0x475bf4u: goto label_475bf4;
        case 0x475bf8u: goto label_475bf8;
        case 0x475bfcu: goto label_475bfc;
        case 0x475c00u: goto label_475c00;
        case 0x475c04u: goto label_475c04;
        case 0x475c08u: goto label_475c08;
        case 0x475c0cu: goto label_475c0c;
        case 0x475c10u: goto label_475c10;
        case 0x475c14u: goto label_475c14;
        case 0x475c18u: goto label_475c18;
        case 0x475c1cu: goto label_475c1c;
        case 0x475c20u: goto label_475c20;
        case 0x475c24u: goto label_475c24;
        case 0x475c28u: goto label_475c28;
        case 0x475c2cu: goto label_475c2c;
        case 0x475c30u: goto label_475c30;
        case 0x475c34u: goto label_475c34;
        case 0x475c38u: goto label_475c38;
        case 0x475c3cu: goto label_475c3c;
        case 0x475c40u: goto label_475c40;
        case 0x475c44u: goto label_475c44;
        case 0x475c48u: goto label_475c48;
        case 0x475c4cu: goto label_475c4c;
        case 0x475c50u: goto label_475c50;
        case 0x475c54u: goto label_475c54;
        case 0x475c58u: goto label_475c58;
        case 0x475c5cu: goto label_475c5c;
        case 0x475c60u: goto label_475c60;
        case 0x475c64u: goto label_475c64;
        case 0x475c68u: goto label_475c68;
        case 0x475c6cu: goto label_475c6c;
        case 0x475c70u: goto label_475c70;
        case 0x475c74u: goto label_475c74;
        case 0x475c78u: goto label_475c78;
        case 0x475c7cu: goto label_475c7c;
        case 0x475c80u: goto label_475c80;
        case 0x475c84u: goto label_475c84;
        case 0x475c88u: goto label_475c88;
        case 0x475c8cu: goto label_475c8c;
        case 0x475c90u: goto label_475c90;
        case 0x475c94u: goto label_475c94;
        case 0x475c98u: goto label_475c98;
        case 0x475c9cu: goto label_475c9c;
        case 0x475ca0u: goto label_475ca0;
        case 0x475ca4u: goto label_475ca4;
        case 0x475ca8u: goto label_475ca8;
        case 0x475cacu: goto label_475cac;
        case 0x475cb0u: goto label_475cb0;
        case 0x475cb4u: goto label_475cb4;
        case 0x475cb8u: goto label_475cb8;
        case 0x475cbcu: goto label_475cbc;
        case 0x475cc0u: goto label_475cc0;
        case 0x475cc4u: goto label_475cc4;
        case 0x475cc8u: goto label_475cc8;
        case 0x475cccu: goto label_475ccc;
        case 0x475cd0u: goto label_475cd0;
        case 0x475cd4u: goto label_475cd4;
        case 0x475cd8u: goto label_475cd8;
        case 0x475cdcu: goto label_475cdc;
        case 0x475ce0u: goto label_475ce0;
        case 0x475ce4u: goto label_475ce4;
        case 0x475ce8u: goto label_475ce8;
        case 0x475cecu: goto label_475cec;
        case 0x475cf0u: goto label_475cf0;
        case 0x475cf4u: goto label_475cf4;
        case 0x475cf8u: goto label_475cf8;
        case 0x475cfcu: goto label_475cfc;
        case 0x475d00u: goto label_475d00;
        case 0x475d04u: goto label_475d04;
        case 0x475d08u: goto label_475d08;
        case 0x475d0cu: goto label_475d0c;
        case 0x475d10u: goto label_475d10;
        case 0x475d14u: goto label_475d14;
        case 0x475d18u: goto label_475d18;
        case 0x475d1cu: goto label_475d1c;
        case 0x475d20u: goto label_475d20;
        case 0x475d24u: goto label_475d24;
        case 0x475d28u: goto label_475d28;
        case 0x475d2cu: goto label_475d2c;
        case 0x475d30u: goto label_475d30;
        case 0x475d34u: goto label_475d34;
        case 0x475d38u: goto label_475d38;
        case 0x475d3cu: goto label_475d3c;
        case 0x475d40u: goto label_475d40;
        case 0x475d44u: goto label_475d44;
        case 0x475d48u: goto label_475d48;
        case 0x475d4cu: goto label_475d4c;
        case 0x475d50u: goto label_475d50;
        case 0x475d54u: goto label_475d54;
        case 0x475d58u: goto label_475d58;
        case 0x475d5cu: goto label_475d5c;
        case 0x475d60u: goto label_475d60;
        case 0x475d64u: goto label_475d64;
        case 0x475d68u: goto label_475d68;
        case 0x475d6cu: goto label_475d6c;
        case 0x475d70u: goto label_475d70;
        case 0x475d74u: goto label_475d74;
        case 0x475d78u: goto label_475d78;
        case 0x475d7cu: goto label_475d7c;
        case 0x475d80u: goto label_475d80;
        case 0x475d84u: goto label_475d84;
        case 0x475d88u: goto label_475d88;
        case 0x475d8cu: goto label_475d8c;
        case 0x475d90u: goto label_475d90;
        case 0x475d94u: goto label_475d94;
        case 0x475d98u: goto label_475d98;
        case 0x475d9cu: goto label_475d9c;
        case 0x475da0u: goto label_475da0;
        case 0x475da4u: goto label_475da4;
        case 0x475da8u: goto label_475da8;
        case 0x475dacu: goto label_475dac;
        case 0x475db0u: goto label_475db0;
        case 0x475db4u: goto label_475db4;
        case 0x475db8u: goto label_475db8;
        case 0x475dbcu: goto label_475dbc;
        case 0x475dc0u: goto label_475dc0;
        case 0x475dc4u: goto label_475dc4;
        case 0x475dc8u: goto label_475dc8;
        case 0x475dccu: goto label_475dcc;
        case 0x475dd0u: goto label_475dd0;
        case 0x475dd4u: goto label_475dd4;
        case 0x475dd8u: goto label_475dd8;
        case 0x475ddcu: goto label_475ddc;
        case 0x475de0u: goto label_475de0;
        case 0x475de4u: goto label_475de4;
        case 0x475de8u: goto label_475de8;
        case 0x475decu: goto label_475dec;
        case 0x475df0u: goto label_475df0;
        case 0x475df4u: goto label_475df4;
        case 0x475df8u: goto label_475df8;
        case 0x475dfcu: goto label_475dfc;
        case 0x475e00u: goto label_475e00;
        case 0x475e04u: goto label_475e04;
        case 0x475e08u: goto label_475e08;
        case 0x475e0cu: goto label_475e0c;
        case 0x475e10u: goto label_475e10;
        case 0x475e14u: goto label_475e14;
        case 0x475e18u: goto label_475e18;
        case 0x475e1cu: goto label_475e1c;
        case 0x475e20u: goto label_475e20;
        case 0x475e24u: goto label_475e24;
        case 0x475e28u: goto label_475e28;
        case 0x475e2cu: goto label_475e2c;
        case 0x475e30u: goto label_475e30;
        case 0x475e34u: goto label_475e34;
        case 0x475e38u: goto label_475e38;
        case 0x475e3cu: goto label_475e3c;
        case 0x475e40u: goto label_475e40;
        case 0x475e44u: goto label_475e44;
        case 0x475e48u: goto label_475e48;
        case 0x475e4cu: goto label_475e4c;
        case 0x475e50u: goto label_475e50;
        case 0x475e54u: goto label_475e54;
        case 0x475e58u: goto label_475e58;
        case 0x475e5cu: goto label_475e5c;
        case 0x475e60u: goto label_475e60;
        case 0x475e64u: goto label_475e64;
        case 0x475e68u: goto label_475e68;
        case 0x475e6cu: goto label_475e6c;
        case 0x475e70u: goto label_475e70;
        case 0x475e74u: goto label_475e74;
        case 0x475e78u: goto label_475e78;
        case 0x475e7cu: goto label_475e7c;
        case 0x475e80u: goto label_475e80;
        case 0x475e84u: goto label_475e84;
        case 0x475e88u: goto label_475e88;
        case 0x475e8cu: goto label_475e8c;
        case 0x475e90u: goto label_475e90;
        case 0x475e94u: goto label_475e94;
        case 0x475e98u: goto label_475e98;
        case 0x475e9cu: goto label_475e9c;
        case 0x475ea0u: goto label_475ea0;
        case 0x475ea4u: goto label_475ea4;
        case 0x475ea8u: goto label_475ea8;
        case 0x475eacu: goto label_475eac;
        case 0x475eb0u: goto label_475eb0;
        case 0x475eb4u: goto label_475eb4;
        case 0x475eb8u: goto label_475eb8;
        case 0x475ebcu: goto label_475ebc;
        case 0x475ec0u: goto label_475ec0;
        case 0x475ec4u: goto label_475ec4;
        case 0x475ec8u: goto label_475ec8;
        case 0x475eccu: goto label_475ecc;
        case 0x475ed0u: goto label_475ed0;
        case 0x475ed4u: goto label_475ed4;
        case 0x475ed8u: goto label_475ed8;
        case 0x475edcu: goto label_475edc;
        case 0x475ee0u: goto label_475ee0;
        case 0x475ee4u: goto label_475ee4;
        case 0x475ee8u: goto label_475ee8;
        case 0x475eecu: goto label_475eec;
        case 0x475ef0u: goto label_475ef0;
        case 0x475ef4u: goto label_475ef4;
        case 0x475ef8u: goto label_475ef8;
        case 0x475efcu: goto label_475efc;
        case 0x475f00u: goto label_475f00;
        case 0x475f04u: goto label_475f04;
        case 0x475f08u: goto label_475f08;
        case 0x475f0cu: goto label_475f0c;
        case 0x475f10u: goto label_475f10;
        case 0x475f14u: goto label_475f14;
        case 0x475f18u: goto label_475f18;
        case 0x475f1cu: goto label_475f1c;
        case 0x475f20u: goto label_475f20;
        case 0x475f24u: goto label_475f24;
        case 0x475f28u: goto label_475f28;
        case 0x475f2cu: goto label_475f2c;
        case 0x475f30u: goto label_475f30;
        case 0x475f34u: goto label_475f34;
        case 0x475f38u: goto label_475f38;
        case 0x475f3cu: goto label_475f3c;
        case 0x475f40u: goto label_475f40;
        case 0x475f44u: goto label_475f44;
        case 0x475f48u: goto label_475f48;
        case 0x475f4cu: goto label_475f4c;
        case 0x475f50u: goto label_475f50;
        case 0x475f54u: goto label_475f54;
        case 0x475f58u: goto label_475f58;
        case 0x475f5cu: goto label_475f5c;
        case 0x475f60u: goto label_475f60;
        case 0x475f64u: goto label_475f64;
        case 0x475f68u: goto label_475f68;
        case 0x475f6cu: goto label_475f6c;
        case 0x475f70u: goto label_475f70;
        case 0x475f74u: goto label_475f74;
        case 0x475f78u: goto label_475f78;
        case 0x475f7cu: goto label_475f7c;
        case 0x475f80u: goto label_475f80;
        case 0x475f84u: goto label_475f84;
        case 0x475f88u: goto label_475f88;
        case 0x475f8cu: goto label_475f8c;
        case 0x475f90u: goto label_475f90;
        case 0x475f94u: goto label_475f94;
        case 0x475f98u: goto label_475f98;
        case 0x475f9cu: goto label_475f9c;
        case 0x475fa0u: goto label_475fa0;
        case 0x475fa4u: goto label_475fa4;
        case 0x475fa8u: goto label_475fa8;
        case 0x475facu: goto label_475fac;
        case 0x475fb0u: goto label_475fb0;
        case 0x475fb4u: goto label_475fb4;
        case 0x475fb8u: goto label_475fb8;
        case 0x475fbcu: goto label_475fbc;
        case 0x475fc0u: goto label_475fc0;
        case 0x475fc4u: goto label_475fc4;
        case 0x475fc8u: goto label_475fc8;
        case 0x475fccu: goto label_475fcc;
        case 0x475fd0u: goto label_475fd0;
        case 0x475fd4u: goto label_475fd4;
        case 0x475fd8u: goto label_475fd8;
        case 0x475fdcu: goto label_475fdc;
        case 0x475fe0u: goto label_475fe0;
        case 0x475fe4u: goto label_475fe4;
        case 0x475fe8u: goto label_475fe8;
        case 0x475fecu: goto label_475fec;
        case 0x475ff0u: goto label_475ff0;
        case 0x475ff4u: goto label_475ff4;
        case 0x475ff8u: goto label_475ff8;
        case 0x475ffcu: goto label_475ffc;
        case 0x476000u: goto label_476000;
        case 0x476004u: goto label_476004;
        case 0x476008u: goto label_476008;
        case 0x47600cu: goto label_47600c;
        case 0x476010u: goto label_476010;
        case 0x476014u: goto label_476014;
        case 0x476018u: goto label_476018;
        case 0x47601cu: goto label_47601c;
        case 0x476020u: goto label_476020;
        case 0x476024u: goto label_476024;
        case 0x476028u: goto label_476028;
        case 0x47602cu: goto label_47602c;
        case 0x476030u: goto label_476030;
        case 0x476034u: goto label_476034;
        case 0x476038u: goto label_476038;
        case 0x47603cu: goto label_47603c;
        case 0x476040u: goto label_476040;
        case 0x476044u: goto label_476044;
        case 0x476048u: goto label_476048;
        case 0x47604cu: goto label_47604c;
        case 0x476050u: goto label_476050;
        case 0x476054u: goto label_476054;
        case 0x476058u: goto label_476058;
        case 0x47605cu: goto label_47605c;
        case 0x476060u: goto label_476060;
        case 0x476064u: goto label_476064;
        case 0x476068u: goto label_476068;
        case 0x47606cu: goto label_47606c;
        case 0x476070u: goto label_476070;
        case 0x476074u: goto label_476074;
        case 0x476078u: goto label_476078;
        case 0x47607cu: goto label_47607c;
        case 0x476080u: goto label_476080;
        case 0x476084u: goto label_476084;
        case 0x476088u: goto label_476088;
        case 0x47608cu: goto label_47608c;
        case 0x476090u: goto label_476090;
        case 0x476094u: goto label_476094;
        case 0x476098u: goto label_476098;
        case 0x47609cu: goto label_47609c;
        case 0x4760a0u: goto label_4760a0;
        case 0x4760a4u: goto label_4760a4;
        case 0x4760a8u: goto label_4760a8;
        case 0x4760acu: goto label_4760ac;
        case 0x4760b0u: goto label_4760b0;
        case 0x4760b4u: goto label_4760b4;
        case 0x4760b8u: goto label_4760b8;
        case 0x4760bcu: goto label_4760bc;
        case 0x4760c0u: goto label_4760c0;
        case 0x4760c4u: goto label_4760c4;
        case 0x4760c8u: goto label_4760c8;
        case 0x4760ccu: goto label_4760cc;
        case 0x4760d0u: goto label_4760d0;
        case 0x4760d4u: goto label_4760d4;
        case 0x4760d8u: goto label_4760d8;
        case 0x4760dcu: goto label_4760dc;
        case 0x4760e0u: goto label_4760e0;
        case 0x4760e4u: goto label_4760e4;
        case 0x4760e8u: goto label_4760e8;
        case 0x4760ecu: goto label_4760ec;
        case 0x4760f0u: goto label_4760f0;
        case 0x4760f4u: goto label_4760f4;
        case 0x4760f8u: goto label_4760f8;
        case 0x4760fcu: goto label_4760fc;
        case 0x476100u: goto label_476100;
        case 0x476104u: goto label_476104;
        case 0x476108u: goto label_476108;
        case 0x47610cu: goto label_47610c;
        case 0x476110u: goto label_476110;
        case 0x476114u: goto label_476114;
        case 0x476118u: goto label_476118;
        case 0x47611cu: goto label_47611c;
        case 0x476120u: goto label_476120;
        case 0x476124u: goto label_476124;
        case 0x476128u: goto label_476128;
        case 0x47612cu: goto label_47612c;
        case 0x476130u: goto label_476130;
        case 0x476134u: goto label_476134;
        case 0x476138u: goto label_476138;
        case 0x47613cu: goto label_47613c;
        case 0x476140u: goto label_476140;
        case 0x476144u: goto label_476144;
        case 0x476148u: goto label_476148;
        case 0x47614cu: goto label_47614c;
        case 0x476150u: goto label_476150;
        case 0x476154u: goto label_476154;
        case 0x476158u: goto label_476158;
        case 0x47615cu: goto label_47615c;
        case 0x476160u: goto label_476160;
        case 0x476164u: goto label_476164;
        case 0x476168u: goto label_476168;
        case 0x47616cu: goto label_47616c;
        case 0x476170u: goto label_476170;
        case 0x476174u: goto label_476174;
        case 0x476178u: goto label_476178;
        case 0x47617cu: goto label_47617c;
        case 0x476180u: goto label_476180;
        case 0x476184u: goto label_476184;
        case 0x476188u: goto label_476188;
        case 0x47618cu: goto label_47618c;
        case 0x476190u: goto label_476190;
        case 0x476194u: goto label_476194;
        case 0x476198u: goto label_476198;
        case 0x47619cu: goto label_47619c;
        case 0x4761a0u: goto label_4761a0;
        case 0x4761a4u: goto label_4761a4;
        case 0x4761a8u: goto label_4761a8;
        case 0x4761acu: goto label_4761ac;
        case 0x4761b0u: goto label_4761b0;
        case 0x4761b4u: goto label_4761b4;
        case 0x4761b8u: goto label_4761b8;
        case 0x4761bcu: goto label_4761bc;
        case 0x4761c0u: goto label_4761c0;
        case 0x4761c4u: goto label_4761c4;
        case 0x4761c8u: goto label_4761c8;
        case 0x4761ccu: goto label_4761cc;
        case 0x4761d0u: goto label_4761d0;
        case 0x4761d4u: goto label_4761d4;
        case 0x4761d8u: goto label_4761d8;
        case 0x4761dcu: goto label_4761dc;
        case 0x4761e0u: goto label_4761e0;
        case 0x4761e4u: goto label_4761e4;
        case 0x4761e8u: goto label_4761e8;
        case 0x4761ecu: goto label_4761ec;
        case 0x4761f0u: goto label_4761f0;
        case 0x4761f4u: goto label_4761f4;
        case 0x4761f8u: goto label_4761f8;
        case 0x4761fcu: goto label_4761fc;
        case 0x476200u: goto label_476200;
        case 0x476204u: goto label_476204;
        case 0x476208u: goto label_476208;
        case 0x47620cu: goto label_47620c;
        case 0x476210u: goto label_476210;
        case 0x476214u: goto label_476214;
        case 0x476218u: goto label_476218;
        case 0x47621cu: goto label_47621c;
        case 0x476220u: goto label_476220;
        case 0x476224u: goto label_476224;
        case 0x476228u: goto label_476228;
        case 0x47622cu: goto label_47622c;
        case 0x476230u: goto label_476230;
        case 0x476234u: goto label_476234;
        case 0x476238u: goto label_476238;
        case 0x47623cu: goto label_47623c;
        case 0x476240u: goto label_476240;
        case 0x476244u: goto label_476244;
        case 0x476248u: goto label_476248;
        case 0x47624cu: goto label_47624c;
        case 0x476250u: goto label_476250;
        case 0x476254u: goto label_476254;
        case 0x476258u: goto label_476258;
        case 0x47625cu: goto label_47625c;
        case 0x476260u: goto label_476260;
        case 0x476264u: goto label_476264;
        case 0x476268u: goto label_476268;
        case 0x47626cu: goto label_47626c;
        case 0x476270u: goto label_476270;
        case 0x476274u: goto label_476274;
        case 0x476278u: goto label_476278;
        case 0x47627cu: goto label_47627c;
        case 0x476280u: goto label_476280;
        case 0x476284u: goto label_476284;
        case 0x476288u: goto label_476288;
        case 0x47628cu: goto label_47628c;
        case 0x476290u: goto label_476290;
        case 0x476294u: goto label_476294;
        case 0x476298u: goto label_476298;
        case 0x47629cu: goto label_47629c;
        case 0x4762a0u: goto label_4762a0;
        case 0x4762a4u: goto label_4762a4;
        case 0x4762a8u: goto label_4762a8;
        case 0x4762acu: goto label_4762ac;
        case 0x4762b0u: goto label_4762b0;
        case 0x4762b4u: goto label_4762b4;
        case 0x4762b8u: goto label_4762b8;
        case 0x4762bcu: goto label_4762bc;
        case 0x4762c0u: goto label_4762c0;
        case 0x4762c4u: goto label_4762c4;
        case 0x4762c8u: goto label_4762c8;
        case 0x4762ccu: goto label_4762cc;
        case 0x4762d0u: goto label_4762d0;
        case 0x4762d4u: goto label_4762d4;
        case 0x4762d8u: goto label_4762d8;
        case 0x4762dcu: goto label_4762dc;
        case 0x4762e0u: goto label_4762e0;
        case 0x4762e4u: goto label_4762e4;
        case 0x4762e8u: goto label_4762e8;
        case 0x4762ecu: goto label_4762ec;
        case 0x4762f0u: goto label_4762f0;
        case 0x4762f4u: goto label_4762f4;
        case 0x4762f8u: goto label_4762f8;
        case 0x4762fcu: goto label_4762fc;
        case 0x476300u: goto label_476300;
        case 0x476304u: goto label_476304;
        case 0x476308u: goto label_476308;
        case 0x47630cu: goto label_47630c;
        case 0x476310u: goto label_476310;
        case 0x476314u: goto label_476314;
        case 0x476318u: goto label_476318;
        case 0x47631cu: goto label_47631c;
        case 0x476320u: goto label_476320;
        case 0x476324u: goto label_476324;
        case 0x476328u: goto label_476328;
        case 0x47632cu: goto label_47632c;
        case 0x476330u: goto label_476330;
        case 0x476334u: goto label_476334;
        case 0x476338u: goto label_476338;
        case 0x47633cu: goto label_47633c;
        case 0x476340u: goto label_476340;
        case 0x476344u: goto label_476344;
        case 0x476348u: goto label_476348;
        case 0x47634cu: goto label_47634c;
        case 0x476350u: goto label_476350;
        case 0x476354u: goto label_476354;
        case 0x476358u: goto label_476358;
        case 0x47635cu: goto label_47635c;
        case 0x476360u: goto label_476360;
        case 0x476364u: goto label_476364;
        case 0x476368u: goto label_476368;
        case 0x47636cu: goto label_47636c;
        case 0x476370u: goto label_476370;
        case 0x476374u: goto label_476374;
        case 0x476378u: goto label_476378;
        case 0x47637cu: goto label_47637c;
        case 0x476380u: goto label_476380;
        case 0x476384u: goto label_476384;
        case 0x476388u: goto label_476388;
        case 0x47638cu: goto label_47638c;
        case 0x476390u: goto label_476390;
        case 0x476394u: goto label_476394;
        case 0x476398u: goto label_476398;
        case 0x47639cu: goto label_47639c;
        case 0x4763a0u: goto label_4763a0;
        case 0x4763a4u: goto label_4763a4;
        case 0x4763a8u: goto label_4763a8;
        case 0x4763acu: goto label_4763ac;
        case 0x4763b0u: goto label_4763b0;
        case 0x4763b4u: goto label_4763b4;
        case 0x4763b8u: goto label_4763b8;
        case 0x4763bcu: goto label_4763bc;
        case 0x4763c0u: goto label_4763c0;
        case 0x4763c4u: goto label_4763c4;
        case 0x4763c8u: goto label_4763c8;
        case 0x4763ccu: goto label_4763cc;
        case 0x4763d0u: goto label_4763d0;
        case 0x4763d4u: goto label_4763d4;
        case 0x4763d8u: goto label_4763d8;
        case 0x4763dcu: goto label_4763dc;
        case 0x4763e0u: goto label_4763e0;
        case 0x4763e4u: goto label_4763e4;
        case 0x4763e8u: goto label_4763e8;
        case 0x4763ecu: goto label_4763ec;
        case 0x4763f0u: goto label_4763f0;
        case 0x4763f4u: goto label_4763f4;
        case 0x4763f8u: goto label_4763f8;
        case 0x4763fcu: goto label_4763fc;
        case 0x476400u: goto label_476400;
        case 0x476404u: goto label_476404;
        case 0x476408u: goto label_476408;
        case 0x47640cu: goto label_47640c;
        case 0x476410u: goto label_476410;
        case 0x476414u: goto label_476414;
        case 0x476418u: goto label_476418;
        case 0x47641cu: goto label_47641c;
        case 0x476420u: goto label_476420;
        case 0x476424u: goto label_476424;
        case 0x476428u: goto label_476428;
        case 0x47642cu: goto label_47642c;
        case 0x476430u: goto label_476430;
        case 0x476434u: goto label_476434;
        case 0x476438u: goto label_476438;
        case 0x47643cu: goto label_47643c;
        case 0x476440u: goto label_476440;
        case 0x476444u: goto label_476444;
        case 0x476448u: goto label_476448;
        case 0x47644cu: goto label_47644c;
        case 0x476450u: goto label_476450;
        case 0x476454u: goto label_476454;
        case 0x476458u: goto label_476458;
        case 0x47645cu: goto label_47645c;
        case 0x476460u: goto label_476460;
        case 0x476464u: goto label_476464;
        case 0x476468u: goto label_476468;
        case 0x47646cu: goto label_47646c;
        case 0x476470u: goto label_476470;
        case 0x476474u: goto label_476474;
        case 0x476478u: goto label_476478;
        case 0x47647cu: goto label_47647c;
        case 0x476480u: goto label_476480;
        case 0x476484u: goto label_476484;
        case 0x476488u: goto label_476488;
        case 0x47648cu: goto label_47648c;
        case 0x476490u: goto label_476490;
        case 0x476494u: goto label_476494;
        case 0x476498u: goto label_476498;
        case 0x47649cu: goto label_47649c;
        case 0x4764a0u: goto label_4764a0;
        case 0x4764a4u: goto label_4764a4;
        case 0x4764a8u: goto label_4764a8;
        case 0x4764acu: goto label_4764ac;
        case 0x4764b0u: goto label_4764b0;
        case 0x4764b4u: goto label_4764b4;
        case 0x4764b8u: goto label_4764b8;
        case 0x4764bcu: goto label_4764bc;
        case 0x4764c0u: goto label_4764c0;
        case 0x4764c4u: goto label_4764c4;
        case 0x4764c8u: goto label_4764c8;
        case 0x4764ccu: goto label_4764cc;
        case 0x4764d0u: goto label_4764d0;
        case 0x4764d4u: goto label_4764d4;
        case 0x4764d8u: goto label_4764d8;
        case 0x4764dcu: goto label_4764dc;
        case 0x4764e0u: goto label_4764e0;
        case 0x4764e4u: goto label_4764e4;
        case 0x4764e8u: goto label_4764e8;
        case 0x4764ecu: goto label_4764ec;
        case 0x4764f0u: goto label_4764f0;
        case 0x4764f4u: goto label_4764f4;
        case 0x4764f8u: goto label_4764f8;
        case 0x4764fcu: goto label_4764fc;
        case 0x476500u: goto label_476500;
        case 0x476504u: goto label_476504;
        case 0x476508u: goto label_476508;
        case 0x47650cu: goto label_47650c;
        case 0x476510u: goto label_476510;
        case 0x476514u: goto label_476514;
        case 0x476518u: goto label_476518;
        case 0x47651cu: goto label_47651c;
        case 0x476520u: goto label_476520;
        case 0x476524u: goto label_476524;
        case 0x476528u: goto label_476528;
        case 0x47652cu: goto label_47652c;
        case 0x476530u: goto label_476530;
        case 0x476534u: goto label_476534;
        case 0x476538u: goto label_476538;
        case 0x47653cu: goto label_47653c;
        case 0x476540u: goto label_476540;
        case 0x476544u: goto label_476544;
        case 0x476548u: goto label_476548;
        case 0x47654cu: goto label_47654c;
        case 0x476550u: goto label_476550;
        case 0x476554u: goto label_476554;
        case 0x476558u: goto label_476558;
        case 0x47655cu: goto label_47655c;
        case 0x476560u: goto label_476560;
        case 0x476564u: goto label_476564;
        case 0x476568u: goto label_476568;
        case 0x47656cu: goto label_47656c;
        case 0x476570u: goto label_476570;
        case 0x476574u: goto label_476574;
        case 0x476578u: goto label_476578;
        case 0x47657cu: goto label_47657c;
        case 0x476580u: goto label_476580;
        case 0x476584u: goto label_476584;
        case 0x476588u: goto label_476588;
        case 0x47658cu: goto label_47658c;
        case 0x476590u: goto label_476590;
        case 0x476594u: goto label_476594;
        case 0x476598u: goto label_476598;
        case 0x47659cu: goto label_47659c;
        case 0x4765a0u: goto label_4765a0;
        case 0x4765a4u: goto label_4765a4;
        case 0x4765a8u: goto label_4765a8;
        case 0x4765acu: goto label_4765ac;
        case 0x4765b0u: goto label_4765b0;
        case 0x4765b4u: goto label_4765b4;
        case 0x4765b8u: goto label_4765b8;
        case 0x4765bcu: goto label_4765bc;
        case 0x4765c0u: goto label_4765c0;
        case 0x4765c4u: goto label_4765c4;
        case 0x4765c8u: goto label_4765c8;
        case 0x4765ccu: goto label_4765cc;
        case 0x4765d0u: goto label_4765d0;
        case 0x4765d4u: goto label_4765d4;
        case 0x4765d8u: goto label_4765d8;
        case 0x4765dcu: goto label_4765dc;
        case 0x4765e0u: goto label_4765e0;
        case 0x4765e4u: goto label_4765e4;
        case 0x4765e8u: goto label_4765e8;
        case 0x4765ecu: goto label_4765ec;
        case 0x4765f0u: goto label_4765f0;
        case 0x4765f4u: goto label_4765f4;
        case 0x4765f8u: goto label_4765f8;
        case 0x4765fcu: goto label_4765fc;
        case 0x476600u: goto label_476600;
        case 0x476604u: goto label_476604;
        case 0x476608u: goto label_476608;
        case 0x47660cu: goto label_47660c;
        case 0x476610u: goto label_476610;
        case 0x476614u: goto label_476614;
        case 0x476618u: goto label_476618;
        case 0x47661cu: goto label_47661c;
        case 0x476620u: goto label_476620;
        case 0x476624u: goto label_476624;
        case 0x476628u: goto label_476628;
        case 0x47662cu: goto label_47662c;
        case 0x476630u: goto label_476630;
        case 0x476634u: goto label_476634;
        case 0x476638u: goto label_476638;
        case 0x47663cu: goto label_47663c;
        default: break;
    }

    ctx->pc = 0x475760u;

label_475760:
    // 0x475760: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x475760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_475764:
    // 0x475764: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x475764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_475768:
    // 0x475768: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x475768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_47576c:
    // 0x47576c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x47576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_475770:
    // 0x475770: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x475770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_475774:
    // 0x475774: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x475774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_475778:
    // 0x475778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x475778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47577c:
    // 0x47577c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_475780:
    // 0x475780: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x475780u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_475784:
    // 0x475784: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x475784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_475788:
    // 0x475788: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x475788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
label_47578c:
    // 0x47578c: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x47578cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_475790:
    // 0x475790: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x475790u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_475794:
    // 0x475794: 0x1020039f  beqz        $at, . + 4 + (0x39F << 2)
label_475798:
    if (ctx->pc == 0x475798u) {
        ctx->pc = 0x475798u;
            // 0x475798: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47579Cu;
        goto label_47579c;
    }
    ctx->pc = 0x475794u;
    {
        const bool branch_taken_0x475794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x475798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475794u;
            // 0x475798: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475794) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x47579Cu;
label_47579c:
    // 0x47579c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x47579cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4757a0:
    // 0x4757a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4757a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4757a4:
    // 0x4757a4: 0x2484f260  addiu       $a0, $a0, -0xDA0
    ctx->pc = 0x4757a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963808));
label_4757a8:
    // 0x4757a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4757a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4757ac:
    // 0x4757ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4757acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4757b0:
    // 0x4757b0: 0x600008  jr          $v1
label_4757b4:
    if (ctx->pc == 0x4757B4u) {
        ctx->pc = 0x4757B8u;
        goto label_4757b8;
    }
    ctx->pc = 0x4757B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4757B8u: goto label_4757b8;
            case 0x475914u: goto label_475914;
            case 0x476104u: goto label_476104;
            case 0x4762E8u: goto label_4762e8;
            case 0x4763E8u: goto label_4763e8;
            case 0x476448u: goto label_476448;
            case 0x4764F4u: goto label_4764f4;
            case 0x476544u: goto label_476544;
            case 0x476614u: goto label_476614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4757B8u;
label_4757b8:
    // 0x4757b8: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x4757b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_4757bc:
    // 0x4757bc: 0xc04cc34  jal         func_1330D0
label_4757c0:
    if (ctx->pc == 0x4757C0u) {
        ctx->pc = 0x4757C0u;
            // 0x4757c0: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x4757C4u;
        goto label_4757c4;
    }
    ctx->pc = 0x4757BCu;
    SET_GPR_U32(ctx, 31, 0x4757C4u);
    ctx->pc = 0x4757C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4757BCu;
            // 0x4757c0: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4757C4u; }
        if (ctx->pc != 0x4757C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4757C4u; }
        if (ctx->pc != 0x4757C4u) { return; }
    }
    ctx->pc = 0x4757C4u;
label_4757c4:
    // 0x4757c4: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x4757c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
label_4757c8:
    // 0x4757c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4757c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4757cc:
    // 0x4757cc: 0x0  nop
    ctx->pc = 0x4757ccu;
    // NOP
label_4757d0:
    // 0x4757d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4757d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4757d4:
    // 0x4757d4: 0x45020390  bc1fl       . + 4 + (0x390 << 2)
label_4757d8:
    if (ctx->pc == 0x4757D8u) {
        ctx->pc = 0x4757D8u;
            // 0x4757d8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4757DCu;
        goto label_4757dc;
    }
    ctx->pc = 0x4757D4u;
    {
        const bool branch_taken_0x4757d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4757d4) {
            ctx->pc = 0x4757D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4757D4u;
            // 0x4757d8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476618u;
            goto label_476618;
        }
    }
    ctx->pc = 0x4757DCu;
label_4757dc:
    // 0x4757dc: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x4757dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_4757e0:
    // 0x4757e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4757e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4757e4:
    // 0x4757e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4757e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4757e8:
    // 0x4757e8: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x4757e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_4757ec:
    // 0x4757ec: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x4757ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_4757f0:
    // 0x4757f0: 0xae220db8  sw          $v0, 0xDB8($s1)
    ctx->pc = 0x4757f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
label_4757f4:
    // 0x4757f4: 0xc04cc04  jal         func_133010
label_4757f8:
    if (ctx->pc == 0x4757F8u) {
        ctx->pc = 0x4757F8u;
            // 0x4757f8: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
        ctx->pc = 0x4757FCu;
        goto label_4757fc;
    }
    ctx->pc = 0x4757F4u;
    SET_GPR_U32(ctx, 31, 0x4757FCu);
    ctx->pc = 0x4757F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4757F4u;
            // 0x4757f8: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4757FCu; }
        if (ctx->pc != 0x4757FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4757FCu; }
        if (ctx->pc != 0x4757FCu) { return; }
    }
    ctx->pc = 0x4757FCu;
label_4757fc:
    // 0x4757fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4757fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_475800:
    // 0x475800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x475800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_475804:
    // 0x475804: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x475804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_475808:
    // 0x475808: 0x320f809  jalr        $t9
label_47580c:
    if (ctx->pc == 0x47580Cu) {
        ctx->pc = 0x47580Cu;
            // 0x47580c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475810u;
        goto label_475810;
    }
    ctx->pc = 0x475808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x475810u);
        ctx->pc = 0x47580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475808u;
            // 0x47580c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x475810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x475810u; }
            if (ctx->pc != 0x475810u) { return; }
        }
        }
    }
    ctx->pc = 0x475810u;
label_475810:
    // 0x475810: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x475810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_475814:
    // 0x475814: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x475814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_475818:
    // 0x475818: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x475818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_47581c:
    // 0x47581c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475820:
    // 0x475820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475824:
    // 0x475824: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x475824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_475828:
    // 0x475828: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x475828u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_47582c:
    // 0x47582c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47582cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475830:
    // 0x475830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x475830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_475834:
    // 0x475834: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x475834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_475838:
    // 0x475838: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x475838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47583c:
    // 0x47583c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_475840:
    // 0x475840: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x475840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_475844:
    // 0x475844: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x475844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_475848:
    // 0x475848: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x475848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_47584c:
    // 0x47584c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x47584cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_475850:
    // 0x475850: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x475850u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_475854:
    // 0x475854: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x475854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_475858:
    // 0x475858: 0x320f809  jalr        $t9
label_47585c:
    if (ctx->pc == 0x47585Cu) {
        ctx->pc = 0x47585Cu;
            // 0x47585c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x475860u;
        goto label_475860;
    }
    ctx->pc = 0x475858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x475860u);
        ctx->pc = 0x47585Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475858u;
            // 0x47585c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x475860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x475860u; }
            if (ctx->pc != 0x475860u) { return; }
        }
        }
    }
    ctx->pc = 0x475860u;
label_475860:
    // 0x475860: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x475860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_475864:
    // 0x475864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x475864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_475868:
    // 0x475868: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x475868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_47586c:
    // 0x47586c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x47586cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_475870:
    // 0x475870: 0x320f809  jalr        $t9
label_475874:
    if (ctx->pc == 0x475874u) {
        ctx->pc = 0x475874u;
            // 0x475874: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x475878u;
        goto label_475878;
    }
    ctx->pc = 0x475870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x475878u);
        ctx->pc = 0x475874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475870u;
            // 0x475874: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x475878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x475878u; }
            if (ctx->pc != 0x475878u) { return; }
        }
        }
    }
    ctx->pc = 0x475878u;
label_475878:
    // 0x475878: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x475878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47587c:
    // 0x47587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475880:
    // 0x475880: 0xae4301c4  sw          $v1, 0x1C4($s2)
    ctx->pc = 0x475880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
label_475884:
    // 0x475884: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x475884u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_475888:
    // 0x475888: 0x8e230d60  lw          $v1, 0xD60($s1)
    ctx->pc = 0x475888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_47588c:
    // 0x47588c: 0xa064001c  sb          $a0, 0x1C($v1)
    ctx->pc = 0x47588cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 4));
label_475890:
    // 0x475890: 0xae4001e8  sw          $zero, 0x1E8($s2)
    ctx->pc = 0x475890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 0));
label_475894:
    // 0x475894: 0xae4001ec  sw          $zero, 0x1EC($s2)
    ctx->pc = 0x475894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 0));
label_475898:
    // 0x475898: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x475898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_47589c:
    // 0x47589c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4758a0:
    if (ctx->pc == 0x4758A0u) {
        ctx->pc = 0x4758A0u;
            // 0x4758a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4758A4u;
        goto label_4758a4;
    }
    ctx->pc = 0x47589Cu;
    {
        const bool branch_taken_0x47589c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4758A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47589Cu;
            // 0x4758a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47589c) {
            ctx->pc = 0x4758B4u;
            goto label_4758b4;
        }
    }
    ctx->pc = 0x4758A4u;
label_4758a4:
    // 0x4758a4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4758a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4758a8:
    // 0x4758a8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4758ac:
    if (ctx->pc == 0x4758ACu) {
        ctx->pc = 0x4758B0u;
        goto label_4758b0;
    }
    ctx->pc = 0x4758A8u;
    {
        const bool branch_taken_0x4758a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4758a8) {
            ctx->pc = 0x4758B4u;
            goto label_4758b4;
        }
    }
    ctx->pc = 0x4758B0u;
label_4758b0:
    // 0x4758b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4758b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4758b4:
    // 0x4758b4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_4758b8:
    if (ctx->pc == 0x4758B8u) {
        ctx->pc = 0x4758BCu;
        goto label_4758bc;
    }
    ctx->pc = 0x4758B4u;
    {
        const bool branch_taken_0x4758b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4758b4) {
            ctx->pc = 0x4758D0u;
            goto label_4758d0;
        }
    }
    ctx->pc = 0x4758BCu;
label_4758bc:
    // 0x4758bc: 0xc075eb4  jal         func_1D7AD0
label_4758c0:
    if (ctx->pc == 0x4758C0u) {
        ctx->pc = 0x4758C0u;
            // 0x4758c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4758C4u;
        goto label_4758c4;
    }
    ctx->pc = 0x4758BCu;
    SET_GPR_U32(ctx, 31, 0x4758C4u);
    ctx->pc = 0x4758C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4758BCu;
            // 0x4758c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4758C4u; }
        if (ctx->pc != 0x4758C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4758C4u; }
        if (ctx->pc != 0x4758C4u) { return; }
    }
    ctx->pc = 0x4758C4u;
label_4758c4:
    // 0x4758c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4758c8:
    if (ctx->pc == 0x4758C8u) {
        ctx->pc = 0x4758CCu;
        goto label_4758cc;
    }
    ctx->pc = 0x4758C4u;
    {
        const bool branch_taken_0x4758c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4758c4) {
            ctx->pc = 0x4758D0u;
            goto label_4758d0;
        }
    }
    ctx->pc = 0x4758CCu;
label_4758cc:
    // 0x4758cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4758ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4758d0:
    // 0x4758d0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_4758d4:
    if (ctx->pc == 0x4758D4u) {
        ctx->pc = 0x4758D8u;
        goto label_4758d8;
    }
    ctx->pc = 0x4758D0u;
    {
        const bool branch_taken_0x4758d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4758d0) {
            ctx->pc = 0x4758E8u;
            goto label_4758e8;
        }
    }
    ctx->pc = 0x4758D8u;
label_4758d8:
    // 0x4758d8: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x4758d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4758dc:
    // 0x4758dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4758dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4758e0:
    // 0x4758e0: 0x1483034c  bne         $a0, $v1, . + 4 + (0x34C << 2)
label_4758e4:
    if (ctx->pc == 0x4758E4u) {
        ctx->pc = 0x4758E8u;
        goto label_4758e8;
    }
    ctx->pc = 0x4758E0u;
    {
        const bool branch_taken_0x4758e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4758e0) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x4758E8u;
label_4758e8:
    // 0x4758e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4758e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4758ec:
    // 0x4758ec: 0x8c707608  lw          $s0, 0x7608($v1)
    ctx->pc = 0x4758ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30216)));
label_4758f0:
    // 0x4758f0: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x4758f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_4758f4:
    // 0x4758f4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4758f8:
    if (ctx->pc == 0x4758F8u) {
        ctx->pc = 0x4758F8u;
            // 0x4758f8: 0x8e030094  lw          $v1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x4758FCu;
        goto label_4758fc;
    }
    ctx->pc = 0x4758F4u;
    {
        const bool branch_taken_0x4758f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4758f4) {
            ctx->pc = 0x4758F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4758F4u;
            // 0x4758f8: 0x8e030094  lw          $v1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475908u;
            goto label_475908;
        }
    }
    ctx->pc = 0x4758FCu;
label_4758fc:
    // 0x4758fc: 0xc072a56  jal         func_1CA958
label_475900:
    if (ctx->pc == 0x475900u) {
        ctx->pc = 0x475900u;
            // 0x475900: 0x92040090  lbu         $a0, 0x90($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x475904u;
        goto label_475904;
    }
    ctx->pc = 0x4758FCu;
    SET_GPR_U32(ctx, 31, 0x475904u);
    ctx->pc = 0x475900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4758FCu;
            // 0x475900: 0x92040090  lbu         $a0, 0x90($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475904u; }
        if (ctx->pc != 0x475904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475904u; }
        if (ctx->pc != 0x475904u) { return; }
    }
    ctx->pc = 0x475904u;
label_475904:
    // 0x475904: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x475904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_475908:
    // 0x475908: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x475908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_47590c:
    // 0x47590c: 0x10000341  b           . + 4 + (0x341 << 2)
label_475910:
    if (ctx->pc == 0x475910u) {
        ctx->pc = 0x475910u;
            // 0x475910: 0xae030094  sw          $v1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
        ctx->pc = 0x475914u;
        goto label_475914;
    }
    ctx->pc = 0x47590Cu;
    {
        const bool branch_taken_0x47590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47590Cu;
            // 0x475910: 0xae030094  sw          $v1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47590c) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x475914u;
label_475914:
    // 0x475914: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x475914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_475918:
    // 0x475918: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x475918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_47591c:
    // 0x47591c: 0xc04cc04  jal         func_133010
label_475920:
    if (ctx->pc == 0x475920u) {
        ctx->pc = 0x475920u;
            // 0x475920: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x475924u;
        goto label_475924;
    }
    ctx->pc = 0x47591Cu;
    SET_GPR_U32(ctx, 31, 0x475924u);
    ctx->pc = 0x475920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47591Cu;
            // 0x475920: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475924u; }
        if (ctx->pc != 0x475924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475924u; }
        if (ctx->pc != 0x475924u) { return; }
    }
    ctx->pc = 0x475924u;
label_475924:
    // 0x475924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x475924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_475928:
    // 0x475928: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x475928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_47592c:
    // 0x47592c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47592cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475930:
    // 0x475930: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x475930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_475934:
    // 0x475934: 0xc04cc7c  jal         func_1331F0
label_475938:
    if (ctx->pc == 0x475938u) {
        ctx->pc = 0x475938u;
            // 0x475938: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x47593Cu;
        goto label_47593c;
    }
    ctx->pc = 0x475934u;
    SET_GPR_U32(ctx, 31, 0x47593Cu);
    ctx->pc = 0x475938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475934u;
            // 0x475938: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47593Cu; }
        if (ctx->pc != 0x47593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47593Cu; }
        if (ctx->pc != 0x47593Cu) { return; }
    }
    ctx->pc = 0x47593Cu;
label_47593c:
    // 0x47593c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x47593cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_475940:
    // 0x475940: 0xc04c720  jal         func_131C80
label_475944:
    if (ctx->pc == 0x475944u) {
        ctx->pc = 0x475944u;
            // 0x475944: 0x262508e0  addiu       $a1, $s1, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
        ctx->pc = 0x475948u;
        goto label_475948;
    }
    ctx->pc = 0x475940u;
    SET_GPR_U32(ctx, 31, 0x475948u);
    ctx->pc = 0x475944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475940u;
            // 0x475944: 0x262508e0  addiu       $a1, $s1, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475948u; }
        if (ctx->pc != 0x475948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475948u; }
        if (ctx->pc != 0x475948u) { return; }
    }
    ctx->pc = 0x475948u;
label_475948:
    // 0x475948: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x475948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47594c:
    // 0x47594c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x47594cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_475950:
    // 0x475950: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x475950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_475954:
    // 0x475954: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x475954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475958:
    // 0x475958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x475958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47595c:
    // 0x47595c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x47595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475960:
    // 0x475960: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x475960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_475964:
    // 0x475964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x475964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475968:
    // 0x475968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x475968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47596c:
    // 0x47596c: 0xc0d87e0  jal         func_361F80
label_475970:
    if (ctx->pc == 0x475970u) {
        ctx->pc = 0x475970u;
            // 0x475970: 0xe600012c  swc1        $f0, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->pc = 0x475974u;
        goto label_475974;
    }
    ctx->pc = 0x47596Cu;
    SET_GPR_U32(ctx, 31, 0x475974u);
    ctx->pc = 0x475970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47596Cu;
            // 0x475970: 0xe600012c  swc1        $f0, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475974u; }
        if (ctx->pc != 0x475974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475974u; }
        if (ctx->pc != 0x475974u) { return; }
    }
    ctx->pc = 0x475974u;
label_475974:
    // 0x475974: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x475974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_475978:
    // 0x475978: 0x96030112  lhu         $v1, 0x112($s0)
    ctx->pc = 0x475978u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_47597c:
    // 0x47597c: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x47597cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_475980:
    // 0x475980: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x475980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_475984:
    // 0x475984: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x475984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_475988:
    // 0x475988: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_47598c:
    if (ctx->pc == 0x47598Cu) {
        ctx->pc = 0x47598Cu;
            // 0x47598c: 0x8e350d60  lw          $s5, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->pc = 0x475990u;
        goto label_475990;
    }
    ctx->pc = 0x475988u;
    {
        const bool branch_taken_0x475988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475988) {
            ctx->pc = 0x47598Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475988u;
            // 0x47598c: 0x8e350d60  lw          $s5, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475A8Cu;
            goto label_475a8c;
        }
    }
    ctx->pc = 0x475990u;
label_475990:
    // 0x475990: 0x8e330550  lw          $s3, 0x550($s1)
    ctx->pc = 0x475990u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_475994:
    // 0x475994: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x475994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_475998:
    // 0x475998: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x475998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_47599c:
    // 0x47599c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4759a0:
    // 0x4759a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4759a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4759a4:
    // 0x4759a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4759a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4759a8:
    // 0x4759a8: 0x8262010c  lb          $v0, 0x10C($s3)
    ctx->pc = 0x4759a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4759ac:
    // 0x4759ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4759acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4759b0:
    // 0x4759b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4759b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4759b4:
    // 0x4759b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4759b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4759b8:
    // 0x4759b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4759b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4759bc:
    // 0x4759bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4759bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4759c0:
    // 0x4759c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4759c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4759c4:
    // 0x4759c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4759c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4759c8:
    // 0x4759c8: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4759c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4759cc:
    // 0x4759cc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4759ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4759d0:
    // 0x4759d0: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4759d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4759d4:
    // 0x4759d4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4759d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4759d8:
    // 0x4759d8: 0x320f809  jalr        $t9
label_4759dc:
    if (ctx->pc == 0x4759DCu) {
        ctx->pc = 0x4759DCu;
            // 0x4759dc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4759E0u;
        goto label_4759e0;
    }
    ctx->pc = 0x4759D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4759E0u);
        ctx->pc = 0x4759DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4759D8u;
            // 0x4759dc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4759E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4759E0u; }
            if (ctx->pc != 0x4759E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4759E0u;
label_4759e0:
    // 0x4759e0: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4759e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4759e4:
    // 0x4759e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4759e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4759e8:
    // 0x4759e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4759e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4759ec:
    // 0x4759ec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4759ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4759f0:
    // 0x4759f0: 0x320f809  jalr        $t9
label_4759f4:
    if (ctx->pc == 0x4759F4u) {
        ctx->pc = 0x4759F4u;
            // 0x4759f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4759F8u;
        goto label_4759f8;
    }
    ctx->pc = 0x4759F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4759F8u);
        ctx->pc = 0x4759F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4759F0u;
            // 0x4759f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4759F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4759F8u; }
            if (ctx->pc != 0x4759F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4759F8u;
label_4759f8:
    // 0x4759f8: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x4759f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_4759fc:
    // 0x4759fc: 0xc075318  jal         func_1D4C60
label_475a00:
    if (ctx->pc == 0x475A00u) {
        ctx->pc = 0x475A00u;
            // 0x475a00: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->pc = 0x475A04u;
        goto label_475a04;
    }
    ctx->pc = 0x4759FCu;
    SET_GPR_U32(ctx, 31, 0x475A04u);
    ctx->pc = 0x475A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4759FCu;
            // 0x475a00: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A04u; }
        if (ctx->pc != 0x475A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A04u; }
        if (ctx->pc != 0x475A04u) { return; }
    }
    ctx->pc = 0x475A04u;
label_475a04:
    // 0x475a04: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x475a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_475a08:
    // 0x475a08: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x475a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_475a0c:
    // 0x475a0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x475a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475a10:
    // 0x475a10: 0xc0c6250  jal         func_318940
label_475a14:
    if (ctx->pc == 0x475A14u) {
        ctx->pc = 0x475A14u;
            // 0x475a14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475A18u;
        goto label_475a18;
    }
    ctx->pc = 0x475A10u;
    SET_GPR_U32(ctx, 31, 0x475A18u);
    ctx->pc = 0x475A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475A10u;
            // 0x475a14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A18u; }
        if (ctx->pc != 0x475A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A18u; }
        if (ctx->pc != 0x475A18u) { return; }
    }
    ctx->pc = 0x475A18u;
label_475a18:
    // 0x475a18: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x475a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_475a1c:
    // 0x475a1c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x475a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_475a20:
    // 0x475a20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x475a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475a24:
    // 0x475a24: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x475a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_475a28:
    // 0x475a28: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x475a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_475a2c:
    // 0x475a2c: 0xc0c6250  jal         func_318940
label_475a30:
    if (ctx->pc == 0x475A30u) {
        ctx->pc = 0x475A30u;
            // 0x475a30: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x475A34u;
        goto label_475a34;
    }
    ctx->pc = 0x475A2Cu;
    SET_GPR_U32(ctx, 31, 0x475A34u);
    ctx->pc = 0x475A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475A2Cu;
            // 0x475a30: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A34u; }
        if (ctx->pc != 0x475A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A34u; }
        if (ctx->pc != 0x475A34u) { return; }
    }
    ctx->pc = 0x475A34u;
label_475a34:
    // 0x475a34: 0xc0b9210  jal         func_2E4840
label_475a38:
    if (ctx->pc == 0x475A38u) {
        ctx->pc = 0x475A38u;
            // 0x475a38: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x475A3Cu;
        goto label_475a3c;
    }
    ctx->pc = 0x475A34u;
    SET_GPR_U32(ctx, 31, 0x475A3Cu);
    ctx->pc = 0x475A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475A34u;
            // 0x475a38: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A3Cu; }
        if (ctx->pc != 0x475A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A3Cu; }
        if (ctx->pc != 0x475A3Cu) { return; }
    }
    ctx->pc = 0x475A3Cu;
label_475a3c:
    // 0x475a3c: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x475a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475a40:
    // 0x475a40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x475a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_475a44:
    // 0x475a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475a48:
    // 0x475a48: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x475a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_475a4c:
    // 0x475a4c: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x475a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_475a50:
    // 0x475a50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x475a50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_475a54:
    // 0x475a54: 0x0  nop
    ctx->pc = 0x475a54u;
    // NOP
label_475a58:
    // 0x475a58: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x475a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_475a5c:
    // 0x475a5c: 0xc04cc04  jal         func_133010
label_475a60:
    if (ctx->pc == 0x475A60u) {
        ctx->pc = 0x475A60u;
            // 0x475a60: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x475A64u;
        goto label_475a64;
    }
    ctx->pc = 0x475A5Cu;
    SET_GPR_U32(ctx, 31, 0x475A64u);
    ctx->pc = 0x475A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475A5Cu;
            // 0x475a60: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A64u; }
        if (ctx->pc != 0x475A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A64u; }
        if (ctx->pc != 0x475A64u) { return; }
    }
    ctx->pc = 0x475A64u;
label_475a64:
    // 0x475a64: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x475a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_475a68:
    // 0x475a68: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x475a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_475a6c:
    // 0x475a6c: 0xc04cc90  jal         func_133240
label_475a70:
    if (ctx->pc == 0x475A70u) {
        ctx->pc = 0x475A70u;
            // 0x475a70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475A74u;
        goto label_475a74;
    }
    ctx->pc = 0x475A6Cu;
    SET_GPR_U32(ctx, 31, 0x475A74u);
    ctx->pc = 0x475A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475A6Cu;
            // 0x475a70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A74u; }
        if (ctx->pc != 0x475A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A74u; }
        if (ctx->pc != 0x475A74u) { return; }
    }
    ctx->pc = 0x475A74u;
label_475a74:
    // 0x475a74: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x475a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_475a78:
    // 0x475a78: 0xc04cc04  jal         func_133010
label_475a7c:
    if (ctx->pc == 0x475A7Cu) {
        ctx->pc = 0x475A7Cu;
            // 0x475a7c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x475A80u;
        goto label_475a80;
    }
    ctx->pc = 0x475A78u;
    SET_GPR_U32(ctx, 31, 0x475A80u);
    ctx->pc = 0x475A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475A78u;
            // 0x475a7c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A80u; }
        if (ctx->pc != 0x475A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A80u; }
        if (ctx->pc != 0x475A80u) { return; }
    }
    ctx->pc = 0x475A80u;
label_475a80:
    // 0x475a80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x475a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_475a84:
    // 0x475a84: 0x100002e3  b           . + 4 + (0x2E3 << 2)
label_475a88:
    if (ctx->pc == 0x475A88u) {
        ctx->pc = 0x475A88u;
            // 0x475a88: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x475A8Cu;
        goto label_475a8c;
    }
    ctx->pc = 0x475A84u;
    {
        const bool branch_taken_0x475a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475A84u;
            // 0x475a88: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475a84) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x475A8Cu;
label_475a8c:
    // 0x475a8c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x475a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_475a90:
    // 0x475a90: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x475a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_475a94:
    // 0x475a94: 0xc04f278  jal         func_13C9E0
label_475a98:
    if (ctx->pc == 0x475A98u) {
        ctx->pc = 0x475A98u;
            // 0x475a98: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x475A9Cu;
        goto label_475a9c;
    }
    ctx->pc = 0x475A94u;
    SET_GPR_U32(ctx, 31, 0x475A9Cu);
    ctx->pc = 0x475A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475A94u;
            // 0x475a98: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A9Cu; }
        if (ctx->pc != 0x475A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475A9Cu; }
        if (ctx->pc != 0x475A9Cu) { return; }
    }
    ctx->pc = 0x475A9Cu;
label_475a9c:
    // 0x475a9c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x475a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_475aa0:
    // 0x475aa0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x475aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_475aa4:
    // 0x475aa4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x475aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_475aa8:
    // 0x475aa8: 0xc04cca0  jal         func_133280
label_475aac:
    if (ctx->pc == 0x475AACu) {
        ctx->pc = 0x475AACu;
            // 0x475aac: 0x24c6f2b0  addiu       $a2, $a2, -0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963888));
        ctx->pc = 0x475AB0u;
        goto label_475ab0;
    }
    ctx->pc = 0x475AA8u;
    SET_GPR_U32(ctx, 31, 0x475AB0u);
    ctx->pc = 0x475AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475AA8u;
            // 0x475aac: 0x24c6f2b0  addiu       $a2, $a2, -0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475AB0u; }
        if (ctx->pc != 0x475AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475AB0u; }
        if (ctx->pc != 0x475AB0u) { return; }
    }
    ctx->pc = 0x475AB0u;
label_475ab0:
    // 0x475ab0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x475ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_475ab4:
    // 0x475ab4: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x475ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_475ab8:
    // 0x475ab8: 0xc04cbf0  jal         func_132FC0
label_475abc:
    if (ctx->pc == 0x475ABCu) {
        ctx->pc = 0x475ABCu;
            // 0x475abc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475AC0u;
        goto label_475ac0;
    }
    ctx->pc = 0x475AB8u;
    SET_GPR_U32(ctx, 31, 0x475AC0u);
    ctx->pc = 0x475ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475AB8u;
            // 0x475abc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475AC0u; }
        if (ctx->pc != 0x475AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475AC0u; }
        if (ctx->pc != 0x475AC0u) { return; }
    }
    ctx->pc = 0x475AC0u;
label_475ac0:
    // 0x475ac0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x475ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_475ac4:
    // 0x475ac4: 0xc04cc44  jal         func_133110
label_475ac8:
    if (ctx->pc == 0x475AC8u) {
        ctx->pc = 0x475AC8u;
            // 0x475ac8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475ACCu;
        goto label_475acc;
    }
    ctx->pc = 0x475AC4u;
    SET_GPR_U32(ctx, 31, 0x475ACCu);
    ctx->pc = 0x475AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475AC4u;
            // 0x475ac8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475ACCu; }
        if (ctx->pc != 0x475ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475ACCu; }
        if (ctx->pc != 0x475ACCu) { return; }
    }
    ctx->pc = 0x475ACCu;
label_475acc:
    // 0x475acc: 0xc64101e4  lwc1        $f1, 0x1E4($s2)
    ctx->pc = 0x475accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475ad0:
    // 0x475ad0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x475ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_475ad4:
    // 0x475ad4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x475ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_475ad8:
    // 0x475ad8: 0x265401e4  addiu       $s4, $s2, 0x1E4
    ctx->pc = 0x475ad8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
label_475adc:
    // 0x475adc: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x475adcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_475ae0:
    // 0x475ae0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x475ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_475ae4:
    // 0x475ae4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x475ae4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_475ae8:
    // 0x475ae8: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x475ae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_475aec:
    // 0x475aec: 0xe64101e4  swc1        $f1, 0x1E4($s2)
    ctx->pc = 0x475aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 484), bits); }
label_475af0:
    // 0x475af0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x475af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_475af4:
    // 0x475af4: 0xc6340e1c  lwc1        $f20, 0xE1C($s1)
    ctx->pc = 0x475af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_475af8:
    // 0x475af8: 0x96030112  lhu         $v1, 0x112($s0)
    ctx->pc = 0x475af8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_475afc:
    // 0x475afc: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x475afcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_475b00:
    // 0x475b00: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x475b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_475b04:
    // 0x475b04: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x475b04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_475b08:
    // 0x475b08: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
label_475b0c:
    if (ctx->pc == 0x475B0Cu) {
        ctx->pc = 0x475B0Cu;
            // 0x475b0c: 0x265301e0  addiu       $s3, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->pc = 0x475B10u;
        goto label_475b10;
    }
    ctx->pc = 0x475B08u;
    {
        const bool branch_taken_0x475b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x475B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475B08u;
            // 0x475b0c: 0x265301e0  addiu       $s3, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475b08) {
            ctx->pc = 0x475CFCu;
            goto label_475cfc;
        }
    }
    ctx->pc = 0x475B10u;
label_475b10:
    // 0x475b10: 0x82a40004  lb          $a0, 0x4($s5)
    ctx->pc = 0x475b10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_475b14:
    // 0x475b14: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x475b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
label_475b18:
    // 0x475b18: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x475b18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_475b1c:
    // 0x475b1c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x475b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_475b20:
    // 0x475b20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x475b20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475b24:
    // 0x475b24: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x475b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
label_475b28:
    // 0x475b28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x475b28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475b2c:
    // 0x475b2c: 0x0  nop
    ctx->pc = 0x475b2cu;
    // NOP
label_475b30:
    // 0x475b30: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x475b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_475b34:
    // 0x475b34: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x475b34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
label_475b38:
    // 0x475b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475b3c:
    // 0x475b3c: 0x0  nop
    ctx->pc = 0x475b3cu;
    // NOP
label_475b40:
    // 0x475b40: 0x4601051c  madd.s      $f20, $f0, $f1
    ctx->pc = 0x475b40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_475b44:
    // 0x475b44: 0xc047740  jal         func_11DD00
label_475b48:
    if (ctx->pc == 0x475B48u) {
        ctx->pc = 0x475B48u;
            // 0x475b48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x475B4Cu;
        goto label_475b4c;
    }
    ctx->pc = 0x475B44u;
    SET_GPR_U32(ctx, 31, 0x475B4Cu);
    ctx->pc = 0x475B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475B44u;
            // 0x475b48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475B4Cu; }
        if (ctx->pc != 0x475B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475B4Cu; }
        if (ctx->pc != 0x475B4Cu) { return; }
    }
    ctx->pc = 0x475B4Cu;
label_475b4c:
    // 0x475b4c: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x475b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_475b50:
    // 0x475b50: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x475b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_475b54:
    // 0x475b54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x475b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475b58:
    // 0x475b58: 0x0  nop
    ctx->pc = 0x475b58u;
    // NOP
label_475b5c:
    // 0x475b5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x475b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475b60:
    // 0x475b60: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
label_475b64:
    if (ctx->pc == 0x475B64u) {
        ctx->pc = 0x475B64u;
            // 0x475b64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x475B68u;
        goto label_475b68;
    }
    ctx->pc = 0x475B60u;
    {
        const bool branch_taken_0x475b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x475b60) {
            ctx->pc = 0x475B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475B60u;
            // 0x475b64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x475BE0u;
            goto label_475be0;
        }
    }
    ctx->pc = 0x475B68u;
label_475b68:
    // 0x475b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475b6c:
    // 0x475b6c: 0x0  nop
    ctx->pc = 0x475b6cu;
    // NOP
label_475b70:
    // 0x475b70: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x475b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475b74:
    // 0x475b74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_475b78:
    if (ctx->pc == 0x475B78u) {
        ctx->pc = 0x475B78u;
            // 0x475b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x475B7Cu;
        goto label_475b7c;
    }
    ctx->pc = 0x475B74u;
    {
        const bool branch_taken_0x475b74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x475B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475B74u;
            // 0x475b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475b74) {
            ctx->pc = 0x475B80u;
            goto label_475b80;
        }
    }
    ctx->pc = 0x475B7Cu;
label_475b7c:
    // 0x475b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x475b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475b80:
    // 0x475b80: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_475b84:
    if (ctx->pc == 0x475B84u) {
        ctx->pc = 0x475B84u;
            // 0x475b84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x475B88u;
        goto label_475b88;
    }
    ctx->pc = 0x475B80u;
    {
        const bool branch_taken_0x475b80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x475b80) {
            ctx->pc = 0x475B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475B80u;
            // 0x475b84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475B94u;
            goto label_475b94;
        }
    }
    ctx->pc = 0x475B88u;
label_475b88:
    // 0x475b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475b8c:
    // 0x475b8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_475b90:
    if (ctx->pc == 0x475B90u) {
        ctx->pc = 0x475B90u;
            // 0x475b90: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x475B94u;
        goto label_475b94;
    }
    ctx->pc = 0x475B8Cu;
    {
        const bool branch_taken_0x475b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475B8Cu;
            // 0x475b90: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x475b8c) {
            ctx->pc = 0x475BACu;
            goto label_475bac;
        }
    }
    ctx->pc = 0x475B94u;
label_475b94:
    // 0x475b94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x475b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_475b98:
    // 0x475b98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x475b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_475b9c:
    // 0x475b9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x475b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475ba0:
    // 0x475ba0: 0x0  nop
    ctx->pc = 0x475ba0u;
    // NOP
label_475ba4:
    // 0x475ba4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x475ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_475ba8:
    // 0x475ba8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x475ba8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_475bac:
    // 0x475bac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x475bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_475bb0:
    // 0x475bb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x475bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_475bb4:
    // 0x475bb4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x475bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_475bb8:
    // 0x475bb8: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x475bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_475bbc:
    // 0x475bbc: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x475bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_475bc0:
    // 0x475bc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x475bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_475bc4:
    // 0x475bc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x475bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475bc8:
    // 0x475bc8: 0x0  nop
    ctx->pc = 0x475bc8u;
    // NOP
label_475bcc:
    // 0x475bcc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x475bccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_475bd0:
    // 0x475bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475bd4:
    // 0x475bd4: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x475bd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_475bd8:
    // 0x475bd8: 0x10000045  b           . + 4 + (0x45 << 2)
label_475bdc:
    if (ctx->pc == 0x475BDCu) {
        ctx->pc = 0x475BDCu;
            // 0x475bdc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x475BE0u;
        goto label_475be0;
    }
    ctx->pc = 0x475BD8u;
    {
        const bool branch_taken_0x475bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475BD8u;
            // 0x475bdc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x475bd8) {
            ctx->pc = 0x475CF0u;
            goto label_475cf0;
        }
    }
    ctx->pc = 0x475BE0u;
label_475be0:
    // 0x475be0: 0xc047740  jal         func_11DD00
label_475be4:
    if (ctx->pc == 0x475BE4u) {
        ctx->pc = 0x475BE8u;
        goto label_475be8;
    }
    ctx->pc = 0x475BE0u;
    SET_GPR_U32(ctx, 31, 0x475BE8u);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475BE8u; }
        if (ctx->pc != 0x475BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475BE8u; }
        if (ctx->pc != 0x475BE8u) { return; }
    }
    ctx->pc = 0x475BE8u;
label_475be8:
    // 0x475be8: 0x3c023842  lui         $v0, 0x3842
    ctx->pc = 0x475be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14402 << 16));
label_475bec:
    // 0x475bec: 0x34422e45  ori         $v0, $v0, 0x2E45
    ctx->pc = 0x475becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11845);
label_475bf0:
    // 0x475bf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x475bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475bf4:
    // 0x475bf4: 0x0  nop
    ctx->pc = 0x475bf4u;
    // NOP
label_475bf8:
    // 0x475bf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x475bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475bfc:
    // 0x475bfc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_475c00:
    if (ctx->pc == 0x475C00u) {
        ctx->pc = 0x475C04u;
        goto label_475c04;
    }
    ctx->pc = 0x475BFCu;
    {
        const bool branch_taken_0x475bfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x475bfc) {
            ctx->pc = 0x475C10u;
            goto label_475c10;
        }
    }
    ctx->pc = 0x475C04u;
label_475c04:
    // 0x475c04: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x475c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_475c08:
    // 0x475c08: 0x1000003a  b           . + 4 + (0x3A << 2)
label_475c0c:
    if (ctx->pc == 0x475C0Cu) {
        ctx->pc = 0x475C0Cu;
            // 0x475c0c: 0xe6340e1c  swc1        $f20, 0xE1C($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
        ctx->pc = 0x475C10u;
        goto label_475c10;
    }
    ctx->pc = 0x475C08u;
    {
        const bool branch_taken_0x475c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475C08u;
            // 0x475c0c: 0xe6340e1c  swc1        $f20, 0xE1C($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x475c08) {
            ctx->pc = 0x475CF4u;
            goto label_475cf4;
        }
    }
    ctx->pc = 0x475C10u;
label_475c10:
    // 0x475c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475c14:
    // 0x475c14: 0x0  nop
    ctx->pc = 0x475c14u;
    // NOP
label_475c18:
    // 0x475c18: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x475c18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475c1c:
    // 0x475c1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_475c20:
    if (ctx->pc == 0x475C20u) {
        ctx->pc = 0x475C20u;
            // 0x475c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x475C24u;
        goto label_475c24;
    }
    ctx->pc = 0x475C1Cu;
    {
        const bool branch_taken_0x475c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x475C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475C1Cu;
            // 0x475c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475c1c) {
            ctx->pc = 0x475C28u;
            goto label_475c28;
        }
    }
    ctx->pc = 0x475C24u;
label_475c24:
    // 0x475c24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x475c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475c28:
    // 0x475c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475c2c:
    // 0x475c2c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x475c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_475c30:
    // 0x475c30: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x475c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475c34:
    // 0x475c34: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_475c38:
    if (ctx->pc == 0x475C38u) {
        ctx->pc = 0x475C38u;
            // 0x475c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x475C3Cu;
        goto label_475c3c;
    }
    ctx->pc = 0x475C34u;
    {
        const bool branch_taken_0x475c34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x475C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475C34u;
            // 0x475c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475c34) {
            ctx->pc = 0x475C40u;
            goto label_475c40;
        }
    }
    ctx->pc = 0x475C3Cu;
label_475c3c:
    // 0x475c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x475c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475c40:
    // 0x475c40: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_475c44:
    if (ctx->pc == 0x475C44u) {
        ctx->pc = 0x475C44u;
            // 0x475c44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x475C48u;
        goto label_475c48;
    }
    ctx->pc = 0x475C40u;
    {
        const bool branch_taken_0x475c40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x475c40) {
            ctx->pc = 0x475C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475C40u;
            // 0x475c44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475C54u;
            goto label_475c54;
        }
    }
    ctx->pc = 0x475C48u;
label_475c48:
    // 0x475c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475c4c:
    // 0x475c4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_475c50:
    if (ctx->pc == 0x475C50u) {
        ctx->pc = 0x475C50u;
            // 0x475c50: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x475C54u;
        goto label_475c54;
    }
    ctx->pc = 0x475C4Cu;
    {
        const bool branch_taken_0x475c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475C4Cu;
            // 0x475c50: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x475c4c) {
            ctx->pc = 0x475C6Cu;
            goto label_475c6c;
        }
    }
    ctx->pc = 0x475C54u;
label_475c54:
    // 0x475c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x475c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_475c58:
    // 0x475c58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x475c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_475c5c:
    // 0x475c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x475c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475c60:
    // 0x475c60: 0x0  nop
    ctx->pc = 0x475c60u;
    // NOP
label_475c64:
    // 0x475c64: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x475c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_475c68:
    // 0x475c68: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x475c68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_475c6c:
    // 0x475c6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x475c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_475c70:
    // 0x475c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x475c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_475c74:
    // 0x475c74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x475c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_475c78:
    // 0x475c78: 0x3c023ab6  lui         $v0, 0x3AB6
    ctx->pc = 0x475c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15030 << 16));
label_475c7c:
    // 0x475c7c: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x475c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
label_475c80:
    // 0x475c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475c84:
    // 0x475c84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x475c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_475c88:
    // 0x475c88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x475c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475c8c:
    // 0x475c8c: 0x0  nop
    ctx->pc = 0x475c8cu;
    // NOP
label_475c90:
    // 0x475c90: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x475c90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_475c94:
    // 0x475c94: 0x4604189d  msub.s      $f2, $f3, $f4
    ctx->pc = 0x475c94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_475c98:
    // 0x475c98: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x475c98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_475c9c:
    // 0x475c9c: 0x4602051d  msub.s      $f20, $f0, $f2
    ctx->pc = 0x475c9cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_475ca0:
    // 0x475ca0: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x475ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475ca4:
    // 0x475ca4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_475ca8:
    if (ctx->pc == 0x475CA8u) {
        ctx->pc = 0x475CA8u;
            // 0x475ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x475CACu;
        goto label_475cac;
    }
    ctx->pc = 0x475CA4u;
    {
        const bool branch_taken_0x475ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x475CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475CA4u;
            // 0x475ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475ca4) {
            ctx->pc = 0x475CB0u;
            goto label_475cb0;
        }
    }
    ctx->pc = 0x475CACu;
label_475cac:
    // 0x475cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x475cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475cb0:
    // 0x475cb0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x475cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_475cb4:
    // 0x475cb4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x475cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_475cb8:
    // 0x475cb8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x475cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_475cbc:
    // 0x475cbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x475cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_475cc0:
    // 0x475cc0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_475cc4:
    if (ctx->pc == 0x475CC4u) {
        ctx->pc = 0x475CC4u;
            // 0x475cc4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x475CC8u;
        goto label_475cc8;
    }
    ctx->pc = 0x475CC0u;
    {
        const bool branch_taken_0x475cc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x475cc0) {
            ctx->pc = 0x475CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475CC0u;
            // 0x475cc4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475CD4u;
            goto label_475cd4;
        }
    }
    ctx->pc = 0x475CC8u;
label_475cc8:
    // 0x475cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475ccc:
    // 0x475ccc: 0x10000007  b           . + 4 + (0x7 << 2)
label_475cd0:
    if (ctx->pc == 0x475CD0u) {
        ctx->pc = 0x475CD0u;
            // 0x475cd0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x475CD4u;
        goto label_475cd4;
    }
    ctx->pc = 0x475CCCu;
    {
        const bool branch_taken_0x475ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475CCCu;
            // 0x475cd0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x475ccc) {
            ctx->pc = 0x475CECu;
            goto label_475cec;
        }
    }
    ctx->pc = 0x475CD4u;
label_475cd4:
    // 0x475cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x475cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_475cd8:
    // 0x475cd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x475cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_475cdc:
    // 0x475cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x475cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475ce0:
    // 0x475ce0: 0x0  nop
    ctx->pc = 0x475ce0u;
    // NOP
label_475ce4:
    // 0x475ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x475ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_475ce8:
    // 0x475ce8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x475ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_475cec:
    // 0x475cec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x475cecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_475cf0:
    // 0x475cf0: 0xe6340e1c  swc1        $f20, 0xE1C($s1)
    ctx->pc = 0x475cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
label_475cf4:
    // 0x475cf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_475cf8:
    if (ctx->pc == 0x475CF8u) {
        ctx->pc = 0x475CF8u;
            // 0x475cf8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x475CFCu;
        goto label_475cfc;
    }
    ctx->pc = 0x475CF4u;
    {
        const bool branch_taken_0x475cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475CF4u;
            // 0x475cf8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475cf4) {
            ctx->pc = 0x475D1Cu;
            goto label_475d1c;
        }
    }
    ctx->pc = 0x475CFCu;
label_475cfc:
    // 0x475cfc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x475cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_475d00:
    // 0x475d00: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x475d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_475d04:
    // 0x475d04: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x475d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475d08:
    // 0x475d08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x475d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475d0c:
    // 0x475d0c: 0x0  nop
    ctx->pc = 0x475d0cu;
    // NOP
label_475d10:
    // 0x475d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x475d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_475d14:
    // 0x475d14: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x475d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_475d18:
    // 0x475d18: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x475d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_475d1c:
    // 0x475d1c: 0xc04cc04  jal         func_133010
label_475d20:
    if (ctx->pc == 0x475D20u) {
        ctx->pc = 0x475D20u;
            // 0x475d20: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x475D24u;
        goto label_475d24;
    }
    ctx->pc = 0x475D1Cu;
    SET_GPR_U32(ctx, 31, 0x475D24u);
    ctx->pc = 0x475D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475D1Cu;
            // 0x475d20: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475D24u; }
        if (ctx->pc != 0x475D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475D24u; }
        if (ctx->pc != 0x475D24u) { return; }
    }
    ctx->pc = 0x475D24u;
label_475d24:
    // 0x475d24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x475d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_475d28:
    // 0x475d28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x475d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_475d2c:
    // 0x475d2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x475d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475d30:
    // 0x475d30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x475d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_475d34:
    // 0x475d34: 0xc04cc7c  jal         func_1331F0
label_475d38:
    if (ctx->pc == 0x475D38u) {
        ctx->pc = 0x475D38u;
            // 0x475d38: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x475D3Cu;
        goto label_475d3c;
    }
    ctx->pc = 0x475D34u;
    SET_GPR_U32(ctx, 31, 0x475D3Cu);
    ctx->pc = 0x475D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475D34u;
            // 0x475d38: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475D3Cu; }
        if (ctx->pc != 0x475D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475D3Cu; }
        if (ctx->pc != 0x475D3Cu) { return; }
    }
    ctx->pc = 0x475D3Cu;
label_475d3c:
    // 0x475d3c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x475d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475d40:
    // 0x475d40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475d44:
    // 0x475d44: 0x0  nop
    ctx->pc = 0x475d44u;
    // NOP
label_475d48:
    // 0x475d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x475d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475d4c:
    // 0x475d4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_475d50:
    if (ctx->pc == 0x475D50u) {
        ctx->pc = 0x475D50u;
            // 0x475d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x475D54u;
        goto label_475d54;
    }
    ctx->pc = 0x475D4Cu;
    {
        const bool branch_taken_0x475d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x475D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475D4Cu;
            // 0x475d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475d4c) {
            ctx->pc = 0x475D58u;
            goto label_475d58;
        }
    }
    ctx->pc = 0x475D54u;
label_475d54:
    // 0x475d54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x475d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475d58:
    // 0x475d58: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_475d5c:
    if (ctx->pc == 0x475D5Cu) {
        ctx->pc = 0x475D5Cu;
            // 0x475d5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x475D60u;
        goto label_475d60;
    }
    ctx->pc = 0x475D58u;
    {
        const bool branch_taken_0x475d58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x475d58) {
            ctx->pc = 0x475D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475D58u;
            // 0x475d5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475D6Cu;
            goto label_475d6c;
        }
    }
    ctx->pc = 0x475D60u;
label_475d60:
    // 0x475d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475d64:
    // 0x475d64: 0x10000007  b           . + 4 + (0x7 << 2)
label_475d68:
    if (ctx->pc == 0x475D68u) {
        ctx->pc = 0x475D68u;
            // 0x475d68: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x475D6Cu;
        goto label_475d6c;
    }
    ctx->pc = 0x475D64u;
    {
        const bool branch_taken_0x475d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475D64u;
            // 0x475d68: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x475d64) {
            ctx->pc = 0x475D84u;
            goto label_475d84;
        }
    }
    ctx->pc = 0x475D6Cu;
label_475d6c:
    // 0x475d6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x475d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_475d70:
    // 0x475d70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x475d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_475d74:
    // 0x475d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x475d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475d78:
    // 0x475d78: 0x0  nop
    ctx->pc = 0x475d78u;
    // NOP
label_475d7c:
    // 0x475d7c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x475d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_475d80:
    // 0x475d80: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x475d80u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_475d84:
    // 0x475d84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x475d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_475d88:
    // 0x475d88: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x475d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_475d8c:
    // 0x475d8c: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x475d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_475d90:
    // 0x475d90: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x475d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_475d94:
    // 0x475d94: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x475d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_475d98:
    // 0x475d98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x475d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_475d9c:
    // 0x475d9c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x475d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_475da0:
    // 0x475da0: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x475da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_475da4:
    // 0x475da4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x475da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_475da8:
    // 0x475da8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x475da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_475dac:
    // 0x475dac: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x475dacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_475db0:
    // 0x475db0: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x475db0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_475db4:
    // 0x475db4: 0x460520dd  msub.s      $f3, $f4, $f5
    ctx->pc = 0x475db4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_475db8:
    // 0x475db8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x475db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475dbc:
    // 0x475dbc: 0x0  nop
    ctx->pc = 0x475dbcu;
    // NOP
label_475dc0:
    // 0x475dc0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x475dc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_475dc4:
    // 0x475dc4: 0xc04cc7c  jal         func_1331F0
label_475dc8:
    if (ctx->pc == 0x475DC8u) {
        ctx->pc = 0x475DC8u;
            // 0x475dc8: 0x46030b1c  madd.s      $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->pc = 0x475DCCu;
        goto label_475dcc;
    }
    ctx->pc = 0x475DC4u;
    SET_GPR_U32(ctx, 31, 0x475DCCu);
    ctx->pc = 0x475DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475DC4u;
            // 0x475dc8: 0x46030b1c  madd.s      $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475DCCu; }
        if (ctx->pc != 0x475DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475DCCu; }
        if (ctx->pc != 0x475DCCu) { return; }
    }
    ctx->pc = 0x475DCCu;
label_475dcc:
    // 0x475dcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x475dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_475dd0:
    // 0x475dd0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x475dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_475dd4:
    // 0x475dd4: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x475dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_475dd8:
    // 0x475dd8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x475dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_475ddc:
    // 0x475ddc: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x475ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_475de0:
    // 0x475de0: 0xc0d16dc  jal         func_345B70
label_475de4:
    if (ctx->pc == 0x475DE4u) {
        ctx->pc = 0x475DE4u;
            // 0x475de4: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x475DE8u;
        goto label_475de8;
    }
    ctx->pc = 0x475DE0u;
    SET_GPR_U32(ctx, 31, 0x475DE8u);
    ctx->pc = 0x475DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475DE0u;
            // 0x475de4: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475DE8u; }
        if (ctx->pc != 0x475DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475DE8u; }
        if (ctx->pc != 0x475DE8u) { return; }
    }
    ctx->pc = 0x475DE8u;
label_475de8:
    // 0x475de8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x475de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_475dec:
    // 0x475dec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x475decu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_475df0:
    // 0x475df0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_475df4:
    if (ctx->pc == 0x475DF4u) {
        ctx->pc = 0x475DF4u;
            // 0x475df4: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x475DF8u;
        goto label_475df8;
    }
    ctx->pc = 0x475DF0u;
    {
        const bool branch_taken_0x475df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475df0) {
            ctx->pc = 0x475DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475DF0u;
            // 0x475df4: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475E8Cu;
            goto label_475e8c;
        }
    }
    ctx->pc = 0x475DF8u;
label_475df8:
    // 0x475df8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x475df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_475dfc:
    // 0x475dfc: 0xc04cc1c  jal         func_133070
label_475e00:
    if (ctx->pc == 0x475E00u) {
        ctx->pc = 0x475E00u;
            // 0x475e00: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x475E04u;
        goto label_475e04;
    }
    ctx->pc = 0x475DFCu;
    SET_GPR_U32(ctx, 31, 0x475E04u);
    ctx->pc = 0x475E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475DFCu;
            // 0x475e00: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475E04u; }
        if (ctx->pc != 0x475E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475E04u; }
        if (ctx->pc != 0x475E04u) { return; }
    }
    ctx->pc = 0x475E04u;
label_475e04:
    // 0x475e04: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x475e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
label_475e08:
    // 0x475e08: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x475e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_475e0c:
    // 0x475e0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x475e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475e10:
    // 0x475e10: 0x0  nop
    ctx->pc = 0x475e10u;
    // NOP
label_475e14:
    // 0x475e14: 0x46010101  sub.s       $f4, $f0, $f1
    ctx->pc = 0x475e14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_475e18:
    // 0x475e18: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x475e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475e1c:
    // 0x475e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475e20:
    // 0x475e20: 0x0  nop
    ctx->pc = 0x475e20u;
    // NOP
label_475e24:
    // 0x475e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x475e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475e28:
    // 0x475e28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_475e2c:
    if (ctx->pc == 0x475E2Cu) {
        ctx->pc = 0x475E2Cu;
            // 0x475e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x475E30u;
        goto label_475e30;
    }
    ctx->pc = 0x475E28u;
    {
        const bool branch_taken_0x475e28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x475E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475E28u;
            // 0x475e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475e28) {
            ctx->pc = 0x475E34u;
            goto label_475e34;
        }
    }
    ctx->pc = 0x475E30u;
label_475e30:
    // 0x475e30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x475e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475e34:
    // 0x475e34: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_475e38:
    if (ctx->pc == 0x475E38u) {
        ctx->pc = 0x475E38u;
            // 0x475e38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x475E3Cu;
        goto label_475e3c;
    }
    ctx->pc = 0x475E34u;
    {
        const bool branch_taken_0x475e34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x475e34) {
            ctx->pc = 0x475E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475E34u;
            // 0x475e38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475E48u;
            goto label_475e48;
        }
    }
    ctx->pc = 0x475E3Cu;
label_475e3c:
    // 0x475e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475e40:
    // 0x475e40: 0x10000007  b           . + 4 + (0x7 << 2)
label_475e44:
    if (ctx->pc == 0x475E44u) {
        ctx->pc = 0x475E44u;
            // 0x475e44: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x475E48u;
        goto label_475e48;
    }
    ctx->pc = 0x475E40u;
    {
        const bool branch_taken_0x475e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475E40u;
            // 0x475e44: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x475e40) {
            ctx->pc = 0x475E60u;
            goto label_475e60;
        }
    }
    ctx->pc = 0x475E48u;
label_475e48:
    // 0x475e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x475e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_475e4c:
    // 0x475e4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x475e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_475e50:
    // 0x475e50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x475e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475e54:
    // 0x475e54: 0x0  nop
    ctx->pc = 0x475e54u;
    // NOP
label_475e58:
    // 0x475e58: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x475e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_475e5c:
    // 0x475e5c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x475e5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_475e60:
    // 0x475e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x475e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_475e64:
    // 0x475e64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x475e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_475e68:
    // 0x475e68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x475e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_475e6c:
    // 0x475e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475e70:
    // 0x475e70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x475e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_475e74:
    // 0x475e74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x475e74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_475e78:
    // 0x475e78: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x475e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_475e7c:
    // 0x475e7c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x475e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_475e80:
    // 0x475e80: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x475e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_475e84:
    // 0x475e84: 0x1000000a  b           . + 4 + (0xA << 2)
label_475e88:
    if (ctx->pc == 0x475E88u) {
        ctx->pc = 0x475E88u;
            // 0x475e88: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x475E8Cu;
        goto label_475e8c;
    }
    ctx->pc = 0x475E84u;
    {
        const bool branch_taken_0x475e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475E84u;
            // 0x475e88: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475e84) {
            ctx->pc = 0x475EB0u;
            goto label_475eb0;
        }
    }
    ctx->pc = 0x475E8Cu;
label_475e8c:
    // 0x475e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475e90:
    // 0x475e90: 0x0  nop
    ctx->pc = 0x475e90u;
    // NOP
label_475e94:
    // 0x475e94: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x475e94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_475e98:
    // 0x475e98: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x475e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475e9c:
    // 0x475e9c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x475e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_475ea0:
    // 0x475ea0: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x475ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_475ea4:
    // 0x475ea4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x475ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475ea8:
    // 0x475ea8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x475ea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_475eac:
    // 0x475eac: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x475eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_475eb0:
    // 0x475eb0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x475eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_475eb4:
    // 0x475eb4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x475eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_475eb8:
    // 0x475eb8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x475eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_475ebc:
    // 0x475ebc: 0xc04cc7c  jal         func_1331F0
label_475ec0:
    if (ctx->pc == 0x475EC0u) {
        ctx->pc = 0x475EC0u;
            // 0x475ec0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x475EC4u;
        goto label_475ec4;
    }
    ctx->pc = 0x475EBCu;
    SET_GPR_U32(ctx, 31, 0x475EC4u);
    ctx->pc = 0x475EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475EBCu;
            // 0x475ec0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475EC4u; }
        if (ctx->pc != 0x475EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475EC4u; }
        if (ctx->pc != 0x475EC4u) { return; }
    }
    ctx->pc = 0x475EC4u;
label_475ec4:
    // 0x475ec4: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x475ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475ec8:
    // 0x475ec8: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x475ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_475ecc:
    // 0x475ecc: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x475eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_475ed0:
    // 0x475ed0: 0xc04cc04  jal         func_133010
label_475ed4:
    if (ctx->pc == 0x475ED4u) {
        ctx->pc = 0x475ED4u;
            // 0x475ed4: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x475ED8u;
        goto label_475ed8;
    }
    ctx->pc = 0x475ED0u;
    SET_GPR_U32(ctx, 31, 0x475ED8u);
    ctx->pc = 0x475ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475ED0u;
            // 0x475ed4: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475ED8u; }
        if (ctx->pc != 0x475ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475ED8u; }
        if (ctx->pc != 0x475ED8u) { return; }
    }
    ctx->pc = 0x475ED8u;
label_475ed8:
    // 0x475ed8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x475ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_475edc:
    // 0x475edc: 0xc04cc04  jal         func_133010
label_475ee0:
    if (ctx->pc == 0x475EE0u) {
        ctx->pc = 0x475EE0u;
            // 0x475ee0: 0x264501d0  addiu       $a1, $s2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
        ctx->pc = 0x475EE4u;
        goto label_475ee4;
    }
    ctx->pc = 0x475EDCu;
    SET_GPR_U32(ctx, 31, 0x475EE4u);
    ctx->pc = 0x475EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475EDCu;
            // 0x475ee0: 0x264501d0  addiu       $a1, $s2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475EE4u; }
        if (ctx->pc != 0x475EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475EE4u; }
        if (ctx->pc != 0x475EE4u) { return; }
    }
    ctx->pc = 0x475EE4u;
label_475ee4:
    // 0x475ee4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x475ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_475ee8:
    // 0x475ee8: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x475ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_475eec:
    // 0x475eec: 0xc04cc90  jal         func_133240
label_475ef0:
    if (ctx->pc == 0x475EF0u) {
        ctx->pc = 0x475EF0u;
            // 0x475ef0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475EF4u;
        goto label_475ef4;
    }
    ctx->pc = 0x475EECu;
    SET_GPR_U32(ctx, 31, 0x475EF4u);
    ctx->pc = 0x475EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475EECu;
            // 0x475ef0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475EF4u; }
        if (ctx->pc != 0x475EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475EF4u; }
        if (ctx->pc != 0x475EF4u) { return; }
    }
    ctx->pc = 0x475EF4u;
label_475ef4:
    // 0x475ef4: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x475ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_475ef8:
    // 0x475ef8: 0xc04cc04  jal         func_133010
label_475efc:
    if (ctx->pc == 0x475EFCu) {
        ctx->pc = 0x475EFCu;
            // 0x475efc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x475F00u;
        goto label_475f00;
    }
    ctx->pc = 0x475EF8u;
    SET_GPR_U32(ctx, 31, 0x475F00u);
    ctx->pc = 0x475EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475EF8u;
            // 0x475efc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F00u; }
        if (ctx->pc != 0x475F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F00u; }
        if (ctx->pc != 0x475F00u) { return; }
    }
    ctx->pc = 0x475F00u;
label_475f00:
    // 0x475f00: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x475f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_475f04:
    // 0x475f04: 0xc075318  jal         func_1D4C60
label_475f08:
    if (ctx->pc == 0x475F08u) {
        ctx->pc = 0x475F08u;
            // 0x475f08: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x475F0Cu;
        goto label_475f0c;
    }
    ctx->pc = 0x475F04u;
    SET_GPR_U32(ctx, 31, 0x475F0Cu);
    ctx->pc = 0x475F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475F04u;
            // 0x475f08: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F0Cu; }
        if (ctx->pc != 0x475F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F0Cu; }
        if (ctx->pc != 0x475F0Cu) { return; }
    }
    ctx->pc = 0x475F0Cu;
label_475f0c:
    // 0x475f0c: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x475f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_475f10:
    // 0x475f10: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x475f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_475f14:
    // 0x475f14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x475f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475f18:
    // 0x475f18: 0xc0c6250  jal         func_318940
label_475f1c:
    if (ctx->pc == 0x475F1Cu) {
        ctx->pc = 0x475F1Cu;
            // 0x475f1c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475F20u;
        goto label_475f20;
    }
    ctx->pc = 0x475F18u;
    SET_GPR_U32(ctx, 31, 0x475F20u);
    ctx->pc = 0x475F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475F18u;
            // 0x475f1c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F20u; }
        if (ctx->pc != 0x475F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F20u; }
        if (ctx->pc != 0x475F20u) { return; }
    }
    ctx->pc = 0x475F20u;
label_475f20:
    // 0x475f20: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x475f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_475f24:
    // 0x475f24: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x475f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_475f28:
    // 0x475f28: 0xc075378  jal         func_1D4DE0
label_475f2c:
    if (ctx->pc == 0x475F2Cu) {
        ctx->pc = 0x475F2Cu;
            // 0x475f2c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x475F30u;
        goto label_475f30;
    }
    ctx->pc = 0x475F28u;
    SET_GPR_U32(ctx, 31, 0x475F30u);
    ctx->pc = 0x475F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475F28u;
            // 0x475f2c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F30u; }
        if (ctx->pc != 0x475F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F30u; }
        if (ctx->pc != 0x475F30u) { return; }
    }
    ctx->pc = 0x475F30u;
label_475f30:
    // 0x475f30: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x475f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475f34:
    // 0x475f34: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x475f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_475f38:
    // 0x475f38: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x475f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_475f3c:
    // 0x475f3c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x475f3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_475f40:
    // 0x475f40: 0xc0c753c  jal         func_31D4F0
label_475f44:
    if (ctx->pc == 0x475F44u) {
        ctx->pc = 0x475F44u;
            // 0x475f44: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x475F48u;
        goto label_475f48;
    }
    ctx->pc = 0x475F40u;
    SET_GPR_U32(ctx, 31, 0x475F48u);
    ctx->pc = 0x475F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475F40u;
            // 0x475f44: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F48u; }
        if (ctx->pc != 0x475F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F48u; }
        if (ctx->pc != 0x475F48u) { return; }
    }
    ctx->pc = 0x475F48u;
label_475f48:
    // 0x475f48: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x475f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_475f4c:
    // 0x475f4c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x475f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_475f50:
    // 0x475f50: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x475f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_475f54:
    // 0x475f54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x475f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_475f58:
    // 0x475f58: 0xc0c753c  jal         func_31D4F0
label_475f5c:
    if (ctx->pc == 0x475F5Cu) {
        ctx->pc = 0x475F5Cu;
            // 0x475f5c: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->pc = 0x475F60u;
        goto label_475f60;
    }
    ctx->pc = 0x475F58u;
    SET_GPR_U32(ctx, 31, 0x475F60u);
    ctx->pc = 0x475F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475F58u;
            // 0x475f5c: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F60u; }
        if (ctx->pc != 0x475F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F60u; }
        if (ctx->pc != 0x475F60u) { return; }
    }
    ctx->pc = 0x475F60u;
label_475f60:
    // 0x475f60: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x475f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_475f64:
    // 0x475f64: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x475f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_475f68:
    // 0x475f68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x475f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475f6c:
    // 0x475f6c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x475f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_475f70:
    // 0x475f70: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x475f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_475f74:
    // 0x475f74: 0xc0c6250  jal         func_318940
label_475f78:
    if (ctx->pc == 0x475F78u) {
        ctx->pc = 0x475F78u;
            // 0x475f78: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x475F7Cu;
        goto label_475f7c;
    }
    ctx->pc = 0x475F74u;
    SET_GPR_U32(ctx, 31, 0x475F7Cu);
    ctx->pc = 0x475F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475F74u;
            // 0x475f78: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F7Cu; }
        if (ctx->pc != 0x475F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475F7Cu; }
        if (ctx->pc != 0x475F7Cu) { return; }
    }
    ctx->pc = 0x475F7Cu;
label_475f7c:
    // 0x475f7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475f80:
    // 0x475f80: 0x0  nop
    ctx->pc = 0x475f80u;
    // NOP
label_475f84:
    // 0x475f84: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x475f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475f88:
    // 0x475f88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_475f8c:
    if (ctx->pc == 0x475F8Cu) {
        ctx->pc = 0x475F8Cu;
            // 0x475f8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x475F90u;
        goto label_475f90;
    }
    ctx->pc = 0x475F88u;
    {
        const bool branch_taken_0x475f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x475F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475F88u;
            // 0x475f8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475f88) {
            ctx->pc = 0x475F94u;
            goto label_475f94;
        }
    }
    ctx->pc = 0x475F90u;
label_475f90:
    // 0x475f90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x475f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475f94:
    // 0x475f94: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x475f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_475f98:
    // 0x475f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x475f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475f9c:
    // 0x475f9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x475f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_475fa0:
    // 0x475fa0: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x475fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_475fa4:
    // 0x475fa4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x475fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_475fa8:
    // 0x475fa8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x475fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_475fac:
    // 0x475fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475fb0:
    // 0x475fb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x475fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_475fb4:
    // 0x475fb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x475fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_475fb8:
    // 0x475fb8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x475fb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475fbc:
    // 0x475fbc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_475fc0:
    if (ctx->pc == 0x475FC0u) {
        ctx->pc = 0x475FC0u;
            // 0x475fc0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x475FC4u;
        goto label_475fc4;
    }
    ctx->pc = 0x475FBCu;
    {
        const bool branch_taken_0x475fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x475FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475FBCu;
            // 0x475fc0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475fbc) {
            ctx->pc = 0x475FC8u;
            goto label_475fc8;
        }
    }
    ctx->pc = 0x475FC4u;
label_475fc4:
    // 0x475fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x475fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475fc8:
    // 0x475fc8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x475fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_475fcc:
    // 0x475fcc: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x475fccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_475fd0:
    // 0x475fd0: 0x643818  mult        $a3, $v1, $a0
    ctx->pc = 0x475fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_475fd4:
    // 0x475fd4: 0x26260ab0  addiu       $a2, $s1, 0xAB0
    ctx->pc = 0x475fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
label_475fd8:
    // 0x475fd8: 0xc64101e8  lwc1        $f1, 0x1E8($s2)
    ctx->pc = 0x475fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_475fdc:
    // 0x475fdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x475fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_475fe0:
    // 0x475fe0: 0xe01826  xor         $v1, $a3, $zero
    ctx->pc = 0x475fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 0));
label_475fe4:
    // 0x475fe4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x475fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_475fe8:
    // 0x475fe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x475fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_475fec:
    // 0x475fec: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_475ff0:
    if (ctx->pc == 0x475FF0u) {
        ctx->pc = 0x475FF0u;
            // 0x475ff0: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x475FF4u;
        goto label_475ff4;
    }
    ctx->pc = 0x475FECu;
    {
        const bool branch_taken_0x475fec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x475FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475FECu;
            // 0x475ff0: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475fec) {
            ctx->pc = 0x476018u;
            goto label_476018;
        }
    }
    ctx->pc = 0x475FF4u;
label_475ff4:
    // 0x475ff4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x475ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_475ff8:
    // 0x475ff8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x475ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_475ffc:
    // 0x475ffc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x475ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476000:
    // 0x476000: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x476000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_476004:
    // 0x476004: 0xe64001e8  swc1        $f0, 0x1E8($s2)
    ctx->pc = 0x476004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 488), bits); }
label_476008:
    // 0x476008: 0x8cc40044  lw          $a0, 0x44($a2)
    ctx->pc = 0x476008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_47600c:
    // 0x47600c: 0x8e4301ec  lw          $v1, 0x1EC($s2)
    ctx->pc = 0x47600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
label_476010:
    // 0x476010: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x476010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_476014:
    // 0x476014: 0xacc30044  sw          $v1, 0x44($a2)
    ctx->pc = 0x476014u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 3));
label_476018:
    // 0x476018: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x476018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_47601c:
    // 0x47601c: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x47601cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_476020:
    // 0x476020: 0x10a3017c  beq         $a1, $v1, . + 4 + (0x17C << 2)
label_476024:
    if (ctx->pc == 0x476024u) {
        ctx->pc = 0x476028u;
        goto label_476028;
    }
    ctx->pc = 0x476020u;
    {
        const bool branch_taken_0x476020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x476020) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x476028u;
label_476028:
    // 0x476028: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x476028u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47602c:
    // 0x47602c: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x47602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_476030:
    // 0x476030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x476030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_476034:
    // 0x476034: 0x346b0b60  ori         $t3, $v1, 0xB60
    ctx->pc = 0x476034u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_476038:
    // 0x476038: 0x8cca0044  lw          $t2, 0x44($a2)
    ctx->pc = 0x476038u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_47603c:
    // 0x47603c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_476040:
    // 0x476040: 0x8c498a08  lw          $t1, -0x75F8($v0)
    ctx->pc = 0x476040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_476044:
    // 0x476044: 0x3c0841a0  lui         $t0, 0x41A0
    ctx->pc = 0x476044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16800 << 16));
label_476048:
    // 0x476048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x476048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47604c:
    // 0x47604c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476050:
    // 0x476050: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x476050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
label_476054:
    // 0x476054: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x476054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_476058:
    // 0x476058: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x476058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47605c:
    // 0x47605c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_476060:
    // 0x476060: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x476060u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_476064:
    // 0x476064: 0x0  nop
    ctx->pc = 0x476064u;
    // NOP
label_476068:
    // 0x476068: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47606c:
    // 0x47606c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47606cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_476070:
    // 0x476070: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x476070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
label_476074:
    // 0x476074: 0x0  nop
    ctx->pc = 0x476074u;
    // NOP
label_476078:
    // 0x476078: 0x16a5023  subu        $t2, $t3, $t2
    ctx->pc = 0x476078u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_47607c:
    // 0x47607c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x47607cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476080:
    // 0x476080: 0x0  nop
    ctx->pc = 0x476080u;
    // NOP
label_476084:
    // 0x476084: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x476084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_476088:
    // 0x476088: 0xc5210018  lwc1        $f1, 0x18($t1)
    ctx->pc = 0x476088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47608c:
    // 0x47608c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47608cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476090:
    // 0x476090: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x476090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_476094:
    // 0x476094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x476094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_476098:
    // 0x476098: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x476098u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_47609c:
    // 0x47609c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47609cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4760a0:
    // 0x4760a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4760a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4760a4:
    // 0x4760a4: 0x0  nop
    ctx->pc = 0x4760a4u;
    // NOP
label_4760a8:
    // 0x4760a8: 0xae4201ec  sw          $v0, 0x1EC($s2)
    ctx->pc = 0x4760a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 2));
label_4760ac:
    // 0x4760ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4760acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4760b0:
    // 0x4760b0: 0xae4801e8  sw          $t0, 0x1E8($s2)
    ctx->pc = 0x4760b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 8));
label_4760b4:
    // 0x4760b4: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x4760b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_4760b8:
    // 0x4760b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4760b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4760bc:
    // 0x4760bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4760bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4760c0:
    // 0x4760c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4760c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4760c4:
    // 0x4760c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4760c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4760c8:
    // 0x4760c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4760c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4760cc:
    // 0x4760cc: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4760ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4760d0:
    // 0x4760d0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4760d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4760d4:
    // 0x4760d4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x4760d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_4760d8:
    // 0x4760d8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4760d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4760dc:
    // 0x4760dc: 0x320f809  jalr        $t9
label_4760e0:
    if (ctx->pc == 0x4760E0u) {
        ctx->pc = 0x4760E0u;
            // 0x4760e0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x4760E4u;
        goto label_4760e4;
    }
    ctx->pc = 0x4760DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4760E4u);
        ctx->pc = 0x4760E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4760DCu;
            // 0x4760e0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4760E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4760E4u; }
            if (ctx->pc != 0x4760E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4760E4u;
label_4760e4:
    // 0x4760e4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4760e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4760e8:
    // 0x4760e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4760e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4760ec:
    // 0x4760ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4760ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4760f0:
    // 0x4760f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4760f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4760f4:
    // 0x4760f4: 0x320f809  jalr        $t9
label_4760f8:
    if (ctx->pc == 0x4760F8u) {
        ctx->pc = 0x4760F8u;
            // 0x4760f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4760FCu;
        goto label_4760fc;
    }
    ctx->pc = 0x4760F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4760FCu);
        ctx->pc = 0x4760F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4760F4u;
            // 0x4760f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4760FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4760FCu; }
            if (ctx->pc != 0x4760FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4760FCu;
label_4760fc:
    // 0x4760fc: 0x10000145  b           . + 4 + (0x145 << 2)
label_476100:
    if (ctx->pc == 0x476100u) {
        ctx->pc = 0x476104u;
        goto label_476104;
    }
    ctx->pc = 0x4760FCu;
    {
        const bool branch_taken_0x4760fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4760fc) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x476104u;
label_476104:
    // 0x476104: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x476104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_476108:
    // 0x476108: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x476108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_47610c:
    // 0x47610c: 0xc04cc04  jal         func_133010
label_476110:
    if (ctx->pc == 0x476110u) {
        ctx->pc = 0x476110u;
            // 0x476110: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x476114u;
        goto label_476114;
    }
    ctx->pc = 0x47610Cu;
    SET_GPR_U32(ctx, 31, 0x476114u);
    ctx->pc = 0x476110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47610Cu;
            // 0x476110: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476114u; }
        if (ctx->pc != 0x476114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476114u; }
        if (ctx->pc != 0x476114u) { return; }
    }
    ctx->pc = 0x476114u;
label_476114:
    // 0x476114: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x476114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_476118:
    // 0x476118: 0xc04c720  jal         func_131C80
label_47611c:
    if (ctx->pc == 0x47611Cu) {
        ctx->pc = 0x47611Cu;
            // 0x47611c: 0x262508e0  addiu       $a1, $s1, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
        ctx->pc = 0x476120u;
        goto label_476120;
    }
    ctx->pc = 0x476118u;
    SET_GPR_U32(ctx, 31, 0x476120u);
    ctx->pc = 0x47611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476118u;
            // 0x47611c: 0x262508e0  addiu       $a1, $s1, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476120u; }
        if (ctx->pc != 0x476120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476120u; }
        if (ctx->pc != 0x476120u) { return; }
    }
    ctx->pc = 0x476120u;
label_476120:
    // 0x476120: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x476120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_476124:
    // 0x476124: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x476124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_476128:
    // 0x476128: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x476128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_47612c:
    // 0x47612c: 0xc660012c  lwc1        $f0, 0x12C($s3)
    ctx->pc = 0x47612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476130:
    // 0x476130: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x476130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476134:
    // 0x476134: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x476134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476138:
    // 0x476138: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x476138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_47613c:
    // 0x47613c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47613cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476140:
    // 0x476140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x476140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_476144:
    // 0x476144: 0xc0d87e0  jal         func_361F80
label_476148:
    if (ctx->pc == 0x476148u) {
        ctx->pc = 0x476148u;
            // 0x476148: 0xe660012c  swc1        $f0, 0x12C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 300), bits); }
        ctx->pc = 0x47614Cu;
        goto label_47614c;
    }
    ctx->pc = 0x476144u;
    SET_GPR_U32(ctx, 31, 0x47614Cu);
    ctx->pc = 0x476148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476144u;
            // 0x476148: 0xe660012c  swc1        $f0, 0x12C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47614Cu; }
        if (ctx->pc != 0x47614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47614Cu; }
        if (ctx->pc != 0x47614Cu) { return; }
    }
    ctx->pc = 0x47614Cu;
label_47614c:
    // 0x47614c: 0x96630110  lhu         $v1, 0x110($s3)
    ctx->pc = 0x47614cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
label_476150:
    // 0x476150: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x476150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_476154:
    // 0x476154: 0x54620059  bnel        $v1, $v0, . + 4 + (0x59 << 2)
label_476158:
    if (ctx->pc == 0x476158u) {
        ctx->pc = 0x476158u;
            // 0x476158: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x47615Cu;
        goto label_47615c;
    }
    ctx->pc = 0x476154u;
    {
        const bool branch_taken_0x476154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x476154) {
            ctx->pc = 0x476158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476154u;
            // 0x476158: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4762BCu;
            goto label_4762bc;
        }
    }
    ctx->pc = 0x47615Cu;
label_47615c:
    // 0x47615c: 0xc0bbec8  jal         func_2EFB20
label_476160:
    if (ctx->pc == 0x476160u) {
        ctx->pc = 0x476160u;
            // 0x476160: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->pc = 0x476164u;
        goto label_476164;
    }
    ctx->pc = 0x47615Cu;
    SET_GPR_U32(ctx, 31, 0x476164u);
    ctx->pc = 0x476160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47615Cu;
            // 0x476160: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB20u;
    if (runtime->hasFunction(0x2EFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476164u; }
        if (ctx->pc != 0x476164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFB20_0x2efb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476164u; }
        if (ctx->pc != 0x476164u) { return; }
    }
    ctx->pc = 0x476164u;
label_476164:
    // 0x476164: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x476164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_476168:
    // 0x476168: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x476168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_47616c:
    // 0x47616c: 0xae230db8  sw          $v1, 0xDB8($s1)
    ctx->pc = 0x47616cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 3));
label_476170:
    // 0x476170: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x476170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_476174:
    // 0x476174: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x476174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_476178:
    // 0x476178: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x476178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_47617c:
    // 0x47617c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x47617cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_476180:
    // 0x476180: 0xc0a545c  jal         func_295170
label_476184:
    if (ctx->pc == 0x476184u) {
        ctx->pc = 0x476184u;
            // 0x476184: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x476188u;
        goto label_476188;
    }
    ctx->pc = 0x476180u;
    SET_GPR_U32(ctx, 31, 0x476188u);
    ctx->pc = 0x476184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476180u;
            // 0x476184: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476188u; }
        if (ctx->pc != 0x476188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476188u; }
        if (ctx->pc != 0x476188u) { return; }
    }
    ctx->pc = 0x476188u;
label_476188:
    // 0x476188: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x476188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_47618c:
    // 0x47618c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_476190:
    // 0x476190: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x476190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_476194:
    // 0x476194: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x476194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_476198:
    // 0x476198: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x476198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47619c:
    // 0x47619c: 0xc08bf20  jal         func_22FC80
label_4761a0:
    if (ctx->pc == 0x4761A0u) {
        ctx->pc = 0x4761A0u;
            // 0x4761a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4761A4u;
        goto label_4761a4;
    }
    ctx->pc = 0x47619Cu;
    SET_GPR_U32(ctx, 31, 0x4761A4u);
    ctx->pc = 0x4761A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47619Cu;
            // 0x4761a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4761A4u; }
        if (ctx->pc != 0x4761A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4761A4u; }
        if (ctx->pc != 0x4761A4u) { return; }
    }
    ctx->pc = 0x4761A4u;
label_4761a4:
    // 0x4761a4: 0x3c033f6d  lui         $v1, 0x3F6D
    ctx->pc = 0x4761a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16237 << 16));
label_4761a8:
    // 0x4761a8: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x4761a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_4761ac:
    // 0x4761ac: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x4761acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_4761b0:
    // 0x4761b0: 0x344225ed  ori         $v0, $v0, 0x25ED
    ctx->pc = 0x4761b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
label_4761b4:
    // 0x4761b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4761b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4761b8:
    // 0x4761b8: 0xae230de4  sw          $v1, 0xDE4($s1)
    ctx->pc = 0x4761b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 3));
label_4761bc:
    // 0x4761bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4761bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4761c0:
    // 0x4761c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4761c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4761c4:
    // 0x4761c4: 0xc04cbd8  jal         func_132F60
label_4761c8:
    if (ctx->pc == 0x4761C8u) {
        ctx->pc = 0x4761C8u;
            // 0x4761c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4761CCu;
        goto label_4761cc;
    }
    ctx->pc = 0x4761C4u;
    SET_GPR_U32(ctx, 31, 0x4761CCu);
    ctx->pc = 0x4761C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4761C4u;
            // 0x4761c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4761CCu; }
        if (ctx->pc != 0x4761CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4761CCu; }
        if (ctx->pc != 0x4761CCu) { return; }
    }
    ctx->pc = 0x4761CCu;
label_4761cc:
    // 0x4761cc: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x4761ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_4761d0:
    // 0x4761d0: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x4761d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
label_4761d4:
    // 0x4761d4: 0xc04cca0  jal         func_133280
label_4761d8:
    if (ctx->pc == 0x4761D8u) {
        ctx->pc = 0x4761D8u;
            // 0x4761d8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4761DCu;
        goto label_4761dc;
    }
    ctx->pc = 0x4761D4u;
    SET_GPR_U32(ctx, 31, 0x4761DCu);
    ctx->pc = 0x4761D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4761D4u;
            // 0x4761d8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4761DCu; }
        if (ctx->pc != 0x4761DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4761DCu; }
        if (ctx->pc != 0x4761DCu) { return; }
    }
    ctx->pc = 0x4761DCu;
label_4761dc:
    // 0x4761dc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x4761dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
label_4761e0:
    // 0x4761e0: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x4761e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_4761e4:
    // 0x4761e4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x4761e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_4761e8:
    // 0x4761e8: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x4761e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4761ec:
    // 0x4761ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4761ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4761f0:
    // 0x4761f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4761f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4761f4:
    // 0x4761f4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x4761f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4761f8:
    // 0x4761f8: 0xc0c753c  jal         func_31D4F0
label_4761fc:
    if (ctx->pc == 0x4761FCu) {
        ctx->pc = 0x4761FCu;
            // 0x4761fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x476200u;
        goto label_476200;
    }
    ctx->pc = 0x4761F8u;
    SET_GPR_U32(ctx, 31, 0x476200u);
    ctx->pc = 0x4761FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4761F8u;
            // 0x4761fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476200u; }
        if (ctx->pc != 0x476200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476200u; }
        if (ctx->pc != 0x476200u) { return; }
    }
    ctx->pc = 0x476200u;
label_476200:
    // 0x476200: 0xc62c0880  lwc1        $f12, 0x880($s1)
    ctx->pc = 0x476200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_476204:
    // 0x476204: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x476204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_476208:
    // 0x476208: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x476208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_47620c:
    // 0x47620c: 0xc0c753c  jal         func_31D4F0
label_476210:
    if (ctx->pc == 0x476210u) {
        ctx->pc = 0x476210u;
            // 0x476210: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x476214u;
        goto label_476214;
    }
    ctx->pc = 0x47620Cu;
    SET_GPR_U32(ctx, 31, 0x476214u);
    ctx->pc = 0x476210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47620Cu;
            // 0x476210: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476214u; }
        if (ctx->pc != 0x476214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476214u; }
        if (ctx->pc != 0x476214u) { return; }
    }
    ctx->pc = 0x476214u;
label_476214:
    // 0x476214: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x476214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_476218:
    // 0x476218: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x476218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_47621c:
    // 0x47621c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47621cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476220:
    // 0x476220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x476220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476224:
    // 0x476224: 0xc0bdf9c  jal         func_2F7E70
label_476228:
    if (ctx->pc == 0x476228u) {
        ctx->pc = 0x476228u;
            // 0x476228: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x47622Cu;
        goto label_47622c;
    }
    ctx->pc = 0x476224u;
    SET_GPR_U32(ctx, 31, 0x47622Cu);
    ctx->pc = 0x476228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476224u;
            // 0x476228: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47622Cu; }
        if (ctx->pc != 0x47622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47622Cu; }
        if (ctx->pc != 0x47622Cu) { return; }
    }
    ctx->pc = 0x47622Cu;
label_47622c:
    // 0x47622c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_476230:
    // 0x476230: 0xc07649c  jal         func_1D9270
label_476234:
    if (ctx->pc == 0x476234u) {
        ctx->pc = 0x476234u;
            // 0x476234: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x476238u;
        goto label_476238;
    }
    ctx->pc = 0x476230u;
    SET_GPR_U32(ctx, 31, 0x476238u);
    ctx->pc = 0x476234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476230u;
            // 0x476234: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476238u; }
        if (ctx->pc != 0x476238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476238u; }
        if (ctx->pc != 0x476238u) { return; }
    }
    ctx->pc = 0x476238u;
label_476238:
    // 0x476238: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x476238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_47623c:
    // 0x47623c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_476240:
    // 0x476240: 0xae4201c4  sw          $v0, 0x1C4($s2)
    ctx->pc = 0x476240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
label_476244:
    // 0x476244: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x476244u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_476248:
    // 0x476248: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x476248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_47624c:
    // 0x47624c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_476250:
    if (ctx->pc == 0x476250u) {
        ctx->pc = 0x476250u;
            // 0x476250: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476254u;
        goto label_476254;
    }
    ctx->pc = 0x47624Cu;
    {
        const bool branch_taken_0x47624c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x476250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47624Cu;
            // 0x476250: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47624c) {
            ctx->pc = 0x476264u;
            goto label_476264;
        }
    }
    ctx->pc = 0x476254u;
label_476254:
    // 0x476254: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x476254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_476258:
    // 0x476258: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_47625c:
    if (ctx->pc == 0x47625Cu) {
        ctx->pc = 0x476260u;
        goto label_476260;
    }
    ctx->pc = 0x476258u;
    {
        const bool branch_taken_0x476258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x476258) {
            ctx->pc = 0x476264u;
            goto label_476264;
        }
    }
    ctx->pc = 0x476260u;
label_476260:
    // 0x476260: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x476260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476264:
    // 0x476264: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_476268:
    if (ctx->pc == 0x476268u) {
        ctx->pc = 0x47626Cu;
        goto label_47626c;
    }
    ctx->pc = 0x476264u;
    {
        const bool branch_taken_0x476264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x476264) {
            ctx->pc = 0x476280u;
            goto label_476280;
        }
    }
    ctx->pc = 0x47626Cu;
label_47626c:
    // 0x47626c: 0xc075eb4  jal         func_1D7AD0
label_476270:
    if (ctx->pc == 0x476270u) {
        ctx->pc = 0x476270u;
            // 0x476270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476274u;
        goto label_476274;
    }
    ctx->pc = 0x47626Cu;
    SET_GPR_U32(ctx, 31, 0x476274u);
    ctx->pc = 0x476270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47626Cu;
            // 0x476270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476274u; }
        if (ctx->pc != 0x476274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476274u; }
        if (ctx->pc != 0x476274u) { return; }
    }
    ctx->pc = 0x476274u;
label_476274:
    // 0x476274: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_476278:
    if (ctx->pc == 0x476278u) {
        ctx->pc = 0x47627Cu;
        goto label_47627c;
    }
    ctx->pc = 0x476274u;
    {
        const bool branch_taken_0x476274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x476274) {
            ctx->pc = 0x476280u;
            goto label_476280;
        }
    }
    ctx->pc = 0x47627Cu;
label_47627c:
    // 0x47627c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47627cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476280:
    // 0x476280: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_476284:
    if (ctx->pc == 0x476284u) {
        ctx->pc = 0x476288u;
        goto label_476288;
    }
    ctx->pc = 0x476280u;
    {
        const bool branch_taken_0x476280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x476280) {
            ctx->pc = 0x476298u;
            goto label_476298;
        }
    }
    ctx->pc = 0x476288u;
label_476288:
    // 0x476288: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x476288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_47628c:
    // 0x47628c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x47628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_476290:
    // 0x476290: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_476294:
    if (ctx->pc == 0x476294u) {
        ctx->pc = 0x476298u;
        goto label_476298;
    }
    ctx->pc = 0x476290u;
    {
        const bool branch_taken_0x476290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x476290) {
            ctx->pc = 0x4762B8u;
            goto label_4762b8;
        }
    }
    ctx->pc = 0x476298u;
label_476298:
    // 0x476298: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x476298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47629c:
    // 0x47629c: 0x8c437608  lw          $v1, 0x7608($v0)
    ctx->pc = 0x47629cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30216)));
label_4762a0:
    // 0x4762a0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x4762a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_4762a4:
    // 0x4762a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4762a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4762a8:
    // 0x4762a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4762ac:
    if (ctx->pc == 0x4762ACu) {
        ctx->pc = 0x4762ACu;
            // 0x4762ac: 0xac620094  sw          $v0, 0x94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x4762B0u;
        goto label_4762b0;
    }
    ctx->pc = 0x4762A8u;
    {
        const bool branch_taken_0x4762a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4762ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4762A8u;
            // 0x4762ac: 0xac620094  sw          $v0, 0x94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4762a8) {
            ctx->pc = 0x4762B8u;
            goto label_4762b8;
        }
    }
    ctx->pc = 0x4762B0u;
label_4762b0:
    // 0x4762b0: 0xc072aaa  jal         func_1CAAA8
label_4762b4:
    if (ctx->pc == 0x4762B4u) {
        ctx->pc = 0x4762B4u;
            // 0x4762b4: 0x90640090  lbu         $a0, 0x90($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->pc = 0x4762B8u;
        goto label_4762b8;
    }
    ctx->pc = 0x4762B0u;
    SET_GPR_U32(ctx, 31, 0x4762B8u);
    ctx->pc = 0x4762B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4762B0u;
            // 0x4762b4: 0x90640090  lbu         $a0, 0x90($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762B8u; }
        if (ctx->pc != 0x4762B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762B8u; }
        if (ctx->pc != 0x4762B8u) { return; }
    }
    ctx->pc = 0x4762B8u;
label_4762b8:
    // 0x4762b8: 0x266500f0  addiu       $a1, $s3, 0xF0
    ctx->pc = 0x4762b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
label_4762bc:
    // 0x4762bc: 0xc04cc04  jal         func_133010
label_4762c0:
    if (ctx->pc == 0x4762C0u) {
        ctx->pc = 0x4762C0u;
            // 0x4762c0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4762C4u;
        goto label_4762c4;
    }
    ctx->pc = 0x4762BCu;
    SET_GPR_U32(ctx, 31, 0x4762C4u);
    ctx->pc = 0x4762C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4762BCu;
            // 0x4762c0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762C4u; }
        if (ctx->pc != 0x4762C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762C4u; }
        if (ctx->pc != 0x4762C4u) { return; }
    }
    ctx->pc = 0x4762C4u;
label_4762c4:
    // 0x4762c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4762c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4762c8:
    // 0x4762c8: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x4762c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_4762cc:
    // 0x4762cc: 0xc04cc90  jal         func_133240
label_4762d0:
    if (ctx->pc == 0x4762D0u) {
        ctx->pc = 0x4762D0u;
            // 0x4762d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4762D4u;
        goto label_4762d4;
    }
    ctx->pc = 0x4762CCu;
    SET_GPR_U32(ctx, 31, 0x4762D4u);
    ctx->pc = 0x4762D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4762CCu;
            // 0x4762d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762D4u; }
        if (ctx->pc != 0x4762D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762D4u; }
        if (ctx->pc != 0x4762D4u) { return; }
    }
    ctx->pc = 0x4762D4u;
label_4762d4:
    // 0x4762d4: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x4762d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_4762d8:
    // 0x4762d8: 0xc04cc04  jal         func_133010
label_4762dc:
    if (ctx->pc == 0x4762DCu) {
        ctx->pc = 0x4762DCu;
            // 0x4762dc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4762E0u;
        goto label_4762e0;
    }
    ctx->pc = 0x4762D8u;
    SET_GPR_U32(ctx, 31, 0x4762E0u);
    ctx->pc = 0x4762DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4762D8u;
            // 0x4762dc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762E0u; }
        if (ctx->pc != 0x4762E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4762E0u; }
        if (ctx->pc != 0x4762E0u) { return; }
    }
    ctx->pc = 0x4762E0u;
label_4762e0:
    // 0x4762e0: 0x100000cc  b           . + 4 + (0xCC << 2)
label_4762e4:
    if (ctx->pc == 0x4762E4u) {
        ctx->pc = 0x4762E8u;
        goto label_4762e8;
    }
    ctx->pc = 0x4762E0u;
    {
        const bool branch_taken_0x4762e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4762e0) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x4762E8u;
label_4762e8:
    // 0x4762e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4762e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4762ec:
    // 0x4762ec: 0x265300f0  addiu       $s3, $s2, 0xF0
    ctx->pc = 0x4762ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_4762f0:
    // 0x4762f0: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x4762f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_4762f4:
    // 0x4762f4: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x4762f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_4762f8:
    // 0x4762f8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x4762f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_4762fc:
    // 0x4762fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4762fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476300:
    // 0x476300: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x476300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476304:
    // 0x476304: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x476304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_476308:
    // 0x476308: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x476308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_47630c:
    // 0x47630c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x47630cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476310:
    // 0x476310: 0xc0b838c  jal         func_2E0E30
label_476314:
    if (ctx->pc == 0x476314u) {
        ctx->pc = 0x476314u;
            // 0x476314: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x476318u;
        goto label_476318;
    }
    ctx->pc = 0x476310u;
    SET_GPR_U32(ctx, 31, 0x476318u);
    ctx->pc = 0x476314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476310u;
            // 0x476314: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476318u; }
        if (ctx->pc != 0x476318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476318u; }
        if (ctx->pc != 0x476318u) { return; }
    }
    ctx->pc = 0x476318u;
label_476318:
    // 0x476318: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x476318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_47631c:
    // 0x47631c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x47631cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476320:
    // 0x476320: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x476320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476324:
    // 0x476324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x476324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476328:
    // 0x476328: 0xc0b82c4  jal         func_2E0B10
label_47632c:
    if (ctx->pc == 0x47632Cu) {
        ctx->pc = 0x47632Cu;
            // 0x47632c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x476330u;
        goto label_476330;
    }
    ctx->pc = 0x476328u;
    SET_GPR_U32(ctx, 31, 0x476330u);
    ctx->pc = 0x47632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476328u;
            // 0x47632c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476330u; }
        if (ctx->pc != 0x476330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476330u; }
        if (ctx->pc != 0x476330u) { return; }
    }
    ctx->pc = 0x476330u;
label_476330:
    // 0x476330: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x476330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476334:
    // 0x476334: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x476334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_476338:
    // 0x476338: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x476338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47633c:
    // 0x47633c: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x47633cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_476340:
    // 0x476340: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x476340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_476344:
    // 0x476344: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x476344u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_476348:
    // 0x476348: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x476348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_47634c:
    // 0x47634c: 0x46000344  c1          0x344
    ctx->pc = 0x47634cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_476350:
    // 0x476350: 0x0  nop
    ctx->pc = 0x476350u;
    // NOP
label_476354:
    // 0x476354: 0x0  nop
    ctx->pc = 0x476354u;
    // NOP
label_476358:
    // 0x476358: 0xc04780a  jal         func_11E028
label_47635c:
    if (ctx->pc == 0x47635Cu) {
        ctx->pc = 0x476360u;
        goto label_476360;
    }
    ctx->pc = 0x476358u;
    SET_GPR_U32(ctx, 31, 0x476360u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476360u; }
        if (ctx->pc != 0x476360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476360u; }
        if (ctx->pc != 0x476360u) { return; }
    }
    ctx->pc = 0x476360u;
label_476360:
    // 0x476360: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x476360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_476364:
    // 0x476364: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x476364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_476368:
    // 0x476368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x476368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47636c:
    // 0x47636c: 0x0  nop
    ctx->pc = 0x47636cu;
    // NOP
label_476370:
    // 0x476370: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_476374:
    // 0x476374: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x476374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_476378:
    // 0x476378: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x476378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_47637c:
    // 0x47637c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x47637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_476380:
    // 0x476380: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x476380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_476384:
    // 0x476384: 0xc04780a  jal         func_11E028
label_476388:
    if (ctx->pc == 0x476388u) {
        ctx->pc = 0x476388u;
            // 0x476388: 0x29823  negu        $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x47638Cu;
        goto label_47638c;
    }
    ctx->pc = 0x476384u;
    SET_GPR_U32(ctx, 31, 0x47638Cu);
    ctx->pc = 0x476388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476384u;
            // 0x476388: 0x29823  negu        $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47638Cu; }
        if (ctx->pc != 0x47638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47638Cu; }
        if (ctx->pc != 0x47638Cu) { return; }
    }
    ctx->pc = 0x47638Cu;
label_47638c:
    // 0x47638c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x47638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_476390:
    // 0x476390: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x476390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_476394:
    // 0x476394: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x476394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_476398:
    // 0x476398: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x476398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_47639c:
    // 0x47639c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47639cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4763a0:
    // 0x4763a0: 0x0  nop
    ctx->pc = 0x4763a0u;
    // NOP
label_4763a4:
    // 0x4763a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4763a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4763a8:
    // 0x4763a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4763a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4763ac:
    // 0x4763ac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4763acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4763b0:
    // 0x4763b0: 0xc04ca18  jal         func_132860
label_4763b4:
    if (ctx->pc == 0x4763B4u) {
        ctx->pc = 0x4763B4u;
            // 0x4763b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4763B8u;
        goto label_4763b8;
    }
    ctx->pc = 0x4763B0u;
    SET_GPR_U32(ctx, 31, 0x4763B8u);
    ctx->pc = 0x4763B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4763B0u;
            // 0x4763b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763B8u; }
        if (ctx->pc != 0x4763B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763B8u; }
        if (ctx->pc != 0x4763B8u) { return; }
    }
    ctx->pc = 0x4763B8u;
label_4763b8:
    // 0x4763b8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x4763b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_4763bc:
    // 0x4763bc: 0xc04c74c  jal         func_131D30
label_4763c0:
    if (ctx->pc == 0x4763C0u) {
        ctx->pc = 0x4763C0u;
            // 0x4763c0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x4763C4u;
        goto label_4763c4;
    }
    ctx->pc = 0x4763BCu;
    SET_GPR_U32(ctx, 31, 0x4763C4u);
    ctx->pc = 0x4763C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4763BCu;
            // 0x4763c0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763C4u; }
        if (ctx->pc != 0x4763C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763C4u; }
        if (ctx->pc != 0x4763C4u) { return; }
    }
    ctx->pc = 0x4763C4u;
label_4763c4:
    // 0x4763c4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x4763c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_4763c8:
    // 0x4763c8: 0xc04c74c  jal         func_131D30
label_4763cc:
    if (ctx->pc == 0x4763CCu) {
        ctx->pc = 0x4763CCu;
            // 0x4763cc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4763D0u;
        goto label_4763d0;
    }
    ctx->pc = 0x4763C8u;
    SET_GPR_U32(ctx, 31, 0x4763D0u);
    ctx->pc = 0x4763CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4763C8u;
            // 0x4763cc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763D0u; }
        if (ctx->pc != 0x4763D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763D0u; }
        if (ctx->pc != 0x4763D0u) { return; }
    }
    ctx->pc = 0x4763D0u;
label_4763d0:
    // 0x4763d0: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x4763d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_4763d4:
    // 0x4763d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4763d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4763d8:
    // 0x4763d8: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x4763d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_4763dc:
    // 0x4763dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4763dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4763e0:
    // 0x4763e0: 0x1000008c  b           . + 4 + (0x8C << 2)
label_4763e4:
    if (ctx->pc == 0x4763E4u) {
        ctx->pc = 0x4763E4u;
            // 0x4763e4: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x4763E8u;
        goto label_4763e8;
    }
    ctx->pc = 0x4763E0u;
    {
        const bool branch_taken_0x4763e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4763E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4763E0u;
            // 0x4763e4: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4763e0) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x4763E8u;
label_4763e8:
    // 0x4763e8: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x4763e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_4763ec:
    // 0x4763ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4763ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4763f0:
    // 0x4763f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4763f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4763f4:
    // 0x4763f4: 0xc0d8834  jal         func_3620D0
label_4763f8:
    if (ctx->pc == 0x4763F8u) {
        ctx->pc = 0x4763F8u;
            // 0x4763f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4763FCu;
        goto label_4763fc;
    }
    ctx->pc = 0x4763F4u;
    SET_GPR_U32(ctx, 31, 0x4763FCu);
    ctx->pc = 0x4763F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4763F4u;
            // 0x4763f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763FCu; }
        if (ctx->pc != 0x4763FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4763FCu; }
        if (ctx->pc != 0x4763FCu) { return; }
    }
    ctx->pc = 0x4763FCu;
label_4763fc:
    // 0x4763fc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x4763fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_476400:
    // 0x476400: 0xc04cc04  jal         func_133010
label_476404:
    if (ctx->pc == 0x476404u) {
        ctx->pc = 0x476404u;
            // 0x476404: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x476408u;
        goto label_476408;
    }
    ctx->pc = 0x476400u;
    SET_GPR_U32(ctx, 31, 0x476408u);
    ctx->pc = 0x476404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476400u;
            // 0x476404: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476408u; }
        if (ctx->pc != 0x476408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476408u; }
        if (ctx->pc != 0x476408u) { return; }
    }
    ctx->pc = 0x476408u;
label_476408:
    // 0x476408: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x476408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47640c:
    // 0x47640c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x47640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_476410:
    // 0x476410: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x476410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476414:
    // 0x476414: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x476414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_476418:
    // 0x476418: 0xc04cc7c  jal         func_1331F0
label_47641c:
    if (ctx->pc == 0x47641Cu) {
        ctx->pc = 0x47641Cu;
            // 0x47641c: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x476420u;
        goto label_476420;
    }
    ctx->pc = 0x476418u;
    SET_GPR_U32(ctx, 31, 0x476420u);
    ctx->pc = 0x47641Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476418u;
            // 0x47641c: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476420u; }
        if (ctx->pc != 0x476420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476420u; }
        if (ctx->pc != 0x476420u) { return; }
    }
    ctx->pc = 0x476420u;
label_476420:
    // 0x476420: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x476420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_476424:
    // 0x476424: 0xc04c720  jal         func_131C80
label_476428:
    if (ctx->pc == 0x476428u) {
        ctx->pc = 0x476428u;
            // 0x476428: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x47642Cu;
        goto label_47642c;
    }
    ctx->pc = 0x476424u;
    SET_GPR_U32(ctx, 31, 0x47642Cu);
    ctx->pc = 0x476428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476424u;
            // 0x476428: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47642Cu; }
        if (ctx->pc != 0x47642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47642Cu; }
        if (ctx->pc != 0x47642Cu) { return; }
    }
    ctx->pc = 0x47642Cu;
label_47642c:
    // 0x47642c: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x47642cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_476430:
    // 0x476430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x476430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_476434:
    // 0x476434: 0x14830077  bne         $a0, $v1, . + 4 + (0x77 << 2)
label_476438:
    if (ctx->pc == 0x476438u) {
        ctx->pc = 0x47643Cu;
        goto label_47643c;
    }
    ctx->pc = 0x476434u;
    {
        const bool branch_taken_0x476434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x476434) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x47643Cu;
label_47643c:
    // 0x47643c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x47643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_476440:
    // 0x476440: 0x10000074  b           . + 4 + (0x74 << 2)
label_476444:
    if (ctx->pc == 0x476444u) {
        ctx->pc = 0x476444u;
            // 0x476444: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x476448u;
        goto label_476448;
    }
    ctx->pc = 0x476440u;
    {
        const bool branch_taken_0x476440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476440u;
            // 0x476444: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476440) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x476448u;
label_476448:
    // 0x476448: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x476448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_47644c:
    // 0x47644c: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x47644cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_476450:
    // 0x476450: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x476450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_476454:
    // 0x476454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x476454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476458:
    // 0x476458: 0xc0d8834  jal         func_3620D0
label_47645c:
    if (ctx->pc == 0x47645Cu) {
        ctx->pc = 0x47645Cu;
            // 0x47645c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476460u;
        goto label_476460;
    }
    ctx->pc = 0x476458u;
    SET_GPR_U32(ctx, 31, 0x476460u);
    ctx->pc = 0x47645Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476458u;
            // 0x47645c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476460u; }
        if (ctx->pc != 0x476460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476460u; }
        if (ctx->pc != 0x476460u) { return; }
    }
    ctx->pc = 0x476460u;
label_476460:
    // 0x476460: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x476460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_476464:
    // 0x476464: 0xc04cc04  jal         func_133010
label_476468:
    if (ctx->pc == 0x476468u) {
        ctx->pc = 0x476468u;
            // 0x476468: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x47646Cu;
        goto label_47646c;
    }
    ctx->pc = 0x476464u;
    SET_GPR_U32(ctx, 31, 0x47646Cu);
    ctx->pc = 0x476468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476464u;
            // 0x476468: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47646Cu; }
        if (ctx->pc != 0x47646Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47646Cu; }
        if (ctx->pc != 0x47646Cu) { return; }
    }
    ctx->pc = 0x47646Cu;
label_47646c:
    // 0x47646c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_476470:
    // 0x476470: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x476470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_476474:
    // 0x476474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x476474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476478:
    // 0x476478: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x476478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47647c:
    // 0x47647c: 0xc04cc7c  jal         func_1331F0
label_476480:
    if (ctx->pc == 0x476480u) {
        ctx->pc = 0x476480u;
            // 0x476480: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x476484u;
        goto label_476484;
    }
    ctx->pc = 0x47647Cu;
    SET_GPR_U32(ctx, 31, 0x476484u);
    ctx->pc = 0x476480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47647Cu;
            // 0x476480: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476484u; }
        if (ctx->pc != 0x476484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476484u; }
        if (ctx->pc != 0x476484u) { return; }
    }
    ctx->pc = 0x476484u;
label_476484:
    // 0x476484: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x476484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_476488:
    // 0x476488: 0xc04c720  jal         func_131C80
label_47648c:
    if (ctx->pc == 0x47648Cu) {
        ctx->pc = 0x47648Cu;
            // 0x47648c: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x476490u;
        goto label_476490;
    }
    ctx->pc = 0x476488u;
    SET_GPR_U32(ctx, 31, 0x476490u);
    ctx->pc = 0x47648Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476488u;
            // 0x47648c: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476490u; }
        if (ctx->pc != 0x476490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476490u; }
        if (ctx->pc != 0x476490u) { return; }
    }
    ctx->pc = 0x476490u;
label_476490:
    // 0x476490: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x476490u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_476494:
    // 0x476494: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x476494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_476498:
    // 0x476498: 0x1483005e  bne         $a0, $v1, . + 4 + (0x5E << 2)
label_47649c:
    if (ctx->pc == 0x47649Cu) {
        ctx->pc = 0x4764A0u;
        goto label_4764a0;
    }
    ctx->pc = 0x476498u;
    {
        const bool branch_taken_0x476498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x476498) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x4764A0u;
label_4764a0:
    // 0x4764a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4764a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4764a4:
    // 0x4764a4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x4764a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_4764a8:
    // 0x4764a8: 0x9045f258  lbu         $a1, -0xDA8($v0)
    ctx->pc = 0x4764a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963800)));
label_4764ac:
    // 0x4764ac: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4764acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4764b0:
    // 0x4764b0: 0x8e5001c8  lw          $s0, 0x1C8($s2)
    ctx->pc = 0x4764b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_4764b4:
    // 0x4764b4: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x4764b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_4764b8:
    // 0x4764b8: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x4764b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_4764bc:
    // 0x4764bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4764bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4764c0:
    // 0x4764c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4764c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4764c4:
    // 0x4764c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4764c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4764c8:
    // 0x4764c8: 0xc122b58  jal         func_48AD60
label_4764cc:
    if (ctx->pc == 0x4764CCu) {
        ctx->pc = 0x4764CCu;
            // 0x4764cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4764D0u;
        goto label_4764d0;
    }
    ctx->pc = 0x4764C8u;
    SET_GPR_U32(ctx, 31, 0x4764D0u);
    ctx->pc = 0x4764CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4764C8u;
            // 0x4764cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4764D0u; }
        if (ctx->pc != 0x4764D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4764D0u; }
        if (ctx->pc != 0x4764D0u) { return; }
    }
    ctx->pc = 0x4764D0u;
label_4764d0:
    // 0x4764d0: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x4764d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_4764d4:
    // 0x4764d4: 0xc04cc04  jal         func_133010
label_4764d8:
    if (ctx->pc == 0x4764D8u) {
        ctx->pc = 0x4764D8u;
            // 0x4764d8: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x4764DCu;
        goto label_4764dc;
    }
    ctx->pc = 0x4764D4u;
    SET_GPR_U32(ctx, 31, 0x4764DCu);
    ctx->pc = 0x4764D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4764D4u;
            // 0x4764d8: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4764DCu; }
        if (ctx->pc != 0x4764DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4764DCu; }
        if (ctx->pc != 0x4764DCu) { return; }
    }
    ctx->pc = 0x4764DCu;
label_4764dc:
    // 0x4764dc: 0xae5001c8  sw          $s0, 0x1C8($s2)
    ctx->pc = 0x4764dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 16));
label_4764e0:
    // 0x4764e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4764e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4764e4:
    // 0x4764e4: 0xae4301c0  sw          $v1, 0x1C0($s2)
    ctx->pc = 0x4764e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
label_4764e8:
    // 0x4764e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4764e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4764ec:
    // 0x4764ec: 0x10000049  b           . + 4 + (0x49 << 2)
label_4764f0:
    if (ctx->pc == 0x4764F0u) {
        ctx->pc = 0x4764F0u;
            // 0x4764f0: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x4764F4u;
        goto label_4764f4;
    }
    ctx->pc = 0x4764ECu;
    {
        const bool branch_taken_0x4764ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4764F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4764ECu;
            // 0x4764f0: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4764ec) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x4764F4u;
label_4764f4:
    // 0x4764f4: 0x8e4301c8  lw          $v1, 0x1C8($s2)
    ctx->pc = 0x4764f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_4764f8:
    // 0x4764f8: 0x8c6600b0  lw          $a2, 0xB0($v1)
    ctx->pc = 0x4764f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_4764fc:
    // 0x4764fc: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
label_476500:
    if (ctx->pc == 0x476500u) {
        ctx->pc = 0x476500u;
            // 0x476500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476504u;
        goto label_476504;
    }
    ctx->pc = 0x4764FCu;
    {
        const bool branch_taken_0x4764fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4764fc) {
            ctx->pc = 0x476500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4764FCu;
            // 0x476500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476530u;
            goto label_476530;
        }
    }
    ctx->pc = 0x476504u;
label_476504:
    // 0x476504: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x476504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_476508:
    // 0x476508: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x476508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_47650c:
    // 0x47650c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x47650cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_476510:
    // 0x476510: 0x8ce401c4  lw          $a0, 0x1C4($a3)
    ctx->pc = 0x476510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
label_476514:
    // 0x476514: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_476518:
    if (ctx->pc == 0x476518u) {
        ctx->pc = 0x476518u;
            // 0x476518: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x47651Cu;
        goto label_47651c;
    }
    ctx->pc = 0x476514u;
    {
        const bool branch_taken_0x476514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x476514) {
            ctx->pc = 0x476518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476514u;
            // 0x476518: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x476524u;
            goto label_476524;
        }
    }
    ctx->pc = 0x47651Cu;
label_47651c:
    // 0x47651c: 0x10000004  b           . + 4 + (0x4 << 2)
label_476520:
    if (ctx->pc == 0x476520u) {
        ctx->pc = 0x476524u;
        goto label_476524;
    }
    ctx->pc = 0x47651Cu;
    {
        const bool branch_taken_0x47651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47651c) {
            ctx->pc = 0x476530u;
            goto label_476530;
        }
    }
    ctx->pc = 0x476524u;
label_476524:
    // 0x476524: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_476528:
    if (ctx->pc == 0x476528u) {
        ctx->pc = 0x476528u;
            // 0x476528: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x47652Cu;
        goto label_47652c;
    }
    ctx->pc = 0x476524u;
    {
        const bool branch_taken_0x476524 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x476528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476524u;
            // 0x476528: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476524) {
            ctx->pc = 0x47650Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47650c;
        }
    }
    ctx->pc = 0x47652Cu;
label_47652c:
    // 0x47652c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47652cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476530:
    // 0x476530: 0x14e00038  bnez        $a3, . + 4 + (0x38 << 2)
label_476534:
    if (ctx->pc == 0x476534u) {
        ctx->pc = 0x476538u;
        goto label_476538;
    }
    ctx->pc = 0x476530u;
    {
        const bool branch_taken_0x476530 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x476530) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x476538u;
label_476538:
    // 0x476538: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x476538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_47653c:
    // 0x47653c: 0x10000035  b           . + 4 + (0x35 << 2)
label_476540:
    if (ctx->pc == 0x476540u) {
        ctx->pc = 0x476540u;
            // 0x476540: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x476544u;
        goto label_476544;
    }
    ctx->pc = 0x47653Cu;
    {
        const bool branch_taken_0x47653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47653Cu;
            // 0x476540: 0xae4301c4  sw          $v1, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47653c) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x476544u;
label_476544:
    // 0x476544: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x476544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_476548:
    // 0x476548: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x476548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_47654c:
    // 0x47654c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x47654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_476550:
    // 0x476550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x476550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476554:
    // 0x476554: 0xc0d8834  jal         func_3620D0
label_476558:
    if (ctx->pc == 0x476558u) {
        ctx->pc = 0x476558u;
            // 0x476558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47655Cu;
        goto label_47655c;
    }
    ctx->pc = 0x476554u;
    SET_GPR_U32(ctx, 31, 0x47655Cu);
    ctx->pc = 0x476558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476554u;
            // 0x476558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47655Cu; }
        if (ctx->pc != 0x47655Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47655Cu; }
        if (ctx->pc != 0x47655Cu) { return; }
    }
    ctx->pc = 0x47655Cu;
label_47655c:
    // 0x47655c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x47655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_476560:
    // 0x476560: 0xc04cc04  jal         func_133010
label_476564:
    if (ctx->pc == 0x476564u) {
        ctx->pc = 0x476564u;
            // 0x476564: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x476568u;
        goto label_476568;
    }
    ctx->pc = 0x476560u;
    SET_GPR_U32(ctx, 31, 0x476568u);
    ctx->pc = 0x476564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476560u;
            // 0x476564: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476568u; }
        if (ctx->pc != 0x476568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476568u; }
        if (ctx->pc != 0x476568u) { return; }
    }
    ctx->pc = 0x476568u;
label_476568:
    // 0x476568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x476568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47656c:
    // 0x47656c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x47656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_476570:
    // 0x476570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x476570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_476574:
    // 0x476574: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x476574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_476578:
    // 0x476578: 0xc04cc7c  jal         func_1331F0
label_47657c:
    if (ctx->pc == 0x47657Cu) {
        ctx->pc = 0x47657Cu;
            // 0x47657c: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x476580u;
        goto label_476580;
    }
    ctx->pc = 0x476578u;
    SET_GPR_U32(ctx, 31, 0x476580u);
    ctx->pc = 0x47657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476578u;
            // 0x47657c: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476580u; }
        if (ctx->pc != 0x476580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476580u; }
        if (ctx->pc != 0x476580u) { return; }
    }
    ctx->pc = 0x476580u;
label_476580:
    // 0x476580: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x476580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_476584:
    // 0x476584: 0xc04c720  jal         func_131C80
label_476588:
    if (ctx->pc == 0x476588u) {
        ctx->pc = 0x476588u;
            // 0x476588: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x47658Cu;
        goto label_47658c;
    }
    ctx->pc = 0x476584u;
    SET_GPR_U32(ctx, 31, 0x47658Cu);
    ctx->pc = 0x476588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476584u;
            // 0x476588: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47658Cu; }
        if (ctx->pc != 0x47658Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47658Cu; }
        if (ctx->pc != 0x47658Cu) { return; }
    }
    ctx->pc = 0x47658Cu;
label_47658c:
    // 0x47658c: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x47658cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_476590:
    // 0x476590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x476590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_476594:
    // 0x476594: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_476598:
    if (ctx->pc == 0x476598u) {
        ctx->pc = 0x47659Cu;
        goto label_47659c;
    }
    ctx->pc = 0x476594u;
    {
        const bool branch_taken_0x476594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x476594) {
            ctx->pc = 0x476614u;
            goto label_476614;
        }
    }
    ctx->pc = 0x47659Cu;
label_47659c:
    // 0x47659c: 0x8e5001c8  lw          $s0, 0x1C8($s2)
    ctx->pc = 0x47659cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_4765a0:
    // 0x4765a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4765a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4765a4:
    // 0x4765a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4765a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4765a8:
    // 0x4765a8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x4765a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4765ac:
    // 0x4765ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4765acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4765b0:
    // 0x4765b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4765b4:
    if (ctx->pc == 0x4765B4u) {
        ctx->pc = 0x4765B4u;
            // 0x4765b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4765B8u;
        goto label_4765b8;
    }
    ctx->pc = 0x4765B0u;
    {
        const bool branch_taken_0x4765b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4765b0) {
            ctx->pc = 0x4765B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4765B0u;
            // 0x4765b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4765C8u;
            goto label_4765c8;
        }
    }
    ctx->pc = 0x4765B8u;
label_4765b8:
    // 0x4765b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4765b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4765bc:
    // 0x4765bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4765bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4765c0:
    // 0x4765c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4765c4:
    if (ctx->pc == 0x4765C4u) {
        ctx->pc = 0x4765C4u;
            // 0x4765c4: 0xc60c0084  lwc1        $f12, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4765C8u;
        goto label_4765c8;
    }
    ctx->pc = 0x4765C0u;
    {
        const bool branch_taken_0x4765c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4765C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4765C0u;
            // 0x4765c4: 0xc60c0084  lwc1        $f12, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4765c0) {
            ctx->pc = 0x4765E0u;
            goto label_4765e0;
        }
    }
    ctx->pc = 0x4765C8u;
label_4765c8:
    // 0x4765c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4765c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4765cc:
    // 0x4765cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4765ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4765d0:
    // 0x4765d0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4765d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4765d4:
    // 0x4765d4: 0x0  nop
    ctx->pc = 0x4765d4u;
    // NOP
label_4765d8:
    // 0x4765d8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4765d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4765dc:
    // 0x4765dc: 0xc60c0084  lwc1        $f12, 0x84($s0)
    ctx->pc = 0x4765dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4765e0:
    // 0x4765e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4765e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4765e4:
    // 0x4765e4: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x4765e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4765e8:
    // 0x4765e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4765e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4765ec:
    // 0x4765ec: 0xc122b58  jal         func_48AD60
label_4765f0:
    if (ctx->pc == 0x4765F0u) {
        ctx->pc = 0x4765F0u;
            // 0x4765f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4765F4u;
        goto label_4765f4;
    }
    ctx->pc = 0x4765ECu;
    SET_GPR_U32(ctx, 31, 0x4765F4u);
    ctx->pc = 0x4765F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4765ECu;
            // 0x4765f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4765F4u; }
        if (ctx->pc != 0x4765F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4765F4u; }
        if (ctx->pc != 0x4765F4u) { return; }
    }
    ctx->pc = 0x4765F4u;
label_4765f4:
    // 0x4765f4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x4765f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_4765f8:
    // 0x4765f8: 0xc04cc04  jal         func_133010
label_4765fc:
    if (ctx->pc == 0x4765FCu) {
        ctx->pc = 0x4765FCu;
            // 0x4765fc: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x476600u;
        goto label_476600;
    }
    ctx->pc = 0x4765F8u;
    SET_GPR_U32(ctx, 31, 0x476600u);
    ctx->pc = 0x4765FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4765F8u;
            // 0x4765fc: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476600u; }
        if (ctx->pc != 0x476600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476600u; }
        if (ctx->pc != 0x476600u) { return; }
    }
    ctx->pc = 0x476600u;
label_476600:
    // 0x476600: 0xae5001c8  sw          $s0, 0x1C8($s2)
    ctx->pc = 0x476600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 16));
label_476604:
    // 0x476604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x476604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476608:
    // 0x476608: 0xae4301c0  sw          $v1, 0x1C0($s2)
    ctx->pc = 0x476608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
label_47660c:
    // 0x47660c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x47660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_476610:
    // 0x476610: 0xae4301c4  sw          $v1, 0x1C4($s2)
    ctx->pc = 0x476610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 3));
label_476614:
    // 0x476614: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x476614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_476618:
    // 0x476618: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x476618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_47661c:
    // 0x47661c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x47661cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_476620:
    // 0x476620: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x476620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_476624:
    // 0x476624: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x476624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_476628:
    // 0x476628: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x476628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47662c:
    // 0x47662c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47662cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_476630:
    // 0x476630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x476630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_476634:
    // 0x476634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x476634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_476638:
    // 0x476638: 0x3e00008  jr          $ra
label_47663c:
    if (ctx->pc == 0x47663Cu) {
        ctx->pc = 0x47663Cu;
            // 0x47663c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x476640u;
        goto label_fallthrough_0x476638;
    }
    ctx->pc = 0x476638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476638u;
            // 0x47663c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x476638:
    ctx->pc = 0x476640u;
}
