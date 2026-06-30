#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039B550
// Address: 0x39b550 - 0x39bac0
void sub_0039B550_0x39b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B550_0x39b550");
#endif

    switch (ctx->pc) {
        case 0x39b550u: goto label_39b550;
        case 0x39b554u: goto label_39b554;
        case 0x39b558u: goto label_39b558;
        case 0x39b55cu: goto label_39b55c;
        case 0x39b560u: goto label_39b560;
        case 0x39b564u: goto label_39b564;
        case 0x39b568u: goto label_39b568;
        case 0x39b56cu: goto label_39b56c;
        case 0x39b570u: goto label_39b570;
        case 0x39b574u: goto label_39b574;
        case 0x39b578u: goto label_39b578;
        case 0x39b57cu: goto label_39b57c;
        case 0x39b580u: goto label_39b580;
        case 0x39b584u: goto label_39b584;
        case 0x39b588u: goto label_39b588;
        case 0x39b58cu: goto label_39b58c;
        case 0x39b590u: goto label_39b590;
        case 0x39b594u: goto label_39b594;
        case 0x39b598u: goto label_39b598;
        case 0x39b59cu: goto label_39b59c;
        case 0x39b5a0u: goto label_39b5a0;
        case 0x39b5a4u: goto label_39b5a4;
        case 0x39b5a8u: goto label_39b5a8;
        case 0x39b5acu: goto label_39b5ac;
        case 0x39b5b0u: goto label_39b5b0;
        case 0x39b5b4u: goto label_39b5b4;
        case 0x39b5b8u: goto label_39b5b8;
        case 0x39b5bcu: goto label_39b5bc;
        case 0x39b5c0u: goto label_39b5c0;
        case 0x39b5c4u: goto label_39b5c4;
        case 0x39b5c8u: goto label_39b5c8;
        case 0x39b5ccu: goto label_39b5cc;
        case 0x39b5d0u: goto label_39b5d0;
        case 0x39b5d4u: goto label_39b5d4;
        case 0x39b5d8u: goto label_39b5d8;
        case 0x39b5dcu: goto label_39b5dc;
        case 0x39b5e0u: goto label_39b5e0;
        case 0x39b5e4u: goto label_39b5e4;
        case 0x39b5e8u: goto label_39b5e8;
        case 0x39b5ecu: goto label_39b5ec;
        case 0x39b5f0u: goto label_39b5f0;
        case 0x39b5f4u: goto label_39b5f4;
        case 0x39b5f8u: goto label_39b5f8;
        case 0x39b5fcu: goto label_39b5fc;
        case 0x39b600u: goto label_39b600;
        case 0x39b604u: goto label_39b604;
        case 0x39b608u: goto label_39b608;
        case 0x39b60cu: goto label_39b60c;
        case 0x39b610u: goto label_39b610;
        case 0x39b614u: goto label_39b614;
        case 0x39b618u: goto label_39b618;
        case 0x39b61cu: goto label_39b61c;
        case 0x39b620u: goto label_39b620;
        case 0x39b624u: goto label_39b624;
        case 0x39b628u: goto label_39b628;
        case 0x39b62cu: goto label_39b62c;
        case 0x39b630u: goto label_39b630;
        case 0x39b634u: goto label_39b634;
        case 0x39b638u: goto label_39b638;
        case 0x39b63cu: goto label_39b63c;
        case 0x39b640u: goto label_39b640;
        case 0x39b644u: goto label_39b644;
        case 0x39b648u: goto label_39b648;
        case 0x39b64cu: goto label_39b64c;
        case 0x39b650u: goto label_39b650;
        case 0x39b654u: goto label_39b654;
        case 0x39b658u: goto label_39b658;
        case 0x39b65cu: goto label_39b65c;
        case 0x39b660u: goto label_39b660;
        case 0x39b664u: goto label_39b664;
        case 0x39b668u: goto label_39b668;
        case 0x39b66cu: goto label_39b66c;
        case 0x39b670u: goto label_39b670;
        case 0x39b674u: goto label_39b674;
        case 0x39b678u: goto label_39b678;
        case 0x39b67cu: goto label_39b67c;
        case 0x39b680u: goto label_39b680;
        case 0x39b684u: goto label_39b684;
        case 0x39b688u: goto label_39b688;
        case 0x39b68cu: goto label_39b68c;
        case 0x39b690u: goto label_39b690;
        case 0x39b694u: goto label_39b694;
        case 0x39b698u: goto label_39b698;
        case 0x39b69cu: goto label_39b69c;
        case 0x39b6a0u: goto label_39b6a0;
        case 0x39b6a4u: goto label_39b6a4;
        case 0x39b6a8u: goto label_39b6a8;
        case 0x39b6acu: goto label_39b6ac;
        case 0x39b6b0u: goto label_39b6b0;
        case 0x39b6b4u: goto label_39b6b4;
        case 0x39b6b8u: goto label_39b6b8;
        case 0x39b6bcu: goto label_39b6bc;
        case 0x39b6c0u: goto label_39b6c0;
        case 0x39b6c4u: goto label_39b6c4;
        case 0x39b6c8u: goto label_39b6c8;
        case 0x39b6ccu: goto label_39b6cc;
        case 0x39b6d0u: goto label_39b6d0;
        case 0x39b6d4u: goto label_39b6d4;
        case 0x39b6d8u: goto label_39b6d8;
        case 0x39b6dcu: goto label_39b6dc;
        case 0x39b6e0u: goto label_39b6e0;
        case 0x39b6e4u: goto label_39b6e4;
        case 0x39b6e8u: goto label_39b6e8;
        case 0x39b6ecu: goto label_39b6ec;
        case 0x39b6f0u: goto label_39b6f0;
        case 0x39b6f4u: goto label_39b6f4;
        case 0x39b6f8u: goto label_39b6f8;
        case 0x39b6fcu: goto label_39b6fc;
        case 0x39b700u: goto label_39b700;
        case 0x39b704u: goto label_39b704;
        case 0x39b708u: goto label_39b708;
        case 0x39b70cu: goto label_39b70c;
        case 0x39b710u: goto label_39b710;
        case 0x39b714u: goto label_39b714;
        case 0x39b718u: goto label_39b718;
        case 0x39b71cu: goto label_39b71c;
        case 0x39b720u: goto label_39b720;
        case 0x39b724u: goto label_39b724;
        case 0x39b728u: goto label_39b728;
        case 0x39b72cu: goto label_39b72c;
        case 0x39b730u: goto label_39b730;
        case 0x39b734u: goto label_39b734;
        case 0x39b738u: goto label_39b738;
        case 0x39b73cu: goto label_39b73c;
        case 0x39b740u: goto label_39b740;
        case 0x39b744u: goto label_39b744;
        case 0x39b748u: goto label_39b748;
        case 0x39b74cu: goto label_39b74c;
        case 0x39b750u: goto label_39b750;
        case 0x39b754u: goto label_39b754;
        case 0x39b758u: goto label_39b758;
        case 0x39b75cu: goto label_39b75c;
        case 0x39b760u: goto label_39b760;
        case 0x39b764u: goto label_39b764;
        case 0x39b768u: goto label_39b768;
        case 0x39b76cu: goto label_39b76c;
        case 0x39b770u: goto label_39b770;
        case 0x39b774u: goto label_39b774;
        case 0x39b778u: goto label_39b778;
        case 0x39b77cu: goto label_39b77c;
        case 0x39b780u: goto label_39b780;
        case 0x39b784u: goto label_39b784;
        case 0x39b788u: goto label_39b788;
        case 0x39b78cu: goto label_39b78c;
        case 0x39b790u: goto label_39b790;
        case 0x39b794u: goto label_39b794;
        case 0x39b798u: goto label_39b798;
        case 0x39b79cu: goto label_39b79c;
        case 0x39b7a0u: goto label_39b7a0;
        case 0x39b7a4u: goto label_39b7a4;
        case 0x39b7a8u: goto label_39b7a8;
        case 0x39b7acu: goto label_39b7ac;
        case 0x39b7b0u: goto label_39b7b0;
        case 0x39b7b4u: goto label_39b7b4;
        case 0x39b7b8u: goto label_39b7b8;
        case 0x39b7bcu: goto label_39b7bc;
        case 0x39b7c0u: goto label_39b7c0;
        case 0x39b7c4u: goto label_39b7c4;
        case 0x39b7c8u: goto label_39b7c8;
        case 0x39b7ccu: goto label_39b7cc;
        case 0x39b7d0u: goto label_39b7d0;
        case 0x39b7d4u: goto label_39b7d4;
        case 0x39b7d8u: goto label_39b7d8;
        case 0x39b7dcu: goto label_39b7dc;
        case 0x39b7e0u: goto label_39b7e0;
        case 0x39b7e4u: goto label_39b7e4;
        case 0x39b7e8u: goto label_39b7e8;
        case 0x39b7ecu: goto label_39b7ec;
        case 0x39b7f0u: goto label_39b7f0;
        case 0x39b7f4u: goto label_39b7f4;
        case 0x39b7f8u: goto label_39b7f8;
        case 0x39b7fcu: goto label_39b7fc;
        case 0x39b800u: goto label_39b800;
        case 0x39b804u: goto label_39b804;
        case 0x39b808u: goto label_39b808;
        case 0x39b80cu: goto label_39b80c;
        case 0x39b810u: goto label_39b810;
        case 0x39b814u: goto label_39b814;
        case 0x39b818u: goto label_39b818;
        case 0x39b81cu: goto label_39b81c;
        case 0x39b820u: goto label_39b820;
        case 0x39b824u: goto label_39b824;
        case 0x39b828u: goto label_39b828;
        case 0x39b82cu: goto label_39b82c;
        case 0x39b830u: goto label_39b830;
        case 0x39b834u: goto label_39b834;
        case 0x39b838u: goto label_39b838;
        case 0x39b83cu: goto label_39b83c;
        case 0x39b840u: goto label_39b840;
        case 0x39b844u: goto label_39b844;
        case 0x39b848u: goto label_39b848;
        case 0x39b84cu: goto label_39b84c;
        case 0x39b850u: goto label_39b850;
        case 0x39b854u: goto label_39b854;
        case 0x39b858u: goto label_39b858;
        case 0x39b85cu: goto label_39b85c;
        case 0x39b860u: goto label_39b860;
        case 0x39b864u: goto label_39b864;
        case 0x39b868u: goto label_39b868;
        case 0x39b86cu: goto label_39b86c;
        case 0x39b870u: goto label_39b870;
        case 0x39b874u: goto label_39b874;
        case 0x39b878u: goto label_39b878;
        case 0x39b87cu: goto label_39b87c;
        case 0x39b880u: goto label_39b880;
        case 0x39b884u: goto label_39b884;
        case 0x39b888u: goto label_39b888;
        case 0x39b88cu: goto label_39b88c;
        case 0x39b890u: goto label_39b890;
        case 0x39b894u: goto label_39b894;
        case 0x39b898u: goto label_39b898;
        case 0x39b89cu: goto label_39b89c;
        case 0x39b8a0u: goto label_39b8a0;
        case 0x39b8a4u: goto label_39b8a4;
        case 0x39b8a8u: goto label_39b8a8;
        case 0x39b8acu: goto label_39b8ac;
        case 0x39b8b0u: goto label_39b8b0;
        case 0x39b8b4u: goto label_39b8b4;
        case 0x39b8b8u: goto label_39b8b8;
        case 0x39b8bcu: goto label_39b8bc;
        case 0x39b8c0u: goto label_39b8c0;
        case 0x39b8c4u: goto label_39b8c4;
        case 0x39b8c8u: goto label_39b8c8;
        case 0x39b8ccu: goto label_39b8cc;
        case 0x39b8d0u: goto label_39b8d0;
        case 0x39b8d4u: goto label_39b8d4;
        case 0x39b8d8u: goto label_39b8d8;
        case 0x39b8dcu: goto label_39b8dc;
        case 0x39b8e0u: goto label_39b8e0;
        case 0x39b8e4u: goto label_39b8e4;
        case 0x39b8e8u: goto label_39b8e8;
        case 0x39b8ecu: goto label_39b8ec;
        case 0x39b8f0u: goto label_39b8f0;
        case 0x39b8f4u: goto label_39b8f4;
        case 0x39b8f8u: goto label_39b8f8;
        case 0x39b8fcu: goto label_39b8fc;
        case 0x39b900u: goto label_39b900;
        case 0x39b904u: goto label_39b904;
        case 0x39b908u: goto label_39b908;
        case 0x39b90cu: goto label_39b90c;
        case 0x39b910u: goto label_39b910;
        case 0x39b914u: goto label_39b914;
        case 0x39b918u: goto label_39b918;
        case 0x39b91cu: goto label_39b91c;
        case 0x39b920u: goto label_39b920;
        case 0x39b924u: goto label_39b924;
        case 0x39b928u: goto label_39b928;
        case 0x39b92cu: goto label_39b92c;
        case 0x39b930u: goto label_39b930;
        case 0x39b934u: goto label_39b934;
        case 0x39b938u: goto label_39b938;
        case 0x39b93cu: goto label_39b93c;
        case 0x39b940u: goto label_39b940;
        case 0x39b944u: goto label_39b944;
        case 0x39b948u: goto label_39b948;
        case 0x39b94cu: goto label_39b94c;
        case 0x39b950u: goto label_39b950;
        case 0x39b954u: goto label_39b954;
        case 0x39b958u: goto label_39b958;
        case 0x39b95cu: goto label_39b95c;
        case 0x39b960u: goto label_39b960;
        case 0x39b964u: goto label_39b964;
        case 0x39b968u: goto label_39b968;
        case 0x39b96cu: goto label_39b96c;
        case 0x39b970u: goto label_39b970;
        case 0x39b974u: goto label_39b974;
        case 0x39b978u: goto label_39b978;
        case 0x39b97cu: goto label_39b97c;
        case 0x39b980u: goto label_39b980;
        case 0x39b984u: goto label_39b984;
        case 0x39b988u: goto label_39b988;
        case 0x39b98cu: goto label_39b98c;
        case 0x39b990u: goto label_39b990;
        case 0x39b994u: goto label_39b994;
        case 0x39b998u: goto label_39b998;
        case 0x39b99cu: goto label_39b99c;
        case 0x39b9a0u: goto label_39b9a0;
        case 0x39b9a4u: goto label_39b9a4;
        case 0x39b9a8u: goto label_39b9a8;
        case 0x39b9acu: goto label_39b9ac;
        case 0x39b9b0u: goto label_39b9b0;
        case 0x39b9b4u: goto label_39b9b4;
        case 0x39b9b8u: goto label_39b9b8;
        case 0x39b9bcu: goto label_39b9bc;
        case 0x39b9c0u: goto label_39b9c0;
        case 0x39b9c4u: goto label_39b9c4;
        case 0x39b9c8u: goto label_39b9c8;
        case 0x39b9ccu: goto label_39b9cc;
        case 0x39b9d0u: goto label_39b9d0;
        case 0x39b9d4u: goto label_39b9d4;
        case 0x39b9d8u: goto label_39b9d8;
        case 0x39b9dcu: goto label_39b9dc;
        case 0x39b9e0u: goto label_39b9e0;
        case 0x39b9e4u: goto label_39b9e4;
        case 0x39b9e8u: goto label_39b9e8;
        case 0x39b9ecu: goto label_39b9ec;
        case 0x39b9f0u: goto label_39b9f0;
        case 0x39b9f4u: goto label_39b9f4;
        case 0x39b9f8u: goto label_39b9f8;
        case 0x39b9fcu: goto label_39b9fc;
        case 0x39ba00u: goto label_39ba00;
        case 0x39ba04u: goto label_39ba04;
        case 0x39ba08u: goto label_39ba08;
        case 0x39ba0cu: goto label_39ba0c;
        case 0x39ba10u: goto label_39ba10;
        case 0x39ba14u: goto label_39ba14;
        case 0x39ba18u: goto label_39ba18;
        case 0x39ba1cu: goto label_39ba1c;
        case 0x39ba20u: goto label_39ba20;
        case 0x39ba24u: goto label_39ba24;
        case 0x39ba28u: goto label_39ba28;
        case 0x39ba2cu: goto label_39ba2c;
        case 0x39ba30u: goto label_39ba30;
        case 0x39ba34u: goto label_39ba34;
        case 0x39ba38u: goto label_39ba38;
        case 0x39ba3cu: goto label_39ba3c;
        case 0x39ba40u: goto label_39ba40;
        case 0x39ba44u: goto label_39ba44;
        case 0x39ba48u: goto label_39ba48;
        case 0x39ba4cu: goto label_39ba4c;
        case 0x39ba50u: goto label_39ba50;
        case 0x39ba54u: goto label_39ba54;
        case 0x39ba58u: goto label_39ba58;
        case 0x39ba5cu: goto label_39ba5c;
        case 0x39ba60u: goto label_39ba60;
        case 0x39ba64u: goto label_39ba64;
        case 0x39ba68u: goto label_39ba68;
        case 0x39ba6cu: goto label_39ba6c;
        case 0x39ba70u: goto label_39ba70;
        case 0x39ba74u: goto label_39ba74;
        case 0x39ba78u: goto label_39ba78;
        case 0x39ba7cu: goto label_39ba7c;
        case 0x39ba80u: goto label_39ba80;
        case 0x39ba84u: goto label_39ba84;
        case 0x39ba88u: goto label_39ba88;
        case 0x39ba8cu: goto label_39ba8c;
        case 0x39ba90u: goto label_39ba90;
        case 0x39ba94u: goto label_39ba94;
        case 0x39ba98u: goto label_39ba98;
        case 0x39ba9cu: goto label_39ba9c;
        case 0x39baa0u: goto label_39baa0;
        case 0x39baa4u: goto label_39baa4;
        case 0x39baa8u: goto label_39baa8;
        case 0x39baacu: goto label_39baac;
        case 0x39bab0u: goto label_39bab0;
        case 0x39bab4u: goto label_39bab4;
        case 0x39bab8u: goto label_39bab8;
        case 0x39babcu: goto label_39babc;
        default: break;
    }

    ctx->pc = 0x39b550u;

label_39b550:
    // 0x39b550: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x39b550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_39b554:
    // 0x39b554: 0x3e00008  jr          $ra
label_39b558:
    if (ctx->pc == 0x39B558u) {
        ctx->pc = 0x39B558u;
            // 0x39b558: 0xac800098  sw          $zero, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x39B55Cu;
        goto label_39b55c;
    }
    ctx->pc = 0x39B554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B554u;
            // 0x39b558: 0xac800098  sw          $zero, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B55Cu;
label_39b55c:
    // 0x39b55c: 0x0  nop
    ctx->pc = 0x39b55cu;
    // NOP
label_39b560:
    // 0x39b560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39b564:
    // 0x39b564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39b568:
    // 0x39b568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b56c:
    // 0x39b56c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b570:
    // 0x39b570: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x39b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39b574:
    // 0x39b574: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_39b578:
    if (ctx->pc == 0x39B578u) {
        ctx->pc = 0x39B578u;
            // 0x39b578: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x39B57Cu;
        goto label_39b57c;
    }
    ctx->pc = 0x39B574u;
    {
        const bool branch_taken_0x39b574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b574) {
            ctx->pc = 0x39B578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B574u;
            // 0x39b578: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B58Cu;
            goto label_39b58c;
        }
    }
    ctx->pc = 0x39B57Cu;
label_39b57c:
    // 0x39b57c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39b580:
    // 0x39b580: 0xc0407c0  jal         func_101F00
label_39b584:
    if (ctx->pc == 0x39B584u) {
        ctx->pc = 0x39B584u;
            // 0x39b584: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
        ctx->pc = 0x39B588u;
        goto label_39b588;
    }
    ctx->pc = 0x39B580u;
    SET_GPR_U32(ctx, 31, 0x39B588u);
    ctx->pc = 0x39B584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B580u;
            // 0x39b584: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B588u; }
        if (ctx->pc != 0x39B588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B588u; }
        if (ctx->pc != 0x39B588u) { return; }
    }
    ctx->pc = 0x39B588u;
label_39b588:
    // 0x39b588: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x39b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_39b58c:
    // 0x39b58c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39b590:
    if (ctx->pc == 0x39B590u) {
        ctx->pc = 0x39B590u;
            // 0x39b590: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x39B594u;
        goto label_39b594;
    }
    ctx->pc = 0x39B58Cu;
    {
        const bool branch_taken_0x39b58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b58c) {
            ctx->pc = 0x39B590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B58Cu;
            // 0x39b590: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B5A0u;
            goto label_39b5a0;
        }
    }
    ctx->pc = 0x39B594u;
label_39b594:
    // 0x39b594: 0xc04008c  jal         func_100230
label_39b598:
    if (ctx->pc == 0x39B598u) {
        ctx->pc = 0x39B59Cu;
        goto label_39b59c;
    }
    ctx->pc = 0x39B594u;
    SET_GPR_U32(ctx, 31, 0x39B59Cu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B59Cu; }
        if (ctx->pc != 0x39B59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B59Cu; }
        if (ctx->pc != 0x39B59Cu) { return; }
    }
    ctx->pc = 0x39B59Cu;
label_39b59c:
    // 0x39b59c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x39b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_39b5a0:
    // 0x39b5a0: 0xc0d37dc  jal         func_34DF70
label_39b5a4:
    if (ctx->pc == 0x39B5A4u) {
        ctx->pc = 0x39B5A8u;
        goto label_39b5a8;
    }
    ctx->pc = 0x39B5A0u;
    SET_GPR_U32(ctx, 31, 0x39B5A8u);
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B5A8u; }
        if (ctx->pc != 0x39B5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B5A8u; }
        if (ctx->pc != 0x39B5A8u) { return; }
    }
    ctx->pc = 0x39B5A8u;
label_39b5a8:
    // 0x39b5a8: 0xc0d37dc  jal         func_34DF70
label_39b5ac:
    if (ctx->pc == 0x39B5ACu) {
        ctx->pc = 0x39B5ACu;
            // 0x39b5ac: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x39B5B0u;
        goto label_39b5b0;
    }
    ctx->pc = 0x39B5A8u;
    SET_GPR_U32(ctx, 31, 0x39B5B0u);
    ctx->pc = 0x39B5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B5A8u;
            // 0x39b5ac: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B5B0u; }
        if (ctx->pc != 0x39B5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B5B0u; }
        if (ctx->pc != 0x39B5B0u) { return; }
    }
    ctx->pc = 0x39B5B0u;
label_39b5b0:
    // 0x39b5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b5b4:
    // 0x39b5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b5b8:
    // 0x39b5b8: 0x3e00008  jr          $ra
label_39b5bc:
    if (ctx->pc == 0x39B5BCu) {
        ctx->pc = 0x39B5BCu;
            // 0x39b5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39B5C0u;
        goto label_39b5c0;
    }
    ctx->pc = 0x39B5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B5B8u;
            // 0x39b5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B5C0u;
label_39b5c0:
    // 0x39b5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39b5c4:
    // 0x39b5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39b5c8:
    // 0x39b5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39b5cc:
    // 0x39b5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b5d0:
    // 0x39b5d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b5d4:
    // 0x39b5d4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_39b5d8:
    if (ctx->pc == 0x39B5D8u) {
        ctx->pc = 0x39B5D8u;
            // 0x39b5d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B5DCu;
        goto label_39b5dc;
    }
    ctx->pc = 0x39B5D4u;
    {
        const bool branch_taken_0x39b5d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B5D4u;
            // 0x39b5d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b5d4) {
            ctx->pc = 0x39B648u;
            goto label_39b648;
        }
    }
    ctx->pc = 0x39B5DCu;
label_39b5dc:
    // 0x39b5dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39b5e0:
    // 0x39b5e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39b5e4:
    // 0x39b5e4: 0x24638520  addiu       $v1, $v1, -0x7AE0
    ctx->pc = 0x39b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935840));
label_39b5e8:
    // 0x39b5e8: 0x24428560  addiu       $v0, $v0, -0x7AA0
    ctx->pc = 0x39b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935904));
label_39b5ec:
    // 0x39b5ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39b5f0:
    // 0x39b5f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39b5f4:
    // 0x39b5f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39b5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b5f8:
    // 0x39b5f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x39b5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_39b5fc:
    // 0x39b5fc: 0x320f809  jalr        $t9
label_39b600:
    if (ctx->pc == 0x39B600u) {
        ctx->pc = 0x39B604u;
        goto label_39b604;
    }
    ctx->pc = 0x39B5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B604u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39B604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39B604u; }
            if (ctx->pc != 0x39B604u) { return; }
        }
        }
    }
    ctx->pc = 0x39B604u;
label_39b604:
    // 0x39b604: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_39b608:
    if (ctx->pc == 0x39B608u) {
        ctx->pc = 0x39B608u;
            // 0x39b608: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x39B60Cu;
        goto label_39b60c;
    }
    ctx->pc = 0x39B604u;
    {
        const bool branch_taken_0x39b604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b604) {
            ctx->pc = 0x39B608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B604u;
            // 0x39b608: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B634u;
            goto label_39b634;
        }
    }
    ctx->pc = 0x39B60Cu;
label_39b60c:
    // 0x39b60c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39b610:
    // 0x39b610: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39b614:
    // 0x39b614: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x39b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_39b618:
    // 0x39b618: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x39b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_39b61c:
    // 0x39b61c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39b620:
    // 0x39b620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b624:
    // 0x39b624: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39b624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39b628:
    // 0x39b628: 0xc0aee40  jal         func_2BB900
label_39b62c:
    if (ctx->pc == 0x39B62Cu) {
        ctx->pc = 0x39B62Cu;
            // 0x39b62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B630u;
        goto label_39b630;
    }
    ctx->pc = 0x39B628u;
    SET_GPR_U32(ctx, 31, 0x39B630u);
    ctx->pc = 0x39B62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B628u;
            // 0x39b62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B630u; }
        if (ctx->pc != 0x39B630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B630u; }
        if (ctx->pc != 0x39B630u) { return; }
    }
    ctx->pc = 0x39B630u;
label_39b630:
    // 0x39b630: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x39b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_39b634:
    // 0x39b634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39b634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39b638:
    // 0x39b638: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39b63c:
    if (ctx->pc == 0x39B63Cu) {
        ctx->pc = 0x39B63Cu;
            // 0x39b63c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B640u;
        goto label_39b640;
    }
    ctx->pc = 0x39B638u;
    {
        const bool branch_taken_0x39b638 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39b638) {
            ctx->pc = 0x39B63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B638u;
            // 0x39b63c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B64Cu;
            goto label_39b64c;
        }
    }
    ctx->pc = 0x39B640u;
label_39b640:
    // 0x39b640: 0xc0400a8  jal         func_1002A0
label_39b644:
    if (ctx->pc == 0x39B644u) {
        ctx->pc = 0x39B644u;
            // 0x39b644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B648u;
        goto label_39b648;
    }
    ctx->pc = 0x39B640u;
    SET_GPR_U32(ctx, 31, 0x39B648u);
    ctx->pc = 0x39B644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B640u;
            // 0x39b644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B648u; }
        if (ctx->pc != 0x39B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B648u; }
        if (ctx->pc != 0x39B648u) { return; }
    }
    ctx->pc = 0x39B648u;
label_39b648:
    // 0x39b648: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39b648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b64c:
    // 0x39b64c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b650:
    // 0x39b650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39b650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39b654:
    // 0x39b654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b658:
    // 0x39b658: 0x3e00008  jr          $ra
label_39b65c:
    if (ctx->pc == 0x39B65Cu) {
        ctx->pc = 0x39B65Cu;
            // 0x39b65c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39B660u;
        goto label_39b660;
    }
    ctx->pc = 0x39B658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B658u;
            // 0x39b65c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39B660u;
label_39b660:
    // 0x39b660: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x39b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_39b664:
    // 0x39b664: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b668:
    // 0x39b668: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_39b66c:
    // 0x39b66c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x39b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_39b670:
    // 0x39b670: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_39b674:
    // 0x39b674: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x39b674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_39b678:
    // 0x39b678: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39b67c:
    // 0x39b67c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39b67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39b680:
    // 0x39b680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39b680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39b684:
    // 0x39b684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39b684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b688:
    // 0x39b688: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39b688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39b68c:
    // 0x39b68c: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x39b68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b690:
    // 0x39b690: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x39b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b694:
    // 0x39b694: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x39b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b698:
    // 0x39b698: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39b698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39b69c:
    // 0x39b69c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x39b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_39b6a0:
    // 0x39b6a0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x39b6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_39b6a4:
    // 0x39b6a4: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x39b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_39b6a8:
    // 0x39b6a8: 0xc0a7a88  jal         func_29EA20
label_39b6ac:
    if (ctx->pc == 0x39B6ACu) {
        ctx->pc = 0x39B6ACu;
            // 0x39b6ac: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x39B6B0u;
        goto label_39b6b0;
    }
    ctx->pc = 0x39B6A8u;
    SET_GPR_U32(ctx, 31, 0x39B6B0u);
    ctx->pc = 0x39B6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B6A8u;
            // 0x39b6ac: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B6B0u; }
        if (ctx->pc != 0x39B6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B6B0u; }
        if (ctx->pc != 0x39B6B0u) { return; }
    }
    ctx->pc = 0x39B6B0u;
label_39b6b0:
    // 0x39b6b0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x39b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_39b6b4:
    // 0x39b6b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b6b8:
    // 0x39b6b8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_39b6bc:
    if (ctx->pc == 0x39B6BCu) {
        ctx->pc = 0x39B6BCu;
            // 0x39b6bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39B6C0u;
        goto label_39b6c0;
    }
    ctx->pc = 0x39B6B8u;
    {
        const bool branch_taken_0x39b6b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B6B8u;
            // 0x39b6bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b6b8) {
            ctx->pc = 0x39B6D8u;
            goto label_39b6d8;
        }
    }
    ctx->pc = 0x39B6C0u;
label_39b6c0:
    // 0x39b6c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39b6c4:
    // 0x39b6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b6c8:
    // 0x39b6c8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x39b6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39b6cc:
    // 0x39b6cc: 0xc0804bc  jal         func_2012F0
label_39b6d0:
    if (ctx->pc == 0x39B6D0u) {
        ctx->pc = 0x39B6D0u;
            // 0x39b6d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x39B6D4u;
        goto label_39b6d4;
    }
    ctx->pc = 0x39B6CCu;
    SET_GPR_U32(ctx, 31, 0x39B6D4u);
    ctx->pc = 0x39B6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B6CCu;
            // 0x39b6d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B6D4u; }
        if (ctx->pc != 0x39B6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B6D4u; }
        if (ctx->pc != 0x39B6D4u) { return; }
    }
    ctx->pc = 0x39B6D4u;
label_39b6d4:
    // 0x39b6d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b6d8:
    // 0x39b6d8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x39b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b6dc:
    // 0x39b6dc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x39b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_39b6e0:
    // 0x39b6e0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x39b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b6e4:
    // 0x39b6e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x39b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_39b6e8:
    // 0x39b6e8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x39b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b6ec:
    // 0x39b6ec: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x39b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_39b6f0:
    // 0x39b6f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x39b6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b6f4:
    // 0x39b6f4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x39b6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_39b6f8:
    // 0x39b6f8: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x39b6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_39b6fc:
    // 0x39b6fc: 0xc0d37ec  jal         func_34DFB0
label_39b700:
    if (ctx->pc == 0x39B700u) {
        ctx->pc = 0x39B700u;
            // 0x39b700: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->pc = 0x39B704u;
        goto label_39b704;
    }
    ctx->pc = 0x39B6FCu;
    SET_GPR_U32(ctx, 31, 0x39B704u);
    ctx->pc = 0x39B700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B6FCu;
            // 0x39b700: 0xe7a200e8  swc1        $f2, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B704u; }
        if (ctx->pc != 0x39B704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B704u; }
        if (ctx->pc != 0x39B704u) { return; }
    }
    ctx->pc = 0x39B704u;
label_39b704:
    // 0x39b704: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x39b704u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_39b708:
    // 0x39b708: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_39b70c:
    if (ctx->pc == 0x39B70Cu) {
        ctx->pc = 0x39B710u;
        goto label_39b710;
    }
    ctx->pc = 0x39B708u;
    {
        const bool branch_taken_0x39b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b708) {
            ctx->pc = 0x39B748u;
            goto label_39b748;
        }
    }
    ctx->pc = 0x39B710u;
label_39b710:
    // 0x39b710: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x39b710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_39b714:
    // 0x39b714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39b718:
    // 0x39b718: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x39b718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_39b71c:
    // 0x39b71c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x39b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_39b720:
    // 0x39b720: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39b720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39b724:
    // 0x39b724: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_39b728:
    if (ctx->pc == 0x39B728u) {
        ctx->pc = 0x39B72Cu;
        goto label_39b72c;
    }
    ctx->pc = 0x39B724u;
    {
        const bool branch_taken_0x39b724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b724) {
            ctx->pc = 0x39B748u;
            goto label_39b748;
        }
    }
    ctx->pc = 0x39B72Cu;
label_39b72c:
    // 0x39b72c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_39b730:
    if (ctx->pc == 0x39B730u) {
        ctx->pc = 0x39B734u;
        goto label_39b734;
    }
    ctx->pc = 0x39B72Cu;
    {
        const bool branch_taken_0x39b72c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b72c) {
            ctx->pc = 0x39B748u;
            goto label_39b748;
        }
    }
    ctx->pc = 0x39B734u;
label_39b734:
    // 0x39b734: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39b734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39b738:
    // 0x39b738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b73c:
    // 0x39b73c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39b73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39b740:
    // 0x39b740: 0x320f809  jalr        $t9
label_39b744:
    if (ctx->pc == 0x39B744u) {
        ctx->pc = 0x39B744u;
            // 0x39b744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39B748u;
        goto label_39b748;
    }
    ctx->pc = 0x39B740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B748u);
        ctx->pc = 0x39B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B740u;
            // 0x39b744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39B748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39B748u; }
            if (ctx->pc != 0x39B748u) { return; }
        }
        }
    }
    ctx->pc = 0x39B748u;
label_39b748:
    // 0x39b748: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39b748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39b74c:
    // 0x39b74c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x39b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39b750:
    // 0x39b750: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x39b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_39b754:
    // 0x39b754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39b754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b758:
    // 0x39b758: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x39b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_39b75c:
    // 0x39b75c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_39b760:
    if (ctx->pc == 0x39B760u) {
        ctx->pc = 0x39B760u;
            // 0x39b760: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x39B764u;
        goto label_39b764;
    }
    ctx->pc = 0x39B75Cu;
    {
        const bool branch_taken_0x39b75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B75Cu;
            // 0x39b760: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b75c) {
            ctx->pc = 0x39B770u;
            goto label_39b770;
        }
    }
    ctx->pc = 0x39B764u;
label_39b764:
    // 0x39b764: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39b764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39b768:
    // 0x39b768: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x39b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_39b76c:
    // 0x39b76c: 0x8c860cc4  lw          $a2, 0xCC4($a0)
    ctx->pc = 0x39b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_39b770:
    // 0x39b770: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_39b774:
    if (ctx->pc == 0x39B774u) {
        ctx->pc = 0x39B778u;
        goto label_39b778;
    }
    ctx->pc = 0x39B770u;
    {
        const bool branch_taken_0x39b770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b770) {
            ctx->pc = 0x39B7B4u;
            goto label_39b7b4;
        }
    }
    ctx->pc = 0x39B778u;
label_39b778:
    // 0x39b778: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
label_39b77c:
    if (ctx->pc == 0x39B77Cu) {
        ctx->pc = 0x39B77Cu;
            // 0x39b77c: 0x8e23009c  lw          $v1, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->pc = 0x39B780u;
        goto label_39b780;
    }
    ctx->pc = 0x39B778u;
    {
        const bool branch_taken_0x39b778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b778) {
            ctx->pc = 0x39B77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B778u;
            // 0x39b77c: 0x8e23009c  lw          $v1, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B8ACu;
            goto label_39b8ac;
        }
    }
    ctx->pc = 0x39B780u;
label_39b780:
    // 0x39b780: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39b784:
    // 0x39b784: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x39b784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_39b788:
    // 0x39b788: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x39b788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_39b78c:
    // 0x39b78c: 0x24846f90  addiu       $a0, $a0, 0x6F90
    ctx->pc = 0x39b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28560));
label_39b790:
    // 0x39b790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b794:
    // 0x39b794: 0xc21804  sllv        $v1, $v0, $a2
    ctx->pc = 0x39b794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_39b798:
    // 0x39b798: 0x90a20c6a  lbu         $v0, 0xC6A($a1)
    ctx->pc = 0x39b798u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3178)));
label_39b79c:
    // 0x39b79c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39b7a0:
    // 0x39b7a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x39b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_39b7a4:
    // 0x39b7a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39b7a8:
    // 0x39b7a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39b7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39b7ac:
    // 0x39b7ac: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_39b7b0:
    if (ctx->pc == 0x39B7B0u) {
        ctx->pc = 0x39B7B4u;
        goto label_39b7b4;
    }
    ctx->pc = 0x39B7ACu;
    {
        const bool branch_taken_0x39b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b7ac) {
            ctx->pc = 0x39B8A8u;
            goto label_39b8a8;
        }
    }
    ctx->pc = 0x39B7B4u;
label_39b7b4:
    // 0x39b7b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39b7b8:
    // 0x39b7b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_39b7bc:
    // 0x39b7bc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x39b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39b7c0:
    // 0x39b7c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39b7c4:
    // 0x39b7c4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x39b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39b7c8:
    // 0x39b7c8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x39b7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_39b7cc:
    // 0x39b7cc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x39b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_39b7d0:
    // 0x39b7d0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x39b7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_39b7d4:
    // 0x39b7d4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x39b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_39b7d8:
    // 0x39b7d8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x39b7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_39b7dc:
    // 0x39b7dc: 0xc0a7a88  jal         func_29EA20
label_39b7e0:
    if (ctx->pc == 0x39B7E0u) {
        ctx->pc = 0x39B7E0u;
            // 0x39b7e0: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->pc = 0x39B7E4u;
        goto label_39b7e4;
    }
    ctx->pc = 0x39B7DCu;
    SET_GPR_U32(ctx, 31, 0x39B7E4u);
    ctx->pc = 0x39B7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B7DCu;
            // 0x39b7e0: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B7E4u; }
        if (ctx->pc != 0x39B7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B7E4u; }
        if (ctx->pc != 0x39B7E4u) { return; }
    }
    ctx->pc = 0x39B7E4u;
label_39b7e4:
    // 0x39b7e4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x39b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_39b7e8:
    // 0x39b7e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b7ec:
    // 0x39b7ec: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_39b7f0:
    if (ctx->pc == 0x39B7F0u) {
        ctx->pc = 0x39B7F0u;
            // 0x39b7f0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39B7F4u;
        goto label_39b7f4;
    }
    ctx->pc = 0x39B7ECu;
    {
        const bool branch_taken_0x39b7ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B7ECu;
            // 0x39b7f0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b7ec) {
            ctx->pc = 0x39B80Cu;
            goto label_39b80c;
        }
    }
    ctx->pc = 0x39B7F4u;
label_39b7f4:
    // 0x39b7f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_39b7f8:
    // 0x39b7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b7fc:
    // 0x39b7fc: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x39b7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39b800:
    // 0x39b800: 0xc0804bc  jal         func_2012F0
label_39b804:
    if (ctx->pc == 0x39B804u) {
        ctx->pc = 0x39B804u;
            // 0x39b804: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x39B808u;
        goto label_39b808;
    }
    ctx->pc = 0x39B800u;
    SET_GPR_U32(ctx, 31, 0x39B808u);
    ctx->pc = 0x39B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B800u;
            // 0x39b804: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B808u; }
        if (ctx->pc != 0x39B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B808u; }
        if (ctx->pc != 0x39B808u) { return; }
    }
    ctx->pc = 0x39B808u;
label_39b808:
    // 0x39b808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b80c:
    // 0x39b80c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x39b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39b810:
    // 0x39b810: 0xc04f278  jal         func_13C9E0
label_39b814:
    if (ctx->pc == 0x39B814u) {
        ctx->pc = 0x39B814u;
            // 0x39b814: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x39B818u;
        goto label_39b818;
    }
    ctx->pc = 0x39B810u;
    SET_GPR_U32(ctx, 31, 0x39B818u);
    ctx->pc = 0x39B814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B810u;
            // 0x39b814: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B818u; }
        if (ctx->pc != 0x39B818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B818u; }
        if (ctx->pc != 0x39B818u) { return; }
    }
    ctx->pc = 0x39B818u;
label_39b818:
    // 0x39b818: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x39b818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_39b81c:
    // 0x39b81c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x39b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39b820:
    // 0x39b820: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x39b820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39b824:
    // 0x39b824: 0xc04cca0  jal         func_133280
label_39b828:
    if (ctx->pc == 0x39B828u) {
        ctx->pc = 0x39B828u;
            // 0x39b828: 0x24c67010  addiu       $a2, $a2, 0x7010 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28688));
        ctx->pc = 0x39B82Cu;
        goto label_39b82c;
    }
    ctx->pc = 0x39B824u;
    SET_GPR_U32(ctx, 31, 0x39B82Cu);
    ctx->pc = 0x39B828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B824u;
            // 0x39b828: 0x24c67010  addiu       $a2, $a2, 0x7010 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B82Cu; }
        if (ctx->pc != 0x39B82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B82Cu; }
        if (ctx->pc != 0x39B82Cu) { return; }
    }
    ctx->pc = 0x39B82Cu;
label_39b82c:
    // 0x39b82c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x39b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_39b830:
    // 0x39b830: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39b830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_39b834:
    // 0x39b834: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x39b834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_39b838:
    // 0x39b838: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x39b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39b83c:
    // 0x39b83c: 0xc04cb78  jal         func_132DE0
label_39b840:
    if (ctx->pc == 0x39B840u) {
        ctx->pc = 0x39B840u;
            // 0x39b840: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x39B844u;
        goto label_39b844;
    }
    ctx->pc = 0x39B83Cu;
    SET_GPR_U32(ctx, 31, 0x39B844u);
    ctx->pc = 0x39B840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B83Cu;
            // 0x39b840: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B844u; }
        if (ctx->pc != 0x39B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B844u; }
        if (ctx->pc != 0x39B844u) { return; }
    }
    ctx->pc = 0x39B844u;
label_39b844:
    // 0x39b844: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x39b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_39b848:
    // 0x39b848: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x39b848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_39b84c:
    // 0x39b84c: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x39b84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_39b850:
    // 0x39b850: 0xc0d37ec  jal         func_34DFB0
label_39b854:
    if (ctx->pc == 0x39B854u) {
        ctx->pc = 0x39B854u;
            // 0x39b854: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B858u;
        goto label_39b858;
    }
    ctx->pc = 0x39B850u;
    SET_GPR_U32(ctx, 31, 0x39B858u);
    ctx->pc = 0x39B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B850u;
            // 0x39b854: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B858u; }
        if (ctx->pc != 0x39B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B858u; }
        if (ctx->pc != 0x39B858u) { return; }
    }
    ctx->pc = 0x39B858u;
label_39b858:
    // 0x39b858: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x39b858u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_39b85c:
    // 0x39b85c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_39b860:
    if (ctx->pc == 0x39B860u) {
        ctx->pc = 0x39B860u;
            // 0x39b860: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x39B864u;
        goto label_39b864;
    }
    ctx->pc = 0x39B85Cu;
    {
        const bool branch_taken_0x39b85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b85c) {
            ctx->pc = 0x39B860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39B85Cu;
            // 0x39b860: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39B8A0u;
            goto label_39b8a0;
        }
    }
    ctx->pc = 0x39B864u;
label_39b864:
    // 0x39b864: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x39b864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_39b868:
    // 0x39b868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39b86c:
    // 0x39b86c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x39b86cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_39b870:
    // 0x39b870: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x39b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_39b874:
    // 0x39b874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39b874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39b878:
    // 0x39b878: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_39b87c:
    if (ctx->pc == 0x39B87Cu) {
        ctx->pc = 0x39B880u;
        goto label_39b880;
    }
    ctx->pc = 0x39B878u;
    {
        const bool branch_taken_0x39b878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b878) {
            ctx->pc = 0x39B89Cu;
            goto label_39b89c;
        }
    }
    ctx->pc = 0x39B880u;
label_39b880:
    // 0x39b880: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_39b884:
    if (ctx->pc == 0x39B884u) {
        ctx->pc = 0x39B888u;
        goto label_39b888;
    }
    ctx->pc = 0x39B880u;
    {
        const bool branch_taken_0x39b880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b880) {
            ctx->pc = 0x39B89Cu;
            goto label_39b89c;
        }
    }
    ctx->pc = 0x39B888u;
label_39b888:
    // 0x39b888: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39b888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39b88c:
    // 0x39b88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b890:
    // 0x39b890: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39b890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39b894:
    // 0x39b894: 0x320f809  jalr        $t9
label_39b898:
    if (ctx->pc == 0x39B898u) {
        ctx->pc = 0x39B898u;
            // 0x39b898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39B89Cu;
        goto label_39b89c;
    }
    ctx->pc = 0x39B894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B89Cu);
        ctx->pc = 0x39B898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B894u;
            // 0x39b898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39B89Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39B89Cu; }
            if (ctx->pc != 0x39B89Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39B89Cu;
label_39b89c:
    // 0x39b89c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x39b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_39b8a0:
    // 0x39b8a0: 0xc0e7690  jal         func_39DA40
label_39b8a4:
    if (ctx->pc == 0x39B8A4u) {
        ctx->pc = 0x39B8A8u;
        goto label_39b8a8;
    }
    ctx->pc = 0x39B8A0u;
    SET_GPR_U32(ctx, 31, 0x39B8A8u);
    ctx->pc = 0x39DA40u;
    if (runtime->hasFunction(0x39DA40u)) {
        auto targetFn = runtime->lookupFunction(0x39DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B8A8u; }
        if (ctx->pc != 0x39B8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039DA40_0x39da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B8A8u; }
        if (ctx->pc != 0x39B8A8u) { return; }
    }
    ctx->pc = 0x39B8A8u;
label_39b8a8:
    // 0x39b8a8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x39b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_39b8ac:
    // 0x39b8ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x39b8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39b8b0:
    // 0x39b8b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39b8b4:
    // 0x39b8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b8b8:
    // 0x39b8b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39b8bc:
    // 0x39b8bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b8c0:
    // 0x39b8c0: 0xc040138  jal         func_1004E0
label_39b8c4:
    if (ctx->pc == 0x39B8C4u) {
        ctx->pc = 0x39B8C4u;
            // 0x39b8c4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x39B8C8u;
        goto label_39b8c8;
    }
    ctx->pc = 0x39B8C0u;
    SET_GPR_U32(ctx, 31, 0x39B8C8u);
    ctx->pc = 0x39B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B8C0u;
            // 0x39b8c4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B8C8u; }
        if (ctx->pc != 0x39B8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B8C8u; }
        if (ctx->pc != 0x39B8C8u) { return; }
    }
    ctx->pc = 0x39B8C8u;
label_39b8c8:
    // 0x39b8c8: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x39b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_39b8cc:
    // 0x39b8cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b8d0:
    // 0x39b8d0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x39b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_39b8d4:
    // 0x39b8d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b8d8:
    // 0x39b8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39b8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b8dc:
    // 0x39b8dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x39b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39b8e0:
    // 0x39b8e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b8e4:
    // 0x39b8e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39b8e8:
    // 0x39b8e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b8ec:
    // 0x39b8ec: 0xc04a576  jal         func_1295D8
label_39b8f0:
    if (ctx->pc == 0x39B8F0u) {
        ctx->pc = 0x39B8F0u;
            // 0x39b8f0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x39B8F4u;
        goto label_39b8f4;
    }
    ctx->pc = 0x39B8ECu;
    SET_GPR_U32(ctx, 31, 0x39B8F4u);
    ctx->pc = 0x39B8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B8ECu;
            // 0x39b8f0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B8F4u; }
        if (ctx->pc != 0x39B8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B8F4u; }
        if (ctx->pc != 0x39B8F4u) { return; }
    }
    ctx->pc = 0x39B8F4u;
label_39b8f4:
    // 0x39b8f4: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x39b8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_39b8f8:
    // 0x39b8f8: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x39b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
label_39b8fc:
    // 0x39b8fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b900:
    // 0x39b900: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39b900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_39b904:
    // 0x39b904: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x39b904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_39b908:
    // 0x39b908: 0x24072bc1  addiu       $a3, $zero, 0x2BC1
    ctx->pc = 0x39b908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11201));
label_39b90c:
    // 0x39b90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39b90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39b910:
    // 0x39b910: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x39b910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_39b914:
    // 0x39b914: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x39b914u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_39b918:
    // 0x39b918: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x39b918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
label_39b91c:
    // 0x39b91c: 0xa2060003  sb          $a2, 0x3($s0)
    ctx->pc = 0x39b91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 6));
label_39b920:
    // 0x39b920: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x39b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39b924:
    // 0x39b924: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x39b924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_39b928:
    // 0x39b928: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x39b928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_39b92c:
    // 0x39b92c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x39b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_39b930:
    // 0x39b930: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x39b930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_39b934:
    // 0x39b934: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x39b934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_39b938:
    // 0x39b938: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x39b938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_39b93c:
    // 0x39b93c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x39b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_39b940:
    // 0x39b940: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x39b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_39b944:
    // 0x39b944: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_39b948:
    if (ctx->pc == 0x39B948u) {
        ctx->pc = 0x39B94Cu;
        goto label_39b94c;
    }
    ctx->pc = 0x39B944u;
    {
        const bool branch_taken_0x39b944 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x39b944) {
            ctx->pc = 0x39B958u;
            goto label_39b958;
        }
    }
    ctx->pc = 0x39B94Cu;
label_39b94c:
    // 0x39b94c: 0x10000008  b           . + 4 + (0x8 << 2)
label_39b950:
    if (ctx->pc == 0x39B950u) {
        ctx->pc = 0x39B950u;
            // 0x39b950: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
        ctx->pc = 0x39B954u;
        goto label_39b954;
    }
    ctx->pc = 0x39B94Cu;
    {
        const bool branch_taken_0x39b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B94Cu;
            // 0x39b950: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b94c) {
            ctx->pc = 0x39B970u;
            goto label_39b970;
        }
    }
    ctx->pc = 0x39B954u;
label_39b954:
    // 0x39b954: 0x0  nop
    ctx->pc = 0x39b954u;
    // NOP
label_39b958:
    // 0x39b958: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
label_39b95c:
    if (ctx->pc == 0x39B95Cu) {
        ctx->pc = 0x39B960u;
        goto label_39b960;
    }
    ctx->pc = 0x39B958u;
    {
        const bool branch_taken_0x39b958 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x39b958) {
            ctx->pc = 0x39B968u;
            goto label_39b968;
        }
    }
    ctx->pc = 0x39B960u;
label_39b960:
    // 0x39b960: 0x10000003  b           . + 4 + (0x3 << 2)
label_39b964:
    if (ctx->pc == 0x39B964u) {
        ctx->pc = 0x39B964u;
            // 0x39b964: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->pc = 0x39B968u;
        goto label_39b968;
    }
    ctx->pc = 0x39B960u;
    {
        const bool branch_taken_0x39b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B960u;
            // 0x39b964: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b960) {
            ctx->pc = 0x39B970u;
            goto label_39b970;
        }
    }
    ctx->pc = 0x39B968u;
label_39b968:
    // 0x39b968: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x39b968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_39b96c:
    // 0x39b96c: 0x0  nop
    ctx->pc = 0x39b96cu;
    // NOP
label_39b970:
    // 0x39b970: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x39b970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_39b974:
    // 0x39b974: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x39b974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_39b978:
    // 0x39b978: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x39b978u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_39b97c:
    // 0x39b97c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x39b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_39b980:
    // 0x39b980: 0x1d00ffe5  bgtz        $t0, . + 4 + (-0x1B << 2)
label_39b984:
    if (ctx->pc == 0x39B984u) {
        ctx->pc = 0x39B984u;
            // 0x39b984: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x39B988u;
        goto label_39b988;
    }
    ctx->pc = 0x39B980u;
    {
        const bool branch_taken_0x39b980 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x39B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B980u;
            // 0x39b984: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b980) {
            ctx->pc = 0x39B918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39b918;
        }
    }
    ctx->pc = 0x39B988u;
label_39b988:
    // 0x39b988: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x39b988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_39b98c:
    // 0x39b98c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x39b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_39b990:
    // 0x39b990: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x39b990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39b994:
    // 0x39b994: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x39b994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39b998:
    // 0x39b998: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39b998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b99c:
    // 0x39b99c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_39b9a0:
    // 0x39b9a0: 0xc040138  jal         func_1004E0
label_39b9a4:
    if (ctx->pc == 0x39B9A4u) {
        ctx->pc = 0x39B9A4u;
            // 0x39b9a4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x39B9A8u;
        goto label_39b9a8;
    }
    ctx->pc = 0x39B9A0u;
    SET_GPR_U32(ctx, 31, 0x39B9A8u);
    ctx->pc = 0x39B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B9A0u;
            // 0x39b9a4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B9A8u; }
        if (ctx->pc != 0x39B9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B9A8u; }
        if (ctx->pc != 0x39B9A8u) { return; }
    }
    ctx->pc = 0x39B9A8u;
label_39b9a8:
    // 0x39b9a8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39b9ac:
    // 0x39b9ac: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_39b9b0:
    // 0x39b9b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x39b9b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b9b4:
    // 0x39b9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b9b8:
    // 0x39b9b8: 0x24a5d5b0  addiu       $a1, $a1, -0x2A50
    ctx->pc = 0x39b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956464));
label_39b9bc:
    // 0x39b9bc: 0x24c6b5c0  addiu       $a2, $a2, -0x4A40
    ctx->pc = 0x39b9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948288));
label_39b9c0:
    // 0x39b9c0: 0xc040840  jal         func_102100
label_39b9c4:
    if (ctx->pc == 0x39B9C4u) {
        ctx->pc = 0x39B9C4u;
            // 0x39b9c4: 0x240701b0  addiu       $a3, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->pc = 0x39B9C8u;
        goto label_39b9c8;
    }
    ctx->pc = 0x39B9C0u;
    SET_GPR_U32(ctx, 31, 0x39B9C8u);
    ctx->pc = 0x39B9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B9C0u;
            // 0x39b9c4: 0x240701b0  addiu       $a3, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B9C8u; }
        if (ctx->pc != 0x39B9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B9C8u; }
        if (ctx->pc != 0x39B9C8u) { return; }
    }
    ctx->pc = 0x39B9C8u;
label_39b9c8:
    // 0x39b9c8: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x39b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_39b9cc:
    // 0x39b9cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39b9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39b9d0:
    // 0x39b9d0: 0x8e330094  lw          $s3, 0x94($s1)
    ctx->pc = 0x39b9d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_39b9d4:
    // 0x39b9d4: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x39b9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_39b9d8:
    // 0x39b9d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39b9dc:
    // 0x39b9dc: 0xc0d879c  jal         func_361E70
label_39b9e0:
    if (ctx->pc == 0x39B9E0u) {
        ctx->pc = 0x39B9E0u;
            // 0x39b9e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39B9E4u;
        goto label_39b9e4;
    }
    ctx->pc = 0x39B9DCu;
    SET_GPR_U32(ctx, 31, 0x39B9E4u);
    ctx->pc = 0x39B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39B9DCu;
            // 0x39b9e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B9E4u; }
        if (ctx->pc != 0x39B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39B9E4u; }
        if (ctx->pc != 0x39B9E4u) { return; }
    }
    ctx->pc = 0x39B9E4u;
label_39b9e4:
    // 0x39b9e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x39b9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_39b9e8:
    // 0x39b9e8: 0x265201b0  addiu       $s2, $s2, 0x1B0
    ctx->pc = 0x39b9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_39b9ec:
    // 0x39b9ec: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_39b9f0:
    if (ctx->pc == 0x39B9F0u) {
        ctx->pc = 0x39B9F0u;
            // 0x39b9f0: 0x26730034  addiu       $s3, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->pc = 0x39B9F4u;
        goto label_39b9f4;
    }
    ctx->pc = 0x39B9ECu;
    {
        const bool branch_taken_0x39b9ec = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x39B9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39B9ECu;
            // 0x39b9f0: 0x26730034  addiu       $s3, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b9ec) {
            ctx->pc = 0x39B9D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39b9d8;
        }
    }
    ctx->pc = 0x39B9F4u;
label_39b9f4:
    // 0x39b9f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39b9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39b9f8:
    // 0x39b9f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39b9fc:
    // 0x39b9fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39b9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39ba00:
    // 0x39ba00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39ba00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39ba04:
    // 0x39ba04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39ba04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39ba08:
    // 0x39ba08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ba08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39ba0c:
    // 0x39ba0c: 0x3e00008  jr          $ra
label_39ba10:
    if (ctx->pc == 0x39BA10u) {
        ctx->pc = 0x39BA10u;
            // 0x39ba10: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x39BA14u;
        goto label_39ba14;
    }
    ctx->pc = 0x39BA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BA0Cu;
            // 0x39ba10: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39BA14u;
label_39ba14:
    // 0x39ba14: 0x0  nop
    ctx->pc = 0x39ba14u;
    // NOP
label_39ba18:
    // 0x39ba18: 0x0  nop
    ctx->pc = 0x39ba18u;
    // NOP
label_39ba1c:
    // 0x39ba1c: 0x0  nop
    ctx->pc = 0x39ba1cu;
    // NOP
label_39ba20:
    // 0x39ba20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_39ba24:
    // 0x39ba24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ba24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ba28:
    // 0x39ba28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39ba2c:
    // 0x39ba2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39ba30:
    // 0x39ba30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39ba30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39ba34:
    // 0x39ba34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ba34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ba38:
    // 0x39ba38: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x39ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39ba3c:
    // 0x39ba3c: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x39ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
label_39ba40:
    // 0x39ba40: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x39ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_39ba44:
    // 0x39ba44: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x39ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ba48:
    // 0x39ba48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ba48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39ba4c:
    // 0x39ba4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x39ba4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_39ba50:
    // 0x39ba50: 0x0  nop
    ctx->pc = 0x39ba50u;
    // NOP
label_39ba54:
    // 0x39ba54: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x39ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
label_39ba58:
    // 0x39ba58: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x39ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_39ba5c:
    // 0x39ba5c: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x39ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39ba60:
    // 0x39ba60: 0xc04f29c  jal         func_13CA70
label_39ba64:
    if (ctx->pc == 0x39BA64u) {
        ctx->pc = 0x39BA64u;
            // 0x39ba64: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39BA68u;
        goto label_39ba68;
    }
    ctx->pc = 0x39BA60u;
    SET_GPR_U32(ctx, 31, 0x39BA68u);
    ctx->pc = 0x39BA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BA60u;
            // 0x39ba64: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BA68u; }
        if (ctx->pc != 0x39BA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BA68u; }
        if (ctx->pc != 0x39BA68u) { return; }
    }
    ctx->pc = 0x39BA68u;
label_39ba68:
    // 0x39ba68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39ba6c:
    // 0x39ba6c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x39ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39ba70:
    // 0x39ba70: 0xc04cdf0  jal         func_1337C0
label_39ba74:
    if (ctx->pc == 0x39BA74u) {
        ctx->pc = 0x39BA74u;
            // 0x39ba74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39BA78u;
        goto label_39ba78;
    }
    ctx->pc = 0x39BA70u;
    SET_GPR_U32(ctx, 31, 0x39BA78u);
    ctx->pc = 0x39BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BA70u;
            // 0x39ba74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BA78u; }
        if (ctx->pc != 0x39BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BA78u; }
        if (ctx->pc != 0x39BA78u) { return; }
    }
    ctx->pc = 0x39BA78u;
label_39ba78:
    // 0x39ba78: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x39ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_39ba7c:
    // 0x39ba7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x39ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39ba80:
    // 0x39ba80: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x39ba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_39ba84:
    // 0x39ba84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39ba84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39ba88:
    // 0x39ba88: 0x0  nop
    ctx->pc = 0x39ba88u;
    // NOP
label_39ba8c:
    // 0x39ba8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x39ba8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_39ba90:
    // 0x39ba90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ba90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39ba94:
    // 0x39ba94: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x39ba94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_39ba98:
    // 0x39ba98: 0xc04cdd0  jal         func_133740
label_39ba9c:
    if (ctx->pc == 0x39BA9Cu) {
        ctx->pc = 0x39BA9Cu;
            // 0x39ba9c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39BAA0u;
        goto label_39baa0;
    }
    ctx->pc = 0x39BA98u;
    SET_GPR_U32(ctx, 31, 0x39BAA0u);
    ctx->pc = 0x39BA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BA98u;
            // 0x39ba9c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BAA0u; }
        if (ctx->pc != 0x39BAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BAA0u; }
        if (ctx->pc != 0x39BAA0u) { return; }
    }
    ctx->pc = 0x39BAA0u;
label_39baa0:
    // 0x39baa0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_39baa4:
    // 0x39baa4: 0xc04c994  jal         func_132650
label_39baa8:
    if (ctx->pc == 0x39BAA8u) {
        ctx->pc = 0x39BAA8u;
            // 0x39baa8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39BAACu;
        goto label_39baac;
    }
    ctx->pc = 0x39BAA4u;
    SET_GPR_U32(ctx, 31, 0x39BAACu);
    ctx->pc = 0x39BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BAA4u;
            // 0x39baa8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BAACu; }
        if (ctx->pc != 0x39BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BAACu; }
        if (ctx->pc != 0x39BAACu) { return; }
    }
    ctx->pc = 0x39BAACu;
label_39baac:
    // 0x39baac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39bab0:
    // 0x39bab0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39bab4:
    // 0x39bab4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39bab8:
    // 0x39bab8: 0x3e00008  jr          $ra
label_39babc:
    if (ctx->pc == 0x39BABCu) {
        ctx->pc = 0x39BABCu;
            // 0x39babc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x39BAC0u;
        goto label_fallthrough_0x39bab8;
    }
    ctx->pc = 0x39BAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BAB8u;
            // 0x39babc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x39bab8:
    ctx->pc = 0x39BAC0u;
}
