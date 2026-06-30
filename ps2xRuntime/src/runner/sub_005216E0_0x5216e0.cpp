#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005216E0
// Address: 0x5216e0 - 0x522200
void sub_005216E0_0x5216e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005216E0_0x5216e0");
#endif

    switch (ctx->pc) {
        case 0x5216e0u: goto label_5216e0;
        case 0x5216e4u: goto label_5216e4;
        case 0x5216e8u: goto label_5216e8;
        case 0x5216ecu: goto label_5216ec;
        case 0x5216f0u: goto label_5216f0;
        case 0x5216f4u: goto label_5216f4;
        case 0x5216f8u: goto label_5216f8;
        case 0x5216fcu: goto label_5216fc;
        case 0x521700u: goto label_521700;
        case 0x521704u: goto label_521704;
        case 0x521708u: goto label_521708;
        case 0x52170cu: goto label_52170c;
        case 0x521710u: goto label_521710;
        case 0x521714u: goto label_521714;
        case 0x521718u: goto label_521718;
        case 0x52171cu: goto label_52171c;
        case 0x521720u: goto label_521720;
        case 0x521724u: goto label_521724;
        case 0x521728u: goto label_521728;
        case 0x52172cu: goto label_52172c;
        case 0x521730u: goto label_521730;
        case 0x521734u: goto label_521734;
        case 0x521738u: goto label_521738;
        case 0x52173cu: goto label_52173c;
        case 0x521740u: goto label_521740;
        case 0x521744u: goto label_521744;
        case 0x521748u: goto label_521748;
        case 0x52174cu: goto label_52174c;
        case 0x521750u: goto label_521750;
        case 0x521754u: goto label_521754;
        case 0x521758u: goto label_521758;
        case 0x52175cu: goto label_52175c;
        case 0x521760u: goto label_521760;
        case 0x521764u: goto label_521764;
        case 0x521768u: goto label_521768;
        case 0x52176cu: goto label_52176c;
        case 0x521770u: goto label_521770;
        case 0x521774u: goto label_521774;
        case 0x521778u: goto label_521778;
        case 0x52177cu: goto label_52177c;
        case 0x521780u: goto label_521780;
        case 0x521784u: goto label_521784;
        case 0x521788u: goto label_521788;
        case 0x52178cu: goto label_52178c;
        case 0x521790u: goto label_521790;
        case 0x521794u: goto label_521794;
        case 0x521798u: goto label_521798;
        case 0x52179cu: goto label_52179c;
        case 0x5217a0u: goto label_5217a0;
        case 0x5217a4u: goto label_5217a4;
        case 0x5217a8u: goto label_5217a8;
        case 0x5217acu: goto label_5217ac;
        case 0x5217b0u: goto label_5217b0;
        case 0x5217b4u: goto label_5217b4;
        case 0x5217b8u: goto label_5217b8;
        case 0x5217bcu: goto label_5217bc;
        case 0x5217c0u: goto label_5217c0;
        case 0x5217c4u: goto label_5217c4;
        case 0x5217c8u: goto label_5217c8;
        case 0x5217ccu: goto label_5217cc;
        case 0x5217d0u: goto label_5217d0;
        case 0x5217d4u: goto label_5217d4;
        case 0x5217d8u: goto label_5217d8;
        case 0x5217dcu: goto label_5217dc;
        case 0x5217e0u: goto label_5217e0;
        case 0x5217e4u: goto label_5217e4;
        case 0x5217e8u: goto label_5217e8;
        case 0x5217ecu: goto label_5217ec;
        case 0x5217f0u: goto label_5217f0;
        case 0x5217f4u: goto label_5217f4;
        case 0x5217f8u: goto label_5217f8;
        case 0x5217fcu: goto label_5217fc;
        case 0x521800u: goto label_521800;
        case 0x521804u: goto label_521804;
        case 0x521808u: goto label_521808;
        case 0x52180cu: goto label_52180c;
        case 0x521810u: goto label_521810;
        case 0x521814u: goto label_521814;
        case 0x521818u: goto label_521818;
        case 0x52181cu: goto label_52181c;
        case 0x521820u: goto label_521820;
        case 0x521824u: goto label_521824;
        case 0x521828u: goto label_521828;
        case 0x52182cu: goto label_52182c;
        case 0x521830u: goto label_521830;
        case 0x521834u: goto label_521834;
        case 0x521838u: goto label_521838;
        case 0x52183cu: goto label_52183c;
        case 0x521840u: goto label_521840;
        case 0x521844u: goto label_521844;
        case 0x521848u: goto label_521848;
        case 0x52184cu: goto label_52184c;
        case 0x521850u: goto label_521850;
        case 0x521854u: goto label_521854;
        case 0x521858u: goto label_521858;
        case 0x52185cu: goto label_52185c;
        case 0x521860u: goto label_521860;
        case 0x521864u: goto label_521864;
        case 0x521868u: goto label_521868;
        case 0x52186cu: goto label_52186c;
        case 0x521870u: goto label_521870;
        case 0x521874u: goto label_521874;
        case 0x521878u: goto label_521878;
        case 0x52187cu: goto label_52187c;
        case 0x521880u: goto label_521880;
        case 0x521884u: goto label_521884;
        case 0x521888u: goto label_521888;
        case 0x52188cu: goto label_52188c;
        case 0x521890u: goto label_521890;
        case 0x521894u: goto label_521894;
        case 0x521898u: goto label_521898;
        case 0x52189cu: goto label_52189c;
        case 0x5218a0u: goto label_5218a0;
        case 0x5218a4u: goto label_5218a4;
        case 0x5218a8u: goto label_5218a8;
        case 0x5218acu: goto label_5218ac;
        case 0x5218b0u: goto label_5218b0;
        case 0x5218b4u: goto label_5218b4;
        case 0x5218b8u: goto label_5218b8;
        case 0x5218bcu: goto label_5218bc;
        case 0x5218c0u: goto label_5218c0;
        case 0x5218c4u: goto label_5218c4;
        case 0x5218c8u: goto label_5218c8;
        case 0x5218ccu: goto label_5218cc;
        case 0x5218d0u: goto label_5218d0;
        case 0x5218d4u: goto label_5218d4;
        case 0x5218d8u: goto label_5218d8;
        case 0x5218dcu: goto label_5218dc;
        case 0x5218e0u: goto label_5218e0;
        case 0x5218e4u: goto label_5218e4;
        case 0x5218e8u: goto label_5218e8;
        case 0x5218ecu: goto label_5218ec;
        case 0x5218f0u: goto label_5218f0;
        case 0x5218f4u: goto label_5218f4;
        case 0x5218f8u: goto label_5218f8;
        case 0x5218fcu: goto label_5218fc;
        case 0x521900u: goto label_521900;
        case 0x521904u: goto label_521904;
        case 0x521908u: goto label_521908;
        case 0x52190cu: goto label_52190c;
        case 0x521910u: goto label_521910;
        case 0x521914u: goto label_521914;
        case 0x521918u: goto label_521918;
        case 0x52191cu: goto label_52191c;
        case 0x521920u: goto label_521920;
        case 0x521924u: goto label_521924;
        case 0x521928u: goto label_521928;
        case 0x52192cu: goto label_52192c;
        case 0x521930u: goto label_521930;
        case 0x521934u: goto label_521934;
        case 0x521938u: goto label_521938;
        case 0x52193cu: goto label_52193c;
        case 0x521940u: goto label_521940;
        case 0x521944u: goto label_521944;
        case 0x521948u: goto label_521948;
        case 0x52194cu: goto label_52194c;
        case 0x521950u: goto label_521950;
        case 0x521954u: goto label_521954;
        case 0x521958u: goto label_521958;
        case 0x52195cu: goto label_52195c;
        case 0x521960u: goto label_521960;
        case 0x521964u: goto label_521964;
        case 0x521968u: goto label_521968;
        case 0x52196cu: goto label_52196c;
        case 0x521970u: goto label_521970;
        case 0x521974u: goto label_521974;
        case 0x521978u: goto label_521978;
        case 0x52197cu: goto label_52197c;
        case 0x521980u: goto label_521980;
        case 0x521984u: goto label_521984;
        case 0x521988u: goto label_521988;
        case 0x52198cu: goto label_52198c;
        case 0x521990u: goto label_521990;
        case 0x521994u: goto label_521994;
        case 0x521998u: goto label_521998;
        case 0x52199cu: goto label_52199c;
        case 0x5219a0u: goto label_5219a0;
        case 0x5219a4u: goto label_5219a4;
        case 0x5219a8u: goto label_5219a8;
        case 0x5219acu: goto label_5219ac;
        case 0x5219b0u: goto label_5219b0;
        case 0x5219b4u: goto label_5219b4;
        case 0x5219b8u: goto label_5219b8;
        case 0x5219bcu: goto label_5219bc;
        case 0x5219c0u: goto label_5219c0;
        case 0x5219c4u: goto label_5219c4;
        case 0x5219c8u: goto label_5219c8;
        case 0x5219ccu: goto label_5219cc;
        case 0x5219d0u: goto label_5219d0;
        case 0x5219d4u: goto label_5219d4;
        case 0x5219d8u: goto label_5219d8;
        case 0x5219dcu: goto label_5219dc;
        case 0x5219e0u: goto label_5219e0;
        case 0x5219e4u: goto label_5219e4;
        case 0x5219e8u: goto label_5219e8;
        case 0x5219ecu: goto label_5219ec;
        case 0x5219f0u: goto label_5219f0;
        case 0x5219f4u: goto label_5219f4;
        case 0x5219f8u: goto label_5219f8;
        case 0x5219fcu: goto label_5219fc;
        case 0x521a00u: goto label_521a00;
        case 0x521a04u: goto label_521a04;
        case 0x521a08u: goto label_521a08;
        case 0x521a0cu: goto label_521a0c;
        case 0x521a10u: goto label_521a10;
        case 0x521a14u: goto label_521a14;
        case 0x521a18u: goto label_521a18;
        case 0x521a1cu: goto label_521a1c;
        case 0x521a20u: goto label_521a20;
        case 0x521a24u: goto label_521a24;
        case 0x521a28u: goto label_521a28;
        case 0x521a2cu: goto label_521a2c;
        case 0x521a30u: goto label_521a30;
        case 0x521a34u: goto label_521a34;
        case 0x521a38u: goto label_521a38;
        case 0x521a3cu: goto label_521a3c;
        case 0x521a40u: goto label_521a40;
        case 0x521a44u: goto label_521a44;
        case 0x521a48u: goto label_521a48;
        case 0x521a4cu: goto label_521a4c;
        case 0x521a50u: goto label_521a50;
        case 0x521a54u: goto label_521a54;
        case 0x521a58u: goto label_521a58;
        case 0x521a5cu: goto label_521a5c;
        case 0x521a60u: goto label_521a60;
        case 0x521a64u: goto label_521a64;
        case 0x521a68u: goto label_521a68;
        case 0x521a6cu: goto label_521a6c;
        case 0x521a70u: goto label_521a70;
        case 0x521a74u: goto label_521a74;
        case 0x521a78u: goto label_521a78;
        case 0x521a7cu: goto label_521a7c;
        case 0x521a80u: goto label_521a80;
        case 0x521a84u: goto label_521a84;
        case 0x521a88u: goto label_521a88;
        case 0x521a8cu: goto label_521a8c;
        case 0x521a90u: goto label_521a90;
        case 0x521a94u: goto label_521a94;
        case 0x521a98u: goto label_521a98;
        case 0x521a9cu: goto label_521a9c;
        case 0x521aa0u: goto label_521aa0;
        case 0x521aa4u: goto label_521aa4;
        case 0x521aa8u: goto label_521aa8;
        case 0x521aacu: goto label_521aac;
        case 0x521ab0u: goto label_521ab0;
        case 0x521ab4u: goto label_521ab4;
        case 0x521ab8u: goto label_521ab8;
        case 0x521abcu: goto label_521abc;
        case 0x521ac0u: goto label_521ac0;
        case 0x521ac4u: goto label_521ac4;
        case 0x521ac8u: goto label_521ac8;
        case 0x521accu: goto label_521acc;
        case 0x521ad0u: goto label_521ad0;
        case 0x521ad4u: goto label_521ad4;
        case 0x521ad8u: goto label_521ad8;
        case 0x521adcu: goto label_521adc;
        case 0x521ae0u: goto label_521ae0;
        case 0x521ae4u: goto label_521ae4;
        case 0x521ae8u: goto label_521ae8;
        case 0x521aecu: goto label_521aec;
        case 0x521af0u: goto label_521af0;
        case 0x521af4u: goto label_521af4;
        case 0x521af8u: goto label_521af8;
        case 0x521afcu: goto label_521afc;
        case 0x521b00u: goto label_521b00;
        case 0x521b04u: goto label_521b04;
        case 0x521b08u: goto label_521b08;
        case 0x521b0cu: goto label_521b0c;
        case 0x521b10u: goto label_521b10;
        case 0x521b14u: goto label_521b14;
        case 0x521b18u: goto label_521b18;
        case 0x521b1cu: goto label_521b1c;
        case 0x521b20u: goto label_521b20;
        case 0x521b24u: goto label_521b24;
        case 0x521b28u: goto label_521b28;
        case 0x521b2cu: goto label_521b2c;
        case 0x521b30u: goto label_521b30;
        case 0x521b34u: goto label_521b34;
        case 0x521b38u: goto label_521b38;
        case 0x521b3cu: goto label_521b3c;
        case 0x521b40u: goto label_521b40;
        case 0x521b44u: goto label_521b44;
        case 0x521b48u: goto label_521b48;
        case 0x521b4cu: goto label_521b4c;
        case 0x521b50u: goto label_521b50;
        case 0x521b54u: goto label_521b54;
        case 0x521b58u: goto label_521b58;
        case 0x521b5cu: goto label_521b5c;
        case 0x521b60u: goto label_521b60;
        case 0x521b64u: goto label_521b64;
        case 0x521b68u: goto label_521b68;
        case 0x521b6cu: goto label_521b6c;
        case 0x521b70u: goto label_521b70;
        case 0x521b74u: goto label_521b74;
        case 0x521b78u: goto label_521b78;
        case 0x521b7cu: goto label_521b7c;
        case 0x521b80u: goto label_521b80;
        case 0x521b84u: goto label_521b84;
        case 0x521b88u: goto label_521b88;
        case 0x521b8cu: goto label_521b8c;
        case 0x521b90u: goto label_521b90;
        case 0x521b94u: goto label_521b94;
        case 0x521b98u: goto label_521b98;
        case 0x521b9cu: goto label_521b9c;
        case 0x521ba0u: goto label_521ba0;
        case 0x521ba4u: goto label_521ba4;
        case 0x521ba8u: goto label_521ba8;
        case 0x521bacu: goto label_521bac;
        case 0x521bb0u: goto label_521bb0;
        case 0x521bb4u: goto label_521bb4;
        case 0x521bb8u: goto label_521bb8;
        case 0x521bbcu: goto label_521bbc;
        case 0x521bc0u: goto label_521bc0;
        case 0x521bc4u: goto label_521bc4;
        case 0x521bc8u: goto label_521bc8;
        case 0x521bccu: goto label_521bcc;
        case 0x521bd0u: goto label_521bd0;
        case 0x521bd4u: goto label_521bd4;
        case 0x521bd8u: goto label_521bd8;
        case 0x521bdcu: goto label_521bdc;
        case 0x521be0u: goto label_521be0;
        case 0x521be4u: goto label_521be4;
        case 0x521be8u: goto label_521be8;
        case 0x521becu: goto label_521bec;
        case 0x521bf0u: goto label_521bf0;
        case 0x521bf4u: goto label_521bf4;
        case 0x521bf8u: goto label_521bf8;
        case 0x521bfcu: goto label_521bfc;
        case 0x521c00u: goto label_521c00;
        case 0x521c04u: goto label_521c04;
        case 0x521c08u: goto label_521c08;
        case 0x521c0cu: goto label_521c0c;
        case 0x521c10u: goto label_521c10;
        case 0x521c14u: goto label_521c14;
        case 0x521c18u: goto label_521c18;
        case 0x521c1cu: goto label_521c1c;
        case 0x521c20u: goto label_521c20;
        case 0x521c24u: goto label_521c24;
        case 0x521c28u: goto label_521c28;
        case 0x521c2cu: goto label_521c2c;
        case 0x521c30u: goto label_521c30;
        case 0x521c34u: goto label_521c34;
        case 0x521c38u: goto label_521c38;
        case 0x521c3cu: goto label_521c3c;
        case 0x521c40u: goto label_521c40;
        case 0x521c44u: goto label_521c44;
        case 0x521c48u: goto label_521c48;
        case 0x521c4cu: goto label_521c4c;
        case 0x521c50u: goto label_521c50;
        case 0x521c54u: goto label_521c54;
        case 0x521c58u: goto label_521c58;
        case 0x521c5cu: goto label_521c5c;
        case 0x521c60u: goto label_521c60;
        case 0x521c64u: goto label_521c64;
        case 0x521c68u: goto label_521c68;
        case 0x521c6cu: goto label_521c6c;
        case 0x521c70u: goto label_521c70;
        case 0x521c74u: goto label_521c74;
        case 0x521c78u: goto label_521c78;
        case 0x521c7cu: goto label_521c7c;
        case 0x521c80u: goto label_521c80;
        case 0x521c84u: goto label_521c84;
        case 0x521c88u: goto label_521c88;
        case 0x521c8cu: goto label_521c8c;
        case 0x521c90u: goto label_521c90;
        case 0x521c94u: goto label_521c94;
        case 0x521c98u: goto label_521c98;
        case 0x521c9cu: goto label_521c9c;
        case 0x521ca0u: goto label_521ca0;
        case 0x521ca4u: goto label_521ca4;
        case 0x521ca8u: goto label_521ca8;
        case 0x521cacu: goto label_521cac;
        case 0x521cb0u: goto label_521cb0;
        case 0x521cb4u: goto label_521cb4;
        case 0x521cb8u: goto label_521cb8;
        case 0x521cbcu: goto label_521cbc;
        case 0x521cc0u: goto label_521cc0;
        case 0x521cc4u: goto label_521cc4;
        case 0x521cc8u: goto label_521cc8;
        case 0x521cccu: goto label_521ccc;
        case 0x521cd0u: goto label_521cd0;
        case 0x521cd4u: goto label_521cd4;
        case 0x521cd8u: goto label_521cd8;
        case 0x521cdcu: goto label_521cdc;
        case 0x521ce0u: goto label_521ce0;
        case 0x521ce4u: goto label_521ce4;
        case 0x521ce8u: goto label_521ce8;
        case 0x521cecu: goto label_521cec;
        case 0x521cf0u: goto label_521cf0;
        case 0x521cf4u: goto label_521cf4;
        case 0x521cf8u: goto label_521cf8;
        case 0x521cfcu: goto label_521cfc;
        case 0x521d00u: goto label_521d00;
        case 0x521d04u: goto label_521d04;
        case 0x521d08u: goto label_521d08;
        case 0x521d0cu: goto label_521d0c;
        case 0x521d10u: goto label_521d10;
        case 0x521d14u: goto label_521d14;
        case 0x521d18u: goto label_521d18;
        case 0x521d1cu: goto label_521d1c;
        case 0x521d20u: goto label_521d20;
        case 0x521d24u: goto label_521d24;
        case 0x521d28u: goto label_521d28;
        case 0x521d2cu: goto label_521d2c;
        case 0x521d30u: goto label_521d30;
        case 0x521d34u: goto label_521d34;
        case 0x521d38u: goto label_521d38;
        case 0x521d3cu: goto label_521d3c;
        case 0x521d40u: goto label_521d40;
        case 0x521d44u: goto label_521d44;
        case 0x521d48u: goto label_521d48;
        case 0x521d4cu: goto label_521d4c;
        case 0x521d50u: goto label_521d50;
        case 0x521d54u: goto label_521d54;
        case 0x521d58u: goto label_521d58;
        case 0x521d5cu: goto label_521d5c;
        case 0x521d60u: goto label_521d60;
        case 0x521d64u: goto label_521d64;
        case 0x521d68u: goto label_521d68;
        case 0x521d6cu: goto label_521d6c;
        case 0x521d70u: goto label_521d70;
        case 0x521d74u: goto label_521d74;
        case 0x521d78u: goto label_521d78;
        case 0x521d7cu: goto label_521d7c;
        case 0x521d80u: goto label_521d80;
        case 0x521d84u: goto label_521d84;
        case 0x521d88u: goto label_521d88;
        case 0x521d8cu: goto label_521d8c;
        case 0x521d90u: goto label_521d90;
        case 0x521d94u: goto label_521d94;
        case 0x521d98u: goto label_521d98;
        case 0x521d9cu: goto label_521d9c;
        case 0x521da0u: goto label_521da0;
        case 0x521da4u: goto label_521da4;
        case 0x521da8u: goto label_521da8;
        case 0x521dacu: goto label_521dac;
        case 0x521db0u: goto label_521db0;
        case 0x521db4u: goto label_521db4;
        case 0x521db8u: goto label_521db8;
        case 0x521dbcu: goto label_521dbc;
        case 0x521dc0u: goto label_521dc0;
        case 0x521dc4u: goto label_521dc4;
        case 0x521dc8u: goto label_521dc8;
        case 0x521dccu: goto label_521dcc;
        case 0x521dd0u: goto label_521dd0;
        case 0x521dd4u: goto label_521dd4;
        case 0x521dd8u: goto label_521dd8;
        case 0x521ddcu: goto label_521ddc;
        case 0x521de0u: goto label_521de0;
        case 0x521de4u: goto label_521de4;
        case 0x521de8u: goto label_521de8;
        case 0x521decu: goto label_521dec;
        case 0x521df0u: goto label_521df0;
        case 0x521df4u: goto label_521df4;
        case 0x521df8u: goto label_521df8;
        case 0x521dfcu: goto label_521dfc;
        case 0x521e00u: goto label_521e00;
        case 0x521e04u: goto label_521e04;
        case 0x521e08u: goto label_521e08;
        case 0x521e0cu: goto label_521e0c;
        case 0x521e10u: goto label_521e10;
        case 0x521e14u: goto label_521e14;
        case 0x521e18u: goto label_521e18;
        case 0x521e1cu: goto label_521e1c;
        case 0x521e20u: goto label_521e20;
        case 0x521e24u: goto label_521e24;
        case 0x521e28u: goto label_521e28;
        case 0x521e2cu: goto label_521e2c;
        case 0x521e30u: goto label_521e30;
        case 0x521e34u: goto label_521e34;
        case 0x521e38u: goto label_521e38;
        case 0x521e3cu: goto label_521e3c;
        case 0x521e40u: goto label_521e40;
        case 0x521e44u: goto label_521e44;
        case 0x521e48u: goto label_521e48;
        case 0x521e4cu: goto label_521e4c;
        case 0x521e50u: goto label_521e50;
        case 0x521e54u: goto label_521e54;
        case 0x521e58u: goto label_521e58;
        case 0x521e5cu: goto label_521e5c;
        case 0x521e60u: goto label_521e60;
        case 0x521e64u: goto label_521e64;
        case 0x521e68u: goto label_521e68;
        case 0x521e6cu: goto label_521e6c;
        case 0x521e70u: goto label_521e70;
        case 0x521e74u: goto label_521e74;
        case 0x521e78u: goto label_521e78;
        case 0x521e7cu: goto label_521e7c;
        case 0x521e80u: goto label_521e80;
        case 0x521e84u: goto label_521e84;
        case 0x521e88u: goto label_521e88;
        case 0x521e8cu: goto label_521e8c;
        case 0x521e90u: goto label_521e90;
        case 0x521e94u: goto label_521e94;
        case 0x521e98u: goto label_521e98;
        case 0x521e9cu: goto label_521e9c;
        case 0x521ea0u: goto label_521ea0;
        case 0x521ea4u: goto label_521ea4;
        case 0x521ea8u: goto label_521ea8;
        case 0x521eacu: goto label_521eac;
        case 0x521eb0u: goto label_521eb0;
        case 0x521eb4u: goto label_521eb4;
        case 0x521eb8u: goto label_521eb8;
        case 0x521ebcu: goto label_521ebc;
        case 0x521ec0u: goto label_521ec0;
        case 0x521ec4u: goto label_521ec4;
        case 0x521ec8u: goto label_521ec8;
        case 0x521eccu: goto label_521ecc;
        case 0x521ed0u: goto label_521ed0;
        case 0x521ed4u: goto label_521ed4;
        case 0x521ed8u: goto label_521ed8;
        case 0x521edcu: goto label_521edc;
        case 0x521ee0u: goto label_521ee0;
        case 0x521ee4u: goto label_521ee4;
        case 0x521ee8u: goto label_521ee8;
        case 0x521eecu: goto label_521eec;
        case 0x521ef0u: goto label_521ef0;
        case 0x521ef4u: goto label_521ef4;
        case 0x521ef8u: goto label_521ef8;
        case 0x521efcu: goto label_521efc;
        case 0x521f00u: goto label_521f00;
        case 0x521f04u: goto label_521f04;
        case 0x521f08u: goto label_521f08;
        case 0x521f0cu: goto label_521f0c;
        case 0x521f10u: goto label_521f10;
        case 0x521f14u: goto label_521f14;
        case 0x521f18u: goto label_521f18;
        case 0x521f1cu: goto label_521f1c;
        case 0x521f20u: goto label_521f20;
        case 0x521f24u: goto label_521f24;
        case 0x521f28u: goto label_521f28;
        case 0x521f2cu: goto label_521f2c;
        case 0x521f30u: goto label_521f30;
        case 0x521f34u: goto label_521f34;
        case 0x521f38u: goto label_521f38;
        case 0x521f3cu: goto label_521f3c;
        case 0x521f40u: goto label_521f40;
        case 0x521f44u: goto label_521f44;
        case 0x521f48u: goto label_521f48;
        case 0x521f4cu: goto label_521f4c;
        case 0x521f50u: goto label_521f50;
        case 0x521f54u: goto label_521f54;
        case 0x521f58u: goto label_521f58;
        case 0x521f5cu: goto label_521f5c;
        case 0x521f60u: goto label_521f60;
        case 0x521f64u: goto label_521f64;
        case 0x521f68u: goto label_521f68;
        case 0x521f6cu: goto label_521f6c;
        case 0x521f70u: goto label_521f70;
        case 0x521f74u: goto label_521f74;
        case 0x521f78u: goto label_521f78;
        case 0x521f7cu: goto label_521f7c;
        case 0x521f80u: goto label_521f80;
        case 0x521f84u: goto label_521f84;
        case 0x521f88u: goto label_521f88;
        case 0x521f8cu: goto label_521f8c;
        case 0x521f90u: goto label_521f90;
        case 0x521f94u: goto label_521f94;
        case 0x521f98u: goto label_521f98;
        case 0x521f9cu: goto label_521f9c;
        case 0x521fa0u: goto label_521fa0;
        case 0x521fa4u: goto label_521fa4;
        case 0x521fa8u: goto label_521fa8;
        case 0x521facu: goto label_521fac;
        case 0x521fb0u: goto label_521fb0;
        case 0x521fb4u: goto label_521fb4;
        case 0x521fb8u: goto label_521fb8;
        case 0x521fbcu: goto label_521fbc;
        case 0x521fc0u: goto label_521fc0;
        case 0x521fc4u: goto label_521fc4;
        case 0x521fc8u: goto label_521fc8;
        case 0x521fccu: goto label_521fcc;
        case 0x521fd0u: goto label_521fd0;
        case 0x521fd4u: goto label_521fd4;
        case 0x521fd8u: goto label_521fd8;
        case 0x521fdcu: goto label_521fdc;
        case 0x521fe0u: goto label_521fe0;
        case 0x521fe4u: goto label_521fe4;
        case 0x521fe8u: goto label_521fe8;
        case 0x521fecu: goto label_521fec;
        case 0x521ff0u: goto label_521ff0;
        case 0x521ff4u: goto label_521ff4;
        case 0x521ff8u: goto label_521ff8;
        case 0x521ffcu: goto label_521ffc;
        case 0x522000u: goto label_522000;
        case 0x522004u: goto label_522004;
        case 0x522008u: goto label_522008;
        case 0x52200cu: goto label_52200c;
        case 0x522010u: goto label_522010;
        case 0x522014u: goto label_522014;
        case 0x522018u: goto label_522018;
        case 0x52201cu: goto label_52201c;
        case 0x522020u: goto label_522020;
        case 0x522024u: goto label_522024;
        case 0x522028u: goto label_522028;
        case 0x52202cu: goto label_52202c;
        case 0x522030u: goto label_522030;
        case 0x522034u: goto label_522034;
        case 0x522038u: goto label_522038;
        case 0x52203cu: goto label_52203c;
        case 0x522040u: goto label_522040;
        case 0x522044u: goto label_522044;
        case 0x522048u: goto label_522048;
        case 0x52204cu: goto label_52204c;
        case 0x522050u: goto label_522050;
        case 0x522054u: goto label_522054;
        case 0x522058u: goto label_522058;
        case 0x52205cu: goto label_52205c;
        case 0x522060u: goto label_522060;
        case 0x522064u: goto label_522064;
        case 0x522068u: goto label_522068;
        case 0x52206cu: goto label_52206c;
        case 0x522070u: goto label_522070;
        case 0x522074u: goto label_522074;
        case 0x522078u: goto label_522078;
        case 0x52207cu: goto label_52207c;
        case 0x522080u: goto label_522080;
        case 0x522084u: goto label_522084;
        case 0x522088u: goto label_522088;
        case 0x52208cu: goto label_52208c;
        case 0x522090u: goto label_522090;
        case 0x522094u: goto label_522094;
        case 0x522098u: goto label_522098;
        case 0x52209cu: goto label_52209c;
        case 0x5220a0u: goto label_5220a0;
        case 0x5220a4u: goto label_5220a4;
        case 0x5220a8u: goto label_5220a8;
        case 0x5220acu: goto label_5220ac;
        case 0x5220b0u: goto label_5220b0;
        case 0x5220b4u: goto label_5220b4;
        case 0x5220b8u: goto label_5220b8;
        case 0x5220bcu: goto label_5220bc;
        case 0x5220c0u: goto label_5220c0;
        case 0x5220c4u: goto label_5220c4;
        case 0x5220c8u: goto label_5220c8;
        case 0x5220ccu: goto label_5220cc;
        case 0x5220d0u: goto label_5220d0;
        case 0x5220d4u: goto label_5220d4;
        case 0x5220d8u: goto label_5220d8;
        case 0x5220dcu: goto label_5220dc;
        case 0x5220e0u: goto label_5220e0;
        case 0x5220e4u: goto label_5220e4;
        case 0x5220e8u: goto label_5220e8;
        case 0x5220ecu: goto label_5220ec;
        case 0x5220f0u: goto label_5220f0;
        case 0x5220f4u: goto label_5220f4;
        case 0x5220f8u: goto label_5220f8;
        case 0x5220fcu: goto label_5220fc;
        case 0x522100u: goto label_522100;
        case 0x522104u: goto label_522104;
        case 0x522108u: goto label_522108;
        case 0x52210cu: goto label_52210c;
        case 0x522110u: goto label_522110;
        case 0x522114u: goto label_522114;
        case 0x522118u: goto label_522118;
        case 0x52211cu: goto label_52211c;
        case 0x522120u: goto label_522120;
        case 0x522124u: goto label_522124;
        case 0x522128u: goto label_522128;
        case 0x52212cu: goto label_52212c;
        case 0x522130u: goto label_522130;
        case 0x522134u: goto label_522134;
        case 0x522138u: goto label_522138;
        case 0x52213cu: goto label_52213c;
        case 0x522140u: goto label_522140;
        case 0x522144u: goto label_522144;
        case 0x522148u: goto label_522148;
        case 0x52214cu: goto label_52214c;
        case 0x522150u: goto label_522150;
        case 0x522154u: goto label_522154;
        case 0x522158u: goto label_522158;
        case 0x52215cu: goto label_52215c;
        case 0x522160u: goto label_522160;
        case 0x522164u: goto label_522164;
        case 0x522168u: goto label_522168;
        case 0x52216cu: goto label_52216c;
        case 0x522170u: goto label_522170;
        case 0x522174u: goto label_522174;
        case 0x522178u: goto label_522178;
        case 0x52217cu: goto label_52217c;
        case 0x522180u: goto label_522180;
        case 0x522184u: goto label_522184;
        case 0x522188u: goto label_522188;
        case 0x52218cu: goto label_52218c;
        case 0x522190u: goto label_522190;
        case 0x522194u: goto label_522194;
        case 0x522198u: goto label_522198;
        case 0x52219cu: goto label_52219c;
        case 0x5221a0u: goto label_5221a0;
        case 0x5221a4u: goto label_5221a4;
        case 0x5221a8u: goto label_5221a8;
        case 0x5221acu: goto label_5221ac;
        case 0x5221b0u: goto label_5221b0;
        case 0x5221b4u: goto label_5221b4;
        case 0x5221b8u: goto label_5221b8;
        case 0x5221bcu: goto label_5221bc;
        case 0x5221c0u: goto label_5221c0;
        case 0x5221c4u: goto label_5221c4;
        case 0x5221c8u: goto label_5221c8;
        case 0x5221ccu: goto label_5221cc;
        case 0x5221d0u: goto label_5221d0;
        case 0x5221d4u: goto label_5221d4;
        case 0x5221d8u: goto label_5221d8;
        case 0x5221dcu: goto label_5221dc;
        case 0x5221e0u: goto label_5221e0;
        case 0x5221e4u: goto label_5221e4;
        case 0x5221e8u: goto label_5221e8;
        case 0x5221ecu: goto label_5221ec;
        case 0x5221f0u: goto label_5221f0;
        case 0x5221f4u: goto label_5221f4;
        case 0x5221f8u: goto label_5221f8;
        case 0x5221fcu: goto label_5221fc;
        default: break;
    }

    ctx->pc = 0x5216e0u;

label_5216e0:
    // 0x5216e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5216e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_5216e4:
    // 0x5216e4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x5216e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5216e8:
    // 0x5216e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5216e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5216ec:
    // 0x5216ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5216ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5216f0:
    // 0x5216f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5216f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5216f4:
    // 0x5216f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5216f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5216f8:
    // 0x5216f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5216f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5216fc:
    // 0x5216fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5216fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521700:
    // 0x521700: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x521700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_521704:
    // 0x521704: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x521704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_521708:
    // 0x521708: 0xc10ca68  jal         func_4329A0
label_52170c:
    if (ctx->pc == 0x52170Cu) {
        ctx->pc = 0x52170Cu;
            // 0x52170c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x521710u;
        goto label_521710;
    }
    ctx->pc = 0x521708u;
    SET_GPR_U32(ctx, 31, 0x521710u);
    ctx->pc = 0x52170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521708u;
            // 0x52170c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521710u; }
        if (ctx->pc != 0x521710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521710u; }
        if (ctx->pc != 0x521710u) { return; }
    }
    ctx->pc = 0x521710u;
label_521710:
    // 0x521710: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x521710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_521714:
    // 0x521714: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x521714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_521718:
    // 0x521718: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x521718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_52171c:
    // 0x52171c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_521720:
    // 0x521720: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x521720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_521724:
    // 0x521724: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x521724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_521728:
    // 0x521728: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x521728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_52172c:
    // 0x52172c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_521730:
    // 0x521730: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x521730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_521734:
    // 0x521734: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x521734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_521738:
    // 0x521738: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x521738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_52173c:
    // 0x52173c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x52173cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_521740:
    // 0x521740: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x521740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_521744:
    // 0x521744: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x521744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_521748:
    // 0x521748: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x521748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_52174c:
    // 0x52174c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x52174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_521750:
    // 0x521750: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x521750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_521754:
    // 0x521754: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x521754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_521758:
    // 0x521758: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x521758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_52175c:
    // 0x52175c: 0xc0582cc  jal         func_160B30
label_521760:
    if (ctx->pc == 0x521760u) {
        ctx->pc = 0x521760u;
            // 0x521760: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x521764u;
        goto label_521764;
    }
    ctx->pc = 0x52175Cu;
    SET_GPR_U32(ctx, 31, 0x521764u);
    ctx->pc = 0x521760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52175Cu;
            // 0x521760: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521764u; }
        if (ctx->pc != 0x521764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521764u; }
        if (ctx->pc != 0x521764u) { return; }
    }
    ctx->pc = 0x521764u;
label_521764:
    // 0x521764: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x521764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_521768:
    // 0x521768: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x521768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_52176c:
    // 0x52176c: 0x24635eb0  addiu       $v1, $v1, 0x5EB0
    ctx->pc = 0x52176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24240));
label_521770:
    // 0x521770: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x521770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_521774:
    // 0x521774: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x521774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_521778:
    // 0x521778: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x521778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52177c:
    // 0x52177c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_521780:
    // 0x521780: 0xac44ab48  sw          $a0, -0x54B8($v0)
    ctx->pc = 0x521780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945608), GPR_U32(ctx, 4));
label_521784:
    // 0x521784: 0x24635ec0  addiu       $v1, $v1, 0x5EC0
    ctx->pc = 0x521784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
label_521788:
    // 0x521788: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x521788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52178c:
    // 0x52178c: 0x24425ef8  addiu       $v0, $v0, 0x5EF8
    ctx->pc = 0x52178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24312));
label_521790:
    // 0x521790: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x521790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_521794:
    // 0x521794: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x521794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_521798:
    // 0x521798: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x521798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_52179c:
    // 0x52179c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x52179cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_5217a0:
    // 0x5217a0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x5217a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_5217a4:
    // 0x5217a4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x5217a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_5217a8:
    // 0x5217a8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x5217a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_5217ac:
    // 0x5217ac: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x5217acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_5217b0:
    // 0x5217b0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x5217b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_5217b4:
    // 0x5217b4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x5217b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_5217b8:
    // 0x5217b8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x5217b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_5217bc:
    // 0x5217bc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x5217bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_5217c0:
    // 0x5217c0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x5217c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_5217c4:
    // 0x5217c4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_5217c8:
    if (ctx->pc == 0x5217C8u) {
        ctx->pc = 0x5217CCu;
        goto label_5217cc;
    }
    ctx->pc = 0x5217C4u;
    {
        const bool branch_taken_0x5217c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5217c4) {
            ctx->pc = 0x521858u;
            goto label_521858;
        }
    }
    ctx->pc = 0x5217CCu;
label_5217cc:
    // 0x5217cc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x5217ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_5217d0:
    // 0x5217d0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x5217d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_5217d4:
    // 0x5217d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x5217d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_5217d8:
    // 0x5217d8: 0xc040138  jal         func_1004E0
label_5217dc:
    if (ctx->pc == 0x5217DCu) {
        ctx->pc = 0x5217DCu;
            // 0x5217dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x5217E0u;
        goto label_5217e0;
    }
    ctx->pc = 0x5217D8u;
    SET_GPR_U32(ctx, 31, 0x5217E0u);
    ctx->pc = 0x5217DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5217D8u;
            // 0x5217dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5217E0u; }
        if (ctx->pc != 0x5217E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5217E0u; }
        if (ctx->pc != 0x5217E0u) { return; }
    }
    ctx->pc = 0x5217E0u;
label_5217e0:
    // 0x5217e0: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x5217e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_5217e4:
    // 0x5217e4: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x5217e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
label_5217e8:
    // 0x5217e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5217e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5217ec:
    // 0x5217ec: 0x24a51880  addiu       $a1, $a1, 0x1880
    ctx->pc = 0x5217ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6272));
label_5217f0:
    // 0x5217f0: 0x24c60e70  addiu       $a2, $a2, 0xE70
    ctx->pc = 0x5217f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3696));
label_5217f4:
    // 0x5217f4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x5217f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_5217f8:
    // 0x5217f8: 0xc040840  jal         func_102100
label_5217fc:
    if (ctx->pc == 0x5217FCu) {
        ctx->pc = 0x5217FCu;
            // 0x5217fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521800u;
        goto label_521800;
    }
    ctx->pc = 0x5217F8u;
    SET_GPR_U32(ctx, 31, 0x521800u);
    ctx->pc = 0x5217FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5217F8u;
            // 0x5217fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521800u; }
        if (ctx->pc != 0x521800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521800u; }
        if (ctx->pc != 0x521800u) { return; }
    }
    ctx->pc = 0x521800u;
label_521800:
    // 0x521800: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x521800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_521804:
    // 0x521804: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x521804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521808:
    // 0x521808: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x521808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_52180c:
    // 0x52180c: 0xc0788fc  jal         func_1E23F0
label_521810:
    if (ctx->pc == 0x521810u) {
        ctx->pc = 0x521810u;
            // 0x521810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521814u;
        goto label_521814;
    }
    ctx->pc = 0x52180Cu;
    SET_GPR_U32(ctx, 31, 0x521814u);
    ctx->pc = 0x521810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52180Cu;
            // 0x521810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521814u; }
        if (ctx->pc != 0x521814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521814u; }
        if (ctx->pc != 0x521814u) { return; }
    }
    ctx->pc = 0x521814u;
label_521814:
    // 0x521814: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x521814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_521818:
    // 0x521818: 0xc0788fc  jal         func_1E23F0
label_52181c:
    if (ctx->pc == 0x52181Cu) {
        ctx->pc = 0x52181Cu;
            // 0x52181c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521820u;
        goto label_521820;
    }
    ctx->pc = 0x521818u;
    SET_GPR_U32(ctx, 31, 0x521820u);
    ctx->pc = 0x52181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521818u;
            // 0x52181c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521820u; }
        if (ctx->pc != 0x521820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521820u; }
        if (ctx->pc != 0x521820u) { return; }
    }
    ctx->pc = 0x521820u;
label_521820:
    // 0x521820: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x521820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521824:
    // 0x521824: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x521824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_521828:
    // 0x521828: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x521828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_52182c:
    // 0x52182c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x52182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_521830:
    // 0x521830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x521830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521834:
    // 0x521834: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x521834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_521838:
    // 0x521838: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x521838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_52183c:
    // 0x52183c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_521840:
    // 0x521840: 0xc0a997c  jal         func_2A65F0
label_521844:
    if (ctx->pc == 0x521844u) {
        ctx->pc = 0x521844u;
            // 0x521844: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x521848u;
        goto label_521848;
    }
    ctx->pc = 0x521840u;
    SET_GPR_U32(ctx, 31, 0x521848u);
    ctx->pc = 0x521844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521840u;
            // 0x521844: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521848u; }
        if (ctx->pc != 0x521848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521848u; }
        if (ctx->pc != 0x521848u) { return; }
    }
    ctx->pc = 0x521848u;
label_521848:
    // 0x521848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x521848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_52184c:
    // 0x52184c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x52184cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_521850:
    // 0x521850: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_521854:
    if (ctx->pc == 0x521854u) {
        ctx->pc = 0x521854u;
            // 0x521854: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x521858u;
        goto label_521858;
    }
    ctx->pc = 0x521850u;
    {
        const bool branch_taken_0x521850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x521854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521850u;
            // 0x521854: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521850) {
            ctx->pc = 0x521824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_521824;
        }
    }
    ctx->pc = 0x521858u;
label_521858:
    // 0x521858: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x521858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52185c:
    // 0x52185c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_521860:
    // 0x521860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x521860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_521864:
    // 0x521864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x521864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_521868:
    // 0x521868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x521868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52186c:
    // 0x52186c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52186cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521870:
    // 0x521870: 0x3e00008  jr          $ra
label_521874:
    if (ctx->pc == 0x521874u) {
        ctx->pc = 0x521874u;
            // 0x521874: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x521878u;
        goto label_521878;
    }
    ctx->pc = 0x521870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521870u;
            // 0x521874: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521878u;
label_521878:
    // 0x521878: 0x0  nop
    ctx->pc = 0x521878u;
    // NOP
label_52187c:
    // 0x52187c: 0x0  nop
    ctx->pc = 0x52187cu;
    // NOP
label_521880:
    // 0x521880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x521880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_521884:
    // 0x521884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x521884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_521888:
    // 0x521888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52188c:
    // 0x52188c: 0xc0aeebc  jal         func_2BBAF0
label_521890:
    if (ctx->pc == 0x521890u) {
        ctx->pc = 0x521890u;
            // 0x521890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521894u;
        goto label_521894;
    }
    ctx->pc = 0x52188Cu;
    SET_GPR_U32(ctx, 31, 0x521894u);
    ctx->pc = 0x521890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52188Cu;
            // 0x521890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521894u; }
        if (ctx->pc != 0x521894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521894u; }
        if (ctx->pc != 0x521894u) { return; }
    }
    ctx->pc = 0x521894u;
label_521894:
    // 0x521894: 0xc0aeeb4  jal         func_2BBAD0
label_521898:
    if (ctx->pc == 0x521898u) {
        ctx->pc = 0x521898u;
            // 0x521898: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x52189Cu;
        goto label_52189c;
    }
    ctx->pc = 0x521894u;
    SET_GPR_U32(ctx, 31, 0x52189Cu);
    ctx->pc = 0x521898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521894u;
            // 0x521898: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52189Cu; }
        if (ctx->pc != 0x52189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52189Cu; }
        if (ctx->pc != 0x52189Cu) { return; }
    }
    ctx->pc = 0x52189Cu;
label_52189c:
    // 0x52189c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52189cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5218a0:
    // 0x5218a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5218a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5218a4:
    // 0x5218a4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x5218a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_5218a8:
    // 0x5218a8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x5218a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_5218ac:
    // 0x5218ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5218acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5218b0:
    // 0x5218b0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x5218b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_5218b4:
    // 0x5218b4: 0xc0aeea4  jal         func_2BBA90
label_5218b8:
    if (ctx->pc == 0x5218B8u) {
        ctx->pc = 0x5218B8u;
            // 0x5218b8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x5218BCu;
        goto label_5218bc;
    }
    ctx->pc = 0x5218B4u;
    SET_GPR_U32(ctx, 31, 0x5218BCu);
    ctx->pc = 0x5218B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5218B4u;
            // 0x5218b8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5218BCu; }
        if (ctx->pc != 0x5218BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5218BCu; }
        if (ctx->pc != 0x5218BCu) { return; }
    }
    ctx->pc = 0x5218BCu;
label_5218bc:
    // 0x5218bc: 0xc0aee8c  jal         func_2BBA30
label_5218c0:
    if (ctx->pc == 0x5218C0u) {
        ctx->pc = 0x5218C0u;
            // 0x5218c0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x5218C4u;
        goto label_5218c4;
    }
    ctx->pc = 0x5218BCu;
    SET_GPR_U32(ctx, 31, 0x5218C4u);
    ctx->pc = 0x5218C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5218BCu;
            // 0x5218c0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5218C4u; }
        if (ctx->pc != 0x5218C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5218C4u; }
        if (ctx->pc != 0x5218C4u) { return; }
    }
    ctx->pc = 0x5218C4u;
label_5218c4:
    // 0x5218c4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x5218c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_5218c8:
    // 0x5218c8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x5218c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_5218cc:
    // 0x5218cc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x5218ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_5218d0:
    // 0x5218d0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x5218d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_5218d4:
    // 0x5218d4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x5218d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_5218d8:
    // 0x5218d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5218d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5218dc:
    // 0x5218dc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x5218dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_5218e0:
    // 0x5218e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5218e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5218e4:
    // 0x5218e4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x5218e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_5218e8:
    // 0x5218e8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x5218e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_5218ec:
    // 0x5218ec: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x5218ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_5218f0:
    // 0x5218f0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x5218f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_5218f4:
    // 0x5218f4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x5218f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_5218f8:
    // 0x5218f8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x5218f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_5218fc:
    // 0x5218fc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x5218fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_521900:
    // 0x521900: 0xc0775b8  jal         func_1DD6E0
label_521904:
    if (ctx->pc == 0x521904u) {
        ctx->pc = 0x521904u;
            // 0x521904: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x521908u;
        goto label_521908;
    }
    ctx->pc = 0x521900u;
    SET_GPR_U32(ctx, 31, 0x521908u);
    ctx->pc = 0x521904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521900u;
            // 0x521904: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521908u; }
        if (ctx->pc != 0x521908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521908u; }
        if (ctx->pc != 0x521908u) { return; }
    }
    ctx->pc = 0x521908u;
label_521908:
    // 0x521908: 0xc077314  jal         func_1DCC50
label_52190c:
    if (ctx->pc == 0x52190Cu) {
        ctx->pc = 0x52190Cu;
            // 0x52190c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x521910u;
        goto label_521910;
    }
    ctx->pc = 0x521908u;
    SET_GPR_U32(ctx, 31, 0x521910u);
    ctx->pc = 0x52190Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521908u;
            // 0x52190c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521910u; }
        if (ctx->pc != 0x521910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521910u; }
        if (ctx->pc != 0x521910u) { return; }
    }
    ctx->pc = 0x521910u;
label_521910:
    // 0x521910: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x521910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_521914:
    // 0x521914: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x521914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_521918:
    // 0x521918: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x521918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_52191c:
    // 0x52191c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x52191cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_521920:
    // 0x521920: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x521920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_521924:
    // 0x521924: 0x24845e10  addiu       $a0, $a0, 0x5E10
    ctx->pc = 0x521924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24080));
label_521928:
    // 0x521928: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x521928u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_52192c:
    // 0x52192c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52192cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_521930:
    // 0x521930: 0x24635e50  addiu       $v1, $v1, 0x5E50
    ctx->pc = 0x521930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24144));
label_521934:
    // 0x521934: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x521934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_521938:
    // 0x521938: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x521938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52193c:
    // 0x52193c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x52193cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_521940:
    // 0x521940: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x521940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_521944:
    // 0x521944: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x521944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_521948:
    // 0x521948: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x521948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_52194c:
    // 0x52194c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52194cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_521950:
    // 0x521950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521954:
    // 0x521954: 0x3e00008  jr          $ra
label_521958:
    if (ctx->pc == 0x521958u) {
        ctx->pc = 0x521958u;
            // 0x521958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52195Cu;
        goto label_52195c;
    }
    ctx->pc = 0x521954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521954u;
            // 0x521958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52195Cu;
label_52195c:
    // 0x52195c: 0x0  nop
    ctx->pc = 0x52195cu;
    // NOP
label_521960:
    // 0x521960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x521960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_521964:
    // 0x521964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x521964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_521968:
    // 0x521968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x521968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52196c:
    // 0x52196c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521970:
    // 0x521970: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x521970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_521974:
    // 0x521974: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_521978:
    if (ctx->pc == 0x521978u) {
        ctx->pc = 0x521978u;
            // 0x521978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52197Cu;
        goto label_52197c;
    }
    ctx->pc = 0x521974u;
    {
        const bool branch_taken_0x521974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x521978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521974u;
            // 0x521978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521974) {
            ctx->pc = 0x5219ACu;
            goto label_5219ac;
        }
    }
    ctx->pc = 0x52197Cu;
label_52197c:
    // 0x52197c: 0xc04008c  jal         func_100230
label_521980:
    if (ctx->pc == 0x521980u) {
        ctx->pc = 0x521980u;
            // 0x521980: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x521984u;
        goto label_521984;
    }
    ctx->pc = 0x52197Cu;
    SET_GPR_U32(ctx, 31, 0x521984u);
    ctx->pc = 0x521980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52197Cu;
            // 0x521980: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521984u; }
        if (ctx->pc != 0x521984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521984u; }
        if (ctx->pc != 0x521984u) { return; }
    }
    ctx->pc = 0x521984u;
label_521984:
    // 0x521984: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x521984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_521988:
    // 0x521988: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x521988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_52198c:
    // 0x52198c: 0xc0407c0  jal         func_101F00
label_521990:
    if (ctx->pc == 0x521990u) {
        ctx->pc = 0x521990u;
            // 0x521990: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x521994u;
        goto label_521994;
    }
    ctx->pc = 0x52198Cu;
    SET_GPR_U32(ctx, 31, 0x521994u);
    ctx->pc = 0x521990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52198Cu;
            // 0x521990: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521994u; }
        if (ctx->pc != 0x521994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521994u; }
        if (ctx->pc != 0x521994u) { return; }
    }
    ctx->pc = 0x521994u;
label_521994:
    // 0x521994: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x521994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_521998:
    // 0x521998: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x521998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_52199c:
    // 0x52199c: 0xc0407c0  jal         func_101F00
label_5219a0:
    if (ctx->pc == 0x5219A0u) {
        ctx->pc = 0x5219A0u;
            // 0x5219a0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x5219A4u;
        goto label_5219a4;
    }
    ctx->pc = 0x52199Cu;
    SET_GPR_U32(ctx, 31, 0x5219A4u);
    ctx->pc = 0x5219A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52199Cu;
            // 0x5219a0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5219A4u; }
        if (ctx->pc != 0x5219A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5219A4u; }
        if (ctx->pc != 0x5219A4u) { return; }
    }
    ctx->pc = 0x5219A4u;
label_5219a4:
    // 0x5219a4: 0xc0400a8  jal         func_1002A0
label_5219a8:
    if (ctx->pc == 0x5219A8u) {
        ctx->pc = 0x5219A8u;
            // 0x5219a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5219ACu;
        goto label_5219ac;
    }
    ctx->pc = 0x5219A4u;
    SET_GPR_U32(ctx, 31, 0x5219ACu);
    ctx->pc = 0x5219A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5219A4u;
            // 0x5219a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5219ACu; }
        if (ctx->pc != 0x5219ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5219ACu; }
        if (ctx->pc != 0x5219ACu) { return; }
    }
    ctx->pc = 0x5219ACu;
label_5219ac:
    // 0x5219ac: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x5219acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_5219b0:
    // 0x5219b0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x5219b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_5219b4:
    // 0x5219b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5219b8:
    if (ctx->pc == 0x5219B8u) {
        ctx->pc = 0x5219B8u;
            // 0x5219b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x5219BCu;
        goto label_5219bc;
    }
    ctx->pc = 0x5219B4u;
    {
        const bool branch_taken_0x5219b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5219b4) {
            ctx->pc = 0x5219B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5219B4u;
            // 0x5219b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5219D0u;
            goto label_5219d0;
        }
    }
    ctx->pc = 0x5219BCu;
label_5219bc:
    // 0x5219bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5219bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5219c0:
    // 0x5219c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5219c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5219c4:
    // 0x5219c4: 0x320f809  jalr        $t9
label_5219c8:
    if (ctx->pc == 0x5219C8u) {
        ctx->pc = 0x5219C8u;
            // 0x5219c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5219CCu;
        goto label_5219cc;
    }
    ctx->pc = 0x5219C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5219CCu);
        ctx->pc = 0x5219C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5219C4u;
            // 0x5219c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5219CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5219CCu; }
            if (ctx->pc != 0x5219CCu) { return; }
        }
        }
    }
    ctx->pc = 0x5219CCu;
label_5219cc:
    // 0x5219cc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x5219ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_5219d0:
    // 0x5219d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5219d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5219d4:
    // 0x5219d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5219d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5219d8:
    // 0x5219d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5219d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5219dc:
    // 0x5219dc: 0x3e00008  jr          $ra
label_5219e0:
    if (ctx->pc == 0x5219E0u) {
        ctx->pc = 0x5219E0u;
            // 0x5219e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5219E4u;
        goto label_5219e4;
    }
    ctx->pc = 0x5219DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5219E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5219DCu;
            // 0x5219e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5219E4u;
label_5219e4:
    // 0x5219e4: 0x0  nop
    ctx->pc = 0x5219e4u;
    // NOP
label_5219e8:
    // 0x5219e8: 0x0  nop
    ctx->pc = 0x5219e8u;
    // NOP
label_5219ec:
    // 0x5219ec: 0x0  nop
    ctx->pc = 0x5219ecu;
    // NOP
label_5219f0:
    // 0x5219f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x5219f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_5219f4:
    // 0x5219f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5219f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5219f8:
    // 0x5219f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5219f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5219fc:
    // 0x5219fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5219fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_521a00:
    // 0x521a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x521a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_521a04:
    // 0x521a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521a08:
    // 0x521a08: 0xc0892d0  jal         func_224B40
label_521a0c:
    if (ctx->pc == 0x521A0Cu) {
        ctx->pc = 0x521A0Cu;
            // 0x521a0c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x521A10u;
        goto label_521a10;
    }
    ctx->pc = 0x521A08u;
    SET_GPR_U32(ctx, 31, 0x521A10u);
    ctx->pc = 0x521A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521A08u;
            // 0x521a0c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A10u; }
        if (ctx->pc != 0x521A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A10u; }
        if (ctx->pc != 0x521A10u) { return; }
    }
    ctx->pc = 0x521A10u;
label_521a10:
    // 0x521a10: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x521a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_521a14:
    // 0x521a14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x521a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_521a18:
    // 0x521a18: 0x8c42ab48  lw          $v0, -0x54B8($v0)
    ctx->pc = 0x521a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945608)));
label_521a1c:
    // 0x521a1c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x521a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_521a20:
    // 0x521a20: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x521a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_521a24:
    // 0x521a24: 0xc0b6e68  jal         func_2DB9A0
label_521a28:
    if (ctx->pc == 0x521A28u) {
        ctx->pc = 0x521A28u;
            // 0x521a28: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x521A2Cu;
        goto label_521a2c;
    }
    ctx->pc = 0x521A24u;
    SET_GPR_U32(ctx, 31, 0x521A2Cu);
    ctx->pc = 0x521A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521A24u;
            // 0x521a28: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A2Cu; }
        if (ctx->pc != 0x521A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A2Cu; }
        if (ctx->pc != 0x521A2Cu) { return; }
    }
    ctx->pc = 0x521A2Cu;
label_521a2c:
    // 0x521a2c: 0xc0b6dac  jal         func_2DB6B0
label_521a30:
    if (ctx->pc == 0x521A30u) {
        ctx->pc = 0x521A30u;
            // 0x521a30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x521A34u;
        goto label_521a34;
    }
    ctx->pc = 0x521A2Cu;
    SET_GPR_U32(ctx, 31, 0x521A34u);
    ctx->pc = 0x521A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521A2Cu;
            // 0x521a30: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A34u; }
        if (ctx->pc != 0x521A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A34u; }
        if (ctx->pc != 0x521A34u) { return; }
    }
    ctx->pc = 0x521A34u;
label_521a34:
    // 0x521a34: 0xc0cac94  jal         func_32B250
label_521a38:
    if (ctx->pc == 0x521A38u) {
        ctx->pc = 0x521A38u;
            // 0x521a38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x521A3Cu;
        goto label_521a3c;
    }
    ctx->pc = 0x521A34u;
    SET_GPR_U32(ctx, 31, 0x521A3Cu);
    ctx->pc = 0x521A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521A34u;
            // 0x521a38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A3Cu; }
        if (ctx->pc != 0x521A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A3Cu; }
        if (ctx->pc != 0x521A3Cu) { return; }
    }
    ctx->pc = 0x521A3Cu;
label_521a3c:
    // 0x521a3c: 0xc0cac84  jal         func_32B210
label_521a40:
    if (ctx->pc == 0x521A40u) {
        ctx->pc = 0x521A40u;
            // 0x521a40: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x521A44u;
        goto label_521a44;
    }
    ctx->pc = 0x521A3Cu;
    SET_GPR_U32(ctx, 31, 0x521A44u);
    ctx->pc = 0x521A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521A3Cu;
            // 0x521a40: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A44u; }
        if (ctx->pc != 0x521A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A44u; }
        if (ctx->pc != 0x521A44u) { return; }
    }
    ctx->pc = 0x521A44u;
label_521a44:
    // 0x521a44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x521a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_521a48:
    // 0x521a48: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x521a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_521a4c:
    // 0x521a4c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x521a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_521a50:
    // 0x521a50: 0xc0a5a68  jal         func_2969A0
label_521a54:
    if (ctx->pc == 0x521A54u) {
        ctx->pc = 0x521A54u;
            // 0x521a54: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x521A58u;
        goto label_521a58;
    }
    ctx->pc = 0x521A50u;
    SET_GPR_U32(ctx, 31, 0x521A58u);
    ctx->pc = 0x521A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521A50u;
            // 0x521a54: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A58u; }
        if (ctx->pc != 0x521A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521A58u; }
        if (ctx->pc != 0x521A58u) { return; }
    }
    ctx->pc = 0x521A58u;
label_521a58:
    // 0x521a58: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x521a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_521a5c:
    // 0x521a5c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x521a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_521a60:
    // 0x521a60: 0x8c43ab48  lw          $v1, -0x54B8($v0)
    ctx->pc = 0x521a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945608)));
label_521a64:
    // 0x521a64: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x521a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_521a68:
    // 0x521a68: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x521a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_521a6c:
    // 0x521a6c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x521a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521a70:
    // 0x521a70: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x521a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_521a74:
    // 0x521a74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x521a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_521a78:
    // 0x521a78: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x521a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_521a7c:
    // 0x521a7c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x521a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_521a80:
    // 0x521a80: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x521a80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_521a84:
    // 0x521a84: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x521a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_521a88:
    // 0x521a88: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x521a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_521a8c:
    // 0x521a8c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x521a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_521a90:
    // 0x521a90: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x521a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_521a94:
    // 0x521a94: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x521a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_521a98:
    // 0x521a98: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x521a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_521a9c:
    // 0x521a9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521aa0:
    // 0x521aa0: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x521aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_521aa4:
    // 0x521aa4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x521aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_521aa8:
    // 0x521aa8: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x521aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_521aac:
    // 0x521aac: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x521aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_521ab0:
    // 0x521ab0: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x521ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_521ab4:
    // 0x521ab4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x521ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_521ab8:
    // 0x521ab8: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x521ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_521abc:
    // 0x521abc: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x521abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_521ac0:
    // 0x521ac0: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x521ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_521ac4:
    // 0x521ac4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x521ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_521ac8:
    // 0x521ac8: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x521ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_521acc:
    // 0x521acc: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x521accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_521ad0:
    // 0x521ad0: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x521ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_521ad4:
    // 0x521ad4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x521ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_521ad8:
    // 0x521ad8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x521ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_521adc:
    // 0x521adc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x521adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_521ae0:
    // 0x521ae0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x521ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_521ae4:
    // 0x521ae4: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x521ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_521ae8:
    // 0x521ae8: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x521ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_521aec:
    // 0x521aec: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x521aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_521af0:
    // 0x521af0: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x521af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_521af4:
    // 0x521af4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x521af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_521af8:
    // 0x521af8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x521af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_521afc:
    // 0x521afc: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x521afcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_521b00:
    // 0x521b00: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x521b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_521b04:
    // 0x521b04: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x521b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_521b08:
    // 0x521b08: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x521b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_521b0c:
    // 0x521b0c: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x521b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_521b10:
    // 0x521b10: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x521b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_521b14:
    // 0x521b14: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x521b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_521b18:
    // 0x521b18: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x521b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_521b1c:
    // 0x521b1c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x521b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_521b20:
    // 0x521b20: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x521b20u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_521b24:
    // 0x521b24: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x521b24u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_521b28:
    // 0x521b28: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x521b28u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_521b2c:
    // 0x521b2c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x521b2cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_521b30:
    // 0x521b30: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x521b30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_521b34:
    // 0x521b34: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x521b34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_521b38:
    // 0x521b38: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x521b38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_521b3c:
    // 0x521b3c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x521b3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_521b40:
    // 0x521b40: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x521b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_521b44:
    // 0x521b44: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x521b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_521b48:
    // 0x521b48: 0xc0a7a88  jal         func_29EA20
label_521b4c:
    if (ctx->pc == 0x521B4Cu) {
        ctx->pc = 0x521B4Cu;
            // 0x521b4c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x521B50u;
        goto label_521b50;
    }
    ctx->pc = 0x521B48u;
    SET_GPR_U32(ctx, 31, 0x521B50u);
    ctx->pc = 0x521B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521B48u;
            // 0x521b4c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521B50u; }
        if (ctx->pc != 0x521B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521B50u; }
        if (ctx->pc != 0x521B50u) { return; }
    }
    ctx->pc = 0x521B50u;
label_521b50:
    // 0x521b50: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x521b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_521b54:
    // 0x521b54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x521b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521b58:
    // 0x521b58: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_521b5c:
    if (ctx->pc == 0x521B5Cu) {
        ctx->pc = 0x521B5Cu;
            // 0x521b5c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x521B60u;
        goto label_521b60;
    }
    ctx->pc = 0x521B58u;
    {
        const bool branch_taken_0x521b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x521B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521B58u;
            // 0x521b5c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521b58) {
            ctx->pc = 0x521BA8u;
            goto label_521ba8;
        }
    }
    ctx->pc = 0x521B60u;
label_521b60:
    // 0x521b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x521b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_521b64:
    // 0x521b64: 0xc088ef4  jal         func_223BD0
label_521b68:
    if (ctx->pc == 0x521B68u) {
        ctx->pc = 0x521B68u;
            // 0x521b68: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x521B6Cu;
        goto label_521b6c;
    }
    ctx->pc = 0x521B64u;
    SET_GPR_U32(ctx, 31, 0x521B6Cu);
    ctx->pc = 0x521B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521B64u;
            // 0x521b68: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521B6Cu; }
        if (ctx->pc != 0x521B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521B6Cu; }
        if (ctx->pc != 0x521B6Cu) { return; }
    }
    ctx->pc = 0x521B6Cu;
label_521b6c:
    // 0x521b6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x521b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_521b70:
    // 0x521b70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x521b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_521b74:
    // 0x521b74: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x521b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_521b78:
    // 0x521b78: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x521b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_521b7c:
    // 0x521b7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x521b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_521b80:
    // 0x521b80: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x521b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_521b84:
    // 0x521b84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521b88:
    // 0x521b88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x521b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_521b8c:
    // 0x521b8c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x521b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_521b90:
    // 0x521b90: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x521b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_521b94:
    // 0x521b94: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x521b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_521b98:
    // 0x521b98: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x521b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_521b9c:
    // 0x521b9c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x521b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_521ba0:
    // 0x521ba0: 0xc088b38  jal         func_222CE0
label_521ba4:
    if (ctx->pc == 0x521BA4u) {
        ctx->pc = 0x521BA4u;
            // 0x521ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521BA8u;
        goto label_521ba8;
    }
    ctx->pc = 0x521BA0u;
    SET_GPR_U32(ctx, 31, 0x521BA8u);
    ctx->pc = 0x521BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521BA0u;
            // 0x521ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521BA8u; }
        if (ctx->pc != 0x521BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521BA8u; }
        if (ctx->pc != 0x521BA8u) { return; }
    }
    ctx->pc = 0x521BA8u;
label_521ba8:
    // 0x521ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x521ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_521bac:
    // 0x521bac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x521bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_521bb0:
    // 0x521bb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x521bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521bb4:
    // 0x521bb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x521bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521bb8:
    // 0x521bb8: 0xc08914c  jal         func_224530
label_521bbc:
    if (ctx->pc == 0x521BBCu) {
        ctx->pc = 0x521BBCu;
            // 0x521bbc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x521BC0u;
        goto label_521bc0;
    }
    ctx->pc = 0x521BB8u;
    SET_GPR_U32(ctx, 31, 0x521BC0u);
    ctx->pc = 0x521BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521BB8u;
            // 0x521bbc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521BC0u; }
        if (ctx->pc != 0x521BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521BC0u; }
        if (ctx->pc != 0x521BC0u) { return; }
    }
    ctx->pc = 0x521BC0u;
label_521bc0:
    // 0x521bc0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x521bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_521bc4:
    // 0x521bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x521bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_521bc8:
    // 0x521bc8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x521bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_521bcc:
    // 0x521bcc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x521bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_521bd0:
    // 0x521bd0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x521bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_521bd4:
    // 0x521bd4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x521bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_521bd8:
    // 0x521bd8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x521bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_521bdc:
    // 0x521bdc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x521bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_521be0:
    // 0x521be0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x521be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_521be4:
    // 0x521be4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x521be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_521be8:
    // 0x521be8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x521be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_521bec:
    // 0x521bec: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x521becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_521bf0:
    // 0x521bf0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x521bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_521bf4:
    // 0x521bf4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x521bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_521bf8:
    // 0x521bf8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x521bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_521bfc:
    // 0x521bfc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x521bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_521c00:
    // 0x521c00: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x521c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_521c04:
    // 0x521c04: 0xc0892b0  jal         func_224AC0
label_521c08:
    if (ctx->pc == 0x521C08u) {
        ctx->pc = 0x521C08u;
            // 0x521c08: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x521C0Cu;
        goto label_521c0c;
    }
    ctx->pc = 0x521C04u;
    SET_GPR_U32(ctx, 31, 0x521C0Cu);
    ctx->pc = 0x521C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521C04u;
            // 0x521c08: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C0Cu; }
        if (ctx->pc != 0x521C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C0Cu; }
        if (ctx->pc != 0x521C0Cu) { return; }
    }
    ctx->pc = 0x521C0Cu;
label_521c0c:
    // 0x521c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x521c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_521c10:
    // 0x521c10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x521c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_521c14:
    // 0x521c14: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x521c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_521c18:
    // 0x521c18: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x521c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_521c1c:
    // 0x521c1c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x521c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_521c20:
    // 0x521c20: 0xc0891d8  jal         func_224760
label_521c24:
    if (ctx->pc == 0x521C24u) {
        ctx->pc = 0x521C24u;
            // 0x521c24: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x521C28u;
        goto label_521c28;
    }
    ctx->pc = 0x521C20u;
    SET_GPR_U32(ctx, 31, 0x521C28u);
    ctx->pc = 0x521C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521C20u;
            // 0x521c24: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C28u; }
        if (ctx->pc != 0x521C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C28u; }
        if (ctx->pc != 0x521C28u) { return; }
    }
    ctx->pc = 0x521C28u;
label_521c28:
    // 0x521c28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521c2c:
    // 0x521c2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x521c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_521c30:
    // 0x521c30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x521c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_521c34:
    // 0x521c34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x521c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_521c38:
    // 0x521c38: 0xc08c164  jal         func_230590
label_521c3c:
    if (ctx->pc == 0x521C3Cu) {
        ctx->pc = 0x521C3Cu;
            // 0x521c3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x521C40u;
        goto label_521c40;
    }
    ctx->pc = 0x521C38u;
    SET_GPR_U32(ctx, 31, 0x521C40u);
    ctx->pc = 0x521C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521C38u;
            // 0x521c3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C40u; }
        if (ctx->pc != 0x521C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C40u; }
        if (ctx->pc != 0x521C40u) { return; }
    }
    ctx->pc = 0x521C40u;
label_521c40:
    // 0x521c40: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x521c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_521c44:
    // 0x521c44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521c48:
    // 0x521c48: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x521c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_521c4c:
    // 0x521c4c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x521c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_521c50:
    // 0x521c50: 0xc0a7a88  jal         func_29EA20
label_521c54:
    if (ctx->pc == 0x521C54u) {
        ctx->pc = 0x521C54u;
            // 0x521c54: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x521C58u;
        goto label_521c58;
    }
    ctx->pc = 0x521C50u;
    SET_GPR_U32(ctx, 31, 0x521C58u);
    ctx->pc = 0x521C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521C50u;
            // 0x521c54: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C58u; }
        if (ctx->pc != 0x521C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C58u; }
        if (ctx->pc != 0x521C58u) { return; }
    }
    ctx->pc = 0x521C58u;
label_521c58:
    // 0x521c58: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x521c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_521c5c:
    // 0x521c5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x521c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521c60:
    // 0x521c60: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_521c64:
    if (ctx->pc == 0x521C64u) {
        ctx->pc = 0x521C64u;
            // 0x521c64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x521C68u;
        goto label_521c68;
    }
    ctx->pc = 0x521C60u;
    {
        const bool branch_taken_0x521c60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x521C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521C60u;
            // 0x521c64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521c60) {
            ctx->pc = 0x521C84u;
            goto label_521c84;
        }
    }
    ctx->pc = 0x521C68u;
label_521c68:
    // 0x521c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x521c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_521c6c:
    // 0x521c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x521c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_521c70:
    // 0x521c70: 0xc0869d0  jal         func_21A740
label_521c74:
    if (ctx->pc == 0x521C74u) {
        ctx->pc = 0x521C74u;
            // 0x521c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521C78u;
        goto label_521c78;
    }
    ctx->pc = 0x521C70u;
    SET_GPR_U32(ctx, 31, 0x521C78u);
    ctx->pc = 0x521C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521C70u;
            // 0x521c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C78u; }
        if (ctx->pc != 0x521C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C78u; }
        if (ctx->pc != 0x521C78u) { return; }
    }
    ctx->pc = 0x521C78u;
label_521c78:
    // 0x521c78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x521c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_521c7c:
    // 0x521c7c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x521c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_521c80:
    // 0x521c80: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x521c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_521c84:
    // 0x521c84: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x521c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_521c88:
    // 0x521c88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x521c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_521c8c:
    // 0x521c8c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x521c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_521c90:
    // 0x521c90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x521c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_521c94:
    // 0x521c94: 0xc08c650  jal         func_231940
label_521c98:
    if (ctx->pc == 0x521C98u) {
        ctx->pc = 0x521C98u;
            // 0x521c98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521C9Cu;
        goto label_521c9c;
    }
    ctx->pc = 0x521C94u;
    SET_GPR_U32(ctx, 31, 0x521C9Cu);
    ctx->pc = 0x521C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521C94u;
            // 0x521c98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C9Cu; }
        if (ctx->pc != 0x521C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521C9Cu; }
        if (ctx->pc != 0x521C9Cu) { return; }
    }
    ctx->pc = 0x521C9Cu;
label_521c9c:
    // 0x521c9c: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x521c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_521ca0:
    // 0x521ca0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x521ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_521ca4:
    // 0x521ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x521ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521ca8:
    // 0x521ca8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x521ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_521cac:
    // 0x521cac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x521cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_521cb0:
    // 0x521cb0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x521cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_521cb4:
    // 0x521cb4: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x521cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_521cb8:
    // 0x521cb8: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x521cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
label_521cbc:
    // 0x521cbc: 0xa2220065  sb          $v0, 0x65($s1)
    ctx->pc = 0x521cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 2));
label_521cc0:
    // 0x521cc0: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x521cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_521cc4:
    // 0x521cc4: 0xa2220069  sb          $v0, 0x69($s1)
    ctx->pc = 0x521cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 2));
label_521cc8:
    // 0x521cc8: 0xa220006a  sb          $zero, 0x6A($s1)
    ctx->pc = 0x521cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 0));
label_521ccc:
    // 0x521ccc: 0xc040180  jal         func_100600
label_521cd0:
    if (ctx->pc == 0x521CD0u) {
        ctx->pc = 0x521CD0u;
            // 0x521cd0: 0xa222006b  sb          $v0, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x521CD4u;
        goto label_521cd4;
    }
    ctx->pc = 0x521CCCu;
    SET_GPR_U32(ctx, 31, 0x521CD4u);
    ctx->pc = 0x521CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521CCCu;
            // 0x521cd0: 0xa222006b  sb          $v0, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521CD4u; }
        if (ctx->pc != 0x521CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521CD4u; }
        if (ctx->pc != 0x521CD4u) { return; }
    }
    ctx->pc = 0x521CD4u;
label_521cd4:
    // 0x521cd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x521cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521cd8:
    // 0x521cd8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_521cdc:
    if (ctx->pc == 0x521CDCu) {
        ctx->pc = 0x521CE0u;
        goto label_521ce0;
    }
    ctx->pc = 0x521CD8u;
    {
        const bool branch_taken_0x521cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x521cd8) {
            ctx->pc = 0x521D58u;
            goto label_521d58;
        }
    }
    ctx->pc = 0x521CE0u;
label_521ce0:
    // 0x521ce0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x521ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_521ce4:
    // 0x521ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x521ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521ce8:
    // 0x521ce8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x521ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_521cec:
    // 0x521cec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x521cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_521cf0:
    // 0x521cf0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x521cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_521cf4:
    // 0x521cf4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x521cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_521cf8:
    // 0x521cf8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x521cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_521cfc:
    // 0x521cfc: 0xc040138  jal         func_1004E0
label_521d00:
    if (ctx->pc == 0x521D00u) {
        ctx->pc = 0x521D00u;
            // 0x521d00: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x521D04u;
        goto label_521d04;
    }
    ctx->pc = 0x521CFCu;
    SET_GPR_U32(ctx, 31, 0x521D04u);
    ctx->pc = 0x521D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521CFCu;
            // 0x521d00: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D04u; }
        if (ctx->pc != 0x521D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D04u; }
        if (ctx->pc != 0x521D04u) { return; }
    }
    ctx->pc = 0x521D04u;
label_521d04:
    // 0x521d04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x521d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_521d08:
    // 0x521d08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x521d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521d0c:
    // 0x521d0c: 0xc040138  jal         func_1004E0
label_521d10:
    if (ctx->pc == 0x521D10u) {
        ctx->pc = 0x521D10u;
            // 0x521d10: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x521D14u;
        goto label_521d14;
    }
    ctx->pc = 0x521D0Cu;
    SET_GPR_U32(ctx, 31, 0x521D14u);
    ctx->pc = 0x521D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521D0Cu;
            // 0x521d10: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D14u; }
        if (ctx->pc != 0x521D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D14u; }
        if (ctx->pc != 0x521D14u) { return; }
    }
    ctx->pc = 0x521D14u;
label_521d14:
    // 0x521d14: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x521d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_521d18:
    // 0x521d18: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x521d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_521d1c:
    // 0x521d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x521d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_521d20:
    // 0x521d20: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x521d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_521d24:
    // 0x521d24: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x521d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_521d28:
    // 0x521d28: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x521d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_521d2c:
    // 0x521d2c: 0xc040840  jal         func_102100
label_521d30:
    if (ctx->pc == 0x521D30u) {
        ctx->pc = 0x521D30u;
            // 0x521d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x521D34u;
        goto label_521d34;
    }
    ctx->pc = 0x521D2Cu;
    SET_GPR_U32(ctx, 31, 0x521D34u);
    ctx->pc = 0x521D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521D2Cu;
            // 0x521d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D34u; }
        if (ctx->pc != 0x521D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D34u; }
        if (ctx->pc != 0x521D34u) { return; }
    }
    ctx->pc = 0x521D34u;
label_521d34:
    // 0x521d34: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x521d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_521d38:
    // 0x521d38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x521d38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521d3c:
    // 0x521d3c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x521d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_521d40:
    // 0x521d40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x521d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_521d44:
    // 0x521d44: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x521d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_521d48:
    // 0x521d48: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x521d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_521d4c:
    // 0x521d4c: 0x0  nop
    ctx->pc = 0x521d4cu;
    // NOP
label_521d50:
    // 0x521d50: 0x1860fffa  blez        $v1, . + 4 + (-0x6 << 2)
label_521d54:
    if (ctx->pc == 0x521D54u) {
        ctx->pc = 0x521D58u;
        goto label_521d58;
    }
    ctx->pc = 0x521D50u;
    {
        const bool branch_taken_0x521d50 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x521d50) {
            ctx->pc = 0x521D3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_521d3c;
        }
    }
    ctx->pc = 0x521D58u;
label_521d58:
    // 0x521d58: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x521d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_521d5c:
    // 0x521d5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x521d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_521d60:
    // 0x521d60: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x521d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_521d64:
    // 0x521d64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x521d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_521d68:
    // 0x521d68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x521d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521d6c:
    // 0x521d6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x521d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_521d70:
    // 0x521d70: 0xc0e7d2c  jal         func_39F4B0
label_521d74:
    if (ctx->pc == 0x521D74u) {
        ctx->pc = 0x521D74u;
            // 0x521d74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521D78u;
        goto label_521d78;
    }
    ctx->pc = 0x521D70u;
    SET_GPR_U32(ctx, 31, 0x521D78u);
    ctx->pc = 0x521D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521D70u;
            // 0x521d74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D78u; }
        if (ctx->pc != 0x521D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521D78u; }
        if (ctx->pc != 0x521D78u) { return; }
    }
    ctx->pc = 0x521D78u;
label_521d78:
    // 0x521d78: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x521d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_521d7c:
    // 0x521d7c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x521d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_521d80:
    // 0x521d80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x521d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_521d84:
    // 0x521d84: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x521d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_521d88:
    // 0x521d88: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x521d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_521d8c:
    // 0x521d8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x521d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_521d90:
    // 0x521d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x521d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_521d94:
    // 0x521d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x521d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_521d98:
    // 0x521d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521d9c:
    // 0x521d9c: 0x3e00008  jr          $ra
label_521da0:
    if (ctx->pc == 0x521DA0u) {
        ctx->pc = 0x521DA0u;
            // 0x521da0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x521DA4u;
        goto label_521da4;
    }
    ctx->pc = 0x521D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521D9Cu;
            // 0x521da0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521DA4u;
label_521da4:
    // 0x521da4: 0x0  nop
    ctx->pc = 0x521da4u;
    // NOP
label_521da8:
    // 0x521da8: 0x0  nop
    ctx->pc = 0x521da8u;
    // NOP
label_521dac:
    // 0x521dac: 0x0  nop
    ctx->pc = 0x521dacu;
    // NOP
label_521db0:
    // 0x521db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x521db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_521db4:
    // 0x521db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x521db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_521db8:
    // 0x521db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521dbc:
    // 0x521dbc: 0xc0e3580  jal         func_38D600
label_521dc0:
    if (ctx->pc == 0x521DC0u) {
        ctx->pc = 0x521DC0u;
            // 0x521dc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521DC4u;
        goto label_521dc4;
    }
    ctx->pc = 0x521DBCu;
    SET_GPR_U32(ctx, 31, 0x521DC4u);
    ctx->pc = 0x521DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521DBCu;
            // 0x521dc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521DC4u; }
        if (ctx->pc != 0x521DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521DC4u; }
        if (ctx->pc != 0x521DC4u) { return; }
    }
    ctx->pc = 0x521DC4u;
label_521dc4:
    // 0x521dc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x521dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521dc8:
    // 0x521dc8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x521dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_521dcc:
    // 0x521dcc: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x521dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_521dd0:
    // 0x521dd0: 0x2407f9ff  addiu       $a3, $zero, -0x601
    ctx->pc = 0x521dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_521dd4:
    // 0x521dd4: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x521dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_521dd8:
    // 0x521dd8: 0x3c0443b4  lui         $a0, 0x43B4
    ctx->pc = 0x521dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17332 << 16));
label_521ddc:
    // 0x521ddc: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x521ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_521de0:
    // 0x521de0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x521de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_521de4:
    // 0x521de4: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x521de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_521de8:
    // 0x521de8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x521de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_521dec:
    // 0x521dec: 0x8e0800b0  lw          $t0, 0xB0($s0)
    ctx->pc = 0x521decu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_521df0:
    // 0x521df0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x521df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_521df4:
    // 0x521df4: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x521df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_521df8:
    // 0x521df8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x521df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_521dfc:
    // 0x521dfc: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x521dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_521e00:
    // 0x521e00: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x521e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_521e04:
    // 0x521e04: 0x34e70600  ori         $a3, $a3, 0x600
    ctx->pc = 0x521e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1536);
label_521e08:
    // 0x521e08: 0xae0700b0  sw          $a3, 0xB0($s0)
    ctx->pc = 0x521e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 7));
label_521e0c:
    // 0x521e0c: 0xa20600cc  sb          $a2, 0xCC($s0)
    ctx->pc = 0x521e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 6));
label_521e10:
    // 0x521e10: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x521e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
label_521e14:
    // 0x521e14: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x521e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_521e18:
    // 0x521e18: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x521e18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_521e1c:
    // 0x521e1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x521e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_521e20:
    // 0x521e20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x521e20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_521e24:
    // 0x521e24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x521e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_521e28:
    // 0x521e28: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x521e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_521e2c:
    // 0x521e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x521e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_521e30:
    // 0x521e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521e34:
    // 0x521e34: 0x3e00008  jr          $ra
label_521e38:
    if (ctx->pc == 0x521E38u) {
        ctx->pc = 0x521E38u;
            // 0x521e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x521E3Cu;
        goto label_521e3c;
    }
    ctx->pc = 0x521E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521E34u;
            // 0x521e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521E3Cu;
label_521e3c:
    // 0x521e3c: 0x0  nop
    ctx->pc = 0x521e3cu;
    // NOP
label_521e40:
    // 0x521e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x521e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_521e44:
    // 0x521e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x521e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_521e48:
    // 0x521e48: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x521e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_521e4c:
    // 0x521e4c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_521e50:
    if (ctx->pc == 0x521E50u) {
        ctx->pc = 0x521E50u;
            // 0x521e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x521E54u;
        goto label_521e54;
    }
    ctx->pc = 0x521E4Cu;
    {
        const bool branch_taken_0x521e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x521e4c) {
            ctx->pc = 0x521E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x521E4Cu;
            // 0x521e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x521E7Cu;
            goto label_521e7c;
        }
    }
    ctx->pc = 0x521E54u;
label_521e54:
    // 0x521e54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x521e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_521e58:
    // 0x521e58: 0x906411aa  lbu         $a0, 0x11AA($v1)
    ctx->pc = 0x521e58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_521e5c:
    // 0x521e5c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x521e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_521e60:
    // 0x521e60: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x521e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_521e64:
    // 0x521e64: 0x24660890  addiu       $a2, $v1, 0x890
    ctx->pc = 0x521e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_521e68:
    // 0x521e68: 0x246702c0  addiu       $a3, $v1, 0x2C0
    ctx->pc = 0x521e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
label_521e6c:
    // 0x521e6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x521e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521e70:
    // 0x521e70: 0xc0bb404  jal         func_2ED010
label_521e74:
    if (ctx->pc == 0x521E74u) {
        ctx->pc = 0x521E74u;
            // 0x521e74: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x521E78u;
        goto label_521e78;
    }
    ctx->pc = 0x521E70u;
    SET_GPR_U32(ctx, 31, 0x521E78u);
    ctx->pc = 0x521E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521E70u;
            // 0x521e74: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521E78u; }
        if (ctx->pc != 0x521E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521E78u; }
        if (ctx->pc != 0x521E78u) { return; }
    }
    ctx->pc = 0x521E78u;
label_521e78:
    // 0x521e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x521e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_521e7c:
    // 0x521e7c: 0x3e00008  jr          $ra
label_521e80:
    if (ctx->pc == 0x521E80u) {
        ctx->pc = 0x521E80u;
            // 0x521e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x521E84u;
        goto label_521e84;
    }
    ctx->pc = 0x521E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521E7Cu;
            // 0x521e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521E84u;
label_521e84:
    // 0x521e84: 0x0  nop
    ctx->pc = 0x521e84u;
    // NOP
label_521e88:
    // 0x521e88: 0x0  nop
    ctx->pc = 0x521e88u;
    // NOP
label_521e8c:
    // 0x521e8c: 0x0  nop
    ctx->pc = 0x521e8cu;
    // NOP
label_521e90:
    // 0x521e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x521e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_521e94:
    // 0x521e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x521e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521e98:
    // 0x521e98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x521e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_521e9c:
    // 0x521e9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x521e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_521ea0:
    // 0x521ea0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x521ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_521ea4:
    // 0x521ea4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x521ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_521ea8:
    // 0x521ea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x521ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_521eac:
    // 0x521eac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x521eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_521eb0:
    // 0x521eb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521eb4:
    // 0x521eb4: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x521eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_521eb8:
    // 0x521eb8: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
label_521ebc:
    if (ctx->pc == 0x521EBCu) {
        ctx->pc = 0x521EBCu;
            // 0x521ebc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x521EC0u;
        goto label_521ec0;
    }
    ctx->pc = 0x521EB8u;
    {
        const bool branch_taken_0x521eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x521eb8) {
            ctx->pc = 0x521EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x521EB8u;
            // 0x521ebc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x521F30u;
            goto label_521f30;
        }
    }
    ctx->pc = 0x521EC0u;
label_521ec0:
    // 0x521ec0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_521ec4:
    if (ctx->pc == 0x521EC4u) {
        ctx->pc = 0x521EC8u;
        goto label_521ec8;
    }
    ctx->pc = 0x521EC0u;
    {
        const bool branch_taken_0x521ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x521ec0) {
            ctx->pc = 0x521ED0u;
            goto label_521ed0;
        }
    }
    ctx->pc = 0x521EC8u;
label_521ec8:
    // 0x521ec8: 0x10000018  b           . + 4 + (0x18 << 2)
label_521ecc:
    if (ctx->pc == 0x521ECCu) {
        ctx->pc = 0x521ED0u;
        goto label_521ed0;
    }
    ctx->pc = 0x521EC8u;
    {
        const bool branch_taken_0x521ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x521ec8) {
            ctx->pc = 0x521F2Cu;
            goto label_521f2c;
        }
    }
    ctx->pc = 0x521ED0u;
label_521ed0:
    // 0x521ed0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x521ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_521ed4:
    // 0x521ed4: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x521ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_521ed8:
    // 0x521ed8: 0x8c42ab48  lw          $v0, -0x54B8($v0)
    ctx->pc = 0x521ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945608)));
label_521edc:
    // 0x521edc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x521edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_521ee0:
    // 0x521ee0: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x521ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_521ee4:
    // 0x521ee4: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x521ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_521ee8:
    // 0x521ee8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x521ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_521eec:
    // 0x521eec: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x521eecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_521ef0:
    // 0x521ef0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x521ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_521ef4:
    // 0x521ef4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x521ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_521ef8:
    // 0x521ef8: 0x24a5ce90  addiu       $a1, $a1, -0x3170
    ctx->pc = 0x521ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954640));
label_521efc:
    // 0x521efc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x521efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_521f00:
    // 0x521f00: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x521f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_521f04:
    // 0x521f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x521f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_521f08:
    // 0x521f08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x521f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_521f0c:
    // 0x521f0c: 0xc0d615c  jal         func_358570
label_521f10:
    if (ctx->pc == 0x521F10u) {
        ctx->pc = 0x521F10u;
            // 0x521f10: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x521F14u;
        goto label_521f14;
    }
    ctx->pc = 0x521F0Cu;
    SET_GPR_U32(ctx, 31, 0x521F14u);
    ctx->pc = 0x521F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x521F0Cu;
            // 0x521f10: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521F14u; }
        if (ctx->pc != 0x521F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521F14u; }
        if (ctx->pc != 0x521F14u) { return; }
    }
    ctx->pc = 0x521F14u;
label_521f14:
    // 0x521f14: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x521f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_521f18:
    // 0x521f18: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x521f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_521f1c:
    // 0x521f1c: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_521f20:
    if (ctx->pc == 0x521F20u) {
        ctx->pc = 0x521F20u;
            // 0x521f20: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x521F24u;
        goto label_521f24;
    }
    ctx->pc = 0x521F1Cu;
    {
        const bool branch_taken_0x521f1c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x521F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521F1Cu;
            // 0x521f20: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521f1c) {
            ctx->pc = 0x521EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_521ef0;
        }
    }
    ctx->pc = 0x521F24u;
label_521f24:
    // 0x521f24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x521f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_521f28:
    // 0x521f28: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x521f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
label_521f2c:
    // 0x521f2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x521f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_521f30:
    // 0x521f30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x521f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_521f34:
    // 0x521f34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x521f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_521f38:
    // 0x521f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x521f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_521f3c:
    // 0x521f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x521f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_521f40:
    // 0x521f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521f44:
    // 0x521f44: 0x3e00008  jr          $ra
label_521f48:
    if (ctx->pc == 0x521F48u) {
        ctx->pc = 0x521F48u;
            // 0x521f48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x521F4Cu;
        goto label_521f4c;
    }
    ctx->pc = 0x521F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521F44u;
            // 0x521f48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521F4Cu;
label_521f4c:
    // 0x521f4c: 0x0  nop
    ctx->pc = 0x521f4cu;
    // NOP
label_521f50:
    // 0x521f50: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x521f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_521f54:
    // 0x521f54: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x521f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_521f58:
    // 0x521f58: 0x3e00008  jr          $ra
label_521f5c:
    if (ctx->pc == 0x521F5Cu) {
        ctx->pc = 0x521F5Cu;
            // 0x521f5c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x521F60u;
        goto label_521f60;
    }
    ctx->pc = 0x521F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521F58u;
            // 0x521f5c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521F60u;
label_521f60:
    // 0x521f60: 0x3e00008  jr          $ra
label_521f64:
    if (ctx->pc == 0x521F64u) {
        ctx->pc = 0x521F64u;
            // 0x521f64: 0x24025de8  addiu       $v0, $zero, 0x5DE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24040));
        ctx->pc = 0x521F68u;
        goto label_521f68;
    }
    ctx->pc = 0x521F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521F60u;
            // 0x521f64: 0x24025de8  addiu       $v0, $zero, 0x5DE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521F68u;
label_521f68:
    // 0x521f68: 0x0  nop
    ctx->pc = 0x521f68u;
    // NOP
label_521f6c:
    // 0x521f6c: 0x0  nop
    ctx->pc = 0x521f6cu;
    // NOP
label_521f70:
    // 0x521f70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x521f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_521f74:
    // 0x521f74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x521f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_521f78:
    // 0x521f78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x521f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_521f7c:
    // 0x521f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x521f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_521f80:
    // 0x521f80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x521f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_521f84:
    // 0x521f84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x521f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_521f88:
    // 0x521f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x521f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_521f8c:
    // 0x521f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_521f90:
    // 0x521f90: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x521f90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_521f94:
    // 0x521f94: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_521f98:
    if (ctx->pc == 0x521F98u) {
        ctx->pc = 0x521F98u;
            // 0x521f98: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x521F9Cu;
        goto label_521f9c;
    }
    ctx->pc = 0x521F94u;
    {
        const bool branch_taken_0x521f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x521F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521F94u;
            // 0x521f98: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521f94) {
            ctx->pc = 0x521FD8u;
            goto label_521fd8;
        }
    }
    ctx->pc = 0x521F9Cu;
label_521f9c:
    // 0x521f9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x521f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521fa0:
    // 0x521fa0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x521fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521fa4:
    // 0x521fa4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x521fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_521fa8:
    // 0x521fa8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x521fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_521fac:
    // 0x521fac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x521facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_521fb0:
    // 0x521fb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x521fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_521fb4:
    // 0x521fb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x521fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_521fb8:
    // 0x521fb8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x521fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_521fbc:
    // 0x521fbc: 0x320f809  jalr        $t9
label_521fc0:
    if (ctx->pc == 0x521FC0u) {
        ctx->pc = 0x521FC4u;
        goto label_521fc4;
    }
    ctx->pc = 0x521FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x521FC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x521FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x521FC4u; }
            if (ctx->pc != 0x521FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x521FC4u;
label_521fc4:
    // 0x521fc4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x521fc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_521fc8:
    // 0x521fc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x521fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_521fcc:
    // 0x521fcc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x521fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_521fd0:
    // 0x521fd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_521fd4:
    if (ctx->pc == 0x521FD4u) {
        ctx->pc = 0x521FD4u;
            // 0x521fd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x521FD8u;
        goto label_521fd8;
    }
    ctx->pc = 0x521FD0u;
    {
        const bool branch_taken_0x521fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x521FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521FD0u;
            // 0x521fd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521fd0) {
            ctx->pc = 0x521FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_521fa8;
        }
    }
    ctx->pc = 0x521FD8u;
label_521fd8:
    // 0x521fd8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x521fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_521fdc:
    // 0x521fdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x521fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_521fe0:
    // 0x521fe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x521fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_521fe4:
    // 0x521fe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x521fe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_521fe8:
    // 0x521fe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x521fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_521fec:
    // 0x521fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x521fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_521ff0:
    // 0x521ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_521ff4:
    // 0x521ff4: 0x3e00008  jr          $ra
label_521ff8:
    if (ctx->pc == 0x521FF8u) {
        ctx->pc = 0x521FF8u;
            // 0x521ff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x521FFCu;
        goto label_521ffc;
    }
    ctx->pc = 0x521FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521FF4u;
            // 0x521ff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521FFCu;
label_521ffc:
    // 0x521ffc: 0x0  nop
    ctx->pc = 0x521ffcu;
    // NOP
label_522000:
    // 0x522000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_522004:
    // 0x522004: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x522004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_522008:
    // 0x522008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x522008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52200c:
    // 0x52200c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x52200cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_522010:
    // 0x522010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522014:
    // 0x522014: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x522014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_522018:
    // 0x522018: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x522018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52201c:
    // 0x52201c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x52201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_522020:
    // 0x522020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x522020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_522024:
    // 0x522024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x522024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_522028:
    // 0x522028: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x522028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_52202c:
    // 0x52202c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x52202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_522030:
    // 0x522030: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x522030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_522034:
    // 0x522034: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x522034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_522038:
    // 0x522038: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x522038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_52203c:
    // 0x52203c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x52203cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_522040:
    // 0x522040: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x522040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_522044:
    // 0x522044: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x522044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_522048:
    // 0x522048: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x522048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_52204c:
    // 0x52204c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x52204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_522050:
    // 0x522050: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x522050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_522054:
    // 0x522054: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x522054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_522058:
    // 0x522058: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x522058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52205c:
    // 0x52205c: 0xc0a997c  jal         func_2A65F0
label_522060:
    if (ctx->pc == 0x522060u) {
        ctx->pc = 0x522060u;
            // 0x522060: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x522064u;
        goto label_522064;
    }
    ctx->pc = 0x52205Cu;
    SET_GPR_U32(ctx, 31, 0x522064u);
    ctx->pc = 0x522060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52205Cu;
            // 0x522060: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522064u; }
        if (ctx->pc != 0x522064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522064u; }
        if (ctx->pc != 0x522064u) { return; }
    }
    ctx->pc = 0x522064u;
label_522064:
    // 0x522064: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x522064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_522068:
    // 0x522068: 0xc0d879c  jal         func_361E70
label_52206c:
    if (ctx->pc == 0x52206Cu) {
        ctx->pc = 0x52206Cu;
            // 0x52206c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522070u;
        goto label_522070;
    }
    ctx->pc = 0x522068u;
    SET_GPR_U32(ctx, 31, 0x522070u);
    ctx->pc = 0x52206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522068u;
            // 0x52206c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522070u; }
        if (ctx->pc != 0x522070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522070u; }
        if (ctx->pc != 0x522070u) { return; }
    }
    ctx->pc = 0x522070u;
label_522070:
    // 0x522070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x522070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_522074:
    // 0x522074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522078:
    // 0x522078: 0x3e00008  jr          $ra
label_52207c:
    if (ctx->pc == 0x52207Cu) {
        ctx->pc = 0x52207Cu;
            // 0x52207c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x522080u;
        goto label_522080;
    }
    ctx->pc = 0x522078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522078u;
            // 0x52207c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522080u;
label_522080:
    // 0x522080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x522080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_522084:
    // 0x522084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x522084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_522088:
    // 0x522088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52208c:
    // 0x52208c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x52208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_522090:
    // 0x522090: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_522094:
    if (ctx->pc == 0x522094u) {
        ctx->pc = 0x522094u;
            // 0x522094: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522098u;
        goto label_522098;
    }
    ctx->pc = 0x522090u;
    {
        const bool branch_taken_0x522090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x522094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522090u;
            // 0x522094: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522090) {
            ctx->pc = 0x5221B0u;
            goto label_5221b0;
        }
    }
    ctx->pc = 0x522098u;
label_522098:
    // 0x522098: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x522098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52209c:
    // 0x52209c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_5220a0:
    // 0x5220a0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x5220a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_5220a4:
    // 0x5220a4: 0xc075128  jal         func_1D44A0
label_5220a8:
    if (ctx->pc == 0x5220A8u) {
        ctx->pc = 0x5220A8u;
            // 0x5220a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x5220ACu;
        goto label_5220ac;
    }
    ctx->pc = 0x5220A4u;
    SET_GPR_U32(ctx, 31, 0x5220ACu);
    ctx->pc = 0x5220A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5220A4u;
            // 0x5220a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5220ACu; }
        if (ctx->pc != 0x5220ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5220ACu; }
        if (ctx->pc != 0x5220ACu) { return; }
    }
    ctx->pc = 0x5220ACu;
label_5220ac:
    // 0x5220ac: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x5220acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_5220b0:
    // 0x5220b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5220b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5220b4:
    // 0x5220b4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x5220b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_5220b8:
    // 0x5220b8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x5220b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_5220bc:
    // 0x5220bc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5220bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5220c0:
    // 0x5220c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5220c4:
    if (ctx->pc == 0x5220C4u) {
        ctx->pc = 0x5220C4u;
            // 0x5220c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x5220C8u;
        goto label_5220c8;
    }
    ctx->pc = 0x5220C0u;
    {
        const bool branch_taken_0x5220c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5220C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5220C0u;
            // 0x5220c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5220c0) {
            ctx->pc = 0x5220D0u;
            goto label_5220d0;
        }
    }
    ctx->pc = 0x5220C8u;
label_5220c8:
    // 0x5220c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5220c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5220cc:
    // 0x5220cc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x5220ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_5220d0:
    // 0x5220d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5220d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5220d4:
    // 0x5220d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5220d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5220d8:
    // 0x5220d8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x5220d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_5220dc:
    // 0x5220dc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x5220dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_5220e0:
    // 0x5220e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5220e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5220e4:
    // 0x5220e4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5220e8:
    if (ctx->pc == 0x5220E8u) {
        ctx->pc = 0x5220E8u;
            // 0x5220e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5220ECu;
        goto label_5220ec;
    }
    ctx->pc = 0x5220E4u;
    {
        const bool branch_taken_0x5220e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5220e4) {
            ctx->pc = 0x5220E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5220E4u;
            // 0x5220e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5220F8u;
            goto label_5220f8;
        }
    }
    ctx->pc = 0x5220ECu;
label_5220ec:
    // 0x5220ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5220ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5220f0:
    // 0x5220f0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x5220f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_5220f4:
    // 0x5220f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5220f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5220f8:
    // 0x5220f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5220f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5220fc:
    // 0x5220fc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x5220fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_522100:
    // 0x522100: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x522100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_522104:
    // 0x522104: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x522104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_522108:
    // 0x522108: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52210c:
    if (ctx->pc == 0x52210Cu) {
        ctx->pc = 0x52210Cu;
            // 0x52210c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x522110u;
        goto label_522110;
    }
    ctx->pc = 0x522108u;
    {
        const bool branch_taken_0x522108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x522108) {
            ctx->pc = 0x52210Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522108u;
            // 0x52210c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52211Cu;
            goto label_52211c;
        }
    }
    ctx->pc = 0x522110u;
label_522110:
    // 0x522110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x522110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_522114:
    // 0x522114: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x522114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_522118:
    // 0x522118: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x522118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52211c:
    // 0x52211c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52211cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_522120:
    // 0x522120: 0x320f809  jalr        $t9
label_522124:
    if (ctx->pc == 0x522124u) {
        ctx->pc = 0x522124u;
            // 0x522124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522128u;
        goto label_522128;
    }
    ctx->pc = 0x522120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x522128u);
        ctx->pc = 0x522124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522120u;
            // 0x522124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x522128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x522128u; }
            if (ctx->pc != 0x522128u) { return; }
        }
        }
    }
    ctx->pc = 0x522128u;
label_522128:
    // 0x522128: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x522128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52212c:
    // 0x52212c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52212cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_522130:
    // 0x522130: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x522130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_522134:
    // 0x522134: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x522134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_522138:
    // 0x522138: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x522138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52213c:
    // 0x52213c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52213cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_522140:
    // 0x522140: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_522144:
    if (ctx->pc == 0x522144u) {
        ctx->pc = 0x522144u;
            // 0x522144: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x522148u;
        goto label_522148;
    }
    ctx->pc = 0x522140u;
    {
        const bool branch_taken_0x522140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x522140) {
            ctx->pc = 0x522144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522140u;
            // 0x522144: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522154u;
            goto label_522154;
        }
    }
    ctx->pc = 0x522148u;
label_522148:
    // 0x522148: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x522148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52214c:
    // 0x52214c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52214cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_522150:
    // 0x522150: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x522150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_522154:
    // 0x522154: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x522154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_522158:
    // 0x522158: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x522158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52215c:
    // 0x52215c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_522160:
    // 0x522160: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x522160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_522164:
    // 0x522164: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x522164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_522168:
    // 0x522168: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52216c:
    if (ctx->pc == 0x52216Cu) {
        ctx->pc = 0x522170u;
        goto label_522170;
    }
    ctx->pc = 0x522168u;
    {
        const bool branch_taken_0x522168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x522168) {
            ctx->pc = 0x522178u;
            goto label_522178;
        }
    }
    ctx->pc = 0x522170u;
label_522170:
    // 0x522170: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x522170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_522174:
    // 0x522174: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x522174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_522178:
    // 0x522178: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x522178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52217c:
    // 0x52217c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x52217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_522180:
    // 0x522180: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x522180u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_522184:
    // 0x522184: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_522188:
    if (ctx->pc == 0x522188u) {
        ctx->pc = 0x52218Cu;
        goto label_52218c;
    }
    ctx->pc = 0x522184u;
    {
        const bool branch_taken_0x522184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x522184) {
            ctx->pc = 0x522194u;
            goto label_522194;
        }
    }
    ctx->pc = 0x52218Cu;
label_52218c:
    // 0x52218c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52218cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_522190:
    // 0x522190: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x522190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_522194:
    // 0x522194: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x522194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_522198:
    // 0x522198: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x522198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_52219c:
    // 0x52219c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52219cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5221a0:
    // 0x5221a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5221a4:
    if (ctx->pc == 0x5221A4u) {
        ctx->pc = 0x5221A4u;
            // 0x5221a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5221A8u;
        goto label_5221a8;
    }
    ctx->pc = 0x5221A0u;
    {
        const bool branch_taken_0x5221a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5221a0) {
            ctx->pc = 0x5221A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5221A0u;
            // 0x5221a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5221B4u;
            goto label_5221b4;
        }
    }
    ctx->pc = 0x5221A8u;
label_5221a8:
    // 0x5221a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5221a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5221ac:
    // 0x5221ac: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x5221acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_5221b0:
    // 0x5221b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5221b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5221b4:
    // 0x5221b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5221b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5221b8:
    // 0x5221b8: 0x3e00008  jr          $ra
label_5221bc:
    if (ctx->pc == 0x5221BCu) {
        ctx->pc = 0x5221BCu;
            // 0x5221bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5221C0u;
        goto label_5221c0;
    }
    ctx->pc = 0x5221B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5221BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5221B8u;
            // 0x5221bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5221C0u;
label_5221c0:
    // 0x5221c0: 0x814854c  j           func_521530
label_5221c4:
    if (ctx->pc == 0x5221C4u) {
        ctx->pc = 0x5221C4u;
            // 0x5221c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5221C8u;
        goto label_5221c8;
    }
    ctx->pc = 0x5221C0u;
    ctx->pc = 0x5221C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5221C0u;
            // 0x5221c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x521530u;
    {
        auto targetFn = runtime->lookupFunction(0x521530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5221C8u;
label_5221c8:
    // 0x5221c8: 0x0  nop
    ctx->pc = 0x5221c8u;
    // NOP
label_5221cc:
    // 0x5221cc: 0x0  nop
    ctx->pc = 0x5221ccu;
    // NOP
label_5221d0:
    // 0x5221d0: 0x8148344  j           func_520D10
label_5221d4:
    if (ctx->pc == 0x5221D4u) {
        ctx->pc = 0x5221D4u;
            // 0x5221d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5221D8u;
        goto label_5221d8;
    }
    ctx->pc = 0x5221D0u;
    ctx->pc = 0x5221D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5221D0u;
            // 0x5221d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520D10u;
    if (runtime->hasFunction(0x520D10u)) {
        auto targetFn = runtime->lookupFunction(0x520D10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00520D10_0x520d10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5221D8u;
label_5221d8:
    // 0x5221d8: 0x0  nop
    ctx->pc = 0x5221d8u;
    // NOP
label_5221dc:
    // 0x5221dc: 0x0  nop
    ctx->pc = 0x5221dcu;
    // NOP
label_5221e0:
    // 0x5221e0: 0x814839c  j           func_520E70
label_5221e4:
    if (ctx->pc == 0x5221E4u) {
        ctx->pc = 0x5221E4u;
            // 0x5221e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x5221E8u;
        goto label_5221e8;
    }
    ctx->pc = 0x5221E0u;
    ctx->pc = 0x5221E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5221E0u;
            // 0x5221e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520E70u;
    {
        auto targetFn = runtime->lookupFunction(0x520E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5221E8u;
label_5221e8:
    // 0x5221e8: 0x0  nop
    ctx->pc = 0x5221e8u;
    // NOP
label_5221ec:
    // 0x5221ec: 0x0  nop
    ctx->pc = 0x5221ecu;
    // NOP
label_5221f0:
    // 0x5221f0: 0x8148320  j           func_520C80
label_5221f4:
    if (ctx->pc == 0x5221F4u) {
        ctx->pc = 0x5221F4u;
            // 0x5221f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5221F8u;
        goto label_5221f8;
    }
    ctx->pc = 0x5221F0u;
    ctx->pc = 0x5221F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5221F0u;
            // 0x5221f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520C80u;
    {
        auto targetFn = runtime->lookupFunction(0x520C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5221F8u;
label_5221f8:
    // 0x5221f8: 0x0  nop
    ctx->pc = 0x5221f8u;
    // NOP
label_5221fc:
    // 0x5221fc: 0x0  nop
    ctx->pc = 0x5221fcu;
    // NOP
}
