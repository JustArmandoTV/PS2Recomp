#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003735E0
// Address: 0x3735e0 - 0x373f90
void sub_003735E0_0x3735e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003735E0_0x3735e0");
#endif

    switch (ctx->pc) {
        case 0x3735e0u: goto label_3735e0;
        case 0x3735e4u: goto label_3735e4;
        case 0x3735e8u: goto label_3735e8;
        case 0x3735ecu: goto label_3735ec;
        case 0x3735f0u: goto label_3735f0;
        case 0x3735f4u: goto label_3735f4;
        case 0x3735f8u: goto label_3735f8;
        case 0x3735fcu: goto label_3735fc;
        case 0x373600u: goto label_373600;
        case 0x373604u: goto label_373604;
        case 0x373608u: goto label_373608;
        case 0x37360cu: goto label_37360c;
        case 0x373610u: goto label_373610;
        case 0x373614u: goto label_373614;
        case 0x373618u: goto label_373618;
        case 0x37361cu: goto label_37361c;
        case 0x373620u: goto label_373620;
        case 0x373624u: goto label_373624;
        case 0x373628u: goto label_373628;
        case 0x37362cu: goto label_37362c;
        case 0x373630u: goto label_373630;
        case 0x373634u: goto label_373634;
        case 0x373638u: goto label_373638;
        case 0x37363cu: goto label_37363c;
        case 0x373640u: goto label_373640;
        case 0x373644u: goto label_373644;
        case 0x373648u: goto label_373648;
        case 0x37364cu: goto label_37364c;
        case 0x373650u: goto label_373650;
        case 0x373654u: goto label_373654;
        case 0x373658u: goto label_373658;
        case 0x37365cu: goto label_37365c;
        case 0x373660u: goto label_373660;
        case 0x373664u: goto label_373664;
        case 0x373668u: goto label_373668;
        case 0x37366cu: goto label_37366c;
        case 0x373670u: goto label_373670;
        case 0x373674u: goto label_373674;
        case 0x373678u: goto label_373678;
        case 0x37367cu: goto label_37367c;
        case 0x373680u: goto label_373680;
        case 0x373684u: goto label_373684;
        case 0x373688u: goto label_373688;
        case 0x37368cu: goto label_37368c;
        case 0x373690u: goto label_373690;
        case 0x373694u: goto label_373694;
        case 0x373698u: goto label_373698;
        case 0x37369cu: goto label_37369c;
        case 0x3736a0u: goto label_3736a0;
        case 0x3736a4u: goto label_3736a4;
        case 0x3736a8u: goto label_3736a8;
        case 0x3736acu: goto label_3736ac;
        case 0x3736b0u: goto label_3736b0;
        case 0x3736b4u: goto label_3736b4;
        case 0x3736b8u: goto label_3736b8;
        case 0x3736bcu: goto label_3736bc;
        case 0x3736c0u: goto label_3736c0;
        case 0x3736c4u: goto label_3736c4;
        case 0x3736c8u: goto label_3736c8;
        case 0x3736ccu: goto label_3736cc;
        case 0x3736d0u: goto label_3736d0;
        case 0x3736d4u: goto label_3736d4;
        case 0x3736d8u: goto label_3736d8;
        case 0x3736dcu: goto label_3736dc;
        case 0x3736e0u: goto label_3736e0;
        case 0x3736e4u: goto label_3736e4;
        case 0x3736e8u: goto label_3736e8;
        case 0x3736ecu: goto label_3736ec;
        case 0x3736f0u: goto label_3736f0;
        case 0x3736f4u: goto label_3736f4;
        case 0x3736f8u: goto label_3736f8;
        case 0x3736fcu: goto label_3736fc;
        case 0x373700u: goto label_373700;
        case 0x373704u: goto label_373704;
        case 0x373708u: goto label_373708;
        case 0x37370cu: goto label_37370c;
        case 0x373710u: goto label_373710;
        case 0x373714u: goto label_373714;
        case 0x373718u: goto label_373718;
        case 0x37371cu: goto label_37371c;
        case 0x373720u: goto label_373720;
        case 0x373724u: goto label_373724;
        case 0x373728u: goto label_373728;
        case 0x37372cu: goto label_37372c;
        case 0x373730u: goto label_373730;
        case 0x373734u: goto label_373734;
        case 0x373738u: goto label_373738;
        case 0x37373cu: goto label_37373c;
        case 0x373740u: goto label_373740;
        case 0x373744u: goto label_373744;
        case 0x373748u: goto label_373748;
        case 0x37374cu: goto label_37374c;
        case 0x373750u: goto label_373750;
        case 0x373754u: goto label_373754;
        case 0x373758u: goto label_373758;
        case 0x37375cu: goto label_37375c;
        case 0x373760u: goto label_373760;
        case 0x373764u: goto label_373764;
        case 0x373768u: goto label_373768;
        case 0x37376cu: goto label_37376c;
        case 0x373770u: goto label_373770;
        case 0x373774u: goto label_373774;
        case 0x373778u: goto label_373778;
        case 0x37377cu: goto label_37377c;
        case 0x373780u: goto label_373780;
        case 0x373784u: goto label_373784;
        case 0x373788u: goto label_373788;
        case 0x37378cu: goto label_37378c;
        case 0x373790u: goto label_373790;
        case 0x373794u: goto label_373794;
        case 0x373798u: goto label_373798;
        case 0x37379cu: goto label_37379c;
        case 0x3737a0u: goto label_3737a0;
        case 0x3737a4u: goto label_3737a4;
        case 0x3737a8u: goto label_3737a8;
        case 0x3737acu: goto label_3737ac;
        case 0x3737b0u: goto label_3737b0;
        case 0x3737b4u: goto label_3737b4;
        case 0x3737b8u: goto label_3737b8;
        case 0x3737bcu: goto label_3737bc;
        case 0x3737c0u: goto label_3737c0;
        case 0x3737c4u: goto label_3737c4;
        case 0x3737c8u: goto label_3737c8;
        case 0x3737ccu: goto label_3737cc;
        case 0x3737d0u: goto label_3737d0;
        case 0x3737d4u: goto label_3737d4;
        case 0x3737d8u: goto label_3737d8;
        case 0x3737dcu: goto label_3737dc;
        case 0x3737e0u: goto label_3737e0;
        case 0x3737e4u: goto label_3737e4;
        case 0x3737e8u: goto label_3737e8;
        case 0x3737ecu: goto label_3737ec;
        case 0x3737f0u: goto label_3737f0;
        case 0x3737f4u: goto label_3737f4;
        case 0x3737f8u: goto label_3737f8;
        case 0x3737fcu: goto label_3737fc;
        case 0x373800u: goto label_373800;
        case 0x373804u: goto label_373804;
        case 0x373808u: goto label_373808;
        case 0x37380cu: goto label_37380c;
        case 0x373810u: goto label_373810;
        case 0x373814u: goto label_373814;
        case 0x373818u: goto label_373818;
        case 0x37381cu: goto label_37381c;
        case 0x373820u: goto label_373820;
        case 0x373824u: goto label_373824;
        case 0x373828u: goto label_373828;
        case 0x37382cu: goto label_37382c;
        case 0x373830u: goto label_373830;
        case 0x373834u: goto label_373834;
        case 0x373838u: goto label_373838;
        case 0x37383cu: goto label_37383c;
        case 0x373840u: goto label_373840;
        case 0x373844u: goto label_373844;
        case 0x373848u: goto label_373848;
        case 0x37384cu: goto label_37384c;
        case 0x373850u: goto label_373850;
        case 0x373854u: goto label_373854;
        case 0x373858u: goto label_373858;
        case 0x37385cu: goto label_37385c;
        case 0x373860u: goto label_373860;
        case 0x373864u: goto label_373864;
        case 0x373868u: goto label_373868;
        case 0x37386cu: goto label_37386c;
        case 0x373870u: goto label_373870;
        case 0x373874u: goto label_373874;
        case 0x373878u: goto label_373878;
        case 0x37387cu: goto label_37387c;
        case 0x373880u: goto label_373880;
        case 0x373884u: goto label_373884;
        case 0x373888u: goto label_373888;
        case 0x37388cu: goto label_37388c;
        case 0x373890u: goto label_373890;
        case 0x373894u: goto label_373894;
        case 0x373898u: goto label_373898;
        case 0x37389cu: goto label_37389c;
        case 0x3738a0u: goto label_3738a0;
        case 0x3738a4u: goto label_3738a4;
        case 0x3738a8u: goto label_3738a8;
        case 0x3738acu: goto label_3738ac;
        case 0x3738b0u: goto label_3738b0;
        case 0x3738b4u: goto label_3738b4;
        case 0x3738b8u: goto label_3738b8;
        case 0x3738bcu: goto label_3738bc;
        case 0x3738c0u: goto label_3738c0;
        case 0x3738c4u: goto label_3738c4;
        case 0x3738c8u: goto label_3738c8;
        case 0x3738ccu: goto label_3738cc;
        case 0x3738d0u: goto label_3738d0;
        case 0x3738d4u: goto label_3738d4;
        case 0x3738d8u: goto label_3738d8;
        case 0x3738dcu: goto label_3738dc;
        case 0x3738e0u: goto label_3738e0;
        case 0x3738e4u: goto label_3738e4;
        case 0x3738e8u: goto label_3738e8;
        case 0x3738ecu: goto label_3738ec;
        case 0x3738f0u: goto label_3738f0;
        case 0x3738f4u: goto label_3738f4;
        case 0x3738f8u: goto label_3738f8;
        case 0x3738fcu: goto label_3738fc;
        case 0x373900u: goto label_373900;
        case 0x373904u: goto label_373904;
        case 0x373908u: goto label_373908;
        case 0x37390cu: goto label_37390c;
        case 0x373910u: goto label_373910;
        case 0x373914u: goto label_373914;
        case 0x373918u: goto label_373918;
        case 0x37391cu: goto label_37391c;
        case 0x373920u: goto label_373920;
        case 0x373924u: goto label_373924;
        case 0x373928u: goto label_373928;
        case 0x37392cu: goto label_37392c;
        case 0x373930u: goto label_373930;
        case 0x373934u: goto label_373934;
        case 0x373938u: goto label_373938;
        case 0x37393cu: goto label_37393c;
        case 0x373940u: goto label_373940;
        case 0x373944u: goto label_373944;
        case 0x373948u: goto label_373948;
        case 0x37394cu: goto label_37394c;
        case 0x373950u: goto label_373950;
        case 0x373954u: goto label_373954;
        case 0x373958u: goto label_373958;
        case 0x37395cu: goto label_37395c;
        case 0x373960u: goto label_373960;
        case 0x373964u: goto label_373964;
        case 0x373968u: goto label_373968;
        case 0x37396cu: goto label_37396c;
        case 0x373970u: goto label_373970;
        case 0x373974u: goto label_373974;
        case 0x373978u: goto label_373978;
        case 0x37397cu: goto label_37397c;
        case 0x373980u: goto label_373980;
        case 0x373984u: goto label_373984;
        case 0x373988u: goto label_373988;
        case 0x37398cu: goto label_37398c;
        case 0x373990u: goto label_373990;
        case 0x373994u: goto label_373994;
        case 0x373998u: goto label_373998;
        case 0x37399cu: goto label_37399c;
        case 0x3739a0u: goto label_3739a0;
        case 0x3739a4u: goto label_3739a4;
        case 0x3739a8u: goto label_3739a8;
        case 0x3739acu: goto label_3739ac;
        case 0x3739b0u: goto label_3739b0;
        case 0x3739b4u: goto label_3739b4;
        case 0x3739b8u: goto label_3739b8;
        case 0x3739bcu: goto label_3739bc;
        case 0x3739c0u: goto label_3739c0;
        case 0x3739c4u: goto label_3739c4;
        case 0x3739c8u: goto label_3739c8;
        case 0x3739ccu: goto label_3739cc;
        case 0x3739d0u: goto label_3739d0;
        case 0x3739d4u: goto label_3739d4;
        case 0x3739d8u: goto label_3739d8;
        case 0x3739dcu: goto label_3739dc;
        case 0x3739e0u: goto label_3739e0;
        case 0x3739e4u: goto label_3739e4;
        case 0x3739e8u: goto label_3739e8;
        case 0x3739ecu: goto label_3739ec;
        case 0x3739f0u: goto label_3739f0;
        case 0x3739f4u: goto label_3739f4;
        case 0x3739f8u: goto label_3739f8;
        case 0x3739fcu: goto label_3739fc;
        case 0x373a00u: goto label_373a00;
        case 0x373a04u: goto label_373a04;
        case 0x373a08u: goto label_373a08;
        case 0x373a0cu: goto label_373a0c;
        case 0x373a10u: goto label_373a10;
        case 0x373a14u: goto label_373a14;
        case 0x373a18u: goto label_373a18;
        case 0x373a1cu: goto label_373a1c;
        case 0x373a20u: goto label_373a20;
        case 0x373a24u: goto label_373a24;
        case 0x373a28u: goto label_373a28;
        case 0x373a2cu: goto label_373a2c;
        case 0x373a30u: goto label_373a30;
        case 0x373a34u: goto label_373a34;
        case 0x373a38u: goto label_373a38;
        case 0x373a3cu: goto label_373a3c;
        case 0x373a40u: goto label_373a40;
        case 0x373a44u: goto label_373a44;
        case 0x373a48u: goto label_373a48;
        case 0x373a4cu: goto label_373a4c;
        case 0x373a50u: goto label_373a50;
        case 0x373a54u: goto label_373a54;
        case 0x373a58u: goto label_373a58;
        case 0x373a5cu: goto label_373a5c;
        case 0x373a60u: goto label_373a60;
        case 0x373a64u: goto label_373a64;
        case 0x373a68u: goto label_373a68;
        case 0x373a6cu: goto label_373a6c;
        case 0x373a70u: goto label_373a70;
        case 0x373a74u: goto label_373a74;
        case 0x373a78u: goto label_373a78;
        case 0x373a7cu: goto label_373a7c;
        case 0x373a80u: goto label_373a80;
        case 0x373a84u: goto label_373a84;
        case 0x373a88u: goto label_373a88;
        case 0x373a8cu: goto label_373a8c;
        case 0x373a90u: goto label_373a90;
        case 0x373a94u: goto label_373a94;
        case 0x373a98u: goto label_373a98;
        case 0x373a9cu: goto label_373a9c;
        case 0x373aa0u: goto label_373aa0;
        case 0x373aa4u: goto label_373aa4;
        case 0x373aa8u: goto label_373aa8;
        case 0x373aacu: goto label_373aac;
        case 0x373ab0u: goto label_373ab0;
        case 0x373ab4u: goto label_373ab4;
        case 0x373ab8u: goto label_373ab8;
        case 0x373abcu: goto label_373abc;
        case 0x373ac0u: goto label_373ac0;
        case 0x373ac4u: goto label_373ac4;
        case 0x373ac8u: goto label_373ac8;
        case 0x373accu: goto label_373acc;
        case 0x373ad0u: goto label_373ad0;
        case 0x373ad4u: goto label_373ad4;
        case 0x373ad8u: goto label_373ad8;
        case 0x373adcu: goto label_373adc;
        case 0x373ae0u: goto label_373ae0;
        case 0x373ae4u: goto label_373ae4;
        case 0x373ae8u: goto label_373ae8;
        case 0x373aecu: goto label_373aec;
        case 0x373af0u: goto label_373af0;
        case 0x373af4u: goto label_373af4;
        case 0x373af8u: goto label_373af8;
        case 0x373afcu: goto label_373afc;
        case 0x373b00u: goto label_373b00;
        case 0x373b04u: goto label_373b04;
        case 0x373b08u: goto label_373b08;
        case 0x373b0cu: goto label_373b0c;
        case 0x373b10u: goto label_373b10;
        case 0x373b14u: goto label_373b14;
        case 0x373b18u: goto label_373b18;
        case 0x373b1cu: goto label_373b1c;
        case 0x373b20u: goto label_373b20;
        case 0x373b24u: goto label_373b24;
        case 0x373b28u: goto label_373b28;
        case 0x373b2cu: goto label_373b2c;
        case 0x373b30u: goto label_373b30;
        case 0x373b34u: goto label_373b34;
        case 0x373b38u: goto label_373b38;
        case 0x373b3cu: goto label_373b3c;
        case 0x373b40u: goto label_373b40;
        case 0x373b44u: goto label_373b44;
        case 0x373b48u: goto label_373b48;
        case 0x373b4cu: goto label_373b4c;
        case 0x373b50u: goto label_373b50;
        case 0x373b54u: goto label_373b54;
        case 0x373b58u: goto label_373b58;
        case 0x373b5cu: goto label_373b5c;
        case 0x373b60u: goto label_373b60;
        case 0x373b64u: goto label_373b64;
        case 0x373b68u: goto label_373b68;
        case 0x373b6cu: goto label_373b6c;
        case 0x373b70u: goto label_373b70;
        case 0x373b74u: goto label_373b74;
        case 0x373b78u: goto label_373b78;
        case 0x373b7cu: goto label_373b7c;
        case 0x373b80u: goto label_373b80;
        case 0x373b84u: goto label_373b84;
        case 0x373b88u: goto label_373b88;
        case 0x373b8cu: goto label_373b8c;
        case 0x373b90u: goto label_373b90;
        case 0x373b94u: goto label_373b94;
        case 0x373b98u: goto label_373b98;
        case 0x373b9cu: goto label_373b9c;
        case 0x373ba0u: goto label_373ba0;
        case 0x373ba4u: goto label_373ba4;
        case 0x373ba8u: goto label_373ba8;
        case 0x373bacu: goto label_373bac;
        case 0x373bb0u: goto label_373bb0;
        case 0x373bb4u: goto label_373bb4;
        case 0x373bb8u: goto label_373bb8;
        case 0x373bbcu: goto label_373bbc;
        case 0x373bc0u: goto label_373bc0;
        case 0x373bc4u: goto label_373bc4;
        case 0x373bc8u: goto label_373bc8;
        case 0x373bccu: goto label_373bcc;
        case 0x373bd0u: goto label_373bd0;
        case 0x373bd4u: goto label_373bd4;
        case 0x373bd8u: goto label_373bd8;
        case 0x373bdcu: goto label_373bdc;
        case 0x373be0u: goto label_373be0;
        case 0x373be4u: goto label_373be4;
        case 0x373be8u: goto label_373be8;
        case 0x373becu: goto label_373bec;
        case 0x373bf0u: goto label_373bf0;
        case 0x373bf4u: goto label_373bf4;
        case 0x373bf8u: goto label_373bf8;
        case 0x373bfcu: goto label_373bfc;
        case 0x373c00u: goto label_373c00;
        case 0x373c04u: goto label_373c04;
        case 0x373c08u: goto label_373c08;
        case 0x373c0cu: goto label_373c0c;
        case 0x373c10u: goto label_373c10;
        case 0x373c14u: goto label_373c14;
        case 0x373c18u: goto label_373c18;
        case 0x373c1cu: goto label_373c1c;
        case 0x373c20u: goto label_373c20;
        case 0x373c24u: goto label_373c24;
        case 0x373c28u: goto label_373c28;
        case 0x373c2cu: goto label_373c2c;
        case 0x373c30u: goto label_373c30;
        case 0x373c34u: goto label_373c34;
        case 0x373c38u: goto label_373c38;
        case 0x373c3cu: goto label_373c3c;
        case 0x373c40u: goto label_373c40;
        case 0x373c44u: goto label_373c44;
        case 0x373c48u: goto label_373c48;
        case 0x373c4cu: goto label_373c4c;
        case 0x373c50u: goto label_373c50;
        case 0x373c54u: goto label_373c54;
        case 0x373c58u: goto label_373c58;
        case 0x373c5cu: goto label_373c5c;
        case 0x373c60u: goto label_373c60;
        case 0x373c64u: goto label_373c64;
        case 0x373c68u: goto label_373c68;
        case 0x373c6cu: goto label_373c6c;
        case 0x373c70u: goto label_373c70;
        case 0x373c74u: goto label_373c74;
        case 0x373c78u: goto label_373c78;
        case 0x373c7cu: goto label_373c7c;
        case 0x373c80u: goto label_373c80;
        case 0x373c84u: goto label_373c84;
        case 0x373c88u: goto label_373c88;
        case 0x373c8cu: goto label_373c8c;
        case 0x373c90u: goto label_373c90;
        case 0x373c94u: goto label_373c94;
        case 0x373c98u: goto label_373c98;
        case 0x373c9cu: goto label_373c9c;
        case 0x373ca0u: goto label_373ca0;
        case 0x373ca4u: goto label_373ca4;
        case 0x373ca8u: goto label_373ca8;
        case 0x373cacu: goto label_373cac;
        case 0x373cb0u: goto label_373cb0;
        case 0x373cb4u: goto label_373cb4;
        case 0x373cb8u: goto label_373cb8;
        case 0x373cbcu: goto label_373cbc;
        case 0x373cc0u: goto label_373cc0;
        case 0x373cc4u: goto label_373cc4;
        case 0x373cc8u: goto label_373cc8;
        case 0x373cccu: goto label_373ccc;
        case 0x373cd0u: goto label_373cd0;
        case 0x373cd4u: goto label_373cd4;
        case 0x373cd8u: goto label_373cd8;
        case 0x373cdcu: goto label_373cdc;
        case 0x373ce0u: goto label_373ce0;
        case 0x373ce4u: goto label_373ce4;
        case 0x373ce8u: goto label_373ce8;
        case 0x373cecu: goto label_373cec;
        case 0x373cf0u: goto label_373cf0;
        case 0x373cf4u: goto label_373cf4;
        case 0x373cf8u: goto label_373cf8;
        case 0x373cfcu: goto label_373cfc;
        case 0x373d00u: goto label_373d00;
        case 0x373d04u: goto label_373d04;
        case 0x373d08u: goto label_373d08;
        case 0x373d0cu: goto label_373d0c;
        case 0x373d10u: goto label_373d10;
        case 0x373d14u: goto label_373d14;
        case 0x373d18u: goto label_373d18;
        case 0x373d1cu: goto label_373d1c;
        case 0x373d20u: goto label_373d20;
        case 0x373d24u: goto label_373d24;
        case 0x373d28u: goto label_373d28;
        case 0x373d2cu: goto label_373d2c;
        case 0x373d30u: goto label_373d30;
        case 0x373d34u: goto label_373d34;
        case 0x373d38u: goto label_373d38;
        case 0x373d3cu: goto label_373d3c;
        case 0x373d40u: goto label_373d40;
        case 0x373d44u: goto label_373d44;
        case 0x373d48u: goto label_373d48;
        case 0x373d4cu: goto label_373d4c;
        case 0x373d50u: goto label_373d50;
        case 0x373d54u: goto label_373d54;
        case 0x373d58u: goto label_373d58;
        case 0x373d5cu: goto label_373d5c;
        case 0x373d60u: goto label_373d60;
        case 0x373d64u: goto label_373d64;
        case 0x373d68u: goto label_373d68;
        case 0x373d6cu: goto label_373d6c;
        case 0x373d70u: goto label_373d70;
        case 0x373d74u: goto label_373d74;
        case 0x373d78u: goto label_373d78;
        case 0x373d7cu: goto label_373d7c;
        case 0x373d80u: goto label_373d80;
        case 0x373d84u: goto label_373d84;
        case 0x373d88u: goto label_373d88;
        case 0x373d8cu: goto label_373d8c;
        case 0x373d90u: goto label_373d90;
        case 0x373d94u: goto label_373d94;
        case 0x373d98u: goto label_373d98;
        case 0x373d9cu: goto label_373d9c;
        case 0x373da0u: goto label_373da0;
        case 0x373da4u: goto label_373da4;
        case 0x373da8u: goto label_373da8;
        case 0x373dacu: goto label_373dac;
        case 0x373db0u: goto label_373db0;
        case 0x373db4u: goto label_373db4;
        case 0x373db8u: goto label_373db8;
        case 0x373dbcu: goto label_373dbc;
        case 0x373dc0u: goto label_373dc0;
        case 0x373dc4u: goto label_373dc4;
        case 0x373dc8u: goto label_373dc8;
        case 0x373dccu: goto label_373dcc;
        case 0x373dd0u: goto label_373dd0;
        case 0x373dd4u: goto label_373dd4;
        case 0x373dd8u: goto label_373dd8;
        case 0x373ddcu: goto label_373ddc;
        case 0x373de0u: goto label_373de0;
        case 0x373de4u: goto label_373de4;
        case 0x373de8u: goto label_373de8;
        case 0x373decu: goto label_373dec;
        case 0x373df0u: goto label_373df0;
        case 0x373df4u: goto label_373df4;
        case 0x373df8u: goto label_373df8;
        case 0x373dfcu: goto label_373dfc;
        case 0x373e00u: goto label_373e00;
        case 0x373e04u: goto label_373e04;
        case 0x373e08u: goto label_373e08;
        case 0x373e0cu: goto label_373e0c;
        case 0x373e10u: goto label_373e10;
        case 0x373e14u: goto label_373e14;
        case 0x373e18u: goto label_373e18;
        case 0x373e1cu: goto label_373e1c;
        case 0x373e20u: goto label_373e20;
        case 0x373e24u: goto label_373e24;
        case 0x373e28u: goto label_373e28;
        case 0x373e2cu: goto label_373e2c;
        case 0x373e30u: goto label_373e30;
        case 0x373e34u: goto label_373e34;
        case 0x373e38u: goto label_373e38;
        case 0x373e3cu: goto label_373e3c;
        case 0x373e40u: goto label_373e40;
        case 0x373e44u: goto label_373e44;
        case 0x373e48u: goto label_373e48;
        case 0x373e4cu: goto label_373e4c;
        case 0x373e50u: goto label_373e50;
        case 0x373e54u: goto label_373e54;
        case 0x373e58u: goto label_373e58;
        case 0x373e5cu: goto label_373e5c;
        case 0x373e60u: goto label_373e60;
        case 0x373e64u: goto label_373e64;
        case 0x373e68u: goto label_373e68;
        case 0x373e6cu: goto label_373e6c;
        case 0x373e70u: goto label_373e70;
        case 0x373e74u: goto label_373e74;
        case 0x373e78u: goto label_373e78;
        case 0x373e7cu: goto label_373e7c;
        case 0x373e80u: goto label_373e80;
        case 0x373e84u: goto label_373e84;
        case 0x373e88u: goto label_373e88;
        case 0x373e8cu: goto label_373e8c;
        case 0x373e90u: goto label_373e90;
        case 0x373e94u: goto label_373e94;
        case 0x373e98u: goto label_373e98;
        case 0x373e9cu: goto label_373e9c;
        case 0x373ea0u: goto label_373ea0;
        case 0x373ea4u: goto label_373ea4;
        case 0x373ea8u: goto label_373ea8;
        case 0x373eacu: goto label_373eac;
        case 0x373eb0u: goto label_373eb0;
        case 0x373eb4u: goto label_373eb4;
        case 0x373eb8u: goto label_373eb8;
        case 0x373ebcu: goto label_373ebc;
        case 0x373ec0u: goto label_373ec0;
        case 0x373ec4u: goto label_373ec4;
        case 0x373ec8u: goto label_373ec8;
        case 0x373eccu: goto label_373ecc;
        case 0x373ed0u: goto label_373ed0;
        case 0x373ed4u: goto label_373ed4;
        case 0x373ed8u: goto label_373ed8;
        case 0x373edcu: goto label_373edc;
        case 0x373ee0u: goto label_373ee0;
        case 0x373ee4u: goto label_373ee4;
        case 0x373ee8u: goto label_373ee8;
        case 0x373eecu: goto label_373eec;
        case 0x373ef0u: goto label_373ef0;
        case 0x373ef4u: goto label_373ef4;
        case 0x373ef8u: goto label_373ef8;
        case 0x373efcu: goto label_373efc;
        case 0x373f00u: goto label_373f00;
        case 0x373f04u: goto label_373f04;
        case 0x373f08u: goto label_373f08;
        case 0x373f0cu: goto label_373f0c;
        case 0x373f10u: goto label_373f10;
        case 0x373f14u: goto label_373f14;
        case 0x373f18u: goto label_373f18;
        case 0x373f1cu: goto label_373f1c;
        case 0x373f20u: goto label_373f20;
        case 0x373f24u: goto label_373f24;
        case 0x373f28u: goto label_373f28;
        case 0x373f2cu: goto label_373f2c;
        case 0x373f30u: goto label_373f30;
        case 0x373f34u: goto label_373f34;
        case 0x373f38u: goto label_373f38;
        case 0x373f3cu: goto label_373f3c;
        case 0x373f40u: goto label_373f40;
        case 0x373f44u: goto label_373f44;
        case 0x373f48u: goto label_373f48;
        case 0x373f4cu: goto label_373f4c;
        case 0x373f50u: goto label_373f50;
        case 0x373f54u: goto label_373f54;
        case 0x373f58u: goto label_373f58;
        case 0x373f5cu: goto label_373f5c;
        case 0x373f60u: goto label_373f60;
        case 0x373f64u: goto label_373f64;
        case 0x373f68u: goto label_373f68;
        case 0x373f6cu: goto label_373f6c;
        case 0x373f70u: goto label_373f70;
        case 0x373f74u: goto label_373f74;
        case 0x373f78u: goto label_373f78;
        case 0x373f7cu: goto label_373f7c;
        case 0x373f80u: goto label_373f80;
        case 0x373f84u: goto label_373f84;
        case 0x373f88u: goto label_373f88;
        case 0x373f8cu: goto label_373f8c;
        default: break;
    }

    ctx->pc = 0x3735e0u;

label_3735e0:
    // 0x3735e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3735e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3735e4:
    // 0x3735e4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3735e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3735e8:
    // 0x3735e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3735e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3735ec:
    // 0x3735ec: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3735ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3735f0:
    // 0x3735f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3735f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3735f4:
    // 0x3735f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3735f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3735f8:
    // 0x3735f8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3735f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3735fc:
    // 0x3735fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3735fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_373600:
    // 0x373600: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x373600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_373604:
    // 0x373604: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x373604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_373608:
    // 0x373608: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x373608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37360c:
    // 0x37360c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_373610:
    // 0x373610: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x373610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_373614:
    // 0x373614: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_373618:
    // 0x373618: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37361c:
    // 0x37361c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x37361cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_373620:
    // 0x373620: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x373620u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_373624:
    // 0x373624: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x373624u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_373628:
    // 0x373628: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x373628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37362c:
    // 0x37362c: 0xa0a0fe01  sb          $zero, -0x1FF($a1)
    ctx->pc = 0x37362cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294966785), (uint8_t)GPR_U32(ctx, 0));
label_373630:
    // 0x373630: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x373630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_373634:
    // 0x373634: 0x8c63095c  lw          $v1, 0x95C($v1)
    ctx->pc = 0x373634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2396)));
label_373638:
    // 0x373638: 0x50640246  beql        $v1, $a0, . + 4 + (0x246 << 2)
label_37363c:
    if (ctx->pc == 0x37363Cu) {
        ctx->pc = 0x37363Cu;
            // 0x37363c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x373640u;
        goto label_373640;
    }
    ctx->pc = 0x373638u;
    {
        const bool branch_taken_0x373638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x373638) {
            ctx->pc = 0x37363Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373638u;
            // 0x37363c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373F54u;
            goto label_373f54;
        }
    }
    ctx->pc = 0x373640u;
label_373640:
    // 0x373640: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_373644:
    // 0x373644: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x373644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_373648:
    // 0x373648: 0x9063fd95  lbu         $v1, -0x26B($v1)
    ctx->pc = 0x373648u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966677)));
label_37364c:
    // 0x37364c: 0x10600240  beqz        $v1, . + 4 + (0x240 << 2)
label_373650:
    if (ctx->pc == 0x373650u) {
        ctx->pc = 0x373654u;
        goto label_373654;
    }
    ctx->pc = 0x37364Cu;
    {
        const bool branch_taken_0x37364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37364c) {
            ctx->pc = 0x373F50u;
            goto label_373f50;
        }
    }
    ctx->pc = 0x373654u;
label_373654:
    // 0x373654: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_373658:
    // 0x373658: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x373658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_37365c:
    // 0x37365c: 0x9063fd86  lbu         $v1, -0x27A($v1)
    ctx->pc = 0x37365cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966662)));
label_373660:
    // 0x373660: 0x1460023b  bnez        $v1, . + 4 + (0x23B << 2)
label_373664:
    if (ctx->pc == 0x373664u) {
        ctx->pc = 0x373668u;
        goto label_373668;
    }
    ctx->pc = 0x373660u;
    {
        const bool branch_taken_0x373660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373660) {
            ctx->pc = 0x373F50u;
            goto label_373f50;
        }
    }
    ctx->pc = 0x373668u;
label_373668:
    // 0x373668: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x373668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_37366c:
    // 0x37366c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_373670:
    // 0x373670: 0x8c42fd88  lw          $v0, -0x278($v0)
    ctx->pc = 0x373670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966664)));
label_373674:
    // 0x373674: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_373678:
    if (ctx->pc == 0x373678u) {
        ctx->pc = 0x373678u;
            // 0x373678: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x37367Cu;
        goto label_37367c;
    }
    ctx->pc = 0x373674u;
    {
        const bool branch_taken_0x373674 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x373674) {
            ctx->pc = 0x373678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373674u;
            // 0x373678: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373688u;
            goto label_373688;
        }
    }
    ctx->pc = 0x37367Cu;
label_37367c:
    // 0x37367c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373680:
    // 0x373680: 0x10000007  b           . + 4 + (0x7 << 2)
label_373684:
    if (ctx->pc == 0x373684u) {
        ctx->pc = 0x373684u;
            // 0x373684: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x373688u;
        goto label_373688;
    }
    ctx->pc = 0x373680u;
    {
        const bool branch_taken_0x373680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373680u;
            // 0x373684: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373680) {
            ctx->pc = 0x3736A0u;
            goto label_3736a0;
        }
    }
    ctx->pc = 0x373688u;
label_373688:
    // 0x373688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x373688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37368c:
    // 0x37368c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37368cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_373690:
    // 0x373690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373694:
    // 0x373694: 0x0  nop
    ctx->pc = 0x373694u;
    // NOP
label_373698:
    // 0x373698: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x373698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37369c:
    // 0x37369c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37369cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3736a0:
    // 0x3736a0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3736a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3736a4:
    // 0x3736a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3736a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3736a8:
    // 0x3736a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3736a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3736ac:
    // 0x3736ac: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x3736acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3736b0:
    // 0x3736b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3736b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3736b4:
    // 0x3736b4: 0x3403fd40  ori         $v1, $zero, 0xFD40
    ctx->pc = 0x3736b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
label_3736b8:
    // 0x3736b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3736b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3736bc:
    // 0x3736bc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3736c0:
    // 0x3736c0: 0x9044fd84  lbu         $a0, -0x27C($v0)
    ctx->pc = 0x3736c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966660)));
label_3736c4:
    // 0x3736c4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x3736c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3736c8:
    // 0x3736c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3736c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3736cc:
    // 0x3736cc: 0x8c426058  lw          $v0, 0x6058($v0)
    ctx->pc = 0x3736ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24664)));
label_3736d0:
    // 0x3736d0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3736d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3736d4:
    // 0x3736d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3736d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3736d8:
    // 0x3736d8: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x3736d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_3736dc:
    // 0x3736dc: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x3736dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
label_3736e0:
    // 0x3736e0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x3736e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_3736e4:
    // 0x3736e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3736e8:
    if (ctx->pc == 0x3736E8u) {
        ctx->pc = 0x3736E8u;
            // 0x3736e8: 0x460008c3  div.s       $f3, $f1, $f0 (Delay Slot)
        if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
        ctx->pc = 0x3736ECu;
        goto label_3736ec;
    }
    ctx->pc = 0x3736E4u;
    {
        const bool branch_taken_0x3736e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3736E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3736E4u;
            // 0x3736e8: 0x460008c3  div.s       $f3, $f1, $f0 (Delay Slot)
        if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
        ctx->in_delay_slot = false;
        if (branch_taken_0x3736e4) {
            ctx->pc = 0x3736F4u;
            goto label_3736f4;
        }
    }
    ctx->pc = 0x3736ECu;
label_3736ec:
    // 0x3736ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_3736f0:
    if (ctx->pc == 0x3736F0u) {
        ctx->pc = 0x3736F0u;
            // 0x3736f0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x3736F4u;
        goto label_3736f4;
    }
    ctx->pc = 0x3736ECu;
    {
        const bool branch_taken_0x3736ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3736F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3736ECu;
            // 0x3736f0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3736ec) {
            ctx->pc = 0x3736F8u;
            goto label_3736f8;
        }
    }
    ctx->pc = 0x3736F4u;
label_3736f4:
    // 0x3736f4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x3736f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3736f8:
    // 0x3736f8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3736fc:
    if (ctx->pc == 0x3736FCu) {
        ctx->pc = 0x3736FCu;
            // 0x3736fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x373700u;
        goto label_373700;
    }
    ctx->pc = 0x3736F8u;
    {
        const bool branch_taken_0x3736f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3736f8) {
            ctx->pc = 0x3736FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3736F8u;
            // 0x3736fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37370Cu;
            goto label_37370c;
        }
    }
    ctx->pc = 0x373700u;
label_373700:
    // 0x373700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373704:
    // 0x373704: 0x10000007  b           . + 4 + (0x7 << 2)
label_373708:
    if (ctx->pc == 0x373708u) {
        ctx->pc = 0x373708u;
            // 0x373708: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37370Cu;
        goto label_37370c;
    }
    ctx->pc = 0x373704u;
    {
        const bool branch_taken_0x373704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373704u;
            // 0x373708: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373704) {
            ctx->pc = 0x373724u;
            goto label_373724;
        }
    }
    ctx->pc = 0x37370Cu;
label_37370c:
    // 0x37370c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_373710:
    // 0x373710: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x373710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_373714:
    // 0x373714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373718:
    // 0x373718: 0x0  nop
    ctx->pc = 0x373718u;
    // NOP
label_37371c:
    // 0x37371c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37371cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_373720:
    // 0x373720: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x373720u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_373724:
    // 0x373724: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x373724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_373728:
    // 0x373728: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x373728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_37372c:
    // 0x37372c: 0x8c42fd90  lw          $v0, -0x270($v0)
    ctx->pc = 0x37372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966672)));
label_373730:
    // 0x373730: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_373734:
    if (ctx->pc == 0x373734u) {
        ctx->pc = 0x373734u;
            // 0x373734: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x373738u;
        goto label_373738;
    }
    ctx->pc = 0x373730u;
    {
        const bool branch_taken_0x373730 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x373730) {
            ctx->pc = 0x373734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373730u;
            // 0x373734: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373744u;
            goto label_373744;
        }
    }
    ctx->pc = 0x373738u;
label_373738:
    // 0x373738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37373c:
    // 0x37373c: 0x10000007  b           . + 4 + (0x7 << 2)
label_373740:
    if (ctx->pc == 0x373740u) {
        ctx->pc = 0x373740u;
            // 0x373740: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x373744u;
        goto label_373744;
    }
    ctx->pc = 0x37373Cu;
    {
        const bool branch_taken_0x37373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37373Cu;
            // 0x373740: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37373c) {
            ctx->pc = 0x37375Cu;
            goto label_37375c;
        }
    }
    ctx->pc = 0x373744u;
label_373744:
    // 0x373744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x373744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_373748:
    // 0x373748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x373748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37374c:
    // 0x37374c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37374cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373750:
    // 0x373750: 0x0  nop
    ctx->pc = 0x373750u;
    // NOP
label_373754:
    // 0x373754: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x373754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_373758:
    // 0x373758: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x373758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37375c:
    // 0x37375c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x37375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_373760:
    // 0x373760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373764:
    // 0x373764: 0x0  nop
    ctx->pc = 0x373764u;
    // NOP
label_373768:
    // 0x373768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x373768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37376c:
    // 0x37376c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x37376cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_373770:
    // 0x373770: 0x0  nop
    ctx->pc = 0x373770u;
    // NOP
label_373774:
    // 0x373774: 0x0  nop
    ctx->pc = 0x373774u;
    // NOP
label_373778:
    // 0x373778: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x373778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37377c:
    // 0x37377c: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_373780:
    if (ctx->pc == 0x373780u) {
        ctx->pc = 0x373780u;
            // 0x373780: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x373784u;
        goto label_373784;
    }
    ctx->pc = 0x37377Cu;
    {
        const bool branch_taken_0x37377c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37377c) {
            ctx->pc = 0x373780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37377Cu;
            // 0x373780: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3737B0u;
            goto label_3737b0;
        }
    }
    ctx->pc = 0x373784u;
label_373784:
    // 0x373784: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x373784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_373788:
    // 0x373788: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x373788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37378c:
    // 0x37378c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_373790:
    // 0x373790: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x373790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_373794:
    // 0x373794: 0xac40fd8c  sw          $zero, -0x274($v0)
    ctx->pc = 0x373794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966668), GPR_U32(ctx, 0));
label_373798:
    // 0x373798: 0x8c63fd90  lw          $v1, -0x270($v1)
    ctx->pc = 0x373798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966672)));
label_37379c:
    // 0x37379c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3737a0:
    // 0x3737a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3737a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3737a4:
    // 0x3737a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3737a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3737a8:
    // 0x3737a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3737ac:
    if (ctx->pc == 0x3737ACu) {
        ctx->pc = 0x3737ACu;
            // 0x3737ac: 0xac43fd90  sw          $v1, -0x270($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966672), GPR_U32(ctx, 3));
        ctx->pc = 0x3737B0u;
        goto label_3737b0;
    }
    ctx->pc = 0x3737A8u;
    {
        const bool branch_taken_0x3737a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3737ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3737A8u;
            // 0x3737ac: 0xac43fd90  sw          $v1, -0x270($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3737a8) {
            ctx->pc = 0x3737C8u;
            goto label_3737c8;
        }
    }
    ctx->pc = 0x3737B0u;
label_3737b0:
    // 0x3737b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3737b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3737b4:
    // 0x3737b4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3737b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3737b8:
    // 0x3737b8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3737b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3737bc:
    // 0x3737bc: 0x8c63fd8c  lw          $v1, -0x274($v1)
    ctx->pc = 0x3737bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966668)));
label_3737c0:
    // 0x3737c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3737c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3737c4:
    // 0x3737c4: 0xac43fd8c  sw          $v1, -0x274($v0)
    ctx->pc = 0x3737c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966668), GPR_U32(ctx, 3));
label_3737c8:
    // 0x3737c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3737c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3737cc:
    // 0x3737cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3737ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3737d0:
    // 0x3737d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3737d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3737d4:
    // 0x3737d4: 0x8c656058  lw          $a1, 0x6058($v1)
    ctx->pc = 0x3737d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24664)));
label_3737d8:
    // 0x3737d8: 0x9046fd84  lbu         $a2, -0x27C($v0)
    ctx->pc = 0x3737d8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966660)));
label_3737dc:
    // 0x3737dc: 0x3404fd40  ori         $a0, $zero, 0xFD40
    ctx->pc = 0x3737dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
label_3737e0:
    // 0x3737e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3737e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3737e4:
    // 0x3737e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3737e8:
    // 0x3737e8: 0x8c43fd90  lw          $v1, -0x270($v0)
    ctx->pc = 0x3737e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966672)));
label_3737ec:
    // 0x3737ec: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x3737ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3737f0:
    // 0x3737f0: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x3737f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3737f4:
    // 0x3737f4: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x3737f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3737f8:
    // 0x3737f8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3737f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3737fc:
    // 0x3737fc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3737fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_373800:
    // 0x373800: 0x102001d1  beqz        $at, . + 4 + (0x1D1 << 2)
label_373804:
    if (ctx->pc == 0x373804u) {
        ctx->pc = 0x373804u;
            // 0x373804: 0x8c910d70  lw          $s1, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x373808u;
        goto label_373808;
    }
    ctx->pc = 0x373800u;
    {
        const bool branch_taken_0x373800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x373804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373800u;
            // 0x373804: 0x8c910d70  lw          $s1, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373800) {
            ctx->pc = 0x373F48u;
            goto label_373f48;
        }
    }
    ctx->pc = 0x373808u;
label_373808:
    // 0x373808: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x373808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_37380c:
    // 0x37380c: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x37380cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_373810:
    // 0x373810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373814:
    // 0x373814: 0x26970010  addiu       $s7, $s4, 0x10
    ctx->pc = 0x373814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_373818:
    // 0x373818: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x373818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37381c:
    // 0x37381c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x37381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_373820:
    // 0x373820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_373824:
    // 0x373824: 0xc0bd758  jal         func_2F5D60
label_373828:
    if (ctx->pc == 0x373828u) {
        ctx->pc = 0x373828u;
            // 0x373828: 0x24530004  addiu       $s3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x37382Cu;
        goto label_37382c;
    }
    ctx->pc = 0x373824u;
    SET_GPR_U32(ctx, 31, 0x37382Cu);
    ctx->pc = 0x373828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373824u;
            // 0x373828: 0x24530004  addiu       $s3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5D60u;
    if (runtime->hasFunction(0x2F5D60u)) {
        auto targetFn = runtime->lookupFunction(0x2F5D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37382Cu; }
        if (ctx->pc != 0x37382Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5D60_0x2f5d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37382Cu; }
        if (ctx->pc != 0x37382Cu) { return; }
    }
    ctx->pc = 0x37382Cu;
label_37382c:
    // 0x37382c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x37382cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_373830:
    // 0x373830: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x373830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_373834:
    // 0x373834: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x373834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_373838:
    // 0x373838: 0x92640022  lbu         $a0, 0x22($s3)
    ctx->pc = 0x373838u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_37383c:
    // 0x37383c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_373840:
    // 0x373840: 0x8c52fd90  lw          $s2, -0x270($v0)
    ctx->pc = 0x373840u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966672)));
label_373844:
    // 0x373844: 0x8c630db0  lw          $v1, 0xDB0($v1)
    ctx->pc = 0x373844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_373848:
    // 0x373848: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x373848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_37384c:
    // 0x37384c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_373850:
    if (ctx->pc == 0x373850u) {
        ctx->pc = 0x373850u;
            // 0x373850: 0x3096000f  andi        $s6, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x373854u;
        goto label_373854;
    }
    ctx->pc = 0x37384Cu;
    {
        const bool branch_taken_0x37384c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x373850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37384Cu;
            // 0x373850: 0x3096000f  andi        $s6, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37384c) {
            ctx->pc = 0x3738B0u;
            goto label_3738b0;
        }
    }
    ctx->pc = 0x373854u;
label_373854:
    // 0x373854: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x373854u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_373858:
    // 0x373858: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x373858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
label_37385c:
    // 0x37385c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x37385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_373860:
    // 0x373860: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_373864:
    if (ctx->pc == 0x373864u) {
        ctx->pc = 0x373864u;
            // 0x373864: 0x92630021  lbu         $v1, 0x21($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
        ctx->pc = 0x373868u;
        goto label_373868;
    }
    ctx->pc = 0x373860u;
    {
        const bool branch_taken_0x373860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373860) {
            ctx->pc = 0x373864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373860u;
            // 0x373864: 0x92630021  lbu         $v1, 0x21($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3738B4u;
            goto label_3738b4;
        }
    }
    ctx->pc = 0x373868u;
label_373868:
    // 0x373868: 0x92830009  lbu         $v1, 0x9($s4)
    ctx->pc = 0x373868u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
label_37386c:
    // 0x37386c: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x37386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_373870:
    // 0x373870: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_373874:
    if (ctx->pc == 0x373874u) {
        ctx->pc = 0x373874u;
            // 0x373874: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x373878u;
        goto label_373878;
    }
    ctx->pc = 0x373870u;
    {
        const bool branch_taken_0x373870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x373870) {
            ctx->pc = 0x373874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373870u;
            // 0x373874: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373894u;
            goto label_373894;
        }
    }
    ctx->pc = 0x373878u;
label_373878:
    // 0x373878: 0x92630021  lbu         $v1, 0x21($s3)
    ctx->pc = 0x373878u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_37387c:
    // 0x37387c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x37387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_373880:
    // 0x373880: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x373880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_373884:
    // 0x373884: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_373888:
    if (ctx->pc == 0x373888u) {
        ctx->pc = 0x37388Cu;
        goto label_37388c;
    }
    ctx->pc = 0x373884u;
    {
        const bool branch_taken_0x373884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x373884) {
            ctx->pc = 0x373890u;
            goto label_373890;
        }
    }
    ctx->pc = 0x37388Cu;
label_37388c:
    // 0x37388c: 0x64160005  daddiu      $s6, $zero, 0x5
    ctx->pc = 0x37388cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
label_373890:
    // 0x373890: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x373890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_373894:
    // 0x373894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_373898:
    // 0x373898: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x373898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37389c:
    // 0x37389c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37389cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3738a0:
    // 0x3738a0: 0xc0bdf94  jal         func_2F7E50
label_3738a4:
    if (ctx->pc == 0x3738A4u) {
        ctx->pc = 0x3738A4u;
            // 0x3738a4: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x3738A8u;
        goto label_3738a8;
    }
    ctx->pc = 0x3738A0u;
    SET_GPR_U32(ctx, 31, 0x3738A8u);
    ctx->pc = 0x3738A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3738A0u;
            // 0x3738a4: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738A8u; }
        if (ctx->pc != 0x3738A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738A8u; }
        if (ctx->pc != 0x3738A8u) { return; }
    }
    ctx->pc = 0x3738A8u;
label_3738a8:
    // 0x3738a8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3738ac:
    if (ctx->pc == 0x3738ACu) {
        ctx->pc = 0x3738ACu;
            // 0x3738ac: 0x8206010d  lb          $a2, 0x10D($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
        ctx->pc = 0x3738B0u;
        goto label_3738b0;
    }
    ctx->pc = 0x3738A8u;
    {
        const bool branch_taken_0x3738a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3738ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3738A8u;
            // 0x3738ac: 0x8206010d  lb          $a2, 0x10D($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738a8) {
            ctx->pc = 0x373964u;
            goto label_373964;
        }
    }
    ctx->pc = 0x3738B0u;
label_3738b0:
    // 0x3738b0: 0x92630021  lbu         $v1, 0x21($s3)
    ctx->pc = 0x3738b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_3738b4:
    // 0x3738b4: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x3738b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_3738b8:
    // 0x3738b8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3738b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_3738bc:
    // 0x3738bc: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x3738bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_3738c0:
    // 0x3738c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3738c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3738c4:
    // 0x3738c4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3738c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3738c8:
    // 0x3738c8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
label_3738cc:
    if (ctx->pc == 0x3738CCu) {
        ctx->pc = 0x3738CCu;
            // 0x3738cc: 0x92620022  lbu         $v0, 0x22($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
        ctx->pc = 0x3738D0u;
        goto label_3738d0;
    }
    ctx->pc = 0x3738C8u;
    {
        const bool branch_taken_0x3738c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3738c8) {
            ctx->pc = 0x3738CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3738C8u;
            // 0x3738cc: 0x92620022  lbu         $v0, 0x22($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3738ECu;
            goto label_3738ec;
        }
    }
    ctx->pc = 0x3738D0u;
label_3738d0:
    // 0x3738d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3738d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3738d4:
    // 0x3738d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3738d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3738d8:
    // 0x3738d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3738d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3738dc:
    // 0x3738dc: 0xc0bdf9c  jal         func_2F7E70
label_3738e0:
    if (ctx->pc == 0x3738E0u) {
        ctx->pc = 0x3738E0u;
            // 0x3738e0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3738E4u;
        goto label_3738e4;
    }
    ctx->pc = 0x3738DCu;
    SET_GPR_U32(ctx, 31, 0x3738E4u);
    ctx->pc = 0x3738E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3738DCu;
            // 0x3738e0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738E4u; }
        if (ctx->pc != 0x3738E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3738E4u; }
        if (ctx->pc != 0x3738E4u) { return; }
    }
    ctx->pc = 0x3738E4u;
label_3738e4:
    // 0x3738e4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3738e8:
    if (ctx->pc == 0x3738E8u) {
        ctx->pc = 0x3738ECu;
        goto label_3738ec;
    }
    ctx->pc = 0x3738E4u;
    {
        const bool branch_taken_0x3738e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3738e4) {
            ctx->pc = 0x373960u;
            goto label_373960;
        }
    }
    ctx->pc = 0x3738ECu;
label_3738ec:
    // 0x3738ec: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3738ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3738f0:
    // 0x3738f0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3738f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_3738f4:
    // 0x3738f4: 0x2273e  dsrl32      $a0, $v0, 28
    ctx->pc = 0x3738f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 28));
label_3738f8:
    // 0x3738f8: 0x10640019  beq         $v1, $a0, . + 4 + (0x19 << 2)
label_3738fc:
    if (ctx->pc == 0x3738FCu) {
        ctx->pc = 0x373900u;
        goto label_373900;
    }
    ctx->pc = 0x3738F8u;
    {
        const bool branch_taken_0x3738f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3738f8) {
            ctx->pc = 0x373960u;
            goto label_373960;
        }
    }
    ctx->pc = 0x373900u;
label_373900:
    // 0x373900: 0x3082000e  andi        $v0, $a0, 0xE
    ctx->pc = 0x373900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
label_373904:
    // 0x373904: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_373908:
    if (ctx->pc == 0x373908u) {
        ctx->pc = 0x373908u;
            // 0x373908: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->pc = 0x37390Cu;
        goto label_37390c;
    }
    ctx->pc = 0x373904u;
    {
        const bool branch_taken_0x373904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373904) {
            ctx->pc = 0x373908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373904u;
            // 0x373908: 0x601027  not         $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37391Cu;
            goto label_37391c;
        }
    }
    ctx->pc = 0x37390Cu;
label_37390c:
    // 0x37390c: 0xc0be408  jal         func_2F9020
label_373910:
    if (ctx->pc == 0x373910u) {
        ctx->pc = 0x373910u;
            // 0x373910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373914u;
        goto label_373914;
    }
    ctx->pc = 0x37390Cu;
    SET_GPR_U32(ctx, 31, 0x373914u);
    ctx->pc = 0x373910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37390Cu;
            // 0x373910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9020u;
    if (runtime->hasFunction(0x2F9020u)) {
        auto targetFn = runtime->lookupFunction(0x2F9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373914u; }
        if (ctx->pc != 0x373914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9020_0x2f9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373914u; }
        if (ctx->pc != 0x373914u) { return; }
    }
    ctx->pc = 0x373914u;
label_373914:
    // 0x373914: 0x10000012  b           . + 4 + (0x12 << 2)
label_373918:
    if (ctx->pc == 0x373918u) {
        ctx->pc = 0x37391Cu;
        goto label_37391c;
    }
    ctx->pc = 0x373914u;
    {
        const bool branch_taken_0x373914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373914) {
            ctx->pc = 0x373960u;
            goto label_373960;
        }
    }
    ctx->pc = 0x37391Cu;
label_37391c:
    // 0x37391c: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x37391cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_373920:
    // 0x373920: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x373920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_373924:
    // 0x373924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x373924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_373928:
    // 0x373928: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x373928u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_37392c:
    // 0x37392c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x37392cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_373930:
    // 0x373930: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x373930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_373934:
    // 0x373934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x373934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_373938:
    // 0x373938: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_37393c:
    if (ctx->pc == 0x37393Cu) {
        ctx->pc = 0x373940u;
        goto label_373940;
    }
    ctx->pc = 0x373938u;
    {
        const bool branch_taken_0x373938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373938) {
            ctx->pc = 0x373958u;
            goto label_373958;
        }
    }
    ctx->pc = 0x373940u;
label_373940:
    // 0x373940: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x373940u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_373944:
    // 0x373944: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x373944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_373948:
    // 0x373948: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x373948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_37394c:
    // 0x37394c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_373950:
    if (ctx->pc == 0x373950u) {
        ctx->pc = 0x373950u;
            // 0x373950: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x373954u;
        goto label_373954;
    }
    ctx->pc = 0x37394Cu;
    {
        const bool branch_taken_0x37394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37394Cu;
            // 0x373950: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37394c) {
            ctx->pc = 0x373930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_373930;
        }
    }
    ctx->pc = 0x373954u;
label_373954:
    // 0x373954: 0x0  nop
    ctx->pc = 0x373954u;
    // NOP
label_373958:
    // 0x373958: 0xc0be08c  jal         func_2F8230
label_37395c:
    if (ctx->pc == 0x37395Cu) {
        ctx->pc = 0x37395Cu;
            // 0x37395c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373960u;
        goto label_373960;
    }
    ctx->pc = 0x373958u;
    SET_GPR_U32(ctx, 31, 0x373960u);
    ctx->pc = 0x37395Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373958u;
            // 0x37395c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8230u;
    if (runtime->hasFunction(0x2F8230u)) {
        auto targetFn = runtime->lookupFunction(0x2F8230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373960u; }
        if (ctx->pc != 0x373960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8230_0x2f8230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373960u; }
        if (ctx->pc != 0x373960u) { return; }
    }
    ctx->pc = 0x373960u;
label_373960:
    // 0x373960: 0x8206010d  lb          $a2, 0x10D($s0)
    ctx->pc = 0x373960u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_373964:
    // 0x373964: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x373964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_373968:
    // 0x373968: 0x10660002  beq         $v1, $a2, . + 4 + (0x2 << 2)
label_37396c:
    if (ctx->pc == 0x37396Cu) {
        ctx->pc = 0x37396Cu;
            // 0x37396c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373970u;
        goto label_373970;
    }
    ctx->pc = 0x373968u;
    {
        const bool branch_taken_0x373968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x37396Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373968u;
            // 0x37396c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373968) {
            ctx->pc = 0x373974u;
            goto label_373974;
        }
    }
    ctx->pc = 0x373970u;
label_373970:
    // 0x373970: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x373970u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_373974:
    // 0x373974: 0x92630021  lbu         $v1, 0x21($s3)
    ctx->pc = 0x373974u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_373978:
    // 0x373978: 0x8204010f  lb          $a0, 0x10F($s0)
    ctx->pc = 0x373978u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
label_37397c:
    // 0x37397c: 0x3065007f  andi        $a1, $v1, 0x7F
    ctx->pc = 0x37397cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_373980:
    // 0x373980: 0x10a40030  beq         $a1, $a0, . + 4 + (0x30 << 2)
label_373984:
    if (ctx->pc == 0x373984u) {
        ctx->pc = 0x373988u;
        goto label_373988;
    }
    ctx->pc = 0x373980u;
    {
        const bool branch_taken_0x373980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x373980) {
            ctx->pc = 0x373A44u;
            goto label_373a44;
        }
    }
    ctx->pc = 0x373988u;
label_373988:
    // 0x373988: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x373988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_37398c:
    // 0x37398c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x37398cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_373990:
    // 0x373990: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_373994:
    if (ctx->pc == 0x373994u) {
        ctx->pc = 0x373994u;
            // 0x373994: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x373998u;
        goto label_373998;
    }
    ctx->pc = 0x373990u;
    {
        const bool branch_taken_0x373990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x373994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373990u;
            // 0x373994: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x373990) {
            ctx->pc = 0x373A24u;
            goto label_373a24;
        }
    }
    ctx->pc = 0x373998u;
label_373998:
    // 0x373998: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x373998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_37399c:
    // 0x37399c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3739a0:
    // 0x3739a0: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
label_3739a4:
    if (ctx->pc == 0x3739A4u) {
        ctx->pc = 0x3739A4u;
            // 0x3739a4: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3739A8u;
        goto label_3739a8;
    }
    ctx->pc = 0x3739A0u;
    {
        const bool branch_taken_0x3739a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3739a0) {
            ctx->pc = 0x3739A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3739A0u;
            // 0x3739a4: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3739DCu;
            goto label_3739dc;
        }
    }
    ctx->pc = 0x3739A8u;
label_3739a8:
    // 0x3739a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3739a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3739ac:
    // 0x3739ac: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_3739b0:
    if (ctx->pc == 0x3739B0u) {
        ctx->pc = 0x3739B4u;
        goto label_3739b4;
    }
    ctx->pc = 0x3739ACu;
    {
        const bool branch_taken_0x3739ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3739ac) {
            ctx->pc = 0x3739D8u;
            goto label_3739d8;
        }
    }
    ctx->pc = 0x3739B4u;
label_3739b4:
    // 0x3739b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3739b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3739b8:
    // 0x3739b8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_3739bc:
    if (ctx->pc == 0x3739BCu) {
        ctx->pc = 0x3739C0u;
        goto label_3739c0;
    }
    ctx->pc = 0x3739B8u;
    {
        const bool branch_taken_0x3739b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3739b8) {
            ctx->pc = 0x3739D8u;
            goto label_3739d8;
        }
    }
    ctx->pc = 0x3739C0u;
label_3739c0:
    // 0x3739c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3739c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3739c4:
    // 0x3739c4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3739c8:
    if (ctx->pc == 0x3739C8u) {
        ctx->pc = 0x3739CCu;
        goto label_3739cc;
    }
    ctx->pc = 0x3739C4u;
    {
        const bool branch_taken_0x3739c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3739c4) {
            ctx->pc = 0x3739D8u;
            goto label_3739d8;
        }
    }
    ctx->pc = 0x3739CCu;
label_3739cc:
    // 0x3739cc: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x3739ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3739d0:
    // 0x3739d0: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_3739d4:
    if (ctx->pc == 0x3739D4u) {
        ctx->pc = 0x3739D8u;
        goto label_3739d8;
    }
    ctx->pc = 0x3739D0u;
    {
        const bool branch_taken_0x3739d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3739d0) {
            ctx->pc = 0x373A44u;
            goto label_373a44;
        }
    }
    ctx->pc = 0x3739D8u;
label_3739d8:
    // 0x3739d8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3739d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3739dc:
    // 0x3739dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3739dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3739e0:
    // 0x3739e0: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
label_3739e4:
    if (ctx->pc == 0x3739E4u) {
        ctx->pc = 0x3739E4u;
            // 0x3739e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3739E8u;
        goto label_3739e8;
    }
    ctx->pc = 0x3739E0u;
    {
        const bool branch_taken_0x3739e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3739e0) {
            ctx->pc = 0x3739E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3739E0u;
            // 0x3739e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373A44u;
            goto label_373a44;
        }
    }
    ctx->pc = 0x3739E8u;
label_3739e8:
    // 0x3739e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3739e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3739ec:
    // 0x3739ec: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_3739f0:
    if (ctx->pc == 0x3739F0u) {
        ctx->pc = 0x3739F4u;
        goto label_3739f4;
    }
    ctx->pc = 0x3739ECu;
    {
        const bool branch_taken_0x3739ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3739ec) {
            ctx->pc = 0x373A18u;
            goto label_373a18;
        }
    }
    ctx->pc = 0x3739F4u;
label_3739f4:
    // 0x3739f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3739f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3739f8:
    // 0x3739f8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_3739fc:
    if (ctx->pc == 0x3739FCu) {
        ctx->pc = 0x373A00u;
        goto label_373a00;
    }
    ctx->pc = 0x3739F8u;
    {
        const bool branch_taken_0x3739f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3739f8) {
            ctx->pc = 0x373A18u;
            goto label_373a18;
        }
    }
    ctx->pc = 0x373A00u;
label_373a00:
    // 0x373a00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x373a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_373a04:
    // 0x373a04: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_373a08:
    if (ctx->pc == 0x373A08u) {
        ctx->pc = 0x373A0Cu;
        goto label_373a0c;
    }
    ctx->pc = 0x373A04u;
    {
        const bool branch_taken_0x373a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x373a04) {
            ctx->pc = 0x373A18u;
            goto label_373a18;
        }
    }
    ctx->pc = 0x373A0Cu;
label_373a0c:
    // 0x373a0c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x373a0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_373a10:
    // 0x373a10: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_373a14:
    if (ctx->pc == 0x373A14u) {
        ctx->pc = 0x373A18u;
        goto label_373a18;
    }
    ctx->pc = 0x373A10u;
    {
        const bool branch_taken_0x373a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a10) {
            ctx->pc = 0x373A44u;
            goto label_373a44;
        }
    }
    ctx->pc = 0x373A18u;
label_373a18:
    // 0x373a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373a1c:
    // 0x373a1c: 0x10000009  b           . + 4 + (0x9 << 2)
label_373a20:
    if (ctx->pc == 0x373A20u) {
        ctx->pc = 0x373A24u;
        goto label_373a24;
    }
    ctx->pc = 0x373A1Cu;
    {
        const bool branch_taken_0x373a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a1c) {
            ctx->pc = 0x373A44u;
            goto label_373a44;
        }
    }
    ctx->pc = 0x373A24u;
label_373a24:
    // 0x373a24: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x373a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_373a28:
    // 0x373a28: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x373a28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_373a2c:
    // 0x373a2c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_373a30:
    if (ctx->pc == 0x373A30u) {
        ctx->pc = 0x373A34u;
        goto label_373a34;
    }
    ctx->pc = 0x373A2Cu;
    {
        const bool branch_taken_0x373a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a2c) {
            ctx->pc = 0x373A44u;
            goto label_373a44;
        }
    }
    ctx->pc = 0x373A34u;
label_373a34:
    // 0x373a34: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x373a34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_373a38:
    // 0x373a38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_373a3c:
    if (ctx->pc == 0x373A3Cu) {
        ctx->pc = 0x373A40u;
        goto label_373a40;
    }
    ctx->pc = 0x373A38u;
    {
        const bool branch_taken_0x373a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a38) {
            ctx->pc = 0x373A44u;
            goto label_373a44;
        }
    }
    ctx->pc = 0x373A40u;
label_373a40:
    // 0x373a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373a44:
    // 0x373a44: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_373a48:
    if (ctx->pc == 0x373A48u) {
        ctx->pc = 0x373A48u;
            // 0x373a48: 0x92830008  lbu         $v1, 0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x373A4Cu;
        goto label_373a4c;
    }
    ctx->pc = 0x373A44u;
    {
        const bool branch_taken_0x373a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a44) {
            ctx->pc = 0x373A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373A44u;
            // 0x373a48: 0x92830008  lbu         $v1, 0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373AD0u;
            goto label_373ad0;
        }
    }
    ctx->pc = 0x373A4Cu;
label_373a4c:
    // 0x373a4c: 0x8204010d  lb          $a0, 0x10D($s0)
    ctx->pc = 0x373a4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_373a50:
    // 0x373a50: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x373a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_373a54:
    // 0x373a54: 0x162e3c  dsll32      $a1, $s6, 24
    ctx->pc = 0x373a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 24));
label_373a58:
    // 0x373a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_373a5c:
    // 0x373a5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x373a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_373a60:
    // 0x373a60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x373a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_373a64:
    // 0x373a64: 0xa204010e  sb          $a0, 0x10E($s0)
    ctx->pc = 0x373a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 4));
label_373a68:
    // 0x373a68: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x373a68u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_373a6c:
    // 0x373a6c: 0xa216010d  sb          $s6, 0x10D($s0)
    ctx->pc = 0x373a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 22));
label_373a70:
    // 0x373a70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x373a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_373a74:
    // 0x373a74: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x373a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_373a78:
    // 0x373a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_373a7c:
    // 0x373a7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x373a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_373a80:
    // 0x373a80: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x373a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_373a84:
    // 0x373a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373a88:
    // 0x373a88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x373a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_373a8c:
    // 0x373a8c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x373a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_373a90:
    // 0x373a90: 0xac460080  sw          $a2, 0x80($v0)
    ctx->pc = 0x373a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 6));
label_373a94:
    // 0x373a94: 0x92620021  lbu         $v0, 0x21($s3)
    ctx->pc = 0x373a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_373a98:
    // 0x373a98: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x373a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_373a9c:
    // 0x373a9c: 0x92670020  lbu         $a3, 0x20($s3)
    ctx->pc = 0x373a9cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_373aa0:
    // 0x373aa0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x373aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_373aa4:
    // 0x373aa4: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x373aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_373aa8:
    // 0x373aa8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x373aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_373aac:
    // 0x373aac: 0x320f809  jalr        $t9
label_373ab0:
    if (ctx->pc == 0x373AB0u) {
        ctx->pc = 0x373AB0u;
            // 0x373ab0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x373AB4u;
        goto label_373ab4;
    }
    ctx->pc = 0x373AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373AB4u);
        ctx->pc = 0x373AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373AACu;
            // 0x373ab0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x373AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373AB4u; }
            if (ctx->pc != 0x373AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x373AB4u;
label_373ab4:
    // 0x373ab4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x373ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_373ab8:
    // 0x373ab8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x373ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_373abc:
    // 0x373abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_373ac0:
    // 0x373ac0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x373ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_373ac4:
    // 0x373ac4: 0x320f809  jalr        $t9
label_373ac8:
    if (ctx->pc == 0x373AC8u) {
        ctx->pc = 0x373AC8u;
            // 0x373ac8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373ACCu;
        goto label_373acc;
    }
    ctx->pc = 0x373AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373ACCu);
        ctx->pc = 0x373AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373AC4u;
            // 0x373ac8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x373ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373ACCu; }
            if (ctx->pc != 0x373ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x373ACCu;
label_373acc:
    // 0x373acc: 0x92830008  lbu         $v1, 0x8($s4)
    ctx->pc = 0x373accu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_373ad0:
    // 0x373ad0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x373ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_373ad4:
    // 0x373ad4: 0x2442caf8  addiu       $v0, $v0, -0x3508
    ctx->pc = 0x373ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953720));
label_373ad8:
    // 0x373ad8: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x373ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_373adc:
    // 0x373adc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x373adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_373ae0:
    // 0x373ae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373ae4:
    // 0x373ae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x373ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_373ae8:
    // 0x373ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_373aec:
    // 0x373aec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x373aecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_373af0:
    // 0x373af0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x373af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_373af4:
    // 0x373af4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x373af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_373af8:
    // 0x373af8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_373afc:
    if (ctx->pc == 0x373AFCu) {
        ctx->pc = 0x373AFCu;
            // 0x373afc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x373B00u;
        goto label_373b00;
    }
    ctx->pc = 0x373AF8u;
    {
        const bool branch_taken_0x373af8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x373af8) {
            ctx->pc = 0x373AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373AF8u;
            // 0x373afc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373B0Cu;
            goto label_373b0c;
        }
    }
    ctx->pc = 0x373B00u;
label_373b00:
    // 0x373b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373b04:
    // 0x373b04: 0x10000007  b           . + 4 + (0x7 << 2)
label_373b08:
    if (ctx->pc == 0x373B08u) {
        ctx->pc = 0x373B08u;
            // 0x373b08: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x373B0Cu;
        goto label_373b0c;
    }
    ctx->pc = 0x373B04u;
    {
        const bool branch_taken_0x373b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373B04u;
            // 0x373b08: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373b04) {
            ctx->pc = 0x373B24u;
            goto label_373b24;
        }
    }
    ctx->pc = 0x373B0Cu;
label_373b0c:
    // 0x373b0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x373b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_373b10:
    // 0x373b10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x373b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_373b14:
    // 0x373b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373b18:
    // 0x373b18: 0x0  nop
    ctx->pc = 0x373b18u;
    // NOP
label_373b1c:
    // 0x373b1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x373b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_373b20:
    // 0x373b20: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x373b20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_373b24:
    // 0x373b24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x373b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_373b28:
    // 0x373b28: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x373b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_373b2c:
    // 0x373b2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x373b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_373b30:
    // 0x373b30: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x373b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_373b34:
    // 0x373b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373b38:
    // 0x373b38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x373b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_373b3c:
    // 0x373b3c: 0x0  nop
    ctx->pc = 0x373b3cu;
    // NOP
label_373b40:
    // 0x373b40: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x373b40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_373b44:
    // 0x373b44: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x373b44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_373b48:
    // 0x373b48: 0xc04f3f4  jal         func_13CFD0
label_373b4c:
    if (ctx->pc == 0x373B4Cu) {
        ctx->pc = 0x373B4Cu;
            // 0x373b4c: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x373B50u;
        goto label_373b50;
    }
    ctx->pc = 0x373B48u;
    SET_GPR_U32(ctx, 31, 0x373B50u);
    ctx->pc = 0x373B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B48u;
            // 0x373b4c: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B50u; }
        if (ctx->pc != 0x373B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B50u; }
        if (ctx->pc != 0x373B50u) { return; }
    }
    ctx->pc = 0x373B50u;
label_373b50:
    // 0x373b50: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x373b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_373b54:
    // 0x373b54: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x373b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_373b58:
    // 0x373b58: 0x320f809  jalr        $t9
label_373b5c:
    if (ctx->pc == 0x373B5Cu) {
        ctx->pc = 0x373B5Cu;
            // 0x373b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373B60u;
        goto label_373b60;
    }
    ctx->pc = 0x373B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x373B60u);
        ctx->pc = 0x373B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373B58u;
            // 0x373b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x373B60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x373B60u; }
            if (ctx->pc != 0x373B60u) { return; }
        }
        }
    }
    ctx->pc = 0x373B60u;
label_373b60:
    // 0x373b60: 0xc0bf928  jal         func_2FE4A0
label_373b64:
    if (ctx->pc == 0x373B64u) {
        ctx->pc = 0x373B64u;
            // 0x373b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373B68u;
        goto label_373b68;
    }
    ctx->pc = 0x373B60u;
    SET_GPR_U32(ctx, 31, 0x373B68u);
    ctx->pc = 0x373B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B60u;
            // 0x373b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE4A0u;
    if (runtime->hasFunction(0x2FE4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B68u; }
        if (ctx->pc != 0x373B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE4A0_0x2fe4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B68u; }
        if (ctx->pc != 0x373B68u) { return; }
    }
    ctx->pc = 0x373B68u;
label_373b68:
    // 0x373b68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x373b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_373b6c:
    // 0x373b6c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x373b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_373b70:
    // 0x373b70: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x373b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_373b74:
    // 0x373b74: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x373b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_373b78:
    // 0x373b78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x373b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_373b7c:
    // 0x373b7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x373b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_373b80:
    // 0x373b80: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x373b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_373b84:
    // 0x373b84: 0xc052918  jal         func_14A460
label_373b88:
    if (ctx->pc == 0x373B88u) {
        ctx->pc = 0x373B88u;
            // 0x373b88: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x373B8Cu;
        goto label_373b8c;
    }
    ctx->pc = 0x373B84u;
    SET_GPR_U32(ctx, 31, 0x373B8Cu);
    ctx->pc = 0x373B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B84u;
            // 0x373b88: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A460u;
    if (runtime->hasFunction(0x14A460u)) {
        auto targetFn = runtime->lookupFunction(0x14A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B8Cu; }
        if (ctx->pc != 0x373B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A460_0x14a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373B8Cu; }
        if (ctx->pc != 0x373B8Cu) { return; }
    }
    ctx->pc = 0x373B8Cu;
label_373b8c:
    // 0x373b8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x373b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_373b90:
    // 0x373b90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x373b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_373b94:
    // 0x373b94: 0x8c46e360  lw          $a2, -0x1CA0($v0)
    ctx->pc = 0x373b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_373b98:
    // 0x373b98: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x373b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_373b9c:
    // 0x373b9c: 0xc0529c4  jal         func_14A710
label_373ba0:
    if (ctx->pc == 0x373BA0u) {
        ctx->pc = 0x373BA0u;
            // 0x373ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373BA4u;
        goto label_373ba4;
    }
    ctx->pc = 0x373B9Cu;
    SET_GPR_U32(ctx, 31, 0x373BA4u);
    ctx->pc = 0x373BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373B9Cu;
            // 0x373ba0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A710u;
    if (runtime->hasFunction(0x14A710u)) {
        auto targetFn = runtime->lookupFunction(0x14A710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BA4u; }
        if (ctx->pc != 0x373BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A710_0x14a710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BA4u; }
        if (ctx->pc != 0x373BA4u) { return; }
    }
    ctx->pc = 0x373BA4u;
label_373ba4:
    // 0x373ba4: 0xc0bf9b4  jal         func_2FE6D0
label_373ba8:
    if (ctx->pc == 0x373BA8u) {
        ctx->pc = 0x373BA8u;
            // 0x373ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373BACu;
        goto label_373bac;
    }
    ctx->pc = 0x373BA4u;
    SET_GPR_U32(ctx, 31, 0x373BACu);
    ctx->pc = 0x373BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373BA4u;
            // 0x373ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE6D0u;
    if (runtime->hasFunction(0x2FE6D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BACu; }
        if (ctx->pc != 0x373BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE6D0_0x2fe6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BACu; }
        if (ctx->pc != 0x373BACu) { return; }
    }
    ctx->pc = 0x373BACu;
label_373bac:
    // 0x373bac: 0xc0760a8  jal         func_1D82A0
label_373bb0:
    if (ctx->pc == 0x373BB0u) {
        ctx->pc = 0x373BB0u;
            // 0x373bb0: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x373BB4u;
        goto label_373bb4;
    }
    ctx->pc = 0x373BACu;
    SET_GPR_U32(ctx, 31, 0x373BB4u);
    ctx->pc = 0x373BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373BACu;
            // 0x373bb0: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D82A0u;
    if (runtime->hasFunction(0x1D82A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BB4u; }
        if (ctx->pc != 0x373BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D82A0_0x1d82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373BB4u; }
        if (ctx->pc != 0x373BB4u) { return; }
    }
    ctx->pc = 0x373BB4u;
label_373bb4:
    // 0x373bb4: 0x3401fda0  ori         $at, $zero, 0xFDA0
    ctx->pc = 0x373bb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64928);
label_373bb8:
    // 0x373bb8: 0xafb20140  sw          $s2, 0x140($sp)
    ctx->pc = 0x373bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
label_373bbc:
    // 0x373bbc: 0x2a18821  addu        $s1, $s5, $at
    ctx->pc = 0x373bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_373bc0:
    // 0x373bc0: 0x3401fdb0  ori         $at, $zero, 0xFDB0
    ctx->pc = 0x373bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64944);
label_373bc4:
    // 0x373bc4: 0x2a18021  addu        $s0, $s5, $at
    ctx->pc = 0x373bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_373bc8:
    // 0x373bc8: 0x3401fdc0  ori         $at, $zero, 0xFDC0
    ctx->pc = 0x373bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64960);
label_373bcc:
    // 0x373bcc: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_373bd0:
    if (ctx->pc == 0x373BD0u) {
        ctx->pc = 0x373BD0u;
            // 0x373bd0: 0x2a1b021  addu        $s6, $s5, $at (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
        ctx->pc = 0x373BD4u;
        goto label_373bd4;
    }
    ctx->pc = 0x373BCCu;
    {
        const bool branch_taken_0x373bcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x373BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373BCCu;
            // 0x373bd0: 0x2a1b021  addu        $s6, $s5, $at (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bcc) {
            ctx->pc = 0x373BF8u;
            goto label_373bf8;
        }
    }
    ctx->pc = 0x373BD4u;
label_373bd4:
    // 0x373bd4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x373bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_373bd8:
    // 0x373bd8: 0x2e410002  sltiu       $at, $s2, 0x2
    ctx->pc = 0x373bd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_373bdc:
    // 0x373bdc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_373be0:
    if (ctx->pc == 0x373BE0u) {
        ctx->pc = 0x373BE0u;
            // 0x373be0: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
        ctx->pc = 0x373BE4u;
        goto label_373be4;
    }
    ctx->pc = 0x373BDCu;
    {
        const bool branch_taken_0x373bdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x373BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373BDCu;
            // 0x373be0: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bdc) {
            ctx->pc = 0x373BF0u;
            goto label_373bf0;
        }
    }
    ctx->pc = 0x373BE4u;
label_373be4:
    // 0x373be4: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x373be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_373be8:
    // 0x373be8: 0x10000005  b           . + 4 + (0x5 << 2)
label_373bec:
    if (ctx->pc == 0x373BECu) {
        ctx->pc = 0x373BECu;
            // 0x373bec: 0xafa20148  sw          $v0, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
        ctx->pc = 0x373BF0u;
        goto label_373bf0;
    }
    ctx->pc = 0x373BE8u;
    {
        const bool branch_taken_0x373be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373BE8u;
            // 0x373bec: 0xafa20148  sw          $v0, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373be8) {
            ctx->pc = 0x373C00u;
            goto label_373c00;
        }
    }
    ctx->pc = 0x373BF0u;
label_373bf0:
    // 0x373bf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_373bf4:
    if (ctx->pc == 0x373BF4u) {
        ctx->pc = 0x373BF4u;
            // 0x373bf4: 0xafa20148  sw          $v0, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
        ctx->pc = 0x373BF8u;
        goto label_373bf8;
    }
    ctx->pc = 0x373BF0u;
    {
        const bool branch_taken_0x373bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373BF0u;
            // 0x373bf4: 0xafa20148  sw          $v0, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373bf0) {
            ctx->pc = 0x373C00u;
            goto label_373c00;
        }
    }
    ctx->pc = 0x373BF8u;
label_373bf8:
    // 0x373bf8: 0xafb20148  sw          $s2, 0x148($sp)
    ctx->pc = 0x373bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 18));
label_373bfc:
    // 0x373bfc: 0xafb20144  sw          $s2, 0x144($sp)
    ctx->pc = 0x373bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 18));
label_373c00:
    // 0x373c00: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x373c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_373c04:
    // 0x373c04: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x373c04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
label_373c08:
    // 0x373c08: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x373c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_373c0c:
    // 0x373c0c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x373c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_373c10:
    // 0x373c10: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x373c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_373c14:
    // 0x373c14: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x373c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
label_373c18:
    // 0x373c18: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x373c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_373c1c:
    // 0x373c1c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x373c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_373c20:
    // 0x373c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_373c24:
    // 0x373c24: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x373c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_373c28:
    // 0x373c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x373c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_373c2c:
    // 0x373c2c: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x373c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_373c30:
    // 0x373c30: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x373c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_373c34:
    // 0x373c34: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x373c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_373c38:
    // 0x373c38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_373c3c:
    if (ctx->pc == 0x373C3Cu) {
        ctx->pc = 0x373C3Cu;
            // 0x373c3c: 0x24740004  addiu       $s4, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x373C40u;
        goto label_373c40;
    }
    ctx->pc = 0x373C38u;
    {
        const bool branch_taken_0x373c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373C38u;
            // 0x373c3c: 0x24740004  addiu       $s4, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c38) {
            ctx->pc = 0x373C48u;
            goto label_373c48;
        }
    }
    ctx->pc = 0x373C40u;
label_373c40:
    // 0x373c40: 0x10000002  b           . + 4 + (0x2 << 2)
label_373c44:
    if (ctx->pc == 0x373C44u) {
        ctx->pc = 0x373C44u;
            // 0x373c44: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x373C48u;
        goto label_373c48;
    }
    ctx->pc = 0x373C40u;
    {
        const bool branch_taken_0x373c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373C40u;
            // 0x373c44: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c40) {
            ctx->pc = 0x373C4Cu;
            goto label_373c4c;
        }
    }
    ctx->pc = 0x373C48u;
label_373c48:
    // 0x373c48: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x373c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_373c4c:
    // 0x373c4c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x373c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_373c50:
    // 0x373c50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x373c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373c54:
    // 0x373c54: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x373c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_373c58:
    // 0x373c58: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x373c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_373c5c:
    // 0x373c5c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x373c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_373c60:
    // 0x373c60: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x373c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_373c64:
    // 0x373c64: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x373c64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_373c68:
    // 0x373c68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x373c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_373c6c:
    // 0x373c6c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_373c70:
    if (ctx->pc == 0x373C70u) {
        ctx->pc = 0x373C70u;
            // 0x373c70: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x373C74u;
        goto label_373c74;
    }
    ctx->pc = 0x373C6Cu;
    {
        const bool branch_taken_0x373c6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x373c6c) {
            ctx->pc = 0x373C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373C6Cu;
            // 0x373c70: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373C80u;
            goto label_373c80;
        }
    }
    ctx->pc = 0x373C74u;
label_373c74:
    // 0x373c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373c78:
    // 0x373c78: 0x10000007  b           . + 4 + (0x7 << 2)
label_373c7c:
    if (ctx->pc == 0x373C7Cu) {
        ctx->pc = 0x373C7Cu;
            // 0x373c7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x373C80u;
        goto label_373c80;
    }
    ctx->pc = 0x373C78u;
    {
        const bool branch_taken_0x373c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373C78u;
            // 0x373c7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c78) {
            ctx->pc = 0x373C98u;
            goto label_373c98;
        }
    }
    ctx->pc = 0x373C80u;
label_373c80:
    // 0x373c80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x373c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_373c84:
    // 0x373c84: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x373c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_373c88:
    // 0x373c88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x373c88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373c8c:
    // 0x373c8c: 0x0  nop
    ctx->pc = 0x373c8cu;
    // NOP
label_373c90:
    // 0x373c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x373c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_373c94:
    // 0x373c94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x373c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_373c98:
    // 0x373c98: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_373c9c:
    if (ctx->pc == 0x373C9Cu) {
        ctx->pc = 0x373C9Cu;
            // 0x373c9c: 0x46001882  mul.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x373CA0u;
        goto label_373ca0;
    }
    ctx->pc = 0x373C98u;
    {
        const bool branch_taken_0x373c98 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x373C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373C98u;
            // 0x373c9c: 0x46001882  mul.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x373c98) {
            ctx->pc = 0x373CA8u;
            goto label_373ca8;
        }
    }
    ctx->pc = 0x373CA0u;
label_373ca0:
    // 0x373ca0: 0x10000007  b           . + 4 + (0x7 << 2)
label_373ca4:
    if (ctx->pc == 0x373CA4u) {
        ctx->pc = 0x373CA4u;
            // 0x373ca4: 0x46800820  cvt.s.w     $f0, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x373CA8u;
        goto label_373ca8;
    }
    ctx->pc = 0x373CA0u;
    {
        const bool branch_taken_0x373ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373CA0u;
            // 0x373ca4: 0x46800820  cvt.s.w     $f0, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ca0) {
            ctx->pc = 0x373CC0u;
            goto label_373cc0;
        }
    }
    ctx->pc = 0x373CA8u;
label_373ca8:
    // 0x373ca8: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x373ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_373cac:
    // 0x373cac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x373cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_373cb0:
    // 0x373cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373cb4:
    // 0x373cb4: 0x0  nop
    ctx->pc = 0x373cb4u;
    // NOP
label_373cb8:
    // 0x373cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x373cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_373cbc:
    // 0x373cbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x373cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_373cc0:
    // 0x373cc0: 0x0  nop
    ctx->pc = 0x373cc0u;
    // NOP
label_373cc4:
    // 0x373cc4: 0x0  nop
    ctx->pc = 0x373cc4u;
    // NOP
label_373cc8:
    // 0x373cc8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x373cc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_373ccc:
    // 0x373ccc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x373cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_373cd0:
    // 0x373cd0: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x373cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_373cd4:
    // 0x373cd4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x373cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_373cd8:
    // 0x373cd8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x373cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_373cdc:
    // 0x373cdc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_373ce0:
    if (ctx->pc == 0x373CE0u) {
        ctx->pc = 0x373CE0u;
            // 0x373ce0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x373CE4u;
        goto label_373ce4;
    }
    ctx->pc = 0x373CDCu;
    {
        const bool branch_taken_0x373cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373CDCu;
            // 0x373ce0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373cdc) {
            ctx->pc = 0x373C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_373c68;
        }
    }
    ctx->pc = 0x373CE4u;
label_373ce4:
    // 0x373ce4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x373ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_373ce8:
    // 0x373ce8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x373ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_373cec:
    // 0x373cec: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x373cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_373cf0:
    // 0x373cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373cf4:
    // 0x373cf4: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x373cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373cf8:
    // 0x373cf8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x373cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_373cfc:
    // 0x373cfc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x373cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_373d00:
    // 0x373d00: 0x8c42fd88  lw          $v0, -0x278($v0)
    ctx->pc = 0x373d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966664)));
label_373d04:
    // 0x373d04: 0x460205c3  div.s       $f23, $f0, $f2
    ctx->pc = 0x373d04u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[23] = ctx->f[0] / ctx->f[2];
label_373d08:
    // 0x373d08: 0x0  nop
    ctx->pc = 0x373d08u;
    // NOP
label_373d0c:
    // 0x373d0c: 0x0  nop
    ctx->pc = 0x373d0cu;
    // NOP
label_373d10:
    // 0x373d10: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_373d14:
    if (ctx->pc == 0x373D14u) {
        ctx->pc = 0x373D18u;
        goto label_373d18;
    }
    ctx->pc = 0x373D10u;
    {
        const bool branch_taken_0x373d10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x373d10) {
            ctx->pc = 0x373D24u;
            goto label_373d24;
        }
    }
    ctx->pc = 0x373D18u;
label_373d18:
    // 0x373d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373d1c:
    // 0x373d1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_373d20:
    if (ctx->pc == 0x373D20u) {
        ctx->pc = 0x373D20u;
            // 0x373d20: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x373D24u;
        goto label_373d24;
    }
    ctx->pc = 0x373D1Cu;
    {
        const bool branch_taken_0x373d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373D1Cu;
            // 0x373d20: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373d1c) {
            ctx->pc = 0x373D40u;
            goto label_373d40;
        }
    }
    ctx->pc = 0x373D24u;
label_373d24:
    // 0x373d24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x373d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_373d28:
    // 0x373d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x373d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_373d2c:
    // 0x373d2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x373d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_373d30:
    // 0x373d30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373d34:
    // 0x373d34: 0x0  nop
    ctx->pc = 0x373d34u;
    // NOP
label_373d38:
    // 0x373d38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x373d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_373d3c:
    // 0x373d3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x373d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_373d40:
    // 0x373d40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x373d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_373d44:
    // 0x373d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_373d48:
    // 0x373d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373d4c:
    // 0x373d4c: 0x0  nop
    ctx->pc = 0x373d4cu;
    // NOP
label_373d50:
    // 0x373d50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x373d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_373d54:
    // 0x373d54: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x373d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_373d58:
    // 0x373d58: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x373d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_373d5c:
    // 0x373d5c: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x373d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_373d60:
    // 0x373d60: 0xc04cbd8  jal         func_132F60
label_373d64:
    if (ctx->pc == 0x373D64u) {
        ctx->pc = 0x373D64u;
            // 0x373d64: 0x46020503  div.s       $f20, $f0, $f2 (Delay Slot)
        if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[2];
        ctx->pc = 0x373D68u;
        goto label_373d68;
    }
    ctx->pc = 0x373D60u;
    SET_GPR_U32(ctx, 31, 0x373D68u);
    ctx->pc = 0x373D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D60u;
            // 0x373d64: 0x46020503  div.s       $f20, $f0, $f2 (Delay Slot)
        if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[2];
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D68u; }
        if (ctx->pc != 0x373D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D68u; }
        if (ctx->pc != 0x373D68u) { return; }
    }
    ctx->pc = 0x373D68u;
label_373d68:
    // 0x373d68: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x373d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_373d6c:
    // 0x373d6c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x373d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_373d70:
    // 0x373d70: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x373d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_373d74:
    // 0x373d74: 0xc04cbd8  jal         func_132F60
label_373d78:
    if (ctx->pc == 0x373D78u) {
        ctx->pc = 0x373D78u;
            // 0x373d78: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x373D7Cu;
        goto label_373d7c;
    }
    ctx->pc = 0x373D74u;
    SET_GPR_U32(ctx, 31, 0x373D7Cu);
    ctx->pc = 0x373D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D74u;
            // 0x373d78: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D7Cu; }
        if (ctx->pc != 0x373D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D7Cu; }
        if (ctx->pc != 0x373D7Cu) { return; }
    }
    ctx->pc = 0x373D7Cu;
label_373d7c:
    // 0x373d7c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x373d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_373d80:
    // 0x373d80: 0xc04cc04  jal         func_133010
label_373d84:
    if (ctx->pc == 0x373D84u) {
        ctx->pc = 0x373D84u;
            // 0x373d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373D88u;
        goto label_373d88;
    }
    ctx->pc = 0x373D80u;
    SET_GPR_U32(ctx, 31, 0x373D88u);
    ctx->pc = 0x373D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373D80u;
            // 0x373d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D88u; }
        if (ctx->pc != 0x373D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373D88u; }
        if (ctx->pc != 0x373D88u) { return; }
    }
    ctx->pc = 0x373D88u;
label_373d88:
    // 0x373d88: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x373d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373d8c:
    // 0x373d8c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x373d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373d90:
    // 0x373d90: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x373d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373d94:
    // 0x373d94: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x373d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_373d98:
    // 0x373d98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x373d98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_373d9c:
    // 0x373d9c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x373d9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_373da0:
    // 0x373da0: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x373da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373da4:
    // 0x373da4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x373da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_373da8:
    // 0x373da8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x373da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373dac:
    // 0x373dac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x373dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_373db0:
    // 0x373db0: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x373db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373db4:
    // 0x373db4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_373db8:
    if (ctx->pc == 0x373DB8u) {
        ctx->pc = 0x373DB8u;
            // 0x373db8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x373DBCu;
        goto label_373dbc;
    }
    ctx->pc = 0x373DB4u;
    {
        const bool branch_taken_0x373db4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x373DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373DB4u;
            // 0x373db8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373db4) {
            ctx->pc = 0x373DF0u;
            goto label_373df0;
        }
    }
    ctx->pc = 0x373DBCu;
label_373dbc:
    // 0x373dbc: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x373dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_373dc0:
    // 0x373dc0: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x373dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_373dc4:
    // 0x373dc4: 0xc68e0008  lwc1        $f14, 0x8($s4)
    ctx->pc = 0x373dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_373dc8:
    // 0x373dc8: 0xc04cbd8  jal         func_132F60
label_373dcc:
    if (ctx->pc == 0x373DCCu) {
        ctx->pc = 0x373DCCu;
            // 0x373dcc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x373DD0u;
        goto label_373dd0;
    }
    ctx->pc = 0x373DC8u;
    SET_GPR_U32(ctx, 31, 0x373DD0u);
    ctx->pc = 0x373DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373DC8u;
            // 0x373dcc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DD0u; }
        if (ctx->pc != 0x373DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DD0u; }
        if (ctx->pc != 0x373DD0u) { return; }
    }
    ctx->pc = 0x373DD0u;
label_373dd0:
    // 0x373dd0: 0xc7b50134  lwc1        $f21, 0x134($sp)
    ctx->pc = 0x373dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_373dd4:
    // 0x373dd4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x373dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_373dd8:
    // 0x373dd8: 0xc04cc1c  jal         func_133070
label_373ddc:
    if (ctx->pc == 0x373DDCu) {
        ctx->pc = 0x373DDCu;
            // 0x373ddc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x373DE0u;
        goto label_373de0;
    }
    ctx->pc = 0x373DD8u;
    SET_GPR_U32(ctx, 31, 0x373DE0u);
    ctx->pc = 0x373DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373DD8u;
            // 0x373ddc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DE0u; }
        if (ctx->pc != 0x373DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373DE0u; }
        if (ctx->pc != 0x373DE0u) { return; }
    }
    ctx->pc = 0x373DE0u;
label_373de0:
    // 0x373de0: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x373de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_373de4:
    // 0x373de4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x373de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373de8:
    // 0x373de8: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x373de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_373dec:
    // 0x373dec: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x373decu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_373df0:
    // 0x373df0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x373df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_373df4:
    // 0x373df4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x373df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_373df8:
    // 0x373df8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x373df8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_373dfc:
    // 0x373dfc: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_373e00:
    if (ctx->pc == 0x373E00u) {
        ctx->pc = 0x373E00u;
            // 0x373e00: 0xc675001c  lwc1        $f21, 0x1C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x373E04u;
        goto label_373e04;
    }
    ctx->pc = 0x373DFCu;
    {
        const bool branch_taken_0x373dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x373E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373DFCu;
            // 0x373e00: 0xc675001c  lwc1        $f21, 0x1C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373dfc) {
            ctx->pc = 0x373ED8u;
            goto label_373ed8;
        }
    }
    ctx->pc = 0x373E04u;
label_373e04:
    // 0x373e04: 0xc7a30134  lwc1        $f3, 0x134($sp)
    ctx->pc = 0x373e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373e08:
    // 0x373e08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x373e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_373e0c:
    // 0x373e0c: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x373e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373e10:
    // 0x373e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373e14:
    // 0x373e14: 0x4603a081  sub.s       $f2, $f20, $f3
    ctx->pc = 0x373e14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
label_373e18:
    // 0x373e18: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x373e18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_373e1c:
    // 0x373e1c: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x373e1cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[1];
label_373e20:
    // 0x373e20: 0x0  nop
    ctx->pc = 0x373e20u;
    // NOP
label_373e24:
    // 0x373e24: 0x0  nop
    ctx->pc = 0x373e24u;
    // NOP
label_373e28:
    // 0x373e28: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x373e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_373e2c:
    // 0x373e2c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_373e30:
    if (ctx->pc == 0x373E30u) {
        ctx->pc = 0x373E30u;
            // 0x373e30: 0xc640000c  lwc1        $f0, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x373E34u;
        goto label_373e34;
    }
    ctx->pc = 0x373E2Cu;
    {
        const bool branch_taken_0x373e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x373e2c) {
            ctx->pc = 0x373E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373E2Cu;
            // 0x373e30: 0xc640000c  lwc1        $f0, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x373E3Cu;
            goto label_373e3c;
        }
    }
    ctx->pc = 0x373E34u;
label_373e34:
    // 0x373e34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x373e34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_373e38:
    // 0x373e38: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x373e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373e3c:
    // 0x373e3c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x373e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_373e40:
    // 0x373e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x373e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_373e44:
    // 0x373e44: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x373e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_373e48:
    // 0x373e48: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x373e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_373e4c:
    // 0x373e4c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x373e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373e50:
    // 0x373e50: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x373e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_373e54:
    // 0x373e54: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x373e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373e58:
    // 0x373e58: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x373e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_373e5c:
    // 0x373e5c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x373e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373e60:
    // 0x373e60: 0xc04cc90  jal         func_133240
label_373e64:
    if (ctx->pc == 0x373E64u) {
        ctx->pc = 0x373E64u;
            // 0x373e64: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x373E68u;
        goto label_373e68;
    }
    ctx->pc = 0x373E60u;
    SET_GPR_U32(ctx, 31, 0x373E68u);
    ctx->pc = 0x373E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373E60u;
            // 0x373e64: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E68u; }
        if (ctx->pc != 0x373E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E68u; }
        if (ctx->pc != 0x373E68u) { return; }
    }
    ctx->pc = 0x373E68u;
label_373e68:
    // 0x373e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_373e6c:
    // 0x373e6c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x373e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_373e70:
    // 0x373e70: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x373e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_373e74:
    // 0x373e74: 0xc04cc7c  jal         func_1331F0
label_373e78:
    if (ctx->pc == 0x373E78u) {
        ctx->pc = 0x373E78u;
            // 0x373e78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x373E7Cu;
        goto label_373e7c;
    }
    ctx->pc = 0x373E74u;
    SET_GPR_U32(ctx, 31, 0x373E7Cu);
    ctx->pc = 0x373E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373E74u;
            // 0x373e78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E7Cu; }
        if (ctx->pc != 0x373E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E7Cu; }
        if (ctx->pc != 0x373E7Cu) { return; }
    }
    ctx->pc = 0x373E7Cu;
label_373e7c:
    // 0x373e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_373e80:
    // 0x373e80: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x373e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_373e84:
    // 0x373e84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_373e88:
    // 0x373e88: 0xc04c8b4  jal         func_1322D0
label_373e8c:
    if (ctx->pc == 0x373E8Cu) {
        ctx->pc = 0x373E8Cu;
            // 0x373e8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x373E90u;
        goto label_373e90;
    }
    ctx->pc = 0x373E88u;
    SET_GPR_U32(ctx, 31, 0x373E90u);
    ctx->pc = 0x373E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373E88u;
            // 0x373e8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1322D0u;
    if (runtime->hasFunction(0x1322D0u)) {
        auto targetFn = runtime->lookupFunction(0x1322D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E90u; }
        if (ctx->pc != 0x373E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001322D0_0x1322d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373E90u; }
        if (ctx->pc != 0x373E90u) { return; }
    }
    ctx->pc = 0x373E90u;
label_373e90:
    // 0x373e90: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x373e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373e94:
    // 0x373e94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x373e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_373e98:
    // 0x373e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373e9c:
    // 0x373e9c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x373e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_373ea0:
    // 0x373ea0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x373ea0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_373ea4:
    // 0x373ea4: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x373ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_373ea8:
    // 0x373ea8: 0xc04cc1c  jal         func_133070
label_373eac:
    if (ctx->pc == 0x373EACu) {
        ctx->pc = 0x373EACu;
            // 0x373eac: 0x4600a55c  madd.s      $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
        ctx->pc = 0x373EB0u;
        goto label_373eb0;
    }
    ctx->pc = 0x373EA8u;
    SET_GPR_U32(ctx, 31, 0x373EB0u);
    ctx->pc = 0x373EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373EA8u;
            // 0x373eac: 0x4600a55c  madd.s      $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373EB0u; }
        if (ctx->pc != 0x373EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373EB0u; }
        if (ctx->pc != 0x373EB0u) { return; }
    }
    ctx->pc = 0x373EB0u;
label_373eb0:
    // 0x373eb0: 0x4600b882  mul.s       $f2, $f23, $f0
    ctx->pc = 0x373eb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_373eb4:
    // 0x373eb4: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x373eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373eb8:
    // 0x373eb8: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x373eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373ebc:
    // 0x373ebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x373ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_373ec0:
    // 0x373ec0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x373ec0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_373ec4:
    // 0x373ec4: 0x46160041  sub.s       $f1, $f0, $f22
    ctx->pc = 0x373ec4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_373ec8:
    // 0x373ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_373ecc:
    // 0x373ecc: 0x0  nop
    ctx->pc = 0x373eccu;
    // NOP
label_373ed0:
    // 0x373ed0: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x373ed0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_373ed4:
    // 0x373ed4: 0x4601a59c  madd.s      $f22, $f20, $f1
    ctx->pc = 0x373ed4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_373ed8:
    // 0x373ed8: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x373ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_373edc:
    // 0x373edc: 0xe4550dc4  swc1        $f21, 0xDC4($v0)
    ctx->pc = 0x373edcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3524), bits); }
label_373ee0:
    // 0x373ee0: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x373ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_373ee4:
    // 0x373ee4: 0xe4560de4  swc1        $f22, 0xDE4($v0)
    ctx->pc = 0x373ee4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3556), bits); }
label_373ee8:
    // 0x373ee8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x373ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_373eec:
    // 0x373eec: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x373eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_373ef0:
    // 0x373ef0: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x373ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_373ef4:
    // 0x373ef4: 0xc04f3fc  jal         func_13CFF0
label_373ef8:
    if (ctx->pc == 0x373EF8u) {
        ctx->pc = 0x373EF8u;
            // 0x373ef8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373EFCu;
        goto label_373efc;
    }
    ctx->pc = 0x373EF4u;
    SET_GPR_U32(ctx, 31, 0x373EFCu);
    ctx->pc = 0x373EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373EF4u;
            // 0x373ef8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373EFCu; }
        if (ctx->pc != 0x373EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373EFCu; }
        if (ctx->pc != 0x373EFCu) { return; }
    }
    ctx->pc = 0x373EFCu;
label_373efc:
    // 0x373efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_373f00:
    // 0x373f00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x373f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_373f04:
    // 0x373f04: 0xc04cd80  jal         func_133600
label_373f08:
    if (ctx->pc == 0x373F08u) {
        ctx->pc = 0x373F08u;
            // 0x373f08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373F0Cu;
        goto label_373f0c;
    }
    ctx->pc = 0x373F04u;
    SET_GPR_U32(ctx, 31, 0x373F0Cu);
    ctx->pc = 0x373F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373F04u;
            // 0x373f08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F0Cu; }
        if (ctx->pc != 0x373F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F0Cu; }
        if (ctx->pc != 0x373F0Cu) { return; }
    }
    ctx->pc = 0x373F0Cu;
label_373f0c:
    // 0x373f0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_373f10:
    // 0x373f10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x373f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_373f14:
    // 0x373f14: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x373f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_373f18:
    // 0x373f18: 0xa064fe01  sb          $a0, -0x1FF($v1)
    ctx->pc = 0x373f18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966785), (uint8_t)GPR_U32(ctx, 4));
label_373f1c:
    // 0x373f1c: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x373f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_373f20:
    // 0x373f20: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_373f24:
    if (ctx->pc == 0x373F24u) {
        ctx->pc = 0x373F28u;
        goto label_373f28;
    }
    ctx->pc = 0x373F20u;
    {
        const bool branch_taken_0x373f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f20) {
            ctx->pc = 0x373F50u;
            goto label_373f50;
        }
    }
    ctx->pc = 0x373F28u;
label_373f28:
    // 0x373f28: 0x90620e3d  lbu         $v0, 0xE3D($v1)
    ctx->pc = 0x373f28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3645)));
label_373f2c:
    // 0x373f2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x373f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_373f30:
    // 0x373f30: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x373f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_373f34:
    // 0x373f34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_373f38:
    // 0x373f38: 0xc04cce8  jal         func_1333A0
label_373f3c:
    if (ctx->pc == 0x373F3Cu) {
        ctx->pc = 0x373F3Cu;
            // 0x373f3c: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x373F40u;
        goto label_373f40;
    }
    ctx->pc = 0x373F38u;
    SET_GPR_U32(ctx, 31, 0x373F40u);
    ctx->pc = 0x373F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373F38u;
            // 0x373f3c: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F40u; }
        if (ctx->pc != 0x373F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F40u; }
        if (ctx->pc != 0x373F40u) { return; }
    }
    ctx->pc = 0x373F40u;
label_373f40:
    // 0x373f40: 0x10000003  b           . + 4 + (0x3 << 2)
label_373f44:
    if (ctx->pc == 0x373F44u) {
        ctx->pc = 0x373F48u;
        goto label_373f48;
    }
    ctx->pc = 0x373F40u;
    {
        const bool branch_taken_0x373f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373f40) {
            ctx->pc = 0x373F50u;
            goto label_373f50;
        }
    }
    ctx->pc = 0x373F48u;
label_373f48:
    // 0x373f48: 0xc10b710  jal         func_42DC40
label_373f4c:
    if (ctx->pc == 0x373F4Cu) {
        ctx->pc = 0x373F4Cu;
            // 0x373f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x373F50u;
        goto label_373f50;
    }
    ctx->pc = 0x373F48u;
    SET_GPR_U32(ctx, 31, 0x373F50u);
    ctx->pc = 0x373F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373F48u;
            // 0x373f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DC40u;
    if (runtime->hasFunction(0x42DC40u)) {
        auto targetFn = runtime->lookupFunction(0x42DC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F50u; }
        if (ctx->pc != 0x373F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042DC40_0x42dc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373F50u; }
        if (ctx->pc != 0x373F50u) { return; }
    }
    ctx->pc = 0x373F50u;
label_373f50:
    // 0x373f50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x373f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_373f54:
    // 0x373f54: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x373f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_373f58:
    // 0x373f58: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x373f58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_373f5c:
    // 0x373f5c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x373f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_373f60:
    // 0x373f60: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x373f60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_373f64:
    // 0x373f64: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x373f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_373f68:
    // 0x373f68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x373f68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_373f6c:
    // 0x373f6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x373f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_373f70:
    // 0x373f70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x373f70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_373f74:
    // 0x373f74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x373f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_373f78:
    // 0x373f78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x373f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_373f7c:
    // 0x373f7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_373f80:
    // 0x373f80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x373f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_373f84:
    // 0x373f84: 0x3e00008  jr          $ra
label_373f88:
    if (ctx->pc == 0x373F88u) {
        ctx->pc = 0x373F88u;
            // 0x373f88: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x373F8Cu;
        goto label_373f8c;
    }
    ctx->pc = 0x373F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373F84u;
            // 0x373f88: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373F8Cu;
label_373f8c:
    // 0x373f8c: 0x0  nop
    ctx->pc = 0x373f8cu;
    // NOP
}
