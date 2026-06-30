#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037A770
// Address: 0x37a770 - 0x37ad10
void sub_0037A770_0x37a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A770_0x37a770");
#endif

    switch (ctx->pc) {
        case 0x37a770u: goto label_37a770;
        case 0x37a774u: goto label_37a774;
        case 0x37a778u: goto label_37a778;
        case 0x37a77cu: goto label_37a77c;
        case 0x37a780u: goto label_37a780;
        case 0x37a784u: goto label_37a784;
        case 0x37a788u: goto label_37a788;
        case 0x37a78cu: goto label_37a78c;
        case 0x37a790u: goto label_37a790;
        case 0x37a794u: goto label_37a794;
        case 0x37a798u: goto label_37a798;
        case 0x37a79cu: goto label_37a79c;
        case 0x37a7a0u: goto label_37a7a0;
        case 0x37a7a4u: goto label_37a7a4;
        case 0x37a7a8u: goto label_37a7a8;
        case 0x37a7acu: goto label_37a7ac;
        case 0x37a7b0u: goto label_37a7b0;
        case 0x37a7b4u: goto label_37a7b4;
        case 0x37a7b8u: goto label_37a7b8;
        case 0x37a7bcu: goto label_37a7bc;
        case 0x37a7c0u: goto label_37a7c0;
        case 0x37a7c4u: goto label_37a7c4;
        case 0x37a7c8u: goto label_37a7c8;
        case 0x37a7ccu: goto label_37a7cc;
        case 0x37a7d0u: goto label_37a7d0;
        case 0x37a7d4u: goto label_37a7d4;
        case 0x37a7d8u: goto label_37a7d8;
        case 0x37a7dcu: goto label_37a7dc;
        case 0x37a7e0u: goto label_37a7e0;
        case 0x37a7e4u: goto label_37a7e4;
        case 0x37a7e8u: goto label_37a7e8;
        case 0x37a7ecu: goto label_37a7ec;
        case 0x37a7f0u: goto label_37a7f0;
        case 0x37a7f4u: goto label_37a7f4;
        case 0x37a7f8u: goto label_37a7f8;
        case 0x37a7fcu: goto label_37a7fc;
        case 0x37a800u: goto label_37a800;
        case 0x37a804u: goto label_37a804;
        case 0x37a808u: goto label_37a808;
        case 0x37a80cu: goto label_37a80c;
        case 0x37a810u: goto label_37a810;
        case 0x37a814u: goto label_37a814;
        case 0x37a818u: goto label_37a818;
        case 0x37a81cu: goto label_37a81c;
        case 0x37a820u: goto label_37a820;
        case 0x37a824u: goto label_37a824;
        case 0x37a828u: goto label_37a828;
        case 0x37a82cu: goto label_37a82c;
        case 0x37a830u: goto label_37a830;
        case 0x37a834u: goto label_37a834;
        case 0x37a838u: goto label_37a838;
        case 0x37a83cu: goto label_37a83c;
        case 0x37a840u: goto label_37a840;
        case 0x37a844u: goto label_37a844;
        case 0x37a848u: goto label_37a848;
        case 0x37a84cu: goto label_37a84c;
        case 0x37a850u: goto label_37a850;
        case 0x37a854u: goto label_37a854;
        case 0x37a858u: goto label_37a858;
        case 0x37a85cu: goto label_37a85c;
        case 0x37a860u: goto label_37a860;
        case 0x37a864u: goto label_37a864;
        case 0x37a868u: goto label_37a868;
        case 0x37a86cu: goto label_37a86c;
        case 0x37a870u: goto label_37a870;
        case 0x37a874u: goto label_37a874;
        case 0x37a878u: goto label_37a878;
        case 0x37a87cu: goto label_37a87c;
        case 0x37a880u: goto label_37a880;
        case 0x37a884u: goto label_37a884;
        case 0x37a888u: goto label_37a888;
        case 0x37a88cu: goto label_37a88c;
        case 0x37a890u: goto label_37a890;
        case 0x37a894u: goto label_37a894;
        case 0x37a898u: goto label_37a898;
        case 0x37a89cu: goto label_37a89c;
        case 0x37a8a0u: goto label_37a8a0;
        case 0x37a8a4u: goto label_37a8a4;
        case 0x37a8a8u: goto label_37a8a8;
        case 0x37a8acu: goto label_37a8ac;
        case 0x37a8b0u: goto label_37a8b0;
        case 0x37a8b4u: goto label_37a8b4;
        case 0x37a8b8u: goto label_37a8b8;
        case 0x37a8bcu: goto label_37a8bc;
        case 0x37a8c0u: goto label_37a8c0;
        case 0x37a8c4u: goto label_37a8c4;
        case 0x37a8c8u: goto label_37a8c8;
        case 0x37a8ccu: goto label_37a8cc;
        case 0x37a8d0u: goto label_37a8d0;
        case 0x37a8d4u: goto label_37a8d4;
        case 0x37a8d8u: goto label_37a8d8;
        case 0x37a8dcu: goto label_37a8dc;
        case 0x37a8e0u: goto label_37a8e0;
        case 0x37a8e4u: goto label_37a8e4;
        case 0x37a8e8u: goto label_37a8e8;
        case 0x37a8ecu: goto label_37a8ec;
        case 0x37a8f0u: goto label_37a8f0;
        case 0x37a8f4u: goto label_37a8f4;
        case 0x37a8f8u: goto label_37a8f8;
        case 0x37a8fcu: goto label_37a8fc;
        case 0x37a900u: goto label_37a900;
        case 0x37a904u: goto label_37a904;
        case 0x37a908u: goto label_37a908;
        case 0x37a90cu: goto label_37a90c;
        case 0x37a910u: goto label_37a910;
        case 0x37a914u: goto label_37a914;
        case 0x37a918u: goto label_37a918;
        case 0x37a91cu: goto label_37a91c;
        case 0x37a920u: goto label_37a920;
        case 0x37a924u: goto label_37a924;
        case 0x37a928u: goto label_37a928;
        case 0x37a92cu: goto label_37a92c;
        case 0x37a930u: goto label_37a930;
        case 0x37a934u: goto label_37a934;
        case 0x37a938u: goto label_37a938;
        case 0x37a93cu: goto label_37a93c;
        case 0x37a940u: goto label_37a940;
        case 0x37a944u: goto label_37a944;
        case 0x37a948u: goto label_37a948;
        case 0x37a94cu: goto label_37a94c;
        case 0x37a950u: goto label_37a950;
        case 0x37a954u: goto label_37a954;
        case 0x37a958u: goto label_37a958;
        case 0x37a95cu: goto label_37a95c;
        case 0x37a960u: goto label_37a960;
        case 0x37a964u: goto label_37a964;
        case 0x37a968u: goto label_37a968;
        case 0x37a96cu: goto label_37a96c;
        case 0x37a970u: goto label_37a970;
        case 0x37a974u: goto label_37a974;
        case 0x37a978u: goto label_37a978;
        case 0x37a97cu: goto label_37a97c;
        case 0x37a980u: goto label_37a980;
        case 0x37a984u: goto label_37a984;
        case 0x37a988u: goto label_37a988;
        case 0x37a98cu: goto label_37a98c;
        case 0x37a990u: goto label_37a990;
        case 0x37a994u: goto label_37a994;
        case 0x37a998u: goto label_37a998;
        case 0x37a99cu: goto label_37a99c;
        case 0x37a9a0u: goto label_37a9a0;
        case 0x37a9a4u: goto label_37a9a4;
        case 0x37a9a8u: goto label_37a9a8;
        case 0x37a9acu: goto label_37a9ac;
        case 0x37a9b0u: goto label_37a9b0;
        case 0x37a9b4u: goto label_37a9b4;
        case 0x37a9b8u: goto label_37a9b8;
        case 0x37a9bcu: goto label_37a9bc;
        case 0x37a9c0u: goto label_37a9c0;
        case 0x37a9c4u: goto label_37a9c4;
        case 0x37a9c8u: goto label_37a9c8;
        case 0x37a9ccu: goto label_37a9cc;
        case 0x37a9d0u: goto label_37a9d0;
        case 0x37a9d4u: goto label_37a9d4;
        case 0x37a9d8u: goto label_37a9d8;
        case 0x37a9dcu: goto label_37a9dc;
        case 0x37a9e0u: goto label_37a9e0;
        case 0x37a9e4u: goto label_37a9e4;
        case 0x37a9e8u: goto label_37a9e8;
        case 0x37a9ecu: goto label_37a9ec;
        case 0x37a9f0u: goto label_37a9f0;
        case 0x37a9f4u: goto label_37a9f4;
        case 0x37a9f8u: goto label_37a9f8;
        case 0x37a9fcu: goto label_37a9fc;
        case 0x37aa00u: goto label_37aa00;
        case 0x37aa04u: goto label_37aa04;
        case 0x37aa08u: goto label_37aa08;
        case 0x37aa0cu: goto label_37aa0c;
        case 0x37aa10u: goto label_37aa10;
        case 0x37aa14u: goto label_37aa14;
        case 0x37aa18u: goto label_37aa18;
        case 0x37aa1cu: goto label_37aa1c;
        case 0x37aa20u: goto label_37aa20;
        case 0x37aa24u: goto label_37aa24;
        case 0x37aa28u: goto label_37aa28;
        case 0x37aa2cu: goto label_37aa2c;
        case 0x37aa30u: goto label_37aa30;
        case 0x37aa34u: goto label_37aa34;
        case 0x37aa38u: goto label_37aa38;
        case 0x37aa3cu: goto label_37aa3c;
        case 0x37aa40u: goto label_37aa40;
        case 0x37aa44u: goto label_37aa44;
        case 0x37aa48u: goto label_37aa48;
        case 0x37aa4cu: goto label_37aa4c;
        case 0x37aa50u: goto label_37aa50;
        case 0x37aa54u: goto label_37aa54;
        case 0x37aa58u: goto label_37aa58;
        case 0x37aa5cu: goto label_37aa5c;
        case 0x37aa60u: goto label_37aa60;
        case 0x37aa64u: goto label_37aa64;
        case 0x37aa68u: goto label_37aa68;
        case 0x37aa6cu: goto label_37aa6c;
        case 0x37aa70u: goto label_37aa70;
        case 0x37aa74u: goto label_37aa74;
        case 0x37aa78u: goto label_37aa78;
        case 0x37aa7cu: goto label_37aa7c;
        case 0x37aa80u: goto label_37aa80;
        case 0x37aa84u: goto label_37aa84;
        case 0x37aa88u: goto label_37aa88;
        case 0x37aa8cu: goto label_37aa8c;
        case 0x37aa90u: goto label_37aa90;
        case 0x37aa94u: goto label_37aa94;
        case 0x37aa98u: goto label_37aa98;
        case 0x37aa9cu: goto label_37aa9c;
        case 0x37aaa0u: goto label_37aaa0;
        case 0x37aaa4u: goto label_37aaa4;
        case 0x37aaa8u: goto label_37aaa8;
        case 0x37aaacu: goto label_37aaac;
        case 0x37aab0u: goto label_37aab0;
        case 0x37aab4u: goto label_37aab4;
        case 0x37aab8u: goto label_37aab8;
        case 0x37aabcu: goto label_37aabc;
        case 0x37aac0u: goto label_37aac0;
        case 0x37aac4u: goto label_37aac4;
        case 0x37aac8u: goto label_37aac8;
        case 0x37aaccu: goto label_37aacc;
        case 0x37aad0u: goto label_37aad0;
        case 0x37aad4u: goto label_37aad4;
        case 0x37aad8u: goto label_37aad8;
        case 0x37aadcu: goto label_37aadc;
        case 0x37aae0u: goto label_37aae0;
        case 0x37aae4u: goto label_37aae4;
        case 0x37aae8u: goto label_37aae8;
        case 0x37aaecu: goto label_37aaec;
        case 0x37aaf0u: goto label_37aaf0;
        case 0x37aaf4u: goto label_37aaf4;
        case 0x37aaf8u: goto label_37aaf8;
        case 0x37aafcu: goto label_37aafc;
        case 0x37ab00u: goto label_37ab00;
        case 0x37ab04u: goto label_37ab04;
        case 0x37ab08u: goto label_37ab08;
        case 0x37ab0cu: goto label_37ab0c;
        case 0x37ab10u: goto label_37ab10;
        case 0x37ab14u: goto label_37ab14;
        case 0x37ab18u: goto label_37ab18;
        case 0x37ab1cu: goto label_37ab1c;
        case 0x37ab20u: goto label_37ab20;
        case 0x37ab24u: goto label_37ab24;
        case 0x37ab28u: goto label_37ab28;
        case 0x37ab2cu: goto label_37ab2c;
        case 0x37ab30u: goto label_37ab30;
        case 0x37ab34u: goto label_37ab34;
        case 0x37ab38u: goto label_37ab38;
        case 0x37ab3cu: goto label_37ab3c;
        case 0x37ab40u: goto label_37ab40;
        case 0x37ab44u: goto label_37ab44;
        case 0x37ab48u: goto label_37ab48;
        case 0x37ab4cu: goto label_37ab4c;
        case 0x37ab50u: goto label_37ab50;
        case 0x37ab54u: goto label_37ab54;
        case 0x37ab58u: goto label_37ab58;
        case 0x37ab5cu: goto label_37ab5c;
        case 0x37ab60u: goto label_37ab60;
        case 0x37ab64u: goto label_37ab64;
        case 0x37ab68u: goto label_37ab68;
        case 0x37ab6cu: goto label_37ab6c;
        case 0x37ab70u: goto label_37ab70;
        case 0x37ab74u: goto label_37ab74;
        case 0x37ab78u: goto label_37ab78;
        case 0x37ab7cu: goto label_37ab7c;
        case 0x37ab80u: goto label_37ab80;
        case 0x37ab84u: goto label_37ab84;
        case 0x37ab88u: goto label_37ab88;
        case 0x37ab8cu: goto label_37ab8c;
        case 0x37ab90u: goto label_37ab90;
        case 0x37ab94u: goto label_37ab94;
        case 0x37ab98u: goto label_37ab98;
        case 0x37ab9cu: goto label_37ab9c;
        case 0x37aba0u: goto label_37aba0;
        case 0x37aba4u: goto label_37aba4;
        case 0x37aba8u: goto label_37aba8;
        case 0x37abacu: goto label_37abac;
        case 0x37abb0u: goto label_37abb0;
        case 0x37abb4u: goto label_37abb4;
        case 0x37abb8u: goto label_37abb8;
        case 0x37abbcu: goto label_37abbc;
        case 0x37abc0u: goto label_37abc0;
        case 0x37abc4u: goto label_37abc4;
        case 0x37abc8u: goto label_37abc8;
        case 0x37abccu: goto label_37abcc;
        case 0x37abd0u: goto label_37abd0;
        case 0x37abd4u: goto label_37abd4;
        case 0x37abd8u: goto label_37abd8;
        case 0x37abdcu: goto label_37abdc;
        case 0x37abe0u: goto label_37abe0;
        case 0x37abe4u: goto label_37abe4;
        case 0x37abe8u: goto label_37abe8;
        case 0x37abecu: goto label_37abec;
        case 0x37abf0u: goto label_37abf0;
        case 0x37abf4u: goto label_37abf4;
        case 0x37abf8u: goto label_37abf8;
        case 0x37abfcu: goto label_37abfc;
        case 0x37ac00u: goto label_37ac00;
        case 0x37ac04u: goto label_37ac04;
        case 0x37ac08u: goto label_37ac08;
        case 0x37ac0cu: goto label_37ac0c;
        case 0x37ac10u: goto label_37ac10;
        case 0x37ac14u: goto label_37ac14;
        case 0x37ac18u: goto label_37ac18;
        case 0x37ac1cu: goto label_37ac1c;
        case 0x37ac20u: goto label_37ac20;
        case 0x37ac24u: goto label_37ac24;
        case 0x37ac28u: goto label_37ac28;
        case 0x37ac2cu: goto label_37ac2c;
        case 0x37ac30u: goto label_37ac30;
        case 0x37ac34u: goto label_37ac34;
        case 0x37ac38u: goto label_37ac38;
        case 0x37ac3cu: goto label_37ac3c;
        case 0x37ac40u: goto label_37ac40;
        case 0x37ac44u: goto label_37ac44;
        case 0x37ac48u: goto label_37ac48;
        case 0x37ac4cu: goto label_37ac4c;
        case 0x37ac50u: goto label_37ac50;
        case 0x37ac54u: goto label_37ac54;
        case 0x37ac58u: goto label_37ac58;
        case 0x37ac5cu: goto label_37ac5c;
        case 0x37ac60u: goto label_37ac60;
        case 0x37ac64u: goto label_37ac64;
        case 0x37ac68u: goto label_37ac68;
        case 0x37ac6cu: goto label_37ac6c;
        case 0x37ac70u: goto label_37ac70;
        case 0x37ac74u: goto label_37ac74;
        case 0x37ac78u: goto label_37ac78;
        case 0x37ac7cu: goto label_37ac7c;
        case 0x37ac80u: goto label_37ac80;
        case 0x37ac84u: goto label_37ac84;
        case 0x37ac88u: goto label_37ac88;
        case 0x37ac8cu: goto label_37ac8c;
        case 0x37ac90u: goto label_37ac90;
        case 0x37ac94u: goto label_37ac94;
        case 0x37ac98u: goto label_37ac98;
        case 0x37ac9cu: goto label_37ac9c;
        case 0x37aca0u: goto label_37aca0;
        case 0x37aca4u: goto label_37aca4;
        case 0x37aca8u: goto label_37aca8;
        case 0x37acacu: goto label_37acac;
        case 0x37acb0u: goto label_37acb0;
        case 0x37acb4u: goto label_37acb4;
        case 0x37acb8u: goto label_37acb8;
        case 0x37acbcu: goto label_37acbc;
        case 0x37acc0u: goto label_37acc0;
        case 0x37acc4u: goto label_37acc4;
        case 0x37acc8u: goto label_37acc8;
        case 0x37acccu: goto label_37accc;
        case 0x37acd0u: goto label_37acd0;
        case 0x37acd4u: goto label_37acd4;
        case 0x37acd8u: goto label_37acd8;
        case 0x37acdcu: goto label_37acdc;
        case 0x37ace0u: goto label_37ace0;
        case 0x37ace4u: goto label_37ace4;
        case 0x37ace8u: goto label_37ace8;
        case 0x37acecu: goto label_37acec;
        case 0x37acf0u: goto label_37acf0;
        case 0x37acf4u: goto label_37acf4;
        case 0x37acf8u: goto label_37acf8;
        case 0x37acfcu: goto label_37acfc;
        case 0x37ad00u: goto label_37ad00;
        case 0x37ad04u: goto label_37ad04;
        case 0x37ad08u: goto label_37ad08;
        case 0x37ad0cu: goto label_37ad0c;
        default: break;
    }

    ctx->pc = 0x37a770u;

label_37a770:
    // 0x37a770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37a774:
    // 0x37a774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37a778:
    // 0x37a778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37a77c:
    // 0x37a77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a780:
    // 0x37a780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a784:
    // 0x37a784: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_37a788:
    if (ctx->pc == 0x37A788u) {
        ctx->pc = 0x37A788u;
            // 0x37a788: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A78Cu;
        goto label_37a78c;
    }
    ctx->pc = 0x37A784u;
    {
        const bool branch_taken_0x37a784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A784u;
            // 0x37a788: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a784) {
            ctx->pc = 0x37A8B8u;
            goto label_37a8b8;
        }
    }
    ctx->pc = 0x37A78Cu;
label_37a78c:
    // 0x37a78c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37a790:
    // 0x37a790: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a794:
    // 0x37a794: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x37a794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
label_37a798:
    // 0x37a798: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37a798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_37a79c:
    // 0x37a79c: 0x24427468  addiu       $v0, $v0, 0x7468
    ctx->pc = 0x37a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29800));
label_37a7a0:
    // 0x37a7a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37a7a4:
    // 0x37a7a4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x37a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_37a7a8:
    // 0x37a7a8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x37a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_37a7ac:
    // 0x37a7ac: 0xc0407c0  jal         func_101F00
label_37a7b0:
    if (ctx->pc == 0x37A7B0u) {
        ctx->pc = 0x37A7B0u;
            // 0x37a7b0: 0x24a5a8d0  addiu       $a1, $a1, -0x5730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944976));
        ctx->pc = 0x37A7B4u;
        goto label_37a7b4;
    }
    ctx->pc = 0x37A7ACu;
    SET_GPR_U32(ctx, 31, 0x37A7B4u);
    ctx->pc = 0x37A7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A7ACu;
            // 0x37a7b0: 0x24a5a8d0  addiu       $a1, $a1, -0x5730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A7B4u; }
        if (ctx->pc != 0x37A7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A7B4u; }
        if (ctx->pc != 0x37A7B4u) { return; }
    }
    ctx->pc = 0x37A7B4u;
label_37a7b4:
    // 0x37a7b4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x37a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_37a7b8:
    // 0x37a7b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_37a7bc:
    if (ctx->pc == 0x37A7BCu) {
        ctx->pc = 0x37A7BCu;
            // 0x37a7bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x37A7C0u;
        goto label_37a7c0;
    }
    ctx->pc = 0x37A7B8u;
    {
        const bool branch_taken_0x37a7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7b8) {
            ctx->pc = 0x37A7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A7B8u;
            // 0x37a7bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A7CCu;
            goto label_37a7cc;
        }
    }
    ctx->pc = 0x37A7C0u;
label_37a7c0:
    // 0x37a7c0: 0xc07507c  jal         func_1D41F0
label_37a7c4:
    if (ctx->pc == 0x37A7C4u) {
        ctx->pc = 0x37A7C4u;
            // 0x37a7c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x37A7C8u;
        goto label_37a7c8;
    }
    ctx->pc = 0x37A7C0u;
    SET_GPR_U32(ctx, 31, 0x37A7C8u);
    ctx->pc = 0x37A7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A7C0u;
            // 0x37a7c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A7C8u; }
        if (ctx->pc != 0x37A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A7C8u; }
        if (ctx->pc != 0x37A7C8u) { return; }
    }
    ctx->pc = 0x37A7C8u;
label_37a7c8:
    // 0x37a7c8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x37a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_37a7cc:
    // 0x37a7cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_37a7d0:
    if (ctx->pc == 0x37A7D0u) {
        ctx->pc = 0x37A7D0u;
            // 0x37a7d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x37A7D4u;
        goto label_37a7d4;
    }
    ctx->pc = 0x37A7CCu;
    {
        const bool branch_taken_0x37a7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7cc) {
            ctx->pc = 0x37A7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A7CCu;
            // 0x37a7d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A7FCu;
            goto label_37a7fc;
        }
    }
    ctx->pc = 0x37A7D4u;
label_37a7d4:
    // 0x37a7d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_37a7d8:
    if (ctx->pc == 0x37A7D8u) {
        ctx->pc = 0x37A7DCu;
        goto label_37a7dc;
    }
    ctx->pc = 0x37A7D4u;
    {
        const bool branch_taken_0x37a7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7d4) {
            ctx->pc = 0x37A7F8u;
            goto label_37a7f8;
        }
    }
    ctx->pc = 0x37A7DCu;
label_37a7dc:
    // 0x37a7dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_37a7e0:
    if (ctx->pc == 0x37A7E0u) {
        ctx->pc = 0x37A7E4u;
        goto label_37a7e4;
    }
    ctx->pc = 0x37A7DCu;
    {
        const bool branch_taken_0x37a7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7dc) {
            ctx->pc = 0x37A7F8u;
            goto label_37a7f8;
        }
    }
    ctx->pc = 0x37A7E4u;
label_37a7e4:
    // 0x37a7e4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x37a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_37a7e8:
    // 0x37a7e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_37a7ec:
    if (ctx->pc == 0x37A7ECu) {
        ctx->pc = 0x37A7F0u;
        goto label_37a7f0;
    }
    ctx->pc = 0x37A7E8u;
    {
        const bool branch_taken_0x37a7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7e8) {
            ctx->pc = 0x37A7F8u;
            goto label_37a7f8;
        }
    }
    ctx->pc = 0x37A7F0u;
label_37a7f0:
    // 0x37a7f0: 0xc0400a8  jal         func_1002A0
label_37a7f4:
    if (ctx->pc == 0x37A7F4u) {
        ctx->pc = 0x37A7F8u;
        goto label_37a7f8;
    }
    ctx->pc = 0x37A7F0u;
    SET_GPR_U32(ctx, 31, 0x37A7F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A7F8u; }
        if (ctx->pc != 0x37A7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A7F8u; }
        if (ctx->pc != 0x37A7F8u) { return; }
    }
    ctx->pc = 0x37A7F8u;
label_37a7f8:
    // 0x37a7f8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x37a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_37a7fc:
    // 0x37a7fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_37a800:
    if (ctx->pc == 0x37A800u) {
        ctx->pc = 0x37A800u;
            // 0x37a800: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x37A804u;
        goto label_37a804;
    }
    ctx->pc = 0x37A7FCu;
    {
        const bool branch_taken_0x37a7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7fc) {
            ctx->pc = 0x37A800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A7FCu;
            // 0x37a800: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A82Cu;
            goto label_37a82c;
        }
    }
    ctx->pc = 0x37A804u;
label_37a804:
    // 0x37a804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_37a808:
    if (ctx->pc == 0x37A808u) {
        ctx->pc = 0x37A80Cu;
        goto label_37a80c;
    }
    ctx->pc = 0x37A804u;
    {
        const bool branch_taken_0x37a804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a804) {
            ctx->pc = 0x37A828u;
            goto label_37a828;
        }
    }
    ctx->pc = 0x37A80Cu;
label_37a80c:
    // 0x37a80c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_37a810:
    if (ctx->pc == 0x37A810u) {
        ctx->pc = 0x37A814u;
        goto label_37a814;
    }
    ctx->pc = 0x37A80Cu;
    {
        const bool branch_taken_0x37a80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a80c) {
            ctx->pc = 0x37A828u;
            goto label_37a828;
        }
    }
    ctx->pc = 0x37A814u;
label_37a814:
    // 0x37a814: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x37a814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_37a818:
    // 0x37a818: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_37a81c:
    if (ctx->pc == 0x37A81Cu) {
        ctx->pc = 0x37A820u;
        goto label_37a820;
    }
    ctx->pc = 0x37A818u;
    {
        const bool branch_taken_0x37a818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a818) {
            ctx->pc = 0x37A828u;
            goto label_37a828;
        }
    }
    ctx->pc = 0x37A820u;
label_37a820:
    // 0x37a820: 0xc0400a8  jal         func_1002A0
label_37a824:
    if (ctx->pc == 0x37A824u) {
        ctx->pc = 0x37A828u;
        goto label_37a828;
    }
    ctx->pc = 0x37A820u;
    SET_GPR_U32(ctx, 31, 0x37A828u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A828u; }
        if (ctx->pc != 0x37A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A828u; }
        if (ctx->pc != 0x37A828u) { return; }
    }
    ctx->pc = 0x37A828u;
label_37a828:
    // 0x37a828: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x37a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_37a82c:
    // 0x37a82c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_37a830:
    if (ctx->pc == 0x37A830u) {
        ctx->pc = 0x37A834u;
        goto label_37a834;
    }
    ctx->pc = 0x37A82Cu;
    {
        const bool branch_taken_0x37a82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a82c) {
            ctx->pc = 0x37A848u;
            goto label_37a848;
        }
    }
    ctx->pc = 0x37A834u;
label_37a834:
    // 0x37a834: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37a834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37a838:
    // 0x37a838: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37a83c:
    // 0x37a83c: 0x24637420  addiu       $v1, $v1, 0x7420
    ctx->pc = 0x37a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29728));
label_37a840:
    // 0x37a840: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x37a840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_37a844:
    // 0x37a844: 0xac406098  sw          $zero, 0x6098($v0)
    ctx->pc = 0x37a844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24728), GPR_U32(ctx, 0));
label_37a848:
    // 0x37a848: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_37a84c:
    if (ctx->pc == 0x37A84Cu) {
        ctx->pc = 0x37A84Cu;
            // 0x37a84c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x37A850u;
        goto label_37a850;
    }
    ctx->pc = 0x37A848u;
    {
        const bool branch_taken_0x37a848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a848) {
            ctx->pc = 0x37A84Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A848u;
            // 0x37a84c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A8A4u;
            goto label_37a8a4;
        }
    }
    ctx->pc = 0x37A850u;
label_37a850:
    // 0x37a850: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a854:
    // 0x37a854: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x37a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_37a858:
    // 0x37a858: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x37a858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_37a85c:
    // 0x37a85c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x37a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_37a860:
    // 0x37a860: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37a864:
    if (ctx->pc == 0x37A864u) {
        ctx->pc = 0x37A864u;
            // 0x37a864: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x37A868u;
        goto label_37a868;
    }
    ctx->pc = 0x37A860u;
    {
        const bool branch_taken_0x37a860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a860) {
            ctx->pc = 0x37A864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A860u;
            // 0x37a864: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A87Cu;
            goto label_37a87c;
        }
    }
    ctx->pc = 0x37A868u;
label_37a868:
    // 0x37a868: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37a868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a86c:
    // 0x37a86c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37a86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37a870:
    // 0x37a870: 0x320f809  jalr        $t9
label_37a874:
    if (ctx->pc == 0x37A874u) {
        ctx->pc = 0x37A874u;
            // 0x37a874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37A878u;
        goto label_37a878;
    }
    ctx->pc = 0x37A870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A878u);
        ctx->pc = 0x37A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A870u;
            // 0x37a874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A878u; }
            if (ctx->pc != 0x37A878u) { return; }
        }
        }
    }
    ctx->pc = 0x37A878u;
label_37a878:
    // 0x37a878: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x37a878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_37a87c:
    // 0x37a87c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37a880:
    if (ctx->pc == 0x37A880u) {
        ctx->pc = 0x37A880u;
            // 0x37a880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A884u;
        goto label_37a884;
    }
    ctx->pc = 0x37A87Cu;
    {
        const bool branch_taken_0x37a87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a87c) {
            ctx->pc = 0x37A880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A87Cu;
            // 0x37a880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A898u;
            goto label_37a898;
        }
    }
    ctx->pc = 0x37A884u;
label_37a884:
    // 0x37a884: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37a884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a888:
    // 0x37a888: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37a888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37a88c:
    // 0x37a88c: 0x320f809  jalr        $t9
label_37a890:
    if (ctx->pc == 0x37A890u) {
        ctx->pc = 0x37A890u;
            // 0x37a890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37A894u;
        goto label_37a894;
    }
    ctx->pc = 0x37A88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A894u);
        ctx->pc = 0x37A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A88Cu;
            // 0x37a890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A894u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A894u; }
            if (ctx->pc != 0x37A894u) { return; }
        }
        }
    }
    ctx->pc = 0x37A894u;
label_37a894:
    // 0x37a894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a898:
    // 0x37a898: 0xc075bf8  jal         func_1D6FE0
label_37a89c:
    if (ctx->pc == 0x37A89Cu) {
        ctx->pc = 0x37A89Cu;
            // 0x37a89c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A8A0u;
        goto label_37a8a0;
    }
    ctx->pc = 0x37A898u;
    SET_GPR_U32(ctx, 31, 0x37A8A0u);
    ctx->pc = 0x37A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A898u;
            // 0x37a89c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A8A0u; }
        if (ctx->pc != 0x37A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A8A0u; }
        if (ctx->pc != 0x37A8A0u) { return; }
    }
    ctx->pc = 0x37A8A0u;
label_37a8a0:
    // 0x37a8a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37a8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_37a8a4:
    // 0x37a8a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37a8a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37a8a8:
    // 0x37a8a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37a8ac:
    if (ctx->pc == 0x37A8ACu) {
        ctx->pc = 0x37A8ACu;
            // 0x37a8ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A8B0u;
        goto label_37a8b0;
    }
    ctx->pc = 0x37A8A8u;
    {
        const bool branch_taken_0x37a8a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37a8a8) {
            ctx->pc = 0x37A8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A8A8u;
            // 0x37a8ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A8BCu;
            goto label_37a8bc;
        }
    }
    ctx->pc = 0x37A8B0u;
label_37a8b0:
    // 0x37a8b0: 0xc0400a8  jal         func_1002A0
label_37a8b4:
    if (ctx->pc == 0x37A8B4u) {
        ctx->pc = 0x37A8B4u;
            // 0x37a8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A8B8u;
        goto label_37a8b8;
    }
    ctx->pc = 0x37A8B0u;
    SET_GPR_U32(ctx, 31, 0x37A8B8u);
    ctx->pc = 0x37A8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A8B0u;
            // 0x37a8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A8B8u; }
        if (ctx->pc != 0x37A8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A8B8u; }
        if (ctx->pc != 0x37A8B8u) { return; }
    }
    ctx->pc = 0x37A8B8u;
label_37a8b8:
    // 0x37a8b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37a8b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a8bc:
    // 0x37a8bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37a8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37a8c0:
    // 0x37a8c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a8c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37a8c4:
    // 0x37a8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37a8c8:
    // 0x37a8c8: 0x3e00008  jr          $ra
label_37a8cc:
    if (ctx->pc == 0x37A8CCu) {
        ctx->pc = 0x37A8CCu;
            // 0x37a8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37A8D0u;
        goto label_37a8d0;
    }
    ctx->pc = 0x37A8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A8C8u;
            // 0x37a8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A8D0u;
label_37a8d0:
    // 0x37a8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37a8d4:
    // 0x37a8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37a8d8:
    // 0x37a8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37a8dc:
    // 0x37a8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37a8e0:
    // 0x37a8e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a8e4:
    // 0x37a8e4: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_37a8e8:
    if (ctx->pc == 0x37A8E8u) {
        ctx->pc = 0x37A8E8u;
            // 0x37a8e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A8ECu;
        goto label_37a8ec;
    }
    ctx->pc = 0x37A8E4u;
    {
        const bool branch_taken_0x37a8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A8E4u;
            // 0x37a8e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8e4) {
            ctx->pc = 0x37AA0Cu;
            goto label_37aa0c;
        }
    }
    ctx->pc = 0x37A8ECu;
label_37a8ec:
    // 0x37a8ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37a8f0:
    // 0x37a8f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a8f4:
    // 0x37a8f4: 0x24637380  addiu       $v1, $v1, 0x7380
    ctx->pc = 0x37a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29568));
label_37a8f8:
    // 0x37a8f8: 0x244273c0  addiu       $v0, $v0, 0x73C0
    ctx->pc = 0x37a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29632));
label_37a8fc:
    // 0x37a8fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37a900:
    // 0x37a900: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x37a900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_37a904:
    // 0x37a904: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37a904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37a908:
    // 0x37a908: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37a908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37a90c:
    // 0x37a90c: 0x320f809  jalr        $t9
label_37a910:
    if (ctx->pc == 0x37A910u) {
        ctx->pc = 0x37A914u;
        goto label_37a914;
    }
    ctx->pc = 0x37A90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A914u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A914u; }
            if (ctx->pc != 0x37A914u) { return; }
        }
        }
    }
    ctx->pc = 0x37A914u;
label_37a914:
    // 0x37a914: 0x262400e8  addiu       $a0, $s1, 0xE8
    ctx->pc = 0x37a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_37a918:
    // 0x37a918: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_37a91c:
    if (ctx->pc == 0x37A91Cu) {
        ctx->pc = 0x37A920u;
        goto label_37a920;
    }
    ctx->pc = 0x37A918u;
    {
        const bool branch_taken_0x37a918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a918) {
            ctx->pc = 0x37A974u;
            goto label_37a974;
        }
    }
    ctx->pc = 0x37A920u;
label_37a920:
    // 0x37a920: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a924:
    // 0x37a924: 0x244274d0  addiu       $v0, $v0, 0x74D0
    ctx->pc = 0x37a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29904));
label_37a928:
    // 0x37a928: 0xc0d37dc  jal         func_34DF70
label_37a92c:
    if (ctx->pc == 0x37A92Cu) {
        ctx->pc = 0x37A92Cu;
            // 0x37a92c: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x37A930u;
        goto label_37a930;
    }
    ctx->pc = 0x37A928u;
    SET_GPR_U32(ctx, 31, 0x37A930u);
    ctx->pc = 0x37A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A928u;
            // 0x37a92c: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A930u; }
        if (ctx->pc != 0x37A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A930u; }
        if (ctx->pc != 0x37A930u) { return; }
    }
    ctx->pc = 0x37A930u;
label_37a930:
    // 0x37a930: 0x262400e8  addiu       $a0, $s1, 0xE8
    ctx->pc = 0x37a930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_37a934:
    // 0x37a934: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_37a938:
    if (ctx->pc == 0x37A938u) {
        ctx->pc = 0x37A93Cu;
        goto label_37a93c;
    }
    ctx->pc = 0x37A934u;
    {
        const bool branch_taken_0x37a934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a934) {
            ctx->pc = 0x37A974u;
            goto label_37a974;
        }
    }
    ctx->pc = 0x37A93Cu;
label_37a93c:
    // 0x37a93c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a940:
    // 0x37a940: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x37a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_37a944:
    // 0x37a944: 0xc0d37dc  jal         func_34DF70
label_37a948:
    if (ctx->pc == 0x37A948u) {
        ctx->pc = 0x37A948u;
            // 0x37a948: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x37A94Cu;
        goto label_37a94c;
    }
    ctx->pc = 0x37A944u;
    SET_GPR_U32(ctx, 31, 0x37A94Cu);
    ctx->pc = 0x37A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A944u;
            // 0x37a948: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A94Cu; }
        if (ctx->pc != 0x37A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A94Cu; }
        if (ctx->pc != 0x37A94Cu) { return; }
    }
    ctx->pc = 0x37A94Cu;
label_37a94c:
    // 0x37a94c: 0x262300e8  addiu       $v1, $s1, 0xE8
    ctx->pc = 0x37a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_37a950:
    // 0x37a950: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_37a954:
    if (ctx->pc == 0x37A954u) {
        ctx->pc = 0x37A958u;
        goto label_37a958;
    }
    ctx->pc = 0x37A950u;
    {
        const bool branch_taken_0x37a950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a950) {
            ctx->pc = 0x37A974u;
            goto label_37a974;
        }
    }
    ctx->pc = 0x37A958u;
label_37a958:
    // 0x37a958: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a95c:
    // 0x37a95c: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x37a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_37a960:
    // 0x37a960: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_37a964:
    if (ctx->pc == 0x37A964u) {
        ctx->pc = 0x37A964u;
            // 0x37a964: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x37A968u;
        goto label_37a968;
    }
    ctx->pc = 0x37A960u;
    {
        const bool branch_taken_0x37a960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A960u;
            // 0x37a964: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a960) {
            ctx->pc = 0x37A974u;
            goto label_37a974;
        }
    }
    ctx->pc = 0x37A968u;
label_37a968:
    // 0x37a968: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a96c:
    // 0x37a96c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x37a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_37a970:
    // 0x37a970: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x37a970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_37a974:
    // 0x37a974: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_37a978:
    if (ctx->pc == 0x37A978u) {
        ctx->pc = 0x37A978u;
            // 0x37a978: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x37A97Cu;
        goto label_37a97c;
    }
    ctx->pc = 0x37A974u;
    {
        const bool branch_taken_0x37a974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a974) {
            ctx->pc = 0x37A978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A974u;
            // 0x37a978: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A9F8u;
            goto label_37a9f8;
        }
    }
    ctx->pc = 0x37A97Cu;
label_37a97c:
    // 0x37a97c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37a980:
    // 0x37a980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37a984:
    // 0x37a984: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x37a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_37a988:
    // 0x37a988: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x37a988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_37a98c:
    // 0x37a98c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37a990:
    // 0x37a990: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x37a990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_37a994:
    // 0x37a994: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x37a994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_37a998:
    // 0x37a998: 0xc0aecc4  jal         func_2BB310
label_37a99c:
    if (ctx->pc == 0x37A99Cu) {
        ctx->pc = 0x37A99Cu;
            // 0x37a99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37A9A0u;
        goto label_37a9a0;
    }
    ctx->pc = 0x37A998u;
    SET_GPR_U32(ctx, 31, 0x37A9A0u);
    ctx->pc = 0x37A99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A998u;
            // 0x37a99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9A0u; }
        if (ctx->pc != 0x37A9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9A0u; }
        if (ctx->pc != 0x37A9A0u) { return; }
    }
    ctx->pc = 0x37A9A0u;
label_37a9a0:
    // 0x37a9a0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x37a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_37a9a4:
    // 0x37a9a4: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x37a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_37a9a8:
    // 0x37a9a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37a9ac:
    if (ctx->pc == 0x37A9ACu) {
        ctx->pc = 0x37A9ACu;
            // 0x37a9ac: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x37A9B0u;
        goto label_37a9b0;
    }
    ctx->pc = 0x37A9A8u;
    {
        const bool branch_taken_0x37a9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a9a8) {
            ctx->pc = 0x37A9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A9A8u;
            // 0x37a9ac: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37A9C4u;
            goto label_37a9c4;
        }
    }
    ctx->pc = 0x37A9B0u;
label_37a9b0:
    // 0x37a9b0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x37a9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_37a9b4:
    // 0x37a9b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37a9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37a9b8:
    // 0x37a9b8: 0x320f809  jalr        $t9
label_37a9bc:
    if (ctx->pc == 0x37A9BCu) {
        ctx->pc = 0x37A9BCu;
            // 0x37a9bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37A9C0u;
        goto label_37a9c0;
    }
    ctx->pc = 0x37A9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37A9C0u);
        ctx->pc = 0x37A9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A9B8u;
            // 0x37a9bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37A9C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37A9C0u; }
            if (ctx->pc != 0x37A9C0u) { return; }
        }
        }
    }
    ctx->pc = 0x37A9C0u;
label_37a9c0:
    // 0x37a9c0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x37a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_37a9c4:
    // 0x37a9c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37a9c8:
    // 0x37a9c8: 0xc0aec9c  jal         func_2BB270
label_37a9cc:
    if (ctx->pc == 0x37A9CCu) {
        ctx->pc = 0x37A9CCu;
            // 0x37a9cc: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x37A9D0u;
        goto label_37a9d0;
    }
    ctx->pc = 0x37A9C8u;
    SET_GPR_U32(ctx, 31, 0x37A9D0u);
    ctx->pc = 0x37A9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A9C8u;
            // 0x37a9cc: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9D0u; }
        if (ctx->pc != 0x37A9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9D0u; }
        if (ctx->pc != 0x37A9D0u) { return; }
    }
    ctx->pc = 0x37A9D0u;
label_37a9d0:
    // 0x37a9d0: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x37a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_37a9d4:
    // 0x37a9d4: 0xc0aec88  jal         func_2BB220
label_37a9d8:
    if (ctx->pc == 0x37A9D8u) {
        ctx->pc = 0x37A9D8u;
            // 0x37a9d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x37A9DCu;
        goto label_37a9dc;
    }
    ctx->pc = 0x37A9D4u;
    SET_GPR_U32(ctx, 31, 0x37A9DCu);
    ctx->pc = 0x37A9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A9D4u;
            // 0x37a9d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9DCu; }
        if (ctx->pc != 0x37A9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9DCu; }
        if (ctx->pc != 0x37A9DCu) { return; }
    }
    ctx->pc = 0x37A9DCu;
label_37a9dc:
    // 0x37a9dc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x37a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_37a9e0:
    // 0x37a9e0: 0xc0aec0c  jal         func_2BB030
label_37a9e4:
    if (ctx->pc == 0x37A9E4u) {
        ctx->pc = 0x37A9E4u;
            // 0x37a9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A9E8u;
        goto label_37a9e8;
    }
    ctx->pc = 0x37A9E0u;
    SET_GPR_U32(ctx, 31, 0x37A9E8u);
    ctx->pc = 0x37A9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A9E0u;
            // 0x37a9e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9E8u; }
        if (ctx->pc != 0x37A9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9E8u; }
        if (ctx->pc != 0x37A9E8u) { return; }
    }
    ctx->pc = 0x37A9E8u;
label_37a9e8:
    // 0x37a9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a9ec:
    // 0x37a9ec: 0xc0aeaa8  jal         func_2BAAA0
label_37a9f0:
    if (ctx->pc == 0x37A9F0u) {
        ctx->pc = 0x37A9F0u;
            // 0x37a9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37A9F4u;
        goto label_37a9f4;
    }
    ctx->pc = 0x37A9ECu;
    SET_GPR_U32(ctx, 31, 0x37A9F4u);
    ctx->pc = 0x37A9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A9ECu;
            // 0x37a9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9F4u; }
        if (ctx->pc != 0x37A9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A9F4u; }
        if (ctx->pc != 0x37A9F4u) { return; }
    }
    ctx->pc = 0x37A9F4u;
label_37a9f4:
    // 0x37a9f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_37a9f8:
    // 0x37a9f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37a9f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37a9fc:
    // 0x37a9fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37aa00:
    if (ctx->pc == 0x37AA00u) {
        ctx->pc = 0x37AA00u;
            // 0x37aa00: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AA04u;
        goto label_37aa04;
    }
    ctx->pc = 0x37A9FCu;
    {
        const bool branch_taken_0x37a9fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37a9fc) {
            ctx->pc = 0x37AA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37A9FCu;
            // 0x37aa00: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AA10u;
            goto label_37aa10;
        }
    }
    ctx->pc = 0x37AA04u;
label_37aa04:
    // 0x37aa04: 0xc0400a8  jal         func_1002A0
label_37aa08:
    if (ctx->pc == 0x37AA08u) {
        ctx->pc = 0x37AA08u;
            // 0x37aa08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AA0Cu;
        goto label_37aa0c;
    }
    ctx->pc = 0x37AA04u;
    SET_GPR_U32(ctx, 31, 0x37AA0Cu);
    ctx->pc = 0x37AA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AA04u;
            // 0x37aa08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AA0Cu; }
        if (ctx->pc != 0x37AA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AA0Cu; }
        if (ctx->pc != 0x37AA0Cu) { return; }
    }
    ctx->pc = 0x37AA0Cu;
label_37aa0c:
    // 0x37aa0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37aa0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37aa10:
    // 0x37aa10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37aa14:
    // 0x37aa14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37aa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37aa18:
    // 0x37aa18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37aa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37aa1c:
    // 0x37aa1c: 0x3e00008  jr          $ra
label_37aa20:
    if (ctx->pc == 0x37AA20u) {
        ctx->pc = 0x37AA20u;
            // 0x37aa20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37AA24u;
        goto label_37aa24;
    }
    ctx->pc = 0x37AA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AA1Cu;
            // 0x37aa20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37AA24u;
label_37aa24:
    // 0x37aa24: 0x0  nop
    ctx->pc = 0x37aa24u;
    // NOP
label_37aa28:
    // 0x37aa28: 0x0  nop
    ctx->pc = 0x37aa28u;
    // NOP
label_37aa2c:
    // 0x37aa2c: 0x0  nop
    ctx->pc = 0x37aa2cu;
    // NOP
label_37aa30:
    // 0x37aa30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37aa34:
    // 0x37aa34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37aa38:
    // 0x37aa38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37aa3c:
    // 0x37aa3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37aa40:
    // 0x37aa40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37aa40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37aa44:
    // 0x37aa44: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_37aa48:
    if (ctx->pc == 0x37AA48u) {
        ctx->pc = 0x37AA48u;
            // 0x37aa48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AA4Cu;
        goto label_37aa4c;
    }
    ctx->pc = 0x37AA44u;
    {
        const bool branch_taken_0x37aa44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AA44u;
            // 0x37aa48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa44) {
            ctx->pc = 0x37AAB4u;
            goto label_37aab4;
        }
    }
    ctx->pc = 0x37AA4Cu;
label_37aa4c:
    // 0x37aa4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37aa50:
    // 0x37aa50: 0x244274d0  addiu       $v0, $v0, 0x74D0
    ctx->pc = 0x37aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29904));
label_37aa54:
    // 0x37aa54: 0xc0d37dc  jal         func_34DF70
label_37aa58:
    if (ctx->pc == 0x37AA58u) {
        ctx->pc = 0x37AA58u;
            // 0x37aa58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x37AA5Cu;
        goto label_37aa5c;
    }
    ctx->pc = 0x37AA54u;
    SET_GPR_U32(ctx, 31, 0x37AA5Cu);
    ctx->pc = 0x37AA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AA54u;
            // 0x37aa58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AA5Cu; }
        if (ctx->pc != 0x37AA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AA5Cu; }
        if (ctx->pc != 0x37AA5Cu) { return; }
    }
    ctx->pc = 0x37AA5Cu;
label_37aa5c:
    // 0x37aa5c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_37aa60:
    if (ctx->pc == 0x37AA60u) {
        ctx->pc = 0x37AA60u;
            // 0x37aa60: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x37AA64u;
        goto label_37aa64;
    }
    ctx->pc = 0x37AA5Cu;
    {
        const bool branch_taken_0x37aa5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aa5c) {
            ctx->pc = 0x37AA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37AA5Cu;
            // 0x37aa60: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AAA0u;
            goto label_37aaa0;
        }
    }
    ctx->pc = 0x37AA64u;
label_37aa64:
    // 0x37aa64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37aa68:
    // 0x37aa68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37aa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37aa6c:
    // 0x37aa6c: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x37aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_37aa70:
    // 0x37aa70: 0xc0d37dc  jal         func_34DF70
label_37aa74:
    if (ctx->pc == 0x37AA74u) {
        ctx->pc = 0x37AA74u;
            // 0x37aa74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x37AA78u;
        goto label_37aa78;
    }
    ctx->pc = 0x37AA70u;
    SET_GPR_U32(ctx, 31, 0x37AA78u);
    ctx->pc = 0x37AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AA70u;
            // 0x37aa74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AA78u; }
        if (ctx->pc != 0x37AA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AA78u; }
        if (ctx->pc != 0x37AA78u) { return; }
    }
    ctx->pc = 0x37AA78u;
label_37aa78:
    // 0x37aa78: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_37aa7c:
    if (ctx->pc == 0x37AA7Cu) {
        ctx->pc = 0x37AA80u;
        goto label_37aa80;
    }
    ctx->pc = 0x37AA78u;
    {
        const bool branch_taken_0x37aa78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aa78) {
            ctx->pc = 0x37AA9Cu;
            goto label_37aa9c;
        }
    }
    ctx->pc = 0x37AA80u;
label_37aa80:
    // 0x37aa80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37aa84:
    // 0x37aa84: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x37aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_37aa88:
    // 0x37aa88: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_37aa8c:
    if (ctx->pc == 0x37AA8Cu) {
        ctx->pc = 0x37AA8Cu;
            // 0x37aa8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x37AA90u;
        goto label_37aa90;
    }
    ctx->pc = 0x37AA88u;
    {
        const bool branch_taken_0x37aa88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AA88u;
            // 0x37aa8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa88) {
            ctx->pc = 0x37AA9Cu;
            goto label_37aa9c;
        }
    }
    ctx->pc = 0x37AA90u;
label_37aa90:
    // 0x37aa90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37aa94:
    // 0x37aa94: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x37aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_37aa98:
    // 0x37aa98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_37aa9c:
    // 0x37aa9c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x37aa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_37aaa0:
    // 0x37aaa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37aaa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37aaa4:
    // 0x37aaa4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37aaa8:
    if (ctx->pc == 0x37AAA8u) {
        ctx->pc = 0x37AAA8u;
            // 0x37aaa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AAACu;
        goto label_37aaac;
    }
    ctx->pc = 0x37AAA4u;
    {
        const bool branch_taken_0x37aaa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37aaa4) {
            ctx->pc = 0x37AAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37AAA4u;
            // 0x37aaa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37AAB8u;
            goto label_37aab8;
        }
    }
    ctx->pc = 0x37AAACu;
label_37aaac:
    // 0x37aaac: 0xc0400a8  jal         func_1002A0
label_37aab0:
    if (ctx->pc == 0x37AAB0u) {
        ctx->pc = 0x37AAB0u;
            // 0x37aab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AAB4u;
        goto label_37aab4;
    }
    ctx->pc = 0x37AAACu;
    SET_GPR_U32(ctx, 31, 0x37AAB4u);
    ctx->pc = 0x37AAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AAACu;
            // 0x37aab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AAB4u; }
        if (ctx->pc != 0x37AAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AAB4u; }
        if (ctx->pc != 0x37AAB4u) { return; }
    }
    ctx->pc = 0x37AAB4u;
label_37aab4:
    // 0x37aab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37aab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37aab8:
    // 0x37aab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37aab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37aabc:
    // 0x37aabc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37aabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37aac0:
    // 0x37aac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37aac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37aac4:
    // 0x37aac4: 0x3e00008  jr          $ra
label_37aac8:
    if (ctx->pc == 0x37AAC8u) {
        ctx->pc = 0x37AAC8u;
            // 0x37aac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37AACCu;
        goto label_37aacc;
    }
    ctx->pc = 0x37AAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AAC4u;
            // 0x37aac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37AACCu;
label_37aacc:
    // 0x37aacc: 0x0  nop
    ctx->pc = 0x37aaccu;
    // NOP
label_37aad0:
    // 0x37aad0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x37aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_37aad4:
    // 0x37aad4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37aad8:
    // 0x37aad8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x37aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_37aadc:
    // 0x37aadc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x37aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_37aae0:
    // 0x37aae0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x37aae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_37aae4:
    // 0x37aae4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x37aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_37aae8:
    // 0x37aae8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x37aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_37aaec:
    // 0x37aaec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_37aaf0:
    // 0x37aaf0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37aaf4:
    // 0x37aaf4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37aaf8:
    // 0x37aaf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37aafc:
    // 0x37aafc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37ab00:
    // 0x37ab00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37ab00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37ab04:
    // 0x37ab04: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x37ab04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_37ab08:
    // 0x37ab08: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_37ab0c:
    if (ctx->pc == 0x37AB0Cu) {
        ctx->pc = 0x37AB0Cu;
            // 0x37ab0c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AB10u;
        goto label_37ab10;
    }
    ctx->pc = 0x37AB08u;
    {
        const bool branch_taken_0x37ab08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37AB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AB08u;
            // 0x37ab0c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab08) {
            ctx->pc = 0x37AB58u;
            goto label_37ab58;
        }
    }
    ctx->pc = 0x37AB10u;
label_37ab10:
    // 0x37ab10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37ab14:
    // 0x37ab14: 0x10a3006e  beq         $a1, $v1, . + 4 + (0x6E << 2)
label_37ab18:
    if (ctx->pc == 0x37AB18u) {
        ctx->pc = 0x37AB1Cu;
        goto label_37ab1c;
    }
    ctx->pc = 0x37AB14u;
    {
        const bool branch_taken_0x37ab14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37ab14) {
            ctx->pc = 0x37ACD0u;
            goto label_37acd0;
        }
    }
    ctx->pc = 0x37AB1Cu;
label_37ab1c:
    // 0x37ab1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37ab20:
    // 0x37ab20: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_37ab24:
    if (ctx->pc == 0x37AB24u) {
        ctx->pc = 0x37AB28u;
        goto label_37ab28;
    }
    ctx->pc = 0x37AB20u;
    {
        const bool branch_taken_0x37ab20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37ab20) {
            ctx->pc = 0x37AB30u;
            goto label_37ab30;
        }
    }
    ctx->pc = 0x37AB28u;
label_37ab28:
    // 0x37ab28: 0x10000069  b           . + 4 + (0x69 << 2)
label_37ab2c:
    if (ctx->pc == 0x37AB2Cu) {
        ctx->pc = 0x37AB30u;
        goto label_37ab30;
    }
    ctx->pc = 0x37AB28u;
    {
        const bool branch_taken_0x37ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ab28) {
            ctx->pc = 0x37ACD0u;
            goto label_37acd0;
        }
    }
    ctx->pc = 0x37AB30u;
label_37ab30:
    // 0x37ab30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ab34:
    // 0x37ab34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37ab34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37ab38:
    // 0x37ab38: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x37ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_37ab3c:
    // 0x37ab3c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x37ab3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_37ab40:
    // 0x37ab40: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x37ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_37ab44:
    // 0x37ab44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37ab44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_37ab48:
    // 0x37ab48: 0x320f809  jalr        $t9
label_37ab4c:
    if (ctx->pc == 0x37AB4Cu) {
        ctx->pc = 0x37AB4Cu;
            // 0x37ab4c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x37AB50u;
        goto label_37ab50;
    }
    ctx->pc = 0x37AB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37AB50u);
        ctx->pc = 0x37AB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AB48u;
            // 0x37ab4c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37AB50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37AB50u; }
            if (ctx->pc != 0x37AB50u) { return; }
        }
        }
    }
    ctx->pc = 0x37AB50u;
label_37ab50:
    // 0x37ab50: 0x1000005f  b           . + 4 + (0x5F << 2)
label_37ab54:
    if (ctx->pc == 0x37AB54u) {
        ctx->pc = 0x37AB58u;
        goto label_37ab58;
    }
    ctx->pc = 0x37AB50u;
    {
        const bool branch_taken_0x37ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ab50) {
            ctx->pc = 0x37ACD0u;
            goto label_37acd0;
        }
    }
    ctx->pc = 0x37AB58u;
label_37ab58:
    // 0x37ab58: 0x8ee30070  lw          $v1, 0x70($s7)
    ctx->pc = 0x37ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_37ab5c:
    // 0x37ab5c: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_37ab60:
    if (ctx->pc == 0x37AB60u) {
        ctx->pc = 0x37AB60u;
            // 0x37ab60: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x37AB64u;
        goto label_37ab64;
    }
    ctx->pc = 0x37AB5Cu;
    {
        const bool branch_taken_0x37ab5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AB5Cu;
            // 0x37ab60: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab5c) {
            ctx->pc = 0x37ACD0u;
            goto label_37acd0;
        }
    }
    ctx->pc = 0x37AB64u;
label_37ab64:
    // 0x37ab64: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x37ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_37ab68:
    // 0x37ab68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37ab6c:
    // 0x37ab6c: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x37ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_37ab70:
    // 0x37ab70: 0x26f00084  addiu       $s0, $s7, 0x84
    ctx->pc = 0x37ab70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 132));
label_37ab74:
    // 0x37ab74: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x37ab74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_37ab78:
    // 0x37ab78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37ab78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ab7c:
    // 0x37ab7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x37ab7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ab80:
    // 0x37ab80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37ab84:
    // 0x37ab84: 0x8c9e0130  lw          $fp, 0x130($a0)
    ctx->pc = 0x37ab84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_37ab88:
    // 0x37ab88: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x37ab88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_37ab8c:
    // 0x37ab8c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x37ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_37ab90:
    // 0x37ab90: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x37ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_37ab94:
    // 0x37ab94: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37ab98:
    // 0x37ab98: 0xc4545338  lwc1        $f20, 0x5338($v0)
    ctx->pc = 0x37ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37ab9c:
    // 0x37ab9c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x37ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_37aba0:
    // 0x37aba0: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x37aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_37aba4:
    // 0x37aba4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37aba8:
    // 0x37aba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37abac:
    // 0x37abac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x37abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_37abb0:
    // 0x37abb0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x37abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_37abb4:
    // 0x37abb4: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x37abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_37abb8:
    // 0x37abb8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x37abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_37abbc:
    // 0x37abbc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x37abbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37abc0:
    // 0x37abc0: 0xc0deb54  jal         func_37AD50
label_37abc4:
    if (ctx->pc == 0x37ABC4u) {
        ctx->pc = 0x37ABC4u;
            // 0x37abc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37ABC8u;
        goto label_37abc8;
    }
    ctx->pc = 0x37ABC0u;
    SET_GPR_U32(ctx, 31, 0x37ABC8u);
    ctx->pc = 0x37ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ABC0u;
            // 0x37abc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37AD50u;
    if (runtime->hasFunction(0x37AD50u)) {
        auto targetFn = runtime->lookupFunction(0x37AD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABC8u; }
        if (ctx->pc != 0x37ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037AD50_0x37ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABC8u; }
        if (ctx->pc != 0x37ABC8u) { return; }
    }
    ctx->pc = 0x37ABC8u;
label_37abc8:
    // 0x37abc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37abcc:
    // 0x37abcc: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
label_37abd0:
    if (ctx->pc == 0x37ABD0u) {
        ctx->pc = 0x37ABD4u;
        goto label_37abd4;
    }
    ctx->pc = 0x37ABCCu;
    {
        const bool branch_taken_0x37abcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37abcc) {
            ctx->pc = 0x37ACB8u;
            goto label_37acb8;
        }
    }
    ctx->pc = 0x37ABD4u;
label_37abd4:
    // 0x37abd4: 0xc0d1c14  jal         func_347050
label_37abd8:
    if (ctx->pc == 0x37ABD8u) {
        ctx->pc = 0x37ABD8u;
            // 0x37abd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37ABDCu;
        goto label_37abdc;
    }
    ctx->pc = 0x37ABD4u;
    SET_GPR_U32(ctx, 31, 0x37ABDCu);
    ctx->pc = 0x37ABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ABD4u;
            // 0x37abd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABDCu; }
        if (ctx->pc != 0x37ABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABDCu; }
        if (ctx->pc != 0x37ABDCu) { return; }
    }
    ctx->pc = 0x37ABDCu;
label_37abdc:
    // 0x37abdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37abe0:
    // 0x37abe0: 0xc04f278  jal         func_13C9E0
label_37abe4:
    if (ctx->pc == 0x37ABE4u) {
        ctx->pc = 0x37ABE4u;
            // 0x37abe4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x37ABE8u;
        goto label_37abe8;
    }
    ctx->pc = 0x37ABE0u;
    SET_GPR_U32(ctx, 31, 0x37ABE8u);
    ctx->pc = 0x37ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ABE0u;
            // 0x37abe4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABE8u; }
        if (ctx->pc != 0x37ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABE8u; }
        if (ctx->pc != 0x37ABE8u) { return; }
    }
    ctx->pc = 0x37ABE8u;
label_37abe8:
    // 0x37abe8: 0xc0d1c10  jal         func_347040
label_37abec:
    if (ctx->pc == 0x37ABECu) {
        ctx->pc = 0x37ABECu;
            // 0x37abec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37ABF0u;
        goto label_37abf0;
    }
    ctx->pc = 0x37ABE8u;
    SET_GPR_U32(ctx, 31, 0x37ABF0u);
    ctx->pc = 0x37ABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ABE8u;
            // 0x37abec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABF0u; }
        if (ctx->pc != 0x37ABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABF0u; }
        if (ctx->pc != 0x37ABF0u) { return; }
    }
    ctx->pc = 0x37ABF0u;
label_37abf0:
    // 0x37abf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37abf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37abf4:
    // 0x37abf4: 0xc04ce80  jal         func_133A00
label_37abf8:
    if (ctx->pc == 0x37ABF8u) {
        ctx->pc = 0x37ABF8u;
            // 0x37abf8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x37ABFCu;
        goto label_37abfc;
    }
    ctx->pc = 0x37ABF4u;
    SET_GPR_U32(ctx, 31, 0x37ABFCu);
    ctx->pc = 0x37ABF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ABF4u;
            // 0x37abf8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABFCu; }
        if (ctx->pc != 0x37ABFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ABFCu; }
        if (ctx->pc != 0x37ABFCu) { return; }
    }
    ctx->pc = 0x37ABFCu;
label_37abfc:
    // 0x37abfc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x37abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ac00:
    // 0x37ac00: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x37ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_37ac04:
    // 0x37ac04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ac04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ac08:
    // 0x37ac08: 0x0  nop
    ctx->pc = 0x37ac08u;
    // NOP
label_37ac0c:
    // 0x37ac0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37ac0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37ac10:
    // 0x37ac10: 0xc0d4108  jal         func_350420
label_37ac14:
    if (ctx->pc == 0x37AC14u) {
        ctx->pc = 0x37AC14u;
            // 0x37ac14: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x37AC18u;
        goto label_37ac18;
    }
    ctx->pc = 0x37AC10u;
    SET_GPR_U32(ctx, 31, 0x37AC18u);
    ctx->pc = 0x37AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC10u;
            // 0x37ac14: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC18u; }
        if (ctx->pc != 0x37AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC18u; }
        if (ctx->pc != 0x37AC18u) { return; }
    }
    ctx->pc = 0x37AC18u;
label_37ac18:
    // 0x37ac18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37ac18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ac1c:
    // 0x37ac1c: 0xc0d4104  jal         func_350410
label_37ac20:
    if (ctx->pc == 0x37AC20u) {
        ctx->pc = 0x37AC20u;
            // 0x37ac20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AC24u;
        goto label_37ac24;
    }
    ctx->pc = 0x37AC1Cu;
    SET_GPR_U32(ctx, 31, 0x37AC24u);
    ctx->pc = 0x37AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC1Cu;
            // 0x37ac20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC24u; }
        if (ctx->pc != 0x37AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC24u; }
        if (ctx->pc != 0x37AC24u) { return; }
    }
    ctx->pc = 0x37AC24u;
label_37ac24:
    // 0x37ac24: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x37ac24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37ac28:
    // 0x37ac28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ac2c:
    // 0x37ac2c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x37ac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_37ac30:
    // 0x37ac30: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x37ac30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_37ac34:
    // 0x37ac34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37ac34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ac38:
    // 0x37ac38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37ac38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ac3c:
    // 0x37ac3c: 0xc0d40ac  jal         func_3502B0
label_37ac40:
    if (ctx->pc == 0x37AC40u) {
        ctx->pc = 0x37AC40u;
            // 0x37ac40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37AC44u;
        goto label_37ac44;
    }
    ctx->pc = 0x37AC3Cu;
    SET_GPR_U32(ctx, 31, 0x37AC44u);
    ctx->pc = 0x37AC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC3Cu;
            // 0x37ac40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC44u; }
        if (ctx->pc != 0x37AC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC44u; }
        if (ctx->pc != 0x37AC44u) { return; }
    }
    ctx->pc = 0x37AC44u;
label_37ac44:
    // 0x37ac44: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x37ac44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_37ac48:
    // 0x37ac48: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_37ac4c:
    if (ctx->pc == 0x37AC4Cu) {
        ctx->pc = 0x37AC4Cu;
            // 0x37ac4c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x37AC50u;
        goto label_37ac50;
    }
    ctx->pc = 0x37AC48u;
    {
        const bool branch_taken_0x37ac48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC48u;
            // 0x37ac4c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac48) {
            ctx->pc = 0x37ACB8u;
            goto label_37acb8;
        }
    }
    ctx->pc = 0x37AC50u;
label_37ac50:
    // 0x37ac50: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x37ac50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37ac54:
    // 0x37ac54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37ac58:
    // 0x37ac58: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x37ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_37ac5c:
    // 0x37ac5c: 0xc04e4a4  jal         func_139290
label_37ac60:
    if (ctx->pc == 0x37AC60u) {
        ctx->pc = 0x37AC60u;
            // 0x37ac60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AC64u;
        goto label_37ac64;
    }
    ctx->pc = 0x37AC5Cu;
    SET_GPR_U32(ctx, 31, 0x37AC64u);
    ctx->pc = 0x37AC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC5Cu;
            // 0x37ac60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC64u; }
        if (ctx->pc != 0x37AC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC64u; }
        if (ctx->pc != 0x37AC64u) { return; }
    }
    ctx->pc = 0x37AC64u;
label_37ac64:
    // 0x37ac64: 0xc04e738  jal         func_139CE0
label_37ac68:
    if (ctx->pc == 0x37AC68u) {
        ctx->pc = 0x37AC68u;
            // 0x37ac68: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x37AC6Cu;
        goto label_37ac6c;
    }
    ctx->pc = 0x37AC64u;
    SET_GPR_U32(ctx, 31, 0x37AC6Cu);
    ctx->pc = 0x37AC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC64u;
            // 0x37ac68: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC6Cu; }
        if (ctx->pc != 0x37AC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC6Cu; }
        if (ctx->pc != 0x37AC6Cu) { return; }
    }
    ctx->pc = 0x37AC6Cu;
label_37ac6c:
    // 0x37ac6c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x37ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_37ac70:
    // 0x37ac70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37ac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37ac74:
    // 0x37ac74: 0xc04cd60  jal         func_133580
label_37ac78:
    if (ctx->pc == 0x37AC78u) {
        ctx->pc = 0x37AC78u;
            // 0x37ac78: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x37AC7Cu;
        goto label_37ac7c;
    }
    ctx->pc = 0x37AC74u;
    SET_GPR_U32(ctx, 31, 0x37AC7Cu);
    ctx->pc = 0x37AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC74u;
            // 0x37ac78: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC7Cu; }
        if (ctx->pc != 0x37AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37AC7Cu; }
        if (ctx->pc != 0x37AC7Cu) { return; }
    }
    ctx->pc = 0x37AC7Cu;
label_37ac7c:
    // 0x37ac7c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x37ac7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37ac80:
    // 0x37ac80: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x37ac80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_37ac84:
    // 0x37ac84: 0x320f809  jalr        $t9
label_37ac88:
    if (ctx->pc == 0x37AC88u) {
        ctx->pc = 0x37AC88u;
            // 0x37ac88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37AC8Cu;
        goto label_37ac8c;
    }
    ctx->pc = 0x37AC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37AC8Cu);
        ctx->pc = 0x37AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC84u;
            // 0x37ac88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37AC8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37AC8Cu; }
            if (ctx->pc != 0x37AC8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37AC8Cu;
label_37ac8c:
    // 0x37ac8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37ac8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ac90:
    // 0x37ac90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37ac94:
    // 0x37ac94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37ac94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ac98:
    // 0x37ac98: 0xc054fd4  jal         func_153F50
label_37ac9c:
    if (ctx->pc == 0x37AC9Cu) {
        ctx->pc = 0x37AC9Cu;
            // 0x37ac9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37ACA0u;
        goto label_37aca0;
    }
    ctx->pc = 0x37AC98u;
    SET_GPR_U32(ctx, 31, 0x37ACA0u);
    ctx->pc = 0x37AC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37AC98u;
            // 0x37ac9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ACA0u; }
        if (ctx->pc != 0x37ACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ACA0u; }
        if (ctx->pc != 0x37ACA0u) { return; }
    }
    ctx->pc = 0x37ACA0u;
label_37aca0:
    // 0x37aca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37aca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37aca4:
    // 0x37aca4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37aca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37aca8:
    // 0x37aca8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x37aca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37acac:
    // 0x37acac: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x37acacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_37acb0:
    // 0x37acb0: 0xc0deb44  jal         func_37AD10
label_37acb4:
    if (ctx->pc == 0x37ACB4u) {
        ctx->pc = 0x37ACB4u;
            // 0x37acb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37ACB8u;
        goto label_37acb8;
    }
    ctx->pc = 0x37ACB0u;
    SET_GPR_U32(ctx, 31, 0x37ACB8u);
    ctx->pc = 0x37ACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ACB0u;
            // 0x37acb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37AD10u;
    if (runtime->hasFunction(0x37AD10u)) {
        auto targetFn = runtime->lookupFunction(0x37AD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ACB8u; }
        if (ctx->pc != 0x37ACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037AD10_0x37ad10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ACB8u; }
        if (ctx->pc != 0x37ACB8u) { return; }
    }
    ctx->pc = 0x37ACB8u;
label_37acb8:
    // 0x37acb8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x37acb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_37acbc:
    // 0x37acbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37acbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37acc0:
    // 0x37acc0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x37acc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37acc4:
    // 0x37acc4: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
label_37acc8:
    if (ctx->pc == 0x37ACC8u) {
        ctx->pc = 0x37ACC8u;
            // 0x37acc8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x37ACCCu;
        goto label_37accc;
    }
    ctx->pc = 0x37ACC4u;
    {
        const bool branch_taken_0x37acc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37ACC4u;
            // 0x37acc8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37acc4) {
            ctx->pc = 0x37ABB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37abb4;
        }
    }
    ctx->pc = 0x37ACCCu;
label_37accc:
    // 0x37accc: 0x0  nop
    ctx->pc = 0x37acccu;
    // NOP
label_37acd0:
    // 0x37acd0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x37acd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_37acd4:
    // 0x37acd4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x37acd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37acd8:
    // 0x37acd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37acd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37acdc:
    // 0x37acdc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x37acdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37ace0:
    // 0x37ace0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x37ace0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37ace4:
    // 0x37ace4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x37ace4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37ace8:
    // 0x37ace8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37ace8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37acec:
    // 0x37acec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37acecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37acf0:
    // 0x37acf0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37acf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37acf4:
    // 0x37acf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37acf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37acf8:
    // 0x37acf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37acf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37acfc:
    // 0x37acfc: 0x3e00008  jr          $ra
label_37ad00:
    if (ctx->pc == 0x37AD00u) {
        ctx->pc = 0x37AD00u;
            // 0x37ad00: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x37AD04u;
        goto label_37ad04;
    }
    ctx->pc = 0x37ACFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37ACFCu;
            // 0x37ad00: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37AD04u;
label_37ad04:
    // 0x37ad04: 0x0  nop
    ctx->pc = 0x37ad04u;
    // NOP
label_37ad08:
    // 0x37ad08: 0x0  nop
    ctx->pc = 0x37ad08u;
    // NOP
label_37ad0c:
    // 0x37ad0c: 0x0  nop
    ctx->pc = 0x37ad0cu;
    // NOP
}
