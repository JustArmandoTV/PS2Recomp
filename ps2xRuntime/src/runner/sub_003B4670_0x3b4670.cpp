#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B4670
// Address: 0x3b4670 - 0x3b5010
void sub_003B4670_0x3b4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4670_0x3b4670");
#endif

    switch (ctx->pc) {
        case 0x3b4670u: goto label_3b4670;
        case 0x3b4674u: goto label_3b4674;
        case 0x3b4678u: goto label_3b4678;
        case 0x3b467cu: goto label_3b467c;
        case 0x3b4680u: goto label_3b4680;
        case 0x3b4684u: goto label_3b4684;
        case 0x3b4688u: goto label_3b4688;
        case 0x3b468cu: goto label_3b468c;
        case 0x3b4690u: goto label_3b4690;
        case 0x3b4694u: goto label_3b4694;
        case 0x3b4698u: goto label_3b4698;
        case 0x3b469cu: goto label_3b469c;
        case 0x3b46a0u: goto label_3b46a0;
        case 0x3b46a4u: goto label_3b46a4;
        case 0x3b46a8u: goto label_3b46a8;
        case 0x3b46acu: goto label_3b46ac;
        case 0x3b46b0u: goto label_3b46b0;
        case 0x3b46b4u: goto label_3b46b4;
        case 0x3b46b8u: goto label_3b46b8;
        case 0x3b46bcu: goto label_3b46bc;
        case 0x3b46c0u: goto label_3b46c0;
        case 0x3b46c4u: goto label_3b46c4;
        case 0x3b46c8u: goto label_3b46c8;
        case 0x3b46ccu: goto label_3b46cc;
        case 0x3b46d0u: goto label_3b46d0;
        case 0x3b46d4u: goto label_3b46d4;
        case 0x3b46d8u: goto label_3b46d8;
        case 0x3b46dcu: goto label_3b46dc;
        case 0x3b46e0u: goto label_3b46e0;
        case 0x3b46e4u: goto label_3b46e4;
        case 0x3b46e8u: goto label_3b46e8;
        case 0x3b46ecu: goto label_3b46ec;
        case 0x3b46f0u: goto label_3b46f0;
        case 0x3b46f4u: goto label_3b46f4;
        case 0x3b46f8u: goto label_3b46f8;
        case 0x3b46fcu: goto label_3b46fc;
        case 0x3b4700u: goto label_3b4700;
        case 0x3b4704u: goto label_3b4704;
        case 0x3b4708u: goto label_3b4708;
        case 0x3b470cu: goto label_3b470c;
        case 0x3b4710u: goto label_3b4710;
        case 0x3b4714u: goto label_3b4714;
        case 0x3b4718u: goto label_3b4718;
        case 0x3b471cu: goto label_3b471c;
        case 0x3b4720u: goto label_3b4720;
        case 0x3b4724u: goto label_3b4724;
        case 0x3b4728u: goto label_3b4728;
        case 0x3b472cu: goto label_3b472c;
        case 0x3b4730u: goto label_3b4730;
        case 0x3b4734u: goto label_3b4734;
        case 0x3b4738u: goto label_3b4738;
        case 0x3b473cu: goto label_3b473c;
        case 0x3b4740u: goto label_3b4740;
        case 0x3b4744u: goto label_3b4744;
        case 0x3b4748u: goto label_3b4748;
        case 0x3b474cu: goto label_3b474c;
        case 0x3b4750u: goto label_3b4750;
        case 0x3b4754u: goto label_3b4754;
        case 0x3b4758u: goto label_3b4758;
        case 0x3b475cu: goto label_3b475c;
        case 0x3b4760u: goto label_3b4760;
        case 0x3b4764u: goto label_3b4764;
        case 0x3b4768u: goto label_3b4768;
        case 0x3b476cu: goto label_3b476c;
        case 0x3b4770u: goto label_3b4770;
        case 0x3b4774u: goto label_3b4774;
        case 0x3b4778u: goto label_3b4778;
        case 0x3b477cu: goto label_3b477c;
        case 0x3b4780u: goto label_3b4780;
        case 0x3b4784u: goto label_3b4784;
        case 0x3b4788u: goto label_3b4788;
        case 0x3b478cu: goto label_3b478c;
        case 0x3b4790u: goto label_3b4790;
        case 0x3b4794u: goto label_3b4794;
        case 0x3b4798u: goto label_3b4798;
        case 0x3b479cu: goto label_3b479c;
        case 0x3b47a0u: goto label_3b47a0;
        case 0x3b47a4u: goto label_3b47a4;
        case 0x3b47a8u: goto label_3b47a8;
        case 0x3b47acu: goto label_3b47ac;
        case 0x3b47b0u: goto label_3b47b0;
        case 0x3b47b4u: goto label_3b47b4;
        case 0x3b47b8u: goto label_3b47b8;
        case 0x3b47bcu: goto label_3b47bc;
        case 0x3b47c0u: goto label_3b47c0;
        case 0x3b47c4u: goto label_3b47c4;
        case 0x3b47c8u: goto label_3b47c8;
        case 0x3b47ccu: goto label_3b47cc;
        case 0x3b47d0u: goto label_3b47d0;
        case 0x3b47d4u: goto label_3b47d4;
        case 0x3b47d8u: goto label_3b47d8;
        case 0x3b47dcu: goto label_3b47dc;
        case 0x3b47e0u: goto label_3b47e0;
        case 0x3b47e4u: goto label_3b47e4;
        case 0x3b47e8u: goto label_3b47e8;
        case 0x3b47ecu: goto label_3b47ec;
        case 0x3b47f0u: goto label_3b47f0;
        case 0x3b47f4u: goto label_3b47f4;
        case 0x3b47f8u: goto label_3b47f8;
        case 0x3b47fcu: goto label_3b47fc;
        case 0x3b4800u: goto label_3b4800;
        case 0x3b4804u: goto label_3b4804;
        case 0x3b4808u: goto label_3b4808;
        case 0x3b480cu: goto label_3b480c;
        case 0x3b4810u: goto label_3b4810;
        case 0x3b4814u: goto label_3b4814;
        case 0x3b4818u: goto label_3b4818;
        case 0x3b481cu: goto label_3b481c;
        case 0x3b4820u: goto label_3b4820;
        case 0x3b4824u: goto label_3b4824;
        case 0x3b4828u: goto label_3b4828;
        case 0x3b482cu: goto label_3b482c;
        case 0x3b4830u: goto label_3b4830;
        case 0x3b4834u: goto label_3b4834;
        case 0x3b4838u: goto label_3b4838;
        case 0x3b483cu: goto label_3b483c;
        case 0x3b4840u: goto label_3b4840;
        case 0x3b4844u: goto label_3b4844;
        case 0x3b4848u: goto label_3b4848;
        case 0x3b484cu: goto label_3b484c;
        case 0x3b4850u: goto label_3b4850;
        case 0x3b4854u: goto label_3b4854;
        case 0x3b4858u: goto label_3b4858;
        case 0x3b485cu: goto label_3b485c;
        case 0x3b4860u: goto label_3b4860;
        case 0x3b4864u: goto label_3b4864;
        case 0x3b4868u: goto label_3b4868;
        case 0x3b486cu: goto label_3b486c;
        case 0x3b4870u: goto label_3b4870;
        case 0x3b4874u: goto label_3b4874;
        case 0x3b4878u: goto label_3b4878;
        case 0x3b487cu: goto label_3b487c;
        case 0x3b4880u: goto label_3b4880;
        case 0x3b4884u: goto label_3b4884;
        case 0x3b4888u: goto label_3b4888;
        case 0x3b488cu: goto label_3b488c;
        case 0x3b4890u: goto label_3b4890;
        case 0x3b4894u: goto label_3b4894;
        case 0x3b4898u: goto label_3b4898;
        case 0x3b489cu: goto label_3b489c;
        case 0x3b48a0u: goto label_3b48a0;
        case 0x3b48a4u: goto label_3b48a4;
        case 0x3b48a8u: goto label_3b48a8;
        case 0x3b48acu: goto label_3b48ac;
        case 0x3b48b0u: goto label_3b48b0;
        case 0x3b48b4u: goto label_3b48b4;
        case 0x3b48b8u: goto label_3b48b8;
        case 0x3b48bcu: goto label_3b48bc;
        case 0x3b48c0u: goto label_3b48c0;
        case 0x3b48c4u: goto label_3b48c4;
        case 0x3b48c8u: goto label_3b48c8;
        case 0x3b48ccu: goto label_3b48cc;
        case 0x3b48d0u: goto label_3b48d0;
        case 0x3b48d4u: goto label_3b48d4;
        case 0x3b48d8u: goto label_3b48d8;
        case 0x3b48dcu: goto label_3b48dc;
        case 0x3b48e0u: goto label_3b48e0;
        case 0x3b48e4u: goto label_3b48e4;
        case 0x3b48e8u: goto label_3b48e8;
        case 0x3b48ecu: goto label_3b48ec;
        case 0x3b48f0u: goto label_3b48f0;
        case 0x3b48f4u: goto label_3b48f4;
        case 0x3b48f8u: goto label_3b48f8;
        case 0x3b48fcu: goto label_3b48fc;
        case 0x3b4900u: goto label_3b4900;
        case 0x3b4904u: goto label_3b4904;
        case 0x3b4908u: goto label_3b4908;
        case 0x3b490cu: goto label_3b490c;
        case 0x3b4910u: goto label_3b4910;
        case 0x3b4914u: goto label_3b4914;
        case 0x3b4918u: goto label_3b4918;
        case 0x3b491cu: goto label_3b491c;
        case 0x3b4920u: goto label_3b4920;
        case 0x3b4924u: goto label_3b4924;
        case 0x3b4928u: goto label_3b4928;
        case 0x3b492cu: goto label_3b492c;
        case 0x3b4930u: goto label_3b4930;
        case 0x3b4934u: goto label_3b4934;
        case 0x3b4938u: goto label_3b4938;
        case 0x3b493cu: goto label_3b493c;
        case 0x3b4940u: goto label_3b4940;
        case 0x3b4944u: goto label_3b4944;
        case 0x3b4948u: goto label_3b4948;
        case 0x3b494cu: goto label_3b494c;
        case 0x3b4950u: goto label_3b4950;
        case 0x3b4954u: goto label_3b4954;
        case 0x3b4958u: goto label_3b4958;
        case 0x3b495cu: goto label_3b495c;
        case 0x3b4960u: goto label_3b4960;
        case 0x3b4964u: goto label_3b4964;
        case 0x3b4968u: goto label_3b4968;
        case 0x3b496cu: goto label_3b496c;
        case 0x3b4970u: goto label_3b4970;
        case 0x3b4974u: goto label_3b4974;
        case 0x3b4978u: goto label_3b4978;
        case 0x3b497cu: goto label_3b497c;
        case 0x3b4980u: goto label_3b4980;
        case 0x3b4984u: goto label_3b4984;
        case 0x3b4988u: goto label_3b4988;
        case 0x3b498cu: goto label_3b498c;
        case 0x3b4990u: goto label_3b4990;
        case 0x3b4994u: goto label_3b4994;
        case 0x3b4998u: goto label_3b4998;
        case 0x3b499cu: goto label_3b499c;
        case 0x3b49a0u: goto label_3b49a0;
        case 0x3b49a4u: goto label_3b49a4;
        case 0x3b49a8u: goto label_3b49a8;
        case 0x3b49acu: goto label_3b49ac;
        case 0x3b49b0u: goto label_3b49b0;
        case 0x3b49b4u: goto label_3b49b4;
        case 0x3b49b8u: goto label_3b49b8;
        case 0x3b49bcu: goto label_3b49bc;
        case 0x3b49c0u: goto label_3b49c0;
        case 0x3b49c4u: goto label_3b49c4;
        case 0x3b49c8u: goto label_3b49c8;
        case 0x3b49ccu: goto label_3b49cc;
        case 0x3b49d0u: goto label_3b49d0;
        case 0x3b49d4u: goto label_3b49d4;
        case 0x3b49d8u: goto label_3b49d8;
        case 0x3b49dcu: goto label_3b49dc;
        case 0x3b49e0u: goto label_3b49e0;
        case 0x3b49e4u: goto label_3b49e4;
        case 0x3b49e8u: goto label_3b49e8;
        case 0x3b49ecu: goto label_3b49ec;
        case 0x3b49f0u: goto label_3b49f0;
        case 0x3b49f4u: goto label_3b49f4;
        case 0x3b49f8u: goto label_3b49f8;
        case 0x3b49fcu: goto label_3b49fc;
        case 0x3b4a00u: goto label_3b4a00;
        case 0x3b4a04u: goto label_3b4a04;
        case 0x3b4a08u: goto label_3b4a08;
        case 0x3b4a0cu: goto label_3b4a0c;
        case 0x3b4a10u: goto label_3b4a10;
        case 0x3b4a14u: goto label_3b4a14;
        case 0x3b4a18u: goto label_3b4a18;
        case 0x3b4a1cu: goto label_3b4a1c;
        case 0x3b4a20u: goto label_3b4a20;
        case 0x3b4a24u: goto label_3b4a24;
        case 0x3b4a28u: goto label_3b4a28;
        case 0x3b4a2cu: goto label_3b4a2c;
        case 0x3b4a30u: goto label_3b4a30;
        case 0x3b4a34u: goto label_3b4a34;
        case 0x3b4a38u: goto label_3b4a38;
        case 0x3b4a3cu: goto label_3b4a3c;
        case 0x3b4a40u: goto label_3b4a40;
        case 0x3b4a44u: goto label_3b4a44;
        case 0x3b4a48u: goto label_3b4a48;
        case 0x3b4a4cu: goto label_3b4a4c;
        case 0x3b4a50u: goto label_3b4a50;
        case 0x3b4a54u: goto label_3b4a54;
        case 0x3b4a58u: goto label_3b4a58;
        case 0x3b4a5cu: goto label_3b4a5c;
        case 0x3b4a60u: goto label_3b4a60;
        case 0x3b4a64u: goto label_3b4a64;
        case 0x3b4a68u: goto label_3b4a68;
        case 0x3b4a6cu: goto label_3b4a6c;
        case 0x3b4a70u: goto label_3b4a70;
        case 0x3b4a74u: goto label_3b4a74;
        case 0x3b4a78u: goto label_3b4a78;
        case 0x3b4a7cu: goto label_3b4a7c;
        case 0x3b4a80u: goto label_3b4a80;
        case 0x3b4a84u: goto label_3b4a84;
        case 0x3b4a88u: goto label_3b4a88;
        case 0x3b4a8cu: goto label_3b4a8c;
        case 0x3b4a90u: goto label_3b4a90;
        case 0x3b4a94u: goto label_3b4a94;
        case 0x3b4a98u: goto label_3b4a98;
        case 0x3b4a9cu: goto label_3b4a9c;
        case 0x3b4aa0u: goto label_3b4aa0;
        case 0x3b4aa4u: goto label_3b4aa4;
        case 0x3b4aa8u: goto label_3b4aa8;
        case 0x3b4aacu: goto label_3b4aac;
        case 0x3b4ab0u: goto label_3b4ab0;
        case 0x3b4ab4u: goto label_3b4ab4;
        case 0x3b4ab8u: goto label_3b4ab8;
        case 0x3b4abcu: goto label_3b4abc;
        case 0x3b4ac0u: goto label_3b4ac0;
        case 0x3b4ac4u: goto label_3b4ac4;
        case 0x3b4ac8u: goto label_3b4ac8;
        case 0x3b4accu: goto label_3b4acc;
        case 0x3b4ad0u: goto label_3b4ad0;
        case 0x3b4ad4u: goto label_3b4ad4;
        case 0x3b4ad8u: goto label_3b4ad8;
        case 0x3b4adcu: goto label_3b4adc;
        case 0x3b4ae0u: goto label_3b4ae0;
        case 0x3b4ae4u: goto label_3b4ae4;
        case 0x3b4ae8u: goto label_3b4ae8;
        case 0x3b4aecu: goto label_3b4aec;
        case 0x3b4af0u: goto label_3b4af0;
        case 0x3b4af4u: goto label_3b4af4;
        case 0x3b4af8u: goto label_3b4af8;
        case 0x3b4afcu: goto label_3b4afc;
        case 0x3b4b00u: goto label_3b4b00;
        case 0x3b4b04u: goto label_3b4b04;
        case 0x3b4b08u: goto label_3b4b08;
        case 0x3b4b0cu: goto label_3b4b0c;
        case 0x3b4b10u: goto label_3b4b10;
        case 0x3b4b14u: goto label_3b4b14;
        case 0x3b4b18u: goto label_3b4b18;
        case 0x3b4b1cu: goto label_3b4b1c;
        case 0x3b4b20u: goto label_3b4b20;
        case 0x3b4b24u: goto label_3b4b24;
        case 0x3b4b28u: goto label_3b4b28;
        case 0x3b4b2cu: goto label_3b4b2c;
        case 0x3b4b30u: goto label_3b4b30;
        case 0x3b4b34u: goto label_3b4b34;
        case 0x3b4b38u: goto label_3b4b38;
        case 0x3b4b3cu: goto label_3b4b3c;
        case 0x3b4b40u: goto label_3b4b40;
        case 0x3b4b44u: goto label_3b4b44;
        case 0x3b4b48u: goto label_3b4b48;
        case 0x3b4b4cu: goto label_3b4b4c;
        case 0x3b4b50u: goto label_3b4b50;
        case 0x3b4b54u: goto label_3b4b54;
        case 0x3b4b58u: goto label_3b4b58;
        case 0x3b4b5cu: goto label_3b4b5c;
        case 0x3b4b60u: goto label_3b4b60;
        case 0x3b4b64u: goto label_3b4b64;
        case 0x3b4b68u: goto label_3b4b68;
        case 0x3b4b6cu: goto label_3b4b6c;
        case 0x3b4b70u: goto label_3b4b70;
        case 0x3b4b74u: goto label_3b4b74;
        case 0x3b4b78u: goto label_3b4b78;
        case 0x3b4b7cu: goto label_3b4b7c;
        case 0x3b4b80u: goto label_3b4b80;
        case 0x3b4b84u: goto label_3b4b84;
        case 0x3b4b88u: goto label_3b4b88;
        case 0x3b4b8cu: goto label_3b4b8c;
        case 0x3b4b90u: goto label_3b4b90;
        case 0x3b4b94u: goto label_3b4b94;
        case 0x3b4b98u: goto label_3b4b98;
        case 0x3b4b9cu: goto label_3b4b9c;
        case 0x3b4ba0u: goto label_3b4ba0;
        case 0x3b4ba4u: goto label_3b4ba4;
        case 0x3b4ba8u: goto label_3b4ba8;
        case 0x3b4bacu: goto label_3b4bac;
        case 0x3b4bb0u: goto label_3b4bb0;
        case 0x3b4bb4u: goto label_3b4bb4;
        case 0x3b4bb8u: goto label_3b4bb8;
        case 0x3b4bbcu: goto label_3b4bbc;
        case 0x3b4bc0u: goto label_3b4bc0;
        case 0x3b4bc4u: goto label_3b4bc4;
        case 0x3b4bc8u: goto label_3b4bc8;
        case 0x3b4bccu: goto label_3b4bcc;
        case 0x3b4bd0u: goto label_3b4bd0;
        case 0x3b4bd4u: goto label_3b4bd4;
        case 0x3b4bd8u: goto label_3b4bd8;
        case 0x3b4bdcu: goto label_3b4bdc;
        case 0x3b4be0u: goto label_3b4be0;
        case 0x3b4be4u: goto label_3b4be4;
        case 0x3b4be8u: goto label_3b4be8;
        case 0x3b4becu: goto label_3b4bec;
        case 0x3b4bf0u: goto label_3b4bf0;
        case 0x3b4bf4u: goto label_3b4bf4;
        case 0x3b4bf8u: goto label_3b4bf8;
        case 0x3b4bfcu: goto label_3b4bfc;
        case 0x3b4c00u: goto label_3b4c00;
        case 0x3b4c04u: goto label_3b4c04;
        case 0x3b4c08u: goto label_3b4c08;
        case 0x3b4c0cu: goto label_3b4c0c;
        case 0x3b4c10u: goto label_3b4c10;
        case 0x3b4c14u: goto label_3b4c14;
        case 0x3b4c18u: goto label_3b4c18;
        case 0x3b4c1cu: goto label_3b4c1c;
        case 0x3b4c20u: goto label_3b4c20;
        case 0x3b4c24u: goto label_3b4c24;
        case 0x3b4c28u: goto label_3b4c28;
        case 0x3b4c2cu: goto label_3b4c2c;
        case 0x3b4c30u: goto label_3b4c30;
        case 0x3b4c34u: goto label_3b4c34;
        case 0x3b4c38u: goto label_3b4c38;
        case 0x3b4c3cu: goto label_3b4c3c;
        case 0x3b4c40u: goto label_3b4c40;
        case 0x3b4c44u: goto label_3b4c44;
        case 0x3b4c48u: goto label_3b4c48;
        case 0x3b4c4cu: goto label_3b4c4c;
        case 0x3b4c50u: goto label_3b4c50;
        case 0x3b4c54u: goto label_3b4c54;
        case 0x3b4c58u: goto label_3b4c58;
        case 0x3b4c5cu: goto label_3b4c5c;
        case 0x3b4c60u: goto label_3b4c60;
        case 0x3b4c64u: goto label_3b4c64;
        case 0x3b4c68u: goto label_3b4c68;
        case 0x3b4c6cu: goto label_3b4c6c;
        case 0x3b4c70u: goto label_3b4c70;
        case 0x3b4c74u: goto label_3b4c74;
        case 0x3b4c78u: goto label_3b4c78;
        case 0x3b4c7cu: goto label_3b4c7c;
        case 0x3b4c80u: goto label_3b4c80;
        case 0x3b4c84u: goto label_3b4c84;
        case 0x3b4c88u: goto label_3b4c88;
        case 0x3b4c8cu: goto label_3b4c8c;
        case 0x3b4c90u: goto label_3b4c90;
        case 0x3b4c94u: goto label_3b4c94;
        case 0x3b4c98u: goto label_3b4c98;
        case 0x3b4c9cu: goto label_3b4c9c;
        case 0x3b4ca0u: goto label_3b4ca0;
        case 0x3b4ca4u: goto label_3b4ca4;
        case 0x3b4ca8u: goto label_3b4ca8;
        case 0x3b4cacu: goto label_3b4cac;
        case 0x3b4cb0u: goto label_3b4cb0;
        case 0x3b4cb4u: goto label_3b4cb4;
        case 0x3b4cb8u: goto label_3b4cb8;
        case 0x3b4cbcu: goto label_3b4cbc;
        case 0x3b4cc0u: goto label_3b4cc0;
        case 0x3b4cc4u: goto label_3b4cc4;
        case 0x3b4cc8u: goto label_3b4cc8;
        case 0x3b4cccu: goto label_3b4ccc;
        case 0x3b4cd0u: goto label_3b4cd0;
        case 0x3b4cd4u: goto label_3b4cd4;
        case 0x3b4cd8u: goto label_3b4cd8;
        case 0x3b4cdcu: goto label_3b4cdc;
        case 0x3b4ce0u: goto label_3b4ce0;
        case 0x3b4ce4u: goto label_3b4ce4;
        case 0x3b4ce8u: goto label_3b4ce8;
        case 0x3b4cecu: goto label_3b4cec;
        case 0x3b4cf0u: goto label_3b4cf0;
        case 0x3b4cf4u: goto label_3b4cf4;
        case 0x3b4cf8u: goto label_3b4cf8;
        case 0x3b4cfcu: goto label_3b4cfc;
        case 0x3b4d00u: goto label_3b4d00;
        case 0x3b4d04u: goto label_3b4d04;
        case 0x3b4d08u: goto label_3b4d08;
        case 0x3b4d0cu: goto label_3b4d0c;
        case 0x3b4d10u: goto label_3b4d10;
        case 0x3b4d14u: goto label_3b4d14;
        case 0x3b4d18u: goto label_3b4d18;
        case 0x3b4d1cu: goto label_3b4d1c;
        case 0x3b4d20u: goto label_3b4d20;
        case 0x3b4d24u: goto label_3b4d24;
        case 0x3b4d28u: goto label_3b4d28;
        case 0x3b4d2cu: goto label_3b4d2c;
        case 0x3b4d30u: goto label_3b4d30;
        case 0x3b4d34u: goto label_3b4d34;
        case 0x3b4d38u: goto label_3b4d38;
        case 0x3b4d3cu: goto label_3b4d3c;
        case 0x3b4d40u: goto label_3b4d40;
        case 0x3b4d44u: goto label_3b4d44;
        case 0x3b4d48u: goto label_3b4d48;
        case 0x3b4d4cu: goto label_3b4d4c;
        case 0x3b4d50u: goto label_3b4d50;
        case 0x3b4d54u: goto label_3b4d54;
        case 0x3b4d58u: goto label_3b4d58;
        case 0x3b4d5cu: goto label_3b4d5c;
        case 0x3b4d60u: goto label_3b4d60;
        case 0x3b4d64u: goto label_3b4d64;
        case 0x3b4d68u: goto label_3b4d68;
        case 0x3b4d6cu: goto label_3b4d6c;
        case 0x3b4d70u: goto label_3b4d70;
        case 0x3b4d74u: goto label_3b4d74;
        case 0x3b4d78u: goto label_3b4d78;
        case 0x3b4d7cu: goto label_3b4d7c;
        case 0x3b4d80u: goto label_3b4d80;
        case 0x3b4d84u: goto label_3b4d84;
        case 0x3b4d88u: goto label_3b4d88;
        case 0x3b4d8cu: goto label_3b4d8c;
        case 0x3b4d90u: goto label_3b4d90;
        case 0x3b4d94u: goto label_3b4d94;
        case 0x3b4d98u: goto label_3b4d98;
        case 0x3b4d9cu: goto label_3b4d9c;
        case 0x3b4da0u: goto label_3b4da0;
        case 0x3b4da4u: goto label_3b4da4;
        case 0x3b4da8u: goto label_3b4da8;
        case 0x3b4dacu: goto label_3b4dac;
        case 0x3b4db0u: goto label_3b4db0;
        case 0x3b4db4u: goto label_3b4db4;
        case 0x3b4db8u: goto label_3b4db8;
        case 0x3b4dbcu: goto label_3b4dbc;
        case 0x3b4dc0u: goto label_3b4dc0;
        case 0x3b4dc4u: goto label_3b4dc4;
        case 0x3b4dc8u: goto label_3b4dc8;
        case 0x3b4dccu: goto label_3b4dcc;
        case 0x3b4dd0u: goto label_3b4dd0;
        case 0x3b4dd4u: goto label_3b4dd4;
        case 0x3b4dd8u: goto label_3b4dd8;
        case 0x3b4ddcu: goto label_3b4ddc;
        case 0x3b4de0u: goto label_3b4de0;
        case 0x3b4de4u: goto label_3b4de4;
        case 0x3b4de8u: goto label_3b4de8;
        case 0x3b4decu: goto label_3b4dec;
        case 0x3b4df0u: goto label_3b4df0;
        case 0x3b4df4u: goto label_3b4df4;
        case 0x3b4df8u: goto label_3b4df8;
        case 0x3b4dfcu: goto label_3b4dfc;
        case 0x3b4e00u: goto label_3b4e00;
        case 0x3b4e04u: goto label_3b4e04;
        case 0x3b4e08u: goto label_3b4e08;
        case 0x3b4e0cu: goto label_3b4e0c;
        case 0x3b4e10u: goto label_3b4e10;
        case 0x3b4e14u: goto label_3b4e14;
        case 0x3b4e18u: goto label_3b4e18;
        case 0x3b4e1cu: goto label_3b4e1c;
        case 0x3b4e20u: goto label_3b4e20;
        case 0x3b4e24u: goto label_3b4e24;
        case 0x3b4e28u: goto label_3b4e28;
        case 0x3b4e2cu: goto label_3b4e2c;
        case 0x3b4e30u: goto label_3b4e30;
        case 0x3b4e34u: goto label_3b4e34;
        case 0x3b4e38u: goto label_3b4e38;
        case 0x3b4e3cu: goto label_3b4e3c;
        case 0x3b4e40u: goto label_3b4e40;
        case 0x3b4e44u: goto label_3b4e44;
        case 0x3b4e48u: goto label_3b4e48;
        case 0x3b4e4cu: goto label_3b4e4c;
        case 0x3b4e50u: goto label_3b4e50;
        case 0x3b4e54u: goto label_3b4e54;
        case 0x3b4e58u: goto label_3b4e58;
        case 0x3b4e5cu: goto label_3b4e5c;
        case 0x3b4e60u: goto label_3b4e60;
        case 0x3b4e64u: goto label_3b4e64;
        case 0x3b4e68u: goto label_3b4e68;
        case 0x3b4e6cu: goto label_3b4e6c;
        case 0x3b4e70u: goto label_3b4e70;
        case 0x3b4e74u: goto label_3b4e74;
        case 0x3b4e78u: goto label_3b4e78;
        case 0x3b4e7cu: goto label_3b4e7c;
        case 0x3b4e80u: goto label_3b4e80;
        case 0x3b4e84u: goto label_3b4e84;
        case 0x3b4e88u: goto label_3b4e88;
        case 0x3b4e8cu: goto label_3b4e8c;
        case 0x3b4e90u: goto label_3b4e90;
        case 0x3b4e94u: goto label_3b4e94;
        case 0x3b4e98u: goto label_3b4e98;
        case 0x3b4e9cu: goto label_3b4e9c;
        case 0x3b4ea0u: goto label_3b4ea0;
        case 0x3b4ea4u: goto label_3b4ea4;
        case 0x3b4ea8u: goto label_3b4ea8;
        case 0x3b4eacu: goto label_3b4eac;
        case 0x3b4eb0u: goto label_3b4eb0;
        case 0x3b4eb4u: goto label_3b4eb4;
        case 0x3b4eb8u: goto label_3b4eb8;
        case 0x3b4ebcu: goto label_3b4ebc;
        case 0x3b4ec0u: goto label_3b4ec0;
        case 0x3b4ec4u: goto label_3b4ec4;
        case 0x3b4ec8u: goto label_3b4ec8;
        case 0x3b4eccu: goto label_3b4ecc;
        case 0x3b4ed0u: goto label_3b4ed0;
        case 0x3b4ed4u: goto label_3b4ed4;
        case 0x3b4ed8u: goto label_3b4ed8;
        case 0x3b4edcu: goto label_3b4edc;
        case 0x3b4ee0u: goto label_3b4ee0;
        case 0x3b4ee4u: goto label_3b4ee4;
        case 0x3b4ee8u: goto label_3b4ee8;
        case 0x3b4eecu: goto label_3b4eec;
        case 0x3b4ef0u: goto label_3b4ef0;
        case 0x3b4ef4u: goto label_3b4ef4;
        case 0x3b4ef8u: goto label_3b4ef8;
        case 0x3b4efcu: goto label_3b4efc;
        case 0x3b4f00u: goto label_3b4f00;
        case 0x3b4f04u: goto label_3b4f04;
        case 0x3b4f08u: goto label_3b4f08;
        case 0x3b4f0cu: goto label_3b4f0c;
        case 0x3b4f10u: goto label_3b4f10;
        case 0x3b4f14u: goto label_3b4f14;
        case 0x3b4f18u: goto label_3b4f18;
        case 0x3b4f1cu: goto label_3b4f1c;
        case 0x3b4f20u: goto label_3b4f20;
        case 0x3b4f24u: goto label_3b4f24;
        case 0x3b4f28u: goto label_3b4f28;
        case 0x3b4f2cu: goto label_3b4f2c;
        case 0x3b4f30u: goto label_3b4f30;
        case 0x3b4f34u: goto label_3b4f34;
        case 0x3b4f38u: goto label_3b4f38;
        case 0x3b4f3cu: goto label_3b4f3c;
        case 0x3b4f40u: goto label_3b4f40;
        case 0x3b4f44u: goto label_3b4f44;
        case 0x3b4f48u: goto label_3b4f48;
        case 0x3b4f4cu: goto label_3b4f4c;
        case 0x3b4f50u: goto label_3b4f50;
        case 0x3b4f54u: goto label_3b4f54;
        case 0x3b4f58u: goto label_3b4f58;
        case 0x3b4f5cu: goto label_3b4f5c;
        case 0x3b4f60u: goto label_3b4f60;
        case 0x3b4f64u: goto label_3b4f64;
        case 0x3b4f68u: goto label_3b4f68;
        case 0x3b4f6cu: goto label_3b4f6c;
        case 0x3b4f70u: goto label_3b4f70;
        case 0x3b4f74u: goto label_3b4f74;
        case 0x3b4f78u: goto label_3b4f78;
        case 0x3b4f7cu: goto label_3b4f7c;
        case 0x3b4f80u: goto label_3b4f80;
        case 0x3b4f84u: goto label_3b4f84;
        case 0x3b4f88u: goto label_3b4f88;
        case 0x3b4f8cu: goto label_3b4f8c;
        case 0x3b4f90u: goto label_3b4f90;
        case 0x3b4f94u: goto label_3b4f94;
        case 0x3b4f98u: goto label_3b4f98;
        case 0x3b4f9cu: goto label_3b4f9c;
        case 0x3b4fa0u: goto label_3b4fa0;
        case 0x3b4fa4u: goto label_3b4fa4;
        case 0x3b4fa8u: goto label_3b4fa8;
        case 0x3b4facu: goto label_3b4fac;
        case 0x3b4fb0u: goto label_3b4fb0;
        case 0x3b4fb4u: goto label_3b4fb4;
        case 0x3b4fb8u: goto label_3b4fb8;
        case 0x3b4fbcu: goto label_3b4fbc;
        case 0x3b4fc0u: goto label_3b4fc0;
        case 0x3b4fc4u: goto label_3b4fc4;
        case 0x3b4fc8u: goto label_3b4fc8;
        case 0x3b4fccu: goto label_3b4fcc;
        case 0x3b4fd0u: goto label_3b4fd0;
        case 0x3b4fd4u: goto label_3b4fd4;
        case 0x3b4fd8u: goto label_3b4fd8;
        case 0x3b4fdcu: goto label_3b4fdc;
        case 0x3b4fe0u: goto label_3b4fe0;
        case 0x3b4fe4u: goto label_3b4fe4;
        case 0x3b4fe8u: goto label_3b4fe8;
        case 0x3b4fecu: goto label_3b4fec;
        case 0x3b4ff0u: goto label_3b4ff0;
        case 0x3b4ff4u: goto label_3b4ff4;
        case 0x3b4ff8u: goto label_3b4ff8;
        case 0x3b4ffcu: goto label_3b4ffc;
        case 0x3b5000u: goto label_3b5000;
        case 0x3b5004u: goto label_3b5004;
        case 0x3b5008u: goto label_3b5008;
        case 0x3b500cu: goto label_3b500c;
        default: break;
    }

    ctx->pc = 0x3b4670u;

label_3b4670:
    // 0x3b4670: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b4670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b4674:
    // 0x3b4674: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x3b4674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_3b4678:
    // 0x3b4678: 0x244289c8  addiu       $v0, $v0, -0x7638
    ctx->pc = 0x3b4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937032));
label_3b467c:
    // 0x3b467c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3b467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3b4680:
    // 0x3b4680: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3b4680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3b4684:
    // 0x3b4684: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b4684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4688:
    // 0x3b4688: 0x3e00008  jr          $ra
label_3b468c:
    if (ctx->pc == 0x3B468Cu) {
        ctx->pc = 0x3B468Cu;
            // 0x3b468c: 0xac6564f0  sw          $a1, 0x64F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25840), GPR_U32(ctx, 5));
        ctx->pc = 0x3B4690u;
        goto label_3b4690;
    }
    ctx->pc = 0x3B4688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4688u;
            // 0x3b468c: 0xac6564f0  sw          $a1, 0x64F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25840), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4690u;
label_3b4690:
    // 0x3b4690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b4694:
    // 0x3b4694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b4698:
    // 0x3b4698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b469c:
    // 0x3b469c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b469cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b46a0:
    // 0x3b46a0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x3b46a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3b46a4:
    // 0x3b46a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b46a8:
    if (ctx->pc == 0x3B46A8u) {
        ctx->pc = 0x3B46A8u;
            // 0x3b46a8: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x3B46ACu;
        goto label_3b46ac;
    }
    ctx->pc = 0x3B46A4u;
    {
        const bool branch_taken_0x3b46a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b46a4) {
            ctx->pc = 0x3B46A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B46A4u;
            // 0x3b46a8: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B46C0u;
            goto label_3b46c0;
        }
    }
    ctx->pc = 0x3B46ACu;
label_3b46ac:
    // 0x3b46ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b46acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b46b0:
    // 0x3b46b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3b46b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3b46b4:
    // 0x3b46b4: 0x320f809  jalr        $t9
label_3b46b8:
    if (ctx->pc == 0x3B46B8u) {
        ctx->pc = 0x3B46B8u;
            // 0x3b46b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B46BCu;
        goto label_3b46bc;
    }
    ctx->pc = 0x3B46B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B46BCu);
        ctx->pc = 0x3B46B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B46B4u;
            // 0x3b46b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B46BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B46BCu; }
            if (ctx->pc != 0x3B46BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3B46BCu;
label_3b46bc:
    // 0x3b46bc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3b46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3b46c0:
    // 0x3b46c0: 0xc0d37dc  jal         func_34DF70
label_3b46c4:
    if (ctx->pc == 0x3B46C4u) {
        ctx->pc = 0x3B46C4u;
            // 0x3b46c4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3B46C8u;
        goto label_3b46c8;
    }
    ctx->pc = 0x3B46C0u;
    SET_GPR_U32(ctx, 31, 0x3B46C8u);
    ctx->pc = 0x3B46C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B46C0u;
            // 0x3b46c4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B46C8u; }
        if (ctx->pc != 0x3B46C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B46C8u; }
        if (ctx->pc != 0x3B46C8u) { return; }
    }
    ctx->pc = 0x3B46C8u;
label_3b46c8:
    // 0x3b46c8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b46cc:
    // 0x3b46cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b46d0:
    if (ctx->pc == 0x3B46D0u) {
        ctx->pc = 0x3B46D0u;
            // 0x3b46d0: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x3B46D4u;
        goto label_3b46d4;
    }
    ctx->pc = 0x3B46CCu;
    {
        const bool branch_taken_0x3b46cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b46cc) {
            ctx->pc = 0x3B46D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B46CCu;
            // 0x3b46d0: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B46E8u;
            goto label_3b46e8;
        }
    }
    ctx->pc = 0x3B46D4u;
label_3b46d4:
    // 0x3b46d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b46d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b46d8:
    // 0x3b46d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3b46d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3b46dc:
    // 0x3b46dc: 0x320f809  jalr        $t9
label_3b46e0:
    if (ctx->pc == 0x3B46E0u) {
        ctx->pc = 0x3B46E0u;
            // 0x3b46e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B46E4u;
        goto label_3b46e4;
    }
    ctx->pc = 0x3B46DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B46E4u);
        ctx->pc = 0x3B46E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B46DCu;
            // 0x3b46e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B46E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B46E4u; }
            if (ctx->pc != 0x3B46E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3B46E4u;
label_3b46e4:
    // 0x3b46e4: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x3b46e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_3b46e8:
    // 0x3b46e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b46e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b46ec:
    // 0x3b46ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b46ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b46f0:
    // 0x3b46f0: 0x3e00008  jr          $ra
label_3b46f4:
    if (ctx->pc == 0x3B46F4u) {
        ctx->pc = 0x3B46F4u;
            // 0x3b46f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3B46F8u;
        goto label_3b46f8;
    }
    ctx->pc = 0x3B46F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B46F0u;
            // 0x3b46f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B46F8u;
label_3b46f8:
    // 0x3b46f8: 0x0  nop
    ctx->pc = 0x3b46f8u;
    // NOP
label_3b46fc:
    // 0x3b46fc: 0x0  nop
    ctx->pc = 0x3b46fcu;
    // NOP
label_3b4700:
    // 0x3b4700: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3b4700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3b4704:
    // 0x3b4704: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b4704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b4708:
    // 0x3b4708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b4708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b470c:
    // 0x3b470c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b470cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4710:
    // 0x3b4710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4714:
    // 0x3b4714: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3b4714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3b4718:
    // 0x3b4718: 0xc0892d0  jal         func_224B40
label_3b471c:
    if (ctx->pc == 0x3B471Cu) {
        ctx->pc = 0x3B471Cu;
            // 0x3b471c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3B4720u;
        goto label_3b4720;
    }
    ctx->pc = 0x3B4718u;
    SET_GPR_U32(ctx, 31, 0x3B4720u);
    ctx->pc = 0x3B471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4718u;
            // 0x3b471c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4720u; }
        if (ctx->pc != 0x3B4720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4720u; }
        if (ctx->pc != 0x3B4720u) { return; }
    }
    ctx->pc = 0x3B4720u;
label_3b4720:
    // 0x3b4720: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x3b4720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b4724:
    // 0x3b4724: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x3b4724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3b4728:
    // 0x3b4728: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x3b4728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b472c:
    // 0x3b472c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x3b472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b4730:
    // 0x3b4730: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3b4730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3b4734:
    // 0x3b4734: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x3b4734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_3b4738:
    // 0x3b4738: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3b4738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3b473c:
    // 0x3b473c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x3b473cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3b4740:
    // 0x3b4740: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x3b4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3b4744:
    // 0x3b4744: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3b4744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3b4748:
    // 0x3b4748: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3b474c:
    if (ctx->pc == 0x3B474Cu) {
        ctx->pc = 0x3B474Cu;
            // 0x3b474c: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x3B4750u;
        goto label_3b4750;
    }
    ctx->pc = 0x3B4748u;
    {
        const bool branch_taken_0x3b4748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4748u;
            // 0x3b474c: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4748) {
            ctx->pc = 0x3B475Cu;
            goto label_3b475c;
        }
    }
    ctx->pc = 0x3B4750u;
label_3b4750:
    // 0x3b4750: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x3b4750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_3b4754:
    // 0x3b4754: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_3b4758:
    if (ctx->pc == 0x3B4758u) {
        ctx->pc = 0x3B475Cu;
        goto label_3b475c;
    }
    ctx->pc = 0x3B4754u;
    {
        const bool branch_taken_0x3b4754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4754) {
            ctx->pc = 0x3B4898u;
            goto label_3b4898;
        }
    }
    ctx->pc = 0x3B475Cu;
label_3b475c:
    // 0x3b475c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b4760:
    // 0x3b4760: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_3b4764:
    if (ctx->pc == 0x3B4764u) {
        ctx->pc = 0x3B4768u;
        goto label_3b4768;
    }
    ctx->pc = 0x3B4760u;
    {
        const bool branch_taken_0x3b4760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b4760) {
            ctx->pc = 0x3B4850u;
            goto label_3b4850;
        }
    }
    ctx->pc = 0x3B4768u;
label_3b4768:
    // 0x3b4768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b476c:
    // 0x3b476c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_3b4770:
    if (ctx->pc == 0x3B4770u) {
        ctx->pc = 0x3B4774u;
        goto label_3b4774;
    }
    ctx->pc = 0x3B476Cu;
    {
        const bool branch_taken_0x3b476c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b476c) {
            ctx->pc = 0x3B4808u;
            goto label_3b4808;
        }
    }
    ctx->pc = 0x3B4774u;
label_3b4774:
    // 0x3b4774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4778:
    // 0x3b4778: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_3b477c:
    if (ctx->pc == 0x3B477Cu) {
        ctx->pc = 0x3B4780u;
        goto label_3b4780;
    }
    ctx->pc = 0x3B4778u;
    {
        const bool branch_taken_0x3b4778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b4778) {
            ctx->pc = 0x3B47D0u;
            goto label_3b47d0;
        }
    }
    ctx->pc = 0x3B4780u;
label_3b4780:
    // 0x3b4780: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3b4784:
    if (ctx->pc == 0x3B4784u) {
        ctx->pc = 0x3B4788u;
        goto label_3b4788;
    }
    ctx->pc = 0x3B4780u;
    {
        const bool branch_taken_0x3b4780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4780) {
            ctx->pc = 0x3B4790u;
            goto label_3b4790;
        }
    }
    ctx->pc = 0x3B4788u;
label_3b4788:
    // 0x3b4788: 0x10000053  b           . + 4 + (0x53 << 2)
label_3b478c:
    if (ctx->pc == 0x3B478Cu) {
        ctx->pc = 0x3B4790u;
        goto label_3b4790;
    }
    ctx->pc = 0x3B4788u;
    {
        const bool branch_taken_0x3b4788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4788) {
            ctx->pc = 0x3B48D8u;
            goto label_3b48d8;
        }
    }
    ctx->pc = 0x3B4790u;
label_3b4790:
    // 0x3b4790: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b4794:
    // 0x3b4794: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b4794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4798:
    // 0x3b4798: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3b4798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3b479c:
    // 0x3b479c: 0xc0a7a88  jal         func_29EA20
label_3b47a0:
    if (ctx->pc == 0x3B47A0u) {
        ctx->pc = 0x3B47A0u;
            // 0x3b47a0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3B47A4u;
        goto label_3b47a4;
    }
    ctx->pc = 0x3B479Cu;
    SET_GPR_U32(ctx, 31, 0x3B47A4u);
    ctx->pc = 0x3B47A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B479Cu;
            // 0x3b47a0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47A4u; }
        if (ctx->pc != 0x3B47A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47A4u; }
        if (ctx->pc != 0x3B47A4u) { return; }
    }
    ctx->pc = 0x3B47A4u;
label_3b47a4:
    // 0x3b47a4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3b47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b47a8:
    // 0x3b47a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b47a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b47ac:
    // 0x3b47ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3b47b0:
    if (ctx->pc == 0x3B47B0u) {
        ctx->pc = 0x3B47B0u;
            // 0x3b47b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3B47B4u;
        goto label_3b47b4;
    }
    ctx->pc = 0x3B47ACu;
    {
        const bool branch_taken_0x3b47ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B47B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B47ACu;
            // 0x3b47b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47ac) {
            ctx->pc = 0x3B47C8u;
            goto label_3b47c8;
        }
    }
    ctx->pc = 0x3B47B4u;
label_3b47b4:
    // 0x3b47b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3b47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3b47b8:
    // 0x3b47b8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3b47b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b47bc:
    // 0x3b47bc: 0xc0804bc  jal         func_2012F0
label_3b47c0:
    if (ctx->pc == 0x3B47C0u) {
        ctx->pc = 0x3B47C0u;
            // 0x3b47c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3B47C4u;
        goto label_3b47c4;
    }
    ctx->pc = 0x3B47BCu;
    SET_GPR_U32(ctx, 31, 0x3B47C4u);
    ctx->pc = 0x3B47C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B47BCu;
            // 0x3b47c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47C4u; }
        if (ctx->pc != 0x3B47C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47C4u; }
        if (ctx->pc != 0x3B47C4u) { return; }
    }
    ctx->pc = 0x3B47C4u;
label_3b47c4:
    // 0x3b47c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b47c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b47c8:
    // 0x3b47c8: 0x10000043  b           . + 4 + (0x43 << 2)
label_3b47cc:
    if (ctx->pc == 0x3B47CCu) {
        ctx->pc = 0x3B47CCu;
            // 0x3b47cc: 0xae4400dc  sw          $a0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
        ctx->pc = 0x3B47D0u;
        goto label_3b47d0;
    }
    ctx->pc = 0x3B47C8u;
    {
        const bool branch_taken_0x3b47c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B47CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B47C8u;
            // 0x3b47cc: 0xae4400dc  sw          $a0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47c8) {
            ctx->pc = 0x3B48D8u;
            goto label_3b48d8;
        }
    }
    ctx->pc = 0x3B47D0u;
label_3b47d0:
    // 0x3b47d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b47d4:
    // 0x3b47d4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3b47d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b47d8:
    // 0x3b47d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3b47d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3b47dc:
    // 0x3b47dc: 0xc0a7a88  jal         func_29EA20
label_3b47e0:
    if (ctx->pc == 0x3B47E0u) {
        ctx->pc = 0x3B47E0u;
            // 0x3b47e0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3B47E4u;
        goto label_3b47e4;
    }
    ctx->pc = 0x3B47DCu;
    SET_GPR_U32(ctx, 31, 0x3B47E4u);
    ctx->pc = 0x3B47E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B47DCu;
            // 0x3b47e0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47E4u; }
        if (ctx->pc != 0x3B47E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47E4u; }
        if (ctx->pc != 0x3B47E4u) { return; }
    }
    ctx->pc = 0x3B47E4u;
label_3b47e4:
    // 0x3b47e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3b47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b47e8:
    // 0x3b47e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b47e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b47ec:
    // 0x3b47ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b47f0:
    if (ctx->pc == 0x3B47F0u) {
        ctx->pc = 0x3B47F0u;
            // 0x3b47f0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3B47F4u;
        goto label_3b47f4;
    }
    ctx->pc = 0x3B47ECu;
    {
        const bool branch_taken_0x3b47ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B47F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B47ECu;
            // 0x3b47f0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47ec) {
            ctx->pc = 0x3B4800u;
            goto label_3b4800;
        }
    }
    ctx->pc = 0x3B47F4u;
label_3b47f4:
    // 0x3b47f4: 0xc0827ac  jal         func_209EB0
label_3b47f8:
    if (ctx->pc == 0x3B47F8u) {
        ctx->pc = 0x3B47F8u;
            // 0x3b47f8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3B47FCu;
        goto label_3b47fc;
    }
    ctx->pc = 0x3B47F4u;
    SET_GPR_U32(ctx, 31, 0x3B47FCu);
    ctx->pc = 0x3B47F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B47F4u;
            // 0x3b47f8: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47FCu; }
        if (ctx->pc != 0x3B47FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B47FCu; }
        if (ctx->pc != 0x3B47FCu) { return; }
    }
    ctx->pc = 0x3B47FCu;
label_3b47fc:
    // 0x3b47fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b47fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4800:
    // 0x3b4800: 0x10000035  b           . + 4 + (0x35 << 2)
label_3b4804:
    if (ctx->pc == 0x3B4804u) {
        ctx->pc = 0x3B4804u;
            // 0x3b4804: 0xae4400dc  sw          $a0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
        ctx->pc = 0x3B4808u;
        goto label_3b4808;
    }
    ctx->pc = 0x3B4800u;
    {
        const bool branch_taken_0x3b4800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4800u;
            // 0x3b4804: 0xae4400dc  sw          $a0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4800) {
            ctx->pc = 0x3B48D8u;
            goto label_3b48d8;
        }
    }
    ctx->pc = 0x3B4808u;
label_3b4808:
    // 0x3b4808: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b480c:
    // 0x3b480c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b480cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4810:
    // 0x3b4810: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3b4810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3b4814:
    // 0x3b4814: 0xc0a7a88  jal         func_29EA20
label_3b4818:
    if (ctx->pc == 0x3B4818u) {
        ctx->pc = 0x3B4818u;
            // 0x3b4818: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3B481Cu;
        goto label_3b481c;
    }
    ctx->pc = 0x3B4814u;
    SET_GPR_U32(ctx, 31, 0x3B481Cu);
    ctx->pc = 0x3B4818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4814u;
            // 0x3b4818: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B481Cu; }
        if (ctx->pc != 0x3B481Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B481Cu; }
        if (ctx->pc != 0x3B481Cu) { return; }
    }
    ctx->pc = 0x3B481Cu;
label_3b481c:
    // 0x3b481c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3b481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4820:
    // 0x3b4820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b4820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4824:
    // 0x3b4824: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3b4828:
    if (ctx->pc == 0x3B4828u) {
        ctx->pc = 0x3B4828u;
            // 0x3b4828: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3B482Cu;
        goto label_3b482c;
    }
    ctx->pc = 0x3B4824u;
    {
        const bool branch_taken_0x3b4824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4824u;
            // 0x3b4828: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4824) {
            ctx->pc = 0x3B4840u;
            goto label_3b4840;
        }
    }
    ctx->pc = 0x3B482Cu;
label_3b482c:
    // 0x3b482c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3b482cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3b4830:
    // 0x3b4830: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3b4830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b4834:
    // 0x3b4834: 0xc0804bc  jal         func_2012F0
label_3b4838:
    if (ctx->pc == 0x3B4838u) {
        ctx->pc = 0x3B4838u;
            // 0x3b4838: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3B483Cu;
        goto label_3b483c;
    }
    ctx->pc = 0x3B4834u;
    SET_GPR_U32(ctx, 31, 0x3B483Cu);
    ctx->pc = 0x3B4838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4834u;
            // 0x3b4838: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B483Cu; }
        if (ctx->pc != 0x3B483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B483Cu; }
        if (ctx->pc != 0x3B483Cu) { return; }
    }
    ctx->pc = 0x3B483Cu;
label_3b483c:
    // 0x3b483c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4840:
    // 0x3b4840: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3b4840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3b4844:
    // 0x3b4844: 0xae4400dc  sw          $a0, 0xDC($s2)
    ctx->pc = 0x3b4844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
label_3b4848:
    // 0x3b4848: 0x10000023  b           . + 4 + (0x23 << 2)
label_3b484c:
    if (ctx->pc == 0x3B484Cu) {
        ctx->pc = 0x3B484Cu;
            // 0x3b484c: 0x34510040  ori         $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->pc = 0x3B4850u;
        goto label_3b4850;
    }
    ctx->pc = 0x3B4848u;
    {
        const bool branch_taken_0x3b4848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4848u;
            // 0x3b484c: 0x34510040  ori         $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4848) {
            ctx->pc = 0x3B48D8u;
            goto label_3b48d8;
        }
    }
    ctx->pc = 0x3B4850u;
label_3b4850:
    // 0x3b4850: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b4854:
    // 0x3b4854: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b4854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4858:
    // 0x3b4858: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3b4858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3b485c:
    // 0x3b485c: 0xc0a7a88  jal         func_29EA20
label_3b4860:
    if (ctx->pc == 0x3B4860u) {
        ctx->pc = 0x3B4860u;
            // 0x3b4860: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3B4864u;
        goto label_3b4864;
    }
    ctx->pc = 0x3B485Cu;
    SET_GPR_U32(ctx, 31, 0x3B4864u);
    ctx->pc = 0x3B4860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B485Cu;
            // 0x3b4860: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4864u; }
        if (ctx->pc != 0x3B4864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4864u; }
        if (ctx->pc != 0x3B4864u) { return; }
    }
    ctx->pc = 0x3B4864u;
label_3b4864:
    // 0x3b4864: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3b4864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b4868:
    // 0x3b4868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b4868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b486c:
    // 0x3b486c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3b4870:
    if (ctx->pc == 0x3B4870u) {
        ctx->pc = 0x3B4870u;
            // 0x3b4870: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3B4874u;
        goto label_3b4874;
    }
    ctx->pc = 0x3B486Cu;
    {
        const bool branch_taken_0x3b486c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B486Cu;
            // 0x3b4870: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b486c) {
            ctx->pc = 0x3B4888u;
            goto label_3b4888;
        }
    }
    ctx->pc = 0x3B4874u;
label_3b4874:
    // 0x3b4874: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3b4874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3b4878:
    // 0x3b4878: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3b4878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b487c:
    // 0x3b487c: 0xc0804bc  jal         func_2012F0
label_3b4880:
    if (ctx->pc == 0x3B4880u) {
        ctx->pc = 0x3B4880u;
            // 0x3b4880: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3B4884u;
        goto label_3b4884;
    }
    ctx->pc = 0x3B487Cu;
    SET_GPR_U32(ctx, 31, 0x3B4884u);
    ctx->pc = 0x3B4880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B487Cu;
            // 0x3b4880: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4884u; }
        if (ctx->pc != 0x3B4884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4884u; }
        if (ctx->pc != 0x3B4884u) { return; }
    }
    ctx->pc = 0x3B4884u;
label_3b4884:
    // 0x3b4884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b4884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4888:
    // 0x3b4888: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3b4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3b488c:
    // 0x3b488c: 0xae4400dc  sw          $a0, 0xDC($s2)
    ctx->pc = 0x3b488cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
label_3b4890:
    // 0x3b4890: 0x10000011  b           . + 4 + (0x11 << 2)
label_3b4894:
    if (ctx->pc == 0x3B4894u) {
        ctx->pc = 0x3B4894u;
            // 0x3b4894: 0x34510040  ori         $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->pc = 0x3B4898u;
        goto label_3b4898;
    }
    ctx->pc = 0x3B4890u;
    {
        const bool branch_taken_0x3b4890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4890u;
            // 0x3b4894: 0x34510040  ori         $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4890) {
            ctx->pc = 0x3B48D8u;
            goto label_3b48d8;
        }
    }
    ctx->pc = 0x3B4898u;
label_3b4898:
    // 0x3b4898: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b489c:
    // 0x3b489c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3b489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b48a0:
    // 0x3b48a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3b48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3b48a4:
    // 0x3b48a4: 0xc0a7a88  jal         func_29EA20
label_3b48a8:
    if (ctx->pc == 0x3B48A8u) {
        ctx->pc = 0x3B48A8u;
            // 0x3b48a8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3B48ACu;
        goto label_3b48ac;
    }
    ctx->pc = 0x3B48A4u;
    SET_GPR_U32(ctx, 31, 0x3B48ACu);
    ctx->pc = 0x3B48A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B48A4u;
            // 0x3b48a8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B48ACu; }
        if (ctx->pc != 0x3B48ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B48ACu; }
        if (ctx->pc != 0x3B48ACu) { return; }
    }
    ctx->pc = 0x3B48ACu;
label_3b48ac:
    // 0x3b48ac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3b48acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b48b0:
    // 0x3b48b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b48b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b48b4:
    // 0x3b48b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3b48b8:
    if (ctx->pc == 0x3B48B8u) {
        ctx->pc = 0x3B48B8u;
            // 0x3b48b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3B48BCu;
        goto label_3b48bc;
    }
    ctx->pc = 0x3B48B4u;
    {
        const bool branch_taken_0x3b48b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B48B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B48B4u;
            // 0x3b48b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b48b4) {
            ctx->pc = 0x3B48D0u;
            goto label_3b48d0;
        }
    }
    ctx->pc = 0x3B48BCu;
label_3b48bc:
    // 0x3b48bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3b48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3b48c0:
    // 0x3b48c0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3b48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b48c4:
    // 0x3b48c4: 0xc0804bc  jal         func_2012F0
label_3b48c8:
    if (ctx->pc == 0x3B48C8u) {
        ctx->pc = 0x3B48C8u;
            // 0x3b48c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3B48CCu;
        goto label_3b48cc;
    }
    ctx->pc = 0x3B48C4u;
    SET_GPR_U32(ctx, 31, 0x3B48CCu);
    ctx->pc = 0x3B48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B48C4u;
            // 0x3b48c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B48CCu; }
        if (ctx->pc != 0x3B48CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B48CCu; }
        if (ctx->pc != 0x3B48CCu) { return; }
    }
    ctx->pc = 0x3B48CCu;
label_3b48cc:
    // 0x3b48cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b48ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b48d0:
    // 0x3b48d0: 0xae4400dc  sw          $a0, 0xDC($s2)
    ctx->pc = 0x3b48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 4));
label_3b48d4:
    // 0x3b48d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b48d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b48d8:
    // 0x3b48d8: 0x5220006c  beql        $s1, $zero, . + 4 + (0x6C << 2)
label_3b48dc:
    if (ctx->pc == 0x3B48DCu) {
        ctx->pc = 0x3B48DCu;
            // 0x3b48dc: 0x8e4700dc  lw          $a3, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->pc = 0x3B48E0u;
        goto label_3b48e0;
    }
    ctx->pc = 0x3B48D8u;
    {
        const bool branch_taken_0x3b48d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b48d8) {
            ctx->pc = 0x3B48DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B48D8u;
            // 0x3b48dc: 0x8e4700dc  lw          $a3, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4A8Cu;
            goto label_3b4a8c;
        }
    }
    ctx->pc = 0x3B48E0u;
label_3b48e0:
    // 0x3b48e0: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x3b48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_3b48e4:
    // 0x3b48e4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3b48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3b48e8:
    // 0x3b48e8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x3b48e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3b48ec:
    // 0x3b48ec: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x3b48ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_3b48f0:
    // 0x3b48f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b48f4:
    // 0x3b48f4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x3b48f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3b48f8:
    // 0x3b48f8: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x3b48f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_3b48fc:
    // 0x3b48fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4900:
    // 0x3b4900: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3b4900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b4904:
    // 0x3b4904: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3b4904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3b4908:
    // 0x3b4908: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3b4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b490c:
    // 0x3b490c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3b490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3b4910:
    // 0x3b4910: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3b4910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b4914:
    // 0x3b4914: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3b4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3b4918:
    // 0x3b4918: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3b4918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3b491c:
    // 0x3b491c: 0xafa90158  sw          $t1, 0x158($sp)
    ctx->pc = 0x3b491cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 9));
label_3b4920:
    // 0x3b4920: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x3b4920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3b4924:
    // 0x3b4924: 0xa3a80160  sb          $t0, 0x160($sp)
    ctx->pc = 0x3b4924u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 8));
label_3b4928:
    // 0x3b4928: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x3b4928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3b492c:
    // 0x3b492c: 0xafa7015c  sw          $a3, 0x15C($sp)
    ctx->pc = 0x3b492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 7));
label_3b4930:
    // 0x3b4930: 0xa3a30162  sb          $v1, 0x162($sp)
    ctx->pc = 0x3b4930u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 354), (uint8_t)GPR_U32(ctx, 3));
label_3b4934:
    // 0x3b4934: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x3b4934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
label_3b4938:
    // 0x3b4938: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3b4938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_3b493c:
    // 0x3b493c: 0xc0a7a88  jal         func_29EA20
label_3b4940:
    if (ctx->pc == 0x3B4940u) {
        ctx->pc = 0x3B4940u;
            // 0x3b4940: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x3B4944u;
        goto label_3b4944;
    }
    ctx->pc = 0x3B493Cu;
    SET_GPR_U32(ctx, 31, 0x3B4944u);
    ctx->pc = 0x3B4940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B493Cu;
            // 0x3b4940: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4944u; }
        if (ctx->pc != 0x3B4944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4944u; }
        if (ctx->pc != 0x3B4944u) { return; }
    }
    ctx->pc = 0x3B4944u;
label_3b4944:
    // 0x3b4944: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3b4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3b4948:
    // 0x3b4948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b494c:
    // 0x3b494c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3b4950:
    if (ctx->pc == 0x3B4950u) {
        ctx->pc = 0x3B4950u;
            // 0x3b4950: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3B4954u;
        goto label_3b4954;
    }
    ctx->pc = 0x3B494Cu;
    {
        const bool branch_taken_0x3b494c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B494Cu;
            // 0x3b4950: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b494c) {
            ctx->pc = 0x3B499Cu;
            goto label_3b499c;
        }
    }
    ctx->pc = 0x3B4954u;
label_3b4954:
    // 0x3b4954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4958:
    // 0x3b4958: 0xc088ef4  jal         func_223BD0
label_3b495c:
    if (ctx->pc == 0x3B495Cu) {
        ctx->pc = 0x3B495Cu;
            // 0x3b495c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3B4960u;
        goto label_3b4960;
    }
    ctx->pc = 0x3B4958u;
    SET_GPR_U32(ctx, 31, 0x3B4960u);
    ctx->pc = 0x3B495Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4958u;
            // 0x3b495c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4960u; }
        if (ctx->pc != 0x3B4960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4960u; }
        if (ctx->pc != 0x3B4960u) { return; }
    }
    ctx->pc = 0x3B4960u;
label_3b4960:
    // 0x3b4960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b4964:
    // 0x3b4964: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3b4964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3b4968:
    // 0x3b4968: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3b4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3b496c:
    // 0x3b496c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3b496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3b4970:
    // 0x3b4970: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b4970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b4974:
    // 0x3b4974: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3b4974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3b4978:
    // 0x3b4978: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b497c:
    // 0x3b497c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b497cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3b4980:
    // 0x3b4980: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3b4980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3b4984:
    // 0x3b4984: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3b4984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3b4988:
    // 0x3b4988: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x3b4988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_3b498c:
    // 0x3b498c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3b498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3b4990:
    // 0x3b4990: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3b4990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3b4994:
    // 0x3b4994: 0xc088b38  jal         func_222CE0
label_3b4998:
    if (ctx->pc == 0x3B4998u) {
        ctx->pc = 0x3B4998u;
            // 0x3b4998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B499Cu;
        goto label_3b499c;
    }
    ctx->pc = 0x3B4994u;
    SET_GPR_U32(ctx, 31, 0x3B499Cu);
    ctx->pc = 0x3B4998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4994u;
            // 0x3b4998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B499Cu; }
        if (ctx->pc != 0x3B499Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B499Cu; }
        if (ctx->pc != 0x3B499Cu) { return; }
    }
    ctx->pc = 0x3B499Cu;
label_3b499c:
    // 0x3b499c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3b499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3b49a0:
    // 0x3b49a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b49a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b49a4:
    // 0x3b49a4: 0x24425f30  addiu       $v0, $v0, 0x5F30
    ctx->pc = 0x3b49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
label_3b49a8:
    // 0x3b49a8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b49a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b49ac:
    // 0x3b49ac: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x3b49acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_3b49b0:
    // 0x3b49b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b49b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b49b4:
    // 0x3b49b4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3b49b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b49b8:
    // 0x3b49b8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3b49b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b49bc:
    // 0x3b49bc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3b49bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b49c0:
    // 0x3b49c0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3b49c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3b49c4:
    // 0x3b49c4: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3b49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3b49c8:
    // 0x3b49c8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3b49c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3b49cc:
    // 0x3b49cc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x3b49ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3b49d0:
    // 0x3b49d0: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3b49d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b49d4:
    // 0x3b49d4: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x3b49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b49d8:
    // 0x3b49d8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3b49d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b49dc:
    // 0x3b49dc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3b49dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b49e0:
    // 0x3b49e0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3b49e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3b49e4:
    // 0x3b49e4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3b49e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3b49e8:
    // 0x3b49e8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x3b49e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3b49ec:
    // 0x3b49ec: 0xc0892b0  jal         func_224AC0
label_3b49f0:
    if (ctx->pc == 0x3B49F0u) {
        ctx->pc = 0x3B49F0u;
            // 0x3b49f0: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x3B49F4u;
        goto label_3b49f4;
    }
    ctx->pc = 0x3B49ECu;
    SET_GPR_U32(ctx, 31, 0x3B49F4u);
    ctx->pc = 0x3B49F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B49ECu;
            // 0x3b49f0: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B49F4u; }
        if (ctx->pc != 0x3B49F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B49F4u; }
        if (ctx->pc != 0x3B49F4u) { return; }
    }
    ctx->pc = 0x3B49F4u;
label_3b49f4:
    // 0x3b49f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b49f8:
    // 0x3b49f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b49f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b49fc:
    // 0x3b49fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3b49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3b4a00:
    // 0x3b4a00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b4a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b4a04:
    // 0x3b4a04: 0xc08c164  jal         func_230590
label_3b4a08:
    if (ctx->pc == 0x3B4A08u) {
        ctx->pc = 0x3B4A08u;
            // 0x3b4a08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B4A0Cu;
        goto label_3b4a0c;
    }
    ctx->pc = 0x3B4A04u;
    SET_GPR_U32(ctx, 31, 0x3B4A0Cu);
    ctx->pc = 0x3B4A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4A04u;
            // 0x3b4a08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A0Cu; }
        if (ctx->pc != 0x3B4A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A0Cu; }
        if (ctx->pc != 0x3B4A0Cu) { return; }
    }
    ctx->pc = 0x3B4A0Cu;
label_3b4a0c:
    // 0x3b4a0c: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x3b4a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_3b4a10:
    // 0x3b4a10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b4a14:
    // 0x3b4a14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3b4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3b4a18:
    // 0x3b4a18: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3b4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3b4a1c:
    // 0x3b4a1c: 0xc0a7a88  jal         func_29EA20
label_3b4a20:
    if (ctx->pc == 0x3B4A20u) {
        ctx->pc = 0x3B4A20u;
            // 0x3b4a20: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3B4A24u;
        goto label_3b4a24;
    }
    ctx->pc = 0x3B4A1Cu;
    SET_GPR_U32(ctx, 31, 0x3B4A24u);
    ctx->pc = 0x3B4A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4A1Cu;
            // 0x3b4a20: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A24u; }
        if (ctx->pc != 0x3B4A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A24u; }
        if (ctx->pc != 0x3B4A24u) { return; }
    }
    ctx->pc = 0x3B4A24u;
label_3b4a24:
    // 0x3b4a24: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3b4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3b4a28:
    // 0x3b4a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b4a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a2c:
    // 0x3b4a2c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3b4a30:
    if (ctx->pc == 0x3B4A30u) {
        ctx->pc = 0x3B4A30u;
            // 0x3b4a30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3B4A34u;
        goto label_3b4a34;
    }
    ctx->pc = 0x3B4A2Cu;
    {
        const bool branch_taken_0x3b4a2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4A2Cu;
            // 0x3b4a30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a2c) {
            ctx->pc = 0x3B4A50u;
            goto label_3b4a50;
        }
    }
    ctx->pc = 0x3B4A34u;
label_3b4a34:
    // 0x3b4a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a38:
    // 0x3b4a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b4a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a3c:
    // 0x3b4a3c: 0xc0869d0  jal         func_21A740
label_3b4a40:
    if (ctx->pc == 0x3B4A40u) {
        ctx->pc = 0x3B4A40u;
            // 0x3b4a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A44u;
        goto label_3b4a44;
    }
    ctx->pc = 0x3B4A3Cu;
    SET_GPR_U32(ctx, 31, 0x3B4A44u);
    ctx->pc = 0x3B4A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4A3Cu;
            // 0x3b4a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A44u; }
        if (ctx->pc != 0x3B4A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A44u; }
        if (ctx->pc != 0x3B4A44u) { return; }
    }
    ctx->pc = 0x3B4A44u;
label_3b4a44:
    // 0x3b4a44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b4a48:
    // 0x3b4a48: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3b4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3b4a4c:
    // 0x3b4a4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3b4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3b4a50:
    // 0x3b4a50: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x3b4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_3b4a54:
    // 0x3b4a54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b4a58:
    // 0x3b4a58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3b4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3b4a5c:
    // 0x3b4a5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b4a60:
    // 0x3b4a60: 0xc08c650  jal         func_231940
label_3b4a64:
    if (ctx->pc == 0x3B4A64u) {
        ctx->pc = 0x3B4A64u;
            // 0x3b4a64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A68u;
        goto label_3b4a68;
    }
    ctx->pc = 0x3B4A60u;
    SET_GPR_U32(ctx, 31, 0x3B4A68u);
    ctx->pc = 0x3B4A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4A60u;
            // 0x3b4a64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A68u; }
        if (ctx->pc != 0x3B4A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A68u; }
        if (ctx->pc != 0x3B4A68u) { return; }
    }
    ctx->pc = 0x3B4A68u;
label_3b4a68:
    // 0x3b4a68: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x3b4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3b4a6c:
    // 0x3b4a6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b4a70:
    // 0x3b4a70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3b4a74:
    if (ctx->pc == 0x3B4A74u) {
        ctx->pc = 0x3B4A78u;
        goto label_3b4a78;
    }
    ctx->pc = 0x3B4A70u;
    {
        const bool branch_taken_0x3b4a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b4a70) {
            ctx->pc = 0x3B4A88u;
            goto label_3b4a88;
        }
    }
    ctx->pc = 0x3B4A78u;
label_3b4a78:
    // 0x3b4a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a7c:
    // 0x3b4a7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b4a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4a80:
    // 0x3b4a80: 0xc08d37c  jal         func_234DF0
label_3b4a84:
    if (ctx->pc == 0x3B4A84u) {
        ctx->pc = 0x3B4A84u;
            // 0x3b4a84: 0x24050848  addiu       $a1, $zero, 0x848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
        ctx->pc = 0x3B4A88u;
        goto label_3b4a88;
    }
    ctx->pc = 0x3B4A80u;
    SET_GPR_U32(ctx, 31, 0x3B4A88u);
    ctx->pc = 0x3B4A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4A80u;
            // 0x3b4a84: 0x24050848  addiu       $a1, $zero, 0x848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234DF0u;
    if (runtime->hasFunction(0x234DF0u)) {
        auto targetFn = runtime->lookupFunction(0x234DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A88u; }
        if (ctx->pc != 0x3B4A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234DF0_0x234df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A88u; }
        if (ctx->pc != 0x3B4A88u) { return; }
    }
    ctx->pc = 0x3B4A88u;
label_3b4a88:
    // 0x3b4a88: 0x8e4700dc  lw          $a3, 0xDC($s2)
    ctx->pc = 0x3b4a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_3b4a8c:
    // 0x3b4a8c: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x3b4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_3b4a90:
    // 0x3b4a90: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3b4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3b4a94:
    // 0x3b4a94: 0xc0d37ec  jal         func_34DFB0
label_3b4a98:
    if (ctx->pc == 0x3B4A98u) {
        ctx->pc = 0x3B4A98u;
            // 0x3b4a98: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x3B4A9Cu;
        goto label_3b4a9c;
    }
    ctx->pc = 0x3B4A94u;
    SET_GPR_U32(ctx, 31, 0x3B4A9Cu);
    ctx->pc = 0x3B4A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4A94u;
            // 0x3b4a98: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A9Cu; }
        if (ctx->pc != 0x3B4A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4A9Cu; }
        if (ctx->pc != 0x3B4A9Cu) { return; }
    }
    ctx->pc = 0x3B4A9Cu;
label_3b4a9c:
    // 0x3b4a9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3b4a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b4aa0:
    // 0x3b4aa0: 0xc04f278  jal         func_13C9E0
label_3b4aa4:
    if (ctx->pc == 0x3B4AA4u) {
        ctx->pc = 0x3B4AA4u;
            // 0x3b4aa4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x3B4AA8u;
        goto label_3b4aa8;
    }
    ctx->pc = 0x3B4AA0u;
    SET_GPR_U32(ctx, 31, 0x3B4AA8u);
    ctx->pc = 0x3B4AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4AA0u;
            // 0x3b4aa4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4AA8u; }
        if (ctx->pc != 0x3B4AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4AA8u; }
        if (ctx->pc != 0x3B4AA8u) { return; }
    }
    ctx->pc = 0x3B4AA8u;
label_3b4aa8:
    // 0x3b4aa8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b4aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3b4aac:
    // 0x3b4aac: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x3b4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_3b4ab0:
    // 0x3b4ab0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3b4ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b4ab4:
    // 0x3b4ab4: 0xc04cca0  jal         func_133280
label_3b4ab8:
    if (ctx->pc == 0x3B4AB8u) {
        ctx->pc = 0x3B4AB8u;
            // 0x3b4ab8: 0x24c680f0  addiu       $a2, $a2, -0x7F10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934768));
        ctx->pc = 0x3B4ABCu;
        goto label_3b4abc;
    }
    ctx->pc = 0x3B4AB4u;
    SET_GPR_U32(ctx, 31, 0x3B4ABCu);
    ctx->pc = 0x3B4AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4AB4u;
            // 0x3b4ab8: 0x24c680f0  addiu       $a2, $a2, -0x7F10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4ABCu; }
        if (ctx->pc != 0x3B4ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4ABCu; }
        if (ctx->pc != 0x3B4ABCu) { return; }
    }
    ctx->pc = 0x3B4ABCu;
label_3b4abc:
    // 0x3b4abc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3b4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b4ac0:
    // 0x3b4ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4ac4:
    // 0x3b4ac4: 0xae4400b0  sw          $a0, 0xB0($s2)
    ctx->pc = 0x3b4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 4));
label_3b4ac8:
    // 0x3b4ac8: 0xa2430064  sb          $v1, 0x64($s2)
    ctx->pc = 0x3b4ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 3));
label_3b4acc:
    // 0x3b4acc: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x3b4accu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_3b4ad0:
    // 0x3b4ad0: 0xa2430066  sb          $v1, 0x66($s2)
    ctx->pc = 0x3b4ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 3));
label_3b4ad4:
    // 0x3b4ad4: 0xa2400067  sb          $zero, 0x67($s2)
    ctx->pc = 0x3b4ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 0));
label_3b4ad8:
    // 0x3b4ad8: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x3b4ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_3b4adc:
    // 0x3b4adc: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x3b4adcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_3b4ae0:
    // 0x3b4ae0: 0xa243006a  sb          $v1, 0x6A($s2)
    ctx->pc = 0x3b4ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 3));
label_3b4ae4:
    // 0x3b4ae4: 0xa240006b  sb          $zero, 0x6B($s2)
    ctx->pc = 0x3b4ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
label_3b4ae8:
    // 0x3b4ae8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b4ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4aec:
    // 0x3b4aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b4aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4af0:
    // 0x3b4af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4af4:
    // 0x3b4af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4af8:
    // 0x3b4af8: 0x3e00008  jr          $ra
label_3b4afc:
    if (ctx->pc == 0x3B4AFCu) {
        ctx->pc = 0x3B4AFCu;
            // 0x3b4afc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3B4B00u;
        goto label_3b4b00;
    }
    ctx->pc = 0x3B4AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4AF8u;
            // 0x3b4afc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4B00u;
label_3b4b00:
    // 0x3b4b00: 0x3e00008  jr          $ra
label_3b4b04:
    if (ctx->pc == 0x3B4B04u) {
        ctx->pc = 0x3B4B08u;
        goto label_3b4b08;
    }
    ctx->pc = 0x3B4B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4B08u;
label_3b4b08:
    // 0x3b4b08: 0x0  nop
    ctx->pc = 0x3b4b08u;
    // NOP
label_3b4b0c:
    // 0x3b4b0c: 0x0  nop
    ctx->pc = 0x3b4b0cu;
    // NOP
label_3b4b10:
    // 0x3b4b10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3b4b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3b4b14:
    // 0x3b4b14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b4b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b4b18:
    // 0x3b4b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b4b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b4b1c:
    // 0x3b4b1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b4b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b4b20:
    // 0x3b4b20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b4b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b24:
    // 0x3b4b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4b28:
    // 0x3b4b28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b4b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b2c:
    // 0x3b4b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b4b30:
    // 0x3b4b30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b4b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b34:
    // 0x3b4b34: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3b4b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3b4b38:
    // 0x3b4b38: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3b4b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3b4b3c:
    // 0x3b4b3c: 0xc04f278  jal         func_13C9E0
label_3b4b40:
    if (ctx->pc == 0x3B4B40u) {
        ctx->pc = 0x3B4B40u;
            // 0x3b4b40: 0x26700030  addiu       $s0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x3B4B44u;
        goto label_3b4b44;
    }
    ctx->pc = 0x3B4B3Cu;
    SET_GPR_U32(ctx, 31, 0x3B4B44u);
    ctx->pc = 0x3B4B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B3Cu;
            // 0x3b4b40: 0x26700030  addiu       $s0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B44u; }
        if (ctx->pc != 0x3B4B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B44u; }
        if (ctx->pc != 0x3B4B44u) { return; }
    }
    ctx->pc = 0x3B4B44u;
label_3b4b44:
    // 0x3b4b44: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x3b4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b4b48:
    // 0x3b4b48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b4b4c:
    // 0x3b4b4c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x3b4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b4b50:
    // 0x3b4b50: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x3b4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3b4b54:
    // 0x3b4b54: 0xc04ce50  jal         func_133940
label_3b4b58:
    if (ctx->pc == 0x3B4B58u) {
        ctx->pc = 0x3B4B58u;
            // 0x3b4b58: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3B4B5Cu;
        goto label_3b4b5c;
    }
    ctx->pc = 0x3B4B54u;
    SET_GPR_U32(ctx, 31, 0x3B4B5Cu);
    ctx->pc = 0x3B4B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B54u;
            // 0x3b4b58: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B5Cu; }
        if (ctx->pc != 0x3B4B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B5Cu; }
        if (ctx->pc != 0x3B4B5Cu) { return; }
    }
    ctx->pc = 0x3B4B5Cu;
label_3b4b5c:
    // 0x3b4b5c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b4b60:
    // 0x3b4b60: 0xc04ce80  jal         func_133A00
label_3b4b64:
    if (ctx->pc == 0x3B4B64u) {
        ctx->pc = 0x3B4B64u;
            // 0x3b4b64: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x3B4B68u;
        goto label_3b4b68;
    }
    ctx->pc = 0x3B4B60u;
    SET_GPR_U32(ctx, 31, 0x3B4B68u);
    ctx->pc = 0x3B4B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B60u;
            // 0x3b4b64: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B68u; }
        if (ctx->pc != 0x3B4B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B68u; }
        if (ctx->pc != 0x3B4B68u) { return; }
    }
    ctx->pc = 0x3B4B68u;
label_3b4b68:
    // 0x3b4b68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3b4b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b4b6c:
    // 0x3b4b6c: 0xc04ccf4  jal         func_1333D0
label_3b4b70:
    if (ctx->pc == 0x3B4B70u) {
        ctx->pc = 0x3B4B70u;
            // 0x3b4b70: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3B4B74u;
        goto label_3b4b74;
    }
    ctx->pc = 0x3B4B6Cu;
    SET_GPR_U32(ctx, 31, 0x3B4B74u);
    ctx->pc = 0x3B4B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B6Cu;
            // 0x3b4b70: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B74u; }
        if (ctx->pc != 0x3B4B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B74u; }
        if (ctx->pc != 0x3B4B74u) { return; }
    }
    ctx->pc = 0x3B4B74u;
label_3b4b74:
    // 0x3b4b74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3b4b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b4b78:
    // 0x3b4b78: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3b4b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3b4b7c:
    // 0x3b4b7c: 0xc04cca0  jal         func_133280
label_3b4b80:
    if (ctx->pc == 0x3B4B80u) {
        ctx->pc = 0x3B4B80u;
            // 0x3b4b80: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x3B4B84u;
        goto label_3b4b84;
    }
    ctx->pc = 0x3B4B7Cu;
    SET_GPR_U32(ctx, 31, 0x3B4B84u);
    ctx->pc = 0x3B4B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B7Cu;
            // 0x3b4b80: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B84u; }
        if (ctx->pc != 0x3B4B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B84u; }
        if (ctx->pc != 0x3B4B84u) { return; }
    }
    ctx->pc = 0x3B4B84u;
label_3b4b84:
    // 0x3b4b84: 0xc049514  jal         func_125450
label_3b4b88:
    if (ctx->pc == 0x3B4B88u) {
        ctx->pc = 0x3B4B88u;
            // 0x3b4b88: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3B4B8Cu;
        goto label_3b4b8c;
    }
    ctx->pc = 0x3B4B84u;
    SET_GPR_U32(ctx, 31, 0x3B4B8Cu);
    ctx->pc = 0x3B4B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B84u;
            // 0x3b4b88: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B8Cu; }
        if (ctx->pc != 0x3B4B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B8Cu; }
        if (ctx->pc != 0x3B4B8Cu) { return; }
    }
    ctx->pc = 0x3B4B8Cu;
label_3b4b8c:
    // 0x3b4b8c: 0xc0474b6  jal         func_11D2D8
label_3b4b90:
    if (ctx->pc == 0x3B4B90u) {
        ctx->pc = 0x3B4B90u;
            // 0x3b4b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B94u;
        goto label_3b4b94;
    }
    ctx->pc = 0x3B4B8Cu;
    SET_GPR_U32(ctx, 31, 0x3B4B94u);
    ctx->pc = 0x3B4B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B8Cu;
            // 0x3b4b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B94u; }
        if (ctx->pc != 0x3B4B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4B94u; }
        if (ctx->pc != 0x3B4B94u) { return; }
    }
    ctx->pc = 0x3B4B94u;
label_3b4b94:
    // 0x3b4b94: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x3b4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_3b4b98:
    // 0x3b4b98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b4b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b9c:
    // 0x3b4b9c: 0xc040220  jal         func_100880
label_3b4ba0:
    if (ctx->pc == 0x3B4BA0u) {
        ctx->pc = 0x3B4BA0u;
            // 0x3b4ba0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x3B4BA4u;
        goto label_3b4ba4;
    }
    ctx->pc = 0x3B4B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B4BA4u);
    ctx->pc = 0x3B4BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4B9Cu;
            // 0x3b4ba0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (runtime->hasFunction(0x100880u)) {
        auto targetFn = runtime->lookupFunction(0x100880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BA4u; }
        if (ctx->pc != 0x3B4BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100880_0x100880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BA4u; }
        if (ctx->pc != 0x3B4BA4u) { return; }
    }
    ctx->pc = 0x3B4BA4u;
label_3b4ba4:
    // 0x3b4ba4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3b4ba8:
    if (ctx->pc == 0x3B4BA8u) {
        ctx->pc = 0x3B4BA8u;
            // 0x3b4ba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BACu;
        goto label_3b4bac;
    }
    ctx->pc = 0x3B4BA4u;
    {
        const bool branch_taken_0x3b4ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4ba4) {
            ctx->pc = 0x3B4BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BA4u;
            // 0x3b4ba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4C00u;
            goto label_3b4c00;
        }
    }
    ctx->pc = 0x3B4BACu;
label_3b4bac:
    // 0x3b4bac: 0xc049514  jal         func_125450
label_3b4bb0:
    if (ctx->pc == 0x3B4BB0u) {
        ctx->pc = 0x3B4BB0u;
            // 0x3b4bb0: 0xc7ac0054  lwc1        $f12, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3B4BB4u;
        goto label_3b4bb4;
    }
    ctx->pc = 0x3B4BACu;
    SET_GPR_U32(ctx, 31, 0x3B4BB4u);
    ctx->pc = 0x3B4BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BACu;
            // 0x3b4bb0: 0xc7ac0054  lwc1        $f12, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BB4u; }
        if (ctx->pc != 0x3B4BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BB4u; }
        if (ctx->pc != 0x3B4BB4u) { return; }
    }
    ctx->pc = 0x3B4BB4u;
label_3b4bb4:
    // 0x3b4bb4: 0xc0474b6  jal         func_11D2D8
label_3b4bb8:
    if (ctx->pc == 0x3B4BB8u) {
        ctx->pc = 0x3B4BB8u;
            // 0x3b4bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BBCu;
        goto label_3b4bbc;
    }
    ctx->pc = 0x3B4BB4u;
    SET_GPR_U32(ctx, 31, 0x3B4BBCu);
    ctx->pc = 0x3B4BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BB4u;
            // 0x3b4bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BBCu; }
        if (ctx->pc != 0x3B4BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BBCu; }
        if (ctx->pc != 0x3B4BBCu) { return; }
    }
    ctx->pc = 0x3B4BBCu;
label_3b4bbc:
    // 0x3b4bbc: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x3b4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_3b4bc0:
    // 0x3b4bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bc4:
    // 0x3b4bc4: 0xc040220  jal         func_100880
label_3b4bc8:
    if (ctx->pc == 0x3B4BC8u) {
        ctx->pc = 0x3B4BC8u;
            // 0x3b4bc8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x3B4BCCu;
        goto label_3b4bcc;
    }
    ctx->pc = 0x3B4BC4u;
    SET_GPR_U32(ctx, 31, 0x3B4BCCu);
    ctx->pc = 0x3B4BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BC4u;
            // 0x3b4bc8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (runtime->hasFunction(0x100880u)) {
        auto targetFn = runtime->lookupFunction(0x100880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BCCu; }
        if (ctx->pc != 0x3B4BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100880_0x100880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BCCu; }
        if (ctx->pc != 0x3B4BCCu) { return; }
    }
    ctx->pc = 0x3B4BCCu;
label_3b4bcc:
    // 0x3b4bcc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3b4bd0:
    if (ctx->pc == 0x3B4BD0u) {
        ctx->pc = 0x3B4BD4u;
        goto label_3b4bd4;
    }
    ctx->pc = 0x3B4BCCu;
    {
        const bool branch_taken_0x3b4bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4bcc) {
            ctx->pc = 0x3B4BFCu;
            goto label_3b4bfc;
        }
    }
    ctx->pc = 0x3B4BD4u;
label_3b4bd4:
    // 0x3b4bd4: 0xc049514  jal         func_125450
label_3b4bd8:
    if (ctx->pc == 0x3B4BD8u) {
        ctx->pc = 0x3B4BD8u;
            // 0x3b4bd8: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3B4BDCu;
        goto label_3b4bdc;
    }
    ctx->pc = 0x3B4BD4u;
    SET_GPR_U32(ctx, 31, 0x3B4BDCu);
    ctx->pc = 0x3B4BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BD4u;
            // 0x3b4bd8: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BDCu; }
        if (ctx->pc != 0x3B4BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BDCu; }
        if (ctx->pc != 0x3B4BDCu) { return; }
    }
    ctx->pc = 0x3B4BDCu;
label_3b4bdc:
    // 0x3b4bdc: 0xc0474b6  jal         func_11D2D8
label_3b4be0:
    if (ctx->pc == 0x3B4BE0u) {
        ctx->pc = 0x3B4BE0u;
            // 0x3b4be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BE4u;
        goto label_3b4be4;
    }
    ctx->pc = 0x3B4BDCu;
    SET_GPR_U32(ctx, 31, 0x3B4BE4u);
    ctx->pc = 0x3B4BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BDCu;
            // 0x3b4be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BE4u; }
        if (ctx->pc != 0x3B4BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BE4u; }
        if (ctx->pc != 0x3B4BE4u) { return; }
    }
    ctx->pc = 0x3B4BE4u;
label_3b4be4:
    // 0x3b4be4: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x3b4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_3b4be8:
    // 0x3b4be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b4be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4bec:
    // 0x3b4bec: 0xc040220  jal         func_100880
label_3b4bf0:
    if (ctx->pc == 0x3B4BF0u) {
        ctx->pc = 0x3B4BF0u;
            // 0x3b4bf0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x3B4BF4u;
        goto label_3b4bf4;
    }
    ctx->pc = 0x3B4BECu;
    SET_GPR_U32(ctx, 31, 0x3B4BF4u);
    ctx->pc = 0x3B4BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BECu;
            // 0x3b4bf0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (runtime->hasFunction(0x100880u)) {
        auto targetFn = runtime->lookupFunction(0x100880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BF4u; }
        if (ctx->pc != 0x3B4BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100880_0x100880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4BF4u; }
        if (ctx->pc != 0x3B4BF4u) { return; }
    }
    ctx->pc = 0x3B4BF4u;
label_3b4bf4:
    // 0x3b4bf4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3b4bf8:
    if (ctx->pc == 0x3B4BF8u) {
        ctx->pc = 0x3B4BF8u;
            // 0x3b4bf8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3B4BFCu;
        goto label_3b4bfc;
    }
    ctx->pc = 0x3B4BF4u;
    {
        const bool branch_taken_0x3b4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4bf4) {
            ctx->pc = 0x3B4BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4BF4u;
            // 0x3b4bf8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4C10u;
            goto label_3b4c10;
        }
    }
    ctx->pc = 0x3B4BFCu;
label_3b4bfc:
    // 0x3b4bfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b4bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c00:
    // 0x3b4c00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b4c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c04:
    // 0x3b4c04: 0xc0e34b0  jal         func_38D2C0
label_3b4c08:
    if (ctx->pc == 0x3B4C08u) {
        ctx->pc = 0x3B4C08u;
            // 0x3b4c08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C0Cu;
        goto label_3b4c0c;
    }
    ctx->pc = 0x3B4C04u;
    SET_GPR_U32(ctx, 31, 0x3B4C0Cu);
    ctx->pc = 0x3B4C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4C04u;
            // 0x3b4c08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4C0Cu; }
        if (ctx->pc != 0x3B4C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4C0Cu; }
        if (ctx->pc != 0x3B4C0Cu) { return; }
    }
    ctx->pc = 0x3B4C0Cu;
label_3b4c0c:
    // 0x3b4c0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b4c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b4c10:
    // 0x3b4c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b4c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4c14:
    // 0x3b4c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b4c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4c18:
    // 0x3b4c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4c1c:
    // 0x3b4c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4c20:
    // 0x3b4c20: 0x3e00008  jr          $ra
label_3b4c24:
    if (ctx->pc == 0x3B4C24u) {
        ctx->pc = 0x3B4C24u;
            // 0x3b4c24: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3B4C28u;
        goto label_3b4c28;
    }
    ctx->pc = 0x3B4C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4C20u;
            // 0x3b4c24: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4C28u;
label_3b4c28:
    // 0x3b4c28: 0x0  nop
    ctx->pc = 0x3b4c28u;
    // NOP
label_3b4c2c:
    // 0x3b4c2c: 0x0  nop
    ctx->pc = 0x3b4c2cu;
    // NOP
label_3b4c30:
    // 0x3b4c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b4c34:
    // 0x3b4c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b4c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3b4c38:
    // 0x3b4c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4c3c:
    // 0x3b4c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b4c40:
    // 0x3b4c40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3b4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b4c44:
    // 0x3b4c44: 0x8cd00d60  lw          $s0, 0xD60($a2)
    ctx->pc = 0x3b4c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3424)));
label_3b4c48:
    // 0x3b4c48: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3b4c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3b4c4c:
    // 0x3b4c4c: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x3b4c4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3b4c50:
    // 0x3b4c50: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3b4c54:
    if (ctx->pc == 0x3B4C54u) {
        ctx->pc = 0x3B4C54u;
            // 0x3b4c54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C58u;
        goto label_3b4c58;
    }
    ctx->pc = 0x3B4C50u;
    {
        const bool branch_taken_0x3b4c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4C50u;
            // 0x3b4c54: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c50) {
            ctx->pc = 0x3B4C64u;
            goto label_3b4c64;
        }
    }
    ctx->pc = 0x3B4C58u;
label_3b4c58:
    // 0x3b4c58: 0x2c830029  sltiu       $v1, $a0, 0x29
    ctx->pc = 0x3b4c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_3b4c5c:
    // 0x3b4c5c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_3b4c60:
    if (ctx->pc == 0x3B4C60u) {
        ctx->pc = 0x3B4C60u;
            // 0x3b4c60: 0x2485fff6  addiu       $a1, $a0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
        ctx->pc = 0x3B4C64u;
        goto label_3b4c64;
    }
    ctx->pc = 0x3B4C5Cu;
    {
        const bool branch_taken_0x3b4c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4c5c) {
            ctx->pc = 0x3B4C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4C5Cu;
            // 0x3b4c60: 0x2485fff6  addiu       $a1, $a0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4C9Cu;
            goto label_3b4c9c;
        }
    }
    ctx->pc = 0x3B4C64u;
label_3b4c64:
    // 0x3b4c64: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x3b4c64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3b4c68:
    // 0x3b4c68: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_3b4c6c:
    if (ctx->pc == 0x3B4C6Cu) {
        ctx->pc = 0x3B4C6Cu;
            // 0x3b4c6c: 0x802026  xor         $a0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C70u;
        goto label_3b4c70;
    }
    ctx->pc = 0x3B4C68u;
    {
        const bool branch_taken_0x3b4c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4c68) {
            ctx->pc = 0x3B4C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4C68u;
            // 0x3b4c6c: 0x802026  xor         $a0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4C78u;
            goto label_3b4c78;
        }
    }
    ctx->pc = 0x3B4C70u;
label_3b4c70:
    // 0x3b4c70: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3b4c74:
    if (ctx->pc == 0x3B4C74u) {
        ctx->pc = 0x3B4C74u;
            // 0x3b4c74: 0x32230800  andi        $v1, $s1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
        ctx->pc = 0x3B4C78u;
        goto label_3b4c78;
    }
    ctx->pc = 0x3B4C70u;
    {
        const bool branch_taken_0x3b4c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4C70u;
            // 0x3b4c74: 0x32230800  andi        $v1, $s1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c70) {
            ctx->pc = 0x3B4CE0u;
            goto label_3b4ce0;
        }
    }
    ctx->pc = 0x3B4C78u;
label_3b4c78:
    // 0x3b4c78: 0x36250800  ori         $a1, $s1, 0x800
    ctx->pc = 0x3b4c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2048);
label_3b4c7c:
    // 0x3b4c7c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x3b4c7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3b4c80:
    // 0x3b4c80: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3b4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3b4c84:
    // 0x3b4c84: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3b4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b4c88:
    // 0x3b4c88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3b4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3b4c8c:
    // 0x3b4c8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b4c90:
    // 0x3b4c90: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x3b4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_3b4c94:
    // 0x3b4c94: 0x10000011  b           . + 4 + (0x11 << 2)
label_3b4c98:
    if (ctx->pc == 0x3B4C98u) {
        ctx->pc = 0x3B4C98u;
            // 0x3b4c98: 0xa38825  or          $s1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->pc = 0x3B4C9Cu;
        goto label_3b4c9c;
    }
    ctx->pc = 0x3B4C94u;
    {
        const bool branch_taken_0x3b4c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4C94u;
            // 0x3b4c98: 0xa38825  or          $s1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c94) {
            ctx->pc = 0x3B4CDCu;
            goto label_3b4cdc;
        }
    }
    ctx->pc = 0x3B4C9Cu;
label_3b4c9c:
    // 0x3b4c9c: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x3b4c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3b4ca0:
    // 0x3b4ca0: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3b4ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_3b4ca4:
    // 0x3b4ca4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x3b4ca4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3b4ca8:
    // 0x3b4ca8: 0x3382b  sltu        $a3, $zero, $v1
    ctx->pc = 0x3b4ca8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b4cac:
    // 0x3b4cac: 0x42340  sll         $a0, $a0, 13
    ctx->pc = 0x3b4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_3b4cb0:
    // 0x3b4cb0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3b4cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_3b4cb4:
    // 0x3b4cb4: 0x2244025  or          $t0, $s1, $a0
    ctx->pc = 0x3b4cb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_3b4cb8:
    // 0x3b4cb8: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x3b4cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3b4cbc:
    // 0x3b4cbc: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x3b4cbcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b4cc0:
    // 0x3b4cc0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3b4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3b4cc4:
    // 0x3b4cc4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3b4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3b4cc8:
    // 0x3b4cc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b4ccc:
    // 0x3b4ccc: 0x52480  sll         $a0, $a1, 18
    ctx->pc = 0x3b4cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 18));
label_3b4cd0:
    // 0x3b4cd0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3b4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_3b4cd4:
    // 0x3b4cd4: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x3b4cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_3b4cd8:
    // 0x3b4cd8: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x3b4cd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b4cdc:
    // 0x3b4cdc: 0x32230800  andi        $v1, $s1, 0x800
    ctx->pc = 0x3b4cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_3b4ce0:
    // 0x3b4ce0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_3b4ce4:
    if (ctx->pc == 0x3B4CE4u) {
        ctx->pc = 0x3B4CE4u;
            // 0x3b4ce4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x3B4CE8u;
        goto label_3b4ce8;
    }
    ctx->pc = 0x3B4CE0u;
    {
        const bool branch_taken_0x3b4ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4ce0) {
            ctx->pc = 0x3B4CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4CE0u;
            // 0x3b4ce4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4CFCu;
            goto label_3b4cfc;
        }
    }
    ctx->pc = 0x3B4CE8u;
label_3b4ce8:
    // 0x3b4ce8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3b4ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b4cec:
    // 0x3b4cec: 0xc077fb0  jal         func_1DFEC0
label_3b4cf0:
    if (ctx->pc == 0x3B4CF0u) {
        ctx->pc = 0x3B4CF0u;
            // 0x3b4cf0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3B4CF4u;
        goto label_3b4cf4;
    }
    ctx->pc = 0x3B4CECu;
    SET_GPR_U32(ctx, 31, 0x3B4CF4u);
    ctx->pc = 0x3B4CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4CECu;
            // 0x3b4cf0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4CF4u; }
        if (ctx->pc != 0x3B4CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4CF4u; }
        if (ctx->pc != 0x3B4CF4u) { return; }
    }
    ctx->pc = 0x3B4CF4u;
label_3b4cf4:
    // 0x3b4cf4: 0x2631f800  addiu       $s1, $s1, -0x800
    ctx->pc = 0x3b4cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965248));
label_3b4cf8:
    // 0x3b4cf8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3b4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b4cfc:
    // 0x3b4cfc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b4d00:
    // 0x3b4d00: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x3b4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_3b4d04:
    // 0x3b4d04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b4d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3b4d08:
    // 0x3b4d08: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3b4d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3b4d0c:
    // 0x3b4d0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b4d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4d10:
    // 0x3b4d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4d14:
    // 0x3b4d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4d18:
    // 0x3b4d18: 0x3e00008  jr          $ra
label_3b4d1c:
    if (ctx->pc == 0x3B4D1Cu) {
        ctx->pc = 0x3B4D1Cu;
            // 0x3b4d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3B4D20u;
        goto label_3b4d20;
    }
    ctx->pc = 0x3B4D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4D18u;
            // 0x3b4d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4D20u;
label_3b4d20:
    // 0x3b4d20: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3b4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b4d24:
    // 0x3b4d24: 0x8cc30d60  lw          $v1, 0xD60($a2)
    ctx->pc = 0x3b4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3424)));
label_3b4d28:
    // 0x3b4d28: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x3b4d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3b4d2c:
    // 0x3b4d2c: 0x2ca4000a  sltiu       $a0, $a1, 0xA
    ctx->pc = 0x3b4d2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3b4d30:
    // 0x3b4d30: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_3b4d34:
    if (ctx->pc == 0x3B4D34u) {
        ctx->pc = 0x3B4D34u;
            // 0x3b4d34: 0x8c69000c  lw          $t1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->pc = 0x3B4D38u;
        goto label_3b4d38;
    }
    ctx->pc = 0x3B4D30u;
    {
        const bool branch_taken_0x3b4d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4D30u;
            // 0x3b4d34: 0x8c69000c  lw          $t1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d30) {
            ctx->pc = 0x3B4D44u;
            goto label_3b4d44;
        }
    }
    ctx->pc = 0x3B4D38u;
label_3b4d38:
    // 0x3b4d38: 0x2ca40029  sltiu       $a0, $a1, 0x29
    ctx->pc = 0x3b4d38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_3b4d3c:
    // 0x3b4d3c: 0x5480000f  bnel        $a0, $zero, . + 4 + (0xF << 2)
label_3b4d40:
    if (ctx->pc == 0x3B4D40u) {
        ctx->pc = 0x3B4D40u;
            // 0x3b4d40: 0x24a7fff6  addiu       $a3, $a1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
        ctx->pc = 0x3B4D44u;
        goto label_3b4d44;
    }
    ctx->pc = 0x3B4D3Cu;
    {
        const bool branch_taken_0x3b4d3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d3c) {
            ctx->pc = 0x3B4D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4D3Cu;
            // 0x3b4d40: 0x24a7fff6  addiu       $a3, $a1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4D7Cu;
            goto label_3b4d7c;
        }
    }
    ctx->pc = 0x3B4D44u;
label_3b4d44:
    // 0x3b4d44: 0x2ca40002  sltiu       $a0, $a1, 0x2
    ctx->pc = 0x3b4d44u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3b4d48:
    // 0x3b4d48: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_3b4d4c:
    if (ctx->pc == 0x3B4D4Cu) {
        ctx->pc = 0x3B4D4Cu;
            // 0x3b4d4c: 0xa02826  xor         $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D50u;
        goto label_3b4d50;
    }
    ctx->pc = 0x3B4D48u;
    {
        const bool branch_taken_0x3b4d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d48) {
            ctx->pc = 0x3B4D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4D48u;
            // 0x3b4d4c: 0xa02826  xor         $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4D58u;
            goto label_3b4d58;
        }
    }
    ctx->pc = 0x3B4D50u;
label_3b4d50:
    // 0x3b4d50: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3b4d54:
    if (ctx->pc == 0x3B4D54u) {
        ctx->pc = 0x3B4D54u;
            // 0x3b4d54: 0x31240800  andi        $a0, $t1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2048);
        ctx->pc = 0x3B4D58u;
        goto label_3b4d58;
    }
    ctx->pc = 0x3B4D50u;
    {
        const bool branch_taken_0x3b4d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4D50u;
            // 0x3b4d54: 0x31240800  andi        $a0, $t1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d50) {
            ctx->pc = 0x3B4DC0u;
            goto label_3b4dc0;
        }
    }
    ctx->pc = 0x3B4D58u;
label_3b4d58:
    // 0x3b4d58: 0x35270800  ori         $a3, $t1, 0x800
    ctx->pc = 0x3b4d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
label_3b4d5c:
    // 0x3b4d5c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3b4d5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3b4d60:
    // 0x3b4d60: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3b4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3b4d64:
    // 0x3b4d64: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3b4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3b4d68:
    // 0x3b4d68: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3b4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3b4d6c:
    // 0x3b4d6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3b4d70:
    // 0x3b4d70: 0x42340  sll         $a0, $a0, 13
    ctx->pc = 0x3b4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_3b4d74:
    // 0x3b4d74: 0x10000011  b           . + 4 + (0x11 << 2)
label_3b4d78:
    if (ctx->pc == 0x3B4D78u) {
        ctx->pc = 0x3B4D78u;
            // 0x3b4d78: 0xe44825  or          $t1, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->pc = 0x3B4D7Cu;
        goto label_3b4d7c;
    }
    ctx->pc = 0x3B4D74u;
    {
        const bool branch_taken_0x3b4d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4D74u;
            // 0x3b4d78: 0xe44825  or          $t1, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d74) {
            ctx->pc = 0x3B4DBCu;
            goto label_3b4dbc;
        }
    }
    ctx->pc = 0x3B4D7Cu;
label_3b4d7c:
    // 0x3b4d7c: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x3b4d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_3b4d80:
    // 0x3b4d80: 0x30e40002  andi        $a0, $a3, 0x2
    ctx->pc = 0x3b4d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_3b4d84:
    // 0x3b4d84: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x3b4d84u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3b4d88:
    // 0x3b4d88: 0x4402b  sltu        $t0, $zero, $a0
    ctx->pc = 0x3b4d88u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3b4d8c:
    // 0x3b4d8c: 0x52b40  sll         $a1, $a1, 13
    ctx->pc = 0x3b4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 13));
label_3b4d90:
    // 0x3b4d90: 0x30e40004  andi        $a0, $a3, 0x4
    ctx->pc = 0x3b4d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_3b4d94:
    // 0x3b4d94: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x3b4d94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_3b4d98:
    // 0x3b4d98: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x3b4d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3b4d9c:
    // 0x3b4d9c: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x3b4d9cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3b4da0:
    // 0x3b4da0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3b4da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3b4da4:
    // 0x3b4da4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3b4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3b4da8:
    // 0x3b4da8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3b4dac:
    // 0x3b4dac: 0x72c80  sll         $a1, $a3, 18
    ctx->pc = 0x3b4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
label_3b4db0:
    // 0x3b4db0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3b4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_3b4db4:
    // 0x3b4db4: 0x1252825  or          $a1, $t1, $a1
    ctx->pc = 0x3b4db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_3b4db8:
    // 0x3b4db8: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x3b4db8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_3b4dbc:
    // 0x3b4dbc: 0x31240800  andi        $a0, $t1, 0x800
    ctx->pc = 0x3b4dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2048);
label_3b4dc0:
    // 0x3b4dc0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b4dc4:
    if (ctx->pc == 0x3B4DC4u) {
        ctx->pc = 0x3B4DC4u;
            // 0x3b4dc4: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->pc = 0x3B4DC8u;
        goto label_3b4dc8;
    }
    ctx->pc = 0x3B4DC0u;
    {
        const bool branch_taken_0x3b4dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4dc0) {
            ctx->pc = 0x3B4DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4DC0u;
            // 0x3b4dc4: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4DDCu;
            goto label_3b4ddc;
        }
    }
    ctx->pc = 0x3B4DC8u;
label_3b4dc8:
    // 0x3b4dc8: 0x8cc40da0  lw          $a0, 0xDA0($a2)
    ctx->pc = 0x3b4dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3488)));
label_3b4dcc:
    // 0x3b4dcc: 0x2529f800  addiu       $t1, $t1, -0x800
    ctx->pc = 0x3b4dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965248));
label_3b4dd0:
    // 0x3b4dd0: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x3b4dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
label_3b4dd4:
    // 0x3b4dd4: 0xacc40da0  sw          $a0, 0xDA0($a2)
    ctx->pc = 0x3b4dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3488), GPR_U32(ctx, 4));
label_3b4dd8:
    // 0x3b4dd8: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x3b4dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
label_3b4ddc:
    // 0x3b4ddc: 0x3e00008  jr          $ra
label_3b4de0:
    if (ctx->pc == 0x3B4DE0u) {
        ctx->pc = 0x3B4DE4u;
        goto label_3b4de4;
    }
    ctx->pc = 0x3B4DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4DE4u;
label_3b4de4:
    // 0x3b4de4: 0x0  nop
    ctx->pc = 0x3b4de4u;
    // NOP
label_3b4de8:
    // 0x3b4de8: 0x0  nop
    ctx->pc = 0x3b4de8u;
    // NOP
label_3b4dec:
    // 0x3b4dec: 0x0  nop
    ctx->pc = 0x3b4decu;
    // NOP
label_3b4df0:
    // 0x3b4df0: 0x3e00008  jr          $ra
label_3b4df4:
    if (ctx->pc == 0x3B4DF4u) {
        ctx->pc = 0x3B4DF4u;
            // 0x3b4df4: 0x24020848  addiu       $v0, $zero, 0x848 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
        ctx->pc = 0x3B4DF8u;
        goto label_3b4df8;
    }
    ctx->pc = 0x3B4DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4DF0u;
            // 0x3b4df4: 0x24020848  addiu       $v0, $zero, 0x848 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4DF8u;
label_3b4df8:
    // 0x3b4df8: 0x0  nop
    ctx->pc = 0x3b4df8u;
    // NOP
label_3b4dfc:
    // 0x3b4dfc: 0x0  nop
    ctx->pc = 0x3b4dfcu;
    // NOP
label_3b4e00:
    // 0x3b4e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b4e04:
    // 0x3b4e04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b4e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4e08:
    // 0x3b4e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b4e0c:
    // 0x3b4e0c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3b4e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3b4e10:
    // 0x3b4e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b4e14:
    // 0x3b4e14: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3b4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3b4e18:
    // 0x3b4e18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b4e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b4e1c:
    // 0x3b4e1c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3b4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3b4e20:
    // 0x3b4e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b4e24:
    // 0x3b4e24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b4e28:
    // 0x3b4e28: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3b4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3b4e2c:
    // 0x3b4e2c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3b4e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b4e30:
    // 0x3b4e30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3b4e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3b4e34:
    // 0x3b4e34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3b4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4e38:
    // 0x3b4e38: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3b4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3b4e3c:
    // 0x3b4e3c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3b4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3b4e40:
    // 0x3b4e40: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3b4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3b4e44:
    // 0x3b4e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b4e48:
    // 0x3b4e48: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3b4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3b4e4c:
    // 0x3b4e4c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3b4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3b4e50:
    // 0x3b4e50: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3b4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3b4e54:
    // 0x3b4e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b4e58:
    // 0x3b4e58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3b4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b4e5c:
    // 0x3b4e5c: 0xc0a997c  jal         func_2A65F0
label_3b4e60:
    if (ctx->pc == 0x3B4E60u) {
        ctx->pc = 0x3B4E60u;
            // 0x3b4e60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3B4E64u;
        goto label_3b4e64;
    }
    ctx->pc = 0x3B4E5Cu;
    SET_GPR_U32(ctx, 31, 0x3B4E64u);
    ctx->pc = 0x3B4E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4E5Cu;
            // 0x3b4e60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4E64u; }
        if (ctx->pc != 0x3B4E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4E64u; }
        if (ctx->pc != 0x3B4E64u) { return; }
    }
    ctx->pc = 0x3B4E64u;
label_3b4e64:
    // 0x3b4e64: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3b4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3b4e68:
    // 0x3b4e68: 0xc0d879c  jal         func_361E70
label_3b4e6c:
    if (ctx->pc == 0x3B4E6Cu) {
        ctx->pc = 0x3B4E6Cu;
            // 0x3b4e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E70u;
        goto label_3b4e70;
    }
    ctx->pc = 0x3B4E68u;
    SET_GPR_U32(ctx, 31, 0x3B4E70u);
    ctx->pc = 0x3B4E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4E68u;
            // 0x3b4e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4E70u; }
        if (ctx->pc != 0x3B4E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4E70u; }
        if (ctx->pc != 0x3B4E70u) { return; }
    }
    ctx->pc = 0x3B4E70u;
label_3b4e70:
    // 0x3b4e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b4e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4e74:
    // 0x3b4e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4e78:
    // 0x3b4e78: 0x3e00008  jr          $ra
label_3b4e7c:
    if (ctx->pc == 0x3B4E7Cu) {
        ctx->pc = 0x3B4E7Cu;
            // 0x3b4e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3B4E80u;
        goto label_3b4e80;
    }
    ctx->pc = 0x3B4E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4E78u;
            // 0x3b4e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4E80u;
label_3b4e80:
    // 0x3b4e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b4e84:
    // 0x3b4e84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b4e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3b4e88:
    // 0x3b4e88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b4e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3b4e8c:
    // 0x3b4e8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b4e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b4e90:
    // 0x3b4e90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b4e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4e94:
    // 0x3b4e94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b4e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b4e98:
    // 0x3b4e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4e9c:
    // 0x3b4e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b4ea0:
    // 0x3b4ea0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3b4ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3b4ea4:
    // 0x3b4ea4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3b4ea8:
    if (ctx->pc == 0x3B4EA8u) {
        ctx->pc = 0x3B4EA8u;
            // 0x3b4ea8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EACu;
        goto label_3b4eac;
    }
    ctx->pc = 0x3B4EA4u;
    {
        const bool branch_taken_0x3b4ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4EA4u;
            // 0x3b4ea8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ea4) {
            ctx->pc = 0x3B4EE8u;
            goto label_3b4ee8;
        }
    }
    ctx->pc = 0x3B4EACu;
label_3b4eac:
    // 0x3b4eac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b4eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4eb0:
    // 0x3b4eb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b4eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4eb4:
    // 0x3b4eb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b4eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4eb8:
    // 0x3b4eb8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3b4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3b4ebc:
    // 0x3b4ebc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3b4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3b4ec0:
    // 0x3b4ec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b4ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b4ec4:
    // 0x3b4ec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b4ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b4ec8:
    // 0x3b4ec8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b4ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b4ecc:
    // 0x3b4ecc: 0x320f809  jalr        $t9
label_3b4ed0:
    if (ctx->pc == 0x3B4ED0u) {
        ctx->pc = 0x3B4ED4u;
        goto label_3b4ed4;
    }
    ctx->pc = 0x3B4ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B4ED4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B4ED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B4ED4u; }
            if (ctx->pc != 0x3B4ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x3B4ED4u;
label_3b4ed4:
    // 0x3b4ed4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3b4ed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3b4ed8:
    // 0x3b4ed8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3b4ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3b4edc:
    // 0x3b4edc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3b4edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3b4ee0:
    // 0x3b4ee0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3b4ee4:
    if (ctx->pc == 0x3B4EE4u) {
        ctx->pc = 0x3B4EE4u;
            // 0x3b4ee4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3B4EE8u;
        goto label_3b4ee8;
    }
    ctx->pc = 0x3B4EE0u;
    {
        const bool branch_taken_0x3b4ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4EE0u;
            // 0x3b4ee4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ee0) {
            ctx->pc = 0x3B4EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b4eb8;
        }
    }
    ctx->pc = 0x3B4EE8u;
label_3b4ee8:
    // 0x3b4ee8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b4ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b4eec:
    // 0x3b4eec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b4eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b4ef0:
    // 0x3b4ef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b4ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b4ef4:
    // 0x3b4ef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b4ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4ef8:
    // 0x3b4ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b4ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4efc:
    // 0x3b4efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4f00:
    // 0x3b4f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4f04:
    // 0x3b4f04: 0x3e00008  jr          $ra
label_3b4f08:
    if (ctx->pc == 0x3B4F08u) {
        ctx->pc = 0x3B4F08u;
            // 0x3b4f08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3B4F0Cu;
        goto label_3b4f0c;
    }
    ctx->pc = 0x3B4F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4F04u;
            // 0x3b4f08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4F0Cu;
label_3b4f0c:
    // 0x3b4f0c: 0x0  nop
    ctx->pc = 0x3b4f0cu;
    // NOP
label_3b4f10:
    // 0x3b4f10: 0x80ed010  j           func_3B4040
label_3b4f14:
    if (ctx->pc == 0x3B4F14u) {
        ctx->pc = 0x3B4F14u;
            // 0x3b4f14: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3B4F18u;
        goto label_3b4f18;
    }
    ctx->pc = 0x3B4F10u;
    ctx->pc = 0x3B4F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4F10u;
            // 0x3b4f14: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4040u;
    {
        auto targetFn = runtime->lookupFunction(0x3B4040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3B4F18u;
label_3b4f18:
    // 0x3b4f18: 0x0  nop
    ctx->pc = 0x3b4f18u;
    // NOP
label_3b4f1c:
    // 0x3b4f1c: 0x0  nop
    ctx->pc = 0x3b4f1cu;
    // NOP
label_3b4f20:
    // 0x3b4f20: 0x80ed0c0  j           func_3B4300
label_3b4f24:
    if (ctx->pc == 0x3B4F24u) {
        ctx->pc = 0x3B4F24u;
            // 0x3b4f24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3B4F28u;
        goto label_3b4f28;
    }
    ctx->pc = 0x3B4F20u;
    ctx->pc = 0x3B4F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4F20u;
            // 0x3b4f24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4300u;
    {
        auto targetFn = runtime->lookupFunction(0x3B4300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3B4F28u;
label_3b4f28:
    // 0x3b4f28: 0x0  nop
    ctx->pc = 0x3b4f28u;
    // NOP
label_3b4f2c:
    // 0x3b4f2c: 0x0  nop
    ctx->pc = 0x3b4f2cu;
    // NOP
label_3b4f30:
    // 0x3b4f30: 0x80ecfa8  j           func_3B3EA0
label_3b4f34:
    if (ctx->pc == 0x3B4F34u) {
        ctx->pc = 0x3B4F34u;
            // 0x3b4f34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3B4F38u;
        goto label_3b4f38;
    }
    ctx->pc = 0x3B4F30u;
    ctx->pc = 0x3B4F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4F30u;
            // 0x3b4f34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EA0u;
    {
        auto targetFn = runtime->lookupFunction(0x3B3EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3B4F38u;
label_3b4f38:
    // 0x3b4f38: 0x0  nop
    ctx->pc = 0x3b4f38u;
    // NOP
label_3b4f3c:
    // 0x3b4f3c: 0x0  nop
    ctx->pc = 0x3b4f3cu;
    // NOP
label_3b4f40:
    // 0x3b4f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b4f44:
    // 0x3b4f44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b4f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b4f48:
    // 0x3b4f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b4f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b4f4c:
    // 0x3b4f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b4f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b4f50:
    // 0x3b4f50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4f54:
    // 0x3b4f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b4f58:
    // 0x3b4f58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b4f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f5c:
    // 0x3b4f5c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_3b4f60:
    if (ctx->pc == 0x3B4F60u) {
        ctx->pc = 0x3B4F60u;
            // 0x3b4f60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F64u;
        goto label_3b4f64;
    }
    ctx->pc = 0x3B4F5Cu;
    {
        const bool branch_taken_0x3b4f5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4F5Cu;
            // 0x3b4f60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f5c) {
            ctx->pc = 0x3B4FE8u;
            goto label_3b4fe8;
        }
    }
    ctx->pc = 0x3B4F64u;
label_3b4f64:
    // 0x3b4f64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b4f68:
    // 0x3b4f68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b4f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f6c:
    // 0x3b4f6c: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x3b4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
label_3b4f70:
    // 0x3b4f70: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3b4f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4f74:
    // 0x3b4f74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3b4f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3b4f78:
    // 0x3b4f78: 0x8e440cc8  lw          $a0, 0xCC8($s2)
    ctx->pc = 0x3b4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3272)));
label_3b4f7c:
    // 0x3b4f7c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3b4f80:
    if (ctx->pc == 0x3B4F80u) {
        ctx->pc = 0x3B4F84u;
        goto label_3b4f84;
    }
    ctx->pc = 0x3B4F7Cu;
    {
        const bool branch_taken_0x3b4f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4f7c) {
            ctx->pc = 0x3B4FA0u;
            goto label_3b4fa0;
        }
    }
    ctx->pc = 0x3B4F84u;
label_3b4f84:
    // 0x3b4f84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3b4f88:
    if (ctx->pc == 0x3B4F88u) {
        ctx->pc = 0x3B4F8Cu;
        goto label_3b4f8c;
    }
    ctx->pc = 0x3B4F84u;
    {
        const bool branch_taken_0x3b4f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4f84) {
            ctx->pc = 0x3B4FA0u;
            goto label_3b4fa0;
        }
    }
    ctx->pc = 0x3B4F8Cu;
label_3b4f8c:
    // 0x3b4f8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b4f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b4f90:
    // 0x3b4f90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3b4f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3b4f94:
    // 0x3b4f94: 0x320f809  jalr        $t9
label_3b4f98:
    if (ctx->pc == 0x3B4F98u) {
        ctx->pc = 0x3B4F98u;
            // 0x3b4f98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B4F9Cu;
        goto label_3b4f9c;
    }
    ctx->pc = 0x3B4F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B4F9Cu);
        ctx->pc = 0x3B4F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4F94u;
            // 0x3b4f98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B4F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B4F9Cu; }
            if (ctx->pc != 0x3B4F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B4F9Cu;
label_3b4f9c:
    // 0x3b4f9c: 0x0  nop
    ctx->pc = 0x3b4f9cu;
    // NOP
label_3b4fa0:
    // 0x3b4fa0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b4fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b4fa4:
    // 0x3b4fa4: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x3b4fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3b4fa8:
    // 0x3b4fa8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_3b4fac:
    if (ctx->pc == 0x3B4FACu) {
        ctx->pc = 0x3B4FACu;
            // 0x3b4fac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3B4FB0u;
        goto label_3b4fb0;
    }
    ctx->pc = 0x3B4FA8u;
    {
        const bool branch_taken_0x3b4fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4FA8u;
            // 0x3b4fac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fa8) {
            ctx->pc = 0x3B4F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b4f78;
        }
    }
    ctx->pc = 0x3B4FB0u;
label_3b4fb0:
    // 0x3b4fb0: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3b4fb4:
    if (ctx->pc == 0x3B4FB4u) {
        ctx->pc = 0x3B4FB4u;
            // 0x3b4fb4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3B4FB8u;
        goto label_3b4fb8;
    }
    ctx->pc = 0x3B4FB0u;
    {
        const bool branch_taken_0x3b4fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4fb0) {
            ctx->pc = 0x3B4FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4FB0u;
            // 0x3b4fb4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4FD4u;
            goto label_3b4fd4;
        }
    }
    ctx->pc = 0x3B4FB8u;
label_3b4fb8:
    // 0x3b4fb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b4fbc:
    // 0x3b4fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fc0:
    // 0x3b4fc0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3b4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3b4fc4:
    // 0x3b4fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b4fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fc8:
    // 0x3b4fc8: 0xc057a68  jal         func_15E9A0
label_3b4fcc:
    if (ctx->pc == 0x3B4FCCu) {
        ctx->pc = 0x3B4FCCu;
            // 0x3b4fcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3B4FD0u;
        goto label_3b4fd0;
    }
    ctx->pc = 0x3B4FC8u;
    SET_GPR_U32(ctx, 31, 0x3B4FD0u);
    ctx->pc = 0x3B4FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4FC8u;
            // 0x3b4fcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4FD0u; }
        if (ctx->pc != 0x3B4FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4FD0u; }
        if (ctx->pc != 0x3B4FD0u) { return; }
    }
    ctx->pc = 0x3B4FD0u;
label_3b4fd0:
    // 0x3b4fd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b4fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3b4fd4:
    // 0x3b4fd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b4fd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3b4fd8:
    // 0x3b4fd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3b4fdc:
    if (ctx->pc == 0x3B4FDCu) {
        ctx->pc = 0x3B4FDCu;
            // 0x3b4fdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FE0u;
        goto label_3b4fe0;
    }
    ctx->pc = 0x3B4FD8u;
    {
        const bool branch_taken_0x3b4fd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b4fd8) {
            ctx->pc = 0x3B4FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4FD8u;
            // 0x3b4fdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4FECu;
            goto label_3b4fec;
        }
    }
    ctx->pc = 0x3B4FE0u;
label_3b4fe0:
    // 0x3b4fe0: 0xc0400a8  jal         func_1002A0
label_3b4fe4:
    if (ctx->pc == 0x3B4FE4u) {
        ctx->pc = 0x3B4FE4u;
            // 0x3b4fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FE8u;
        goto label_3b4fe8;
    }
    ctx->pc = 0x3B4FE0u;
    SET_GPR_U32(ctx, 31, 0x3B4FE8u);
    ctx->pc = 0x3B4FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4FE0u;
            // 0x3b4fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4FE8u; }
        if (ctx->pc != 0x3B4FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4FE8u; }
        if (ctx->pc != 0x3B4FE8u) { return; }
    }
    ctx->pc = 0x3B4FE8u;
label_3b4fe8:
    // 0x3b4fe8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b4fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4fec:
    // 0x3b4fec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b4fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b4ff0:
    // 0x3b4ff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b4ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4ff4:
    // 0x3b4ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b4ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4ff8:
    // 0x3b4ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4ffc:
    // 0x3b4ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b5000:
    // 0x3b5000: 0x3e00008  jr          $ra
label_3b5004:
    if (ctx->pc == 0x3B5004u) {
        ctx->pc = 0x3B5004u;
            // 0x3b5004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3B5008u;
        goto label_3b5008;
    }
    ctx->pc = 0x3B5000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5000u;
            // 0x3b5004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B5008u;
label_3b5008:
    // 0x3b5008: 0x0  nop
    ctx->pc = 0x3b5008u;
    // NOP
label_3b500c:
    // 0x3b500c: 0x0  nop
    ctx->pc = 0x3b500cu;
    // NOP
}
