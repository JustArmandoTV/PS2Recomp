#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032B5A0
// Address: 0x32b5a0 - 0x32bad0
void sub_0032B5A0_0x32b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B5A0_0x32b5a0");
#endif

    switch (ctx->pc) {
        case 0x32b5a0u: goto label_32b5a0;
        case 0x32b5a4u: goto label_32b5a4;
        case 0x32b5a8u: goto label_32b5a8;
        case 0x32b5acu: goto label_32b5ac;
        case 0x32b5b0u: goto label_32b5b0;
        case 0x32b5b4u: goto label_32b5b4;
        case 0x32b5b8u: goto label_32b5b8;
        case 0x32b5bcu: goto label_32b5bc;
        case 0x32b5c0u: goto label_32b5c0;
        case 0x32b5c4u: goto label_32b5c4;
        case 0x32b5c8u: goto label_32b5c8;
        case 0x32b5ccu: goto label_32b5cc;
        case 0x32b5d0u: goto label_32b5d0;
        case 0x32b5d4u: goto label_32b5d4;
        case 0x32b5d8u: goto label_32b5d8;
        case 0x32b5dcu: goto label_32b5dc;
        case 0x32b5e0u: goto label_32b5e0;
        case 0x32b5e4u: goto label_32b5e4;
        case 0x32b5e8u: goto label_32b5e8;
        case 0x32b5ecu: goto label_32b5ec;
        case 0x32b5f0u: goto label_32b5f0;
        case 0x32b5f4u: goto label_32b5f4;
        case 0x32b5f8u: goto label_32b5f8;
        case 0x32b5fcu: goto label_32b5fc;
        case 0x32b600u: goto label_32b600;
        case 0x32b604u: goto label_32b604;
        case 0x32b608u: goto label_32b608;
        case 0x32b60cu: goto label_32b60c;
        case 0x32b610u: goto label_32b610;
        case 0x32b614u: goto label_32b614;
        case 0x32b618u: goto label_32b618;
        case 0x32b61cu: goto label_32b61c;
        case 0x32b620u: goto label_32b620;
        case 0x32b624u: goto label_32b624;
        case 0x32b628u: goto label_32b628;
        case 0x32b62cu: goto label_32b62c;
        case 0x32b630u: goto label_32b630;
        case 0x32b634u: goto label_32b634;
        case 0x32b638u: goto label_32b638;
        case 0x32b63cu: goto label_32b63c;
        case 0x32b640u: goto label_32b640;
        case 0x32b644u: goto label_32b644;
        case 0x32b648u: goto label_32b648;
        case 0x32b64cu: goto label_32b64c;
        case 0x32b650u: goto label_32b650;
        case 0x32b654u: goto label_32b654;
        case 0x32b658u: goto label_32b658;
        case 0x32b65cu: goto label_32b65c;
        case 0x32b660u: goto label_32b660;
        case 0x32b664u: goto label_32b664;
        case 0x32b668u: goto label_32b668;
        case 0x32b66cu: goto label_32b66c;
        case 0x32b670u: goto label_32b670;
        case 0x32b674u: goto label_32b674;
        case 0x32b678u: goto label_32b678;
        case 0x32b67cu: goto label_32b67c;
        case 0x32b680u: goto label_32b680;
        case 0x32b684u: goto label_32b684;
        case 0x32b688u: goto label_32b688;
        case 0x32b68cu: goto label_32b68c;
        case 0x32b690u: goto label_32b690;
        case 0x32b694u: goto label_32b694;
        case 0x32b698u: goto label_32b698;
        case 0x32b69cu: goto label_32b69c;
        case 0x32b6a0u: goto label_32b6a0;
        case 0x32b6a4u: goto label_32b6a4;
        case 0x32b6a8u: goto label_32b6a8;
        case 0x32b6acu: goto label_32b6ac;
        case 0x32b6b0u: goto label_32b6b0;
        case 0x32b6b4u: goto label_32b6b4;
        case 0x32b6b8u: goto label_32b6b8;
        case 0x32b6bcu: goto label_32b6bc;
        case 0x32b6c0u: goto label_32b6c0;
        case 0x32b6c4u: goto label_32b6c4;
        case 0x32b6c8u: goto label_32b6c8;
        case 0x32b6ccu: goto label_32b6cc;
        case 0x32b6d0u: goto label_32b6d0;
        case 0x32b6d4u: goto label_32b6d4;
        case 0x32b6d8u: goto label_32b6d8;
        case 0x32b6dcu: goto label_32b6dc;
        case 0x32b6e0u: goto label_32b6e0;
        case 0x32b6e4u: goto label_32b6e4;
        case 0x32b6e8u: goto label_32b6e8;
        case 0x32b6ecu: goto label_32b6ec;
        case 0x32b6f0u: goto label_32b6f0;
        case 0x32b6f4u: goto label_32b6f4;
        case 0x32b6f8u: goto label_32b6f8;
        case 0x32b6fcu: goto label_32b6fc;
        case 0x32b700u: goto label_32b700;
        case 0x32b704u: goto label_32b704;
        case 0x32b708u: goto label_32b708;
        case 0x32b70cu: goto label_32b70c;
        case 0x32b710u: goto label_32b710;
        case 0x32b714u: goto label_32b714;
        case 0x32b718u: goto label_32b718;
        case 0x32b71cu: goto label_32b71c;
        case 0x32b720u: goto label_32b720;
        case 0x32b724u: goto label_32b724;
        case 0x32b728u: goto label_32b728;
        case 0x32b72cu: goto label_32b72c;
        case 0x32b730u: goto label_32b730;
        case 0x32b734u: goto label_32b734;
        case 0x32b738u: goto label_32b738;
        case 0x32b73cu: goto label_32b73c;
        case 0x32b740u: goto label_32b740;
        case 0x32b744u: goto label_32b744;
        case 0x32b748u: goto label_32b748;
        case 0x32b74cu: goto label_32b74c;
        case 0x32b750u: goto label_32b750;
        case 0x32b754u: goto label_32b754;
        case 0x32b758u: goto label_32b758;
        case 0x32b75cu: goto label_32b75c;
        case 0x32b760u: goto label_32b760;
        case 0x32b764u: goto label_32b764;
        case 0x32b768u: goto label_32b768;
        case 0x32b76cu: goto label_32b76c;
        case 0x32b770u: goto label_32b770;
        case 0x32b774u: goto label_32b774;
        case 0x32b778u: goto label_32b778;
        case 0x32b77cu: goto label_32b77c;
        case 0x32b780u: goto label_32b780;
        case 0x32b784u: goto label_32b784;
        case 0x32b788u: goto label_32b788;
        case 0x32b78cu: goto label_32b78c;
        case 0x32b790u: goto label_32b790;
        case 0x32b794u: goto label_32b794;
        case 0x32b798u: goto label_32b798;
        case 0x32b79cu: goto label_32b79c;
        case 0x32b7a0u: goto label_32b7a0;
        case 0x32b7a4u: goto label_32b7a4;
        case 0x32b7a8u: goto label_32b7a8;
        case 0x32b7acu: goto label_32b7ac;
        case 0x32b7b0u: goto label_32b7b0;
        case 0x32b7b4u: goto label_32b7b4;
        case 0x32b7b8u: goto label_32b7b8;
        case 0x32b7bcu: goto label_32b7bc;
        case 0x32b7c0u: goto label_32b7c0;
        case 0x32b7c4u: goto label_32b7c4;
        case 0x32b7c8u: goto label_32b7c8;
        case 0x32b7ccu: goto label_32b7cc;
        case 0x32b7d0u: goto label_32b7d0;
        case 0x32b7d4u: goto label_32b7d4;
        case 0x32b7d8u: goto label_32b7d8;
        case 0x32b7dcu: goto label_32b7dc;
        case 0x32b7e0u: goto label_32b7e0;
        case 0x32b7e4u: goto label_32b7e4;
        case 0x32b7e8u: goto label_32b7e8;
        case 0x32b7ecu: goto label_32b7ec;
        case 0x32b7f0u: goto label_32b7f0;
        case 0x32b7f4u: goto label_32b7f4;
        case 0x32b7f8u: goto label_32b7f8;
        case 0x32b7fcu: goto label_32b7fc;
        case 0x32b800u: goto label_32b800;
        case 0x32b804u: goto label_32b804;
        case 0x32b808u: goto label_32b808;
        case 0x32b80cu: goto label_32b80c;
        case 0x32b810u: goto label_32b810;
        case 0x32b814u: goto label_32b814;
        case 0x32b818u: goto label_32b818;
        case 0x32b81cu: goto label_32b81c;
        case 0x32b820u: goto label_32b820;
        case 0x32b824u: goto label_32b824;
        case 0x32b828u: goto label_32b828;
        case 0x32b82cu: goto label_32b82c;
        case 0x32b830u: goto label_32b830;
        case 0x32b834u: goto label_32b834;
        case 0x32b838u: goto label_32b838;
        case 0x32b83cu: goto label_32b83c;
        case 0x32b840u: goto label_32b840;
        case 0x32b844u: goto label_32b844;
        case 0x32b848u: goto label_32b848;
        case 0x32b84cu: goto label_32b84c;
        case 0x32b850u: goto label_32b850;
        case 0x32b854u: goto label_32b854;
        case 0x32b858u: goto label_32b858;
        case 0x32b85cu: goto label_32b85c;
        case 0x32b860u: goto label_32b860;
        case 0x32b864u: goto label_32b864;
        case 0x32b868u: goto label_32b868;
        case 0x32b86cu: goto label_32b86c;
        case 0x32b870u: goto label_32b870;
        case 0x32b874u: goto label_32b874;
        case 0x32b878u: goto label_32b878;
        case 0x32b87cu: goto label_32b87c;
        case 0x32b880u: goto label_32b880;
        case 0x32b884u: goto label_32b884;
        case 0x32b888u: goto label_32b888;
        case 0x32b88cu: goto label_32b88c;
        case 0x32b890u: goto label_32b890;
        case 0x32b894u: goto label_32b894;
        case 0x32b898u: goto label_32b898;
        case 0x32b89cu: goto label_32b89c;
        case 0x32b8a0u: goto label_32b8a0;
        case 0x32b8a4u: goto label_32b8a4;
        case 0x32b8a8u: goto label_32b8a8;
        case 0x32b8acu: goto label_32b8ac;
        case 0x32b8b0u: goto label_32b8b0;
        case 0x32b8b4u: goto label_32b8b4;
        case 0x32b8b8u: goto label_32b8b8;
        case 0x32b8bcu: goto label_32b8bc;
        case 0x32b8c0u: goto label_32b8c0;
        case 0x32b8c4u: goto label_32b8c4;
        case 0x32b8c8u: goto label_32b8c8;
        case 0x32b8ccu: goto label_32b8cc;
        case 0x32b8d0u: goto label_32b8d0;
        case 0x32b8d4u: goto label_32b8d4;
        case 0x32b8d8u: goto label_32b8d8;
        case 0x32b8dcu: goto label_32b8dc;
        case 0x32b8e0u: goto label_32b8e0;
        case 0x32b8e4u: goto label_32b8e4;
        case 0x32b8e8u: goto label_32b8e8;
        case 0x32b8ecu: goto label_32b8ec;
        case 0x32b8f0u: goto label_32b8f0;
        case 0x32b8f4u: goto label_32b8f4;
        case 0x32b8f8u: goto label_32b8f8;
        case 0x32b8fcu: goto label_32b8fc;
        case 0x32b900u: goto label_32b900;
        case 0x32b904u: goto label_32b904;
        case 0x32b908u: goto label_32b908;
        case 0x32b90cu: goto label_32b90c;
        case 0x32b910u: goto label_32b910;
        case 0x32b914u: goto label_32b914;
        case 0x32b918u: goto label_32b918;
        case 0x32b91cu: goto label_32b91c;
        case 0x32b920u: goto label_32b920;
        case 0x32b924u: goto label_32b924;
        case 0x32b928u: goto label_32b928;
        case 0x32b92cu: goto label_32b92c;
        case 0x32b930u: goto label_32b930;
        case 0x32b934u: goto label_32b934;
        case 0x32b938u: goto label_32b938;
        case 0x32b93cu: goto label_32b93c;
        case 0x32b940u: goto label_32b940;
        case 0x32b944u: goto label_32b944;
        case 0x32b948u: goto label_32b948;
        case 0x32b94cu: goto label_32b94c;
        case 0x32b950u: goto label_32b950;
        case 0x32b954u: goto label_32b954;
        case 0x32b958u: goto label_32b958;
        case 0x32b95cu: goto label_32b95c;
        case 0x32b960u: goto label_32b960;
        case 0x32b964u: goto label_32b964;
        case 0x32b968u: goto label_32b968;
        case 0x32b96cu: goto label_32b96c;
        case 0x32b970u: goto label_32b970;
        case 0x32b974u: goto label_32b974;
        case 0x32b978u: goto label_32b978;
        case 0x32b97cu: goto label_32b97c;
        case 0x32b980u: goto label_32b980;
        case 0x32b984u: goto label_32b984;
        case 0x32b988u: goto label_32b988;
        case 0x32b98cu: goto label_32b98c;
        case 0x32b990u: goto label_32b990;
        case 0x32b994u: goto label_32b994;
        case 0x32b998u: goto label_32b998;
        case 0x32b99cu: goto label_32b99c;
        case 0x32b9a0u: goto label_32b9a0;
        case 0x32b9a4u: goto label_32b9a4;
        case 0x32b9a8u: goto label_32b9a8;
        case 0x32b9acu: goto label_32b9ac;
        case 0x32b9b0u: goto label_32b9b0;
        case 0x32b9b4u: goto label_32b9b4;
        case 0x32b9b8u: goto label_32b9b8;
        case 0x32b9bcu: goto label_32b9bc;
        case 0x32b9c0u: goto label_32b9c0;
        case 0x32b9c4u: goto label_32b9c4;
        case 0x32b9c8u: goto label_32b9c8;
        case 0x32b9ccu: goto label_32b9cc;
        case 0x32b9d0u: goto label_32b9d0;
        case 0x32b9d4u: goto label_32b9d4;
        case 0x32b9d8u: goto label_32b9d8;
        case 0x32b9dcu: goto label_32b9dc;
        case 0x32b9e0u: goto label_32b9e0;
        case 0x32b9e4u: goto label_32b9e4;
        case 0x32b9e8u: goto label_32b9e8;
        case 0x32b9ecu: goto label_32b9ec;
        case 0x32b9f0u: goto label_32b9f0;
        case 0x32b9f4u: goto label_32b9f4;
        case 0x32b9f8u: goto label_32b9f8;
        case 0x32b9fcu: goto label_32b9fc;
        case 0x32ba00u: goto label_32ba00;
        case 0x32ba04u: goto label_32ba04;
        case 0x32ba08u: goto label_32ba08;
        case 0x32ba0cu: goto label_32ba0c;
        case 0x32ba10u: goto label_32ba10;
        case 0x32ba14u: goto label_32ba14;
        case 0x32ba18u: goto label_32ba18;
        case 0x32ba1cu: goto label_32ba1c;
        case 0x32ba20u: goto label_32ba20;
        case 0x32ba24u: goto label_32ba24;
        case 0x32ba28u: goto label_32ba28;
        case 0x32ba2cu: goto label_32ba2c;
        case 0x32ba30u: goto label_32ba30;
        case 0x32ba34u: goto label_32ba34;
        case 0x32ba38u: goto label_32ba38;
        case 0x32ba3cu: goto label_32ba3c;
        case 0x32ba40u: goto label_32ba40;
        case 0x32ba44u: goto label_32ba44;
        case 0x32ba48u: goto label_32ba48;
        case 0x32ba4cu: goto label_32ba4c;
        case 0x32ba50u: goto label_32ba50;
        case 0x32ba54u: goto label_32ba54;
        case 0x32ba58u: goto label_32ba58;
        case 0x32ba5cu: goto label_32ba5c;
        case 0x32ba60u: goto label_32ba60;
        case 0x32ba64u: goto label_32ba64;
        case 0x32ba68u: goto label_32ba68;
        case 0x32ba6cu: goto label_32ba6c;
        case 0x32ba70u: goto label_32ba70;
        case 0x32ba74u: goto label_32ba74;
        case 0x32ba78u: goto label_32ba78;
        case 0x32ba7cu: goto label_32ba7c;
        case 0x32ba80u: goto label_32ba80;
        case 0x32ba84u: goto label_32ba84;
        case 0x32ba88u: goto label_32ba88;
        case 0x32ba8cu: goto label_32ba8c;
        case 0x32ba90u: goto label_32ba90;
        case 0x32ba94u: goto label_32ba94;
        case 0x32ba98u: goto label_32ba98;
        case 0x32ba9cu: goto label_32ba9c;
        case 0x32baa0u: goto label_32baa0;
        case 0x32baa4u: goto label_32baa4;
        case 0x32baa8u: goto label_32baa8;
        case 0x32baacu: goto label_32baac;
        case 0x32bab0u: goto label_32bab0;
        case 0x32bab4u: goto label_32bab4;
        case 0x32bab8u: goto label_32bab8;
        case 0x32babcu: goto label_32babc;
        case 0x32bac0u: goto label_32bac0;
        case 0x32bac4u: goto label_32bac4;
        case 0x32bac8u: goto label_32bac8;
        case 0x32baccu: goto label_32bacc;
        default: break;
    }

    ctx->pc = 0x32b5a0u;

label_32b5a0:
    // 0x32b5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32b5a4:
    // 0x32b5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32b5a8:
    // 0x32b5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32b5ac:
    // 0x32b5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b5b0:
    // 0x32b5b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32b5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32b5b4:
    // 0x32b5b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_32b5b8:
    if (ctx->pc == 0x32B5B8u) {
        ctx->pc = 0x32B5B8u;
            // 0x32b5b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B5BCu;
        goto label_32b5bc;
    }
    ctx->pc = 0x32B5B4u;
    {
        const bool branch_taken_0x32b5b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B5B4u;
            // 0x32b5b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5b4) {
            ctx->pc = 0x32B6E8u;
            goto label_32b6e8;
        }
    }
    ctx->pc = 0x32B5BCu;
label_32b5bc:
    // 0x32b5bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32b5c0:
    // 0x32b5c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b5c4:
    // 0x32b5c4: 0x246348b0  addiu       $v1, $v1, 0x48B0
    ctx->pc = 0x32b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18608));
label_32b5c8:
    // 0x32b5c8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_32b5cc:
    // 0x32b5cc: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x32b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
label_32b5d0:
    // 0x32b5d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x32b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_32b5d4:
    // 0x32b5d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x32b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_32b5d8:
    // 0x32b5d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x32b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_32b5dc:
    // 0x32b5dc: 0xc0407c0  jal         func_101F00
label_32b5e0:
    if (ctx->pc == 0x32B5E0u) {
        ctx->pc = 0x32B5E0u;
            // 0x32b5e0: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
        ctx->pc = 0x32B5E4u;
        goto label_32b5e4;
    }
    ctx->pc = 0x32B5DCu;
    SET_GPR_U32(ctx, 31, 0x32B5E4u);
    ctx->pc = 0x32B5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B5DCu;
            // 0x32b5e0: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B5E4u; }
        if (ctx->pc != 0x32B5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B5E4u; }
        if (ctx->pc != 0x32B5E4u) { return; }
    }
    ctx->pc = 0x32B5E4u;
label_32b5e4:
    // 0x32b5e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x32b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_32b5e8:
    // 0x32b5e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_32b5ec:
    if (ctx->pc == 0x32B5ECu) {
        ctx->pc = 0x32B5ECu;
            // 0x32b5ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x32B5F0u;
        goto label_32b5f0;
    }
    ctx->pc = 0x32B5E8u;
    {
        const bool branch_taken_0x32b5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b5e8) {
            ctx->pc = 0x32B5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B5E8u;
            // 0x32b5ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B5FCu;
            goto label_32b5fc;
        }
    }
    ctx->pc = 0x32B5F0u;
label_32b5f0:
    // 0x32b5f0: 0xc07507c  jal         func_1D41F0
label_32b5f4:
    if (ctx->pc == 0x32B5F4u) {
        ctx->pc = 0x32B5F4u;
            // 0x32b5f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x32B5F8u;
        goto label_32b5f8;
    }
    ctx->pc = 0x32B5F0u;
    SET_GPR_U32(ctx, 31, 0x32B5F8u);
    ctx->pc = 0x32B5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B5F0u;
            // 0x32b5f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B5F8u; }
        if (ctx->pc != 0x32B5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B5F8u; }
        if (ctx->pc != 0x32B5F8u) { return; }
    }
    ctx->pc = 0x32B5F8u;
label_32b5f8:
    // 0x32b5f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x32b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_32b5fc:
    // 0x32b5fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_32b600:
    if (ctx->pc == 0x32B600u) {
        ctx->pc = 0x32B600u;
            // 0x32b600: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x32B604u;
        goto label_32b604;
    }
    ctx->pc = 0x32B5FCu;
    {
        const bool branch_taken_0x32b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b5fc) {
            ctx->pc = 0x32B600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B5FCu;
            // 0x32b600: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B62Cu;
            goto label_32b62c;
        }
    }
    ctx->pc = 0x32B604u;
label_32b604:
    // 0x32b604: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_32b608:
    if (ctx->pc == 0x32B608u) {
        ctx->pc = 0x32B60Cu;
        goto label_32b60c;
    }
    ctx->pc = 0x32B604u;
    {
        const bool branch_taken_0x32b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b604) {
            ctx->pc = 0x32B628u;
            goto label_32b628;
        }
    }
    ctx->pc = 0x32B60Cu;
label_32b60c:
    // 0x32b60c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32b610:
    if (ctx->pc == 0x32B610u) {
        ctx->pc = 0x32B614u;
        goto label_32b614;
    }
    ctx->pc = 0x32B60Cu;
    {
        const bool branch_taken_0x32b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b60c) {
            ctx->pc = 0x32B628u;
            goto label_32b628;
        }
    }
    ctx->pc = 0x32B614u;
label_32b614:
    // 0x32b614: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x32b614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_32b618:
    // 0x32b618: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_32b61c:
    if (ctx->pc == 0x32B61Cu) {
        ctx->pc = 0x32B620u;
        goto label_32b620;
    }
    ctx->pc = 0x32B618u;
    {
        const bool branch_taken_0x32b618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b618) {
            ctx->pc = 0x32B628u;
            goto label_32b628;
        }
    }
    ctx->pc = 0x32B620u;
label_32b620:
    // 0x32b620: 0xc0400a8  jal         func_1002A0
label_32b624:
    if (ctx->pc == 0x32B624u) {
        ctx->pc = 0x32B628u;
        goto label_32b628;
    }
    ctx->pc = 0x32B620u;
    SET_GPR_U32(ctx, 31, 0x32B628u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B628u; }
        if (ctx->pc != 0x32B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B628u; }
        if (ctx->pc != 0x32B628u) { return; }
    }
    ctx->pc = 0x32B628u;
label_32b628:
    // 0x32b628: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x32b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_32b62c:
    // 0x32b62c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_32b630:
    if (ctx->pc == 0x32B630u) {
        ctx->pc = 0x32B630u;
            // 0x32b630: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x32B634u;
        goto label_32b634;
    }
    ctx->pc = 0x32B62Cu;
    {
        const bool branch_taken_0x32b62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b62c) {
            ctx->pc = 0x32B630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B62Cu;
            // 0x32b630: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B65Cu;
            goto label_32b65c;
        }
    }
    ctx->pc = 0x32B634u;
label_32b634:
    // 0x32b634: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_32b638:
    if (ctx->pc == 0x32B638u) {
        ctx->pc = 0x32B63Cu;
        goto label_32b63c;
    }
    ctx->pc = 0x32B634u;
    {
        const bool branch_taken_0x32b634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b634) {
            ctx->pc = 0x32B658u;
            goto label_32b658;
        }
    }
    ctx->pc = 0x32B63Cu;
label_32b63c:
    // 0x32b63c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32b640:
    if (ctx->pc == 0x32B640u) {
        ctx->pc = 0x32B644u;
        goto label_32b644;
    }
    ctx->pc = 0x32B63Cu;
    {
        const bool branch_taken_0x32b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b63c) {
            ctx->pc = 0x32B658u;
            goto label_32b658;
        }
    }
    ctx->pc = 0x32B644u;
label_32b644:
    // 0x32b644: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x32b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_32b648:
    // 0x32b648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_32b64c:
    if (ctx->pc == 0x32B64Cu) {
        ctx->pc = 0x32B650u;
        goto label_32b650;
    }
    ctx->pc = 0x32B648u;
    {
        const bool branch_taken_0x32b648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b648) {
            ctx->pc = 0x32B658u;
            goto label_32b658;
        }
    }
    ctx->pc = 0x32B650u;
label_32b650:
    // 0x32b650: 0xc0400a8  jal         func_1002A0
label_32b654:
    if (ctx->pc == 0x32B654u) {
        ctx->pc = 0x32B658u;
        goto label_32b658;
    }
    ctx->pc = 0x32B650u;
    SET_GPR_U32(ctx, 31, 0x32B658u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B658u; }
        if (ctx->pc != 0x32B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B658u; }
        if (ctx->pc != 0x32B658u) { return; }
    }
    ctx->pc = 0x32B658u;
label_32b658:
    // 0x32b658: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x32b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_32b65c:
    // 0x32b65c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32b660:
    if (ctx->pc == 0x32B660u) {
        ctx->pc = 0x32B664u;
        goto label_32b664;
    }
    ctx->pc = 0x32B65Cu;
    {
        const bool branch_taken_0x32b65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b65c) {
            ctx->pc = 0x32B678u;
            goto label_32b678;
        }
    }
    ctx->pc = 0x32B664u;
label_32b664:
    // 0x32b664: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32b664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32b668:
    // 0x32b668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32b66c:
    // 0x32b66c: 0x24634898  addiu       $v1, $v1, 0x4898
    ctx->pc = 0x32b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18584));
label_32b670:
    // 0x32b670: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x32b670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_32b674:
    // 0x32b674: 0xac403e50  sw          $zero, 0x3E50($v0)
    ctx->pc = 0x32b674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15952), GPR_U32(ctx, 0));
label_32b678:
    // 0x32b678: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_32b67c:
    if (ctx->pc == 0x32B67Cu) {
        ctx->pc = 0x32B67Cu;
            // 0x32b67c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x32B680u;
        goto label_32b680;
    }
    ctx->pc = 0x32B678u;
    {
        const bool branch_taken_0x32b678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b678) {
            ctx->pc = 0x32B67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B678u;
            // 0x32b67c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B6D4u;
            goto label_32b6d4;
        }
    }
    ctx->pc = 0x32B680u;
label_32b680:
    // 0x32b680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b684:
    // 0x32b684: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x32b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_32b688:
    // 0x32b688: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32b688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_32b68c:
    // 0x32b68c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x32b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_32b690:
    // 0x32b690: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32b694:
    if (ctx->pc == 0x32B694u) {
        ctx->pc = 0x32B694u;
            // 0x32b694: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x32B698u;
        goto label_32b698;
    }
    ctx->pc = 0x32B690u;
    {
        const bool branch_taken_0x32b690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b690) {
            ctx->pc = 0x32B694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B690u;
            // 0x32b694: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B6ACu;
            goto label_32b6ac;
        }
    }
    ctx->pc = 0x32B698u;
label_32b698:
    // 0x32b698: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32b698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b69c:
    // 0x32b69c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32b69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32b6a0:
    // 0x32b6a0: 0x320f809  jalr        $t9
label_32b6a4:
    if (ctx->pc == 0x32B6A4u) {
        ctx->pc = 0x32B6A4u;
            // 0x32b6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32B6A8u;
        goto label_32b6a8;
    }
    ctx->pc = 0x32B6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B6A8u);
        ctx->pc = 0x32B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B6A0u;
            // 0x32b6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B6A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B6A8u; }
            if (ctx->pc != 0x32B6A8u) { return; }
        }
        }
    }
    ctx->pc = 0x32B6A8u;
label_32b6a8:
    // 0x32b6a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x32b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_32b6ac:
    // 0x32b6ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32b6b0:
    if (ctx->pc == 0x32B6B0u) {
        ctx->pc = 0x32B6B0u;
            // 0x32b6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B6B4u;
        goto label_32b6b4;
    }
    ctx->pc = 0x32B6ACu;
    {
        const bool branch_taken_0x32b6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b6ac) {
            ctx->pc = 0x32B6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B6ACu;
            // 0x32b6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B6C8u;
            goto label_32b6c8;
        }
    }
    ctx->pc = 0x32B6B4u;
label_32b6b4:
    // 0x32b6b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32b6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b6b8:
    // 0x32b6b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32b6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32b6bc:
    // 0x32b6bc: 0x320f809  jalr        $t9
label_32b6c0:
    if (ctx->pc == 0x32B6C0u) {
        ctx->pc = 0x32B6C0u;
            // 0x32b6c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32B6C4u;
        goto label_32b6c4;
    }
    ctx->pc = 0x32B6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B6C4u);
        ctx->pc = 0x32B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B6BCu;
            // 0x32b6c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B6C4u; }
            if (ctx->pc != 0x32B6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x32B6C4u;
label_32b6c4:
    // 0x32b6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32b6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b6c8:
    // 0x32b6c8: 0xc075bf8  jal         func_1D6FE0
label_32b6cc:
    if (ctx->pc == 0x32B6CCu) {
        ctx->pc = 0x32B6CCu;
            // 0x32b6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B6D0u;
        goto label_32b6d0;
    }
    ctx->pc = 0x32B6C8u;
    SET_GPR_U32(ctx, 31, 0x32B6D0u);
    ctx->pc = 0x32B6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B6C8u;
            // 0x32b6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B6D0u; }
        if (ctx->pc != 0x32B6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B6D0u; }
        if (ctx->pc != 0x32B6D0u) { return; }
    }
    ctx->pc = 0x32B6D0u;
label_32b6d0:
    // 0x32b6d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x32b6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_32b6d4:
    // 0x32b6d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32b6d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_32b6d8:
    // 0x32b6d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_32b6dc:
    if (ctx->pc == 0x32B6DCu) {
        ctx->pc = 0x32B6DCu;
            // 0x32b6dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B6E0u;
        goto label_32b6e0;
    }
    ctx->pc = 0x32B6D8u;
    {
        const bool branch_taken_0x32b6d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32b6d8) {
            ctx->pc = 0x32B6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B6D8u;
            // 0x32b6dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B6ECu;
            goto label_32b6ec;
        }
    }
    ctx->pc = 0x32B6E0u;
label_32b6e0:
    // 0x32b6e0: 0xc0400a8  jal         func_1002A0
label_32b6e4:
    if (ctx->pc == 0x32B6E4u) {
        ctx->pc = 0x32B6E4u;
            // 0x32b6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B6E8u;
        goto label_32b6e8;
    }
    ctx->pc = 0x32B6E0u;
    SET_GPR_U32(ctx, 31, 0x32B6E8u);
    ctx->pc = 0x32B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B6E0u;
            // 0x32b6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B6E8u; }
        if (ctx->pc != 0x32B6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B6E8u; }
        if (ctx->pc != 0x32B6E8u) { return; }
    }
    ctx->pc = 0x32B6E8u;
label_32b6e8:
    // 0x32b6e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32b6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32b6ec:
    // 0x32b6ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b6f0:
    // 0x32b6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32b6f4:
    // 0x32b6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b6f8:
    // 0x32b6f8: 0x3e00008  jr          $ra
label_32b6fc:
    if (ctx->pc == 0x32B6FCu) {
        ctx->pc = 0x32B6FCu;
            // 0x32b6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32B700u;
        goto label_32b700;
    }
    ctx->pc = 0x32B6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B6F8u;
            // 0x32b6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B700u;
label_32b700:
    // 0x32b700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32b704:
    // 0x32b704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32b708:
    // 0x32b708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32b70c:
    // 0x32b70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b710:
    // 0x32b710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32b714:
    // 0x32b714: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_32b718:
    if (ctx->pc == 0x32B718u) {
        ctx->pc = 0x32B718u;
            // 0x32b718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B71Cu;
        goto label_32b71c;
    }
    ctx->pc = 0x32B714u;
    {
        const bool branch_taken_0x32b714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B714u;
            // 0x32b718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b714) {
            ctx->pc = 0x32B7DCu;
            goto label_32b7dc;
        }
    }
    ctx->pc = 0x32B71Cu;
label_32b71c:
    // 0x32b71c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32b720:
    // 0x32b720: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b724:
    // 0x32b724: 0x24634950  addiu       $v1, $v1, 0x4950
    ctx->pc = 0x32b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18768));
label_32b728:
    // 0x32b728: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x32b728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_32b72c:
    // 0x32b72c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32b730:
    // 0x32b730: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32b730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32b734:
    // 0x32b734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32b734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b738:
    // 0x32b738: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x32b738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_32b73c:
    // 0x32b73c: 0x320f809  jalr        $t9
label_32b740:
    if (ctx->pc == 0x32B740u) {
        ctx->pc = 0x32B744u;
        goto label_32b744;
    }
    ctx->pc = 0x32B73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B744u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B744u; }
            if (ctx->pc != 0x32B744u) { return; }
        }
        }
    }
    ctx->pc = 0x32B744u;
label_32b744:
    // 0x32b744: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_32b748:
    if (ctx->pc == 0x32B748u) {
        ctx->pc = 0x32B748u;
            // 0x32b748: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x32B74Cu;
        goto label_32b74c;
    }
    ctx->pc = 0x32B744u;
    {
        const bool branch_taken_0x32b744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b744) {
            ctx->pc = 0x32B748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B744u;
            // 0x32b748: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B7C8u;
            goto label_32b7c8;
        }
    }
    ctx->pc = 0x32B74Cu;
label_32b74c:
    // 0x32b74c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32b750:
    // 0x32b750: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32b750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32b754:
    // 0x32b754: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x32b754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_32b758:
    // 0x32b758: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x32b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_32b75c:
    // 0x32b75c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32b760:
    // 0x32b760: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32b764:
    // 0x32b764: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x32b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_32b768:
    // 0x32b768: 0xc0aecc4  jal         func_2BB310
label_32b76c:
    if (ctx->pc == 0x32B76Cu) {
        ctx->pc = 0x32B76Cu;
            // 0x32b76c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32B770u;
        goto label_32b770;
    }
    ctx->pc = 0x32B768u;
    SET_GPR_U32(ctx, 31, 0x32B770u);
    ctx->pc = 0x32B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B768u;
            // 0x32b76c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B770u; }
        if (ctx->pc != 0x32B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B770u; }
        if (ctx->pc != 0x32B770u) { return; }
    }
    ctx->pc = 0x32B770u;
label_32b770:
    // 0x32b770: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x32b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_32b774:
    // 0x32b774: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x32b774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_32b778:
    // 0x32b778: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32b77c:
    if (ctx->pc == 0x32B77Cu) {
        ctx->pc = 0x32B77Cu;
            // 0x32b77c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x32B780u;
        goto label_32b780;
    }
    ctx->pc = 0x32B778u;
    {
        const bool branch_taken_0x32b778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b778) {
            ctx->pc = 0x32B77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B778u;
            // 0x32b77c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B794u;
            goto label_32b794;
        }
    }
    ctx->pc = 0x32B780u;
label_32b780:
    // 0x32b780: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x32b780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_32b784:
    // 0x32b784: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32b784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32b788:
    // 0x32b788: 0x320f809  jalr        $t9
label_32b78c:
    if (ctx->pc == 0x32B78Cu) {
        ctx->pc = 0x32B78Cu;
            // 0x32b78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32B790u;
        goto label_32b790;
    }
    ctx->pc = 0x32B788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B790u);
        ctx->pc = 0x32B78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B788u;
            // 0x32b78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B790u; }
            if (ctx->pc != 0x32B790u) { return; }
        }
        }
    }
    ctx->pc = 0x32B790u;
label_32b790:
    // 0x32b790: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x32b790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_32b794:
    // 0x32b794: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32b794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32b798:
    // 0x32b798: 0xc0aec9c  jal         func_2BB270
label_32b79c:
    if (ctx->pc == 0x32B79Cu) {
        ctx->pc = 0x32B79Cu;
            // 0x32b79c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x32B7A0u;
        goto label_32b7a0;
    }
    ctx->pc = 0x32B798u;
    SET_GPR_U32(ctx, 31, 0x32B7A0u);
    ctx->pc = 0x32B79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B798u;
            // 0x32b79c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7A0u; }
        if (ctx->pc != 0x32B7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7A0u; }
        if (ctx->pc != 0x32B7A0u) { return; }
    }
    ctx->pc = 0x32B7A0u;
label_32b7a0:
    // 0x32b7a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x32b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_32b7a4:
    // 0x32b7a4: 0xc0aec88  jal         func_2BB220
label_32b7a8:
    if (ctx->pc == 0x32B7A8u) {
        ctx->pc = 0x32B7A8u;
            // 0x32b7a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x32B7ACu;
        goto label_32b7ac;
    }
    ctx->pc = 0x32B7A4u;
    SET_GPR_U32(ctx, 31, 0x32B7ACu);
    ctx->pc = 0x32B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B7A4u;
            // 0x32b7a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7ACu; }
        if (ctx->pc != 0x32B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7ACu; }
        if (ctx->pc != 0x32B7ACu) { return; }
    }
    ctx->pc = 0x32B7ACu;
label_32b7ac:
    // 0x32b7ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x32b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_32b7b0:
    // 0x32b7b0: 0xc0aec0c  jal         func_2BB030
label_32b7b4:
    if (ctx->pc == 0x32B7B4u) {
        ctx->pc = 0x32B7B4u;
            // 0x32b7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B7B8u;
        goto label_32b7b8;
    }
    ctx->pc = 0x32B7B0u;
    SET_GPR_U32(ctx, 31, 0x32B7B8u);
    ctx->pc = 0x32B7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B7B0u;
            // 0x32b7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7B8u; }
        if (ctx->pc != 0x32B7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7B8u; }
        if (ctx->pc != 0x32B7B8u) { return; }
    }
    ctx->pc = 0x32B7B8u;
label_32b7b8:
    // 0x32b7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b7bc:
    // 0x32b7bc: 0xc0aeaa8  jal         func_2BAAA0
label_32b7c0:
    if (ctx->pc == 0x32B7C0u) {
        ctx->pc = 0x32B7C0u;
            // 0x32b7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B7C4u;
        goto label_32b7c4;
    }
    ctx->pc = 0x32B7BCu;
    SET_GPR_U32(ctx, 31, 0x32B7C4u);
    ctx->pc = 0x32B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B7BCu;
            // 0x32b7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7C4u; }
        if (ctx->pc != 0x32B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7C4u; }
        if (ctx->pc != 0x32B7C4u) { return; }
    }
    ctx->pc = 0x32B7C4u;
label_32b7c4:
    // 0x32b7c4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x32b7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_32b7c8:
    // 0x32b7c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32b7c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_32b7cc:
    // 0x32b7cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_32b7d0:
    if (ctx->pc == 0x32B7D0u) {
        ctx->pc = 0x32B7D0u;
            // 0x32b7d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B7D4u;
        goto label_32b7d4;
    }
    ctx->pc = 0x32B7CCu;
    {
        const bool branch_taken_0x32b7cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32b7cc) {
            ctx->pc = 0x32B7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B7CCu;
            // 0x32b7d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B7E0u;
            goto label_32b7e0;
        }
    }
    ctx->pc = 0x32B7D4u;
label_32b7d4:
    // 0x32b7d4: 0xc0400a8  jal         func_1002A0
label_32b7d8:
    if (ctx->pc == 0x32B7D8u) {
        ctx->pc = 0x32B7D8u;
            // 0x32b7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B7DCu;
        goto label_32b7dc;
    }
    ctx->pc = 0x32B7D4u;
    SET_GPR_U32(ctx, 31, 0x32B7DCu);
    ctx->pc = 0x32B7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B7D4u;
            // 0x32b7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7DCu; }
        if (ctx->pc != 0x32B7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B7DCu; }
        if (ctx->pc != 0x32B7DCu) { return; }
    }
    ctx->pc = 0x32B7DCu;
label_32b7dc:
    // 0x32b7dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32b7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b7e0:
    // 0x32b7e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b7e4:
    // 0x32b7e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32b7e8:
    // 0x32b7e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b7ec:
    // 0x32b7ec: 0x3e00008  jr          $ra
label_32b7f0:
    if (ctx->pc == 0x32B7F0u) {
        ctx->pc = 0x32B7F0u;
            // 0x32b7f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32B7F4u;
        goto label_32b7f4;
    }
    ctx->pc = 0x32B7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B7ECu;
            // 0x32b7f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B7F4u;
label_32b7f4:
    // 0x32b7f4: 0x0  nop
    ctx->pc = 0x32b7f4u;
    // NOP
label_32b7f8:
    // 0x32b7f8: 0x0  nop
    ctx->pc = 0x32b7f8u;
    // NOP
label_32b7fc:
    // 0x32b7fc: 0x0  nop
    ctx->pc = 0x32b7fcu;
    // NOP
label_32b800:
    // 0x32b800: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x32b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_32b804:
    // 0x32b804: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32b804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32b808:
    // 0x32b808: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_32b80c:
    // 0x32b80c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_32b810:
    // 0x32b810: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_32b814:
    // 0x32b814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32b818:
    // 0x32b818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32b81c:
    // 0x32b81c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32b81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32b820:
    // 0x32b820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32b824:
    // 0x32b824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32b828:
    // 0x32b828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b82c:
    // 0x32b82c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x32b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_32b830:
    // 0x32b830: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x32b830u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_32b834:
    // 0x32b834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32b834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32b838:
    // 0x32b838: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_32b83c:
    if (ctx->pc == 0x32B83Cu) {
        ctx->pc = 0x32B83Cu;
            // 0x32b83c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B840u;
        goto label_32b840;
    }
    ctx->pc = 0x32B838u;
    {
        const bool branch_taken_0x32b838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B838u;
            // 0x32b83c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b838) {
            ctx->pc = 0x32B87Cu;
            goto label_32b87c;
        }
    }
    ctx->pc = 0x32B840u;
label_32b840:
    // 0x32b840: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32b844:
    // 0x32b844: 0x50a3004c  beql        $a1, $v1, . + 4 + (0x4C << 2)
label_32b848:
    if (ctx->pc == 0x32B848u) {
        ctx->pc = 0x32B848u;
            // 0x32b848: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x32B84Cu;
        goto label_32b84c;
    }
    ctx->pc = 0x32B844u;
    {
        const bool branch_taken_0x32b844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b844) {
            ctx->pc = 0x32B848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B844u;
            // 0x32b848: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B978u;
            goto label_32b978;
        }
    }
    ctx->pc = 0x32B84Cu;
label_32b84c:
    // 0x32b84c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32b850:
    // 0x32b850: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_32b854:
    if (ctx->pc == 0x32B854u) {
        ctx->pc = 0x32B854u;
            // 0x32b854: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32B858u;
        goto label_32b858;
    }
    ctx->pc = 0x32B850u;
    {
        const bool branch_taken_0x32b850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b850) {
            ctx->pc = 0x32B854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B850u;
            // 0x32b854: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B860u;
            goto label_32b860;
        }
    }
    ctx->pc = 0x32B858u;
label_32b858:
    // 0x32b858: 0x10000046  b           . + 4 + (0x46 << 2)
label_32b85c:
    if (ctx->pc == 0x32B85Cu) {
        ctx->pc = 0x32B860u;
        goto label_32b860;
    }
    ctx->pc = 0x32B858u;
    {
        const bool branch_taken_0x32b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b858) {
            ctx->pc = 0x32B974u;
            goto label_32b974;
        }
    }
    ctx->pc = 0x32B860u;
label_32b860:
    // 0x32b860: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x32b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_32b864:
    // 0x32b864: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x32b864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_32b868:
    // 0x32b868: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_32b86c:
    // 0x32b86c: 0x320f809  jalr        $t9
label_32b870:
    if (ctx->pc == 0x32B870u) {
        ctx->pc = 0x32B870u;
            // 0x32b870: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x32B874u;
        goto label_32b874;
    }
    ctx->pc = 0x32B86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B874u);
        ctx->pc = 0x32B870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B86Cu;
            // 0x32b870: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B874u; }
            if (ctx->pc != 0x32B874u) { return; }
        }
        }
    }
    ctx->pc = 0x32B874u;
label_32b874:
    // 0x32b874: 0x1000003f  b           . + 4 + (0x3F << 2)
label_32b878:
    if (ctx->pc == 0x32B878u) {
        ctx->pc = 0x32B87Cu;
        goto label_32b87c;
    }
    ctx->pc = 0x32B874u;
    {
        const bool branch_taken_0x32b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b874) {
            ctx->pc = 0x32B974u;
            goto label_32b974;
        }
    }
    ctx->pc = 0x32B87Cu;
label_32b87c:
    // 0x32b87c: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x32b87cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_32b880:
    // 0x32b880: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_32b884:
    if (ctx->pc == 0x32B884u) {
        ctx->pc = 0x32B888u;
        goto label_32b888;
    }
    ctx->pc = 0x32B880u;
    {
        const bool branch_taken_0x32b880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b880) {
            ctx->pc = 0x32B974u;
            goto label_32b974;
        }
    }
    ctx->pc = 0x32B888u;
label_32b888:
    // 0x32b888: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b88c:
    // 0x32b88c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32b890:
    // 0x32b890: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x32b890u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_32b894:
    // 0x32b894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32b894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b898:
    // 0x32b898: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x32b898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32b89c:
    // 0x32b89c: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x32b89cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_32b8a0:
    // 0x32b8a0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x32b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_32b8a4:
    // 0x32b8a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b8a8:
    // 0x32b8a8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x32b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_32b8ac:
    // 0x32b8ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b8b0:
    // 0x32b8b0: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x32b8b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_32b8b4:
    // 0x32b8b4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x32b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_32b8b8:
    // 0x32b8b8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x32b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_32b8bc:
    // 0x32b8bc: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x32b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_32b8c0:
    // 0x32b8c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x32b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32b8c4:
    // 0x32b8c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_32b8c8:
    // 0x32b8c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32b8cc:
    // 0x32b8cc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x32b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32b8d0:
    // 0x32b8d0: 0xc04e4a4  jal         func_139290
label_32b8d4:
    if (ctx->pc == 0x32B8D4u) {
        ctx->pc = 0x32B8D4u;
            // 0x32b8d4: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x32B8D8u;
        goto label_32b8d8;
    }
    ctx->pc = 0x32B8D0u;
    SET_GPR_U32(ctx, 31, 0x32B8D8u);
    ctx->pc = 0x32B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B8D0u;
            // 0x32b8d4: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B8D8u; }
        if (ctx->pc != 0x32B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B8D8u; }
        if (ctx->pc != 0x32B8D8u) { return; }
    }
    ctx->pc = 0x32B8D8u;
label_32b8d8:
    // 0x32b8d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b8dc:
    // 0x32b8dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b8e0:
    // 0x32b8e0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x32b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_32b8e4:
    // 0x32b8e4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x32b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_32b8e8:
    // 0x32b8e8: 0xc04e738  jal         func_139CE0
label_32b8ec:
    if (ctx->pc == 0x32B8ECu) {
        ctx->pc = 0x32B8ECu;
            // 0x32b8ec: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x32B8F0u;
        goto label_32b8f0;
    }
    ctx->pc = 0x32B8E8u;
    SET_GPR_U32(ctx, 31, 0x32B8F0u);
    ctx->pc = 0x32B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B8E8u;
            // 0x32b8ec: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B8F0u; }
        if (ctx->pc != 0x32B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B8F0u; }
        if (ctx->pc != 0x32B8F0u) { return; }
    }
    ctx->pc = 0x32B8F0u;
label_32b8f0:
    // 0x32b8f0: 0xc054c40  jal         func_153100
label_32b8f4:
    if (ctx->pc == 0x32B8F4u) {
        ctx->pc = 0x32B8F4u;
            // 0x32b8f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B8F8u;
        goto label_32b8f8;
    }
    ctx->pc = 0x32B8F0u;
    SET_GPR_U32(ctx, 31, 0x32B8F8u);
    ctx->pc = 0x32B8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B8F0u;
            // 0x32b8f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B8F8u; }
        if (ctx->pc != 0x32B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B8F8u; }
        if (ctx->pc != 0x32B8F8u) { return; }
    }
    ctx->pc = 0x32B8F8u;
label_32b8f8:
    // 0x32b8f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32b8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b8fc:
    // 0x32b8fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32b8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b900:
    // 0x32b900: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x32b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_32b904:
    // 0x32b904: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32b908:
    // 0x32b908: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x32b908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32b90c:
    // 0x32b90c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x32b90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b910:
    // 0x32b910: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x32b910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32b914:
    // 0x32b914: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b918:
    // 0x32b918: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32b918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32b91c:
    // 0x32b91c: 0xc0caff4  jal         func_32BFD0
label_32b920:
    if (ctx->pc == 0x32B920u) {
        ctx->pc = 0x32B920u;
            // 0x32b920: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x32B924u;
        goto label_32b924;
    }
    ctx->pc = 0x32B91Cu;
    SET_GPR_U32(ctx, 31, 0x32B924u);
    ctx->pc = 0x32B920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B91Cu;
            // 0x32b920: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32BFD0u;
    if (runtime->hasFunction(0x32BFD0u)) {
        auto targetFn = runtime->lookupFunction(0x32BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B924u; }
        if (ctx->pc != 0x32B924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032BFD0_0x32bfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B924u; }
        if (ctx->pc != 0x32B924u) { return; }
    }
    ctx->pc = 0x32B924u;
label_32b924:
    // 0x32b924: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32b924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32b928:
    // 0x32b928: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x32b928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_32b92c:
    // 0x32b92c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_32b930:
    if (ctx->pc == 0x32B930u) {
        ctx->pc = 0x32B930u;
            // 0x32b930: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x32B934u;
        goto label_32b934;
    }
    ctx->pc = 0x32B92Cu;
    {
        const bool branch_taken_0x32b92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B92Cu;
            // 0x32b930: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b92c) {
            ctx->pc = 0x32B900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32b900;
        }
    }
    ctx->pc = 0x32B934u;
label_32b934:
    // 0x32b934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32b934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_32b938:
    // 0x32b938: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32b938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32b93c:
    // 0x32b93c: 0xc054c3c  jal         func_1530F0
label_32b940:
    if (ctx->pc == 0x32B940u) {
        ctx->pc = 0x32B940u;
            // 0x32b940: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32B944u;
        goto label_32b944;
    }
    ctx->pc = 0x32B93Cu;
    SET_GPR_U32(ctx, 31, 0x32B944u);
    ctx->pc = 0x32B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B93Cu;
            // 0x32b940: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B944u; }
        if (ctx->pc != 0x32B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B944u; }
        if (ctx->pc != 0x32B944u) { return; }
    }
    ctx->pc = 0x32B944u;
label_32b944:
    // 0x32b944: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b948:
    // 0x32b948: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x32b948u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_32b94c:
    // 0x32b94c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_32b950:
    if (ctx->pc == 0x32B950u) {
        ctx->pc = 0x32B950u;
            // 0x32b950: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x32B954u;
        goto label_32b954;
    }
    ctx->pc = 0x32B94Cu;
    {
        const bool branch_taken_0x32b94c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x32B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B94Cu;
            // 0x32b950: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b94c) {
            ctx->pc = 0x32B974u;
            goto label_32b974;
        }
    }
    ctx->pc = 0x32B954u;
label_32b954:
    // 0x32b954: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32b954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32b958:
    // 0x32b958: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32b958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32b95c:
    // 0x32b95c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x32b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_32b960:
    // 0x32b960: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x32b960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_32b964:
    // 0x32b964: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x32b964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_32b968:
    // 0x32b968: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32b968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32b96c:
    // 0x32b96c: 0xc055ea8  jal         func_157AA0
label_32b970:
    if (ctx->pc == 0x32B970u) {
        ctx->pc = 0x32B970u;
            // 0x32b970: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B974u;
        goto label_32b974;
    }
    ctx->pc = 0x32B96Cu;
    SET_GPR_U32(ctx, 31, 0x32B974u);
    ctx->pc = 0x32B970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32B96Cu;
            // 0x32b970: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B974u; }
        if (ctx->pc != 0x32B974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32B974u; }
        if (ctx->pc != 0x32B974u) { return; }
    }
    ctx->pc = 0x32B974u;
label_32b974:
    // 0x32b974: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x32b974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_32b978:
    // 0x32b978: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32b978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32b97c:
    // 0x32b97c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32b97cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32b980:
    // 0x32b980: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32b980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32b984:
    // 0x32b984: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32b984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32b988:
    // 0x32b988: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32b988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32b98c:
    // 0x32b98c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32b98cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32b990:
    // 0x32b990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32b994:
    // 0x32b994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32b998:
    // 0x32b998: 0x3e00008  jr          $ra
label_32b99c:
    if (ctx->pc == 0x32B99Cu) {
        ctx->pc = 0x32B99Cu;
            // 0x32b99c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x32B9A0u;
        goto label_32b9a0;
    }
    ctx->pc = 0x32B998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B998u;
            // 0x32b99c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B9A0u;
label_32b9a0:
    // 0x32b9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32b9a4:
    // 0x32b9a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32b9a8:
    // 0x32b9a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32b9ac:
    // 0x32b9ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32b9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32b9b0:
    // 0x32b9b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32b9b4:
    // 0x32b9b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32b9b8:
    // 0x32b9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32b9bc:
    // 0x32b9bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x32b9bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_32b9c0:
    // 0x32b9c0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_32b9c4:
    if (ctx->pc == 0x32B9C4u) {
        ctx->pc = 0x32B9C4u;
            // 0x32b9c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32B9C8u;
        goto label_32b9c8;
    }
    ctx->pc = 0x32B9C0u;
    {
        const bool branch_taken_0x32b9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32B9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B9C0u;
            // 0x32b9c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9c0) {
            ctx->pc = 0x32B9F4u;
            goto label_32b9f4;
        }
    }
    ctx->pc = 0x32B9C8u;
label_32b9c8:
    // 0x32b9c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32b9cc:
    // 0x32b9cc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_32b9d0:
    if (ctx->pc == 0x32B9D0u) {
        ctx->pc = 0x32B9D0u;
            // 0x32b9d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32B9D4u;
        goto label_32b9d4;
    }
    ctx->pc = 0x32B9CCu;
    {
        const bool branch_taken_0x32b9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b9cc) {
            ctx->pc = 0x32B9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32B9CCu;
            // 0x32b9d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32B9E8u;
            goto label_32b9e8;
        }
    }
    ctx->pc = 0x32B9D4u;
label_32b9d4:
    // 0x32b9d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32b9d8:
    // 0x32b9d8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_32b9dc:
    if (ctx->pc == 0x32B9DCu) {
        ctx->pc = 0x32B9E0u;
        goto label_32b9e0;
    }
    ctx->pc = 0x32B9D8u;
    {
        const bool branch_taken_0x32b9d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b9d8) {
            ctx->pc = 0x32BA28u;
            goto label_32ba28;
        }
    }
    ctx->pc = 0x32B9E0u;
label_32b9e0:
    // 0x32b9e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_32b9e4:
    if (ctx->pc == 0x32B9E4u) {
        ctx->pc = 0x32B9E8u;
        goto label_32b9e8;
    }
    ctx->pc = 0x32B9E0u;
    {
        const bool branch_taken_0x32b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b9e0) {
            ctx->pc = 0x32BA28u;
            goto label_32ba28;
        }
    }
    ctx->pc = 0x32B9E8u;
label_32b9e8:
    // 0x32b9e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x32b9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_32b9ec:
    // 0x32b9ec: 0x320f809  jalr        $t9
label_32b9f0:
    if (ctx->pc == 0x32B9F0u) {
        ctx->pc = 0x32B9F4u;
        goto label_32b9f4;
    }
    ctx->pc = 0x32B9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32B9F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32B9F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32B9F4u; }
            if (ctx->pc != 0x32B9F4u) { return; }
        }
        }
    }
    ctx->pc = 0x32B9F4u;
label_32b9f4:
    // 0x32b9f4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x32b9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_32b9f8:
    // 0x32b9f8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_32b9fc:
    if (ctx->pc == 0x32B9FCu) {
        ctx->pc = 0x32BA00u;
        goto label_32ba00;
    }
    ctx->pc = 0x32B9F8u;
    {
        const bool branch_taken_0x32b9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b9f8) {
            ctx->pc = 0x32BA28u;
            goto label_32ba28;
        }
    }
    ctx->pc = 0x32BA00u;
label_32ba00:
    // 0x32ba00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32ba00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ba04:
    // 0x32ba04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32ba04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ba08:
    // 0x32ba08: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x32ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_32ba0c:
    // 0x32ba0c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_32ba10:
    // 0x32ba10: 0xc0e3658  jal         func_38D960
label_32ba14:
    if (ctx->pc == 0x32BA14u) {
        ctx->pc = 0x32BA14u;
            // 0x32ba14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x32BA18u;
        goto label_32ba18;
    }
    ctx->pc = 0x32BA10u;
    SET_GPR_U32(ctx, 31, 0x32BA18u);
    ctx->pc = 0x32BA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BA10u;
            // 0x32ba14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BA18u; }
        if (ctx->pc != 0x32BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BA18u; }
        if (ctx->pc != 0x32BA18u) { return; }
    }
    ctx->pc = 0x32BA18u;
label_32ba18:
    // 0x32ba18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32ba18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32ba1c:
    // 0x32ba1c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x32ba1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32ba20:
    // 0x32ba20: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_32ba24:
    if (ctx->pc == 0x32BA24u) {
        ctx->pc = 0x32BA24u;
            // 0x32ba24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x32BA28u;
        goto label_32ba28;
    }
    ctx->pc = 0x32BA20u;
    {
        const bool branch_taken_0x32ba20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BA20u;
            // 0x32ba24: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba20) {
            ctx->pc = 0x32BA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32ba08;
        }
    }
    ctx->pc = 0x32BA28u;
label_32ba28:
    // 0x32ba28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32ba2c:
    // 0x32ba2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32ba2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32ba30:
    // 0x32ba30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ba30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ba34:
    // 0x32ba34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ba34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ba38:
    // 0x32ba38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ba38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32ba3c:
    // 0x32ba3c: 0x3e00008  jr          $ra
label_32ba40:
    if (ctx->pc == 0x32BA40u) {
        ctx->pc = 0x32BA40u;
            // 0x32ba40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32BA44u;
        goto label_32ba44;
    }
    ctx->pc = 0x32BA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BA3Cu;
            // 0x32ba40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BA44u;
label_32ba44:
    // 0x32ba44: 0x0  nop
    ctx->pc = 0x32ba44u;
    // NOP
label_32ba48:
    // 0x32ba48: 0x0  nop
    ctx->pc = 0x32ba48u;
    // NOP
label_32ba4c:
    // 0x32ba4c: 0x0  nop
    ctx->pc = 0x32ba4cu;
    // NOP
label_32ba50:
    // 0x32ba50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32ba54:
    // 0x32ba54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32ba58:
    // 0x32ba58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32ba5c:
    // 0x32ba5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32ba60:
    // 0x32ba60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32ba64:
    // 0x32ba64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32ba68:
    // 0x32ba68: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x32ba68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_32ba6c:
    // 0x32ba6c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_32ba70:
    if (ctx->pc == 0x32BA70u) {
        ctx->pc = 0x32BA70u;
            // 0x32ba70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32BA74u;
        goto label_32ba74;
    }
    ctx->pc = 0x32BA6Cu;
    {
        const bool branch_taken_0x32ba6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BA6Cu;
            // 0x32ba70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba6c) {
            ctx->pc = 0x32BAA8u;
            goto label_32baa8;
        }
    }
    ctx->pc = 0x32BA74u;
label_32ba74:
    // 0x32ba74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32ba74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ba78:
    // 0x32ba78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32ba78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ba7c:
    // 0x32ba7c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x32ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_32ba80:
    // 0x32ba80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_32ba84:
    // 0x32ba84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ba88:
    // 0x32ba88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32ba88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32ba8c:
    // 0x32ba8c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x32ba8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_32ba90:
    // 0x32ba90: 0x320f809  jalr        $t9
label_32ba94:
    if (ctx->pc == 0x32BA94u) {
        ctx->pc = 0x32BA98u;
        goto label_32ba98;
    }
    ctx->pc = 0x32BA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32BA98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32BA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32BA98u; }
            if (ctx->pc != 0x32BA98u) { return; }
        }
        }
    }
    ctx->pc = 0x32BA98u;
label_32ba98:
    // 0x32ba98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32ba98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32ba9c:
    // 0x32ba9c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x32ba9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32baa0:
    // 0x32baa0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_32baa4:
    if (ctx->pc == 0x32BAA4u) {
        ctx->pc = 0x32BAA4u;
            // 0x32baa4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x32BAA8u;
        goto label_32baa8;
    }
    ctx->pc = 0x32BAA0u;
    {
        const bool branch_taken_0x32baa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BAA0u;
            // 0x32baa4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32baa0) {
            ctx->pc = 0x32BA7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32ba7c;
        }
    }
    ctx->pc = 0x32BAA8u;
label_32baa8:
    // 0x32baa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32baa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32baac:
    // 0x32baac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32baacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32bab0:
    // 0x32bab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32bab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32bab4:
    // 0x32bab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32bab8:
    // 0x32bab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32babc:
    // 0x32babc: 0x3e00008  jr          $ra
label_32bac0:
    if (ctx->pc == 0x32BAC0u) {
        ctx->pc = 0x32BAC0u;
            // 0x32bac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32BAC4u;
        goto label_32bac4;
    }
    ctx->pc = 0x32BABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BABCu;
            // 0x32bac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BAC4u;
label_32bac4:
    // 0x32bac4: 0x0  nop
    ctx->pc = 0x32bac4u;
    // NOP
label_32bac8:
    // 0x32bac8: 0x0  nop
    ctx->pc = 0x32bac8u;
    // NOP
label_32bacc:
    // 0x32bacc: 0x0  nop
    ctx->pc = 0x32baccu;
    // NOP
}
