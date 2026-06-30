#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00478730
// Address: 0x478730 - 0x4793c0
void sub_00478730_0x478730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478730_0x478730");
#endif

    switch (ctx->pc) {
        case 0x478730u: goto label_478730;
        case 0x478734u: goto label_478734;
        case 0x478738u: goto label_478738;
        case 0x47873cu: goto label_47873c;
        case 0x478740u: goto label_478740;
        case 0x478744u: goto label_478744;
        case 0x478748u: goto label_478748;
        case 0x47874cu: goto label_47874c;
        case 0x478750u: goto label_478750;
        case 0x478754u: goto label_478754;
        case 0x478758u: goto label_478758;
        case 0x47875cu: goto label_47875c;
        case 0x478760u: goto label_478760;
        case 0x478764u: goto label_478764;
        case 0x478768u: goto label_478768;
        case 0x47876cu: goto label_47876c;
        case 0x478770u: goto label_478770;
        case 0x478774u: goto label_478774;
        case 0x478778u: goto label_478778;
        case 0x47877cu: goto label_47877c;
        case 0x478780u: goto label_478780;
        case 0x478784u: goto label_478784;
        case 0x478788u: goto label_478788;
        case 0x47878cu: goto label_47878c;
        case 0x478790u: goto label_478790;
        case 0x478794u: goto label_478794;
        case 0x478798u: goto label_478798;
        case 0x47879cu: goto label_47879c;
        case 0x4787a0u: goto label_4787a0;
        case 0x4787a4u: goto label_4787a4;
        case 0x4787a8u: goto label_4787a8;
        case 0x4787acu: goto label_4787ac;
        case 0x4787b0u: goto label_4787b0;
        case 0x4787b4u: goto label_4787b4;
        case 0x4787b8u: goto label_4787b8;
        case 0x4787bcu: goto label_4787bc;
        case 0x4787c0u: goto label_4787c0;
        case 0x4787c4u: goto label_4787c4;
        case 0x4787c8u: goto label_4787c8;
        case 0x4787ccu: goto label_4787cc;
        case 0x4787d0u: goto label_4787d0;
        case 0x4787d4u: goto label_4787d4;
        case 0x4787d8u: goto label_4787d8;
        case 0x4787dcu: goto label_4787dc;
        case 0x4787e0u: goto label_4787e0;
        case 0x4787e4u: goto label_4787e4;
        case 0x4787e8u: goto label_4787e8;
        case 0x4787ecu: goto label_4787ec;
        case 0x4787f0u: goto label_4787f0;
        case 0x4787f4u: goto label_4787f4;
        case 0x4787f8u: goto label_4787f8;
        case 0x4787fcu: goto label_4787fc;
        case 0x478800u: goto label_478800;
        case 0x478804u: goto label_478804;
        case 0x478808u: goto label_478808;
        case 0x47880cu: goto label_47880c;
        case 0x478810u: goto label_478810;
        case 0x478814u: goto label_478814;
        case 0x478818u: goto label_478818;
        case 0x47881cu: goto label_47881c;
        case 0x478820u: goto label_478820;
        case 0x478824u: goto label_478824;
        case 0x478828u: goto label_478828;
        case 0x47882cu: goto label_47882c;
        case 0x478830u: goto label_478830;
        case 0x478834u: goto label_478834;
        case 0x478838u: goto label_478838;
        case 0x47883cu: goto label_47883c;
        case 0x478840u: goto label_478840;
        case 0x478844u: goto label_478844;
        case 0x478848u: goto label_478848;
        case 0x47884cu: goto label_47884c;
        case 0x478850u: goto label_478850;
        case 0x478854u: goto label_478854;
        case 0x478858u: goto label_478858;
        case 0x47885cu: goto label_47885c;
        case 0x478860u: goto label_478860;
        case 0x478864u: goto label_478864;
        case 0x478868u: goto label_478868;
        case 0x47886cu: goto label_47886c;
        case 0x478870u: goto label_478870;
        case 0x478874u: goto label_478874;
        case 0x478878u: goto label_478878;
        case 0x47887cu: goto label_47887c;
        case 0x478880u: goto label_478880;
        case 0x478884u: goto label_478884;
        case 0x478888u: goto label_478888;
        case 0x47888cu: goto label_47888c;
        case 0x478890u: goto label_478890;
        case 0x478894u: goto label_478894;
        case 0x478898u: goto label_478898;
        case 0x47889cu: goto label_47889c;
        case 0x4788a0u: goto label_4788a0;
        case 0x4788a4u: goto label_4788a4;
        case 0x4788a8u: goto label_4788a8;
        case 0x4788acu: goto label_4788ac;
        case 0x4788b0u: goto label_4788b0;
        case 0x4788b4u: goto label_4788b4;
        case 0x4788b8u: goto label_4788b8;
        case 0x4788bcu: goto label_4788bc;
        case 0x4788c0u: goto label_4788c0;
        case 0x4788c4u: goto label_4788c4;
        case 0x4788c8u: goto label_4788c8;
        case 0x4788ccu: goto label_4788cc;
        case 0x4788d0u: goto label_4788d0;
        case 0x4788d4u: goto label_4788d4;
        case 0x4788d8u: goto label_4788d8;
        case 0x4788dcu: goto label_4788dc;
        case 0x4788e0u: goto label_4788e0;
        case 0x4788e4u: goto label_4788e4;
        case 0x4788e8u: goto label_4788e8;
        case 0x4788ecu: goto label_4788ec;
        case 0x4788f0u: goto label_4788f0;
        case 0x4788f4u: goto label_4788f4;
        case 0x4788f8u: goto label_4788f8;
        case 0x4788fcu: goto label_4788fc;
        case 0x478900u: goto label_478900;
        case 0x478904u: goto label_478904;
        case 0x478908u: goto label_478908;
        case 0x47890cu: goto label_47890c;
        case 0x478910u: goto label_478910;
        case 0x478914u: goto label_478914;
        case 0x478918u: goto label_478918;
        case 0x47891cu: goto label_47891c;
        case 0x478920u: goto label_478920;
        case 0x478924u: goto label_478924;
        case 0x478928u: goto label_478928;
        case 0x47892cu: goto label_47892c;
        case 0x478930u: goto label_478930;
        case 0x478934u: goto label_478934;
        case 0x478938u: goto label_478938;
        case 0x47893cu: goto label_47893c;
        case 0x478940u: goto label_478940;
        case 0x478944u: goto label_478944;
        case 0x478948u: goto label_478948;
        case 0x47894cu: goto label_47894c;
        case 0x478950u: goto label_478950;
        case 0x478954u: goto label_478954;
        case 0x478958u: goto label_478958;
        case 0x47895cu: goto label_47895c;
        case 0x478960u: goto label_478960;
        case 0x478964u: goto label_478964;
        case 0x478968u: goto label_478968;
        case 0x47896cu: goto label_47896c;
        case 0x478970u: goto label_478970;
        case 0x478974u: goto label_478974;
        case 0x478978u: goto label_478978;
        case 0x47897cu: goto label_47897c;
        case 0x478980u: goto label_478980;
        case 0x478984u: goto label_478984;
        case 0x478988u: goto label_478988;
        case 0x47898cu: goto label_47898c;
        case 0x478990u: goto label_478990;
        case 0x478994u: goto label_478994;
        case 0x478998u: goto label_478998;
        case 0x47899cu: goto label_47899c;
        case 0x4789a0u: goto label_4789a0;
        case 0x4789a4u: goto label_4789a4;
        case 0x4789a8u: goto label_4789a8;
        case 0x4789acu: goto label_4789ac;
        case 0x4789b0u: goto label_4789b0;
        case 0x4789b4u: goto label_4789b4;
        case 0x4789b8u: goto label_4789b8;
        case 0x4789bcu: goto label_4789bc;
        case 0x4789c0u: goto label_4789c0;
        case 0x4789c4u: goto label_4789c4;
        case 0x4789c8u: goto label_4789c8;
        case 0x4789ccu: goto label_4789cc;
        case 0x4789d0u: goto label_4789d0;
        case 0x4789d4u: goto label_4789d4;
        case 0x4789d8u: goto label_4789d8;
        case 0x4789dcu: goto label_4789dc;
        case 0x4789e0u: goto label_4789e0;
        case 0x4789e4u: goto label_4789e4;
        case 0x4789e8u: goto label_4789e8;
        case 0x4789ecu: goto label_4789ec;
        case 0x4789f0u: goto label_4789f0;
        case 0x4789f4u: goto label_4789f4;
        case 0x4789f8u: goto label_4789f8;
        case 0x4789fcu: goto label_4789fc;
        case 0x478a00u: goto label_478a00;
        case 0x478a04u: goto label_478a04;
        case 0x478a08u: goto label_478a08;
        case 0x478a0cu: goto label_478a0c;
        case 0x478a10u: goto label_478a10;
        case 0x478a14u: goto label_478a14;
        case 0x478a18u: goto label_478a18;
        case 0x478a1cu: goto label_478a1c;
        case 0x478a20u: goto label_478a20;
        case 0x478a24u: goto label_478a24;
        case 0x478a28u: goto label_478a28;
        case 0x478a2cu: goto label_478a2c;
        case 0x478a30u: goto label_478a30;
        case 0x478a34u: goto label_478a34;
        case 0x478a38u: goto label_478a38;
        case 0x478a3cu: goto label_478a3c;
        case 0x478a40u: goto label_478a40;
        case 0x478a44u: goto label_478a44;
        case 0x478a48u: goto label_478a48;
        case 0x478a4cu: goto label_478a4c;
        case 0x478a50u: goto label_478a50;
        case 0x478a54u: goto label_478a54;
        case 0x478a58u: goto label_478a58;
        case 0x478a5cu: goto label_478a5c;
        case 0x478a60u: goto label_478a60;
        case 0x478a64u: goto label_478a64;
        case 0x478a68u: goto label_478a68;
        case 0x478a6cu: goto label_478a6c;
        case 0x478a70u: goto label_478a70;
        case 0x478a74u: goto label_478a74;
        case 0x478a78u: goto label_478a78;
        case 0x478a7cu: goto label_478a7c;
        case 0x478a80u: goto label_478a80;
        case 0x478a84u: goto label_478a84;
        case 0x478a88u: goto label_478a88;
        case 0x478a8cu: goto label_478a8c;
        case 0x478a90u: goto label_478a90;
        case 0x478a94u: goto label_478a94;
        case 0x478a98u: goto label_478a98;
        case 0x478a9cu: goto label_478a9c;
        case 0x478aa0u: goto label_478aa0;
        case 0x478aa4u: goto label_478aa4;
        case 0x478aa8u: goto label_478aa8;
        case 0x478aacu: goto label_478aac;
        case 0x478ab0u: goto label_478ab0;
        case 0x478ab4u: goto label_478ab4;
        case 0x478ab8u: goto label_478ab8;
        case 0x478abcu: goto label_478abc;
        case 0x478ac0u: goto label_478ac0;
        case 0x478ac4u: goto label_478ac4;
        case 0x478ac8u: goto label_478ac8;
        case 0x478accu: goto label_478acc;
        case 0x478ad0u: goto label_478ad0;
        case 0x478ad4u: goto label_478ad4;
        case 0x478ad8u: goto label_478ad8;
        case 0x478adcu: goto label_478adc;
        case 0x478ae0u: goto label_478ae0;
        case 0x478ae4u: goto label_478ae4;
        case 0x478ae8u: goto label_478ae8;
        case 0x478aecu: goto label_478aec;
        case 0x478af0u: goto label_478af0;
        case 0x478af4u: goto label_478af4;
        case 0x478af8u: goto label_478af8;
        case 0x478afcu: goto label_478afc;
        case 0x478b00u: goto label_478b00;
        case 0x478b04u: goto label_478b04;
        case 0x478b08u: goto label_478b08;
        case 0x478b0cu: goto label_478b0c;
        case 0x478b10u: goto label_478b10;
        case 0x478b14u: goto label_478b14;
        case 0x478b18u: goto label_478b18;
        case 0x478b1cu: goto label_478b1c;
        case 0x478b20u: goto label_478b20;
        case 0x478b24u: goto label_478b24;
        case 0x478b28u: goto label_478b28;
        case 0x478b2cu: goto label_478b2c;
        case 0x478b30u: goto label_478b30;
        case 0x478b34u: goto label_478b34;
        case 0x478b38u: goto label_478b38;
        case 0x478b3cu: goto label_478b3c;
        case 0x478b40u: goto label_478b40;
        case 0x478b44u: goto label_478b44;
        case 0x478b48u: goto label_478b48;
        case 0x478b4cu: goto label_478b4c;
        case 0x478b50u: goto label_478b50;
        case 0x478b54u: goto label_478b54;
        case 0x478b58u: goto label_478b58;
        case 0x478b5cu: goto label_478b5c;
        case 0x478b60u: goto label_478b60;
        case 0x478b64u: goto label_478b64;
        case 0x478b68u: goto label_478b68;
        case 0x478b6cu: goto label_478b6c;
        case 0x478b70u: goto label_478b70;
        case 0x478b74u: goto label_478b74;
        case 0x478b78u: goto label_478b78;
        case 0x478b7cu: goto label_478b7c;
        case 0x478b80u: goto label_478b80;
        case 0x478b84u: goto label_478b84;
        case 0x478b88u: goto label_478b88;
        case 0x478b8cu: goto label_478b8c;
        case 0x478b90u: goto label_478b90;
        case 0x478b94u: goto label_478b94;
        case 0x478b98u: goto label_478b98;
        case 0x478b9cu: goto label_478b9c;
        case 0x478ba0u: goto label_478ba0;
        case 0x478ba4u: goto label_478ba4;
        case 0x478ba8u: goto label_478ba8;
        case 0x478bacu: goto label_478bac;
        case 0x478bb0u: goto label_478bb0;
        case 0x478bb4u: goto label_478bb4;
        case 0x478bb8u: goto label_478bb8;
        case 0x478bbcu: goto label_478bbc;
        case 0x478bc0u: goto label_478bc0;
        case 0x478bc4u: goto label_478bc4;
        case 0x478bc8u: goto label_478bc8;
        case 0x478bccu: goto label_478bcc;
        case 0x478bd0u: goto label_478bd0;
        case 0x478bd4u: goto label_478bd4;
        case 0x478bd8u: goto label_478bd8;
        case 0x478bdcu: goto label_478bdc;
        case 0x478be0u: goto label_478be0;
        case 0x478be4u: goto label_478be4;
        case 0x478be8u: goto label_478be8;
        case 0x478becu: goto label_478bec;
        case 0x478bf0u: goto label_478bf0;
        case 0x478bf4u: goto label_478bf4;
        case 0x478bf8u: goto label_478bf8;
        case 0x478bfcu: goto label_478bfc;
        case 0x478c00u: goto label_478c00;
        case 0x478c04u: goto label_478c04;
        case 0x478c08u: goto label_478c08;
        case 0x478c0cu: goto label_478c0c;
        case 0x478c10u: goto label_478c10;
        case 0x478c14u: goto label_478c14;
        case 0x478c18u: goto label_478c18;
        case 0x478c1cu: goto label_478c1c;
        case 0x478c20u: goto label_478c20;
        case 0x478c24u: goto label_478c24;
        case 0x478c28u: goto label_478c28;
        case 0x478c2cu: goto label_478c2c;
        case 0x478c30u: goto label_478c30;
        case 0x478c34u: goto label_478c34;
        case 0x478c38u: goto label_478c38;
        case 0x478c3cu: goto label_478c3c;
        case 0x478c40u: goto label_478c40;
        case 0x478c44u: goto label_478c44;
        case 0x478c48u: goto label_478c48;
        case 0x478c4cu: goto label_478c4c;
        case 0x478c50u: goto label_478c50;
        case 0x478c54u: goto label_478c54;
        case 0x478c58u: goto label_478c58;
        case 0x478c5cu: goto label_478c5c;
        case 0x478c60u: goto label_478c60;
        case 0x478c64u: goto label_478c64;
        case 0x478c68u: goto label_478c68;
        case 0x478c6cu: goto label_478c6c;
        case 0x478c70u: goto label_478c70;
        case 0x478c74u: goto label_478c74;
        case 0x478c78u: goto label_478c78;
        case 0x478c7cu: goto label_478c7c;
        case 0x478c80u: goto label_478c80;
        case 0x478c84u: goto label_478c84;
        case 0x478c88u: goto label_478c88;
        case 0x478c8cu: goto label_478c8c;
        case 0x478c90u: goto label_478c90;
        case 0x478c94u: goto label_478c94;
        case 0x478c98u: goto label_478c98;
        case 0x478c9cu: goto label_478c9c;
        case 0x478ca0u: goto label_478ca0;
        case 0x478ca4u: goto label_478ca4;
        case 0x478ca8u: goto label_478ca8;
        case 0x478cacu: goto label_478cac;
        case 0x478cb0u: goto label_478cb0;
        case 0x478cb4u: goto label_478cb4;
        case 0x478cb8u: goto label_478cb8;
        case 0x478cbcu: goto label_478cbc;
        case 0x478cc0u: goto label_478cc0;
        case 0x478cc4u: goto label_478cc4;
        case 0x478cc8u: goto label_478cc8;
        case 0x478cccu: goto label_478ccc;
        case 0x478cd0u: goto label_478cd0;
        case 0x478cd4u: goto label_478cd4;
        case 0x478cd8u: goto label_478cd8;
        case 0x478cdcu: goto label_478cdc;
        case 0x478ce0u: goto label_478ce0;
        case 0x478ce4u: goto label_478ce4;
        case 0x478ce8u: goto label_478ce8;
        case 0x478cecu: goto label_478cec;
        case 0x478cf0u: goto label_478cf0;
        case 0x478cf4u: goto label_478cf4;
        case 0x478cf8u: goto label_478cf8;
        case 0x478cfcu: goto label_478cfc;
        case 0x478d00u: goto label_478d00;
        case 0x478d04u: goto label_478d04;
        case 0x478d08u: goto label_478d08;
        case 0x478d0cu: goto label_478d0c;
        case 0x478d10u: goto label_478d10;
        case 0x478d14u: goto label_478d14;
        case 0x478d18u: goto label_478d18;
        case 0x478d1cu: goto label_478d1c;
        case 0x478d20u: goto label_478d20;
        case 0x478d24u: goto label_478d24;
        case 0x478d28u: goto label_478d28;
        case 0x478d2cu: goto label_478d2c;
        case 0x478d30u: goto label_478d30;
        case 0x478d34u: goto label_478d34;
        case 0x478d38u: goto label_478d38;
        case 0x478d3cu: goto label_478d3c;
        case 0x478d40u: goto label_478d40;
        case 0x478d44u: goto label_478d44;
        case 0x478d48u: goto label_478d48;
        case 0x478d4cu: goto label_478d4c;
        case 0x478d50u: goto label_478d50;
        case 0x478d54u: goto label_478d54;
        case 0x478d58u: goto label_478d58;
        case 0x478d5cu: goto label_478d5c;
        case 0x478d60u: goto label_478d60;
        case 0x478d64u: goto label_478d64;
        case 0x478d68u: goto label_478d68;
        case 0x478d6cu: goto label_478d6c;
        case 0x478d70u: goto label_478d70;
        case 0x478d74u: goto label_478d74;
        case 0x478d78u: goto label_478d78;
        case 0x478d7cu: goto label_478d7c;
        case 0x478d80u: goto label_478d80;
        case 0x478d84u: goto label_478d84;
        case 0x478d88u: goto label_478d88;
        case 0x478d8cu: goto label_478d8c;
        case 0x478d90u: goto label_478d90;
        case 0x478d94u: goto label_478d94;
        case 0x478d98u: goto label_478d98;
        case 0x478d9cu: goto label_478d9c;
        case 0x478da0u: goto label_478da0;
        case 0x478da4u: goto label_478da4;
        case 0x478da8u: goto label_478da8;
        case 0x478dacu: goto label_478dac;
        case 0x478db0u: goto label_478db0;
        case 0x478db4u: goto label_478db4;
        case 0x478db8u: goto label_478db8;
        case 0x478dbcu: goto label_478dbc;
        case 0x478dc0u: goto label_478dc0;
        case 0x478dc4u: goto label_478dc4;
        case 0x478dc8u: goto label_478dc8;
        case 0x478dccu: goto label_478dcc;
        case 0x478dd0u: goto label_478dd0;
        case 0x478dd4u: goto label_478dd4;
        case 0x478dd8u: goto label_478dd8;
        case 0x478ddcu: goto label_478ddc;
        case 0x478de0u: goto label_478de0;
        case 0x478de4u: goto label_478de4;
        case 0x478de8u: goto label_478de8;
        case 0x478decu: goto label_478dec;
        case 0x478df0u: goto label_478df0;
        case 0x478df4u: goto label_478df4;
        case 0x478df8u: goto label_478df8;
        case 0x478dfcu: goto label_478dfc;
        case 0x478e00u: goto label_478e00;
        case 0x478e04u: goto label_478e04;
        case 0x478e08u: goto label_478e08;
        case 0x478e0cu: goto label_478e0c;
        case 0x478e10u: goto label_478e10;
        case 0x478e14u: goto label_478e14;
        case 0x478e18u: goto label_478e18;
        case 0x478e1cu: goto label_478e1c;
        case 0x478e20u: goto label_478e20;
        case 0x478e24u: goto label_478e24;
        case 0x478e28u: goto label_478e28;
        case 0x478e2cu: goto label_478e2c;
        case 0x478e30u: goto label_478e30;
        case 0x478e34u: goto label_478e34;
        case 0x478e38u: goto label_478e38;
        case 0x478e3cu: goto label_478e3c;
        case 0x478e40u: goto label_478e40;
        case 0x478e44u: goto label_478e44;
        case 0x478e48u: goto label_478e48;
        case 0x478e4cu: goto label_478e4c;
        case 0x478e50u: goto label_478e50;
        case 0x478e54u: goto label_478e54;
        case 0x478e58u: goto label_478e58;
        case 0x478e5cu: goto label_478e5c;
        case 0x478e60u: goto label_478e60;
        case 0x478e64u: goto label_478e64;
        case 0x478e68u: goto label_478e68;
        case 0x478e6cu: goto label_478e6c;
        case 0x478e70u: goto label_478e70;
        case 0x478e74u: goto label_478e74;
        case 0x478e78u: goto label_478e78;
        case 0x478e7cu: goto label_478e7c;
        case 0x478e80u: goto label_478e80;
        case 0x478e84u: goto label_478e84;
        case 0x478e88u: goto label_478e88;
        case 0x478e8cu: goto label_478e8c;
        case 0x478e90u: goto label_478e90;
        case 0x478e94u: goto label_478e94;
        case 0x478e98u: goto label_478e98;
        case 0x478e9cu: goto label_478e9c;
        case 0x478ea0u: goto label_478ea0;
        case 0x478ea4u: goto label_478ea4;
        case 0x478ea8u: goto label_478ea8;
        case 0x478eacu: goto label_478eac;
        case 0x478eb0u: goto label_478eb0;
        case 0x478eb4u: goto label_478eb4;
        case 0x478eb8u: goto label_478eb8;
        case 0x478ebcu: goto label_478ebc;
        case 0x478ec0u: goto label_478ec0;
        case 0x478ec4u: goto label_478ec4;
        case 0x478ec8u: goto label_478ec8;
        case 0x478eccu: goto label_478ecc;
        case 0x478ed0u: goto label_478ed0;
        case 0x478ed4u: goto label_478ed4;
        case 0x478ed8u: goto label_478ed8;
        case 0x478edcu: goto label_478edc;
        case 0x478ee0u: goto label_478ee0;
        case 0x478ee4u: goto label_478ee4;
        case 0x478ee8u: goto label_478ee8;
        case 0x478eecu: goto label_478eec;
        case 0x478ef0u: goto label_478ef0;
        case 0x478ef4u: goto label_478ef4;
        case 0x478ef8u: goto label_478ef8;
        case 0x478efcu: goto label_478efc;
        case 0x478f00u: goto label_478f00;
        case 0x478f04u: goto label_478f04;
        case 0x478f08u: goto label_478f08;
        case 0x478f0cu: goto label_478f0c;
        case 0x478f10u: goto label_478f10;
        case 0x478f14u: goto label_478f14;
        case 0x478f18u: goto label_478f18;
        case 0x478f1cu: goto label_478f1c;
        case 0x478f20u: goto label_478f20;
        case 0x478f24u: goto label_478f24;
        case 0x478f28u: goto label_478f28;
        case 0x478f2cu: goto label_478f2c;
        case 0x478f30u: goto label_478f30;
        case 0x478f34u: goto label_478f34;
        case 0x478f38u: goto label_478f38;
        case 0x478f3cu: goto label_478f3c;
        case 0x478f40u: goto label_478f40;
        case 0x478f44u: goto label_478f44;
        case 0x478f48u: goto label_478f48;
        case 0x478f4cu: goto label_478f4c;
        case 0x478f50u: goto label_478f50;
        case 0x478f54u: goto label_478f54;
        case 0x478f58u: goto label_478f58;
        case 0x478f5cu: goto label_478f5c;
        case 0x478f60u: goto label_478f60;
        case 0x478f64u: goto label_478f64;
        case 0x478f68u: goto label_478f68;
        case 0x478f6cu: goto label_478f6c;
        case 0x478f70u: goto label_478f70;
        case 0x478f74u: goto label_478f74;
        case 0x478f78u: goto label_478f78;
        case 0x478f7cu: goto label_478f7c;
        case 0x478f80u: goto label_478f80;
        case 0x478f84u: goto label_478f84;
        case 0x478f88u: goto label_478f88;
        case 0x478f8cu: goto label_478f8c;
        case 0x478f90u: goto label_478f90;
        case 0x478f94u: goto label_478f94;
        case 0x478f98u: goto label_478f98;
        case 0x478f9cu: goto label_478f9c;
        case 0x478fa0u: goto label_478fa0;
        case 0x478fa4u: goto label_478fa4;
        case 0x478fa8u: goto label_478fa8;
        case 0x478facu: goto label_478fac;
        case 0x478fb0u: goto label_478fb0;
        case 0x478fb4u: goto label_478fb4;
        case 0x478fb8u: goto label_478fb8;
        case 0x478fbcu: goto label_478fbc;
        case 0x478fc0u: goto label_478fc0;
        case 0x478fc4u: goto label_478fc4;
        case 0x478fc8u: goto label_478fc8;
        case 0x478fccu: goto label_478fcc;
        case 0x478fd0u: goto label_478fd0;
        case 0x478fd4u: goto label_478fd4;
        case 0x478fd8u: goto label_478fd8;
        case 0x478fdcu: goto label_478fdc;
        case 0x478fe0u: goto label_478fe0;
        case 0x478fe4u: goto label_478fe4;
        case 0x478fe8u: goto label_478fe8;
        case 0x478fecu: goto label_478fec;
        case 0x478ff0u: goto label_478ff0;
        case 0x478ff4u: goto label_478ff4;
        case 0x478ff8u: goto label_478ff8;
        case 0x478ffcu: goto label_478ffc;
        case 0x479000u: goto label_479000;
        case 0x479004u: goto label_479004;
        case 0x479008u: goto label_479008;
        case 0x47900cu: goto label_47900c;
        case 0x479010u: goto label_479010;
        case 0x479014u: goto label_479014;
        case 0x479018u: goto label_479018;
        case 0x47901cu: goto label_47901c;
        case 0x479020u: goto label_479020;
        case 0x479024u: goto label_479024;
        case 0x479028u: goto label_479028;
        case 0x47902cu: goto label_47902c;
        case 0x479030u: goto label_479030;
        case 0x479034u: goto label_479034;
        case 0x479038u: goto label_479038;
        case 0x47903cu: goto label_47903c;
        case 0x479040u: goto label_479040;
        case 0x479044u: goto label_479044;
        case 0x479048u: goto label_479048;
        case 0x47904cu: goto label_47904c;
        case 0x479050u: goto label_479050;
        case 0x479054u: goto label_479054;
        case 0x479058u: goto label_479058;
        case 0x47905cu: goto label_47905c;
        case 0x479060u: goto label_479060;
        case 0x479064u: goto label_479064;
        case 0x479068u: goto label_479068;
        case 0x47906cu: goto label_47906c;
        case 0x479070u: goto label_479070;
        case 0x479074u: goto label_479074;
        case 0x479078u: goto label_479078;
        case 0x47907cu: goto label_47907c;
        case 0x479080u: goto label_479080;
        case 0x479084u: goto label_479084;
        case 0x479088u: goto label_479088;
        case 0x47908cu: goto label_47908c;
        case 0x479090u: goto label_479090;
        case 0x479094u: goto label_479094;
        case 0x479098u: goto label_479098;
        case 0x47909cu: goto label_47909c;
        case 0x4790a0u: goto label_4790a0;
        case 0x4790a4u: goto label_4790a4;
        case 0x4790a8u: goto label_4790a8;
        case 0x4790acu: goto label_4790ac;
        case 0x4790b0u: goto label_4790b0;
        case 0x4790b4u: goto label_4790b4;
        case 0x4790b8u: goto label_4790b8;
        case 0x4790bcu: goto label_4790bc;
        case 0x4790c0u: goto label_4790c0;
        case 0x4790c4u: goto label_4790c4;
        case 0x4790c8u: goto label_4790c8;
        case 0x4790ccu: goto label_4790cc;
        case 0x4790d0u: goto label_4790d0;
        case 0x4790d4u: goto label_4790d4;
        case 0x4790d8u: goto label_4790d8;
        case 0x4790dcu: goto label_4790dc;
        case 0x4790e0u: goto label_4790e0;
        case 0x4790e4u: goto label_4790e4;
        case 0x4790e8u: goto label_4790e8;
        case 0x4790ecu: goto label_4790ec;
        case 0x4790f0u: goto label_4790f0;
        case 0x4790f4u: goto label_4790f4;
        case 0x4790f8u: goto label_4790f8;
        case 0x4790fcu: goto label_4790fc;
        case 0x479100u: goto label_479100;
        case 0x479104u: goto label_479104;
        case 0x479108u: goto label_479108;
        case 0x47910cu: goto label_47910c;
        case 0x479110u: goto label_479110;
        case 0x479114u: goto label_479114;
        case 0x479118u: goto label_479118;
        case 0x47911cu: goto label_47911c;
        case 0x479120u: goto label_479120;
        case 0x479124u: goto label_479124;
        case 0x479128u: goto label_479128;
        case 0x47912cu: goto label_47912c;
        case 0x479130u: goto label_479130;
        case 0x479134u: goto label_479134;
        case 0x479138u: goto label_479138;
        case 0x47913cu: goto label_47913c;
        case 0x479140u: goto label_479140;
        case 0x479144u: goto label_479144;
        case 0x479148u: goto label_479148;
        case 0x47914cu: goto label_47914c;
        case 0x479150u: goto label_479150;
        case 0x479154u: goto label_479154;
        case 0x479158u: goto label_479158;
        case 0x47915cu: goto label_47915c;
        case 0x479160u: goto label_479160;
        case 0x479164u: goto label_479164;
        case 0x479168u: goto label_479168;
        case 0x47916cu: goto label_47916c;
        case 0x479170u: goto label_479170;
        case 0x479174u: goto label_479174;
        case 0x479178u: goto label_479178;
        case 0x47917cu: goto label_47917c;
        case 0x479180u: goto label_479180;
        case 0x479184u: goto label_479184;
        case 0x479188u: goto label_479188;
        case 0x47918cu: goto label_47918c;
        case 0x479190u: goto label_479190;
        case 0x479194u: goto label_479194;
        case 0x479198u: goto label_479198;
        case 0x47919cu: goto label_47919c;
        case 0x4791a0u: goto label_4791a0;
        case 0x4791a4u: goto label_4791a4;
        case 0x4791a8u: goto label_4791a8;
        case 0x4791acu: goto label_4791ac;
        case 0x4791b0u: goto label_4791b0;
        case 0x4791b4u: goto label_4791b4;
        case 0x4791b8u: goto label_4791b8;
        case 0x4791bcu: goto label_4791bc;
        case 0x4791c0u: goto label_4791c0;
        case 0x4791c4u: goto label_4791c4;
        case 0x4791c8u: goto label_4791c8;
        case 0x4791ccu: goto label_4791cc;
        case 0x4791d0u: goto label_4791d0;
        case 0x4791d4u: goto label_4791d4;
        case 0x4791d8u: goto label_4791d8;
        case 0x4791dcu: goto label_4791dc;
        case 0x4791e0u: goto label_4791e0;
        case 0x4791e4u: goto label_4791e4;
        case 0x4791e8u: goto label_4791e8;
        case 0x4791ecu: goto label_4791ec;
        case 0x4791f0u: goto label_4791f0;
        case 0x4791f4u: goto label_4791f4;
        case 0x4791f8u: goto label_4791f8;
        case 0x4791fcu: goto label_4791fc;
        case 0x479200u: goto label_479200;
        case 0x479204u: goto label_479204;
        case 0x479208u: goto label_479208;
        case 0x47920cu: goto label_47920c;
        case 0x479210u: goto label_479210;
        case 0x479214u: goto label_479214;
        case 0x479218u: goto label_479218;
        case 0x47921cu: goto label_47921c;
        case 0x479220u: goto label_479220;
        case 0x479224u: goto label_479224;
        case 0x479228u: goto label_479228;
        case 0x47922cu: goto label_47922c;
        case 0x479230u: goto label_479230;
        case 0x479234u: goto label_479234;
        case 0x479238u: goto label_479238;
        case 0x47923cu: goto label_47923c;
        case 0x479240u: goto label_479240;
        case 0x479244u: goto label_479244;
        case 0x479248u: goto label_479248;
        case 0x47924cu: goto label_47924c;
        case 0x479250u: goto label_479250;
        case 0x479254u: goto label_479254;
        case 0x479258u: goto label_479258;
        case 0x47925cu: goto label_47925c;
        case 0x479260u: goto label_479260;
        case 0x479264u: goto label_479264;
        case 0x479268u: goto label_479268;
        case 0x47926cu: goto label_47926c;
        case 0x479270u: goto label_479270;
        case 0x479274u: goto label_479274;
        case 0x479278u: goto label_479278;
        case 0x47927cu: goto label_47927c;
        case 0x479280u: goto label_479280;
        case 0x479284u: goto label_479284;
        case 0x479288u: goto label_479288;
        case 0x47928cu: goto label_47928c;
        case 0x479290u: goto label_479290;
        case 0x479294u: goto label_479294;
        case 0x479298u: goto label_479298;
        case 0x47929cu: goto label_47929c;
        case 0x4792a0u: goto label_4792a0;
        case 0x4792a4u: goto label_4792a4;
        case 0x4792a8u: goto label_4792a8;
        case 0x4792acu: goto label_4792ac;
        case 0x4792b0u: goto label_4792b0;
        case 0x4792b4u: goto label_4792b4;
        case 0x4792b8u: goto label_4792b8;
        case 0x4792bcu: goto label_4792bc;
        case 0x4792c0u: goto label_4792c0;
        case 0x4792c4u: goto label_4792c4;
        case 0x4792c8u: goto label_4792c8;
        case 0x4792ccu: goto label_4792cc;
        case 0x4792d0u: goto label_4792d0;
        case 0x4792d4u: goto label_4792d4;
        case 0x4792d8u: goto label_4792d8;
        case 0x4792dcu: goto label_4792dc;
        case 0x4792e0u: goto label_4792e0;
        case 0x4792e4u: goto label_4792e4;
        case 0x4792e8u: goto label_4792e8;
        case 0x4792ecu: goto label_4792ec;
        case 0x4792f0u: goto label_4792f0;
        case 0x4792f4u: goto label_4792f4;
        case 0x4792f8u: goto label_4792f8;
        case 0x4792fcu: goto label_4792fc;
        case 0x479300u: goto label_479300;
        case 0x479304u: goto label_479304;
        case 0x479308u: goto label_479308;
        case 0x47930cu: goto label_47930c;
        case 0x479310u: goto label_479310;
        case 0x479314u: goto label_479314;
        case 0x479318u: goto label_479318;
        case 0x47931cu: goto label_47931c;
        case 0x479320u: goto label_479320;
        case 0x479324u: goto label_479324;
        case 0x479328u: goto label_479328;
        case 0x47932cu: goto label_47932c;
        case 0x479330u: goto label_479330;
        case 0x479334u: goto label_479334;
        case 0x479338u: goto label_479338;
        case 0x47933cu: goto label_47933c;
        case 0x479340u: goto label_479340;
        case 0x479344u: goto label_479344;
        case 0x479348u: goto label_479348;
        case 0x47934cu: goto label_47934c;
        case 0x479350u: goto label_479350;
        case 0x479354u: goto label_479354;
        case 0x479358u: goto label_479358;
        case 0x47935cu: goto label_47935c;
        case 0x479360u: goto label_479360;
        case 0x479364u: goto label_479364;
        case 0x479368u: goto label_479368;
        case 0x47936cu: goto label_47936c;
        case 0x479370u: goto label_479370;
        case 0x479374u: goto label_479374;
        case 0x479378u: goto label_479378;
        case 0x47937cu: goto label_47937c;
        case 0x479380u: goto label_479380;
        case 0x479384u: goto label_479384;
        case 0x479388u: goto label_479388;
        case 0x47938cu: goto label_47938c;
        case 0x479390u: goto label_479390;
        case 0x479394u: goto label_479394;
        case 0x479398u: goto label_479398;
        case 0x47939cu: goto label_47939c;
        case 0x4793a0u: goto label_4793a0;
        case 0x4793a4u: goto label_4793a4;
        case 0x4793a8u: goto label_4793a8;
        case 0x4793acu: goto label_4793ac;
        case 0x4793b0u: goto label_4793b0;
        case 0x4793b4u: goto label_4793b4;
        case 0x4793b8u: goto label_4793b8;
        case 0x4793bcu: goto label_4793bc;
        default: break;
    }

    ctx->pc = 0x478730u;

label_478730:
    // 0x478730: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x478730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_478734:
    // 0x478734: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x478734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_478738:
    // 0x478738: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x478738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_47873c:
    // 0x47873c: 0xc460f314  lwc1        $f0, -0xCEC($v1)
    ctx->pc = 0x47873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478740:
    // 0x478740: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x478740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_478744:
    // 0x478744: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x478744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_478748:
    // 0x478748: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x478748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_47874c:
    // 0x47874c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x47874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_478750:
    // 0x478750: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x478750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_478754:
    // 0x478754: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x478754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_478758:
    // 0x478758: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x478758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47875c:
    // 0x47875c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_478760:
    // 0x478760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x478760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_478764:
    // 0x478764: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x478764u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_478768:
    // 0x478768: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x478768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_47876c:
    // 0x47876c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x47876cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_478770:
    // 0x478770: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x478770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_478774:
    // 0x478774: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x478774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_478778:
    // 0x478778: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x478778u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47877c:
    // 0x47877c: 0x450101a0  bc1t        . + 4 + (0x1A0 << 2)
label_478780:
    if (ctx->pc == 0x478780u) {
        ctx->pc = 0x478780u;
            // 0x478780: 0x2610f300  addiu       $s0, $s0, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963968));
        ctx->pc = 0x478784u;
        goto label_478784;
    }
    ctx->pc = 0x47877Cu;
    {
        const bool branch_taken_0x47877c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x478780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47877Cu;
            // 0x478780: 0x2610f300  addiu       $s0, $s0, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47877c) {
            ctx->pc = 0x478E00u;
            goto label_478e00;
        }
    }
    ctx->pc = 0x478784u;
label_478784:
    // 0x478784: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x478784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
label_478788:
    // 0x478788: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x478788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_47878c:
    // 0x47878c: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x47878cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_478790:
    // 0x478790: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x478790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_478794:
    // 0x478794: 0x46041882  mul.s       $f2, $f3, $f4
    ctx->pc = 0x478794u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_478798:
    // 0x478798: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x478798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_47879c:
    // 0x47879c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x47879cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4787a0:
    // 0x4787a0: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x4787a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_4787a4:
    // 0x4787a4: 0x2463ab70  addiu       $v1, $v1, -0x5490
    ctx->pc = 0x4787a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945648));
label_4787a8:
    // 0x4787a8: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x4787a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_4787ac:
    // 0x4787ac: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x4787acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_4787b0:
    // 0x4787b0: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x4787b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_4787b4:
    // 0x4787b4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4787b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_4787b8:
    // 0x4787b8: 0x26f7a6e0  addiu       $s7, $s7, -0x5920
    ctx->pc = 0x4787b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944480));
label_4787bc:
    // 0x4787bc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x4787bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4787c0:
    // 0x4787c0: 0x24632110  addiu       $v1, $v1, 0x2110
    ctx->pc = 0x4787c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8464));
label_4787c4:
    // 0x4787c4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x4787c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_4787c8:
    // 0x4787c8: 0x2631210c  addiu       $s1, $s1, 0x210C
    ctx->pc = 0x4787c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8460));
label_4787cc:
    // 0x4787cc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4787ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4787d0:
    // 0x4787d0: 0x26d62100  addiu       $s6, $s6, 0x2100
    ctx->pc = 0x4787d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8448));
label_4787d4:
    // 0x4787d4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4787d4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_4787d8:
    // 0x4787d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4787d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4787dc:
    // 0x4787dc: 0x0  nop
    ctx->pc = 0x4787dcu;
    // NOP
label_4787e0:
    // 0x4787e0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x4787e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_4787e4:
    // 0x4787e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4787e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4787e8:
    // 0x4787e8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4787ec:
    if (ctx->pc == 0x4787ECu) {
        ctx->pc = 0x4787ECu;
            // 0x4787ec: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4787F0u;
        goto label_4787f0;
    }
    ctx->pc = 0x4787E8u;
    {
        const bool branch_taken_0x4787e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4787e8) {
            ctx->pc = 0x4787ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4787E8u;
            // 0x4787ec: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x478800u;
            goto label_478800;
        }
    }
    ctx->pc = 0x4787F0u;
label_4787f0:
    // 0x4787f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4787f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4787f4:
    // 0x4787f4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4787f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4787f8:
    // 0x4787f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4787fc:
    if (ctx->pc == 0x4787FCu) {
        ctx->pc = 0x4787FCu;
            // 0x4787fc: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x478800u;
        goto label_478800;
    }
    ctx->pc = 0x4787F8u;
    {
        const bool branch_taken_0x4787f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4787FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4787F8u;
            // 0x4787fc: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4787f8) {
            ctx->pc = 0x478818u;
            goto label_478818;
        }
    }
    ctx->pc = 0x478800u;
label_478800:
    // 0x478800: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x478800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_478804:
    // 0x478804: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478808:
    // 0x478808: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x478808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_47880c:
    // 0x47880c: 0x0  nop
    ctx->pc = 0x47880cu;
    // NOP
label_478810:
    // 0x478810: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x478810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_478814:
    // 0x478814: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x478814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_478818:
    // 0x478818: 0x8607002c  lh          $a3, 0x2C($s0)
    ctx->pc = 0x478818u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_47881c:
    // 0x47881c: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x47881cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_478820:
    // 0x478820: 0x84a6001c  lh          $a2, 0x1C($a1)
    ctx->pc = 0x478820u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
label_478824:
    // 0x478824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x478824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478828:
    // 0x478828: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x478828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_47882c:
    // 0x47882c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x47882cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_478830:
    // 0x478830: 0x84be001e  lh          $fp, 0x1E($a1)
    ctx->pc = 0x478830u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
label_478834:
    // 0x478834: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x478834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_478838:
    // 0x478838: 0x8cb40020  lw          $s4, 0x20($a1)
    ctx->pc = 0x478838u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_47883c:
    // 0x47883c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x47883cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_478840:
    // 0x478840: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x478840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_478844:
    // 0x478844: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x478844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_478848:
    // 0x478848: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x478848u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47884c:
    // 0x47884c: 0x0  nop
    ctx->pc = 0x47884cu;
    // NOP
label_478850:
    // 0x478850: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x478850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_478854:
    // 0x478854: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x478854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_478858:
    // 0x478858: 0x4604101d  msub.s      $f0, $f2, $f4
    ctx->pc = 0x478858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_47885c:
    // 0x47885c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47885cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478860:
    // 0x478860: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x478860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_478864:
    // 0x478864: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_478868:
    if (ctx->pc == 0x478868u) {
        ctx->pc = 0x478868u;
            // 0x478868: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47886Cu;
        goto label_47886c;
    }
    ctx->pc = 0x478864u;
    {
        const bool branch_taken_0x478864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x478868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478864u;
            // 0x478868: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478864) {
            ctx->pc = 0x4788CCu;
            goto label_4788cc;
        }
    }
    ctx->pc = 0x47886Cu;
label_47886c:
    // 0x47886c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x47886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478870:
    // 0x478870: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x478870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_478874:
    // 0x478874: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x478874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_478878:
    // 0x478878: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x478878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47887c:
    // 0x47887c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x47887cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_478880:
    // 0x478880: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x478880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_478884:
    // 0x478884: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x478884u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_478888:
    // 0x478888: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x478888u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_47888c:
    // 0x47888c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47888cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478890:
    // 0x478890: 0x0  nop
    ctx->pc = 0x478890u;
    // NOP
label_478894:
    // 0x478894: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x478894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_478898:
    // 0x478898: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_47889c:
    if (ctx->pc == 0x47889Cu) {
        ctx->pc = 0x47889Cu;
            // 0x47889c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4788A0u;
        goto label_4788a0;
    }
    ctx->pc = 0x478898u;
    {
        const bool branch_taken_0x478898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x478898) {
            ctx->pc = 0x47889Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x478898u;
            // 0x47889c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4788B0u;
            goto label_4788b0;
        }
    }
    ctx->pc = 0x4788A0u;
label_4788a0:
    // 0x4788a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4788a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4788a4:
    // 0x4788a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4788a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4788a8:
    // 0x4788a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4788ac:
    if (ctx->pc == 0x4788ACu) {
        ctx->pc = 0x4788ACu;
            // 0x4788ac: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4788B0u;
        goto label_4788b0;
    }
    ctx->pc = 0x4788A8u;
    {
        const bool branch_taken_0x4788a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4788ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4788A8u;
            // 0x4788ac: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4788a8) {
            ctx->pc = 0x4788C8u;
            goto label_4788c8;
        }
    }
    ctx->pc = 0x4788B0u;
label_4788b0:
    // 0x4788b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4788b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4788b4:
    // 0x4788b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4788b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4788b8:
    // 0x4788b8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4788b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4788bc:
    // 0x4788bc: 0x0  nop
    ctx->pc = 0x4788bcu;
    // NOP
label_4788c0:
    // 0x4788c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4788c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4788c4:
    // 0x4788c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4788c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4788c8:
    // 0x4788c8: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x4788c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4788cc:
    // 0x4788cc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4788ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4788d0:
    // 0x4788d0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x4788d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_4788d4:
    // 0x4788d4: 0xc4600870  lwc1        $f0, 0x870($v1)
    ctx->pc = 0x4788d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4788d8:
    // 0x4788d8: 0x2e810004  sltiu       $at, $s4, 0x4
    ctx->pc = 0x4788d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4788dc:
    // 0x4788dc: 0xc4810874  lwc1        $f1, 0x874($a0)
    ctx->pc = 0x4788dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4788e0:
    // 0x4788e0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4788e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4788e4:
    // 0x4788e4: 0xc4620878  lwc1        $f2, 0x878($v1)
    ctx->pc = 0x4788e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4788e8:
    // 0x4788e8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x4788e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_4788ec:
    // 0x4788ec: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x4788ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_4788f0:
    // 0x4788f0: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x4788f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_4788f4:
    // 0x4788f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4788f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4788f8:
    // 0x4788f8: 0xc4610880  lwc1        $f1, 0x880($v1)
    ctx->pc = 0x4788f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4788fc:
    // 0x4788fc: 0xc480087c  lwc1        $f0, 0x87C($a0)
    ctx->pc = 0x4788fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478900:
    // 0x478900: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x478900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_478904:
    // 0x478904: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x478904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_478908:
    // 0x478908: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x478908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_47890c:
    // 0x47890c: 0xc4600884  lwc1        $f0, 0x884($v1)
    ctx->pc = 0x47890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478910:
    // 0x478910: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x478910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_478914:
    // 0x478914: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_478918:
    if (ctx->pc == 0x478918u) {
        ctx->pc = 0x478918u;
            // 0x478918: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x47891Cu;
        goto label_47891c;
    }
    ctx->pc = 0x478914u;
    {
        const bool branch_taken_0x478914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x478918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478914u;
            // 0x478918: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x478914) {
            ctx->pc = 0x478A6Cu;
            goto label_478a6c;
        }
    }
    ctx->pc = 0x47891Cu;
label_47891c:
    // 0x47891c: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x47891cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_478920:
    // 0x478920: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x478920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_478924:
    // 0x478924: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x478924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_478928:
    // 0x478928: 0xc6140030  lwc1        $f20, 0x30($s0)
    ctx->pc = 0x478928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47892c:
    // 0x47892c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478930:
    // 0x478930: 0xc0506ac  jal         func_141AB0
label_478934:
    if (ctx->pc == 0x478934u) {
        ctx->pc = 0x478934u;
            // 0x478934: 0x3c39821  addu        $s3, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->pc = 0x478938u;
        goto label_478938;
    }
    ctx->pc = 0x478930u;
    SET_GPR_U32(ctx, 31, 0x478938u);
    ctx->pc = 0x478934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478930u;
            // 0x478934: 0x3c39821  addu        $s3, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478938u; }
        if (ctx->pc != 0x478938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478938u; }
        if (ctx->pc != 0x478938u) { return; }
    }
    ctx->pc = 0x478938u;
label_478938:
    // 0x478938: 0x26830009  addiu       $v1, $s4, 0x9
    ctx->pc = 0x478938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
label_47893c:
    // 0x47893c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47893cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478940:
    // 0x478940: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x478940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_478944:
    // 0x478944: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478948:
    // 0x478948: 0x2e38021  addu        $s0, $s7, $v1
    ctx->pc = 0x478948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_47894c:
    // 0x47894c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47894cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478950:
    // 0x478950: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x478950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478954:
    // 0x478954: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x478954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478958:
    // 0x478958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47895c:
    // 0x47895c: 0x46140d82  mul.s       $f22, $f1, $f20
    ctx->pc = 0x47895cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_478960:
    // 0x478960: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x478960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_478964:
    // 0x478964: 0x320f809  jalr        $t9
label_478968:
    if (ctx->pc == 0x478968u) {
        ctx->pc = 0x478968u;
            // 0x478968: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x47896Cu;
        goto label_47896c;
    }
    ctx->pc = 0x478964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47896Cu);
        ctx->pc = 0x478968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478964u;
            // 0x478968: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47896Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47896Cu; }
            if (ctx->pc != 0x47896Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47896Cu;
label_47896c:
    // 0x47896c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x47896cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478970:
    // 0x478970: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x478970u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_478974:
    // 0x478974: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478978:
    // 0x478978: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x478978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_47897c:
    // 0x47897c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47897cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_478980:
    // 0x478980: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x478980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_478984:
    // 0x478984: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x478984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_478988:
    // 0x478988: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47898c:
    // 0x47898c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_478990:
    // 0x478990: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x478990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_478994:
    // 0x478994: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x478994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_478998:
    // 0x478998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x478998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47899c:
    // 0x47899c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x47899cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4789a0:
    // 0x4789a0: 0x0  nop
    ctx->pc = 0x4789a0u;
    // NOP
label_4789a4:
    // 0x4789a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4789a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4789a8:
    // 0x4789a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4789a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4789ac:
    // 0x4789ac: 0x0  nop
    ctx->pc = 0x4789acu;
    // NOP
label_4789b0:
    // 0x4789b0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4789b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4789b4:
    // 0x4789b4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4789b4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4789b8:
    // 0x4789b8: 0x0  nop
    ctx->pc = 0x4789b8u;
    // NOP
label_4789bc:
    // 0x4789bc: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4789bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4789c0:
    // 0x4789c0: 0x46157b41  sub.s       $f13, $f15, $f21
    ctx->pc = 0x4789c0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[21]);
label_4789c4:
    // 0x4789c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4789c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4789c8:
    // 0x4789c8: 0xc0bc284  jal         func_2F0A10
label_4789cc:
    if (ctx->pc == 0x4789CCu) {
        ctx->pc = 0x4789CCu;
            // 0x4789cc: 0x46166380  add.s       $f14, $f12, $f22 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
        ctx->pc = 0x4789D0u;
        goto label_4789d0;
    }
    ctx->pc = 0x4789C8u;
    SET_GPR_U32(ctx, 31, 0x4789D0u);
    ctx->pc = 0x4789CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4789C8u;
            // 0x4789cc: 0x46166380  add.s       $f14, $f12, $f22 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4789D0u; }
        if (ctx->pc != 0x4789D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4789D0u; }
        if (ctx->pc != 0x4789D0u) { return; }
    }
    ctx->pc = 0x4789D0u;
label_4789d0:
    // 0x4789d0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x4789d0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4789d4:
    // 0x4789d4: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x4789d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_4789d8:
    // 0x4789d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4789d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4789dc:
    // 0x4789dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4789dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4789e0:
    // 0x4789e0: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x4789e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4789e4:
    // 0x4789e4: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4789e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4789e8:
    // 0x4789e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4789e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4789ec:
    // 0x4789ec: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4789ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4789f0:
    // 0x4789f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4789f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4789f4:
    // 0x4789f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4789f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4789f8:
    // 0x4789f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4789f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4789fc:
    // 0x4789fc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x4789fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_478a00:
    // 0x478a00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478a04:
    // 0x478a04: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478a08:
    // 0x478a08: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x478a08u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478a0c:
    // 0x478a0c: 0x0  nop
    ctx->pc = 0x478a0cu;
    // NOP
label_478a10:
    // 0x478a10: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478a14:
    // 0x478a14: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x478a14u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478a18:
    // 0x478a18: 0x0  nop
    ctx->pc = 0x478a18u;
    // NOP
label_478a1c:
    // 0x478a1c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478a20:
    // 0x478a20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478a24:
    // 0x478a24: 0x0  nop
    ctx->pc = 0x478a24u;
    // NOP
label_478a28:
    // 0x478a28: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478a2c:
    // 0x478a2c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x478a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478a30:
    // 0x478a30: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x478a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478a34:
    // 0x478a34: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x478a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478a38:
    // 0x478a38: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x478a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_478a3c:
    // 0x478a3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x478a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_478a40:
    // 0x478a40: 0x46007b41  sub.s       $f13, $f15, $f0
    ctx->pc = 0x478a40u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
label_478a44:
    // 0x478a44: 0xc0bc284  jal         func_2F0A10
label_478a48:
    if (ctx->pc == 0x478A48u) {
        ctx->pc = 0x478A48u;
            // 0x478a48: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x478A4Cu;
        goto label_478a4c;
    }
    ctx->pc = 0x478A44u;
    SET_GPR_U32(ctx, 31, 0x478A4Cu);
    ctx->pc = 0x478A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478A44u;
            // 0x478a48: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478A4Cu; }
        if (ctx->pc != 0x478A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478A4Cu; }
        if (ctx->pc != 0x478A4Cu) { return; }
    }
    ctx->pc = 0x478A4Cu;
label_478a4c:
    // 0x478a4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478a50:
    // 0x478a50: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478a54:
    // 0x478a54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478a58:
    // 0x478a58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x478a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_478a5c:
    // 0x478a5c: 0x320f809  jalr        $t9
label_478a60:
    if (ctx->pc == 0x478A60u) {
        ctx->pc = 0x478A64u;
        goto label_478a64;
    }
    ctx->pc = 0x478A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478A64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x478A64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478A64u; }
            if (ctx->pc != 0x478A64u) { return; }
        }
        }
    }
    ctx->pc = 0x478A64u;
label_478a64:
    // 0x478a64: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_478a68:
    if (ctx->pc == 0x478A68u) {
        ctx->pc = 0x478A68u;
            // 0x478a68: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x478A6Cu;
        goto label_478a6c;
    }
    ctx->pc = 0x478A64u;
    {
        const bool branch_taken_0x478a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478A64u;
            // 0x478a68: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478a64) {
            ctx->pc = 0x478E04u;
            goto label_478e04;
        }
    }
    ctx->pc = 0x478A6Cu;
label_478a6c:
    // 0x478a6c: 0x2e8103e8  sltiu       $at, $s4, 0x3E8
    ctx->pc = 0x478a6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
label_478a70:
    // 0x478a70: 0x50200067  beql        $at, $zero, . + 4 + (0x67 << 2)
label_478a74:
    if (ctx->pc == 0x478A74u) {
        ctx->pc = 0x478A74u;
            // 0x478a74: 0x3c01000f  lui         $at, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
        ctx->pc = 0x478A78u;
        goto label_478a78;
    }
    ctx->pc = 0x478A70u;
    {
        const bool branch_taken_0x478a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x478a70) {
            ctx->pc = 0x478A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x478A70u;
            // 0x478a74: 0x3c01000f  lui         $at, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x478C10u;
            goto label_478c10;
        }
    }
    ctx->pc = 0x478A78u;
label_478a78:
    // 0x478a78: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x478a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_478a7c:
    // 0x478a7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x478a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_478a80:
    // 0x478a80: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x478a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_478a84:
    // 0x478a84: 0xc6140034  lwc1        $f20, 0x34($s0)
    ctx->pc = 0x478a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_478a88:
    // 0x478a88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x478a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478a8c:
    // 0x478a8c: 0xc0506ac  jal         func_141AB0
label_478a90:
    if (ctx->pc == 0x478A90u) {
        ctx->pc = 0x478A90u;
            // 0x478a90: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->pc = 0x478A94u;
        goto label_478a94;
    }
    ctx->pc = 0x478A8Cu;
    SET_GPR_U32(ctx, 31, 0x478A94u);
    ctx->pc = 0x478A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478A8Cu;
            // 0x478a90: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478A94u; }
        if (ctx->pc != 0x478A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478A94u; }
        if (ctx->pc != 0x478A94u) { return; }
    }
    ctx->pc = 0x478A94u;
label_478a94:
    // 0x478a94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478a98:
    // 0x478a98: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478a9c:
    // 0x478a9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478aa0:
    // 0x478aa0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x478aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_478aa4:
    // 0x478aa4: 0x320f809  jalr        $t9
label_478aa8:
    if (ctx->pc == 0x478AA8u) {
        ctx->pc = 0x478AA8u;
            // 0x478aa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x478AACu;
        goto label_478aac;
    }
    ctx->pc = 0x478AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478AACu);
        ctx->pc = 0x478AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478AA4u;
            // 0x478aa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x478AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478AACu; }
            if (ctx->pc != 0x478AACu) { return; }
        }
        }
    }
    ctx->pc = 0x478AACu;
label_478aac:
    // 0x478aac: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x478aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_478ab0:
    // 0x478ab0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x478ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_478ab4:
    // 0x478ab4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x478ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478ab8:
    // 0x478ab8: 0x27b000ec  addiu       $s0, $sp, 0xEC
    ctx->pc = 0x478ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_478abc:
    // 0x478abc: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x478abcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_478ac0:
    // 0x478ac0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x478ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_478ac4:
    // 0x478ac4: 0x3a420005  xori        $v0, $s2, 0x5
    ctx->pc = 0x478ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)5);
label_478ac8:
    // 0x478ac8: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x478ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_478acc:
    // 0x478acc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x478accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_478ad0:
    // 0x478ad0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x478ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_478ad4:
    // 0x478ad4: 0x284001b  divu        $zero, $s4, $a0
    ctx->pc = 0x478ad4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_478ad8:
    // 0x478ad8: 0x2812  mflo        $a1
    ctx->pc = 0x478ad8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_478adc:
    // 0x478adc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x478adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_478ae0:
    // 0x478ae0: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x478ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_478ae4:
    // 0x478ae4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x478ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_478ae8:
    // 0x478ae8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_478aec:
    if (ctx->pc == 0x478AECu) {
        ctx->pc = 0x478AECu;
            // 0x478aec: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->pc = 0x478AF0u;
        goto label_478af0;
    }
    ctx->pc = 0x478AE8u;
    {
        const bool branch_taken_0x478ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478AE8u;
            // 0x478aec: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478ae8) {
            ctx->pc = 0x478B78u;
            goto label_478b78;
        }
    }
    ctx->pc = 0x478AF0u;
label_478af0:
    // 0x478af0: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x478af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_478af4:
    // 0x478af4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x478af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_478af8:
    // 0x478af8: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x478af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_478afc:
    // 0x478afc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x478afcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_478b00:
    // 0x478b00: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x478b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478b04:
    // 0x478b04: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x478b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_478b08:
    // 0x478b08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x478b08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478b0c:
    // 0x478b0c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x478b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_478b10:
    // 0x478b10: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478b14:
    // 0x478b14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478b18:
    // 0x478b18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x478b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478b1c:
    // 0x478b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478b20:
    // 0x478b20: 0x0  nop
    ctx->pc = 0x478b20u;
    // NOP
label_478b24:
    // 0x478b24: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478b28:
    // 0x478b28: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x478b28u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478b2c:
    // 0x478b2c: 0x0  nop
    ctx->pc = 0x478b2cu;
    // NOP
label_478b30:
    // 0x478b30: 0x46140d42  mul.s       $f21, $f1, $f20
    ctx->pc = 0x478b30u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_478b34:
    // 0x478b34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478b38:
    // 0x478b38: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x478b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478b3c:
    // 0x478b3c: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x478b3cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478b40:
    // 0x478b40: 0x0  nop
    ctx->pc = 0x478b40u;
    // NOP
label_478b44:
    // 0x478b44: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478b48:
    // 0x478b48: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x478b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_478b4c:
    // 0x478b4c: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x478b4cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_478b50:
    // 0x478b50: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x478b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478b54:
    // 0x478b54: 0xc0bc284  jal         func_2F0A10
label_478b58:
    if (ctx->pc == 0x478B58u) {
        ctx->pc = 0x478B58u;
            // 0x478b58: 0x46156380  add.s       $f14, $f12, $f21 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->pc = 0x478B5Cu;
        goto label_478b5c;
    }
    ctx->pc = 0x478B54u;
    SET_GPR_U32(ctx, 31, 0x478B5Cu);
    ctx->pc = 0x478B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478B54u;
            // 0x478b58: 0x46156380  add.s       $f14, $f12, $f21 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478B5Cu; }
        if (ctx->pc != 0x478B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478B5Cu; }
        if (ctx->pc != 0x478B5Cu) { return; }
    }
    ctx->pc = 0x478B5Cu;
label_478b5c:
    // 0x478b5c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x478b5cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478b60:
    // 0x478b60: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x478b60u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_478b64:
    // 0x478b64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x478b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_478b68:
    // 0x478b68: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x478b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_478b6c:
    // 0x478b6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478b6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478b70:
    // 0x478b70: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x478b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_478b74:
    // 0x478b74: 0x0  nop
    ctx->pc = 0x478b74u;
    // NOP
label_478b78:
    // 0x478b78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x478b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_478b7c:
    // 0x478b7c: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x478b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_478b80:
    // 0x478b80: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_478b84:
    if (ctx->pc == 0x478B84u) {
        ctx->pc = 0x478B84u;
            // 0x478b84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x478B88u;
        goto label_478b88;
    }
    ctx->pc = 0x478B80u;
    {
        const bool branch_taken_0x478b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478B80u;
            // 0x478b84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478b80) {
            ctx->pc = 0x478AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_478ac0;
        }
    }
    ctx->pc = 0x478B88u;
label_478b88:
    // 0x478b88: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x478b88u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478b8c:
    // 0x478b8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x478b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_478b90:
    // 0x478b90: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478b94:
    // 0x478b94: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x478b94u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_478b98:
    // 0x478b98: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x478b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_478b9c:
    // 0x478b9c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x478b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_478ba0:
    // 0x478ba0: 0x26e50100  addiu       $a1, $s7, 0x100
    ctx->pc = 0x478ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
label_478ba4:
    // 0x478ba4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478ba8:
    // 0x478ba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x478ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478bac:
    // 0x478bac: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x478bacu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478bb0:
    // 0x478bb0: 0x0  nop
    ctx->pc = 0x478bb0u;
    // NOP
label_478bb4:
    // 0x478bb4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478bb8:
    // 0x478bb8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x478bb8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478bbc:
    // 0x478bbc: 0x0  nop
    ctx->pc = 0x478bbcu;
    // NOP
label_478bc0:
    // 0x478bc0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478bc4:
    // 0x478bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478bc8:
    // 0x478bc8: 0x0  nop
    ctx->pc = 0x478bc8u;
    // NOP
label_478bcc:
    // 0x478bcc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478bd0:
    // 0x478bd0: 0xc6e10108  lwc1        $f1, 0x108($s7)
    ctx->pc = 0x478bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478bd4:
    // 0x478bd4: 0xc6e0010c  lwc1        $f0, 0x10C($s7)
    ctx->pc = 0x478bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478bd8:
    // 0x478bd8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x478bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478bdc:
    // 0x478bdc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x478bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_478be0:
    // 0x478be0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x478be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_478be4:
    // 0x478be4: 0x46007b41  sub.s       $f13, $f15, $f0
    ctx->pc = 0x478be4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
label_478be8:
    // 0x478be8: 0xc0bc284  jal         func_2F0A10
label_478bec:
    if (ctx->pc == 0x478BECu) {
        ctx->pc = 0x478BECu;
            // 0x478bec: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x478BF0u;
        goto label_478bf0;
    }
    ctx->pc = 0x478BE8u;
    SET_GPR_U32(ctx, 31, 0x478BF0u);
    ctx->pc = 0x478BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478BE8u;
            // 0x478bec: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478BF0u; }
        if (ctx->pc != 0x478BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478BF0u; }
        if (ctx->pc != 0x478BF0u) { return; }
    }
    ctx->pc = 0x478BF0u;
label_478bf0:
    // 0x478bf0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478bf4:
    // 0x478bf4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478bf8:
    // 0x478bf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478bf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478bfc:
    // 0x478bfc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x478bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_478c00:
    // 0x478c00: 0x320f809  jalr        $t9
label_478c04:
    if (ctx->pc == 0x478C04u) {
        ctx->pc = 0x478C08u;
        goto label_478c08;
    }
    ctx->pc = 0x478C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478C08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x478C08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478C08u; }
            if (ctx->pc != 0x478C08u) { return; }
        }
        }
    }
    ctx->pc = 0x478C08u;
label_478c08:
    // 0x478c08: 0x1000007d  b           . + 4 + (0x7D << 2)
label_478c0c:
    if (ctx->pc == 0x478C0Cu) {
        ctx->pc = 0x478C10u;
        goto label_478c10;
    }
    ctx->pc = 0x478C08u;
    {
        const bool branch_taken_0x478c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478c08) {
            ctx->pc = 0x478E00u;
            goto label_478e00;
        }
    }
    ctx->pc = 0x478C10u;
label_478c10:
    // 0x478c10: 0x34214240  ori         $at, $at, 0x4240
    ctx->pc = 0x478c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16960);
label_478c14:
    // 0x478c14: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x478c14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_478c18:
    // 0x478c18: 0x10200079  beqz        $at, . + 4 + (0x79 << 2)
label_478c1c:
    if (ctx->pc == 0x478C1Cu) {
        ctx->pc = 0x478C20u;
        goto label_478c20;
    }
    ctx->pc = 0x478C18u;
    {
        const bool branch_taken_0x478c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x478c18) {
            ctx->pc = 0x478E00u;
            goto label_478e00;
        }
    }
    ctx->pc = 0x478C20u;
label_478c20:
    // 0x478c20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x478c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_478c24:
    // 0x478c24: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x478c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_478c28:
    // 0x478c28: 0xc6140038  lwc1        $f20, 0x38($s0)
    ctx->pc = 0x478c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_478c2c:
    // 0x478c2c: 0xc0506ac  jal         func_141AB0
label_478c30:
    if (ctx->pc == 0x478C30u) {
        ctx->pc = 0x478C30u;
            // 0x478c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x478C34u;
        goto label_478c34;
    }
    ctx->pc = 0x478C2Cu;
    SET_GPR_U32(ctx, 31, 0x478C34u);
    ctx->pc = 0x478C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478C2Cu;
            // 0x478c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478C34u; }
        if (ctx->pc != 0x478C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478C34u; }
        if (ctx->pc != 0x478C34u) { return; }
    }
    ctx->pc = 0x478C34u;
label_478c34:
    // 0x478c34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478c38:
    // 0x478c38: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478c3c:
    // 0x478c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478c40:
    // 0x478c40: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x478c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_478c44:
    // 0x478c44: 0x320f809  jalr        $t9
label_478c48:
    if (ctx->pc == 0x478C48u) {
        ctx->pc = 0x478C48u;
            // 0x478c48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x478C4Cu;
        goto label_478c4c;
    }
    ctx->pc = 0x478C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478C4Cu);
        ctx->pc = 0x478C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478C44u;
            // 0x478c48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x478C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478C4Cu; }
            if (ctx->pc != 0x478C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x478C4Cu;
label_478c4c:
    // 0x478c4c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x478c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_478c50:
    // 0x478c50: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x478c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_478c54:
    // 0x478c54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x478c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478c58:
    // 0x478c58: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x478c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_478c5c:
    // 0x478c5c: 0x62b825  or          $s7, $v1, $v0
    ctx->pc = 0x478c5cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_478c60:
    // 0x478c60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x478c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_478c64:
    // 0x478c64: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x478c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
label_478c68:
    // 0x478c68: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x478c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_478c6c:
    // 0x478c6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x478c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_478c70:
    // 0x478c70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x478c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_478c74:
    // 0x478c74: 0x284001b  divu        $zero, $s4, $a0
    ctx->pc = 0x478c74u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_478c78:
    // 0x478c78: 0x2812  mflo        $a1
    ctx->pc = 0x478c78u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_478c7c:
    // 0x478c7c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x478c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_478c80:
    // 0x478c80: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x478c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_478c84:
    // 0x478c84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x478c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_478c88:
    // 0x478c88: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_478c8c:
    if (ctx->pc == 0x478C8Cu) {
        ctx->pc = 0x478C8Cu;
            // 0x478c8c: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->pc = 0x478C90u;
        goto label_478c90;
    }
    ctx->pc = 0x478C88u;
    {
        const bool branch_taken_0x478c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478C88u;
            // 0x478c8c: 0x284a023  subu        $s4, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478c88) {
            ctx->pc = 0x478D28u;
            goto label_478d28;
        }
    }
    ctx->pc = 0x478C90u;
label_478c90:
    // 0x478c90: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x478c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_478c94:
    // 0x478c94: 0x24a2000d  addiu       $v0, $a1, 0xD
    ctx->pc = 0x478c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_478c98:
    // 0x478c98: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x478c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_478c9c:
    // 0x478c9c: 0x86c30002  lh          $v1, 0x2($s6)
    ctx->pc = 0x478c9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_478ca0:
    // 0x478ca0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x478ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_478ca4:
    // 0x478ca4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x478ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_478ca8:
    // 0x478ca8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x478ca8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478cac:
    // 0x478cac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x478cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478cb0:
    // 0x478cb0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478cb4:
    // 0x478cb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478cb8:
    // 0x478cb8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x478cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_478cbc:
    // 0x478cbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x478cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_478cc0:
    // 0x478cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478cc4:
    // 0x478cc4: 0x0  nop
    ctx->pc = 0x478cc4u;
    // NOP
label_478cc8:
    // 0x478cc8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478ccc:
    // 0x478ccc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x478cccu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478cd0:
    // 0x478cd0: 0x0  nop
    ctx->pc = 0x478cd0u;
    // NOP
label_478cd4:
    // 0x478cd4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478cd8:
    // 0x478cd8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x478cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_478cdc:
    // 0x478cdc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x478cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478ce0:
    // 0x478ce0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x478ce0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478ce4:
    // 0x478ce4: 0x46141542  mul.s       $f21, $f2, $f20
    ctx->pc = 0x478ce4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_478ce8:
    // 0x478ce8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478cec:
    // 0x478cec: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x478cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_478cf0:
    // 0x478cf0: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x478cf0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_478cf4:
    // 0x478cf4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x478cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478cf8:
    // 0x478cf8: 0xc0bc284  jal         func_2F0A10
label_478cfc:
    if (ctx->pc == 0x478CFCu) {
        ctx->pc = 0x478CFCu;
            // 0x478cfc: 0x46156380  add.s       $f14, $f12, $f21 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->pc = 0x478D00u;
        goto label_478d00;
    }
    ctx->pc = 0x478CF8u;
    SET_GPR_U32(ctx, 31, 0x478D00u);
    ctx->pc = 0x478CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478CF8u;
            // 0x478cfc: 0x46156380  add.s       $f14, $f12, $f21 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478D00u; }
        if (ctx->pc != 0x478D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478D00u; }
        if (ctx->pc != 0x478D00u) { return; }
    }
    ctx->pc = 0x478D00u;
label_478d00:
    // 0x478d00: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x478d00u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478d04:
    // 0x478d04: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x478d04u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_478d08:
    // 0x478d08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x478d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_478d0c:
    // 0x478d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x478d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478d10:
    // 0x478d10: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x478d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_478d14:
    // 0x478d14: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x478d14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_478d18:
    // 0x478d18: 0x4602a81c  madd.s      $f0, $f21, $f2
    ctx->pc = 0x478d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[2]));
label_478d1c:
    // 0x478d1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478d1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478d20:
    // 0x478d20: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x478d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_478d24:
    // 0x478d24: 0x0  nop
    ctx->pc = 0x478d24u;
    // NOP
label_478d28:
    // 0x478d28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x478d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_478d2c:
    // 0x478d2c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x478d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_478d30:
    // 0x478d30: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_478d34:
    if (ctx->pc == 0x478D34u) {
        ctx->pc = 0x478D34u;
            // 0x478d34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x478D38u;
        goto label_478d38;
    }
    ctx->pc = 0x478D30u;
    {
        const bool branch_taken_0x478d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478D30u;
            // 0x478d34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478d30) {
            ctx->pc = 0x478C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_478c60;
        }
    }
    ctx->pc = 0x478D38u;
label_478d38:
    // 0x478d38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478d3c:
    // 0x478d3c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478d40:
    // 0x478d40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478d44:
    // 0x478d44: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x478d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_478d48:
    // 0x478d48: 0x320f809  jalr        $t9
label_478d4c:
    if (ctx->pc == 0x478D4Cu) {
        ctx->pc = 0x478D50u;
        goto label_478d50;
    }
    ctx->pc = 0x478D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478D50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x478D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478D50u; }
            if (ctx->pc != 0x478D50u) { return; }
        }
        }
    }
    ctx->pc = 0x478D50u;
label_478d50:
    // 0x478d50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x478d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_478d54:
    // 0x478d54: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x478d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_478d58:
    // 0x478d58: 0xc0506ac  jal         func_141AB0
label_478d5c:
    if (ctx->pc == 0x478D5Cu) {
        ctx->pc = 0x478D5Cu;
            // 0x478d5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x478D60u;
        goto label_478d60;
    }
    ctx->pc = 0x478D58u;
    SET_GPR_U32(ctx, 31, 0x478D60u);
    ctx->pc = 0x478D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478D58u;
            // 0x478d5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478D60u; }
        if (ctx->pc != 0x478D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478D60u; }
        if (ctx->pc != 0x478D60u) { return; }
    }
    ctx->pc = 0x478D60u;
label_478d60:
    // 0x478d60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478d64:
    // 0x478d64: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478d68:
    // 0x478d68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478d6c:
    // 0x478d6c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x478d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_478d70:
    // 0x478d70: 0x320f809  jalr        $t9
label_478d74:
    if (ctx->pc == 0x478D74u) {
        ctx->pc = 0x478D74u;
            // 0x478d74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x478D78u;
        goto label_478d78;
    }
    ctx->pc = 0x478D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478D78u);
        ctx->pc = 0x478D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478D70u;
            // 0x478d74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x478D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478D78u; }
            if (ctx->pc != 0x478D78u) { return; }
        }
        }
    }
    ctx->pc = 0x478D78u;
label_478d78:
    // 0x478d78: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x478d78u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478d7c:
    // 0x478d7c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x478d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_478d80:
    // 0x478d80: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_478d84:
    // 0x478d84: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x478d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_478d88:
    // 0x478d88: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x478d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_478d8c:
    // 0x478d8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478d90:
    // 0x478d90: 0x24450220  addiu       $a1, $v0, 0x220
    ctx->pc = 0x478d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_478d94:
    // 0x478d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x478d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478d98:
    // 0x478d98: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x478d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_478d9c:
    // 0x478d9c: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x478d9cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478da0:
    // 0x478da0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x478da0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_478da4:
    // 0x478da4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x478da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_478da8:
    // 0x478da8: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x478da8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_478dac:
    // 0x478dac: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x478dacu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478db0:
    // 0x478db0: 0x0  nop
    ctx->pc = 0x478db0u;
    // NOP
label_478db4:
    // 0x478db4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x478db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_478db8:
    // 0x478db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x478db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478dbc:
    // 0x478dbc: 0x0  nop
    ctx->pc = 0x478dbcu;
    // NOP
label_478dc0:
    // 0x478dc0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x478dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_478dc4:
    // 0x478dc4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x478dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_478dc8:
    // 0x478dc8: 0xc4410228  lwc1        $f1, 0x228($v0)
    ctx->pc = 0x478dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478dcc:
    // 0x478dcc: 0xc440022c  lwc1        $f0, 0x22C($v0)
    ctx->pc = 0x478dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478dd0:
    // 0x478dd0: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x478dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478dd4:
    // 0x478dd4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x478dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_478dd8:
    // 0x478dd8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x478dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_478ddc:
    // 0x478ddc: 0x46007b41  sub.s       $f13, $f15, $f0
    ctx->pc = 0x478ddcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
label_478de0:
    // 0x478de0: 0xc0bc284  jal         func_2F0A10
label_478de4:
    if (ctx->pc == 0x478DE4u) {
        ctx->pc = 0x478DE4u;
            // 0x478de4: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->pc = 0x478DE8u;
        goto label_478de8;
    }
    ctx->pc = 0x478DE0u;
    SET_GPR_U32(ctx, 31, 0x478DE8u);
    ctx->pc = 0x478DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478DE0u;
            // 0x478de4: 0x46016380  add.s       $f14, $f12, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478DE8u; }
        if (ctx->pc != 0x478DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478DE8u; }
        if (ctx->pc != 0x478DE8u) { return; }
    }
    ctx->pc = 0x478DE8u;
label_478de8:
    // 0x478de8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478dec:
    // 0x478dec: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478df0:
    // 0x478df0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478df4:
    // 0x478df4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x478df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_478df8:
    // 0x478df8: 0x320f809  jalr        $t9
label_478dfc:
    if (ctx->pc == 0x478DFCu) {
        ctx->pc = 0x478E00u;
        goto label_478e00;
    }
    ctx->pc = 0x478DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478E00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x478E00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478E00u; }
            if (ctx->pc != 0x478E00u) { return; }
        }
        }
    }
    ctx->pc = 0x478E00u;
label_478e00:
    // 0x478e00: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x478e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_478e04:
    // 0x478e04: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x478e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_478e08:
    // 0x478e08: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x478e08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_478e0c:
    // 0x478e0c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x478e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_478e10:
    // 0x478e10: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x478e10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_478e14:
    // 0x478e14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x478e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_478e18:
    // 0x478e18: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x478e18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_478e1c:
    // 0x478e1c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x478e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_478e20:
    // 0x478e20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x478e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_478e24:
    // 0x478e24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x478e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_478e28:
    // 0x478e28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x478e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_478e2c:
    // 0x478e2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x478e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_478e30:
    // 0x478e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x478e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_478e34:
    // 0x478e34: 0x3e00008  jr          $ra
label_478e38:
    if (ctx->pc == 0x478E38u) {
        ctx->pc = 0x478E38u;
            // 0x478e38: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x478E3Cu;
        goto label_478e3c;
    }
    ctx->pc = 0x478E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x478E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478E34u;
            // 0x478e38: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x478E3Cu;
label_478e3c:
    // 0x478e3c: 0x0  nop
    ctx->pc = 0x478e3cu;
    // NOP
label_478e40:
    // 0x478e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x478e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_478e44:
    // 0x478e44: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x478e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_478e48:
    // 0x478e48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x478e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_478e4c:
    // 0x478e4c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x478e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_478e50:
    // 0x478e50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x478e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_478e54:
    // 0x478e54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x478e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_478e58:
    // 0x478e58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x478e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_478e5c:
    // 0x478e5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x478e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_478e60:
    // 0x478e60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x478e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_478e64:
    // 0x478e64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_478e68:
    // 0x478e68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x478e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_478e6c:
    // 0x478e6c: 0x8cb28a08  lw          $s2, -0x75F8($a1)
    ctx->pc = 0x478e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_478e70:
    // 0x478e70: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x478e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_478e74:
    // 0x478e74: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x478e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_478e78:
    // 0x478e78: 0x8ca70e80  lw          $a3, 0xE80($a1)
    ctx->pc = 0x478e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3712)));
label_478e7c:
    // 0x478e7c: 0x8ce50cb4  lw          $a1, 0xCB4($a3)
    ctx->pc = 0x478e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
label_478e80:
    // 0x478e80: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x478e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_478e84:
    // 0x478e84: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_478e88:
    if (ctx->pc == 0x478E88u) {
        ctx->pc = 0x478E88u;
            // 0x478e88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x478E8Cu;
        goto label_478e8c;
    }
    ctx->pc = 0x478E84u;
    {
        const bool branch_taken_0x478e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x478E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478E84u;
            // 0x478e88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478e84) {
            ctx->pc = 0x478EB8u;
            goto label_478eb8;
        }
    }
    ctx->pc = 0x478E8Cu;
label_478e8c:
    // 0x478e8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478e90:
    // 0x478e90: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x478e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_478e94:
    // 0x478e94: 0x320f809  jalr        $t9
label_478e98:
    if (ctx->pc == 0x478E98u) {
        ctx->pc = 0x478E98u;
            // 0x478e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x478E9Cu;
        goto label_478e9c;
    }
    ctx->pc = 0x478E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478E9Cu);
        ctx->pc = 0x478E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478E94u;
            // 0x478e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x478E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478E9Cu; }
            if (ctx->pc != 0x478E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x478E9Cu;
label_478e9c:
    // 0x478e9c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x478e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_478ea0:
    // 0x478ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x478ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_478ea4:
    // 0x478ea4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x478ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_478ea8:
    // 0x478ea8: 0xc057b7c  jal         func_15EDF0
label_478eac:
    if (ctx->pc == 0x478EACu) {
        ctx->pc = 0x478EACu;
            // 0x478eac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x478EB0u;
        goto label_478eb0;
    }
    ctx->pc = 0x478EA8u;
    SET_GPR_U32(ctx, 31, 0x478EB0u);
    ctx->pc = 0x478EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478EA8u;
            // 0x478eac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478EB0u; }
        if (ctx->pc != 0x478EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478EB0u; }
        if (ctx->pc != 0x478EB0u) { return; }
    }
    ctx->pc = 0x478EB0u;
label_478eb0:
    // 0x478eb0: 0x1000013a  b           . + 4 + (0x13A << 2)
label_478eb4:
    if (ctx->pc == 0x478EB4u) {
        ctx->pc = 0x478EB4u;
            // 0x478eb4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x478EB8u;
        goto label_478eb8;
    }
    ctx->pc = 0x478EB0u;
    {
        const bool branch_taken_0x478eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478EB0u;
            // 0x478eb4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478eb0) {
            ctx->pc = 0x47939Cu;
            goto label_47939c;
        }
    }
    ctx->pc = 0x478EB8u;
label_478eb8:
    // 0x478eb8: 0x92260010  lbu         $a2, 0x10($s1)
    ctx->pc = 0x478eb8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_478ebc:
    // 0x478ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x478ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_478ec0:
    // 0x478ec0: 0x10c50130  beq         $a2, $a1, . + 4 + (0x130 << 2)
label_478ec4:
    if (ctx->pc == 0x478EC4u) {
        ctx->pc = 0x478EC8u;
        goto label_478ec8;
    }
    ctx->pc = 0x478EC0u;
    {
        const bool branch_taken_0x478ec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x478ec0) {
            ctx->pc = 0x479384u;
            goto label_479384;
        }
    }
    ctx->pc = 0x478EC8u;
label_478ec8:
    // 0x478ec8: 0x50c00129  beql        $a2, $zero, . + 4 + (0x129 << 2)
label_478ecc:
    if (ctx->pc == 0x478ECCu) {
        ctx->pc = 0x478ECCu;
            // 0x478ecc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x478ED0u;
        goto label_478ed0;
    }
    ctx->pc = 0x478EC8u;
    {
        const bool branch_taken_0x478ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x478ec8) {
            ctx->pc = 0x478ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x478EC8u;
            // 0x478ecc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479370u;
            goto label_479370;
        }
    }
    ctx->pc = 0x478ED0u;
label_478ed0:
    // 0x478ed0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x478ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_478ed4:
    // 0x478ed4: 0x50c400ed  beql        $a2, $a0, . + 4 + (0xED << 2)
label_478ed8:
    if (ctx->pc == 0x478ED8u) {
        ctx->pc = 0x478ED8u;
            // 0x478ed8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x478EDCu;
        goto label_478edc;
    }
    ctx->pc = 0x478ED4u;
    {
        const bool branch_taken_0x478ed4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x478ed4) {
            ctx->pc = 0x478ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x478ED4u;
            // 0x478ed8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47928Cu;
            goto label_47928c;
        }
    }
    ctx->pc = 0x478EDCu;
label_478edc:
    // 0x478edc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_478ee0:
    // 0x478ee0: 0x10c4002d  beq         $a2, $a0, . + 4 + (0x2D << 2)
label_478ee4:
    if (ctx->pc == 0x478EE4u) {
        ctx->pc = 0x478EE8u;
        goto label_478ee8;
    }
    ctx->pc = 0x478EE0u;
    {
        const bool branch_taken_0x478ee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x478ee0) {
            ctx->pc = 0x478F98u;
            goto label_478f98;
        }
    }
    ctx->pc = 0x478EE8u;
label_478ee8:
    // 0x478ee8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x478ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_478eec:
    // 0x478eec: 0x50c40003  beql        $a2, $a0, . + 4 + (0x3 << 2)
label_478ef0:
    if (ctx->pc == 0x478EF0u) {
        ctx->pc = 0x478EF0u;
            // 0x478ef0: 0x8ce50968  lw          $a1, 0x968($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
        ctx->pc = 0x478EF4u;
        goto label_478ef4;
    }
    ctx->pc = 0x478EECu;
    {
        const bool branch_taken_0x478eec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x478eec) {
            ctx->pc = 0x478EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x478EECu;
            // 0x478ef0: 0x8ce50968  lw          $a1, 0x968($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x478EFCu;
            goto label_478efc;
        }
    }
    ctx->pc = 0x478EF4u;
label_478ef4:
    // 0x478ef4: 0x10000128  b           . + 4 + (0x128 << 2)
label_478ef8:
    if (ctx->pc == 0x478EF8u) {
        ctx->pc = 0x478EFCu;
        goto label_478efc;
    }
    ctx->pc = 0x478EF4u;
    {
        const bool branch_taken_0x478ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478ef4) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x478EFCu;
label_478efc:
    // 0x478efc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x478efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_478f00:
    // 0x478f00: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_478f04:
    if (ctx->pc == 0x478F04u) {
        ctx->pc = 0x478F04u;
            // 0x478f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x478F08u;
        goto label_478f08;
    }
    ctx->pc = 0x478F00u;
    {
        const bool branch_taken_0x478f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x478F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478F00u;
            // 0x478f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478f00) {
            ctx->pc = 0x478F10u;
            goto label_478f10;
        }
    }
    ctx->pc = 0x478F08u;
label_478f08:
    // 0x478f08: 0x10000009  b           . + 4 + (0x9 << 2)
label_478f0c:
    if (ctx->pc == 0x478F0Cu) {
        ctx->pc = 0x478F10u;
        goto label_478f10;
    }
    ctx->pc = 0x478F08u;
    {
        const bool branch_taken_0x478f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478f08) {
            ctx->pc = 0x478F30u;
            goto label_478f30;
        }
    }
    ctx->pc = 0x478F10u;
label_478f10:
    // 0x478f10: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x478f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_478f14:
    // 0x478f14: 0x8c843da0  lw          $a0, 0x3DA0($a0)
    ctx->pc = 0x478f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15776)));
label_478f18:
    // 0x478f18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_478f1c:
    if (ctx->pc == 0x478F1Cu) {
        ctx->pc = 0x478F20u;
        goto label_478f20;
    }
    ctx->pc = 0x478F18u;
    {
        const bool branch_taken_0x478f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x478f18) {
            ctx->pc = 0x478F30u;
            goto label_478f30;
        }
    }
    ctx->pc = 0x478F20u;
label_478f20:
    // 0x478f20: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x478f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_478f24:
    // 0x478f24: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x478f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478f28:
    // 0x478f28: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x478f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_478f2c:
    // 0x478f2c: 0x2886000e  slti        $a2, $a0, 0xE
    ctx->pc = 0x478f2cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
label_478f30:
    // 0x478f30: 0x14c00119  bnez        $a2, . + 4 + (0x119 << 2)
label_478f34:
    if (ctx->pc == 0x478F34u) {
        ctx->pc = 0x478F38u;
        goto label_478f38;
    }
    ctx->pc = 0x478F30u;
    {
        const bool branch_taken_0x478f30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x478f30) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x478F38u;
label_478f38:
    // 0x478f38: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x478f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_478f3c:
    // 0x478f3c: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x478f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478f40:
    // 0x478f40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x478f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478f44:
    // 0x478f44: 0x0  nop
    ctx->pc = 0x478f44u;
    // NOP
label_478f48:
    // 0x478f48: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x478f48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_478f4c:
    // 0x478f4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x478f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_478f50:
    // 0x478f50: 0x45000111  bc1f        . + 4 + (0x111 << 2)
label_478f54:
    if (ctx->pc == 0x478F54u) {
        ctx->pc = 0x478F54u;
            // 0x478f54: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->pc = 0x478F58u;
        goto label_478f58;
    }
    ctx->pc = 0x478F50u;
    {
        const bool branch_taken_0x478f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x478F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478F50u;
            // 0x478f54: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x478f50) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x478F58u;
label_478f58:
    // 0x478f58: 0x906200e4  lbu         $v0, 0xE4($v1)
    ctx->pc = 0x478f58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_478f5c:
    // 0x478f5c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x478f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_478f60:
    // 0x478f60: 0xa06200e4  sb          $v0, 0xE4($v1)
    ctx->pc = 0x478f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 2));
label_478f64:
    // 0x478f64: 0x906200e5  lbu         $v0, 0xE5($v1)
    ctx->pc = 0x478f64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 229)));
label_478f68:
    // 0x478f68: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x478f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_478f6c:
    // 0x478f6c: 0xa06200e5  sb          $v0, 0xE5($v1)
    ctx->pc = 0x478f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 229), (uint8_t)GPR_U32(ctx, 2));
label_478f70:
    // 0x478f70: 0x906200e6  lbu         $v0, 0xE6($v1)
    ctx->pc = 0x478f70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 230)));
label_478f74:
    // 0x478f74: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x478f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_478f78:
    // 0x478f78: 0xa06200e6  sb          $v0, 0xE6($v1)
    ctx->pc = 0x478f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 230), (uint8_t)GPR_U32(ctx, 2));
label_478f7c:
    // 0x478f7c: 0x906200e7  lbu         $v0, 0xE7($v1)
    ctx->pc = 0x478f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 231)));
label_478f80:
    // 0x478f80: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x478f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_478f84:
    // 0x478f84: 0xa06200e7  sb          $v0, 0xE7($v1)
    ctx->pc = 0x478f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 231), (uint8_t)GPR_U32(ctx, 2));
label_478f88:
    // 0x478f88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x478f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_478f8c:
    // 0x478f8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x478f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_478f90:
    // 0x478f90: 0x320f809  jalr        $t9
label_478f94:
    if (ctx->pc == 0x478F94u) {
        ctx->pc = 0x478F94u;
            // 0x478f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x478F98u;
        goto label_478f98;
    }
    ctx->pc = 0x478F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478F98u);
        ctx->pc = 0x478F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478F90u;
            // 0x478f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x478F98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478F98u; }
            if (ctx->pc != 0x478F98u) { return; }
        }
        }
    }
    ctx->pc = 0x478F98u;
label_478f98:
    // 0x478f98: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x478f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_478f9c:
    // 0x478f9c: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x478f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
label_478fa0:
    // 0x478fa0: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x478fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_478fa4:
    // 0x478fa4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x478fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_478fa8:
    // 0x478fa8: 0x92230068  lbu         $v1, 0x68($s1)
    ctx->pc = 0x478fa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_478fac:
    // 0x478fac: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_478fb0:
    if (ctx->pc == 0x478FB0u) {
        ctx->pc = 0x478FB0u;
            // 0x478fb0: 0xc4a30018  lwc1        $f3, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x478FB4u;
        goto label_478fb4;
    }
    ctx->pc = 0x478FACu;
    {
        const bool branch_taken_0x478fac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x478FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478FACu;
            // 0x478fb0: 0xc4a30018  lwc1        $f3, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x478fac) {
            ctx->pc = 0x478FC0u;
            goto label_478fc0;
        }
    }
    ctx->pc = 0x478FB4u;
label_478fb4:
    // 0x478fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478fb8:
    // 0x478fb8: 0x10000008  b           . + 4 + (0x8 << 2)
label_478fbc:
    if (ctx->pc == 0x478FBCu) {
        ctx->pc = 0x478FBCu;
            // 0x478fbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x478FC0u;
        goto label_478fc0;
    }
    ctx->pc = 0x478FB8u;
    {
        const bool branch_taken_0x478fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478FB8u;
            // 0x478fbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x478fb8) {
            ctx->pc = 0x478FDCu;
            goto label_478fdc;
        }
    }
    ctx->pc = 0x478FC0u;
label_478fc0:
    // 0x478fc0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x478fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_478fc4:
    // 0x478fc4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x478fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_478fc8:
    // 0x478fc8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x478fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_478fcc:
    // 0x478fcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x478fccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478fd0:
    // 0x478fd0: 0x0  nop
    ctx->pc = 0x478fd0u;
    // NOP
label_478fd4:
    // 0x478fd4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x478fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_478fd8:
    // 0x478fd8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x478fd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_478fdc:
    // 0x478fdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x478fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478fe0:
    // 0x478fe0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x478fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_478fe4:
    // 0x478fe4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x478fe4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_478fe8:
    // 0x478fe8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x478fe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_478fec:
    // 0x478fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x478fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478ff0:
    // 0x478ff0: 0x0  nop
    ctx->pc = 0x478ff0u;
    // NOP
label_478ff4:
    // 0x478ff4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x478ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_478ff8:
    // 0x478ff8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_478ffc:
    if (ctx->pc == 0x478FFCu) {
        ctx->pc = 0x478FFCu;
            // 0x478ffc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x479000u;
        goto label_479000;
    }
    ctx->pc = 0x478FF8u;
    {
        const bool branch_taken_0x478ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x478ff8) {
            ctx->pc = 0x478FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x478FF8u;
            // 0x478ffc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x479010u;
            goto label_479010;
        }
    }
    ctx->pc = 0x479000u;
label_479000:
    // 0x479000: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x479000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_479004:
    // 0x479004: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x479004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_479008:
    // 0x479008: 0x10000007  b           . + 4 + (0x7 << 2)
label_47900c:
    if (ctx->pc == 0x47900Cu) {
        ctx->pc = 0x47900Cu;
            // 0x47900c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x479010u;
        goto label_479010;
    }
    ctx->pc = 0x479008u;
    {
        const bool branch_taken_0x479008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479008u;
            // 0x47900c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479008) {
            ctx->pc = 0x479028u;
            goto label_479028;
        }
    }
    ctx->pc = 0x479010u;
label_479010:
    // 0x479010: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x479010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_479014:
    // 0x479014: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x479014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_479018:
    // 0x479018: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x479018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_47901c:
    // 0x47901c: 0x0  nop
    ctx->pc = 0x47901cu;
    // NOP
label_479020:
    // 0x479020: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x479020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_479024:
    // 0x479024: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x479024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_479028:
    // 0x479028: 0xa2240068  sb          $a0, 0x68($s1)
    ctx->pc = 0x479028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 4));
label_47902c:
    // 0x47902c: 0x92240068  lbu         $a0, 0x68($s1)
    ctx->pc = 0x47902cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_479030:
    // 0x479030: 0x2883006f  slti        $v1, $a0, 0x6F
    ctx->pc = 0x479030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)111) ? 1 : 0);
label_479034:
    // 0x479034: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_479038:
    if (ctx->pc == 0x479038u) {
        ctx->pc = 0x479038u;
            // 0x479038: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x47903Cu;
        goto label_47903c;
    }
    ctx->pc = 0x479034u;
    {
        const bool branch_taken_0x479034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x479034) {
            ctx->pc = 0x479038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479034u;
            // 0x479038: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479048u;
            goto label_479048;
        }
    }
    ctx->pc = 0x47903Cu;
label_47903c:
    // 0x47903c: 0x2483ff91  addiu       $v1, $a0, -0x6F
    ctx->pc = 0x47903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967185));
label_479040:
    // 0x479040: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x479040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_479044:
    // 0x479044: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x479044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_479048:
    // 0x479048: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x479048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_47904c:
    // 0x47904c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x47904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_479050:
    // 0x479050: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x479050u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_479054:
    // 0x479054: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
label_479058:
    if (ctx->pc == 0x479058u) {
        ctx->pc = 0x479058u;
            // 0x479058: 0xae24006c  sw          $a0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
        ctx->pc = 0x47905Cu;
        goto label_47905c;
    }
    ctx->pc = 0x479054u;
    {
        const bool branch_taken_0x479054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479054) {
            ctx->pc = 0x479058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479054u;
            // 0x479058: 0xae24006c  sw          $a0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479060u;
            goto label_479060;
        }
    }
    ctx->pc = 0x47905Cu;
label_47905c:
    // 0x47905c: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x47905cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_479060:
    // 0x479060: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x479060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479064:
    // 0x479064: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x479064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_479068:
    // 0x479068: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x479068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_47906c:
    // 0x47906c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x47906cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_479070:
    // 0x479070: 0x14600079  bnez        $v1, . + 4 + (0x79 << 2)
label_479074:
    if (ctx->pc == 0x479074u) {
        ctx->pc = 0x479074u;
            // 0x479074: 0x26530074  addiu       $s3, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->pc = 0x479078u;
        goto label_479078;
    }
    ctx->pc = 0x479070u;
    {
        const bool branch_taken_0x479070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x479074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479070u;
            // 0x479074: 0x26530074  addiu       $s3, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479070) {
            ctx->pc = 0x479258u;
            goto label_479258;
        }
    }
    ctx->pc = 0x479078u;
label_479078:
    // 0x479078: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x479078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47907c:
    // 0x47907c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_479080:
    // 0x479080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x479080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_479084:
    // 0x479084: 0x0  nop
    ctx->pc = 0x479084u;
    // NOP
label_479088:
    // 0x479088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47908c:
    // 0x47908c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_479090:
    if (ctx->pc == 0x479090u) {
        ctx->pc = 0x479090u;
            // 0x479090: 0x8c638a08  lw          $v1, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->pc = 0x479094u;
        goto label_479094;
    }
    ctx->pc = 0x47908Cu;
    {
        const bool branch_taken_0x47908c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47908Cu;
            // 0x479090: 0x8c638a08  lw          $v1, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47908c) {
            ctx->pc = 0x4790A0u;
            goto label_4790a0;
        }
    }
    ctx->pc = 0x479094u;
label_479094:
    // 0x479094: 0x10000006  b           . + 4 + (0x6 << 2)
label_479098:
    if (ctx->pc == 0x479098u) {
        ctx->pc = 0x479098u;
            // 0x479098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47909Cu;
        goto label_47909c;
    }
    ctx->pc = 0x479094u;
    {
        const bool branch_taken_0x479094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479094u;
            // 0x479098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479094) {
            ctx->pc = 0x4790B0u;
            goto label_4790b0;
        }
    }
    ctx->pc = 0x47909Cu;
label_47909c:
    // 0x47909c: 0x0  nop
    ctx->pc = 0x47909cu;
    // NOP
label_4790a0:
    // 0x4790a0: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x4790a0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4790a4:
    // 0x4790a4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4790a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4790a8:
    // 0x4790a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4790a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4790ac:
    // 0x4790ac: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x4790acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_4790b0:
    // 0x4790b0: 0x14800069  bnez        $a0, . + 4 + (0x69 << 2)
label_4790b4:
    if (ctx->pc == 0x4790B4u) {
        ctx->pc = 0x4790B8u;
        goto label_4790b8;
    }
    ctx->pc = 0x4790B0u;
    {
        const bool branch_taken_0x4790b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4790b0) {
            ctx->pc = 0x479258u;
            goto label_479258;
        }
    }
    ctx->pc = 0x4790B8u;
label_4790b8:
    // 0x4790b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4790b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4790bc:
    // 0x4790bc: 0xc11e56c  jal         func_4795B0
label_4790c0:
    if (ctx->pc == 0x4790C0u) {
        ctx->pc = 0x4790C0u;
            // 0x4790c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4790C4u;
        goto label_4790c4;
    }
    ctx->pc = 0x4790BCu;
    SET_GPR_U32(ctx, 31, 0x4790C4u);
    ctx->pc = 0x4790C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4790BCu;
            // 0x4790c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4795B0u;
    if (runtime->hasFunction(0x4795B0u)) {
        auto targetFn = runtime->lookupFunction(0x4795B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4790C4u; }
        if (ctx->pc != 0x4790C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004795B0_0x4795b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4790C4u; }
        if (ctx->pc != 0x4790C4u) { return; }
    }
    ctx->pc = 0x4790C4u;
label_4790c4:
    // 0x4790c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4790c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4790c8:
    // 0x4790c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4790c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4790cc:
    // 0x4790cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4790d0:
    if (ctx->pc == 0x4790D0u) {
        ctx->pc = 0x4790D4u;
        goto label_4790d4;
    }
    ctx->pc = 0x4790CCu;
    {
        const bool branch_taken_0x4790cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4790cc) {
            ctx->pc = 0x479108u;
            goto label_479108;
        }
    }
    ctx->pc = 0x4790D4u;
label_4790d4:
    // 0x4790d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4790d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4790d8:
    // 0x4790d8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4790d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4790dc:
    // 0x4790dc: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x4790dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4790e0:
    // 0x4790e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4790e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4790e4:
    // 0x4790e4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4790e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4790e8:
    // 0x4790e8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4790e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4790ec:
    // 0x4790ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4790ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4790f0:
    // 0x4790f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4790f4:
    if (ctx->pc == 0x4790F4u) {
        ctx->pc = 0x4790F4u;
            // 0x4790f4: 0xe6610008  swc1        $f1, 0x8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->pc = 0x4790F8u;
        goto label_4790f8;
    }
    ctx->pc = 0x4790F0u;
    {
        const bool branch_taken_0x4790f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4790F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4790F0u;
            // 0x4790f4: 0xe6610008  swc1        $f1, 0x8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4790f0) {
            ctx->pc = 0x479108u;
            goto label_479108;
        }
    }
    ctx->pc = 0x4790F8u;
label_4790f8:
    // 0x4790f8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x4790f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_4790fc:
    // 0x4790fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4790fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_479100:
    // 0x479100: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x479100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_479104:
    // 0x479104: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x479104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_479108:
    // 0x479108: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47910c:
    // 0x47910c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x47910cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_479110:
    // 0x479110: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_479114:
    if (ctx->pc == 0x479114u) {
        ctx->pc = 0x479118u;
        goto label_479118;
    }
    ctx->pc = 0x479110u;
    {
        const bool branch_taken_0x479110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x479110) {
            ctx->pc = 0x479150u;
            goto label_479150;
        }
    }
    ctx->pc = 0x479118u;
label_479118:
    // 0x479118: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_47911c:
    // 0x47911c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x47911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_479120:
    // 0x479120: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x479120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_479124:
    // 0x479124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x479124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_479128:
    // 0x479128: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x479128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47912c:
    // 0x47912c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x47912cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_479130:
    // 0x479130: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_479134:
    // 0x479134: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_479138:
    if (ctx->pc == 0x479138u) {
        ctx->pc = 0x479138u;
            // 0x479138: 0xe661000c  swc1        $f1, 0xC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->pc = 0x47913Cu;
        goto label_47913c;
    }
    ctx->pc = 0x479134u;
    {
        const bool branch_taken_0x479134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479134u;
            // 0x479138: 0xe661000c  swc1        $f1, 0xC($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x479134) {
            ctx->pc = 0x479150u;
            goto label_479150;
        }
    }
    ctx->pc = 0x47913Cu;
label_47913c:
    // 0x47913c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x47913cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_479140:
    // 0x479140: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_479144:
    // 0x479144: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x479144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_479148:
    // 0x479148: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x479148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_47914c:
    // 0x47914c: 0x0  nop
    ctx->pc = 0x47914cu;
    // NOP
label_479150:
    // 0x479150: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_479154:
    // 0x479154: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x479154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_479158:
    // 0x479158: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_47915c:
    if (ctx->pc == 0x47915Cu) {
        ctx->pc = 0x479160u;
        goto label_479160;
    }
    ctx->pc = 0x479158u;
    {
        const bool branch_taken_0x479158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x479158) {
            ctx->pc = 0x479198u;
            goto label_479198;
        }
    }
    ctx->pc = 0x479160u;
label_479160:
    // 0x479160: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_479164:
    // 0x479164: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x479164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_479168:
    // 0x479168: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x479168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47916c:
    // 0x47916c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47916cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_479170:
    // 0x479170: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x479170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_479174:
    // 0x479174: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x479174u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_479178:
    // 0x479178: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47917c:
    // 0x47917c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_479180:
    if (ctx->pc == 0x479180u) {
        ctx->pc = 0x479180u;
            // 0x479180: 0xe6610010  swc1        $f1, 0x10($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->pc = 0x479184u;
        goto label_479184;
    }
    ctx->pc = 0x47917Cu;
    {
        const bool branch_taken_0x47917c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47917Cu;
            // 0x479180: 0xe6610010  swc1        $f1, 0x10($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47917c) {
            ctx->pc = 0x479198u;
            goto label_479198;
        }
    }
    ctx->pc = 0x479184u;
label_479184:
    // 0x479184: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x479184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_479188:
    // 0x479188: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47918c:
    // 0x47918c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x47918cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_479190:
    // 0x479190: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x479190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_479194:
    // 0x479194: 0x0  nop
    ctx->pc = 0x479194u;
    // NOP
label_479198:
    // 0x479198: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47919c:
    // 0x47919c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x47919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_4791a0:
    // 0x4791a0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_4791a4:
    if (ctx->pc == 0x4791A4u) {
        ctx->pc = 0x4791A8u;
        goto label_4791a8;
    }
    ctx->pc = 0x4791A0u;
    {
        const bool branch_taken_0x4791a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4791a0) {
            ctx->pc = 0x479200u;
            goto label_479200;
        }
    }
    ctx->pc = 0x4791A8u;
label_4791a8:
    // 0x4791a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4791a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4791ac:
    // 0x4791ac: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4791acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4791b0:
    // 0x4791b0: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x4791b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4791b4:
    // 0x4791b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4791b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4791b8:
    // 0x4791b8: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4791b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4791bc:
    // 0x4791bc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4791bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4791c0:
    // 0x4791c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4791c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4791c4:
    // 0x4791c4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_4791c8:
    if (ctx->pc == 0x4791C8u) {
        ctx->pc = 0x4791C8u;
            // 0x4791c8: 0xe6610014  swc1        $f1, 0x14($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->pc = 0x4791CCu;
        goto label_4791cc;
    }
    ctx->pc = 0x4791C4u;
    {
        const bool branch_taken_0x4791c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4791C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4791C4u;
            // 0x4791c8: 0xe6610014  swc1        $f1, 0x14($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4791c4) {
            ctx->pc = 0x479200u;
            goto label_479200;
        }
    }
    ctx->pc = 0x4791CCu;
label_4791cc:
    // 0x4791cc: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x4791ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_4791d0:
    // 0x4791d0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x4791d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_4791d4:
    // 0x4791d4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4791d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_4791d8:
    // 0x4791d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4791dc:
    if (ctx->pc == 0x4791DCu) {
        ctx->pc = 0x4791E0u;
        goto label_4791e0;
    }
    ctx->pc = 0x4791D8u;
    {
        const bool branch_taken_0x4791d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4791d8) {
            ctx->pc = 0x4791F0u;
            goto label_4791f0;
        }
    }
    ctx->pc = 0x4791E0u;
label_4791e0:
    // 0x4791e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4791e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4791e4:
    // 0x4791e4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4791e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4791e8:
    // 0x4791e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4791ec:
    if (ctx->pc == 0x4791ECu) {
        ctx->pc = 0x4791ECu;
            // 0x4791ec: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4791F0u;
        goto label_4791f0;
    }
    ctx->pc = 0x4791E8u;
    {
        const bool branch_taken_0x4791e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4791ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4791E8u;
            // 0x4791ec: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4791e8) {
            ctx->pc = 0x479200u;
            goto label_479200;
        }
    }
    ctx->pc = 0x4791F0u;
label_4791f0:
    // 0x4791f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4791f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4791f4:
    // 0x4791f4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x4791f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_4791f8:
    // 0x4791f8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4791f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4791fc:
    // 0x4791fc: 0x0  nop
    ctx->pc = 0x4791fcu;
    // NOP
label_479200:
    // 0x479200: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_479204:
    // 0x479204: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x479204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_479208:
    // 0x479208: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_47920c:
    if (ctx->pc == 0x47920Cu) {
        ctx->pc = 0x479210u;
        goto label_479210;
    }
    ctx->pc = 0x479208u;
    {
        const bool branch_taken_0x479208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x479208) {
            ctx->pc = 0x479248u;
            goto label_479248;
        }
    }
    ctx->pc = 0x479210u;
label_479210:
    // 0x479210: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_479214:
    // 0x479214: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x479214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_479218:
    // 0x479218: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x479218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47921c:
    // 0x47921c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47921cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_479220:
    // 0x479220: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x479220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_479224:
    // 0x479224: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x479224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_479228:
    // 0x479228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x479228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47922c:
    // 0x47922c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_479230:
    if (ctx->pc == 0x479230u) {
        ctx->pc = 0x479230u;
            // 0x479230: 0xe6610018  swc1        $f1, 0x18($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->pc = 0x479234u;
        goto label_479234;
    }
    ctx->pc = 0x47922Cu;
    {
        const bool branch_taken_0x47922c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x479230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47922Cu;
            // 0x479230: 0xe6610018  swc1        $f1, 0x18($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47922c) {
            ctx->pc = 0x479248u;
            goto label_479248;
        }
    }
    ctx->pc = 0x479234u;
label_479234:
    // 0x479234: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x479234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_479238:
    // 0x479238: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47923c:
    // 0x47923c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x47923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_479240:
    // 0x479240: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x479240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_479244:
    // 0x479244: 0x0  nop
    ctx->pc = 0x479244u;
    // NOP
label_479248:
    // 0x479248: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x479248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47924c:
    // 0x47924c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x47924cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_479250:
    // 0x479250: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x479250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_479254:
    // 0x479254: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x479254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_479258:
    // 0x479258: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x479258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_47925c:
    // 0x47925c: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x47925cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_479260:
    // 0x479260: 0x1460ff81  bnez        $v1, . + 4 + (-0x7F << 2)
label_479264:
    if (ctx->pc == 0x479264u) {
        ctx->pc = 0x479264u;
            // 0x479264: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x479268u;
        goto label_479268;
    }
    ctx->pc = 0x479260u;
    {
        const bool branch_taken_0x479260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x479264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479260u;
            // 0x479264: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479260) {
            ctx->pc = 0x479068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_479068;
        }
    }
    ctx->pc = 0x479268u;
label_479268:
    // 0x479268: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x479268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47926c:
    // 0x47926c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x47926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_479270:
    // 0x479270: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x479270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_479274:
    // 0x479274: 0x16030048  bne         $s0, $v1, . + 4 + (0x48 << 2)
label_479278:
    if (ctx->pc == 0x479278u) {
        ctx->pc = 0x47927Cu;
        goto label_47927c;
    }
    ctx->pc = 0x479274u;
    {
        const bool branch_taken_0x479274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x479274) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x47927Cu;
label_47927c:
    // 0x47927c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x47927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_479280:
    // 0x479280: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x479280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_479284:
    // 0x479284: 0x10000044  b           . + 4 + (0x44 << 2)
label_479288:
    if (ctx->pc == 0x479288u) {
        ctx->pc = 0x479288u;
            // 0x479288: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x47928Cu;
        goto label_47928c;
    }
    ctx->pc = 0x479284u;
    {
        const bool branch_taken_0x479284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479284u;
            // 0x479288: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479284) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x47928Cu;
label_47928c:
    // 0x47928c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x47928cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_479290:
    // 0x479290: 0xc6810078  lwc1        $f1, 0x78($s4)
    ctx->pc = 0x479290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_479294:
    // 0x479294: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_479298:
    // 0x479298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x479298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47929c:
    // 0x47929c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x47929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4792a0:
    // 0x4792a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4792a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4792a4:
    // 0x4792a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4792a8:
    if (ctx->pc == 0x4792A8u) {
        ctx->pc = 0x4792A8u;
            // 0x4792a8: 0x26950074  addiu       $s5, $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
        ctx->pc = 0x4792ACu;
        goto label_4792ac;
    }
    ctx->pc = 0x4792A4u;
    {
        const bool branch_taken_0x4792a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4792A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4792A4u;
            // 0x4792a8: 0x26950074  addiu       $s5, $s4, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4792a4) {
            ctx->pc = 0x4792B8u;
            goto label_4792b8;
        }
    }
    ctx->pc = 0x4792ACu;
label_4792ac:
    // 0x4792ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_4792b0:
    if (ctx->pc == 0x4792B0u) {
        ctx->pc = 0x4792B0u;
            // 0x4792b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4792B4u;
        goto label_4792b4;
    }
    ctx->pc = 0x4792ACu;
    {
        const bool branch_taken_0x4792ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4792B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4792ACu;
            // 0x4792b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4792ac) {
            ctx->pc = 0x4792C8u;
            goto label_4792c8;
        }
    }
    ctx->pc = 0x4792B4u;
label_4792b4:
    // 0x4792b4: 0x0  nop
    ctx->pc = 0x4792b4u;
    // NOP
label_4792b8:
    // 0x4792b8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x4792b8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4792bc:
    // 0x4792bc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4792bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4792c0:
    // 0x4792c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4792c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4792c4:
    // 0x4792c4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x4792c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_4792c8:
    // 0x4792c8: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
label_4792cc:
    if (ctx->pc == 0x4792CCu) {
        ctx->pc = 0x4792D0u;
        goto label_4792d0;
    }
    ctx->pc = 0x4792C8u;
    {
        const bool branch_taken_0x4792c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4792c8) {
            ctx->pc = 0x479330u;
            goto label_479330;
        }
    }
    ctx->pc = 0x4792D0u;
label_4792d0:
    // 0x4792d0: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x4792d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4792d4:
    // 0x4792d4: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x4792d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4792d8:
    // 0x4792d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x4792d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4792dc:
    // 0x4792dc: 0xe6a10030  swc1        $f1, 0x30($s5)
    ctx->pc = 0x4792dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_4792e0:
    // 0x4792e0: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x4792e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4792e4:
    // 0x4792e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4792e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4792e8:
    // 0x4792e8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_4792ec:
    if (ctx->pc == 0x4792ECu) {
        ctx->pc = 0x4792F0u;
        goto label_4792f0;
    }
    ctx->pc = 0x4792E8u;
    {
        const bool branch_taken_0x4792e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4792e8) {
            ctx->pc = 0x479310u;
            goto label_479310;
        }
    }
    ctx->pc = 0x4792F0u;
label_4792f0:
    // 0x4792f0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4792f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4792f4:
    // 0x4792f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4792f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4792f8:
    // 0x4792f8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x4792f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_4792fc:
    // 0x4792fc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4792fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_479300:
    // 0x479300: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x479300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_479304:
    // 0x479304: 0x1000000a  b           . + 4 + (0xA << 2)
label_479308:
    if (ctx->pc == 0x479308u) {
        ctx->pc = 0x479308u;
            // 0x479308: 0xe6a00030  swc1        $f0, 0x30($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
        ctx->pc = 0x47930Cu;
        goto label_47930c;
    }
    ctx->pc = 0x479304u;
    {
        const bool branch_taken_0x479304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479304u;
            // 0x479308: 0xe6a00030  swc1        $f0, 0x30($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x479304) {
            ctx->pc = 0x479330u;
            goto label_479330;
        }
    }
    ctx->pc = 0x47930Cu;
label_47930c:
    // 0x47930c: 0x0  nop
    ctx->pc = 0x47930cu;
    // NOP
label_479310:
    // 0x479310: 0xe6a10034  swc1        $f1, 0x34($s5)
    ctx->pc = 0x479310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
label_479314:
    // 0x479314: 0xc11088c  jal         func_442230
label_479318:
    if (ctx->pc == 0x479318u) {
        ctx->pc = 0x479318u;
            // 0x479318: 0x8ea40038  lw          $a0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->pc = 0x47931Cu;
        goto label_47931c;
    }
    ctx->pc = 0x479314u;
    SET_GPR_U32(ctx, 31, 0x47931Cu);
    ctx->pc = 0x479318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479314u;
            // 0x479318: 0x8ea40038  lw          $a0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47931Cu; }
        if (ctx->pc != 0x47931Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47931Cu; }
        if (ctx->pc != 0x47931Cu) { return; }
    }
    ctx->pc = 0x47931Cu;
label_47931c:
    // 0x47931c: 0x8ea4003c  lw          $a0, 0x3C($s5)
    ctx->pc = 0x47931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_479320:
    // 0x479320: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_479324:
    if (ctx->pc == 0x479324u) {
        ctx->pc = 0x479328u;
        goto label_479328;
    }
    ctx->pc = 0x479320u;
    {
        const bool branch_taken_0x479320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x479320) {
            ctx->pc = 0x479330u;
            goto label_479330;
        }
    }
    ctx->pc = 0x479328u;
label_479328:
    // 0x479328: 0xc11088c  jal         func_442230
label_47932c:
    if (ctx->pc == 0x47932Cu) {
        ctx->pc = 0x479330u;
        goto label_479330;
    }
    ctx->pc = 0x479328u;
    SET_GPR_U32(ctx, 31, 0x479330u);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479330u; }
        if (ctx->pc != 0x479330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479330u; }
        if (ctx->pc != 0x479330u) { return; }
    }
    ctx->pc = 0x479330u;
label_479330:
    // 0x479330: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x479330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_479334:
    // 0x479334: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x479334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_479338:
    // 0x479338: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x479338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47933c:
    // 0x47933c: 0x8c64077c  lw          $a0, 0x77C($v1)
    ctx->pc = 0x47933cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_479340:
    // 0x479340: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x479340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_479344:
    // 0x479344: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_479348:
    if (ctx->pc == 0x479348u) {
        ctx->pc = 0x479348u;
            // 0x479348: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->pc = 0x47934Cu;
        goto label_47934c;
    }
    ctx->pc = 0x479344u;
    {
        const bool branch_taken_0x479344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x479348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479344u;
            // 0x479348: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479344) {
            ctx->pc = 0x479290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_479290;
        }
    }
    ctx->pc = 0x47934Cu;
label_47934c:
    // 0x47934c: 0x16040012  bne         $s0, $a0, . + 4 + (0x12 << 2)
label_479350:
    if (ctx->pc == 0x479350u) {
        ctx->pc = 0x479354u;
        goto label_479354;
    }
    ctx->pc = 0x47934Cu;
    {
        const bool branch_taken_0x47934c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x47934c) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x479354u;
label_479354:
    // 0x479354: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x479354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_479358:
    // 0x479358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x479358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47935c:
    // 0x47935c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x47935cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_479360:
    // 0x479360: 0x320f809  jalr        $t9
label_479364:
    if (ctx->pc == 0x479364u) {
        ctx->pc = 0x479364u;
            // 0x479364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x479368u;
        goto label_479368;
    }
    ctx->pc = 0x479360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x479368u);
        ctx->pc = 0x479364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479360u;
            // 0x479364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x479368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x479368u; }
            if (ctx->pc != 0x479368u) { return; }
        }
        }
    }
    ctx->pc = 0x479368u;
label_479368:
    // 0x479368: 0x1000000b  b           . + 4 + (0xB << 2)
label_47936c:
    if (ctx->pc == 0x47936Cu) {
        ctx->pc = 0x479370u;
        goto label_479370;
    }
    ctx->pc = 0x479368u;
    {
        const bool branch_taken_0x479368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479368) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x479370u;
label_479370:
    // 0x479370: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x479370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_479374:
    // 0x479374: 0x320f809  jalr        $t9
label_479378:
    if (ctx->pc == 0x479378u) {
        ctx->pc = 0x47937Cu;
        goto label_47937c;
    }
    ctx->pc = 0x479374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47937Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47937Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47937Cu; }
            if (ctx->pc != 0x47937Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47937Cu;
label_47937c:
    // 0x47937c: 0x10000006  b           . + 4 + (0x6 << 2)
label_479380:
    if (ctx->pc == 0x479380u) {
        ctx->pc = 0x479384u;
        goto label_479384;
    }
    ctx->pc = 0x47937Cu;
    {
        const bool branch_taken_0x47937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47937c) {
            ctx->pc = 0x479398u;
            goto label_479398;
        }
    }
    ctx->pc = 0x479384u;
label_479384:
    // 0x479384: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x479384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_479388:
    // 0x479388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x479388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47938c:
    // 0x47938c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x47938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_479390:
    // 0x479390: 0xc057b7c  jal         func_15EDF0
label_479394:
    if (ctx->pc == 0x479394u) {
        ctx->pc = 0x479394u;
            // 0x479394: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x479398u;
        goto label_479398;
    }
    ctx->pc = 0x479390u;
    SET_GPR_U32(ctx, 31, 0x479398u);
    ctx->pc = 0x479394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x479390u;
            // 0x479394: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479398u; }
        if (ctx->pc != 0x479398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479398u; }
        if (ctx->pc != 0x479398u) { return; }
    }
    ctx->pc = 0x479398u;
label_479398:
    // 0x479398: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x479398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_47939c:
    // 0x47939c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47939cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4793a0:
    // 0x4793a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4793a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4793a4:
    // 0x4793a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4793a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4793a8:
    // 0x4793a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4793a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4793ac:
    // 0x4793ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4793acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4793b0:
    // 0x4793b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4793b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4793b4:
    // 0x4793b4: 0x3e00008  jr          $ra
label_4793b8:
    if (ctx->pc == 0x4793B8u) {
        ctx->pc = 0x4793B8u;
            // 0x4793b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4793BCu;
        goto label_4793bc;
    }
    ctx->pc = 0x4793B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4793B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4793B4u;
            // 0x4793b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4793BCu;
label_4793bc:
    // 0x4793bc: 0x0  nop
    ctx->pc = 0x4793bcu;
    // NOP
}
