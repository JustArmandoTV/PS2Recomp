#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033C5F0
// Address: 0x33c5f0 - 0x33cc00
void sub_0033C5F0_0x33c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C5F0_0x33c5f0");
#endif

    switch (ctx->pc) {
        case 0x33c5f0u: goto label_33c5f0;
        case 0x33c5f4u: goto label_33c5f4;
        case 0x33c5f8u: goto label_33c5f8;
        case 0x33c5fcu: goto label_33c5fc;
        case 0x33c600u: goto label_33c600;
        case 0x33c604u: goto label_33c604;
        case 0x33c608u: goto label_33c608;
        case 0x33c60cu: goto label_33c60c;
        case 0x33c610u: goto label_33c610;
        case 0x33c614u: goto label_33c614;
        case 0x33c618u: goto label_33c618;
        case 0x33c61cu: goto label_33c61c;
        case 0x33c620u: goto label_33c620;
        case 0x33c624u: goto label_33c624;
        case 0x33c628u: goto label_33c628;
        case 0x33c62cu: goto label_33c62c;
        case 0x33c630u: goto label_33c630;
        case 0x33c634u: goto label_33c634;
        case 0x33c638u: goto label_33c638;
        case 0x33c63cu: goto label_33c63c;
        case 0x33c640u: goto label_33c640;
        case 0x33c644u: goto label_33c644;
        case 0x33c648u: goto label_33c648;
        case 0x33c64cu: goto label_33c64c;
        case 0x33c650u: goto label_33c650;
        case 0x33c654u: goto label_33c654;
        case 0x33c658u: goto label_33c658;
        case 0x33c65cu: goto label_33c65c;
        case 0x33c660u: goto label_33c660;
        case 0x33c664u: goto label_33c664;
        case 0x33c668u: goto label_33c668;
        case 0x33c66cu: goto label_33c66c;
        case 0x33c670u: goto label_33c670;
        case 0x33c674u: goto label_33c674;
        case 0x33c678u: goto label_33c678;
        case 0x33c67cu: goto label_33c67c;
        case 0x33c680u: goto label_33c680;
        case 0x33c684u: goto label_33c684;
        case 0x33c688u: goto label_33c688;
        case 0x33c68cu: goto label_33c68c;
        case 0x33c690u: goto label_33c690;
        case 0x33c694u: goto label_33c694;
        case 0x33c698u: goto label_33c698;
        case 0x33c69cu: goto label_33c69c;
        case 0x33c6a0u: goto label_33c6a0;
        case 0x33c6a4u: goto label_33c6a4;
        case 0x33c6a8u: goto label_33c6a8;
        case 0x33c6acu: goto label_33c6ac;
        case 0x33c6b0u: goto label_33c6b0;
        case 0x33c6b4u: goto label_33c6b4;
        case 0x33c6b8u: goto label_33c6b8;
        case 0x33c6bcu: goto label_33c6bc;
        case 0x33c6c0u: goto label_33c6c0;
        case 0x33c6c4u: goto label_33c6c4;
        case 0x33c6c8u: goto label_33c6c8;
        case 0x33c6ccu: goto label_33c6cc;
        case 0x33c6d0u: goto label_33c6d0;
        case 0x33c6d4u: goto label_33c6d4;
        case 0x33c6d8u: goto label_33c6d8;
        case 0x33c6dcu: goto label_33c6dc;
        case 0x33c6e0u: goto label_33c6e0;
        case 0x33c6e4u: goto label_33c6e4;
        case 0x33c6e8u: goto label_33c6e8;
        case 0x33c6ecu: goto label_33c6ec;
        case 0x33c6f0u: goto label_33c6f0;
        case 0x33c6f4u: goto label_33c6f4;
        case 0x33c6f8u: goto label_33c6f8;
        case 0x33c6fcu: goto label_33c6fc;
        case 0x33c700u: goto label_33c700;
        case 0x33c704u: goto label_33c704;
        case 0x33c708u: goto label_33c708;
        case 0x33c70cu: goto label_33c70c;
        case 0x33c710u: goto label_33c710;
        case 0x33c714u: goto label_33c714;
        case 0x33c718u: goto label_33c718;
        case 0x33c71cu: goto label_33c71c;
        case 0x33c720u: goto label_33c720;
        case 0x33c724u: goto label_33c724;
        case 0x33c728u: goto label_33c728;
        case 0x33c72cu: goto label_33c72c;
        case 0x33c730u: goto label_33c730;
        case 0x33c734u: goto label_33c734;
        case 0x33c738u: goto label_33c738;
        case 0x33c73cu: goto label_33c73c;
        case 0x33c740u: goto label_33c740;
        case 0x33c744u: goto label_33c744;
        case 0x33c748u: goto label_33c748;
        case 0x33c74cu: goto label_33c74c;
        case 0x33c750u: goto label_33c750;
        case 0x33c754u: goto label_33c754;
        case 0x33c758u: goto label_33c758;
        case 0x33c75cu: goto label_33c75c;
        case 0x33c760u: goto label_33c760;
        case 0x33c764u: goto label_33c764;
        case 0x33c768u: goto label_33c768;
        case 0x33c76cu: goto label_33c76c;
        case 0x33c770u: goto label_33c770;
        case 0x33c774u: goto label_33c774;
        case 0x33c778u: goto label_33c778;
        case 0x33c77cu: goto label_33c77c;
        case 0x33c780u: goto label_33c780;
        case 0x33c784u: goto label_33c784;
        case 0x33c788u: goto label_33c788;
        case 0x33c78cu: goto label_33c78c;
        case 0x33c790u: goto label_33c790;
        case 0x33c794u: goto label_33c794;
        case 0x33c798u: goto label_33c798;
        case 0x33c79cu: goto label_33c79c;
        case 0x33c7a0u: goto label_33c7a0;
        case 0x33c7a4u: goto label_33c7a4;
        case 0x33c7a8u: goto label_33c7a8;
        case 0x33c7acu: goto label_33c7ac;
        case 0x33c7b0u: goto label_33c7b0;
        case 0x33c7b4u: goto label_33c7b4;
        case 0x33c7b8u: goto label_33c7b8;
        case 0x33c7bcu: goto label_33c7bc;
        case 0x33c7c0u: goto label_33c7c0;
        case 0x33c7c4u: goto label_33c7c4;
        case 0x33c7c8u: goto label_33c7c8;
        case 0x33c7ccu: goto label_33c7cc;
        case 0x33c7d0u: goto label_33c7d0;
        case 0x33c7d4u: goto label_33c7d4;
        case 0x33c7d8u: goto label_33c7d8;
        case 0x33c7dcu: goto label_33c7dc;
        case 0x33c7e0u: goto label_33c7e0;
        case 0x33c7e4u: goto label_33c7e4;
        case 0x33c7e8u: goto label_33c7e8;
        case 0x33c7ecu: goto label_33c7ec;
        case 0x33c7f0u: goto label_33c7f0;
        case 0x33c7f4u: goto label_33c7f4;
        case 0x33c7f8u: goto label_33c7f8;
        case 0x33c7fcu: goto label_33c7fc;
        case 0x33c800u: goto label_33c800;
        case 0x33c804u: goto label_33c804;
        case 0x33c808u: goto label_33c808;
        case 0x33c80cu: goto label_33c80c;
        case 0x33c810u: goto label_33c810;
        case 0x33c814u: goto label_33c814;
        case 0x33c818u: goto label_33c818;
        case 0x33c81cu: goto label_33c81c;
        case 0x33c820u: goto label_33c820;
        case 0x33c824u: goto label_33c824;
        case 0x33c828u: goto label_33c828;
        case 0x33c82cu: goto label_33c82c;
        case 0x33c830u: goto label_33c830;
        case 0x33c834u: goto label_33c834;
        case 0x33c838u: goto label_33c838;
        case 0x33c83cu: goto label_33c83c;
        case 0x33c840u: goto label_33c840;
        case 0x33c844u: goto label_33c844;
        case 0x33c848u: goto label_33c848;
        case 0x33c84cu: goto label_33c84c;
        case 0x33c850u: goto label_33c850;
        case 0x33c854u: goto label_33c854;
        case 0x33c858u: goto label_33c858;
        case 0x33c85cu: goto label_33c85c;
        case 0x33c860u: goto label_33c860;
        case 0x33c864u: goto label_33c864;
        case 0x33c868u: goto label_33c868;
        case 0x33c86cu: goto label_33c86c;
        case 0x33c870u: goto label_33c870;
        case 0x33c874u: goto label_33c874;
        case 0x33c878u: goto label_33c878;
        case 0x33c87cu: goto label_33c87c;
        case 0x33c880u: goto label_33c880;
        case 0x33c884u: goto label_33c884;
        case 0x33c888u: goto label_33c888;
        case 0x33c88cu: goto label_33c88c;
        case 0x33c890u: goto label_33c890;
        case 0x33c894u: goto label_33c894;
        case 0x33c898u: goto label_33c898;
        case 0x33c89cu: goto label_33c89c;
        case 0x33c8a0u: goto label_33c8a0;
        case 0x33c8a4u: goto label_33c8a4;
        case 0x33c8a8u: goto label_33c8a8;
        case 0x33c8acu: goto label_33c8ac;
        case 0x33c8b0u: goto label_33c8b0;
        case 0x33c8b4u: goto label_33c8b4;
        case 0x33c8b8u: goto label_33c8b8;
        case 0x33c8bcu: goto label_33c8bc;
        case 0x33c8c0u: goto label_33c8c0;
        case 0x33c8c4u: goto label_33c8c4;
        case 0x33c8c8u: goto label_33c8c8;
        case 0x33c8ccu: goto label_33c8cc;
        case 0x33c8d0u: goto label_33c8d0;
        case 0x33c8d4u: goto label_33c8d4;
        case 0x33c8d8u: goto label_33c8d8;
        case 0x33c8dcu: goto label_33c8dc;
        case 0x33c8e0u: goto label_33c8e0;
        case 0x33c8e4u: goto label_33c8e4;
        case 0x33c8e8u: goto label_33c8e8;
        case 0x33c8ecu: goto label_33c8ec;
        case 0x33c8f0u: goto label_33c8f0;
        case 0x33c8f4u: goto label_33c8f4;
        case 0x33c8f8u: goto label_33c8f8;
        case 0x33c8fcu: goto label_33c8fc;
        case 0x33c900u: goto label_33c900;
        case 0x33c904u: goto label_33c904;
        case 0x33c908u: goto label_33c908;
        case 0x33c90cu: goto label_33c90c;
        case 0x33c910u: goto label_33c910;
        case 0x33c914u: goto label_33c914;
        case 0x33c918u: goto label_33c918;
        case 0x33c91cu: goto label_33c91c;
        case 0x33c920u: goto label_33c920;
        case 0x33c924u: goto label_33c924;
        case 0x33c928u: goto label_33c928;
        case 0x33c92cu: goto label_33c92c;
        case 0x33c930u: goto label_33c930;
        case 0x33c934u: goto label_33c934;
        case 0x33c938u: goto label_33c938;
        case 0x33c93cu: goto label_33c93c;
        case 0x33c940u: goto label_33c940;
        case 0x33c944u: goto label_33c944;
        case 0x33c948u: goto label_33c948;
        case 0x33c94cu: goto label_33c94c;
        case 0x33c950u: goto label_33c950;
        case 0x33c954u: goto label_33c954;
        case 0x33c958u: goto label_33c958;
        case 0x33c95cu: goto label_33c95c;
        case 0x33c960u: goto label_33c960;
        case 0x33c964u: goto label_33c964;
        case 0x33c968u: goto label_33c968;
        case 0x33c96cu: goto label_33c96c;
        case 0x33c970u: goto label_33c970;
        case 0x33c974u: goto label_33c974;
        case 0x33c978u: goto label_33c978;
        case 0x33c97cu: goto label_33c97c;
        case 0x33c980u: goto label_33c980;
        case 0x33c984u: goto label_33c984;
        case 0x33c988u: goto label_33c988;
        case 0x33c98cu: goto label_33c98c;
        case 0x33c990u: goto label_33c990;
        case 0x33c994u: goto label_33c994;
        case 0x33c998u: goto label_33c998;
        case 0x33c99cu: goto label_33c99c;
        case 0x33c9a0u: goto label_33c9a0;
        case 0x33c9a4u: goto label_33c9a4;
        case 0x33c9a8u: goto label_33c9a8;
        case 0x33c9acu: goto label_33c9ac;
        case 0x33c9b0u: goto label_33c9b0;
        case 0x33c9b4u: goto label_33c9b4;
        case 0x33c9b8u: goto label_33c9b8;
        case 0x33c9bcu: goto label_33c9bc;
        case 0x33c9c0u: goto label_33c9c0;
        case 0x33c9c4u: goto label_33c9c4;
        case 0x33c9c8u: goto label_33c9c8;
        case 0x33c9ccu: goto label_33c9cc;
        case 0x33c9d0u: goto label_33c9d0;
        case 0x33c9d4u: goto label_33c9d4;
        case 0x33c9d8u: goto label_33c9d8;
        case 0x33c9dcu: goto label_33c9dc;
        case 0x33c9e0u: goto label_33c9e0;
        case 0x33c9e4u: goto label_33c9e4;
        case 0x33c9e8u: goto label_33c9e8;
        case 0x33c9ecu: goto label_33c9ec;
        case 0x33c9f0u: goto label_33c9f0;
        case 0x33c9f4u: goto label_33c9f4;
        case 0x33c9f8u: goto label_33c9f8;
        case 0x33c9fcu: goto label_33c9fc;
        case 0x33ca00u: goto label_33ca00;
        case 0x33ca04u: goto label_33ca04;
        case 0x33ca08u: goto label_33ca08;
        case 0x33ca0cu: goto label_33ca0c;
        case 0x33ca10u: goto label_33ca10;
        case 0x33ca14u: goto label_33ca14;
        case 0x33ca18u: goto label_33ca18;
        case 0x33ca1cu: goto label_33ca1c;
        case 0x33ca20u: goto label_33ca20;
        case 0x33ca24u: goto label_33ca24;
        case 0x33ca28u: goto label_33ca28;
        case 0x33ca2cu: goto label_33ca2c;
        case 0x33ca30u: goto label_33ca30;
        case 0x33ca34u: goto label_33ca34;
        case 0x33ca38u: goto label_33ca38;
        case 0x33ca3cu: goto label_33ca3c;
        case 0x33ca40u: goto label_33ca40;
        case 0x33ca44u: goto label_33ca44;
        case 0x33ca48u: goto label_33ca48;
        case 0x33ca4cu: goto label_33ca4c;
        case 0x33ca50u: goto label_33ca50;
        case 0x33ca54u: goto label_33ca54;
        case 0x33ca58u: goto label_33ca58;
        case 0x33ca5cu: goto label_33ca5c;
        case 0x33ca60u: goto label_33ca60;
        case 0x33ca64u: goto label_33ca64;
        case 0x33ca68u: goto label_33ca68;
        case 0x33ca6cu: goto label_33ca6c;
        case 0x33ca70u: goto label_33ca70;
        case 0x33ca74u: goto label_33ca74;
        case 0x33ca78u: goto label_33ca78;
        case 0x33ca7cu: goto label_33ca7c;
        case 0x33ca80u: goto label_33ca80;
        case 0x33ca84u: goto label_33ca84;
        case 0x33ca88u: goto label_33ca88;
        case 0x33ca8cu: goto label_33ca8c;
        case 0x33ca90u: goto label_33ca90;
        case 0x33ca94u: goto label_33ca94;
        case 0x33ca98u: goto label_33ca98;
        case 0x33ca9cu: goto label_33ca9c;
        case 0x33caa0u: goto label_33caa0;
        case 0x33caa4u: goto label_33caa4;
        case 0x33caa8u: goto label_33caa8;
        case 0x33caacu: goto label_33caac;
        case 0x33cab0u: goto label_33cab0;
        case 0x33cab4u: goto label_33cab4;
        case 0x33cab8u: goto label_33cab8;
        case 0x33cabcu: goto label_33cabc;
        case 0x33cac0u: goto label_33cac0;
        case 0x33cac4u: goto label_33cac4;
        case 0x33cac8u: goto label_33cac8;
        case 0x33caccu: goto label_33cacc;
        case 0x33cad0u: goto label_33cad0;
        case 0x33cad4u: goto label_33cad4;
        case 0x33cad8u: goto label_33cad8;
        case 0x33cadcu: goto label_33cadc;
        case 0x33cae0u: goto label_33cae0;
        case 0x33cae4u: goto label_33cae4;
        case 0x33cae8u: goto label_33cae8;
        case 0x33caecu: goto label_33caec;
        case 0x33caf0u: goto label_33caf0;
        case 0x33caf4u: goto label_33caf4;
        case 0x33caf8u: goto label_33caf8;
        case 0x33cafcu: goto label_33cafc;
        case 0x33cb00u: goto label_33cb00;
        case 0x33cb04u: goto label_33cb04;
        case 0x33cb08u: goto label_33cb08;
        case 0x33cb0cu: goto label_33cb0c;
        case 0x33cb10u: goto label_33cb10;
        case 0x33cb14u: goto label_33cb14;
        case 0x33cb18u: goto label_33cb18;
        case 0x33cb1cu: goto label_33cb1c;
        case 0x33cb20u: goto label_33cb20;
        case 0x33cb24u: goto label_33cb24;
        case 0x33cb28u: goto label_33cb28;
        case 0x33cb2cu: goto label_33cb2c;
        case 0x33cb30u: goto label_33cb30;
        case 0x33cb34u: goto label_33cb34;
        case 0x33cb38u: goto label_33cb38;
        case 0x33cb3cu: goto label_33cb3c;
        case 0x33cb40u: goto label_33cb40;
        case 0x33cb44u: goto label_33cb44;
        case 0x33cb48u: goto label_33cb48;
        case 0x33cb4cu: goto label_33cb4c;
        case 0x33cb50u: goto label_33cb50;
        case 0x33cb54u: goto label_33cb54;
        case 0x33cb58u: goto label_33cb58;
        case 0x33cb5cu: goto label_33cb5c;
        case 0x33cb60u: goto label_33cb60;
        case 0x33cb64u: goto label_33cb64;
        case 0x33cb68u: goto label_33cb68;
        case 0x33cb6cu: goto label_33cb6c;
        case 0x33cb70u: goto label_33cb70;
        case 0x33cb74u: goto label_33cb74;
        case 0x33cb78u: goto label_33cb78;
        case 0x33cb7cu: goto label_33cb7c;
        case 0x33cb80u: goto label_33cb80;
        case 0x33cb84u: goto label_33cb84;
        case 0x33cb88u: goto label_33cb88;
        case 0x33cb8cu: goto label_33cb8c;
        case 0x33cb90u: goto label_33cb90;
        case 0x33cb94u: goto label_33cb94;
        case 0x33cb98u: goto label_33cb98;
        case 0x33cb9cu: goto label_33cb9c;
        case 0x33cba0u: goto label_33cba0;
        case 0x33cba4u: goto label_33cba4;
        case 0x33cba8u: goto label_33cba8;
        case 0x33cbacu: goto label_33cbac;
        case 0x33cbb0u: goto label_33cbb0;
        case 0x33cbb4u: goto label_33cbb4;
        case 0x33cbb8u: goto label_33cbb8;
        case 0x33cbbcu: goto label_33cbbc;
        case 0x33cbc0u: goto label_33cbc0;
        case 0x33cbc4u: goto label_33cbc4;
        case 0x33cbc8u: goto label_33cbc8;
        case 0x33cbccu: goto label_33cbcc;
        case 0x33cbd0u: goto label_33cbd0;
        case 0x33cbd4u: goto label_33cbd4;
        case 0x33cbd8u: goto label_33cbd8;
        case 0x33cbdcu: goto label_33cbdc;
        case 0x33cbe0u: goto label_33cbe0;
        case 0x33cbe4u: goto label_33cbe4;
        case 0x33cbe8u: goto label_33cbe8;
        case 0x33cbecu: goto label_33cbec;
        case 0x33cbf0u: goto label_33cbf0;
        case 0x33cbf4u: goto label_33cbf4;
        case 0x33cbf8u: goto label_33cbf8;
        case 0x33cbfcu: goto label_33cbfc;
        default: break;
    }

    ctx->pc = 0x33c5f0u;

label_33c5f0:
    // 0x33c5f0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x33c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_33c5f4:
    // 0x33c5f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33c5f8:
    // 0x33c5f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x33c5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_33c5fc:
    // 0x33c5fc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x33c5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_33c600:
    // 0x33c600: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x33c600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_33c604:
    // 0x33c604: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x33c604u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c608:
    // 0x33c608: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x33c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_33c60c:
    // 0x33c60c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x33c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_33c610:
    // 0x33c610: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x33c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_33c614:
    // 0x33c614: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33c614u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33c618:
    // 0x33c618: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x33c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_33c61c:
    // 0x33c61c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x33c61cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c620:
    // 0x33c620: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x33c620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_33c624:
    // 0x33c624: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_33c628:
    // 0x33c628: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x33c628u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_33c62c:
    // 0x33c62c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_33c630:
    // 0x33c630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c634:
    // 0x33c634: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x33c634u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_33c638:
    // 0x33c638: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x33c638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_33c63c:
    // 0x33c63c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x33c63cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_33c640:
    // 0x33c640: 0xafa70120  sw          $a3, 0x120($sp)
    ctx->pc = 0x33c640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
label_33c644:
    // 0x33c644: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x33c644u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_33c648:
    // 0x33c648: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x33c648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_33c64c:
    // 0x33c64c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x33c64cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_33c650:
    // 0x33c650: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x33c650u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_33c654:
    // 0x33c654: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x33c654u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_33c658:
    // 0x33c658: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x33c658u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_33c65c:
    // 0x33c65c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33c65cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33c660:
    // 0x33c660: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x33c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_33c664:
    // 0x33c664: 0xc495c058  lwc1        $f21, -0x3FA8($a0)
    ctx->pc = 0x33c664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_33c668:
    // 0x33c668: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x33c668u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_33c66c:
    // 0x33c66c: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x33c66cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
label_33c670:
    // 0x33c670: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x33c670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_33c674:
    // 0x33c674: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x33c674u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_33c678:
    // 0x33c678: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33c678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33c67c:
    // 0x33c67c: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x33c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_33c680:
    // 0x33c680: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x33c680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_33c684:
    // 0x33c684: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33c684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33c688:
    // 0x33c688: 0x8c7389f0  lw          $s3, -0x7610($v1)
    ctx->pc = 0x33c688u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_33c68c:
    // 0x33c68c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x33c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_33c690:
    // 0x33c690: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x33c690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
label_33c694:
    // 0x33c694: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x33c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_33c698:
    // 0x33c698: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x33c698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_33c69c:
    // 0x33c69c: 0x24632108  addiu       $v1, $v1, 0x2108
    ctx->pc = 0x33c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8456));
label_33c6a0:
    // 0x33c6a0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x33c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_33c6a4:
    // 0x33c6a4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x33c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_33c6a8:
    // 0x33c6a8: 0xc476c060  lwc1        $f22, -0x3FA0($v1)
    ctx->pc = 0x33c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_33c6ac:
    // 0x33c6ac: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x33c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_33c6b0:
    // 0x33c6b0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x33c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_33c6b4:
    // 0x33c6b4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x33c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_33c6b8:
    // 0x33c6b8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x33c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_33c6bc:
    // 0x33c6bc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x33c6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33c6c0:
    // 0x33c6c0: 0x8e030d70  lw          $v1, 0xD70($s0)
    ctx->pc = 0x33c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_33c6c4:
    // 0x33c6c4: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x33c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_33c6c8:
    // 0x33c6c8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x33c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_33c6cc:
    // 0x33c6cc: 0x1460012e  bnez        $v1, . + 4 + (0x12E << 2)
label_33c6d0:
    if (ctx->pc == 0x33C6D0u) {
        ctx->pc = 0x33C6D4u;
        goto label_33c6d4;
    }
    ctx->pc = 0x33C6CCu;
    {
        const bool branch_taken_0x33c6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c6cc) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C6D4u;
label_33c6d4:
    // 0x33c6d4: 0x920311a1  lbu         $v1, 0x11A1($s0)
    ctx->pc = 0x33c6d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4513)));
label_33c6d8:
    // 0x33c6d8: 0x1060012b  beqz        $v1, . + 4 + (0x12B << 2)
label_33c6dc:
    if (ctx->pc == 0x33C6DCu) {
        ctx->pc = 0x33C6E0u;
        goto label_33c6e0;
    }
    ctx->pc = 0x33C6D8u;
    {
        const bool branch_taken_0x33c6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c6d8) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C6E0u;
label_33c6e0:
    // 0x33c6e0: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x33c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_33c6e4:
    // 0x33c6e4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x33c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_33c6e8:
    // 0x33c6e8: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x33c6e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_33c6ec:
    // 0x33c6ec: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_33c6f0:
    if (ctx->pc == 0x33C6F0u) {
        ctx->pc = 0x33C6F4u;
        goto label_33c6f4;
    }
    ctx->pc = 0x33C6ECu;
    {
        const bool branch_taken_0x33c6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c6ec) {
            ctx->pc = 0x33C740u;
            goto label_33c740;
        }
    }
    ctx->pc = 0x33C6F4u;
label_33c6f4:
    // 0x33c6f4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33c6f8:
    // 0x33c6f8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_33c6fc:
    if (ctx->pc == 0x33C6FCu) {
        ctx->pc = 0x33C700u;
        goto label_33c700;
    }
    ctx->pc = 0x33C6F8u;
    {
        const bool branch_taken_0x33c6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c6f8) {
            ctx->pc = 0x33C740u;
            goto label_33c740;
        }
    }
    ctx->pc = 0x33C700u;
label_33c700:
    // 0x33c700: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x33c700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_33c704:
    // 0x33c704: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_33c708:
    if (ctx->pc == 0x33C708u) {
        ctx->pc = 0x33C70Cu;
        goto label_33c70c;
    }
    ctx->pc = 0x33C704u;
    {
        const bool branch_taken_0x33c704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c704) {
            ctx->pc = 0x33C740u;
            goto label_33c740;
        }
    }
    ctx->pc = 0x33C70Cu;
label_33c70c:
    // 0x33c70c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x33c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_33c710:
    // 0x33c710: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_33c714:
    if (ctx->pc == 0x33C714u) {
        ctx->pc = 0x33C718u;
        goto label_33c718;
    }
    ctx->pc = 0x33C710u;
    {
        const bool branch_taken_0x33c710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c710) {
            ctx->pc = 0x33C740u;
            goto label_33c740;
        }
    }
    ctx->pc = 0x33C718u;
label_33c718:
    // 0x33c718: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x33c718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33c71c:
    // 0x33c71c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_33c720:
    if (ctx->pc == 0x33C720u) {
        ctx->pc = 0x33C724u;
        goto label_33c724;
    }
    ctx->pc = 0x33C71Cu;
    {
        const bool branch_taken_0x33c71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c71c) {
            ctx->pc = 0x33C740u;
            goto label_33c740;
        }
    }
    ctx->pc = 0x33C724u;
label_33c724:
    // 0x33c724: 0x0  nop
    ctx->pc = 0x33c724u;
    // NOP
label_33c728:
    // 0x33c728: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x33c728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_33c72c:
    // 0x33c72c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x33c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_33c730:
    // 0x33c730: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x33c730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_33c734:
    // 0x33c734: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33c738:
    // 0x33c738: 0xc04cce8  jal         func_1333A0
label_33c73c:
    if (ctx->pc == 0x33C73Cu) {
        ctx->pc = 0x33C73Cu;
            // 0x33c73c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x33C740u;
        goto label_33c740;
    }
    ctx->pc = 0x33C738u;
    SET_GPR_U32(ctx, 31, 0x33C740u);
    ctx->pc = 0x33C73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C738u;
            // 0x33c73c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C740u; }
        if (ctx->pc != 0x33C740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C740u; }
        if (ctx->pc != 0x33C740u) { return; }
    }
    ctx->pc = 0x33C740u;
label_33c740:
    // 0x33c740: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33c740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33c744:
    // 0x33c744: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x33c744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33c748:
    // 0x33c748: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33c748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33c74c:
    // 0x33c74c: 0xc46407f0  lwc1        $f4, 0x7F0($v1)
    ctx->pc = 0x33c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_33c750:
    // 0x33c750: 0x8e060d6c  lw          $a2, 0xD6C($s0)
    ctx->pc = 0x33c750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_33c754:
    // 0x33c754: 0x261602c0  addiu       $s6, $s0, 0x2C0
    ctx->pc = 0x33c754u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_33c758:
    // 0x33c758: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33c758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33c75c:
    // 0x33c75c: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x33c75cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_33c760:
    // 0x33c760: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x33c760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_33c764:
    // 0x33c764: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33c764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33c768:
    // 0x33c768: 0xc46207f4  lwc1        $f2, 0x7F4($v1)
    ctx->pc = 0x33c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33c76c:
    // 0x33c76c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x33c76cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_33c770:
    // 0x33c770: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x33c770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_33c774:
    // 0x33c774: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33c774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33c778:
    // 0x33c778: 0x90c20010  lbu         $v0, 0x10($a2)
    ctx->pc = 0x33c778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_33c77c:
    // 0x33c77c: 0xc4630800  lwc1        $f3, 0x800($v1)
    ctx->pc = 0x33c77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33c780:
    // 0x33c780: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x33c780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_33c784:
    // 0x33c784: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x33c784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_33c788:
    // 0x33c788: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x33c788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33c78c:
    // 0x33c78c: 0xc48007fc  lwc1        $f0, 0x7FC($a0)
    ctx->pc = 0x33c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33c790:
    // 0x33c790: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x33c790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_33c794:
    // 0x33c794: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33c794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33c798:
    // 0x33c798: 0xc4c107f8  lwc1        $f1, 0x7F8($a2)
    ctx->pc = 0x33c798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33c79c:
    // 0x33c79c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x33c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_33c7a0:
    // 0x33c7a0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x33c7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_33c7a4:
    // 0x33c7a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x33c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_33c7a8:
    // 0x33c7a8: 0xc460080c  lwc1        $f0, 0x80C($v1)
    ctx->pc = 0x33c7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33c7ac:
    // 0x33c7ac: 0x24f70150  addiu       $s7, $a3, 0x150
    ctx->pc = 0x33c7acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_33c7b0:
    // 0x33c7b0: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x33c7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_33c7b4:
    // 0x33c7b4: 0xc4a20804  lwc1        $f2, 0x804($a1)
    ctx->pc = 0x33c7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33c7b8:
    // 0x33c7b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33c7bc:
    // 0x33c7bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33c7c0:
    // 0x33c7c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33c7c4:
    // 0x33c7c4: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x33c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_33c7c8:
    // 0x33c7c8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x33c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_33c7cc:
    // 0x33c7cc: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x33c7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_33c7d0:
    // 0x33c7d0: 0x2442caf0  addiu       $v0, $v0, -0x3510
    ctx->pc = 0x33c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
label_33c7d4:
    // 0x33c7d4: 0xc4810808  lwc1        $f1, 0x808($a0)
    ctx->pc = 0x33c7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33c7d8:
    // 0x33c7d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33c7dc:
    // 0x33c7dc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x33c7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_33c7e0:
    // 0x33c7e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33c7e4:
    // 0x33c7e4: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x33c7e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_33c7e8:
    // 0x33c7e8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x33c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_33c7ec:
    // 0x33c7ec: 0xe7a40140  swc1        $f4, 0x140($sp)
    ctx->pc = 0x33c7ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_33c7f0:
    // 0x33c7f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33c7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c7f4:
    // 0x33c7f4: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x33c7f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_33c7f8:
    // 0x33c7f8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x33c7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_33c7fc:
    // 0x33c7fc: 0xc04ccc4  jal         func_133310
label_33c800:
    if (ctx->pc == 0x33C800u) {
        ctx->pc = 0x33C800u;
            // 0x33c800: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->pc = 0x33C804u;
        goto label_33c804;
    }
    ctx->pc = 0x33C7FCu;
    SET_GPR_U32(ctx, 31, 0x33C804u);
    ctx->pc = 0x33C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C7FCu;
            // 0x33c800: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C804u; }
        if (ctx->pc != 0x33C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C804u; }
        if (ctx->pc != 0x33C804u) { return; }
    }
    ctx->pc = 0x33C804u;
label_33c804:
    // 0x33c804: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x33c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_33c808:
    // 0x33c808: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x33c808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33c80c:
    // 0x33c80c: 0xc04cbe0  jal         func_132F80
label_33c810:
    if (ctx->pc == 0x33C810u) {
        ctx->pc = 0x33C810u;
            // 0x33c810: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x33C814u;
        goto label_33c814;
    }
    ctx->pc = 0x33C80Cu;
    SET_GPR_U32(ctx, 31, 0x33C814u);
    ctx->pc = 0x33C810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C80Cu;
            // 0x33c810: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C814u; }
        if (ctx->pc != 0x33C814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C814u; }
        if (ctx->pc != 0x33C814u) { return; }
    }
    ctx->pc = 0x33C814u;
label_33c814:
    // 0x33c814: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x33c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_33c818:
    // 0x33c818: 0xc04cc1c  jal         func_133070
label_33c81c:
    if (ctx->pc == 0x33C81Cu) {
        ctx->pc = 0x33C81Cu;
            // 0x33c81c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x33C820u;
        goto label_33c820;
    }
    ctx->pc = 0x33C818u;
    SET_GPR_U32(ctx, 31, 0x33C820u);
    ctx->pc = 0x33C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C818u;
            // 0x33c81c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C820u; }
        if (ctx->pc != 0x33C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C820u; }
        if (ctx->pc != 0x33C820u) { return; }
    }
    ctx->pc = 0x33C820u;
label_33c820:
    // 0x33c820: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33c820u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_33c824:
    // 0x33c824: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x33c824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_33c828:
    // 0x33c828: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x33c828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33c82c:
    // 0x33c82c: 0xc075094  jal         func_1D4250
label_33c830:
    if (ctx->pc == 0x33C830u) {
        ctx->pc = 0x33C830u;
            // 0x33c830: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x33C834u;
        goto label_33c834;
    }
    ctx->pc = 0x33C82Cu;
    SET_GPR_U32(ctx, 31, 0x33C834u);
    ctx->pc = 0x33C830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C82Cu;
            // 0x33c830: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C834u; }
        if (ctx->pc != 0x33C834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C834u; }
        if (ctx->pc != 0x33C834u) { return; }
    }
    ctx->pc = 0x33C834u;
label_33c834:
    // 0x33c834: 0x3c02bf93  lui         $v0, 0xBF93
    ctx->pc = 0x33c834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49043 << 16));
label_33c838:
    // 0x33c838: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x33c838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33c83c:
    // 0x33c83c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x33c83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_33c840:
    // 0x33c840: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x33c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_33c844:
    // 0x33c844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33c848:
    // 0x33c848: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x33c848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_33c84c:
    // 0x33c84c: 0xc04cc7c  jal         func_1331F0
label_33c850:
    if (ctx->pc == 0x33C850u) {
        ctx->pc = 0x33C850u;
            // 0x33c850: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x33C854u;
        goto label_33c854;
    }
    ctx->pc = 0x33C84Cu;
    SET_GPR_U32(ctx, 31, 0x33C854u);
    ctx->pc = 0x33C850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C84Cu;
            // 0x33c850: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C854u; }
        if (ctx->pc != 0x33C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C854u; }
        if (ctx->pc != 0x33C854u) { return; }
    }
    ctx->pc = 0x33C854u;
label_33c854:
    // 0x33c854: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x33c854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33c858:
    // 0x33c858: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x33c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_33c85c:
    // 0x33c85c: 0xc075094  jal         func_1D4250
label_33c860:
    if (ctx->pc == 0x33C860u) {
        ctx->pc = 0x33C860u;
            // 0x33c860: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x33C864u;
        goto label_33c864;
    }
    ctx->pc = 0x33C85Cu;
    SET_GPR_U32(ctx, 31, 0x33C864u);
    ctx->pc = 0x33C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C85Cu;
            // 0x33c860: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C864u; }
        if (ctx->pc != 0x33C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C864u; }
        if (ctx->pc != 0x33C864u) { return; }
    }
    ctx->pc = 0x33C864u;
label_33c864:
    // 0x33c864: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x33c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33c868:
    // 0x33c868: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x33c868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33c86c:
    // 0x33c86c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_33c870:
    if (ctx->pc == 0x33C870u) {
        ctx->pc = 0x33C870u;
            // 0x33c870: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33C874u;
        goto label_33c874;
    }
    ctx->pc = 0x33C86Cu;
    {
        const bool branch_taken_0x33c86c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C86Cu;
            // 0x33c870: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c86c) {
            ctx->pc = 0x33C878u;
            goto label_33c878;
        }
    }
    ctx->pc = 0x33C874u;
label_33c874:
    // 0x33c874: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33c874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c878:
    // 0x33c878: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x33c878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33c87c:
    // 0x33c87c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33c87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33c880:
    // 0x33c880: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_33c884:
    if (ctx->pc == 0x33C884u) {
        ctx->pc = 0x33C884u;
            // 0x33c884: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33C888u;
        goto label_33c888;
    }
    ctx->pc = 0x33C880u;
    {
        const bool branch_taken_0x33c880 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C880u;
            // 0x33c884: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c880) {
            ctx->pc = 0x33C88Cu;
            goto label_33c88c;
        }
    }
    ctx->pc = 0x33C888u;
label_33c888:
    // 0x33c888: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33c888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c88c:
    // 0x33c88c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33c88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_33c890:
    // 0x33c890: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33c890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_33c894:
    // 0x33c894: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
label_33c898:
    if (ctx->pc == 0x33C898u) {
        ctx->pc = 0x33C89Cu;
        goto label_33c89c;
    }
    ctx->pc = 0x33C894u;
    {
        const bool branch_taken_0x33c894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c894) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C89Cu;
label_33c89c:
    // 0x33c89c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x33c89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_33c8a0:
    // 0x33c8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33c8a4:
    // 0x33c8a4: 0x27a501bc  addiu       $a1, $sp, 0x1BC
    ctx->pc = 0x33c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_33c8a8:
    // 0x33c8a8: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x33c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_33c8ac:
    // 0x33c8ac: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x33c8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_33c8b0:
    // 0x33c8b0: 0x320f809  jalr        $t9
label_33c8b4:
    if (ctx->pc == 0x33C8B4u) {
        ctx->pc = 0x33C8B4u;
            // 0x33c8b4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C8B8u;
        goto label_33c8b8;
    }
    ctx->pc = 0x33C8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C8B8u);
        ctx->pc = 0x33C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C8B0u;
            // 0x33c8b4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C8B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C8B8u; }
            if (ctx->pc != 0x33C8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x33C8B8u;
label_33c8b8:
    // 0x33c8b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_33c8bc:
    // 0x33c8bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33c8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33c8c0:
    // 0x33c8c0: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x33c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_33c8c4:
    // 0x33c8c4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x33c8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_33c8c8:
    // 0x33c8c8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x33c8c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_33c8cc:
    // 0x33c8cc: 0x320f809  jalr        $t9
label_33c8d0:
    if (ctx->pc == 0x33C8D0u) {
        ctx->pc = 0x33C8D0u;
            // 0x33c8d0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C8D4u;
        goto label_33c8d4;
    }
    ctx->pc = 0x33C8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C8D4u);
        ctx->pc = 0x33C8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C8CCu;
            // 0x33c8d0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C8D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C8D4u; }
            if (ctx->pc != 0x33C8D4u) { return; }
        }
        }
    }
    ctx->pc = 0x33C8D4u;
label_33c8d4:
    // 0x33c8d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33c8d8:
    // 0x33c8d8: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x33c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_33c8dc:
    // 0x33c8dc: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x33c8dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
label_33c8e0:
    // 0x33c8e0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_33c8e4:
    if (ctx->pc == 0x33C8E4u) {
        ctx->pc = 0x33C8E8u;
        goto label_33c8e8;
    }
    ctx->pc = 0x33C8E0u;
    {
        const bool branch_taken_0x33c8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c8e0) {
            ctx->pc = 0x33C938u;
            goto label_33c938;
        }
    }
    ctx->pc = 0x33C8E8u;
label_33c8e8:
    // 0x33c8e8: 0x87a401be  lh          $a0, 0x1BE($sp)
    ctx->pc = 0x33c8e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 446)));
label_33c8ec:
    // 0x33c8ec: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x33c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
label_33c8f0:
    // 0x33c8f0: 0x34672493  ori         $a3, $v1, 0x2493
    ctx->pc = 0x33c8f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
label_33c8f4:
    // 0x33c8f4: 0x87a301ba  lh          $v1, 0x1BA($sp)
    ctx->pc = 0x33c8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 442)));
label_33c8f8:
    // 0x33c8f8: 0x44240  sll         $t0, $a0, 9
    ctx->pc = 0x33c8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_33c8fc:
    // 0x33c8fc: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x33c8fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_33c900:
    // 0x33c900: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x33c900u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_33c904:
    // 0x33c904: 0x32a40  sll         $a1, $v1, 9
    ctx->pc = 0x33c904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_33c908:
    // 0x33c908: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x33c908u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_33c90c:
    // 0x33c90c: 0x1810  mfhi        $v1
    ctx->pc = 0x33c90cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_33c910:
    // 0x33c910: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x33c910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_33c914:
    // 0x33c914: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x33c914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_33c918:
    // 0x33c918: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x33c918u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_33c91c:
    // 0x33c91c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_33c920:
    // 0x33c920: 0xa7a301be  sh          $v1, 0x1BE($sp)
    ctx->pc = 0x33c920u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 446), (uint16_t)GPR_U32(ctx, 3));
label_33c924:
    // 0x33c924: 0x1810  mfhi        $v1
    ctx->pc = 0x33c924u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_33c928:
    // 0x33c928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33c928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33c92c:
    // 0x33c92c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x33c92cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_33c930:
    // 0x33c930: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33c934:
    // 0x33c934: 0xa7a301ba  sh          $v1, 0x1BA($sp)
    ctx->pc = 0x33c934u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 442), (uint16_t)GPR_U32(ctx, 3));
label_33c938:
    // 0x33c938: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33c938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33c93c:
    // 0x33c93c: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x33c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_33c940:
    // 0x33c940: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x33c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_33c944:
    // 0x33c944: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33c948:
    // 0x33c948: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_33c94c:
    if (ctx->pc == 0x33C94Cu) {
        ctx->pc = 0x33C94Cu;
            // 0x33c94c: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->pc = 0x33C950u;
        goto label_33c950;
    }
    ctx->pc = 0x33C948u;
    {
        const bool branch_taken_0x33c948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33C94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C948u;
            // 0x33c94c: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c948) {
            ctx->pc = 0x33C988u;
            goto label_33c988;
        }
    }
    ctx->pc = 0x33C950u;
label_33c950:
    // 0x33c950: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x33c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_33c954:
    // 0x33c954: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33c954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33c958:
    // 0x33c958: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_33c95c:
    if (ctx->pc == 0x33C95Cu) {
        ctx->pc = 0x33C960u;
        goto label_33c960;
    }
    ctx->pc = 0x33C958u;
    {
        const bool branch_taken_0x33c958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c958) {
            ctx->pc = 0x33C988u;
            goto label_33c988;
        }
    }
    ctx->pc = 0x33C960u;
label_33c960:
    // 0x33c960: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33c960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33c964:
    // 0x33c964: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x33c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_33c968:
    // 0x33c968: 0x8c830cd8  lw          $v1, 0xCD8($a0)
    ctx->pc = 0x33c968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3288)));
label_33c96c:
    // 0x33c96c: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
label_33c970:
    if (ctx->pc == 0x33C970u) {
        ctx->pc = 0x33C974u;
        goto label_33c974;
    }
    ctx->pc = 0x33C96Cu;
    {
        const bool branch_taken_0x33c96c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x33c96c) {
            ctx->pc = 0x33C980u;
            goto label_33c980;
        }
    }
    ctx->pc = 0x33C974u;
label_33c974:
    // 0x33c974: 0x8c830cdc  lw          $v1, 0xCDC($a0)
    ctx->pc = 0x33c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3292)));
label_33c978:
    // 0x33c978: 0x16830003  bne         $s4, $v1, . + 4 + (0x3 << 2)
label_33c97c:
    if (ctx->pc == 0x33C97Cu) {
        ctx->pc = 0x33C980u;
        goto label_33c980;
    }
    ctx->pc = 0x33C978u;
    {
        const bool branch_taken_0x33c978 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x33c978) {
            ctx->pc = 0x33C988u;
            goto label_33c988;
        }
    }
    ctx->pc = 0x33C980u;
label_33c980:
    // 0x33c980: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x33c980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_33c984:
    // 0x33c984: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x33c984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33c988:
    // 0x33c988: 0x12b4007f  beq         $s5, $s4, . + 4 + (0x7F << 2)
label_33c98c:
    if (ctx->pc == 0x33C98Cu) {
        ctx->pc = 0x33C990u;
        goto label_33c990;
    }
    ctx->pc = 0x33C988u;
    {
        const bool branch_taken_0x33c988 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        if (branch_taken_0x33c988) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C990u;
label_33c990:
    // 0x33c990: 0x87a401bc  lh          $a0, 0x1BC($sp)
    ctx->pc = 0x33c990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 444)));
label_33c994:
    // 0x33c994: 0x1880007c  blez        $a0, . + 4 + (0x7C << 2)
label_33c998:
    if (ctx->pc == 0x33C998u) {
        ctx->pc = 0x33C99Cu;
        goto label_33c99c;
    }
    ctx->pc = 0x33C994u;
    {
        const bool branch_taken_0x33c994 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x33c994) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C99Cu;
label_33c99c:
    // 0x33c99c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x33c99cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_33c9a0:
    // 0x33c9a0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33c9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33c9a4:
    // 0x33c9a4: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
label_33c9a8:
    if (ctx->pc == 0x33C9A8u) {
        ctx->pc = 0x33C9ACu;
        goto label_33c9ac;
    }
    ctx->pc = 0x33C9A4u;
    {
        const bool branch_taken_0x33c9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c9a4) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C9ACu;
label_33c9ac:
    // 0x33c9ac: 0x87a401be  lh          $a0, 0x1BE($sp)
    ctx->pc = 0x33c9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 446)));
label_33c9b0:
    // 0x33c9b0: 0x18800075  blez        $a0, . + 4 + (0x75 << 2)
label_33c9b4:
    if (ctx->pc == 0x33C9B4u) {
        ctx->pc = 0x33C9B8u;
        goto label_33c9b8;
    }
    ctx->pc = 0x33C9B0u;
    {
        const bool branch_taken_0x33c9b0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x33c9b0) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C9B8u;
label_33c9b8:
    // 0x33c9b8: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x33c9b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_33c9bc:
    // 0x33c9bc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33c9bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33c9c0:
    // 0x33c9c0: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
label_33c9c4:
    if (ctx->pc == 0x33C9C4u) {
        ctx->pc = 0x33C9C8u;
        goto label_33c9c8;
    }
    ctx->pc = 0x33C9C0u;
    {
        const bool branch_taken_0x33c9c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c9c0) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33C9C8u;
label_33c9c8:
    // 0x33c9c8: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x33c9c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_33c9cc:
    // 0x33c9cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_33c9d0:
    if (ctx->pc == 0x33C9D0u) {
        ctx->pc = 0x33C9D4u;
        goto label_33c9d4;
    }
    ctx->pc = 0x33C9CCu;
    {
        const bool branch_taken_0x33c9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c9cc) {
            ctx->pc = 0x33CA08u;
            goto label_33ca08;
        }
    }
    ctx->pc = 0x33C9D4u;
label_33c9d4:
    // 0x33c9d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33c9d8:
    // 0x33c9d8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x33c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_33c9dc:
    // 0x33c9dc: 0xc0506ac  jal         func_141AB0
label_33c9e0:
    if (ctx->pc == 0x33C9E0u) {
        ctx->pc = 0x33C9E0u;
            // 0x33c9e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x33C9E4u;
        goto label_33c9e4;
    }
    ctx->pc = 0x33C9DCu;
    SET_GPR_U32(ctx, 31, 0x33C9E4u);
    ctx->pc = 0x33C9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C9DCu;
            // 0x33c9e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C9E4u; }
        if (ctx->pc != 0x33C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C9E4u; }
        if (ctx->pc != 0x33C9E4u) { return; }
    }
    ctx->pc = 0x33C9E4u;
label_33c9e4:
    // 0x33c9e4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x33c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_33c9e8:
    // 0x33c9e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33c9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c9ec:
    // 0x33c9ec: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x33c9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33c9f0:
    // 0x33c9f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x33c9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_33c9f4:
    // 0x33c9f4: 0x320f809  jalr        $t9
label_33c9f8:
    if (ctx->pc == 0x33C9F8u) {
        ctx->pc = 0x33C9F8u;
            // 0x33c9f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x33C9FCu;
        goto label_33c9fc;
    }
    ctx->pc = 0x33C9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C9FCu);
        ctx->pc = 0x33C9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C9F4u;
            // 0x33c9f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C9FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C9FCu; }
            if (ctx->pc != 0x33C9FCu) { return; }
        }
        }
    }
    ctx->pc = 0x33C9FCu;
label_33c9fc:
    // 0x33c9fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33ca00:
    // 0x33ca00: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x33ca00u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_33ca04:
    // 0x33ca04: 0x0  nop
    ctx->pc = 0x33ca04u;
    // NOP
label_33ca08:
    // 0x33ca08: 0x87a501b8  lh          $a1, 0x1B8($sp)
    ctx->pc = 0x33ca08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 440)));
label_33ca0c:
    // 0x33ca0c: 0x87a401bc  lh          $a0, 0x1BC($sp)
    ctx->pc = 0x33ca0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 444)));
label_33ca10:
    // 0x33ca10: 0x87a301ba  lh          $v1, 0x1BA($sp)
    ctx->pc = 0x33ca10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 442)));
label_33ca14:
    // 0x33ca14: 0x87a201be  lh          $v0, 0x1BE($sp)
    ctx->pc = 0x33ca14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 446)));
label_33ca18:
    // 0x33ca18: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x33ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_33ca1c:
    // 0x33ca1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33ca1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33ca20:
    // 0x33ca20: 0x0  nop
    ctx->pc = 0x33ca20u;
    // NOP
label_33ca24:
    // 0x33ca24: 0x468006e0  cvt.s.w     $f27, $f0
    ctx->pc = 0x33ca24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
label_33ca28:
    // 0x33ca28: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x33ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33ca2c:
    // 0x33ca2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33ca30:
    // 0x33ca30: 0x0  nop
    ctx->pc = 0x33ca30u;
    // NOP
label_33ca34:
    // 0x33ca34: 0x468006a0  cvt.s.w     $f26, $f0
    ctx->pc = 0x33ca34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
label_33ca38:
    // 0x33ca38: 0x461ad01a  mula.s      $f26, $f26
    ctx->pc = 0x33ca38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
label_33ca3c:
    // 0x33ca3c: 0xc04c710  jal         func_131C40
label_33ca40:
    if (ctx->pc == 0x33CA40u) {
        ctx->pc = 0x33CA40u;
            // 0x33ca40: 0x461bdb1c  madd.s      $f12, $f27, $f27 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[27]));
        ctx->pc = 0x33CA44u;
        goto label_33ca44;
    }
    ctx->pc = 0x33CA3Cu;
    SET_GPR_U32(ctx, 31, 0x33CA44u);
    ctx->pc = 0x33CA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CA3Cu;
            // 0x33ca40: 0x461bdb1c  madd.s      $f12, $f27, $f27 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[27]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CA44u; }
        if (ctx->pc != 0x33CA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CA44u; }
        if (ctx->pc != 0x33CA44u) { return; }
    }
    ctx->pc = 0x33CA44u;
label_33ca44:
    // 0x33ca44: 0x4600d847  neg.s       $f1, $f27
    ctx->pc = 0x33ca44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[27]);
label_33ca48:
    // 0x33ca48: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x33ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_33ca4c:
    // 0x33ca4c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x33ca4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_33ca50:
    // 0x33ca50: 0x0  nop
    ctx->pc = 0x33ca50u;
    // NOP
label_33ca54:
    // 0x33ca54: 0x0  nop
    ctx->pc = 0x33ca54u;
    // NOP
label_33ca58:
    // 0x33ca58: 0x4600d343  div.s       $f13, $f26, $f0
    ctx->pc = 0x33ca58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[13] = ctx->f[26] / ctx->f[0];
label_33ca5c:
    // 0x33ca5c: 0x0  nop
    ctx->pc = 0x33ca5cu;
    // NOP
label_33ca60:
    // 0x33ca60: 0x0  nop
    ctx->pc = 0x33ca60u;
    // NOP
label_33ca64:
    // 0x33ca64: 0xc04f2fc  jal         func_13CBF0
label_33ca68:
    if (ctx->pc == 0x33CA68u) {
        ctx->pc = 0x33CA6Cu;
        goto label_33ca6c;
    }
    ctx->pc = 0x33CA64u;
    SET_GPR_U32(ctx, 31, 0x33CA6Cu);
    ctx->pc = 0x13CBF0u;
    if (runtime->hasFunction(0x13CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CA6Cu; }
        if (ctx->pc != 0x33CA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CBF0_0x13cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CA6Cu; }
        if (ctx->pc != 0x33CA6Cu) { return; }
    }
    ctx->pc = 0x33CA6Cu;
label_33ca6c:
    // 0x33ca6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33ca70:
    // 0x33ca70: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x33ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_33ca74:
    // 0x33ca74: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x33ca74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_33ca78:
    // 0x33ca78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33ca78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ca7c:
    // 0x33ca7c: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x33ca7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_33ca80:
    // 0x33ca80: 0xc04ce50  jal         func_133940
label_33ca84:
    if (ctx->pc == 0x33CA84u) {
        ctx->pc = 0x33CA84u;
            // 0x33ca84: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x33CA88u;
        goto label_33ca88;
    }
    ctx->pc = 0x33CA80u;
    SET_GPR_U32(ctx, 31, 0x33CA88u);
    ctx->pc = 0x33CA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CA80u;
            // 0x33ca84: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CA88u; }
        if (ctx->pc != 0x33CA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CA88u; }
        if (ctx->pc != 0x33CA88u) { return; }
    }
    ctx->pc = 0x33CA88u;
label_33ca88:
    // 0x33ca88: 0x87a401bc  lh          $a0, 0x1BC($sp)
    ctx->pc = 0x33ca88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 444)));
label_33ca8c:
    // 0x33ca8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33ca90:
    // 0x33ca90: 0x87a301be  lh          $v1, 0x1BE($sp)
    ctx->pc = 0x33ca90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 446)));
label_33ca94:
    // 0x33ca94: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x33ca94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
label_33ca98:
    // 0x33ca98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33ca98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33ca9c:
    // 0x33ca9c: 0x0  nop
    ctx->pc = 0x33ca9cu;
    // NOP
label_33caa0:
    // 0x33caa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33caa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33caa4:
    // 0x33caa4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x33caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_33caa8:
    // 0x33caa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33caa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33caac:
    // 0x33caac: 0x0  nop
    ctx->pc = 0x33caacu;
    // NOP
label_33cab0:
    // 0x33cab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_33cab4:
    // 0x33cab4: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x33cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_33cab8:
    // 0x33cab8: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x33cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_33cabc:
    // 0x33cabc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_33cac0:
    if (ctx->pc == 0x33CAC0u) {
        ctx->pc = 0x33CAC4u;
        goto label_33cac4;
    }
    ctx->pc = 0x33CABCu;
    {
        const bool branch_taken_0x33cabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cabc) {
            ctx->pc = 0x33CAF0u;
            goto label_33caf0;
        }
    }
    ctx->pc = 0x33CAC4u;
label_33cac4:
    // 0x33cac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33cac8:
    // 0x33cac8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_33cacc:
    if (ctx->pc == 0x33CACCu) {
        ctx->pc = 0x33CAD0u;
        goto label_33cad0;
    }
    ctx->pc = 0x33CAC8u;
    {
        const bool branch_taken_0x33cac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cac8) {
            ctx->pc = 0x33CAF0u;
            goto label_33caf0;
        }
    }
    ctx->pc = 0x33CAD0u;
label_33cad0:
    // 0x33cad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cad4:
    // 0x33cad4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_33cad8:
    if (ctx->pc == 0x33CAD8u) {
        ctx->pc = 0x33CADCu;
        goto label_33cadc;
    }
    ctx->pc = 0x33CAD4u;
    {
        const bool branch_taken_0x33cad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cad4) {
            ctx->pc = 0x33CAF0u;
            goto label_33caf0;
        }
    }
    ctx->pc = 0x33CADCu;
label_33cadc:
    // 0x33cadc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_33cae0:
    if (ctx->pc == 0x33CAE0u) {
        ctx->pc = 0x33CAE4u;
        goto label_33cae4;
    }
    ctx->pc = 0x33CADCu;
    {
        const bool branch_taken_0x33cadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cadc) {
            ctx->pc = 0x33CAF0u;
            goto label_33caf0;
        }
    }
    ctx->pc = 0x33CAE4u;
label_33cae4:
    // 0x33cae4: 0x10000008  b           . + 4 + (0x8 << 2)
label_33cae8:
    if (ctx->pc == 0x33CAE8u) {
        ctx->pc = 0x33CAECu;
        goto label_33caec;
    }
    ctx->pc = 0x33CAE4u;
    {
        const bool branch_taken_0x33cae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cae4) {
            ctx->pc = 0x33CB08u;
            goto label_33cb08;
        }
    }
    ctx->pc = 0x33CAECu;
label_33caec:
    // 0x33caec: 0x0  nop
    ctx->pc = 0x33caecu;
    // NOP
label_33caf0:
    // 0x33caf0: 0x2462000d  addiu       $v0, $v1, 0xD
    ctx->pc = 0x33caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_33caf4:
    // 0x33caf4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33caf8:
    // 0x33caf8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x33caf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33cafc:
    // 0x33cafc: 0x10000004  b           . + 4 + (0x4 << 2)
label_33cb00:
    if (ctx->pc == 0x33CB00u) {
        ctx->pc = 0x33CB00u;
            // 0x33cb00: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x33CB04u;
        goto label_33cb04;
    }
    ctx->pc = 0x33CAFCu;
    {
        const bool branch_taken_0x33cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CAFCu;
            // 0x33cb00: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cafc) {
            ctx->pc = 0x33CB10u;
            goto label_33cb10;
        }
    }
    ctx->pc = 0x33CB04u;
label_33cb04:
    // 0x33cb04: 0x0  nop
    ctx->pc = 0x33cb04u;
    // NOP
label_33cb08:
    // 0x33cb08: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x33cb08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33cb0c:
    // 0x33cb0c: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x33cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_33cb10:
    // 0x33cb10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_33cb14:
    // 0x33cb14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33cb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_33cb18:
    // 0x33cb18: 0x8e030d6c  lw          $v1, 0xD6C($s0)
    ctx->pc = 0x33cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_33cb1c:
    // 0x33cb1c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x33cb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_33cb20:
    // 0x33cb20: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x33cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33cb24:
    // 0x33cb24: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x33cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33cb28:
    // 0x33cb28: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x33cb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_33cb2c:
    // 0x33cb2c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x33cb2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_33cb30:
    // 0x33cb30: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x33cb30u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_33cb34:
    // 0x33cb34: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33cb34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33cb38:
    // 0x33cb38: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x33cb38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
label_33cb3c:
    // 0x33cb3c: 0x84480002  lh          $t0, 0x2($v0)
    ctx->pc = 0x33cb3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_33cb40:
    // 0x33cb40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33cb44:
    // 0x33cb44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x33cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_33cb48:
    // 0x33cb48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33cb48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33cb4c:
    // 0x33cb4c: 0x2442cd10  addiu       $v0, $v0, -0x32F0
    ctx->pc = 0x33cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954256));
label_33cb50:
    // 0x33cb50: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x33cb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_33cb54:
    // 0x33cb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33cb58:
    // 0x33cb58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33cb5c:
    // 0x33cb5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33cb60:
    // 0x33cb60: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x33cb60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_33cb64:
    // 0x33cb64: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x33cb64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33cb68:
    // 0x33cb68: 0x46031382  mul.s       $f14, $f2, $f3
    ctx->pc = 0x33cb68u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_33cb6c:
    // 0x33cb6c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x33cb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_33cb70:
    // 0x33cb70: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x33cb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_33cb74:
    // 0x33cb74: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x33cb74u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_33cb78:
    // 0x33cb78: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x33cb78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_33cb7c:
    // 0x33cb7c: 0xc0bc284  jal         func_2F0A10
label_33cb80:
    if (ctx->pc == 0x33CB80u) {
        ctx->pc = 0x33CB80u;
            // 0x33cb80: 0x46007307  neg.s       $f12, $f14 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[14]);
        ctx->pc = 0x33CB84u;
        goto label_33cb84;
    }
    ctx->pc = 0x33CB7Cu;
    SET_GPR_U32(ctx, 31, 0x33CB84u);
    ctx->pc = 0x33CB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33CB7Cu;
            // 0x33cb80: 0x46007307  neg.s       $f12, $f14 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CB84u; }
        if (ctx->pc != 0x33CB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33CB84u; }
        if (ctx->pc != 0x33CB84u) { return; }
    }
    ctx->pc = 0x33CB84u;
label_33cb84:
    // 0x33cb84: 0x0  nop
    ctx->pc = 0x33cb84u;
    // NOP
label_33cb88:
    // 0x33cb88: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x33cb88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_33cb8c:
    // 0x33cb8c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33cb8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_33cb90:
    // 0x33cb90: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x33cb90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_33cb94:
    // 0x33cb94: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x33cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_33cb98:
    // 0x33cb98: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x33cb98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33cb9c:
    // 0x33cb9c: 0x1460fec7  bnez        $v1, . + 4 + (-0x139 << 2)
label_33cba0:
    if (ctx->pc == 0x33CBA0u) {
        ctx->pc = 0x33CBA0u;
            // 0x33cba0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x33CBA4u;
        goto label_33cba4;
    }
    ctx->pc = 0x33CB9Cu;
    {
        const bool branch_taken_0x33cb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CB9Cu;
            // 0x33cba0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb9c) {
            ctx->pc = 0x33C6BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33c6bc;
        }
    }
    ctx->pc = 0x33CBA4u;
label_33cba4:
    // 0x33cba4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x33cba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_33cba8:
    // 0x33cba8: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x33cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_33cbac:
    // 0x33cbac: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x33cbacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33cbb0:
    // 0x33cbb0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x33cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_33cbb4:
    // 0x33cbb4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x33cbb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33cbb8:
    // 0x33cbb8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x33cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_33cbbc:
    // 0x33cbbc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x33cbbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33cbc0:
    // 0x33cbc0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x33cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_33cbc4:
    // 0x33cbc4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x33cbc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33cbc8:
    // 0x33cbc8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x33cbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_33cbcc:
    // 0x33cbcc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x33cbccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33cbd0:
    // 0x33cbd0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x33cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_33cbd4:
    // 0x33cbd4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x33cbd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33cbd8:
    // 0x33cbd8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x33cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_33cbdc:
    // 0x33cbdc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33cbdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33cbe0:
    // 0x33cbe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33cbe4:
    // 0x33cbe4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33cbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33cbe8:
    // 0x33cbe8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33cbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33cbec:
    // 0x33cbec: 0x3e00008  jr          $ra
label_33cbf0:
    if (ctx->pc == 0x33CBF0u) {
        ctx->pc = 0x33CBF0u;
            // 0x33cbf0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x33CBF4u;
        goto label_33cbf4;
    }
    ctx->pc = 0x33CBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33CBECu;
            // 0x33cbf0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33CBF4u;
label_33cbf4:
    // 0x33cbf4: 0x0  nop
    ctx->pc = 0x33cbf4u;
    // NOP
label_33cbf8:
    // 0x33cbf8: 0x0  nop
    ctx->pc = 0x33cbf8u;
    // NOP
label_33cbfc:
    // 0x33cbfc: 0x0  nop
    ctx->pc = 0x33cbfcu;
    // NOP
}
