#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E46B0
// Address: 0x4e46b0 - 0x4e4cc0
void sub_004E46B0_0x4e46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E46B0_0x4e46b0");
#endif

    switch (ctx->pc) {
        case 0x4e46b0u: goto label_4e46b0;
        case 0x4e46b4u: goto label_4e46b4;
        case 0x4e46b8u: goto label_4e46b8;
        case 0x4e46bcu: goto label_4e46bc;
        case 0x4e46c0u: goto label_4e46c0;
        case 0x4e46c4u: goto label_4e46c4;
        case 0x4e46c8u: goto label_4e46c8;
        case 0x4e46ccu: goto label_4e46cc;
        case 0x4e46d0u: goto label_4e46d0;
        case 0x4e46d4u: goto label_4e46d4;
        case 0x4e46d8u: goto label_4e46d8;
        case 0x4e46dcu: goto label_4e46dc;
        case 0x4e46e0u: goto label_4e46e0;
        case 0x4e46e4u: goto label_4e46e4;
        case 0x4e46e8u: goto label_4e46e8;
        case 0x4e46ecu: goto label_4e46ec;
        case 0x4e46f0u: goto label_4e46f0;
        case 0x4e46f4u: goto label_4e46f4;
        case 0x4e46f8u: goto label_4e46f8;
        case 0x4e46fcu: goto label_4e46fc;
        case 0x4e4700u: goto label_4e4700;
        case 0x4e4704u: goto label_4e4704;
        case 0x4e4708u: goto label_4e4708;
        case 0x4e470cu: goto label_4e470c;
        case 0x4e4710u: goto label_4e4710;
        case 0x4e4714u: goto label_4e4714;
        case 0x4e4718u: goto label_4e4718;
        case 0x4e471cu: goto label_4e471c;
        case 0x4e4720u: goto label_4e4720;
        case 0x4e4724u: goto label_4e4724;
        case 0x4e4728u: goto label_4e4728;
        case 0x4e472cu: goto label_4e472c;
        case 0x4e4730u: goto label_4e4730;
        case 0x4e4734u: goto label_4e4734;
        case 0x4e4738u: goto label_4e4738;
        case 0x4e473cu: goto label_4e473c;
        case 0x4e4740u: goto label_4e4740;
        case 0x4e4744u: goto label_4e4744;
        case 0x4e4748u: goto label_4e4748;
        case 0x4e474cu: goto label_4e474c;
        case 0x4e4750u: goto label_4e4750;
        case 0x4e4754u: goto label_4e4754;
        case 0x4e4758u: goto label_4e4758;
        case 0x4e475cu: goto label_4e475c;
        case 0x4e4760u: goto label_4e4760;
        case 0x4e4764u: goto label_4e4764;
        case 0x4e4768u: goto label_4e4768;
        case 0x4e476cu: goto label_4e476c;
        case 0x4e4770u: goto label_4e4770;
        case 0x4e4774u: goto label_4e4774;
        case 0x4e4778u: goto label_4e4778;
        case 0x4e477cu: goto label_4e477c;
        case 0x4e4780u: goto label_4e4780;
        case 0x4e4784u: goto label_4e4784;
        case 0x4e4788u: goto label_4e4788;
        case 0x4e478cu: goto label_4e478c;
        case 0x4e4790u: goto label_4e4790;
        case 0x4e4794u: goto label_4e4794;
        case 0x4e4798u: goto label_4e4798;
        case 0x4e479cu: goto label_4e479c;
        case 0x4e47a0u: goto label_4e47a0;
        case 0x4e47a4u: goto label_4e47a4;
        case 0x4e47a8u: goto label_4e47a8;
        case 0x4e47acu: goto label_4e47ac;
        case 0x4e47b0u: goto label_4e47b0;
        case 0x4e47b4u: goto label_4e47b4;
        case 0x4e47b8u: goto label_4e47b8;
        case 0x4e47bcu: goto label_4e47bc;
        case 0x4e47c0u: goto label_4e47c0;
        case 0x4e47c4u: goto label_4e47c4;
        case 0x4e47c8u: goto label_4e47c8;
        case 0x4e47ccu: goto label_4e47cc;
        case 0x4e47d0u: goto label_4e47d0;
        case 0x4e47d4u: goto label_4e47d4;
        case 0x4e47d8u: goto label_4e47d8;
        case 0x4e47dcu: goto label_4e47dc;
        case 0x4e47e0u: goto label_4e47e0;
        case 0x4e47e4u: goto label_4e47e4;
        case 0x4e47e8u: goto label_4e47e8;
        case 0x4e47ecu: goto label_4e47ec;
        case 0x4e47f0u: goto label_4e47f0;
        case 0x4e47f4u: goto label_4e47f4;
        case 0x4e47f8u: goto label_4e47f8;
        case 0x4e47fcu: goto label_4e47fc;
        case 0x4e4800u: goto label_4e4800;
        case 0x4e4804u: goto label_4e4804;
        case 0x4e4808u: goto label_4e4808;
        case 0x4e480cu: goto label_4e480c;
        case 0x4e4810u: goto label_4e4810;
        case 0x4e4814u: goto label_4e4814;
        case 0x4e4818u: goto label_4e4818;
        case 0x4e481cu: goto label_4e481c;
        case 0x4e4820u: goto label_4e4820;
        case 0x4e4824u: goto label_4e4824;
        case 0x4e4828u: goto label_4e4828;
        case 0x4e482cu: goto label_4e482c;
        case 0x4e4830u: goto label_4e4830;
        case 0x4e4834u: goto label_4e4834;
        case 0x4e4838u: goto label_4e4838;
        case 0x4e483cu: goto label_4e483c;
        case 0x4e4840u: goto label_4e4840;
        case 0x4e4844u: goto label_4e4844;
        case 0x4e4848u: goto label_4e4848;
        case 0x4e484cu: goto label_4e484c;
        case 0x4e4850u: goto label_4e4850;
        case 0x4e4854u: goto label_4e4854;
        case 0x4e4858u: goto label_4e4858;
        case 0x4e485cu: goto label_4e485c;
        case 0x4e4860u: goto label_4e4860;
        case 0x4e4864u: goto label_4e4864;
        case 0x4e4868u: goto label_4e4868;
        case 0x4e486cu: goto label_4e486c;
        case 0x4e4870u: goto label_4e4870;
        case 0x4e4874u: goto label_4e4874;
        case 0x4e4878u: goto label_4e4878;
        case 0x4e487cu: goto label_4e487c;
        case 0x4e4880u: goto label_4e4880;
        case 0x4e4884u: goto label_4e4884;
        case 0x4e4888u: goto label_4e4888;
        case 0x4e488cu: goto label_4e488c;
        case 0x4e4890u: goto label_4e4890;
        case 0x4e4894u: goto label_4e4894;
        case 0x4e4898u: goto label_4e4898;
        case 0x4e489cu: goto label_4e489c;
        case 0x4e48a0u: goto label_4e48a0;
        case 0x4e48a4u: goto label_4e48a4;
        case 0x4e48a8u: goto label_4e48a8;
        case 0x4e48acu: goto label_4e48ac;
        case 0x4e48b0u: goto label_4e48b0;
        case 0x4e48b4u: goto label_4e48b4;
        case 0x4e48b8u: goto label_4e48b8;
        case 0x4e48bcu: goto label_4e48bc;
        case 0x4e48c0u: goto label_4e48c0;
        case 0x4e48c4u: goto label_4e48c4;
        case 0x4e48c8u: goto label_4e48c8;
        case 0x4e48ccu: goto label_4e48cc;
        case 0x4e48d0u: goto label_4e48d0;
        case 0x4e48d4u: goto label_4e48d4;
        case 0x4e48d8u: goto label_4e48d8;
        case 0x4e48dcu: goto label_4e48dc;
        case 0x4e48e0u: goto label_4e48e0;
        case 0x4e48e4u: goto label_4e48e4;
        case 0x4e48e8u: goto label_4e48e8;
        case 0x4e48ecu: goto label_4e48ec;
        case 0x4e48f0u: goto label_4e48f0;
        case 0x4e48f4u: goto label_4e48f4;
        case 0x4e48f8u: goto label_4e48f8;
        case 0x4e48fcu: goto label_4e48fc;
        case 0x4e4900u: goto label_4e4900;
        case 0x4e4904u: goto label_4e4904;
        case 0x4e4908u: goto label_4e4908;
        case 0x4e490cu: goto label_4e490c;
        case 0x4e4910u: goto label_4e4910;
        case 0x4e4914u: goto label_4e4914;
        case 0x4e4918u: goto label_4e4918;
        case 0x4e491cu: goto label_4e491c;
        case 0x4e4920u: goto label_4e4920;
        case 0x4e4924u: goto label_4e4924;
        case 0x4e4928u: goto label_4e4928;
        case 0x4e492cu: goto label_4e492c;
        case 0x4e4930u: goto label_4e4930;
        case 0x4e4934u: goto label_4e4934;
        case 0x4e4938u: goto label_4e4938;
        case 0x4e493cu: goto label_4e493c;
        case 0x4e4940u: goto label_4e4940;
        case 0x4e4944u: goto label_4e4944;
        case 0x4e4948u: goto label_4e4948;
        case 0x4e494cu: goto label_4e494c;
        case 0x4e4950u: goto label_4e4950;
        case 0x4e4954u: goto label_4e4954;
        case 0x4e4958u: goto label_4e4958;
        case 0x4e495cu: goto label_4e495c;
        case 0x4e4960u: goto label_4e4960;
        case 0x4e4964u: goto label_4e4964;
        case 0x4e4968u: goto label_4e4968;
        case 0x4e496cu: goto label_4e496c;
        case 0x4e4970u: goto label_4e4970;
        case 0x4e4974u: goto label_4e4974;
        case 0x4e4978u: goto label_4e4978;
        case 0x4e497cu: goto label_4e497c;
        case 0x4e4980u: goto label_4e4980;
        case 0x4e4984u: goto label_4e4984;
        case 0x4e4988u: goto label_4e4988;
        case 0x4e498cu: goto label_4e498c;
        case 0x4e4990u: goto label_4e4990;
        case 0x4e4994u: goto label_4e4994;
        case 0x4e4998u: goto label_4e4998;
        case 0x4e499cu: goto label_4e499c;
        case 0x4e49a0u: goto label_4e49a0;
        case 0x4e49a4u: goto label_4e49a4;
        case 0x4e49a8u: goto label_4e49a8;
        case 0x4e49acu: goto label_4e49ac;
        case 0x4e49b0u: goto label_4e49b0;
        case 0x4e49b4u: goto label_4e49b4;
        case 0x4e49b8u: goto label_4e49b8;
        case 0x4e49bcu: goto label_4e49bc;
        case 0x4e49c0u: goto label_4e49c0;
        case 0x4e49c4u: goto label_4e49c4;
        case 0x4e49c8u: goto label_4e49c8;
        case 0x4e49ccu: goto label_4e49cc;
        case 0x4e49d0u: goto label_4e49d0;
        case 0x4e49d4u: goto label_4e49d4;
        case 0x4e49d8u: goto label_4e49d8;
        case 0x4e49dcu: goto label_4e49dc;
        case 0x4e49e0u: goto label_4e49e0;
        case 0x4e49e4u: goto label_4e49e4;
        case 0x4e49e8u: goto label_4e49e8;
        case 0x4e49ecu: goto label_4e49ec;
        case 0x4e49f0u: goto label_4e49f0;
        case 0x4e49f4u: goto label_4e49f4;
        case 0x4e49f8u: goto label_4e49f8;
        case 0x4e49fcu: goto label_4e49fc;
        case 0x4e4a00u: goto label_4e4a00;
        case 0x4e4a04u: goto label_4e4a04;
        case 0x4e4a08u: goto label_4e4a08;
        case 0x4e4a0cu: goto label_4e4a0c;
        case 0x4e4a10u: goto label_4e4a10;
        case 0x4e4a14u: goto label_4e4a14;
        case 0x4e4a18u: goto label_4e4a18;
        case 0x4e4a1cu: goto label_4e4a1c;
        case 0x4e4a20u: goto label_4e4a20;
        case 0x4e4a24u: goto label_4e4a24;
        case 0x4e4a28u: goto label_4e4a28;
        case 0x4e4a2cu: goto label_4e4a2c;
        case 0x4e4a30u: goto label_4e4a30;
        case 0x4e4a34u: goto label_4e4a34;
        case 0x4e4a38u: goto label_4e4a38;
        case 0x4e4a3cu: goto label_4e4a3c;
        case 0x4e4a40u: goto label_4e4a40;
        case 0x4e4a44u: goto label_4e4a44;
        case 0x4e4a48u: goto label_4e4a48;
        case 0x4e4a4cu: goto label_4e4a4c;
        case 0x4e4a50u: goto label_4e4a50;
        case 0x4e4a54u: goto label_4e4a54;
        case 0x4e4a58u: goto label_4e4a58;
        case 0x4e4a5cu: goto label_4e4a5c;
        case 0x4e4a60u: goto label_4e4a60;
        case 0x4e4a64u: goto label_4e4a64;
        case 0x4e4a68u: goto label_4e4a68;
        case 0x4e4a6cu: goto label_4e4a6c;
        case 0x4e4a70u: goto label_4e4a70;
        case 0x4e4a74u: goto label_4e4a74;
        case 0x4e4a78u: goto label_4e4a78;
        case 0x4e4a7cu: goto label_4e4a7c;
        case 0x4e4a80u: goto label_4e4a80;
        case 0x4e4a84u: goto label_4e4a84;
        case 0x4e4a88u: goto label_4e4a88;
        case 0x4e4a8cu: goto label_4e4a8c;
        case 0x4e4a90u: goto label_4e4a90;
        case 0x4e4a94u: goto label_4e4a94;
        case 0x4e4a98u: goto label_4e4a98;
        case 0x4e4a9cu: goto label_4e4a9c;
        case 0x4e4aa0u: goto label_4e4aa0;
        case 0x4e4aa4u: goto label_4e4aa4;
        case 0x4e4aa8u: goto label_4e4aa8;
        case 0x4e4aacu: goto label_4e4aac;
        case 0x4e4ab0u: goto label_4e4ab0;
        case 0x4e4ab4u: goto label_4e4ab4;
        case 0x4e4ab8u: goto label_4e4ab8;
        case 0x4e4abcu: goto label_4e4abc;
        case 0x4e4ac0u: goto label_4e4ac0;
        case 0x4e4ac4u: goto label_4e4ac4;
        case 0x4e4ac8u: goto label_4e4ac8;
        case 0x4e4accu: goto label_4e4acc;
        case 0x4e4ad0u: goto label_4e4ad0;
        case 0x4e4ad4u: goto label_4e4ad4;
        case 0x4e4ad8u: goto label_4e4ad8;
        case 0x4e4adcu: goto label_4e4adc;
        case 0x4e4ae0u: goto label_4e4ae0;
        case 0x4e4ae4u: goto label_4e4ae4;
        case 0x4e4ae8u: goto label_4e4ae8;
        case 0x4e4aecu: goto label_4e4aec;
        case 0x4e4af0u: goto label_4e4af0;
        case 0x4e4af4u: goto label_4e4af4;
        case 0x4e4af8u: goto label_4e4af8;
        case 0x4e4afcu: goto label_4e4afc;
        case 0x4e4b00u: goto label_4e4b00;
        case 0x4e4b04u: goto label_4e4b04;
        case 0x4e4b08u: goto label_4e4b08;
        case 0x4e4b0cu: goto label_4e4b0c;
        case 0x4e4b10u: goto label_4e4b10;
        case 0x4e4b14u: goto label_4e4b14;
        case 0x4e4b18u: goto label_4e4b18;
        case 0x4e4b1cu: goto label_4e4b1c;
        case 0x4e4b20u: goto label_4e4b20;
        case 0x4e4b24u: goto label_4e4b24;
        case 0x4e4b28u: goto label_4e4b28;
        case 0x4e4b2cu: goto label_4e4b2c;
        case 0x4e4b30u: goto label_4e4b30;
        case 0x4e4b34u: goto label_4e4b34;
        case 0x4e4b38u: goto label_4e4b38;
        case 0x4e4b3cu: goto label_4e4b3c;
        case 0x4e4b40u: goto label_4e4b40;
        case 0x4e4b44u: goto label_4e4b44;
        case 0x4e4b48u: goto label_4e4b48;
        case 0x4e4b4cu: goto label_4e4b4c;
        case 0x4e4b50u: goto label_4e4b50;
        case 0x4e4b54u: goto label_4e4b54;
        case 0x4e4b58u: goto label_4e4b58;
        case 0x4e4b5cu: goto label_4e4b5c;
        case 0x4e4b60u: goto label_4e4b60;
        case 0x4e4b64u: goto label_4e4b64;
        case 0x4e4b68u: goto label_4e4b68;
        case 0x4e4b6cu: goto label_4e4b6c;
        case 0x4e4b70u: goto label_4e4b70;
        case 0x4e4b74u: goto label_4e4b74;
        case 0x4e4b78u: goto label_4e4b78;
        case 0x4e4b7cu: goto label_4e4b7c;
        case 0x4e4b80u: goto label_4e4b80;
        case 0x4e4b84u: goto label_4e4b84;
        case 0x4e4b88u: goto label_4e4b88;
        case 0x4e4b8cu: goto label_4e4b8c;
        case 0x4e4b90u: goto label_4e4b90;
        case 0x4e4b94u: goto label_4e4b94;
        case 0x4e4b98u: goto label_4e4b98;
        case 0x4e4b9cu: goto label_4e4b9c;
        case 0x4e4ba0u: goto label_4e4ba0;
        case 0x4e4ba4u: goto label_4e4ba4;
        case 0x4e4ba8u: goto label_4e4ba8;
        case 0x4e4bacu: goto label_4e4bac;
        case 0x4e4bb0u: goto label_4e4bb0;
        case 0x4e4bb4u: goto label_4e4bb4;
        case 0x4e4bb8u: goto label_4e4bb8;
        case 0x4e4bbcu: goto label_4e4bbc;
        case 0x4e4bc0u: goto label_4e4bc0;
        case 0x4e4bc4u: goto label_4e4bc4;
        case 0x4e4bc8u: goto label_4e4bc8;
        case 0x4e4bccu: goto label_4e4bcc;
        case 0x4e4bd0u: goto label_4e4bd0;
        case 0x4e4bd4u: goto label_4e4bd4;
        case 0x4e4bd8u: goto label_4e4bd8;
        case 0x4e4bdcu: goto label_4e4bdc;
        case 0x4e4be0u: goto label_4e4be0;
        case 0x4e4be4u: goto label_4e4be4;
        case 0x4e4be8u: goto label_4e4be8;
        case 0x4e4becu: goto label_4e4bec;
        case 0x4e4bf0u: goto label_4e4bf0;
        case 0x4e4bf4u: goto label_4e4bf4;
        case 0x4e4bf8u: goto label_4e4bf8;
        case 0x4e4bfcu: goto label_4e4bfc;
        case 0x4e4c00u: goto label_4e4c00;
        case 0x4e4c04u: goto label_4e4c04;
        case 0x4e4c08u: goto label_4e4c08;
        case 0x4e4c0cu: goto label_4e4c0c;
        case 0x4e4c10u: goto label_4e4c10;
        case 0x4e4c14u: goto label_4e4c14;
        case 0x4e4c18u: goto label_4e4c18;
        case 0x4e4c1cu: goto label_4e4c1c;
        case 0x4e4c20u: goto label_4e4c20;
        case 0x4e4c24u: goto label_4e4c24;
        case 0x4e4c28u: goto label_4e4c28;
        case 0x4e4c2cu: goto label_4e4c2c;
        case 0x4e4c30u: goto label_4e4c30;
        case 0x4e4c34u: goto label_4e4c34;
        case 0x4e4c38u: goto label_4e4c38;
        case 0x4e4c3cu: goto label_4e4c3c;
        case 0x4e4c40u: goto label_4e4c40;
        case 0x4e4c44u: goto label_4e4c44;
        case 0x4e4c48u: goto label_4e4c48;
        case 0x4e4c4cu: goto label_4e4c4c;
        case 0x4e4c50u: goto label_4e4c50;
        case 0x4e4c54u: goto label_4e4c54;
        case 0x4e4c58u: goto label_4e4c58;
        case 0x4e4c5cu: goto label_4e4c5c;
        case 0x4e4c60u: goto label_4e4c60;
        case 0x4e4c64u: goto label_4e4c64;
        case 0x4e4c68u: goto label_4e4c68;
        case 0x4e4c6cu: goto label_4e4c6c;
        case 0x4e4c70u: goto label_4e4c70;
        case 0x4e4c74u: goto label_4e4c74;
        case 0x4e4c78u: goto label_4e4c78;
        case 0x4e4c7cu: goto label_4e4c7c;
        case 0x4e4c80u: goto label_4e4c80;
        case 0x4e4c84u: goto label_4e4c84;
        case 0x4e4c88u: goto label_4e4c88;
        case 0x4e4c8cu: goto label_4e4c8c;
        case 0x4e4c90u: goto label_4e4c90;
        case 0x4e4c94u: goto label_4e4c94;
        case 0x4e4c98u: goto label_4e4c98;
        case 0x4e4c9cu: goto label_4e4c9c;
        case 0x4e4ca0u: goto label_4e4ca0;
        case 0x4e4ca4u: goto label_4e4ca4;
        case 0x4e4ca8u: goto label_4e4ca8;
        case 0x4e4cacu: goto label_4e4cac;
        case 0x4e4cb0u: goto label_4e4cb0;
        case 0x4e4cb4u: goto label_4e4cb4;
        case 0x4e4cb8u: goto label_4e4cb8;
        case 0x4e4cbcu: goto label_4e4cbc;
        default: break;
    }

    ctx->pc = 0x4e46b0u;

label_4e46b0:
    // 0x4e46b0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e46b4:
    // 0x4e46b4: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x4e46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_4e46b8:
    // 0x4e46b8: 0x8c45aa98  lw          $a1, -0x5568($v0)
    ctx->pc = 0x4e46b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945432)));
label_4e46bc:
    // 0x4e46bc: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x4e46bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_4e46c0:
    // 0x4e46c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e46c4:
    // 0x4e46c4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_4e46c8:
    if (ctx->pc == 0x4E46C8u) {
        ctx->pc = 0x4E46C8u;
            // 0x4e46c8: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4E46CCu;
        goto label_4e46cc;
    }
    ctx->pc = 0x4E46C4u;
    {
        const bool branch_taken_0x4e46c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E46C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E46C4u;
            // 0x4e46c8: 0xc4a20008  lwc1        $f2, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e46c4) {
            ctx->pc = 0x4E4718u;
            goto label_4e4718;
        }
    }
    ctx->pc = 0x4E46CCu;
label_4e46cc:
    // 0x4e46cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e46d0:
    // 0x4e46d0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4e46d4:
    if (ctx->pc == 0x4E46D4u) {
        ctx->pc = 0x4E46D4u;
            // 0x4e46d4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x4E46D8u;
        goto label_4e46d8;
    }
    ctx->pc = 0x4E46D0u;
    {
        const bool branch_taken_0x4e46d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e46d0) {
            ctx->pc = 0x4E46D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E46D0u;
            // 0x4e46d4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E46E0u;
            goto label_4e46e0;
        }
    }
    ctx->pc = 0x4E46D8u;
label_4e46d8:
    // 0x4e46d8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4e46dc:
    if (ctx->pc == 0x4E46DCu) {
        ctx->pc = 0x4E46DCu;
            // 0x4e46dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E46E0u;
        goto label_4e46e0;
    }
    ctx->pc = 0x4E46D8u;
    {
        const bool branch_taken_0x4e46d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E46DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E46D8u;
            // 0x4e46dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e46d8) {
            ctx->pc = 0x4E4750u;
            goto label_4e4750;
        }
    }
    ctx->pc = 0x4E46E0u;
label_4e46e0:
    // 0x4e46e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e46e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e46e4:
    // 0x4e46e4: 0x0  nop
    ctx->pc = 0x4e46e4u;
    // NOP
label_4e46e8:
    // 0x4e46e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4e46e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4e46ec:
    // 0x4e46ec: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x4e46ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e46f0:
    // 0x4e46f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e46f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e46f4:
    // 0x4e46f4: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
label_4e46f8:
    if (ctx->pc == 0x4E46F8u) {
        ctx->pc = 0x4E46F8u;
            // 0x4e46f8: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->pc = 0x4E46FCu;
        goto label_4e46fc;
    }
    ctx->pc = 0x4E46F4u;
    {
        const bool branch_taken_0x4e46f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e46f4) {
            ctx->pc = 0x4E46F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E46F4u;
            // 0x4e46f8: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E474Cu;
            goto label_4e474c;
        }
    }
    ctx->pc = 0x4E46FCu;
label_4e46fc:
    // 0x4e46fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e4700:
    // 0x4e4700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e4700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4704:
    // 0x4e4704: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e4704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e4708:
    // 0x4e4708: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4e4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e470c:
    // 0x4e470c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4e470cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4e4710:
    // 0x4e4710: 0x1000000f  b           . + 4 + (0xF << 2)
label_4e4714:
    if (ctx->pc == 0x4E4714u) {
        ctx->pc = 0x4E4714u;
            // 0x4e4714: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->pc = 0x4E4718u;
        goto label_4e4718;
    }
    ctx->pc = 0x4E4710u;
    {
        const bool branch_taken_0x4e4710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4710u;
            // 0x4e4714: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4710) {
            ctx->pc = 0x4E4750u;
            goto label_4e4750;
        }
    }
    ctx->pc = 0x4E4718u;
label_4e4718:
    // 0x4e4718: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x4e4718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e471c:
    // 0x4e471c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e471cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e4720:
    // 0x4e4720: 0x0  nop
    ctx->pc = 0x4e4720u;
    // NOP
label_4e4724:
    // 0x4e4724: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e4724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e4728:
    // 0x4e4728: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_4e472c:
    if (ctx->pc == 0x4E472Cu) {
        ctx->pc = 0x4E472Cu;
            // 0x4e472c: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->pc = 0x4E4730u;
        goto label_4e4730;
    }
    ctx->pc = 0x4E4728u;
    {
        const bool branch_taken_0x4e4728 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4e4728) {
            ctx->pc = 0x4E472Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4728u;
            // 0x4e472c: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E474Cu;
            goto label_4e474c;
        }
    }
    ctx->pc = 0x4E4730u;
label_4e4730:
    // 0x4e4730: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e4730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e4734:
    // 0x4e4734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e4734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4738:
    // 0x4e4738: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e473c:
    // 0x4e473c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4e473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4740:
    // 0x4e4740: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4e4740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4e4744:
    // 0x4e4744: 0x10000002  b           . + 4 + (0x2 << 2)
label_4e4748:
    if (ctx->pc == 0x4E4748u) {
        ctx->pc = 0x4E4748u;
            // 0x4e4748: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->pc = 0x4E474Cu;
        goto label_4e474c;
    }
    ctx->pc = 0x4E4744u;
    {
        const bool branch_taken_0x4e4744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4744u;
            // 0x4e4748: 0xe4800120  swc1        $f0, 0x120($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4744) {
            ctx->pc = 0x4E4750u;
            goto label_4e4750;
        }
    }
    ctx->pc = 0x4E474Cu;
label_4e474c:
    // 0x4e474c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4750:
    // 0x4e4750: 0x3e00008  jr          $ra
label_4e4754:
    if (ctx->pc == 0x4E4754u) {
        ctx->pc = 0x4E4758u;
        goto label_4e4758;
    }
    ctx->pc = 0x4E4750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4758u;
label_4e4758:
    // 0x4e4758: 0x0  nop
    ctx->pc = 0x4e4758u;
    // NOP
label_4e475c:
    // 0x4e475c: 0x0  nop
    ctx->pc = 0x4e475cu;
    // NOP
label_4e4760:
    // 0x4e4760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e4760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e4764:
    // 0x4e4764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e4768:
    // 0x4e4768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e4768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e476c:
    // 0x4e476c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e476cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4770:
    // 0x4e4770: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x4e4770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_4e4774:
    // 0x4e4774: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e4778:
    if (ctx->pc == 0x4E4778u) {
        ctx->pc = 0x4E4778u;
            // 0x4e4778: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x4E477Cu;
        goto label_4e477c;
    }
    ctx->pc = 0x4E4774u;
    {
        const bool branch_taken_0x4e4774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4774) {
            ctx->pc = 0x4E4778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4774u;
            // 0x4e4778: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4790u;
            goto label_4e4790;
        }
    }
    ctx->pc = 0x4E477Cu;
label_4e477c:
    // 0x4e477c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e477cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e4780:
    // 0x4e4780: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e4780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e4784:
    // 0x4e4784: 0x320f809  jalr        $t9
label_4e4788:
    if (ctx->pc == 0x4E4788u) {
        ctx->pc = 0x4E4788u;
            // 0x4e4788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E478Cu;
        goto label_4e478c;
    }
    ctx->pc = 0x4E4784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E478Cu);
        ctx->pc = 0x4E4788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4784u;
            // 0x4e4788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E478Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E478Cu; }
            if (ctx->pc != 0x4E478Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E478Cu;
label_4e478c:
    // 0x4e478c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4e478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4e4790:
    // 0x4e4790: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x4e4790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_4e4794:
    // 0x4e4794: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e4798:
    if (ctx->pc == 0x4E4798u) {
        ctx->pc = 0x4E4798u;
            // 0x4e4798: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x4E479Cu;
        goto label_4e479c;
    }
    ctx->pc = 0x4E4794u;
    {
        const bool branch_taken_0x4e4794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4794) {
            ctx->pc = 0x4E4798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4794u;
            // 0x4e4798: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E47B0u;
            goto label_4e47b0;
        }
    }
    ctx->pc = 0x4E479Cu;
label_4e479c:
    // 0x4e479c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e479cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e47a0:
    // 0x4e47a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e47a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e47a4:
    // 0x4e47a4: 0x320f809  jalr        $t9
label_4e47a8:
    if (ctx->pc == 0x4E47A8u) {
        ctx->pc = 0x4E47A8u;
            // 0x4e47a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E47ACu;
        goto label_4e47ac;
    }
    ctx->pc = 0x4E47A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E47ACu);
        ctx->pc = 0x4E47A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E47A4u;
            // 0x4e47a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E47ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E47ACu; }
            if (ctx->pc != 0x4E47ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4E47ACu;
label_4e47ac:
    // 0x4e47ac: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x4e47acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_4e47b0:
    // 0x4e47b0: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x4e47b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_4e47b4:
    // 0x4e47b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e47b8:
    if (ctx->pc == 0x4E47B8u) {
        ctx->pc = 0x4E47B8u;
            // 0x4e47b8: 0xae000c70  sw          $zero, 0xC70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
        ctx->pc = 0x4E47BCu;
        goto label_4e47bc;
    }
    ctx->pc = 0x4E47B4u;
    {
        const bool branch_taken_0x4e47b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e47b4) {
            ctx->pc = 0x4E47B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E47B4u;
            // 0x4e47b8: 0xae000c70  sw          $zero, 0xC70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E47D0u;
            goto label_4e47d0;
        }
    }
    ctx->pc = 0x4E47BCu;
label_4e47bc:
    // 0x4e47bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e47bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e47c0:
    // 0x4e47c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e47c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e47c4:
    // 0x4e47c4: 0x320f809  jalr        $t9
label_4e47c8:
    if (ctx->pc == 0x4E47C8u) {
        ctx->pc = 0x4E47C8u;
            // 0x4e47c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E47CCu;
        goto label_4e47cc;
    }
    ctx->pc = 0x4E47C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E47CCu);
        ctx->pc = 0x4E47C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E47C4u;
            // 0x4e47c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E47CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E47CCu; }
            if (ctx->pc != 0x4E47CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4E47CCu;
label_4e47cc:
    // 0x4e47cc: 0xae000c70  sw          $zero, 0xC70($s0)
    ctx->pc = 0x4e47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
label_4e47d0:
    // 0x4e47d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e47d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e47d4:
    // 0x4e47d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e47d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e47d8:
    // 0x4e47d8: 0x3e00008  jr          $ra
label_4e47dc:
    if (ctx->pc == 0x4E47DCu) {
        ctx->pc = 0x4E47DCu;
            // 0x4e47dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E47E0u;
        goto label_4e47e0;
    }
    ctx->pc = 0x4E47D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E47DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E47D8u;
            // 0x4e47dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E47E0u;
label_4e47e0:
    // 0x4e47e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e47e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e47e4:
    // 0x4e47e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e47e8:
    // 0x4e47e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e47e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e47ec:
    // 0x4e47ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e47ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e47f0:
    // 0x4e47f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e47f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e47f4:
    // 0x4e47f4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_4e47f8:
    if (ctx->pc == 0x4E47F8u) {
        ctx->pc = 0x4E47F8u;
            // 0x4e47f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E47FCu;
        goto label_4e47fc;
    }
    ctx->pc = 0x4E47F4u;
    {
        const bool branch_taken_0x4e47f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E47F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E47F4u;
            // 0x4e47f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e47f4) {
            ctx->pc = 0x4E4858u;
            goto label_4e4858;
        }
    }
    ctx->pc = 0x4E47FCu;
label_4e47fc:
    // 0x4e47fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e4800:
    // 0x4e4800: 0x244239d0  addiu       $v0, $v0, 0x39D0
    ctx->pc = 0x4e4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14800));
label_4e4804:
    // 0x4e4804: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_4e4808:
    if (ctx->pc == 0x4E4808u) {
        ctx->pc = 0x4E4808u;
            // 0x4e4808: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E480Cu;
        goto label_4e480c;
    }
    ctx->pc = 0x4E4804u;
    {
        const bool branch_taken_0x4e4804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4804u;
            // 0x4e4808: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4804) {
            ctx->pc = 0x4E4840u;
            goto label_4e4840;
        }
    }
    ctx->pc = 0x4E480Cu;
label_4e480c:
    // 0x4e480c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e4810:
    // 0x4e4810: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4e4810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4e4814:
    // 0x4e4814: 0xc0d37dc  jal         func_34DF70
label_4e4818:
    if (ctx->pc == 0x4E4818u) {
        ctx->pc = 0x4E4818u;
            // 0x4e4818: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E481Cu;
        goto label_4e481c;
    }
    ctx->pc = 0x4E4814u;
    SET_GPR_U32(ctx, 31, 0x4E481Cu);
    ctx->pc = 0x4E4818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4814u;
            // 0x4e4818: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E481Cu; }
        if (ctx->pc != 0x4E481Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E481Cu; }
        if (ctx->pc != 0x4E481Cu) { return; }
    }
    ctx->pc = 0x4E481Cu;
label_4e481c:
    // 0x4e481c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_4e4820:
    if (ctx->pc == 0x4E4820u) {
        ctx->pc = 0x4E4820u;
            // 0x4e4820: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4E4824u;
        goto label_4e4824;
    }
    ctx->pc = 0x4E481Cu;
    {
        const bool branch_taken_0x4e481c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e481c) {
            ctx->pc = 0x4E4820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E481Cu;
            // 0x4e4820: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4844u;
            goto label_4e4844;
        }
    }
    ctx->pc = 0x4E4824u;
label_4e4824:
    // 0x4e4824: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e4824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e4828:
    // 0x4e4828: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4e4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4e482c:
    // 0x4e482c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4e4830:
    if (ctx->pc == 0x4E4830u) {
        ctx->pc = 0x4E4830u;
            // 0x4e4830: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4E4834u;
        goto label_4e4834;
    }
    ctx->pc = 0x4E482Cu;
    {
        const bool branch_taken_0x4e482c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E482Cu;
            // 0x4e4830: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e482c) {
            ctx->pc = 0x4E4840u;
            goto label_4e4840;
        }
    }
    ctx->pc = 0x4E4834u;
label_4e4834:
    // 0x4e4834: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e4834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e4838:
    // 0x4e4838: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4e4838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4e483c:
    // 0x4e483c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e483cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e4840:
    // 0x4e4840: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e4840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4e4844:
    // 0x4e4844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e4844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e4848:
    // 0x4e4848: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e484c:
    if (ctx->pc == 0x4E484Cu) {
        ctx->pc = 0x4E484Cu;
            // 0x4e484c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4850u;
        goto label_4e4850;
    }
    ctx->pc = 0x4E4848u;
    {
        const bool branch_taken_0x4e4848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e4848) {
            ctx->pc = 0x4E484Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4848u;
            // 0x4e484c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E485Cu;
            goto label_4e485c;
        }
    }
    ctx->pc = 0x4E4850u;
label_4e4850:
    // 0x4e4850: 0xc0400a8  jal         func_1002A0
label_4e4854:
    if (ctx->pc == 0x4E4854u) {
        ctx->pc = 0x4E4854u;
            // 0x4e4854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4858u;
        goto label_4e4858;
    }
    ctx->pc = 0x4E4850u;
    SET_GPR_U32(ctx, 31, 0x4E4858u);
    ctx->pc = 0x4E4854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4850u;
            // 0x4e4854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4858u; }
        if (ctx->pc != 0x4E4858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4858u; }
        if (ctx->pc != 0x4E4858u) { return; }
    }
    ctx->pc = 0x4E4858u;
label_4e4858:
    // 0x4e4858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e4858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e485c:
    // 0x4e485c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e485cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4860:
    // 0x4e4860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e4860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4864:
    // 0x4e4864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4868:
    // 0x4e4868: 0x3e00008  jr          $ra
label_4e486c:
    if (ctx->pc == 0x4E486Cu) {
        ctx->pc = 0x4E486Cu;
            // 0x4e486c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E4870u;
        goto label_4e4870;
    }
    ctx->pc = 0x4E4868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4868u;
            // 0x4e486c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4870u;
label_4e4870:
    // 0x4e4870: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4e4874:
    // 0x4e4874: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e4874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e4878:
    // 0x4e4878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e4878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e487c:
    // 0x4e487c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e4880:
    // 0x4e4880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e4880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e4884:
    // 0x4e4884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e4884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4888:
    // 0x4e4888: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x4e4888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_4e488c:
    // 0x4e488c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4e488cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4890:
    // 0x4e4890: 0xae5100d4  sw          $s1, 0xD4($s2)
    ctx->pc = 0x4e4890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 17));
label_4e4894:
    // 0x4e4894: 0xae5000d8  sw          $s0, 0xD8($s2)
    ctx->pc = 0x4e4894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 16));
label_4e4898:
    // 0x4e4898: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x4e4898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_4e489c:
    // 0x4e489c: 0xc0d879c  jal         func_361E70
label_4e48a0:
    if (ctx->pc == 0x4E48A0u) {
        ctx->pc = 0x4E48A0u;
            // 0x4e48a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E48A4u;
        goto label_4e48a4;
    }
    ctx->pc = 0x4E489Cu;
    SET_GPR_U32(ctx, 31, 0x4E48A4u);
    ctx->pc = 0x4E48A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E489Cu;
            // 0x4e48a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E48A4u; }
        if (ctx->pc != 0x4E48A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E48A4u; }
        if (ctx->pc != 0x4E48A4u) { return; }
    }
    ctx->pc = 0x4E48A4u;
label_4e48a4:
    // 0x4e48a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4e48a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4e48a8:
    // 0x4e48a8: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x4e48a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4e48ac:
    // 0x4e48ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4e48b0:
    if (ctx->pc == 0x4E48B0u) {
        ctx->pc = 0x4E48B0u;
            // 0x4e48b0: 0x26520120  addiu       $s2, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->pc = 0x4E48B4u;
        goto label_4e48b4;
    }
    ctx->pc = 0x4E48ACu;
    {
        const bool branch_taken_0x4e48ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E48B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E48ACu;
            // 0x4e48b0: 0x26520120  addiu       $s2, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e48ac) {
            ctx->pc = 0x4E4890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e4890;
        }
    }
    ctx->pc = 0x4E48B4u;
label_4e48b4:
    // 0x4e48b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4e48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4e48b8:
    // 0x4e48b8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4e48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4e48bc:
    // 0x4e48bc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x4e48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_4e48c0:
    // 0x4e48c0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4e48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e48c4:
    // 0x4e48c4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x4e48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_4e48c8:
    // 0x4e48c8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4e48c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4e48cc:
    // 0x4e48cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e48d0:
    // 0x4e48d0: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x4e48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_4e48d4:
    // 0x4e48d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e48d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e48d8:
    // 0x4e48d8: 0xc0a7a88  jal         func_29EA20
label_4e48dc:
    if (ctx->pc == 0x4E48DCu) {
        ctx->pc = 0x4E48DCu;
            // 0x4e48dc: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x4E48E0u;
        goto label_4e48e0;
    }
    ctx->pc = 0x4E48D8u;
    SET_GPR_U32(ctx, 31, 0x4E48E0u);
    ctx->pc = 0x4E48DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E48D8u;
            // 0x4e48dc: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E48E0u; }
        if (ctx->pc != 0x4E48E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E48E0u; }
        if (ctx->pc != 0x4E48E0u) { return; }
    }
    ctx->pc = 0x4E48E0u;
label_4e48e0:
    // 0x4e48e0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4e48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4e48e4:
    // 0x4e48e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e48e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e48e8:
    // 0x4e48e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4e48ec:
    if (ctx->pc == 0x4E48ECu) {
        ctx->pc = 0x4E48ECu;
            // 0x4e48ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E48F0u;
        goto label_4e48f0;
    }
    ctx->pc = 0x4E48E8u;
    {
        const bool branch_taken_0x4e48e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E48ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E48E8u;
            // 0x4e48ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e48e8) {
            ctx->pc = 0x4E4908u;
            goto label_4e4908;
        }
    }
    ctx->pc = 0x4E48F0u;
label_4e48f0:
    // 0x4e48f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4e48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4e48f4:
    // 0x4e48f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e48f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e48f8:
    // 0x4e48f8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4e48f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e48fc:
    // 0x4e48fc: 0xc0804bc  jal         func_2012F0
label_4e4900:
    if (ctx->pc == 0x4E4900u) {
        ctx->pc = 0x4E4900u;
            // 0x4e4900: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4E4904u;
        goto label_4e4904;
    }
    ctx->pc = 0x4E48FCu;
    SET_GPR_U32(ctx, 31, 0x4E4904u);
    ctx->pc = 0x4E4900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E48FCu;
            // 0x4e4900: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4904u; }
        if (ctx->pc != 0x4E4904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4904u; }
        if (ctx->pc != 0x4E4904u) { return; }
    }
    ctx->pc = 0x4E4904u;
label_4e4904:
    // 0x4e4904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e4904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e4908:
    // 0x4e4908: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4e4908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e490c:
    // 0x4e490c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4e490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e4910:
    // 0x4e4910: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4e4910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e4914:
    // 0x4e4914: 0xc040140  jal         func_100500
label_4e4918:
    if (ctx->pc == 0x4E4918u) {
        ctx->pc = 0x4E4918u;
            // 0x4e4918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E491Cu;
        goto label_4e491c;
    }
    ctx->pc = 0x4E4914u;
    SET_GPR_U32(ctx, 31, 0x4E491Cu);
    ctx->pc = 0x4E4918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4914u;
            // 0x4e4918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E491Cu; }
        if (ctx->pc != 0x4E491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E491Cu; }
        if (ctx->pc != 0x4E491Cu) { return; }
    }
    ctx->pc = 0x4E491Cu;
label_4e491c:
    // 0x4e491c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4e4920:
    if (ctx->pc == 0x4E4920u) {
        ctx->pc = 0x4E4920u;
            // 0x4e4920: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x4E4924u;
        goto label_4e4924;
    }
    ctx->pc = 0x4E491Cu;
    {
        const bool branch_taken_0x4e491c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e491c) {
            ctx->pc = 0x4E4920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E491Cu;
            // 0x4e4920: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4960u;
            goto label_4e4960;
        }
    }
    ctx->pc = 0x4E4924u;
label_4e4924:
    // 0x4e4924: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4e4924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4e4928:
    // 0x4e4928: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e4928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e492c:
    // 0x4e492c: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x4e492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_4e4930:
    // 0x4e4930: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x4e4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_4e4934:
    // 0x4e4934: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4e4934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4e4938:
    // 0x4e4938: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4e4938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4e493c:
    // 0x4e493c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4e493cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4e4940:
    // 0x4e4940: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x4e4940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_4e4944:
    // 0x4e4944: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e4944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e4948:
    // 0x4e4948: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4e4948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_4e494c:
    // 0x4e494c: 0x246339d0  addiu       $v1, $v1, 0x39D0
    ctx->pc = 0x4e494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
label_4e4950:
    // 0x4e4950: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4e4950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_4e4954:
    // 0x4e4954: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4e4954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4e4958:
    // 0x4e4958: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x4e4958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_4e495c:
    // 0x4e495c: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x4e495cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_4e4960:
    // 0x4e4960: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4e4960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e4964:
    // 0x4e4964: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x4e4964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_4e4968:
    // 0x4e4968: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4e4968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4e496c:
    // 0x4e496c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4e496cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4e4970:
    // 0x4e4970: 0xc04cbd8  jal         func_132F60
label_4e4974:
    if (ctx->pc == 0x4E4974u) {
        ctx->pc = 0x4E4974u;
            // 0x4e4974: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4E4978u;
        goto label_4e4978;
    }
    ctx->pc = 0x4E4970u;
    SET_GPR_U32(ctx, 31, 0x4E4978u);
    ctx->pc = 0x4E4974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4970u;
            // 0x4e4974: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4978u; }
        if (ctx->pc != 0x4E4978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4978u; }
        if (ctx->pc != 0x4E4978u) { return; }
    }
    ctx->pc = 0x4E4978u;
label_4e4978:
    // 0x4e4978: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4e4978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e497c:
    // 0x4e497c: 0xc04f278  jal         func_13C9E0
label_4e4980:
    if (ctx->pc == 0x4E4980u) {
        ctx->pc = 0x4E4980u;
            // 0x4e4980: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4E4984u;
        goto label_4e4984;
    }
    ctx->pc = 0x4E497Cu;
    SET_GPR_U32(ctx, 31, 0x4E4984u);
    ctx->pc = 0x4E4980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E497Cu;
            // 0x4e4980: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4984u; }
        if (ctx->pc != 0x4E4984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4984u; }
        if (ctx->pc != 0x4E4984u) { return; }
    }
    ctx->pc = 0x4E4984u;
label_4e4984:
    // 0x4e4984: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4e4984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4e4988:
    // 0x4e4988: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4e4988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e498c:
    // 0x4e498c: 0xc04cca0  jal         func_133280
label_4e4990:
    if (ctx->pc == 0x4E4990u) {
        ctx->pc = 0x4E4990u;
            // 0x4e4990: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4994u;
        goto label_4e4994;
    }
    ctx->pc = 0x4E498Cu;
    SET_GPR_U32(ctx, 31, 0x4E4994u);
    ctx->pc = 0x4E4990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E498Cu;
            // 0x4e4990: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4994u; }
        if (ctx->pc != 0x4E4994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4994u; }
        if (ctx->pc != 0x4E4994u) { return; }
    }
    ctx->pc = 0x4E4994u;
label_4e4994:
    // 0x4e4994: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4e4994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4e4998:
    // 0x4e4998: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4e4998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4e499c:
    // 0x4e499c: 0xc04cbe0  jal         func_132F80
label_4e49a0:
    if (ctx->pc == 0x4E49A0u) {
        ctx->pc = 0x4E49A0u;
            // 0x4e49a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E49A4u;
        goto label_4e49a4;
    }
    ctx->pc = 0x4E499Cu;
    SET_GPR_U32(ctx, 31, 0x4E49A4u);
    ctx->pc = 0x4E49A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E499Cu;
            // 0x4e49a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49A4u; }
        if (ctx->pc != 0x4E49A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49A4u; }
        if (ctx->pc != 0x4E49A4u) { return; }
    }
    ctx->pc = 0x4E49A4u;
label_4e49a4:
    // 0x4e49a4: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x4e49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4e49a8:
    // 0x4e49a8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4e49a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4e49ac:
    // 0x4e49ac: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x4e49acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4e49b0:
    // 0x4e49b0: 0xc0d37ec  jal         func_34DFB0
label_4e49b4:
    if (ctx->pc == 0x4E49B4u) {
        ctx->pc = 0x4E49B4u;
            // 0x4e49b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E49B8u;
        goto label_4e49b8;
    }
    ctx->pc = 0x4E49B0u;
    SET_GPR_U32(ctx, 31, 0x4E49B8u);
    ctx->pc = 0x4E49B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E49B0u;
            // 0x4e49b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49B8u; }
        if (ctx->pc != 0x4E49B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49B8u; }
        if (ctx->pc != 0x4E49B8u) { return; }
    }
    ctx->pc = 0x4E49B8u;
label_4e49b8:
    // 0x4e49b8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4e49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4e49bc:
    // 0x4e49bc: 0xc040180  jal         func_100600
label_4e49c0:
    if (ctx->pc == 0x4E49C0u) {
        ctx->pc = 0x4E49C0u;
            // 0x4e49c0: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x4E49C4u;
        goto label_4e49c4;
    }
    ctx->pc = 0x4E49BCu;
    SET_GPR_U32(ctx, 31, 0x4E49C4u);
    ctx->pc = 0x4E49C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E49BCu;
            // 0x4e49c0: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49C4u; }
        if (ctx->pc != 0x4E49C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49C4u; }
        if (ctx->pc != 0x4E49C4u) { return; }
    }
    ctx->pc = 0x4E49C4u;
label_4e49c4:
    // 0x4e49c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e49c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e49c8:
    // 0x4e49c8: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4e49cc:
    if (ctx->pc == 0x4E49CCu) {
        ctx->pc = 0x4E49CCu;
            // 0x4e49cc: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4E49D0u;
        goto label_4e49d0;
    }
    ctx->pc = 0x4E49C8u;
    {
        const bool branch_taken_0x4e49c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e49c8) {
            ctx->pc = 0x4E49CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E49C8u;
            // 0x4e49cc: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4A08u;
            goto label_4e4a08;
        }
    }
    ctx->pc = 0x4E49D0u;
label_4e49d0:
    // 0x4e49d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e49d4:
    // 0x4e49d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e49d8:
    // 0x4e49d8: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4e49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4e49dc:
    // 0x4e49dc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4e49dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4e49e0:
    // 0x4e49e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e49e4:
    // 0x4e49e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e49e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e49e8:
    // 0x4e49e8: 0xc040138  jal         func_1004E0
label_4e49ec:
    if (ctx->pc == 0x4E49ECu) {
        ctx->pc = 0x4E49ECu;
            // 0x4e49ec: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4E49F0u;
        goto label_4e49f0;
    }
    ctx->pc = 0x4E49E8u;
    SET_GPR_U32(ctx, 31, 0x4E49F0u);
    ctx->pc = 0x4E49ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E49E8u;
            // 0x4e49ec: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49F0u; }
        if (ctx->pc != 0x4E49F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E49F0u; }
        if (ctx->pc != 0x4E49F0u) { return; }
    }
    ctx->pc = 0x4E49F0u;
label_4e49f0:
    // 0x4e49f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e49f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4e49f4:
    // 0x4e49f4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4e49f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4e49f8:
    // 0x4e49f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e49f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e49fc:
    // 0x4e49fc: 0xc04a576  jal         func_1295D8
label_4e4a00:
    if (ctx->pc == 0x4E4A00u) {
        ctx->pc = 0x4E4A00u;
            // 0x4e4a00: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4E4A04u;
        goto label_4e4a04;
    }
    ctx->pc = 0x4E49FCu;
    SET_GPR_U32(ctx, 31, 0x4E4A04u);
    ctx->pc = 0x4E4A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E49FCu;
            // 0x4e4a00: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4A04u; }
        if (ctx->pc != 0x4E4A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4A04u; }
        if (ctx->pc != 0x4E4A04u) { return; }
    }
    ctx->pc = 0x4E4A04u;
label_4e4a04:
    // 0x4e4a04: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4e4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4e4a08:
    // 0x4e4a08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4e4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4e4a0c:
    // 0x4e4a0c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4e4a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4e4a10:
    // 0x4e4a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4a14:
    // 0x4e4a14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4e4a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4e4a18:
    // 0x4e4a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e4a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4a1c:
    // 0x4e4a1c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x4e4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_4e4a20:
    // 0x4e4a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e4a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4a24:
    // 0x4e4a24: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4e4a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4e4a28:
    // 0x4e4a28: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4e4a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_4e4a2c:
    // 0x4e4a2c: 0xc122cd8  jal         func_48B360
label_4e4a30:
    if (ctx->pc == 0x4E4A30u) {
        ctx->pc = 0x4E4A30u;
            // 0x4e4a30: 0xae300c70  sw          $s0, 0xC70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3184), GPR_U32(ctx, 16));
        ctx->pc = 0x4E4A34u;
        goto label_4e4a34;
    }
    ctx->pc = 0x4E4A2Cu;
    SET_GPR_U32(ctx, 31, 0x4E4A34u);
    ctx->pc = 0x4E4A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4A2Cu;
            // 0x4e4a30: 0xae300c70  sw          $s0, 0xC70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3184), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4A34u; }
        if (ctx->pc != 0x4E4A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4A34u; }
        if (ctx->pc != 0x4E4A34u) { return; }
    }
    ctx->pc = 0x4E4A34u;
label_4e4a34:
    // 0x4e4a34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e4a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4a38:
    // 0x4e4a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e4a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4a3c:
    // 0x4e4a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e4a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4a40:
    // 0x4e4a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4a44:
    // 0x4e4a44: 0x3e00008  jr          $ra
label_4e4a48:
    if (ctx->pc == 0x4E4A48u) {
        ctx->pc = 0x4E4A48u;
            // 0x4e4a48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4E4A4Cu;
        goto label_4e4a4c;
    }
    ctx->pc = 0x4E4A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4A44u;
            // 0x4e4a48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4A4Cu;
label_4e4a4c:
    // 0x4e4a4c: 0x0  nop
    ctx->pc = 0x4e4a4cu;
    // NOP
label_4e4a50:
    // 0x4e4a50: 0x80e3580  j           func_38D600
label_4e4a54:
    if (ctx->pc == 0x4E4A54u) {
        ctx->pc = 0x4E4A58u;
        goto label_4e4a58;
    }
    ctx->pc = 0x4E4A50u;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038D600_0x38d600(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4E4A58u;
label_4e4a58:
    // 0x4e4a58: 0x0  nop
    ctx->pc = 0x4e4a58u;
    // NOP
label_4e4a5c:
    // 0x4e4a5c: 0x0  nop
    ctx->pc = 0x4e4a5cu;
    // NOP
label_4e4a60:
    // 0x4e4a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e4a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e4a64:
    // 0x4e4a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4a68:
    // 0x4e4a68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e4a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4e4a6c:
    // 0x4e4a6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e4a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e4a70:
    // 0x4e4a70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e4a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e4a74:
    // 0x4e4a74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e4a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e4a78:
    // 0x4e4a78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e4a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e4a7c:
    // 0x4e4a7c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x4e4a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4e4a80:
    // 0x4e4a80: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_4e4a84:
    if (ctx->pc == 0x4E4A84u) {
        ctx->pc = 0x4E4A84u;
            // 0x4e4a84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4A88u;
        goto label_4e4a88;
    }
    ctx->pc = 0x4E4A80u;
    {
        const bool branch_taken_0x4e4a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E4A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4A80u;
            // 0x4e4a84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4a80) {
            ctx->pc = 0x4E4AB0u;
            goto label_4e4ab0;
        }
    }
    ctx->pc = 0x4E4A88u;
label_4e4a88:
    // 0x4e4a88: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4e4a8c:
    if (ctx->pc == 0x4E4A8Cu) {
        ctx->pc = 0x4E4A8Cu;
            // 0x4e4a8c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E4A90u;
        goto label_4e4a90;
    }
    ctx->pc = 0x4E4A88u;
    {
        const bool branch_taken_0x4e4a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4a88) {
            ctx->pc = 0x4E4A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4A88u;
            // 0x4e4a8c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4A98u;
            goto label_4e4a98;
        }
    }
    ctx->pc = 0x4E4A90u;
label_4e4a90:
    // 0x4e4a90: 0x1000007a  b           . + 4 + (0x7A << 2)
label_4e4a94:
    if (ctx->pc == 0x4E4A94u) {
        ctx->pc = 0x4E4A94u;
            // 0x4e4a94: 0x26500130  addiu       $s0, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->pc = 0x4E4A98u;
        goto label_4e4a98;
    }
    ctx->pc = 0x4E4A90u;
    {
        const bool branch_taken_0x4e4a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4A90u;
            // 0x4e4a94: 0x26500130  addiu       $s0, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4a90) {
            ctx->pc = 0x4E4C7Cu;
            goto label_4e4c7c;
        }
    }
    ctx->pc = 0x4E4A98u;
label_4e4a98:
    // 0x4e4a98: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4e4a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4e4a9c:
    // 0x4e4a9c: 0x320f809  jalr        $t9
label_4e4aa0:
    if (ctx->pc == 0x4E4AA0u) {
        ctx->pc = 0x4E4AA4u;
        goto label_4e4aa4;
    }
    ctx->pc = 0x4E4A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E4AA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E4AA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E4AA4u; }
            if (ctx->pc != 0x4E4AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E4AA4u;
label_4e4aa4:
    // 0x4e4aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4aa8:
    // 0x4e4aa8: 0x10000073  b           . + 4 + (0x73 << 2)
label_4e4aac:
    if (ctx->pc == 0x4E4AACu) {
        ctx->pc = 0x4E4AACu;
            // 0x4e4aac: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x4E4AB0u;
        goto label_4e4ab0;
    }
    ctx->pc = 0x4E4AA8u;
    {
        const bool branch_taken_0x4e4aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4AA8u;
            // 0x4e4aac: 0xae4200d0  sw          $v0, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4aa8) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4AB0u;
label_4e4ab0:
    // 0x4e4ab0: 0xc0b6e68  jal         func_2DB9A0
label_4e4ab4:
    if (ctx->pc == 0x4E4AB4u) {
        ctx->pc = 0x4E4AB4u;
            // 0x4e4ab4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E4AB8u;
        goto label_4e4ab8;
    }
    ctx->pc = 0x4E4AB0u;
    SET_GPR_U32(ctx, 31, 0x4E4AB8u);
    ctx->pc = 0x4E4AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4AB0u;
            // 0x4e4ab4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4AB8u; }
        if (ctx->pc != 0x4E4AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4AB8u; }
        if (ctx->pc != 0x4E4AB8u) { return; }
    }
    ctx->pc = 0x4E4AB8u;
label_4e4ab8:
    // 0x4e4ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4abc:
    // 0x4e4abc: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x4e4abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4e4ac0:
    // 0x4e4ac0: 0xc139334  jal         func_4E4CD0
label_4e4ac4:
    if (ctx->pc == 0x4E4AC4u) {
        ctx->pc = 0x4E4AC4u;
            // 0x4e4ac4: 0x26500130  addiu       $s0, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->pc = 0x4E4AC8u;
        goto label_4e4ac8;
    }
    ctx->pc = 0x4E4AC0u;
    SET_GPR_U32(ctx, 31, 0x4E4AC8u);
    ctx->pc = 0x4E4AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4AC0u;
            // 0x4e4ac4: 0x26500130  addiu       $s0, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4CD0u;
    if (runtime->hasFunction(0x4E4CD0u)) {
        auto targetFn = runtime->lookupFunction(0x4E4CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4AC8u; }
        if (ctx->pc != 0x4E4AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4CD0_0x4e4cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4AC8u; }
        if (ctx->pc != 0x4E4AC8u) { return; }
    }
    ctx->pc = 0x4E4AC8u;
label_4e4ac8:
    // 0x4e4ac8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4e4ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e4acc:
    // 0x4e4acc: 0x10450052  beq         $v0, $a1, . + 4 + (0x52 << 2)
label_4e4ad0:
    if (ctx->pc == 0x4E4AD0u) {
        ctx->pc = 0x4E4AD4u;
        goto label_4e4ad4;
    }
    ctx->pc = 0x4E4ACCu;
    {
        const bool branch_taken_0x4e4acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e4acc) {
            ctx->pc = 0x4E4C18u;
            goto label_4e4c18;
        }
    }
    ctx->pc = 0x4E4AD4u;
label_4e4ad4:
    // 0x4e4ad4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e4ad8:
    // 0x4e4ad8: 0x50430040  beql        $v0, $v1, . + 4 + (0x40 << 2)
label_4e4adc:
    if (ctx->pc == 0x4E4ADCu) {
        ctx->pc = 0x4E4ADCu;
            // 0x4e4adc: 0x86420100  lh          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->pc = 0x4E4AE0u;
        goto label_4e4ae0;
    }
    ctx->pc = 0x4E4AD8u;
    {
        const bool branch_taken_0x4e4ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e4ad8) {
            ctx->pc = 0x4E4ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4AD8u;
            // 0x4e4adc: 0x86420100  lh          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4BDCu;
            goto label_4e4bdc;
        }
    }
    ctx->pc = 0x4E4AE0u;
label_4e4ae0:
    // 0x4e4ae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4ae4:
    // 0x4e4ae4: 0x1043002b  beq         $v0, $v1, . + 4 + (0x2B << 2)
label_4e4ae8:
    if (ctx->pc == 0x4E4AE8u) {
        ctx->pc = 0x4E4AECu;
        goto label_4e4aec;
    }
    ctx->pc = 0x4E4AE4u;
    {
        const bool branch_taken_0x4e4ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e4ae4) {
            ctx->pc = 0x4E4B94u;
            goto label_4e4b94;
        }
    }
    ctx->pc = 0x4E4AECu;
label_4e4aec:
    // 0x4e4aec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4e4af0:
    if (ctx->pc == 0x4E4AF0u) {
        ctx->pc = 0x4E4AF0u;
            // 0x4e4af0: 0x86420100  lh          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->pc = 0x4E4AF4u;
        goto label_4e4af4;
    }
    ctx->pc = 0x4E4AECu;
    {
        const bool branch_taken_0x4e4aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4aec) {
            ctx->pc = 0x4E4AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4AECu;
            // 0x4e4af0: 0x86420100  lh          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E4AFCu;
            goto label_4e4afc;
        }
    }
    ctx->pc = 0x4E4AF4u;
label_4e4af4:
    // 0x4e4af4: 0x10000060  b           . + 4 + (0x60 << 2)
label_4e4af8:
    if (ctx->pc == 0x4E4AF8u) {
        ctx->pc = 0x4E4AFCu;
        goto label_4e4afc;
    }
    ctx->pc = 0x4E4AF4u;
    {
        const bool branch_taken_0x4e4af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4af4) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4AFCu;
label_4e4afc:
    // 0x4e4afc: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
label_4e4b00:
    if (ctx->pc == 0x4E4B00u) {
        ctx->pc = 0x4E4B04u;
        goto label_4e4b04;
    }
    ctx->pc = 0x4E4AFCu;
    {
        const bool branch_taken_0x4e4afc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e4afc) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4B04u;
label_4e4b04:
    // 0x4e4b04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e4b08:
    // 0x4e4b08: 0xc0b6de4  jal         func_2DB790
label_4e4b0c:
    if (ctx->pc == 0x4E4B0Cu) {
        ctx->pc = 0x4E4B0Cu;
            // 0x4e4b0c: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x4E4B10u;
        goto label_4e4b10;
    }
    ctx->pc = 0x4E4B08u;
    SET_GPR_U32(ctx, 31, 0x4E4B10u);
    ctx->pc = 0x4E4B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B08u;
            // 0x4e4b0c: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B10u; }
        if (ctx->pc != 0x4E4B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B10u; }
        if (ctx->pc != 0x4E4B10u) { return; }
    }
    ctx->pc = 0x4E4B10u;
label_4e4b10:
    // 0x4e4b10: 0xc0b6e84  jal         func_2DBA10
label_4e4b14:
    if (ctx->pc == 0x4E4B14u) {
        ctx->pc = 0x4E4B18u;
        goto label_4e4b18;
    }
    ctx->pc = 0x4E4B10u;
    SET_GPR_U32(ctx, 31, 0x4E4B18u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B18u; }
        if (ctx->pc != 0x4E4B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B18u; }
        if (ctx->pc != 0x4E4B18u) { return; }
    }
    ctx->pc = 0x4E4B18u;
label_4e4b18:
    // 0x4e4b18: 0xc0b6e60  jal         func_2DB980
label_4e4b1c:
    if (ctx->pc == 0x4E4B1Cu) {
        ctx->pc = 0x4E4B1Cu;
            // 0x4e4b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4B20u;
        goto label_4e4b20;
    }
    ctx->pc = 0x4E4B18u;
    SET_GPR_U32(ctx, 31, 0x4E4B20u);
    ctx->pc = 0x4E4B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B18u;
            // 0x4e4b1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B20u; }
        if (ctx->pc != 0x4E4B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B20u; }
        if (ctx->pc != 0x4E4B20u) { return; }
    }
    ctx->pc = 0x4E4B20u;
label_4e4b20:
    // 0x4e4b20: 0xc0b6e38  jal         func_2DB8E0
label_4e4b24:
    if (ctx->pc == 0x4E4B24u) {
        ctx->pc = 0x4E4B24u;
            // 0x4e4b24: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x4E4B28u;
        goto label_4e4b28;
    }
    ctx->pc = 0x4E4B20u;
    SET_GPR_U32(ctx, 31, 0x4E4B28u);
    ctx->pc = 0x4E4B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B20u;
            // 0x4e4b24: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B28u; }
        if (ctx->pc != 0x4E4B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B28u; }
        if (ctx->pc != 0x4E4B28u) { return; }
    }
    ctx->pc = 0x4E4B28u;
label_4e4b28:
    // 0x4e4b28: 0xc0775b8  jal         func_1DD6E0
label_4e4b2c:
    if (ctx->pc == 0x4E4B2Cu) {
        ctx->pc = 0x4E4B2Cu;
            // 0x4e4b2c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4E4B30u;
        goto label_4e4b30;
    }
    ctx->pc = 0x4E4B28u;
    SET_GPR_U32(ctx, 31, 0x4E4B30u);
    ctx->pc = 0x4E4B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B28u;
            // 0x4e4b2c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B30u; }
        if (ctx->pc != 0x4E4B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B30u; }
        if (ctx->pc != 0x4E4B30u) { return; }
    }
    ctx->pc = 0x4E4B30u;
label_4e4b30:
    // 0x4e4b30: 0xc0775b4  jal         func_1DD6D0
label_4e4b34:
    if (ctx->pc == 0x4E4B34u) {
        ctx->pc = 0x4E4B34u;
            // 0x4e4b34: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E4B38u;
        goto label_4e4b38;
    }
    ctx->pc = 0x4E4B30u;
    SET_GPR_U32(ctx, 31, 0x4E4B38u);
    ctx->pc = 0x4E4B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B30u;
            // 0x4e4b34: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B38u; }
        if (ctx->pc != 0x4E4B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B38u; }
        if (ctx->pc != 0x4E4B38u) { return; }
    }
    ctx->pc = 0x4E4B38u;
label_4e4b38:
    // 0x4e4b38: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x4e4b38u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4e4b3c:
    // 0x4e4b3c: 0xc0b6e28  jal         func_2DB8A0
label_4e4b40:
    if (ctx->pc == 0x4E4B40u) {
        ctx->pc = 0x4E4B40u;
            // 0x4e4b40: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E4B44u;
        goto label_4e4b44;
    }
    ctx->pc = 0x4E4B3Cu;
    SET_GPR_U32(ctx, 31, 0x4E4B44u);
    ctx->pc = 0x4E4B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B3Cu;
            // 0x4e4b40: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B44u; }
        if (ctx->pc != 0x4E4B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B44u; }
        if (ctx->pc != 0x4E4B44u) { return; }
    }
    ctx->pc = 0x4E4B44u;
label_4e4b44:
    // 0x4e4b44: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x4e4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4b48:
    // 0x4e4b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4b4c:
    // 0x4e4b4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e4b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4b50:
    // 0x4e4b50: 0xc139330  jal         func_4E4CC0
label_4e4b54:
    if (ctx->pc == 0x4E4B54u) {
        ctx->pc = 0x4E4B54u;
            // 0x4e4b54: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->pc = 0x4E4B58u;
        goto label_4e4b58;
    }
    ctx->pc = 0x4E4B50u;
    SET_GPR_U32(ctx, 31, 0x4E4B58u);
    ctx->pc = 0x4E4B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B50u;
            // 0x4e4b54: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4CC0u;
    if (runtime->hasFunction(0x4E4CC0u)) {
        auto targetFn = runtime->lookupFunction(0x4E4CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B58u; }
        if (ctx->pc != 0x4E4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4CC0_0x4e4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B58u; }
        if (ctx->pc != 0x4E4B58u) { return; }
    }
    ctx->pc = 0x4E4B58u;
label_4e4b58:
    // 0x4e4b58: 0xc0d1c10  jal         func_347040
label_4e4b5c:
    if (ctx->pc == 0x4E4B5Cu) {
        ctx->pc = 0x4E4B5Cu;
            // 0x4e4b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4B60u;
        goto label_4e4b60;
    }
    ctx->pc = 0x4E4B58u;
    SET_GPR_U32(ctx, 31, 0x4E4B60u);
    ctx->pc = 0x4E4B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B58u;
            // 0x4e4b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B60u; }
        if (ctx->pc != 0x4E4B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B60u; }
        if (ctx->pc != 0x4E4B60u) { return; }
    }
    ctx->pc = 0x4E4B60u;
label_4e4b60:
    // 0x4e4b60: 0x8e440c70  lw          $a0, 0xC70($s2)
    ctx->pc = 0x4e4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3184)));
label_4e4b64:
    // 0x4e4b64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4e4b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e4b68:
    // 0x4e4b68: 0xc122d2c  jal         func_48B4B0
label_4e4b6c:
    if (ctx->pc == 0x4E4B6Cu) {
        ctx->pc = 0x4E4B6Cu;
            // 0x4e4b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4B70u;
        goto label_4e4b70;
    }
    ctx->pc = 0x4E4B68u;
    SET_GPR_U32(ctx, 31, 0x4E4B70u);
    ctx->pc = 0x4E4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B68u;
            // 0x4e4b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B70u; }
        if (ctx->pc != 0x4E4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B70u; }
        if (ctx->pc != 0x4E4B70u) { return; }
    }
    ctx->pc = 0x4E4B70u;
label_4e4b70:
    // 0x4e4b70: 0xc1393a0  jal         func_4E4E80
label_4e4b74:
    if (ctx->pc == 0x4E4B74u) {
        ctx->pc = 0x4E4B74u;
            // 0x4e4b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4B78u;
        goto label_4e4b78;
    }
    ctx->pc = 0x4E4B70u;
    SET_GPR_U32(ctx, 31, 0x4E4B78u);
    ctx->pc = 0x4E4B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B70u;
            // 0x4e4b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4E80u;
    if (runtime->hasFunction(0x4E4E80u)) {
        auto targetFn = runtime->lookupFunction(0x4E4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B78u; }
        if (ctx->pc != 0x4E4B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4E80_0x4e4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B78u; }
        if (ctx->pc != 0x4E4B78u) { return; }
    }
    ctx->pc = 0x4E4B78u;
label_4e4b78:
    // 0x4e4b78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4e4b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4e4b7c:
    // 0x4e4b7c: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x4e4b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4e4b80:
    // 0x4e4b80: 0x0  nop
    ctx->pc = 0x4e4b80u;
    // NOP
label_4e4b84:
    // 0x4e4b84: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_4e4b88:
    if (ctx->pc == 0x4E4B88u) {
        ctx->pc = 0x4E4B8Cu;
        goto label_4e4b8c;
    }
    ctx->pc = 0x4E4B84u;
    {
        const bool branch_taken_0x4e4b84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e4b84) {
            ctx->pc = 0x4E4B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e4b70;
        }
    }
    ctx->pc = 0x4E4B8Cu;
label_4e4b8c:
    // 0x4e4b8c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4e4b90:
    if (ctx->pc == 0x4E4B90u) {
        ctx->pc = 0x4E4B94u;
        goto label_4e4b94;
    }
    ctx->pc = 0x4E4B8Cu;
    {
        const bool branch_taken_0x4e4b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4b8c) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4B94u;
label_4e4b94:
    // 0x4e4b94: 0xc0775b8  jal         func_1DD6E0
label_4e4b98:
    if (ctx->pc == 0x4E4B98u) {
        ctx->pc = 0x4E4B9Cu;
        goto label_4e4b9c;
    }
    ctx->pc = 0x4E4B94u;
    SET_GPR_U32(ctx, 31, 0x4E4B9Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B9Cu; }
        if (ctx->pc != 0x4E4B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4B9Cu; }
        if (ctx->pc != 0x4E4B9Cu) { return; }
    }
    ctx->pc = 0x4E4B9Cu;
label_4e4b9c:
    // 0x4e4b9c: 0xc0775b4  jal         func_1DD6D0
label_4e4ba0:
    if (ctx->pc == 0x4E4BA0u) {
        ctx->pc = 0x4E4BA0u;
            // 0x4e4ba0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E4BA4u;
        goto label_4e4ba4;
    }
    ctx->pc = 0x4E4B9Cu;
    SET_GPR_U32(ctx, 31, 0x4E4BA4u);
    ctx->pc = 0x4E4BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4B9Cu;
            // 0x4e4ba0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BA4u; }
        if (ctx->pc != 0x4E4BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BA4u; }
        if (ctx->pc != 0x4E4BA4u) { return; }
    }
    ctx->pc = 0x4E4BA4u;
label_4e4ba4:
    // 0x4e4ba4: 0xc64100ec  lwc1        $f1, 0xEC($s2)
    ctx->pc = 0x4e4ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e4ba8:
    // 0x4e4ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4bac:
    // 0x4e4bac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4e4bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4e4bb0:
    // 0x4e4bb0: 0xc1391ac  jal         func_4E46B0
label_4e4bb4:
    if (ctx->pc == 0x4E4BB4u) {
        ctx->pc = 0x4E4BB4u;
            // 0x4e4bb4: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->pc = 0x4E4BB8u;
        goto label_4e4bb8;
    }
    ctx->pc = 0x4E4BB0u;
    SET_GPR_U32(ctx, 31, 0x4E4BB8u);
    ctx->pc = 0x4E4BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4BB0u;
            // 0x4e4bb4: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E46B0u;
    goto label_4e46b0;
    ctx->pc = 0x4E4BB8u;
label_4e4bb8:
    // 0x4e4bb8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_4e4bbc:
    if (ctx->pc == 0x4E4BBCu) {
        ctx->pc = 0x4E4BC0u;
        goto label_4e4bc0;
    }
    ctx->pc = 0x4E4BB8u;
    {
        const bool branch_taken_0x4e4bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4bb8) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4BC0u;
label_4e4bc0:
    // 0x4e4bc0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4e4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4e4bc4:
    // 0x4e4bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4bc8:
    // 0x4e4bc8: 0xae4200ec  sw          $v0, 0xEC($s2)
    ctx->pc = 0x4e4bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
label_4e4bcc:
    // 0x4e4bcc: 0xc139330  jal         func_4E4CC0
label_4e4bd0:
    if (ctx->pc == 0x4E4BD0u) {
        ctx->pc = 0x4E4BD0u;
            // 0x4e4bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4E4BD4u;
        goto label_4e4bd4;
    }
    ctx->pc = 0x4E4BCCu;
    SET_GPR_U32(ctx, 31, 0x4E4BD4u);
    ctx->pc = 0x4E4BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4BCCu;
            // 0x4e4bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4CC0u;
    if (runtime->hasFunction(0x4E4CC0u)) {
        auto targetFn = runtime->lookupFunction(0x4E4CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BD4u; }
        if (ctx->pc != 0x4E4BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4CC0_0x4e4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BD4u; }
        if (ctx->pc != 0x4E4BD4u) { return; }
    }
    ctx->pc = 0x4E4BD4u;
label_4e4bd4:
    // 0x4e4bd4: 0x10000028  b           . + 4 + (0x28 << 2)
label_4e4bd8:
    if (ctx->pc == 0x4E4BD8u) {
        ctx->pc = 0x4E4BDCu;
        goto label_4e4bdc;
    }
    ctx->pc = 0x4E4BD4u;
    {
        const bool branch_taken_0x4e4bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4bd4) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4BDCu;
label_4e4bdc:
    // 0x4e4bdc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_4e4be0:
    if (ctx->pc == 0x4E4BE0u) {
        ctx->pc = 0x4E4BE4u;
        goto label_4e4be4;
    }
    ctx->pc = 0x4E4BDCu;
    {
        const bool branch_taken_0x4e4bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e4bdc) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4BE4u;
label_4e4be4:
    // 0x4e4be4: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x4e4be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4be8:
    // 0x4e4be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4bec:
    // 0x4e4bec: 0xc139330  jal         func_4E4CC0
label_4e4bf0:
    if (ctx->pc == 0x4E4BF0u) {
        ctx->pc = 0x4E4BF0u;
            // 0x4e4bf0: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->pc = 0x4E4BF4u;
        goto label_4e4bf4;
    }
    ctx->pc = 0x4E4BECu;
    SET_GPR_U32(ctx, 31, 0x4E4BF4u);
    ctx->pc = 0x4E4BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4BECu;
            // 0x4e4bf0: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4CC0u;
    if (runtime->hasFunction(0x4E4CC0u)) {
        auto targetFn = runtime->lookupFunction(0x4E4CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BF4u; }
        if (ctx->pc != 0x4E4BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4CC0_0x4e4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BF4u; }
        if (ctx->pc != 0x4E4BF4u) { return; }
    }
    ctx->pc = 0x4E4BF4u;
label_4e4bf4:
    // 0x4e4bf4: 0xc139394  jal         func_4E4E50
label_4e4bf8:
    if (ctx->pc == 0x4E4BF8u) {
        ctx->pc = 0x4E4BF8u;
            // 0x4e4bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4BFCu;
        goto label_4e4bfc;
    }
    ctx->pc = 0x4E4BF4u;
    SET_GPR_U32(ctx, 31, 0x4E4BFCu);
    ctx->pc = 0x4E4BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4BF4u;
            // 0x4e4bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4E50u;
    if (runtime->hasFunction(0x4E4E50u)) {
        auto targetFn = runtime->lookupFunction(0x4E4E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BFCu; }
        if (ctx->pc != 0x4E4BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4E50_0x4e4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4BFCu; }
        if (ctx->pc != 0x4E4BFCu) { return; }
    }
    ctx->pc = 0x4E4BFCu;
label_4e4bfc:
    // 0x4e4bfc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4e4bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4e4c00:
    // 0x4e4c00: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x4e4c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4e4c04:
    // 0x4e4c04: 0x0  nop
    ctx->pc = 0x4e4c04u;
    // NOP
label_4e4c08:
    // 0x4e4c08: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_4e4c0c:
    if (ctx->pc == 0x4E4C0Cu) {
        ctx->pc = 0x4E4C10u;
        goto label_4e4c10;
    }
    ctx->pc = 0x4E4C08u;
    {
        const bool branch_taken_0x4e4c08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e4c08) {
            ctx->pc = 0x4E4BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e4bf4;
        }
    }
    ctx->pc = 0x4E4C10u;
label_4e4c10:
    // 0x4e4c10: 0x10000019  b           . + 4 + (0x19 << 2)
label_4e4c14:
    if (ctx->pc == 0x4E4C14u) {
        ctx->pc = 0x4E4C18u;
        goto label_4e4c18;
    }
    ctx->pc = 0x4E4C10u;
    {
        const bool branch_taken_0x4e4c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4c10) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4C18u;
label_4e4c18:
    // 0x4e4c18: 0xc0775b8  jal         func_1DD6E0
label_4e4c1c:
    if (ctx->pc == 0x4E4C1Cu) {
        ctx->pc = 0x4E4C20u;
        goto label_4e4c20;
    }
    ctx->pc = 0x4E4C18u;
    SET_GPR_U32(ctx, 31, 0x4E4C20u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C20u; }
        if (ctx->pc != 0x4E4C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C20u; }
        if (ctx->pc != 0x4E4C20u) { return; }
    }
    ctx->pc = 0x4E4C20u;
label_4e4c20:
    // 0x4e4c20: 0xc0775b4  jal         func_1DD6D0
label_4e4c24:
    if (ctx->pc == 0x4E4C24u) {
        ctx->pc = 0x4E4C24u;
            // 0x4e4c24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E4C28u;
        goto label_4e4c28;
    }
    ctx->pc = 0x4E4C20u;
    SET_GPR_U32(ctx, 31, 0x4E4C28u);
    ctx->pc = 0x4E4C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4C20u;
            // 0x4e4c24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C28u; }
        if (ctx->pc != 0x4E4C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C28u; }
        if (ctx->pc != 0x4E4C28u) { return; }
    }
    ctx->pc = 0x4E4C28u;
label_4e4c28:
    // 0x4e4c28: 0xc64100ec  lwc1        $f1, 0xEC($s2)
    ctx->pc = 0x4e4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e4c2c:
    // 0x4e4c2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4e4c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4e4c30:
    // 0x4e4c30: 0xc0775b8  jal         func_1DD6E0
label_4e4c34:
    if (ctx->pc == 0x4E4C34u) {
        ctx->pc = 0x4E4C34u;
            // 0x4e4c34: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->pc = 0x4E4C38u;
        goto label_4e4c38;
    }
    ctx->pc = 0x4E4C30u;
    SET_GPR_U32(ctx, 31, 0x4E4C38u);
    ctx->pc = 0x4E4C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4C30u;
            // 0x4e4c34: 0xe64000ec  swc1        $f0, 0xEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C38u; }
        if (ctx->pc != 0x4E4C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C38u; }
        if (ctx->pc != 0x4E4C38u) { return; }
    }
    ctx->pc = 0x4E4C38u;
label_4e4c38:
    // 0x4e4c38: 0xc0775b4  jal         func_1DD6D0
label_4e4c3c:
    if (ctx->pc == 0x4E4C3Cu) {
        ctx->pc = 0x4E4C3Cu;
            // 0x4e4c3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4E4C40u;
        goto label_4e4c40;
    }
    ctx->pc = 0x4E4C38u;
    SET_GPR_U32(ctx, 31, 0x4E4C40u);
    ctx->pc = 0x4E4C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4C38u;
            // 0x4e4c3c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C40u; }
        if (ctx->pc != 0x4E4C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C40u; }
        if (ctx->pc != 0x4E4C40u) { return; }
    }
    ctx->pc = 0x4E4C40u;
label_4e4c40:
    // 0x4e4c40: 0xc64200dc  lwc1        $f2, 0xDC($s2)
    ctx->pc = 0x4e4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e4c44:
    // 0x4e4c44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4c48:
    // 0x4e4c48: 0xc64300e0  lwc1        $f3, 0xE0($s2)
    ctx->pc = 0x4e4c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e4c4c:
    // 0x4e4c4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4e4c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4e4c50:
    // 0x4e4c50: 0x0  nop
    ctx->pc = 0x4e4c50u;
    // NOP
label_4e4c54:
    // 0x4e4c54: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4e4c54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4e4c58:
    // 0x4e4c58: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x4e4c58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_4e4c5c:
    // 0x4e4c5c: 0xc1391ac  jal         func_4E46B0
label_4e4c60:
    if (ctx->pc == 0x4E4C60u) {
        ctx->pc = 0x4E4C60u;
            // 0x4e4c60: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->pc = 0x4E4C64u;
        goto label_4e4c64;
    }
    ctx->pc = 0x4E4C5Cu;
    SET_GPR_U32(ctx, 31, 0x4E4C64u);
    ctx->pc = 0x4E4C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4C5Cu;
            // 0x4e4c60: 0xe64000dc  swc1        $f0, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E46B0u;
    goto label_4e46b0;
    ctx->pc = 0x4E4C64u;
label_4e4c64:
    // 0x4e4c64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4e4c68:
    if (ctx->pc == 0x4E4C68u) {
        ctx->pc = 0x4E4C6Cu;
        goto label_4e4c6c;
    }
    ctx->pc = 0x4E4C64u;
    {
        const bool branch_taken_0x4e4c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4c64) {
            ctx->pc = 0x4E4C78u;
            goto label_4e4c78;
        }
    }
    ctx->pc = 0x4E4C6Cu;
label_4e4c6c:
    // 0x4e4c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4c70:
    // 0x4e4c70: 0xc139330  jal         func_4E4CC0
label_4e4c74:
    if (ctx->pc == 0x4E4C74u) {
        ctx->pc = 0x4E4C74u;
            // 0x4e4c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4C78u;
        goto label_4e4c78;
    }
    ctx->pc = 0x4E4C70u;
    SET_GPR_U32(ctx, 31, 0x4E4C78u);
    ctx->pc = 0x4E4C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4C70u;
            // 0x4e4c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4CC0u;
    if (runtime->hasFunction(0x4E4CC0u)) {
        auto targetFn = runtime->lookupFunction(0x4E4CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C78u; }
        if (ctx->pc != 0x4E4C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E4CC0_0x4e4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C78u; }
        if (ctx->pc != 0x4E4C78u) { return; }
    }
    ctx->pc = 0x4E4C78u;
label_4e4c78:
    // 0x4e4c78: 0x26500130  addiu       $s0, $s2, 0x130
    ctx->pc = 0x4e4c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
label_4e4c7c:
    // 0x4e4c7c: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x4e4c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4e4c80:
    // 0x4e4c80: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e4c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4c84:
    // 0x4e4c84: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x4e4c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_4e4c88:
    // 0x4e4c88: 0x320f809  jalr        $t9
label_4e4c8c:
    if (ctx->pc == 0x4E4C8Cu) {
        ctx->pc = 0x4E4C8Cu;
            // 0x4e4c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4C90u;
        goto label_4e4c90;
    }
    ctx->pc = 0x4E4C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E4C90u);
        ctx->pc = 0x4E4C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4C88u;
            // 0x4e4c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E4C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E4C90u; }
            if (ctx->pc != 0x4E4C90u) { return; }
        }
        }
    }
    ctx->pc = 0x4E4C90u;
label_4e4c90:
    // 0x4e4c90: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4e4c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4e4c94:
    // 0x4e4c94: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_4e4c98:
    if (ctx->pc == 0x4E4C98u) {
        ctx->pc = 0x4E4C98u;
            // 0x4e4c98: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->pc = 0x4E4C9Cu;
        goto label_4e4c9c;
    }
    ctx->pc = 0x4E4C94u;
    {
        const bool branch_taken_0x4e4c94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E4C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4C94u;
            // 0x4e4c98: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4c94) {
            ctx->pc = 0x4E4C80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e4c80;
        }
    }
    ctx->pc = 0x4E4C9Cu;
label_4e4c9c:
    // 0x4e4c9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e4c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4e4ca0:
    // 0x4e4ca0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e4ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e4ca4:
    // 0x4e4ca4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e4ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4ca8:
    // 0x4e4ca8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e4ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4cac:
    // 0x4e4cac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e4cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4cb0:
    // 0x4e4cb0: 0x3e00008  jr          $ra
label_4e4cb4:
    if (ctx->pc == 0x4E4CB4u) {
        ctx->pc = 0x4E4CB4u;
            // 0x4e4cb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E4CB8u;
        goto label_4e4cb8;
    }
    ctx->pc = 0x4E4CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4CB0u;
            // 0x4e4cb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4CB8u;
label_4e4cb8:
    // 0x4e4cb8: 0x0  nop
    ctx->pc = 0x4e4cb8u;
    // NOP
label_4e4cbc:
    // 0x4e4cbc: 0x0  nop
    ctx->pc = 0x4e4cbcu;
    // NOP
}
