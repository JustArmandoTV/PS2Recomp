#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00520680
// Address: 0x520680 - 0x520d10
void sub_00520680_0x520680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00520680_0x520680");
#endif

    switch (ctx->pc) {
        case 0x520680u: goto label_520680;
        case 0x520684u: goto label_520684;
        case 0x520688u: goto label_520688;
        case 0x52068cu: goto label_52068c;
        case 0x520690u: goto label_520690;
        case 0x520694u: goto label_520694;
        case 0x520698u: goto label_520698;
        case 0x52069cu: goto label_52069c;
        case 0x5206a0u: goto label_5206a0;
        case 0x5206a4u: goto label_5206a4;
        case 0x5206a8u: goto label_5206a8;
        case 0x5206acu: goto label_5206ac;
        case 0x5206b0u: goto label_5206b0;
        case 0x5206b4u: goto label_5206b4;
        case 0x5206b8u: goto label_5206b8;
        case 0x5206bcu: goto label_5206bc;
        case 0x5206c0u: goto label_5206c0;
        case 0x5206c4u: goto label_5206c4;
        case 0x5206c8u: goto label_5206c8;
        case 0x5206ccu: goto label_5206cc;
        case 0x5206d0u: goto label_5206d0;
        case 0x5206d4u: goto label_5206d4;
        case 0x5206d8u: goto label_5206d8;
        case 0x5206dcu: goto label_5206dc;
        case 0x5206e0u: goto label_5206e0;
        case 0x5206e4u: goto label_5206e4;
        case 0x5206e8u: goto label_5206e8;
        case 0x5206ecu: goto label_5206ec;
        case 0x5206f0u: goto label_5206f0;
        case 0x5206f4u: goto label_5206f4;
        case 0x5206f8u: goto label_5206f8;
        case 0x5206fcu: goto label_5206fc;
        case 0x520700u: goto label_520700;
        case 0x520704u: goto label_520704;
        case 0x520708u: goto label_520708;
        case 0x52070cu: goto label_52070c;
        case 0x520710u: goto label_520710;
        case 0x520714u: goto label_520714;
        case 0x520718u: goto label_520718;
        case 0x52071cu: goto label_52071c;
        case 0x520720u: goto label_520720;
        case 0x520724u: goto label_520724;
        case 0x520728u: goto label_520728;
        case 0x52072cu: goto label_52072c;
        case 0x520730u: goto label_520730;
        case 0x520734u: goto label_520734;
        case 0x520738u: goto label_520738;
        case 0x52073cu: goto label_52073c;
        case 0x520740u: goto label_520740;
        case 0x520744u: goto label_520744;
        case 0x520748u: goto label_520748;
        case 0x52074cu: goto label_52074c;
        case 0x520750u: goto label_520750;
        case 0x520754u: goto label_520754;
        case 0x520758u: goto label_520758;
        case 0x52075cu: goto label_52075c;
        case 0x520760u: goto label_520760;
        case 0x520764u: goto label_520764;
        case 0x520768u: goto label_520768;
        case 0x52076cu: goto label_52076c;
        case 0x520770u: goto label_520770;
        case 0x520774u: goto label_520774;
        case 0x520778u: goto label_520778;
        case 0x52077cu: goto label_52077c;
        case 0x520780u: goto label_520780;
        case 0x520784u: goto label_520784;
        case 0x520788u: goto label_520788;
        case 0x52078cu: goto label_52078c;
        case 0x520790u: goto label_520790;
        case 0x520794u: goto label_520794;
        case 0x520798u: goto label_520798;
        case 0x52079cu: goto label_52079c;
        case 0x5207a0u: goto label_5207a0;
        case 0x5207a4u: goto label_5207a4;
        case 0x5207a8u: goto label_5207a8;
        case 0x5207acu: goto label_5207ac;
        case 0x5207b0u: goto label_5207b0;
        case 0x5207b4u: goto label_5207b4;
        case 0x5207b8u: goto label_5207b8;
        case 0x5207bcu: goto label_5207bc;
        case 0x5207c0u: goto label_5207c0;
        case 0x5207c4u: goto label_5207c4;
        case 0x5207c8u: goto label_5207c8;
        case 0x5207ccu: goto label_5207cc;
        case 0x5207d0u: goto label_5207d0;
        case 0x5207d4u: goto label_5207d4;
        case 0x5207d8u: goto label_5207d8;
        case 0x5207dcu: goto label_5207dc;
        case 0x5207e0u: goto label_5207e0;
        case 0x5207e4u: goto label_5207e4;
        case 0x5207e8u: goto label_5207e8;
        case 0x5207ecu: goto label_5207ec;
        case 0x5207f0u: goto label_5207f0;
        case 0x5207f4u: goto label_5207f4;
        case 0x5207f8u: goto label_5207f8;
        case 0x5207fcu: goto label_5207fc;
        case 0x520800u: goto label_520800;
        case 0x520804u: goto label_520804;
        case 0x520808u: goto label_520808;
        case 0x52080cu: goto label_52080c;
        case 0x520810u: goto label_520810;
        case 0x520814u: goto label_520814;
        case 0x520818u: goto label_520818;
        case 0x52081cu: goto label_52081c;
        case 0x520820u: goto label_520820;
        case 0x520824u: goto label_520824;
        case 0x520828u: goto label_520828;
        case 0x52082cu: goto label_52082c;
        case 0x520830u: goto label_520830;
        case 0x520834u: goto label_520834;
        case 0x520838u: goto label_520838;
        case 0x52083cu: goto label_52083c;
        case 0x520840u: goto label_520840;
        case 0x520844u: goto label_520844;
        case 0x520848u: goto label_520848;
        case 0x52084cu: goto label_52084c;
        case 0x520850u: goto label_520850;
        case 0x520854u: goto label_520854;
        case 0x520858u: goto label_520858;
        case 0x52085cu: goto label_52085c;
        case 0x520860u: goto label_520860;
        case 0x520864u: goto label_520864;
        case 0x520868u: goto label_520868;
        case 0x52086cu: goto label_52086c;
        case 0x520870u: goto label_520870;
        case 0x520874u: goto label_520874;
        case 0x520878u: goto label_520878;
        case 0x52087cu: goto label_52087c;
        case 0x520880u: goto label_520880;
        case 0x520884u: goto label_520884;
        case 0x520888u: goto label_520888;
        case 0x52088cu: goto label_52088c;
        case 0x520890u: goto label_520890;
        case 0x520894u: goto label_520894;
        case 0x520898u: goto label_520898;
        case 0x52089cu: goto label_52089c;
        case 0x5208a0u: goto label_5208a0;
        case 0x5208a4u: goto label_5208a4;
        case 0x5208a8u: goto label_5208a8;
        case 0x5208acu: goto label_5208ac;
        case 0x5208b0u: goto label_5208b0;
        case 0x5208b4u: goto label_5208b4;
        case 0x5208b8u: goto label_5208b8;
        case 0x5208bcu: goto label_5208bc;
        case 0x5208c0u: goto label_5208c0;
        case 0x5208c4u: goto label_5208c4;
        case 0x5208c8u: goto label_5208c8;
        case 0x5208ccu: goto label_5208cc;
        case 0x5208d0u: goto label_5208d0;
        case 0x5208d4u: goto label_5208d4;
        case 0x5208d8u: goto label_5208d8;
        case 0x5208dcu: goto label_5208dc;
        case 0x5208e0u: goto label_5208e0;
        case 0x5208e4u: goto label_5208e4;
        case 0x5208e8u: goto label_5208e8;
        case 0x5208ecu: goto label_5208ec;
        case 0x5208f0u: goto label_5208f0;
        case 0x5208f4u: goto label_5208f4;
        case 0x5208f8u: goto label_5208f8;
        case 0x5208fcu: goto label_5208fc;
        case 0x520900u: goto label_520900;
        case 0x520904u: goto label_520904;
        case 0x520908u: goto label_520908;
        case 0x52090cu: goto label_52090c;
        case 0x520910u: goto label_520910;
        case 0x520914u: goto label_520914;
        case 0x520918u: goto label_520918;
        case 0x52091cu: goto label_52091c;
        case 0x520920u: goto label_520920;
        case 0x520924u: goto label_520924;
        case 0x520928u: goto label_520928;
        case 0x52092cu: goto label_52092c;
        case 0x520930u: goto label_520930;
        case 0x520934u: goto label_520934;
        case 0x520938u: goto label_520938;
        case 0x52093cu: goto label_52093c;
        case 0x520940u: goto label_520940;
        case 0x520944u: goto label_520944;
        case 0x520948u: goto label_520948;
        case 0x52094cu: goto label_52094c;
        case 0x520950u: goto label_520950;
        case 0x520954u: goto label_520954;
        case 0x520958u: goto label_520958;
        case 0x52095cu: goto label_52095c;
        case 0x520960u: goto label_520960;
        case 0x520964u: goto label_520964;
        case 0x520968u: goto label_520968;
        case 0x52096cu: goto label_52096c;
        case 0x520970u: goto label_520970;
        case 0x520974u: goto label_520974;
        case 0x520978u: goto label_520978;
        case 0x52097cu: goto label_52097c;
        case 0x520980u: goto label_520980;
        case 0x520984u: goto label_520984;
        case 0x520988u: goto label_520988;
        case 0x52098cu: goto label_52098c;
        case 0x520990u: goto label_520990;
        case 0x520994u: goto label_520994;
        case 0x520998u: goto label_520998;
        case 0x52099cu: goto label_52099c;
        case 0x5209a0u: goto label_5209a0;
        case 0x5209a4u: goto label_5209a4;
        case 0x5209a8u: goto label_5209a8;
        case 0x5209acu: goto label_5209ac;
        case 0x5209b0u: goto label_5209b0;
        case 0x5209b4u: goto label_5209b4;
        case 0x5209b8u: goto label_5209b8;
        case 0x5209bcu: goto label_5209bc;
        case 0x5209c0u: goto label_5209c0;
        case 0x5209c4u: goto label_5209c4;
        case 0x5209c8u: goto label_5209c8;
        case 0x5209ccu: goto label_5209cc;
        case 0x5209d0u: goto label_5209d0;
        case 0x5209d4u: goto label_5209d4;
        case 0x5209d8u: goto label_5209d8;
        case 0x5209dcu: goto label_5209dc;
        case 0x5209e0u: goto label_5209e0;
        case 0x5209e4u: goto label_5209e4;
        case 0x5209e8u: goto label_5209e8;
        case 0x5209ecu: goto label_5209ec;
        case 0x5209f0u: goto label_5209f0;
        case 0x5209f4u: goto label_5209f4;
        case 0x5209f8u: goto label_5209f8;
        case 0x5209fcu: goto label_5209fc;
        case 0x520a00u: goto label_520a00;
        case 0x520a04u: goto label_520a04;
        case 0x520a08u: goto label_520a08;
        case 0x520a0cu: goto label_520a0c;
        case 0x520a10u: goto label_520a10;
        case 0x520a14u: goto label_520a14;
        case 0x520a18u: goto label_520a18;
        case 0x520a1cu: goto label_520a1c;
        case 0x520a20u: goto label_520a20;
        case 0x520a24u: goto label_520a24;
        case 0x520a28u: goto label_520a28;
        case 0x520a2cu: goto label_520a2c;
        case 0x520a30u: goto label_520a30;
        case 0x520a34u: goto label_520a34;
        case 0x520a38u: goto label_520a38;
        case 0x520a3cu: goto label_520a3c;
        case 0x520a40u: goto label_520a40;
        case 0x520a44u: goto label_520a44;
        case 0x520a48u: goto label_520a48;
        case 0x520a4cu: goto label_520a4c;
        case 0x520a50u: goto label_520a50;
        case 0x520a54u: goto label_520a54;
        case 0x520a58u: goto label_520a58;
        case 0x520a5cu: goto label_520a5c;
        case 0x520a60u: goto label_520a60;
        case 0x520a64u: goto label_520a64;
        case 0x520a68u: goto label_520a68;
        case 0x520a6cu: goto label_520a6c;
        case 0x520a70u: goto label_520a70;
        case 0x520a74u: goto label_520a74;
        case 0x520a78u: goto label_520a78;
        case 0x520a7cu: goto label_520a7c;
        case 0x520a80u: goto label_520a80;
        case 0x520a84u: goto label_520a84;
        case 0x520a88u: goto label_520a88;
        case 0x520a8cu: goto label_520a8c;
        case 0x520a90u: goto label_520a90;
        case 0x520a94u: goto label_520a94;
        case 0x520a98u: goto label_520a98;
        case 0x520a9cu: goto label_520a9c;
        case 0x520aa0u: goto label_520aa0;
        case 0x520aa4u: goto label_520aa4;
        case 0x520aa8u: goto label_520aa8;
        case 0x520aacu: goto label_520aac;
        case 0x520ab0u: goto label_520ab0;
        case 0x520ab4u: goto label_520ab4;
        case 0x520ab8u: goto label_520ab8;
        case 0x520abcu: goto label_520abc;
        case 0x520ac0u: goto label_520ac0;
        case 0x520ac4u: goto label_520ac4;
        case 0x520ac8u: goto label_520ac8;
        case 0x520accu: goto label_520acc;
        case 0x520ad0u: goto label_520ad0;
        case 0x520ad4u: goto label_520ad4;
        case 0x520ad8u: goto label_520ad8;
        case 0x520adcu: goto label_520adc;
        case 0x520ae0u: goto label_520ae0;
        case 0x520ae4u: goto label_520ae4;
        case 0x520ae8u: goto label_520ae8;
        case 0x520aecu: goto label_520aec;
        case 0x520af0u: goto label_520af0;
        case 0x520af4u: goto label_520af4;
        case 0x520af8u: goto label_520af8;
        case 0x520afcu: goto label_520afc;
        case 0x520b00u: goto label_520b00;
        case 0x520b04u: goto label_520b04;
        case 0x520b08u: goto label_520b08;
        case 0x520b0cu: goto label_520b0c;
        case 0x520b10u: goto label_520b10;
        case 0x520b14u: goto label_520b14;
        case 0x520b18u: goto label_520b18;
        case 0x520b1cu: goto label_520b1c;
        case 0x520b20u: goto label_520b20;
        case 0x520b24u: goto label_520b24;
        case 0x520b28u: goto label_520b28;
        case 0x520b2cu: goto label_520b2c;
        case 0x520b30u: goto label_520b30;
        case 0x520b34u: goto label_520b34;
        case 0x520b38u: goto label_520b38;
        case 0x520b3cu: goto label_520b3c;
        case 0x520b40u: goto label_520b40;
        case 0x520b44u: goto label_520b44;
        case 0x520b48u: goto label_520b48;
        case 0x520b4cu: goto label_520b4c;
        case 0x520b50u: goto label_520b50;
        case 0x520b54u: goto label_520b54;
        case 0x520b58u: goto label_520b58;
        case 0x520b5cu: goto label_520b5c;
        case 0x520b60u: goto label_520b60;
        case 0x520b64u: goto label_520b64;
        case 0x520b68u: goto label_520b68;
        case 0x520b6cu: goto label_520b6c;
        case 0x520b70u: goto label_520b70;
        case 0x520b74u: goto label_520b74;
        case 0x520b78u: goto label_520b78;
        case 0x520b7cu: goto label_520b7c;
        case 0x520b80u: goto label_520b80;
        case 0x520b84u: goto label_520b84;
        case 0x520b88u: goto label_520b88;
        case 0x520b8cu: goto label_520b8c;
        case 0x520b90u: goto label_520b90;
        case 0x520b94u: goto label_520b94;
        case 0x520b98u: goto label_520b98;
        case 0x520b9cu: goto label_520b9c;
        case 0x520ba0u: goto label_520ba0;
        case 0x520ba4u: goto label_520ba4;
        case 0x520ba8u: goto label_520ba8;
        case 0x520bacu: goto label_520bac;
        case 0x520bb0u: goto label_520bb0;
        case 0x520bb4u: goto label_520bb4;
        case 0x520bb8u: goto label_520bb8;
        case 0x520bbcu: goto label_520bbc;
        case 0x520bc0u: goto label_520bc0;
        case 0x520bc4u: goto label_520bc4;
        case 0x520bc8u: goto label_520bc8;
        case 0x520bccu: goto label_520bcc;
        case 0x520bd0u: goto label_520bd0;
        case 0x520bd4u: goto label_520bd4;
        case 0x520bd8u: goto label_520bd8;
        case 0x520bdcu: goto label_520bdc;
        case 0x520be0u: goto label_520be0;
        case 0x520be4u: goto label_520be4;
        case 0x520be8u: goto label_520be8;
        case 0x520becu: goto label_520bec;
        case 0x520bf0u: goto label_520bf0;
        case 0x520bf4u: goto label_520bf4;
        case 0x520bf8u: goto label_520bf8;
        case 0x520bfcu: goto label_520bfc;
        case 0x520c00u: goto label_520c00;
        case 0x520c04u: goto label_520c04;
        case 0x520c08u: goto label_520c08;
        case 0x520c0cu: goto label_520c0c;
        case 0x520c10u: goto label_520c10;
        case 0x520c14u: goto label_520c14;
        case 0x520c18u: goto label_520c18;
        case 0x520c1cu: goto label_520c1c;
        case 0x520c20u: goto label_520c20;
        case 0x520c24u: goto label_520c24;
        case 0x520c28u: goto label_520c28;
        case 0x520c2cu: goto label_520c2c;
        case 0x520c30u: goto label_520c30;
        case 0x520c34u: goto label_520c34;
        case 0x520c38u: goto label_520c38;
        case 0x520c3cu: goto label_520c3c;
        case 0x520c40u: goto label_520c40;
        case 0x520c44u: goto label_520c44;
        case 0x520c48u: goto label_520c48;
        case 0x520c4cu: goto label_520c4c;
        case 0x520c50u: goto label_520c50;
        case 0x520c54u: goto label_520c54;
        case 0x520c58u: goto label_520c58;
        case 0x520c5cu: goto label_520c5c;
        case 0x520c60u: goto label_520c60;
        case 0x520c64u: goto label_520c64;
        case 0x520c68u: goto label_520c68;
        case 0x520c6cu: goto label_520c6c;
        case 0x520c70u: goto label_520c70;
        case 0x520c74u: goto label_520c74;
        case 0x520c78u: goto label_520c78;
        case 0x520c7cu: goto label_520c7c;
        case 0x520c80u: goto label_520c80;
        case 0x520c84u: goto label_520c84;
        case 0x520c88u: goto label_520c88;
        case 0x520c8cu: goto label_520c8c;
        case 0x520c90u: goto label_520c90;
        case 0x520c94u: goto label_520c94;
        case 0x520c98u: goto label_520c98;
        case 0x520c9cu: goto label_520c9c;
        case 0x520ca0u: goto label_520ca0;
        case 0x520ca4u: goto label_520ca4;
        case 0x520ca8u: goto label_520ca8;
        case 0x520cacu: goto label_520cac;
        case 0x520cb0u: goto label_520cb0;
        case 0x520cb4u: goto label_520cb4;
        case 0x520cb8u: goto label_520cb8;
        case 0x520cbcu: goto label_520cbc;
        case 0x520cc0u: goto label_520cc0;
        case 0x520cc4u: goto label_520cc4;
        case 0x520cc8u: goto label_520cc8;
        case 0x520cccu: goto label_520ccc;
        case 0x520cd0u: goto label_520cd0;
        case 0x520cd4u: goto label_520cd4;
        case 0x520cd8u: goto label_520cd8;
        case 0x520cdcu: goto label_520cdc;
        case 0x520ce0u: goto label_520ce0;
        case 0x520ce4u: goto label_520ce4;
        case 0x520ce8u: goto label_520ce8;
        case 0x520cecu: goto label_520cec;
        case 0x520cf0u: goto label_520cf0;
        case 0x520cf4u: goto label_520cf4;
        case 0x520cf8u: goto label_520cf8;
        case 0x520cfcu: goto label_520cfc;
        case 0x520d00u: goto label_520d00;
        case 0x520d04u: goto label_520d04;
        case 0x520d08u: goto label_520d08;
        case 0x520d0cu: goto label_520d0c;
        default: break;
    }

    ctx->pc = 0x520680u;

label_520680:
    // 0x520680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x520680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_520684:
    // 0x520684: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x520684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_520688:
    // 0x520688: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x520688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52068c:
    // 0x52068c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_520690:
    // 0x520690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x520690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_520694:
    // 0x520694: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x520694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_520698:
    // 0x520698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x520698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52069c:
    // 0x52069c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5206a0:
    // 0x5206a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5206a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5206a4:
    // 0x5206a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x5206a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5206a8:
    // 0x5206a8: 0xc10ca68  jal         func_4329A0
label_5206ac:
    if (ctx->pc == 0x5206ACu) {
        ctx->pc = 0x5206ACu;
            // 0x5206ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x5206B0u;
        goto label_5206b0;
    }
    ctx->pc = 0x5206A8u;
    SET_GPR_U32(ctx, 31, 0x5206B0u);
    ctx->pc = 0x5206ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5206A8u;
            // 0x5206ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5206B0u; }
        if (ctx->pc != 0x5206B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5206B0u; }
        if (ctx->pc != 0x5206B0u) { return; }
    }
    ctx->pc = 0x5206B0u;
label_5206b0:
    // 0x5206b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5206b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5206b4:
    // 0x5206b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5206b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5206b8:
    // 0x5206b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x5206b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_5206bc:
    // 0x5206bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x5206bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_5206c0:
    // 0x5206c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5206c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_5206c4:
    // 0x5206c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x5206c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_5206c8:
    // 0x5206c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5206c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_5206cc:
    // 0x5206cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5206d0:
    // 0x5206d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x5206d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_5206d4:
    // 0x5206d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5206d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5206d8:
    // 0x5206d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x5206d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_5206dc:
    // 0x5206dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x5206dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5206e0:
    // 0x5206e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x5206e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_5206e4:
    // 0x5206e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x5206e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_5206e8:
    // 0x5206e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x5206e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_5206ec:
    // 0x5206ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x5206ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_5206f0:
    // 0x5206f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x5206f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_5206f4:
    // 0x5206f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x5206f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_5206f8:
    // 0x5206f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x5206f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_5206fc:
    // 0x5206fc: 0xc0582cc  jal         func_160B30
label_520700:
    if (ctx->pc == 0x520700u) {
        ctx->pc = 0x520700u;
            // 0x520700: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x520704u;
        goto label_520704;
    }
    ctx->pc = 0x5206FCu;
    SET_GPR_U32(ctx, 31, 0x520704u);
    ctx->pc = 0x520700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5206FCu;
            // 0x520700: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520704u; }
        if (ctx->pc != 0x520704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520704u; }
        if (ctx->pc != 0x520704u) { return; }
    }
    ctx->pc = 0x520704u;
label_520704:
    // 0x520704: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520708:
    // 0x520708: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x520708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_52070c:
    // 0x52070c: 0x24635c58  addiu       $v1, $v1, 0x5C58
    ctx->pc = 0x52070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23640));
label_520710:
    // 0x520710: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x520710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_520714:
    // 0x520714: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x520714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_520718:
    // 0x520718: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x520718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52071c:
    // 0x52071c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52071cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520720:
    // 0x520720: 0xac44ab40  sw          $a0, -0x54C0($v0)
    ctx->pc = 0x520720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945600), GPR_U32(ctx, 4));
label_520724:
    // 0x520724: 0x24635c70  addiu       $v1, $v1, 0x5C70
    ctx->pc = 0x520724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23664));
label_520728:
    // 0x520728: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52072c:
    // 0x52072c: 0x24425ca8  addiu       $v0, $v0, 0x5CA8
    ctx->pc = 0x52072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23720));
label_520730:
    // 0x520730: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x520730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_520734:
    // 0x520734: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x520734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_520738:
    // 0x520738: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x520738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_52073c:
    // 0x52073c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x52073cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_520740:
    // 0x520740: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x520740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_520744:
    // 0x520744: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x520744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_520748:
    // 0x520748: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x520748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_52074c:
    // 0x52074c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x52074cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_520750:
    // 0x520750: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x520750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_520754:
    // 0x520754: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x520754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_520758:
    // 0x520758: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x520758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_52075c:
    // 0x52075c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x52075cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_520760:
    // 0x520760: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x520760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_520764:
    // 0x520764: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_520768:
    if (ctx->pc == 0x520768u) {
        ctx->pc = 0x52076Cu;
        goto label_52076c;
    }
    ctx->pc = 0x520764u;
    {
        const bool branch_taken_0x520764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x520764) {
            ctx->pc = 0x5207F8u;
            goto label_5207f8;
        }
    }
    ctx->pc = 0x52076Cu;
label_52076c:
    // 0x52076c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x52076cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_520770:
    // 0x520770: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x520770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_520774:
    // 0x520774: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x520774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_520778:
    // 0x520778: 0xc040138  jal         func_1004E0
label_52077c:
    if (ctx->pc == 0x52077Cu) {
        ctx->pc = 0x52077Cu;
            // 0x52077c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x520780u;
        goto label_520780;
    }
    ctx->pc = 0x520778u;
    SET_GPR_U32(ctx, 31, 0x520780u);
    ctx->pc = 0x52077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520778u;
            // 0x52077c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520780u; }
        if (ctx->pc != 0x520780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520780u; }
        if (ctx->pc != 0x520780u) { return; }
    }
    ctx->pc = 0x520780u;
label_520780:
    // 0x520780: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x520780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_520784:
    // 0x520784: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x520784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
label_520788:
    // 0x520788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x520788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52078c:
    // 0x52078c: 0x24a50820  addiu       $a1, $a1, 0x820
    ctx->pc = 0x52078cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
label_520790:
    // 0x520790: 0x24c6ff40  addiu       $a2, $a2, -0xC0
    ctx->pc = 0x520790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967104));
label_520794:
    // 0x520794: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x520794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_520798:
    // 0x520798: 0xc040840  jal         func_102100
label_52079c:
    if (ctx->pc == 0x52079Cu) {
        ctx->pc = 0x52079Cu;
            // 0x52079c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5207A0u;
        goto label_5207a0;
    }
    ctx->pc = 0x520798u;
    SET_GPR_U32(ctx, 31, 0x5207A0u);
    ctx->pc = 0x52079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520798u;
            // 0x52079c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207A0u; }
        if (ctx->pc != 0x5207A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207A0u; }
        if (ctx->pc != 0x5207A0u) { return; }
    }
    ctx->pc = 0x5207A0u;
label_5207a0:
    // 0x5207a0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x5207a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_5207a4:
    // 0x5207a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5207a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5207a8:
    // 0x5207a8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x5207a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_5207ac:
    // 0x5207ac: 0xc0788fc  jal         func_1E23F0
label_5207b0:
    if (ctx->pc == 0x5207B0u) {
        ctx->pc = 0x5207B0u;
            // 0x5207b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5207B4u;
        goto label_5207b4;
    }
    ctx->pc = 0x5207ACu;
    SET_GPR_U32(ctx, 31, 0x5207B4u);
    ctx->pc = 0x5207B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5207ACu;
            // 0x5207b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207B4u; }
        if (ctx->pc != 0x5207B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207B4u; }
        if (ctx->pc != 0x5207B4u) { return; }
    }
    ctx->pc = 0x5207B4u;
label_5207b4:
    // 0x5207b4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x5207b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_5207b8:
    // 0x5207b8: 0xc0788fc  jal         func_1E23F0
label_5207bc:
    if (ctx->pc == 0x5207BCu) {
        ctx->pc = 0x5207BCu;
            // 0x5207bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5207C0u;
        goto label_5207c0;
    }
    ctx->pc = 0x5207B8u;
    SET_GPR_U32(ctx, 31, 0x5207C0u);
    ctx->pc = 0x5207BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5207B8u;
            // 0x5207bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207C0u; }
        if (ctx->pc != 0x5207C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207C0u; }
        if (ctx->pc != 0x5207C0u) { return; }
    }
    ctx->pc = 0x5207C0u;
label_5207c0:
    // 0x5207c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5207c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5207c4:
    // 0x5207c4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x5207c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_5207c8:
    // 0x5207c8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x5207c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_5207cc:
    // 0x5207cc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x5207ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_5207d0:
    // 0x5207d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5207d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5207d4:
    // 0x5207d4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x5207d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_5207d8:
    // 0x5207d8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x5207d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_5207dc:
    // 0x5207dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5207dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5207e0:
    // 0x5207e0: 0xc0a997c  jal         func_2A65F0
label_5207e4:
    if (ctx->pc == 0x5207E4u) {
        ctx->pc = 0x5207E4u;
            // 0x5207e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5207E8u;
        goto label_5207e8;
    }
    ctx->pc = 0x5207E0u;
    SET_GPR_U32(ctx, 31, 0x5207E8u);
    ctx->pc = 0x5207E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5207E0u;
            // 0x5207e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207E8u; }
        if (ctx->pc != 0x5207E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5207E8u; }
        if (ctx->pc != 0x5207E8u) { return; }
    }
    ctx->pc = 0x5207E8u;
label_5207e8:
    // 0x5207e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x5207e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_5207ec:
    // 0x5207ec: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x5207ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5207f0:
    // 0x5207f0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_5207f4:
    if (ctx->pc == 0x5207F4u) {
        ctx->pc = 0x5207F4u;
            // 0x5207f4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x5207F8u;
        goto label_5207f8;
    }
    ctx->pc = 0x5207F0u;
    {
        const bool branch_taken_0x5207f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5207F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5207F0u;
            // 0x5207f4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5207f0) {
            ctx->pc = 0x5207C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5207c4;
        }
    }
    ctx->pc = 0x5207F8u;
label_5207f8:
    // 0x5207f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x5207f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5207fc:
    // 0x5207fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5207fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_520800:
    // 0x520800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x520800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_520804:
    // 0x520804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x520804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_520808:
    // 0x520808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x520808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52080c:
    // 0x52080c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52080cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520810:
    // 0x520810: 0x3e00008  jr          $ra
label_520814:
    if (ctx->pc == 0x520814u) {
        ctx->pc = 0x520814u;
            // 0x520814: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x520818u;
        goto label_520818;
    }
    ctx->pc = 0x520810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520810u;
            // 0x520814: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520818u;
label_520818:
    // 0x520818: 0x0  nop
    ctx->pc = 0x520818u;
    // NOP
label_52081c:
    // 0x52081c: 0x0  nop
    ctx->pc = 0x52081cu;
    // NOP
label_520820:
    // 0x520820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x520820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_520824:
    // 0x520824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x520824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_520828:
    // 0x520828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x520828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52082c:
    // 0x52082c: 0xc0b1a7c  jal         func_2C69F0
label_520830:
    if (ctx->pc == 0x520830u) {
        ctx->pc = 0x520830u;
            // 0x520830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520834u;
        goto label_520834;
    }
    ctx->pc = 0x52082Cu;
    SET_GPR_U32(ctx, 31, 0x520834u);
    ctx->pc = 0x520830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52082Cu;
            // 0x520830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C69F0u;
    if (runtime->hasFunction(0x2C69F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C69F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520834u; }
        if (ctx->pc != 0x520834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C69F0_0x2c69f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520834u; }
        if (ctx->pc != 0x520834u) { return; }
    }
    ctx->pc = 0x520834u;
label_520834:
    // 0x520834: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_520838:
    // 0x520838: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52083c:
    // 0x52083c: 0x24425bb0  addiu       $v0, $v0, 0x5BB0
    ctx->pc = 0x52083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23472));
label_520840:
    // 0x520840: 0x24635bf0  addiu       $v1, $v1, 0x5BF0
    ctx->pc = 0x520840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23536));
label_520844:
    // 0x520844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x520844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_520848:
    // 0x520848: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52084c:
    // 0x52084c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x52084cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_520850:
    // 0x520850: 0x24425d10  addiu       $v0, $v0, 0x5D10
    ctx->pc = 0x520850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
label_520854:
    // 0x520854: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520858:
    // 0x520858: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x520858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_52085c:
    // 0x52085c: 0x24635d50  addiu       $v1, $v1, 0x5D50
    ctx->pc = 0x52085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23888));
label_520860:
    // 0x520860: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x520860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_520864:
    // 0x520864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x520864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_520868:
    // 0x520868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x520868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52086c:
    // 0x52086c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52086cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520870:
    // 0x520870: 0x3e00008  jr          $ra
label_520874:
    if (ctx->pc == 0x520874u) {
        ctx->pc = 0x520874u;
            // 0x520874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x520878u;
        goto label_520878;
    }
    ctx->pc = 0x520870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520870u;
            // 0x520874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520878u;
label_520878:
    // 0x520878: 0x0  nop
    ctx->pc = 0x520878u;
    // NOP
label_52087c:
    // 0x52087c: 0x0  nop
    ctx->pc = 0x52087cu;
    // NOP
label_520880:
    // 0x520880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x520880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_520884:
    // 0x520884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x520884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_520888:
    // 0x520888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x520888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52088c:
    // 0x52088c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520890:
    // 0x520890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x520890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_520894:
    // 0x520894: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_520898:
    if (ctx->pc == 0x520898u) {
        ctx->pc = 0x520898u;
            // 0x520898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52089Cu;
        goto label_52089c;
    }
    ctx->pc = 0x520894u;
    {
        const bool branch_taken_0x520894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x520898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520894u;
            // 0x520898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520894) {
            ctx->pc = 0x520904u;
            goto label_520904;
        }
    }
    ctx->pc = 0x52089Cu;
label_52089c:
    // 0x52089c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5208a0:
    // 0x5208a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5208a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5208a4:
    // 0x5208a4: 0x24635bb0  addiu       $v1, $v1, 0x5BB0
    ctx->pc = 0x5208a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23472));
label_5208a8:
    // 0x5208a8: 0x24425bf0  addiu       $v0, $v0, 0x5BF0
    ctx->pc = 0x5208a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
label_5208ac:
    // 0x5208ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5208acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5208b0:
    // 0x5208b0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_5208b4:
    if (ctx->pc == 0x5208B4u) {
        ctx->pc = 0x5208B4u;
            // 0x5208b4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x5208B8u;
        goto label_5208b8;
    }
    ctx->pc = 0x5208B0u;
    {
        const bool branch_taken_0x5208b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5208B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5208B0u;
            // 0x5208b4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5208b0) {
            ctx->pc = 0x5208ECu;
            goto label_5208ec;
        }
    }
    ctx->pc = 0x5208B8u;
label_5208b8:
    // 0x5208b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5208b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5208bc:
    // 0x5208bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5208bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5208c0:
    // 0x5208c0: 0x24636d00  addiu       $v1, $v1, 0x6D00
    ctx->pc = 0x5208c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27904));
label_5208c4:
    // 0x5208c4: 0x24426d40  addiu       $v0, $v0, 0x6D40
    ctx->pc = 0x5208c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27968));
label_5208c8:
    // 0x5208c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5208c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5208cc:
    // 0x5208cc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x5208ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_5208d0:
    // 0x5208d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5208d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5208d4:
    // 0x5208d4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5208d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5208d8:
    // 0x5208d8: 0x320f809  jalr        $t9
label_5208dc:
    if (ctx->pc == 0x5208DCu) {
        ctx->pc = 0x5208E0u;
        goto label_5208e0;
    }
    ctx->pc = 0x5208D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5208E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5208E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5208E0u; }
            if (ctx->pc != 0x5208E0u) { return; }
        }
        }
    }
    ctx->pc = 0x5208E0u;
label_5208e0:
    // 0x5208e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5208e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5208e4:
    // 0x5208e4: 0xc0aee40  jal         func_2BB900
label_5208e8:
    if (ctx->pc == 0x5208E8u) {
        ctx->pc = 0x5208E8u;
            // 0x5208e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5208ECu;
        goto label_5208ec;
    }
    ctx->pc = 0x5208E4u;
    SET_GPR_U32(ctx, 31, 0x5208ECu);
    ctx->pc = 0x5208E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5208E4u;
            // 0x5208e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5208ECu; }
        if (ctx->pc != 0x5208ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5208ECu; }
        if (ctx->pc != 0x5208ECu) { return; }
    }
    ctx->pc = 0x5208ECu;
label_5208ec:
    // 0x5208ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5208ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5208f0:
    // 0x5208f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5208f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5208f4:
    // 0x5208f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5208f8:
    if (ctx->pc == 0x5208F8u) {
        ctx->pc = 0x5208F8u;
            // 0x5208f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5208FCu;
        goto label_5208fc;
    }
    ctx->pc = 0x5208F4u;
    {
        const bool branch_taken_0x5208f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5208f4) {
            ctx->pc = 0x5208F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5208F4u;
            // 0x5208f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520908u;
            goto label_520908;
        }
    }
    ctx->pc = 0x5208FCu;
label_5208fc:
    // 0x5208fc: 0xc0400a8  jal         func_1002A0
label_520900:
    if (ctx->pc == 0x520900u) {
        ctx->pc = 0x520900u;
            // 0x520900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520904u;
        goto label_520904;
    }
    ctx->pc = 0x5208FCu;
    SET_GPR_U32(ctx, 31, 0x520904u);
    ctx->pc = 0x520900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5208FCu;
            // 0x520900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520904u; }
        if (ctx->pc != 0x520904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520904u; }
        if (ctx->pc != 0x520904u) { return; }
    }
    ctx->pc = 0x520904u;
label_520904:
    // 0x520904: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x520904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_520908:
    // 0x520908: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x520908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52090c:
    // 0x52090c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52090cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_520910:
    // 0x520910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520914:
    // 0x520914: 0x3e00008  jr          $ra
label_520918:
    if (ctx->pc == 0x520918u) {
        ctx->pc = 0x520918u;
            // 0x520918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52091Cu;
        goto label_52091c;
    }
    ctx->pc = 0x520914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520914u;
            // 0x520918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52091Cu;
label_52091c:
    // 0x52091c: 0x0  nop
    ctx->pc = 0x52091cu;
    // NOP
label_520920:
    // 0x520920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x520920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_520924:
    // 0x520924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x520924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_520928:
    // 0x520928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x520928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_52092c:
    // 0x52092c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520930:
    // 0x520930: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x520930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_520934:
    // 0x520934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x520934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_520938:
    // 0x520938: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_52093c:
    if (ctx->pc == 0x52093Cu) {
        ctx->pc = 0x52093Cu;
            // 0x52093c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520940u;
        goto label_520940;
    }
    ctx->pc = 0x520938u;
    {
        const bool branch_taken_0x520938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x52093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520938u;
            // 0x52093c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520938) {
            ctx->pc = 0x520998u;
            goto label_520998;
        }
    }
    ctx->pc = 0x520940u;
label_520940:
    // 0x520940: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x520940u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_520944:
    // 0x520944: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_520948:
    if (ctx->pc == 0x520948u) {
        ctx->pc = 0x520948u;
            // 0x520948: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x52094Cu;
        goto label_52094c;
    }
    ctx->pc = 0x520944u;
    {
        const bool branch_taken_0x520944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x520944) {
            ctx->pc = 0x520948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520944u;
            // 0x520948: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52098Cu;
            goto label_52098c;
        }
    }
    ctx->pc = 0x52094Cu;
label_52094c:
    // 0x52094c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x52094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_520950:
    // 0x520950: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x520950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_520954:
    // 0x520954: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x520954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_520958:
    // 0x520958: 0xc0bb2e8  jal         func_2ECBA0
label_52095c:
    if (ctx->pc == 0x52095Cu) {
        ctx->pc = 0x52095Cu;
            // 0x52095c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x520960u;
        goto label_520960;
    }
    ctx->pc = 0x520958u;
    SET_GPR_U32(ctx, 31, 0x520960u);
    ctx->pc = 0x52095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520958u;
            // 0x52095c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520960u; }
        if (ctx->pc != 0x520960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520960u; }
        if (ctx->pc != 0x520960u) { return; }
    }
    ctx->pc = 0x520960u;
label_520960:
    // 0x520960: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x520960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_520964:
    // 0x520964: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x520964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_520968:
    // 0x520968: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x520968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_52096c:
    // 0x52096c: 0xc0bb2e8  jal         func_2ECBA0
label_520970:
    if (ctx->pc == 0x520970u) {
        ctx->pc = 0x520970u;
            // 0x520970: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x520974u;
        goto label_520974;
    }
    ctx->pc = 0x52096Cu;
    SET_GPR_U32(ctx, 31, 0x520974u);
    ctx->pc = 0x520970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52096Cu;
            // 0x520970: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520974u; }
        if (ctx->pc != 0x520974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520974u; }
        if (ctx->pc != 0x520974u) { return; }
    }
    ctx->pc = 0x520974u;
label_520974:
    // 0x520974: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x520974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_520978:
    // 0x520978: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x520978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_52097c:
    // 0x52097c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x52097cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_520980:
    // 0x520980: 0xc0bb2e8  jal         func_2ECBA0
label_520984:
    if (ctx->pc == 0x520984u) {
        ctx->pc = 0x520984u;
            // 0x520984: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x520988u;
        goto label_520988;
    }
    ctx->pc = 0x520980u;
    SET_GPR_U32(ctx, 31, 0x520988u);
    ctx->pc = 0x520984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520980u;
            // 0x520984: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520988u; }
        if (ctx->pc != 0x520988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520988u; }
        if (ctx->pc != 0x520988u) { return; }
    }
    ctx->pc = 0x520988u;
label_520988:
    // 0x520988: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x520988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_52098c:
    // 0x52098c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x52098cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_520990:
    // 0x520990: 0xc122d2c  jal         func_48B4B0
label_520994:
    if (ctx->pc == 0x520994u) {
        ctx->pc = 0x520994u;
            // 0x520994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520998u;
        goto label_520998;
    }
    ctx->pc = 0x520990u;
    SET_GPR_U32(ctx, 31, 0x520998u);
    ctx->pc = 0x520994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520990u;
            // 0x520994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520998u; }
        if (ctx->pc != 0x520998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520998u; }
        if (ctx->pc != 0x520998u) { return; }
    }
    ctx->pc = 0x520998u;
label_520998:
    // 0x520998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x520998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52099c:
    // 0x52099c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52099cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5209a0:
    // 0x5209a0: 0x3e00008  jr          $ra
label_5209a4:
    if (ctx->pc == 0x5209A4u) {
        ctx->pc = 0x5209A4u;
            // 0x5209a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5209A8u;
        goto label_5209a8;
    }
    ctx->pc = 0x5209A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5209A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5209A0u;
            // 0x5209a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5209A8u;
label_5209a8:
    // 0x5209a8: 0x0  nop
    ctx->pc = 0x5209a8u;
    // NOP
label_5209ac:
    // 0x5209ac: 0x0  nop
    ctx->pc = 0x5209acu;
    // NOP
label_5209b0:
    // 0x5209b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5209b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5209b4:
    // 0x5209b4: 0x3e00008  jr          $ra
label_5209b8:
    if (ctx->pc == 0x5209B8u) {
        ctx->pc = 0x5209B8u;
            // 0x5209b8: 0x2442c660  addiu       $v0, $v0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952544));
        ctx->pc = 0x5209BCu;
        goto label_5209bc;
    }
    ctx->pc = 0x5209B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5209B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5209B4u;
            // 0x5209b8: 0x2442c660  addiu       $v0, $v0, -0x39A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5209BCu;
label_5209bc:
    // 0x5209bc: 0x0  nop
    ctx->pc = 0x5209bcu;
    // NOP
label_5209c0:
    // 0x5209c0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5209c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5209c4:
    // 0x5209c4: 0x3e00008  jr          $ra
label_5209c8:
    if (ctx->pc == 0x5209C8u) {
        ctx->pc = 0x5209C8u;
            // 0x5209c8: 0xc440c650  lwc1        $f0, -0x39B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x5209CCu;
        goto label_5209cc;
    }
    ctx->pc = 0x5209C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5209C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5209C4u;
            // 0x5209c8: 0xc440c650  lwc1        $f0, -0x39B0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5209CCu;
label_5209cc:
    // 0x5209cc: 0x0  nop
    ctx->pc = 0x5209ccu;
    // NOP
label_5209d0:
    // 0x5209d0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5209d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5209d4:
    // 0x5209d4: 0x8c42ab40  lw          $v0, -0x54C0($v0)
    ctx->pc = 0x5209d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945600)));
label_5209d8:
    // 0x5209d8: 0x3e00008  jr          $ra
label_5209dc:
    if (ctx->pc == 0x5209DCu) {
        ctx->pc = 0x5209DCu;
            // 0x5209dc: 0x8c420060  lw          $v0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->pc = 0x5209E0u;
        goto label_5209e0;
    }
    ctx->pc = 0x5209D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5209DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5209D8u;
            // 0x5209dc: 0x8c420060  lw          $v0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5209E0u;
label_5209e0:
    // 0x5209e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5209e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_5209e4:
    // 0x5209e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5209e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_5209e8:
    // 0x5209e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5209e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5209ec:
    // 0x5209ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5209ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5209f0:
    // 0x5209f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5209f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5209f4:
    // 0x5209f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5209f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5209f8:
    // 0x5209f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5209f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5209fc:
    // 0x5209fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5209fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520a00:
    // 0x520a00: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x520a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_520a04:
    // 0x520a04: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_520a08:
    if (ctx->pc == 0x520A08u) {
        ctx->pc = 0x520A08u;
            // 0x520a08: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520A0Cu;
        goto label_520a0c;
    }
    ctx->pc = 0x520A04u;
    {
        const bool branch_taken_0x520a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x520A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520A04u;
            // 0x520a08: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520a04) {
            ctx->pc = 0x520A48u;
            goto label_520a48;
        }
    }
    ctx->pc = 0x520A0Cu;
label_520a0c:
    // 0x520a0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x520a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520a10:
    // 0x520a10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x520a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520a14:
    // 0x520a14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x520a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520a18:
    // 0x520a18: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x520a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_520a1c:
    // 0x520a1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x520a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_520a20:
    // 0x520a20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x520a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_520a24:
    // 0x520a24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x520a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520a28:
    // 0x520a28: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x520a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_520a2c:
    // 0x520a2c: 0x320f809  jalr        $t9
label_520a30:
    if (ctx->pc == 0x520A30u) {
        ctx->pc = 0x520A34u;
        goto label_520a34;
    }
    ctx->pc = 0x520A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520A34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x520A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520A34u; }
            if (ctx->pc != 0x520A34u) { return; }
        }
        }
    }
    ctx->pc = 0x520A34u;
label_520a34:
    // 0x520a34: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x520a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_520a38:
    // 0x520a38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x520a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_520a3c:
    // 0x520a3c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x520a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_520a40:
    // 0x520a40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_520a44:
    if (ctx->pc == 0x520A44u) {
        ctx->pc = 0x520A44u;
            // 0x520a44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x520A48u;
        goto label_520a48;
    }
    ctx->pc = 0x520A40u;
    {
        const bool branch_taken_0x520a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x520A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520A40u;
            // 0x520a44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520a40) {
            ctx->pc = 0x520A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_520a18;
        }
    }
    ctx->pc = 0x520A48u;
label_520a48:
    // 0x520a48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x520a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_520a4c:
    // 0x520a4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x520a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_520a50:
    // 0x520a50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x520a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_520a54:
    // 0x520a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x520a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_520a58:
    // 0x520a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x520a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_520a5c:
    // 0x520a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x520a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_520a60:
    // 0x520a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520a64:
    // 0x520a64: 0x3e00008  jr          $ra
label_520a68:
    if (ctx->pc == 0x520A68u) {
        ctx->pc = 0x520A68u;
            // 0x520a68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x520A6Cu;
        goto label_520a6c;
    }
    ctx->pc = 0x520A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520A64u;
            // 0x520a68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520A6Cu;
label_520a6c:
    // 0x520a6c: 0x0  nop
    ctx->pc = 0x520a6cu;
    // NOP
label_520a70:
    // 0x520a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x520a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_520a74:
    // 0x520a74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x520a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_520a78:
    // 0x520a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x520a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_520a7c:
    // 0x520a7c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x520a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_520a80:
    // 0x520a80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x520a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520a84:
    // 0x520a84: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x520a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_520a88:
    // 0x520a88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x520a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_520a8c:
    // 0x520a8c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x520a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_520a90:
    // 0x520a90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x520a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_520a94:
    // 0x520a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x520a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_520a98:
    // 0x520a98: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x520a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_520a9c:
    // 0x520a9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x520a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_520aa0:
    // 0x520aa0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x520aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_520aa4:
    // 0x520aa4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x520aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_520aa8:
    // 0x520aa8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x520aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_520aac:
    // 0x520aac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x520aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_520ab0:
    // 0x520ab0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x520ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_520ab4:
    // 0x520ab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x520ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_520ab8:
    // 0x520ab8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x520ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_520abc:
    // 0x520abc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x520abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_520ac0:
    // 0x520ac0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x520ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_520ac4:
    // 0x520ac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x520ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_520ac8:
    // 0x520ac8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x520ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_520acc:
    // 0x520acc: 0xc0a997c  jal         func_2A65F0
label_520ad0:
    if (ctx->pc == 0x520AD0u) {
        ctx->pc = 0x520AD0u;
            // 0x520ad0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x520AD4u;
        goto label_520ad4;
    }
    ctx->pc = 0x520ACCu;
    SET_GPR_U32(ctx, 31, 0x520AD4u);
    ctx->pc = 0x520AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520ACCu;
            // 0x520ad0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520AD4u; }
        if (ctx->pc != 0x520AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520AD4u; }
        if (ctx->pc != 0x520AD4u) { return; }
    }
    ctx->pc = 0x520AD4u;
label_520ad4:
    // 0x520ad4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x520ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_520ad8:
    // 0x520ad8: 0xc0d879c  jal         func_361E70
label_520adc:
    if (ctx->pc == 0x520ADCu) {
        ctx->pc = 0x520ADCu;
            // 0x520adc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520AE0u;
        goto label_520ae0;
    }
    ctx->pc = 0x520AD8u;
    SET_GPR_U32(ctx, 31, 0x520AE0u);
    ctx->pc = 0x520ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520AD8u;
            // 0x520adc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520AE0u; }
        if (ctx->pc != 0x520AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520AE0u; }
        if (ctx->pc != 0x520AE0u) { return; }
    }
    ctx->pc = 0x520AE0u;
label_520ae0:
    // 0x520ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x520ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_520ae4:
    // 0x520ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520ae8:
    // 0x520ae8: 0x3e00008  jr          $ra
label_520aec:
    if (ctx->pc == 0x520AECu) {
        ctx->pc = 0x520AECu;
            // 0x520aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x520AF0u;
        goto label_520af0;
    }
    ctx->pc = 0x520AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520AE8u;
            // 0x520aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520AF0u;
label_520af0:
    // 0x520af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x520af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_520af4:
    // 0x520af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x520af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_520af8:
    // 0x520af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x520af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520afc:
    // 0x520afc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x520afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_520b00:
    // 0x520b00: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_520b04:
    if (ctx->pc == 0x520B04u) {
        ctx->pc = 0x520B04u;
            // 0x520b04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520B08u;
        goto label_520b08;
    }
    ctx->pc = 0x520B00u;
    {
        const bool branch_taken_0x520b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x520B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520B00u;
            // 0x520b04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520b00) {
            ctx->pc = 0x520C20u;
            goto label_520c20;
        }
    }
    ctx->pc = 0x520B08u;
label_520b08:
    // 0x520b08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x520b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_520b0c:
    // 0x520b0c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x520b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_520b10:
    // 0x520b10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x520b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_520b14:
    // 0x520b14: 0xc075128  jal         func_1D44A0
label_520b18:
    if (ctx->pc == 0x520B18u) {
        ctx->pc = 0x520B18u;
            // 0x520b18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x520B1Cu;
        goto label_520b1c;
    }
    ctx->pc = 0x520B14u;
    SET_GPR_U32(ctx, 31, 0x520B1Cu);
    ctx->pc = 0x520B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520B14u;
            // 0x520b18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520B1Cu; }
        if (ctx->pc != 0x520B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520B1Cu; }
        if (ctx->pc != 0x520B1Cu) { return; }
    }
    ctx->pc = 0x520B1Cu;
label_520b1c:
    // 0x520b1c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x520b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_520b20:
    // 0x520b20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x520b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_520b24:
    // 0x520b24: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x520b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_520b28:
    // 0x520b28: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x520b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_520b2c:
    // 0x520b2c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x520b2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_520b30:
    // 0x520b30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_520b34:
    if (ctx->pc == 0x520B34u) {
        ctx->pc = 0x520B34u;
            // 0x520b34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x520B38u;
        goto label_520b38;
    }
    ctx->pc = 0x520B30u;
    {
        const bool branch_taken_0x520b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x520B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520B30u;
            // 0x520b34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520b30) {
            ctx->pc = 0x520B40u;
            goto label_520b40;
        }
    }
    ctx->pc = 0x520B38u;
label_520b38:
    // 0x520b38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x520b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_520b3c:
    // 0x520b3c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x520b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_520b40:
    // 0x520b40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x520b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520b44:
    // 0x520b44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x520b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_520b48:
    // 0x520b48: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x520b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_520b4c:
    // 0x520b4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x520b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_520b50:
    // 0x520b50: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x520b50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_520b54:
    // 0x520b54: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_520b58:
    if (ctx->pc == 0x520B58u) {
        ctx->pc = 0x520B58u;
            // 0x520b58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x520B5Cu;
        goto label_520b5c;
    }
    ctx->pc = 0x520B54u;
    {
        const bool branch_taken_0x520b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x520b54) {
            ctx->pc = 0x520B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520B54u;
            // 0x520b58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520B68u;
            goto label_520b68;
        }
    }
    ctx->pc = 0x520B5Cu;
label_520b5c:
    // 0x520b5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x520b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_520b60:
    // 0x520b60: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x520b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_520b64:
    // 0x520b64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x520b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_520b68:
    // 0x520b68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x520b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_520b6c:
    // 0x520b6c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x520b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_520b70:
    // 0x520b70: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x520b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_520b74:
    // 0x520b74: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x520b74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_520b78:
    // 0x520b78: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_520b7c:
    if (ctx->pc == 0x520B7Cu) {
        ctx->pc = 0x520B7Cu;
            // 0x520b7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x520B80u;
        goto label_520b80;
    }
    ctx->pc = 0x520B78u;
    {
        const bool branch_taken_0x520b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x520b78) {
            ctx->pc = 0x520B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520B78u;
            // 0x520b7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520B8Cu;
            goto label_520b8c;
        }
    }
    ctx->pc = 0x520B80u;
label_520b80:
    // 0x520b80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x520b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_520b84:
    // 0x520b84: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x520b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_520b88:
    // 0x520b88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x520b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_520b8c:
    // 0x520b8c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x520b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_520b90:
    // 0x520b90: 0x320f809  jalr        $t9
label_520b94:
    if (ctx->pc == 0x520B94u) {
        ctx->pc = 0x520B94u;
            // 0x520b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520B98u;
        goto label_520b98;
    }
    ctx->pc = 0x520B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x520B98u);
        ctx->pc = 0x520B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520B90u;
            // 0x520b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x520B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x520B98u; }
            if (ctx->pc != 0x520B98u) { return; }
        }
        }
    }
    ctx->pc = 0x520B98u;
label_520b98:
    // 0x520b98: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x520b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_520b9c:
    // 0x520b9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520ba0:
    // 0x520ba0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x520ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_520ba4:
    // 0x520ba4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x520ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_520ba8:
    // 0x520ba8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x520ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_520bac:
    // 0x520bac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x520bacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_520bb0:
    // 0x520bb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_520bb4:
    if (ctx->pc == 0x520BB4u) {
        ctx->pc = 0x520BB4u;
            // 0x520bb4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x520BB8u;
        goto label_520bb8;
    }
    ctx->pc = 0x520BB0u;
    {
        const bool branch_taken_0x520bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x520bb0) {
            ctx->pc = 0x520BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520BB0u;
            // 0x520bb4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520BC4u;
            goto label_520bc4;
        }
    }
    ctx->pc = 0x520BB8u;
label_520bb8:
    // 0x520bb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520bbc:
    // 0x520bbc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x520bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_520bc0:
    // 0x520bc0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x520bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_520bc4:
    // 0x520bc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520bc8:
    // 0x520bc8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x520bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_520bcc:
    // 0x520bcc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x520bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_520bd0:
    // 0x520bd0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x520bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_520bd4:
    // 0x520bd4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x520bd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_520bd8:
    // 0x520bd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_520bdc:
    if (ctx->pc == 0x520BDCu) {
        ctx->pc = 0x520BE0u;
        goto label_520be0;
    }
    ctx->pc = 0x520BD8u;
    {
        const bool branch_taken_0x520bd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x520bd8) {
            ctx->pc = 0x520BE8u;
            goto label_520be8;
        }
    }
    ctx->pc = 0x520BE0u;
label_520be0:
    // 0x520be0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520be4:
    // 0x520be4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x520be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_520be8:
    // 0x520be8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520bec:
    // 0x520bec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x520becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_520bf0:
    // 0x520bf0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x520bf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_520bf4:
    // 0x520bf4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_520bf8:
    if (ctx->pc == 0x520BF8u) {
        ctx->pc = 0x520BFCu;
        goto label_520bfc;
    }
    ctx->pc = 0x520BF4u;
    {
        const bool branch_taken_0x520bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x520bf4) {
            ctx->pc = 0x520C04u;
            goto label_520c04;
        }
    }
    ctx->pc = 0x520BFCu;
label_520bfc:
    // 0x520bfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520c00:
    // 0x520c00: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x520c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_520c04:
    // 0x520c04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520c08:
    // 0x520c08: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x520c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_520c0c:
    // 0x520c0c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x520c0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_520c10:
    // 0x520c10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_520c14:
    if (ctx->pc == 0x520C14u) {
        ctx->pc = 0x520C14u;
            // 0x520c14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x520C18u;
        goto label_520c18;
    }
    ctx->pc = 0x520C10u;
    {
        const bool branch_taken_0x520c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x520c10) {
            ctx->pc = 0x520C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520C10u;
            // 0x520c14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520C24u;
            goto label_520c24;
        }
    }
    ctx->pc = 0x520C18u;
label_520c18:
    // 0x520c18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x520c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_520c1c:
    // 0x520c1c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x520c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_520c20:
    // 0x520c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x520c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_520c24:
    // 0x520c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520c28:
    // 0x520c28: 0x3e00008  jr          $ra
label_520c2c:
    if (ctx->pc == 0x520C2Cu) {
        ctx->pc = 0x520C2Cu;
            // 0x520c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x520C30u;
        goto label_520c30;
    }
    ctx->pc = 0x520C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520C28u;
            // 0x520c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520C30u;
label_520c30:
    // 0x520c30: 0x8147fd0  j           func_51FF40
label_520c34:
    if (ctx->pc == 0x520C34u) {
        ctx->pc = 0x520C34u;
            // 0x520c34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x520C38u;
        goto label_520c38;
    }
    ctx->pc = 0x520C30u;
    ctx->pc = 0x520C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520C30u;
            // 0x520c34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51FF40u;
    {
        auto targetFn = runtime->lookupFunction(0x51FF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x520C38u;
label_520c38:
    // 0x520c38: 0x0  nop
    ctx->pc = 0x520c38u;
    // NOP
label_520c3c:
    // 0x520c3c: 0x0  nop
    ctx->pc = 0x520c3cu;
    // NOP
label_520c40:
    // 0x520c40: 0x8148134  j           func_5204D0
label_520c44:
    if (ctx->pc == 0x520C44u) {
        ctx->pc = 0x520C44u;
            // 0x520c44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x520C48u;
        goto label_520c48;
    }
    ctx->pc = 0x520C40u;
    ctx->pc = 0x520C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520C40u;
            // 0x520c44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5204D0u;
    {
        auto targetFn = runtime->lookupFunction(0x5204D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x520C48u;
label_520c48:
    // 0x520c48: 0x0  nop
    ctx->pc = 0x520c48u;
    // NOP
label_520c4c:
    // 0x520c4c: 0x0  nop
    ctx->pc = 0x520c4cu;
    // NOP
label_520c50:
    // 0x520c50: 0x8147f78  j           func_51FDE0
label_520c54:
    if (ctx->pc == 0x520C54u) {
        ctx->pc = 0x520C54u;
            // 0x520c54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x520C58u;
        goto label_520c58;
    }
    ctx->pc = 0x520C50u;
    ctx->pc = 0x520C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520C50u;
            // 0x520c54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51FDE0u;
    if (runtime->hasFunction(0x51FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x51FDE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0051FDE0_0x51fde0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x520C58u;
label_520c58:
    // 0x520c58: 0x0  nop
    ctx->pc = 0x520c58u;
    // NOP
label_520c5c:
    // 0x520c5c: 0x0  nop
    ctx->pc = 0x520c5cu;
    // NOP
label_520c60:
    // 0x520c60: 0x8148220  j           func_520880
label_520c64:
    if (ctx->pc == 0x520C64u) {
        ctx->pc = 0x520C64u;
            // 0x520c64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x520C68u;
        goto label_520c68;
    }
    ctx->pc = 0x520C60u;
    ctx->pc = 0x520C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520C60u;
            // 0x520c64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520880u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_520880;
    ctx->pc = 0x520C68u;
label_520c68:
    // 0x520c68: 0x0  nop
    ctx->pc = 0x520c68u;
    // NOP
label_520c6c:
    // 0x520c6c: 0x0  nop
    ctx->pc = 0x520c6cu;
    // NOP
label_520c70:
    // 0x520c70: 0x8147f54  j           func_51FD50
label_520c74:
    if (ctx->pc == 0x520C74u) {
        ctx->pc = 0x520C74u;
            // 0x520c74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x520C78u;
        goto label_520c78;
    }
    ctx->pc = 0x520C70u;
    ctx->pc = 0x520C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520C70u;
            // 0x520c74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51FD50u;
    {
        auto targetFn = runtime->lookupFunction(0x51FD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x520C78u;
label_520c78:
    // 0x520c78: 0x0  nop
    ctx->pc = 0x520c78u;
    // NOP
label_520c7c:
    // 0x520c7c: 0x0  nop
    ctx->pc = 0x520c7cu;
    // NOP
label_520c80:
    // 0x520c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x520c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_520c84:
    // 0x520c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x520c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_520c88:
    // 0x520c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x520c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_520c8c:
    // 0x520c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x520c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_520c90:
    // 0x520c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x520c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_520c94:
    // 0x520c94: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_520c98:
    if (ctx->pc == 0x520C98u) {
        ctx->pc = 0x520C98u;
            // 0x520c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520C9Cu;
        goto label_520c9c;
    }
    ctx->pc = 0x520C94u;
    {
        const bool branch_taken_0x520c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x520C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520C94u;
            // 0x520c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520c94) {
            ctx->pc = 0x520CF0u;
            goto label_520cf0;
        }
    }
    ctx->pc = 0x520C9Cu;
label_520c9c:
    // 0x520c9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520ca0:
    // 0x520ca0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_520ca4:
    // 0x520ca4: 0x24635dc0  addiu       $v1, $v1, 0x5DC0
    ctx->pc = 0x520ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24000));
label_520ca8:
    // 0x520ca8: 0x24425df8  addiu       $v0, $v0, 0x5DF8
    ctx->pc = 0x520ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24056));
label_520cac:
    // 0x520cac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x520cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_520cb0:
    // 0x520cb0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_520cb4:
    if (ctx->pc == 0x520CB4u) {
        ctx->pc = 0x520CB4u;
            // 0x520cb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x520CB8u;
        goto label_520cb8;
    }
    ctx->pc = 0x520CB0u;
    {
        const bool branch_taken_0x520cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x520CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520CB0u;
            // 0x520cb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520cb0) {
            ctx->pc = 0x520CD8u;
            goto label_520cd8;
        }
    }
    ctx->pc = 0x520CB8u;
label_520cb8:
    // 0x520cb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x520cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_520cbc:
    // 0x520cbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x520cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_520cc0:
    // 0x520cc0: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x520cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
label_520cc4:
    // 0x520cc4: 0x24425f48  addiu       $v0, $v0, 0x5F48
    ctx->pc = 0x520cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24392));
label_520cc8:
    // 0x520cc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x520cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_520ccc:
    // 0x520ccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x520cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_520cd0:
    // 0x520cd0: 0xc148344  jal         func_520D10
label_520cd4:
    if (ctx->pc == 0x520CD4u) {
        ctx->pc = 0x520CD4u;
            // 0x520cd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x520CD8u;
        goto label_520cd8;
    }
    ctx->pc = 0x520CD0u;
    SET_GPR_U32(ctx, 31, 0x520CD8u);
    ctx->pc = 0x520CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520CD0u;
            // 0x520cd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x520D10u;
    if (runtime->hasFunction(0x520D10u)) {
        auto targetFn = runtime->lookupFunction(0x520D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520CD8u; }
        if (ctx->pc != 0x520CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00520D10_0x520d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520CD8u; }
        if (ctx->pc != 0x520CD8u) { return; }
    }
    ctx->pc = 0x520CD8u;
label_520cd8:
    // 0x520cd8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x520cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_520cdc:
    // 0x520cdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x520cdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_520ce0:
    // 0x520ce0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_520ce4:
    if (ctx->pc == 0x520CE4u) {
        ctx->pc = 0x520CE4u;
            // 0x520ce4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520CE8u;
        goto label_520ce8;
    }
    ctx->pc = 0x520CE0u;
    {
        const bool branch_taken_0x520ce0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x520ce0) {
            ctx->pc = 0x520CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520CE0u;
            // 0x520ce4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520CF4u;
            goto label_520cf4;
        }
    }
    ctx->pc = 0x520CE8u;
label_520ce8:
    // 0x520ce8: 0xc0400a8  jal         func_1002A0
label_520cec:
    if (ctx->pc == 0x520CECu) {
        ctx->pc = 0x520CECu;
            // 0x520cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x520CF0u;
        goto label_520cf0;
    }
    ctx->pc = 0x520CE8u;
    SET_GPR_U32(ctx, 31, 0x520CF0u);
    ctx->pc = 0x520CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520CE8u;
            // 0x520cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520CF0u; }
        if (ctx->pc != 0x520CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520CF0u; }
        if (ctx->pc != 0x520CF0u) { return; }
    }
    ctx->pc = 0x520CF0u;
label_520cf0:
    // 0x520cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x520cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_520cf4:
    // 0x520cf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x520cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_520cf8:
    // 0x520cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x520cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_520cfc:
    // 0x520cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_520d00:
    // 0x520d00: 0x3e00008  jr          $ra
label_520d04:
    if (ctx->pc == 0x520D04u) {
        ctx->pc = 0x520D04u;
            // 0x520d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x520D08u;
        goto label_520d08;
    }
    ctx->pc = 0x520D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520D00u;
            // 0x520d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520D08u;
label_520d08:
    // 0x520d08: 0x0  nop
    ctx->pc = 0x520d08u;
    // NOP
label_520d0c:
    // 0x520d0c: 0x0  nop
    ctx->pc = 0x520d0cu;
    // NOP
}
