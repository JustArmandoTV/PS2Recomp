#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041B7F0
// Address: 0x41b7f0 - 0x41bdb0
void sub_0041B7F0_0x41b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B7F0_0x41b7f0");
#endif

    switch (ctx->pc) {
        case 0x41b7f0u: goto label_41b7f0;
        case 0x41b7f4u: goto label_41b7f4;
        case 0x41b7f8u: goto label_41b7f8;
        case 0x41b7fcu: goto label_41b7fc;
        case 0x41b800u: goto label_41b800;
        case 0x41b804u: goto label_41b804;
        case 0x41b808u: goto label_41b808;
        case 0x41b80cu: goto label_41b80c;
        case 0x41b810u: goto label_41b810;
        case 0x41b814u: goto label_41b814;
        case 0x41b818u: goto label_41b818;
        case 0x41b81cu: goto label_41b81c;
        case 0x41b820u: goto label_41b820;
        case 0x41b824u: goto label_41b824;
        case 0x41b828u: goto label_41b828;
        case 0x41b82cu: goto label_41b82c;
        case 0x41b830u: goto label_41b830;
        case 0x41b834u: goto label_41b834;
        case 0x41b838u: goto label_41b838;
        case 0x41b83cu: goto label_41b83c;
        case 0x41b840u: goto label_41b840;
        case 0x41b844u: goto label_41b844;
        case 0x41b848u: goto label_41b848;
        case 0x41b84cu: goto label_41b84c;
        case 0x41b850u: goto label_41b850;
        case 0x41b854u: goto label_41b854;
        case 0x41b858u: goto label_41b858;
        case 0x41b85cu: goto label_41b85c;
        case 0x41b860u: goto label_41b860;
        case 0x41b864u: goto label_41b864;
        case 0x41b868u: goto label_41b868;
        case 0x41b86cu: goto label_41b86c;
        case 0x41b870u: goto label_41b870;
        case 0x41b874u: goto label_41b874;
        case 0x41b878u: goto label_41b878;
        case 0x41b87cu: goto label_41b87c;
        case 0x41b880u: goto label_41b880;
        case 0x41b884u: goto label_41b884;
        case 0x41b888u: goto label_41b888;
        case 0x41b88cu: goto label_41b88c;
        case 0x41b890u: goto label_41b890;
        case 0x41b894u: goto label_41b894;
        case 0x41b898u: goto label_41b898;
        case 0x41b89cu: goto label_41b89c;
        case 0x41b8a0u: goto label_41b8a0;
        case 0x41b8a4u: goto label_41b8a4;
        case 0x41b8a8u: goto label_41b8a8;
        case 0x41b8acu: goto label_41b8ac;
        case 0x41b8b0u: goto label_41b8b0;
        case 0x41b8b4u: goto label_41b8b4;
        case 0x41b8b8u: goto label_41b8b8;
        case 0x41b8bcu: goto label_41b8bc;
        case 0x41b8c0u: goto label_41b8c0;
        case 0x41b8c4u: goto label_41b8c4;
        case 0x41b8c8u: goto label_41b8c8;
        case 0x41b8ccu: goto label_41b8cc;
        case 0x41b8d0u: goto label_41b8d0;
        case 0x41b8d4u: goto label_41b8d4;
        case 0x41b8d8u: goto label_41b8d8;
        case 0x41b8dcu: goto label_41b8dc;
        case 0x41b8e0u: goto label_41b8e0;
        case 0x41b8e4u: goto label_41b8e4;
        case 0x41b8e8u: goto label_41b8e8;
        case 0x41b8ecu: goto label_41b8ec;
        case 0x41b8f0u: goto label_41b8f0;
        case 0x41b8f4u: goto label_41b8f4;
        case 0x41b8f8u: goto label_41b8f8;
        case 0x41b8fcu: goto label_41b8fc;
        case 0x41b900u: goto label_41b900;
        case 0x41b904u: goto label_41b904;
        case 0x41b908u: goto label_41b908;
        case 0x41b90cu: goto label_41b90c;
        case 0x41b910u: goto label_41b910;
        case 0x41b914u: goto label_41b914;
        case 0x41b918u: goto label_41b918;
        case 0x41b91cu: goto label_41b91c;
        case 0x41b920u: goto label_41b920;
        case 0x41b924u: goto label_41b924;
        case 0x41b928u: goto label_41b928;
        case 0x41b92cu: goto label_41b92c;
        case 0x41b930u: goto label_41b930;
        case 0x41b934u: goto label_41b934;
        case 0x41b938u: goto label_41b938;
        case 0x41b93cu: goto label_41b93c;
        case 0x41b940u: goto label_41b940;
        case 0x41b944u: goto label_41b944;
        case 0x41b948u: goto label_41b948;
        case 0x41b94cu: goto label_41b94c;
        case 0x41b950u: goto label_41b950;
        case 0x41b954u: goto label_41b954;
        case 0x41b958u: goto label_41b958;
        case 0x41b95cu: goto label_41b95c;
        case 0x41b960u: goto label_41b960;
        case 0x41b964u: goto label_41b964;
        case 0x41b968u: goto label_41b968;
        case 0x41b96cu: goto label_41b96c;
        case 0x41b970u: goto label_41b970;
        case 0x41b974u: goto label_41b974;
        case 0x41b978u: goto label_41b978;
        case 0x41b97cu: goto label_41b97c;
        case 0x41b980u: goto label_41b980;
        case 0x41b984u: goto label_41b984;
        case 0x41b988u: goto label_41b988;
        case 0x41b98cu: goto label_41b98c;
        case 0x41b990u: goto label_41b990;
        case 0x41b994u: goto label_41b994;
        case 0x41b998u: goto label_41b998;
        case 0x41b99cu: goto label_41b99c;
        case 0x41b9a0u: goto label_41b9a0;
        case 0x41b9a4u: goto label_41b9a4;
        case 0x41b9a8u: goto label_41b9a8;
        case 0x41b9acu: goto label_41b9ac;
        case 0x41b9b0u: goto label_41b9b0;
        case 0x41b9b4u: goto label_41b9b4;
        case 0x41b9b8u: goto label_41b9b8;
        case 0x41b9bcu: goto label_41b9bc;
        case 0x41b9c0u: goto label_41b9c0;
        case 0x41b9c4u: goto label_41b9c4;
        case 0x41b9c8u: goto label_41b9c8;
        case 0x41b9ccu: goto label_41b9cc;
        case 0x41b9d0u: goto label_41b9d0;
        case 0x41b9d4u: goto label_41b9d4;
        case 0x41b9d8u: goto label_41b9d8;
        case 0x41b9dcu: goto label_41b9dc;
        case 0x41b9e0u: goto label_41b9e0;
        case 0x41b9e4u: goto label_41b9e4;
        case 0x41b9e8u: goto label_41b9e8;
        case 0x41b9ecu: goto label_41b9ec;
        case 0x41b9f0u: goto label_41b9f0;
        case 0x41b9f4u: goto label_41b9f4;
        case 0x41b9f8u: goto label_41b9f8;
        case 0x41b9fcu: goto label_41b9fc;
        case 0x41ba00u: goto label_41ba00;
        case 0x41ba04u: goto label_41ba04;
        case 0x41ba08u: goto label_41ba08;
        case 0x41ba0cu: goto label_41ba0c;
        case 0x41ba10u: goto label_41ba10;
        case 0x41ba14u: goto label_41ba14;
        case 0x41ba18u: goto label_41ba18;
        case 0x41ba1cu: goto label_41ba1c;
        case 0x41ba20u: goto label_41ba20;
        case 0x41ba24u: goto label_41ba24;
        case 0x41ba28u: goto label_41ba28;
        case 0x41ba2cu: goto label_41ba2c;
        case 0x41ba30u: goto label_41ba30;
        case 0x41ba34u: goto label_41ba34;
        case 0x41ba38u: goto label_41ba38;
        case 0x41ba3cu: goto label_41ba3c;
        case 0x41ba40u: goto label_41ba40;
        case 0x41ba44u: goto label_41ba44;
        case 0x41ba48u: goto label_41ba48;
        case 0x41ba4cu: goto label_41ba4c;
        case 0x41ba50u: goto label_41ba50;
        case 0x41ba54u: goto label_41ba54;
        case 0x41ba58u: goto label_41ba58;
        case 0x41ba5cu: goto label_41ba5c;
        case 0x41ba60u: goto label_41ba60;
        case 0x41ba64u: goto label_41ba64;
        case 0x41ba68u: goto label_41ba68;
        case 0x41ba6cu: goto label_41ba6c;
        case 0x41ba70u: goto label_41ba70;
        case 0x41ba74u: goto label_41ba74;
        case 0x41ba78u: goto label_41ba78;
        case 0x41ba7cu: goto label_41ba7c;
        case 0x41ba80u: goto label_41ba80;
        case 0x41ba84u: goto label_41ba84;
        case 0x41ba88u: goto label_41ba88;
        case 0x41ba8cu: goto label_41ba8c;
        case 0x41ba90u: goto label_41ba90;
        case 0x41ba94u: goto label_41ba94;
        case 0x41ba98u: goto label_41ba98;
        case 0x41ba9cu: goto label_41ba9c;
        case 0x41baa0u: goto label_41baa0;
        case 0x41baa4u: goto label_41baa4;
        case 0x41baa8u: goto label_41baa8;
        case 0x41baacu: goto label_41baac;
        case 0x41bab0u: goto label_41bab0;
        case 0x41bab4u: goto label_41bab4;
        case 0x41bab8u: goto label_41bab8;
        case 0x41babcu: goto label_41babc;
        case 0x41bac0u: goto label_41bac0;
        case 0x41bac4u: goto label_41bac4;
        case 0x41bac8u: goto label_41bac8;
        case 0x41baccu: goto label_41bacc;
        case 0x41bad0u: goto label_41bad0;
        case 0x41bad4u: goto label_41bad4;
        case 0x41bad8u: goto label_41bad8;
        case 0x41badcu: goto label_41badc;
        case 0x41bae0u: goto label_41bae0;
        case 0x41bae4u: goto label_41bae4;
        case 0x41bae8u: goto label_41bae8;
        case 0x41baecu: goto label_41baec;
        case 0x41baf0u: goto label_41baf0;
        case 0x41baf4u: goto label_41baf4;
        case 0x41baf8u: goto label_41baf8;
        case 0x41bafcu: goto label_41bafc;
        case 0x41bb00u: goto label_41bb00;
        case 0x41bb04u: goto label_41bb04;
        case 0x41bb08u: goto label_41bb08;
        case 0x41bb0cu: goto label_41bb0c;
        case 0x41bb10u: goto label_41bb10;
        case 0x41bb14u: goto label_41bb14;
        case 0x41bb18u: goto label_41bb18;
        case 0x41bb1cu: goto label_41bb1c;
        case 0x41bb20u: goto label_41bb20;
        case 0x41bb24u: goto label_41bb24;
        case 0x41bb28u: goto label_41bb28;
        case 0x41bb2cu: goto label_41bb2c;
        case 0x41bb30u: goto label_41bb30;
        case 0x41bb34u: goto label_41bb34;
        case 0x41bb38u: goto label_41bb38;
        case 0x41bb3cu: goto label_41bb3c;
        case 0x41bb40u: goto label_41bb40;
        case 0x41bb44u: goto label_41bb44;
        case 0x41bb48u: goto label_41bb48;
        case 0x41bb4cu: goto label_41bb4c;
        case 0x41bb50u: goto label_41bb50;
        case 0x41bb54u: goto label_41bb54;
        case 0x41bb58u: goto label_41bb58;
        case 0x41bb5cu: goto label_41bb5c;
        case 0x41bb60u: goto label_41bb60;
        case 0x41bb64u: goto label_41bb64;
        case 0x41bb68u: goto label_41bb68;
        case 0x41bb6cu: goto label_41bb6c;
        case 0x41bb70u: goto label_41bb70;
        case 0x41bb74u: goto label_41bb74;
        case 0x41bb78u: goto label_41bb78;
        case 0x41bb7cu: goto label_41bb7c;
        case 0x41bb80u: goto label_41bb80;
        case 0x41bb84u: goto label_41bb84;
        case 0x41bb88u: goto label_41bb88;
        case 0x41bb8cu: goto label_41bb8c;
        case 0x41bb90u: goto label_41bb90;
        case 0x41bb94u: goto label_41bb94;
        case 0x41bb98u: goto label_41bb98;
        case 0x41bb9cu: goto label_41bb9c;
        case 0x41bba0u: goto label_41bba0;
        case 0x41bba4u: goto label_41bba4;
        case 0x41bba8u: goto label_41bba8;
        case 0x41bbacu: goto label_41bbac;
        case 0x41bbb0u: goto label_41bbb0;
        case 0x41bbb4u: goto label_41bbb4;
        case 0x41bbb8u: goto label_41bbb8;
        case 0x41bbbcu: goto label_41bbbc;
        case 0x41bbc0u: goto label_41bbc0;
        case 0x41bbc4u: goto label_41bbc4;
        case 0x41bbc8u: goto label_41bbc8;
        case 0x41bbccu: goto label_41bbcc;
        case 0x41bbd0u: goto label_41bbd0;
        case 0x41bbd4u: goto label_41bbd4;
        case 0x41bbd8u: goto label_41bbd8;
        case 0x41bbdcu: goto label_41bbdc;
        case 0x41bbe0u: goto label_41bbe0;
        case 0x41bbe4u: goto label_41bbe4;
        case 0x41bbe8u: goto label_41bbe8;
        case 0x41bbecu: goto label_41bbec;
        case 0x41bbf0u: goto label_41bbf0;
        case 0x41bbf4u: goto label_41bbf4;
        case 0x41bbf8u: goto label_41bbf8;
        case 0x41bbfcu: goto label_41bbfc;
        case 0x41bc00u: goto label_41bc00;
        case 0x41bc04u: goto label_41bc04;
        case 0x41bc08u: goto label_41bc08;
        case 0x41bc0cu: goto label_41bc0c;
        case 0x41bc10u: goto label_41bc10;
        case 0x41bc14u: goto label_41bc14;
        case 0x41bc18u: goto label_41bc18;
        case 0x41bc1cu: goto label_41bc1c;
        case 0x41bc20u: goto label_41bc20;
        case 0x41bc24u: goto label_41bc24;
        case 0x41bc28u: goto label_41bc28;
        case 0x41bc2cu: goto label_41bc2c;
        case 0x41bc30u: goto label_41bc30;
        case 0x41bc34u: goto label_41bc34;
        case 0x41bc38u: goto label_41bc38;
        case 0x41bc3cu: goto label_41bc3c;
        case 0x41bc40u: goto label_41bc40;
        case 0x41bc44u: goto label_41bc44;
        case 0x41bc48u: goto label_41bc48;
        case 0x41bc4cu: goto label_41bc4c;
        case 0x41bc50u: goto label_41bc50;
        case 0x41bc54u: goto label_41bc54;
        case 0x41bc58u: goto label_41bc58;
        case 0x41bc5cu: goto label_41bc5c;
        case 0x41bc60u: goto label_41bc60;
        case 0x41bc64u: goto label_41bc64;
        case 0x41bc68u: goto label_41bc68;
        case 0x41bc6cu: goto label_41bc6c;
        case 0x41bc70u: goto label_41bc70;
        case 0x41bc74u: goto label_41bc74;
        case 0x41bc78u: goto label_41bc78;
        case 0x41bc7cu: goto label_41bc7c;
        case 0x41bc80u: goto label_41bc80;
        case 0x41bc84u: goto label_41bc84;
        case 0x41bc88u: goto label_41bc88;
        case 0x41bc8cu: goto label_41bc8c;
        case 0x41bc90u: goto label_41bc90;
        case 0x41bc94u: goto label_41bc94;
        case 0x41bc98u: goto label_41bc98;
        case 0x41bc9cu: goto label_41bc9c;
        case 0x41bca0u: goto label_41bca0;
        case 0x41bca4u: goto label_41bca4;
        case 0x41bca8u: goto label_41bca8;
        case 0x41bcacu: goto label_41bcac;
        case 0x41bcb0u: goto label_41bcb0;
        case 0x41bcb4u: goto label_41bcb4;
        case 0x41bcb8u: goto label_41bcb8;
        case 0x41bcbcu: goto label_41bcbc;
        case 0x41bcc0u: goto label_41bcc0;
        case 0x41bcc4u: goto label_41bcc4;
        case 0x41bcc8u: goto label_41bcc8;
        case 0x41bcccu: goto label_41bccc;
        case 0x41bcd0u: goto label_41bcd0;
        case 0x41bcd4u: goto label_41bcd4;
        case 0x41bcd8u: goto label_41bcd8;
        case 0x41bcdcu: goto label_41bcdc;
        case 0x41bce0u: goto label_41bce0;
        case 0x41bce4u: goto label_41bce4;
        case 0x41bce8u: goto label_41bce8;
        case 0x41bcecu: goto label_41bcec;
        case 0x41bcf0u: goto label_41bcf0;
        case 0x41bcf4u: goto label_41bcf4;
        case 0x41bcf8u: goto label_41bcf8;
        case 0x41bcfcu: goto label_41bcfc;
        case 0x41bd00u: goto label_41bd00;
        case 0x41bd04u: goto label_41bd04;
        case 0x41bd08u: goto label_41bd08;
        case 0x41bd0cu: goto label_41bd0c;
        case 0x41bd10u: goto label_41bd10;
        case 0x41bd14u: goto label_41bd14;
        case 0x41bd18u: goto label_41bd18;
        case 0x41bd1cu: goto label_41bd1c;
        case 0x41bd20u: goto label_41bd20;
        case 0x41bd24u: goto label_41bd24;
        case 0x41bd28u: goto label_41bd28;
        case 0x41bd2cu: goto label_41bd2c;
        case 0x41bd30u: goto label_41bd30;
        case 0x41bd34u: goto label_41bd34;
        case 0x41bd38u: goto label_41bd38;
        case 0x41bd3cu: goto label_41bd3c;
        case 0x41bd40u: goto label_41bd40;
        case 0x41bd44u: goto label_41bd44;
        case 0x41bd48u: goto label_41bd48;
        case 0x41bd4cu: goto label_41bd4c;
        case 0x41bd50u: goto label_41bd50;
        case 0x41bd54u: goto label_41bd54;
        case 0x41bd58u: goto label_41bd58;
        case 0x41bd5cu: goto label_41bd5c;
        case 0x41bd60u: goto label_41bd60;
        case 0x41bd64u: goto label_41bd64;
        case 0x41bd68u: goto label_41bd68;
        case 0x41bd6cu: goto label_41bd6c;
        case 0x41bd70u: goto label_41bd70;
        case 0x41bd74u: goto label_41bd74;
        case 0x41bd78u: goto label_41bd78;
        case 0x41bd7cu: goto label_41bd7c;
        case 0x41bd80u: goto label_41bd80;
        case 0x41bd84u: goto label_41bd84;
        case 0x41bd88u: goto label_41bd88;
        case 0x41bd8cu: goto label_41bd8c;
        case 0x41bd90u: goto label_41bd90;
        case 0x41bd94u: goto label_41bd94;
        case 0x41bd98u: goto label_41bd98;
        case 0x41bd9cu: goto label_41bd9c;
        case 0x41bda0u: goto label_41bda0;
        case 0x41bda4u: goto label_41bda4;
        case 0x41bda8u: goto label_41bda8;
        case 0x41bdacu: goto label_41bdac;
        default: break;
    }

    ctx->pc = 0x41b7f0u;

label_41b7f0:
    // 0x41b7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41b7f4:
    // 0x41b7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41b7f8:
    // 0x41b7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41b7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41b7fc:
    // 0x41b7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b800:
    // 0x41b800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b804:
    // 0x41b804: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_41b808:
    if (ctx->pc == 0x41B808u) {
        ctx->pc = 0x41B808u;
            // 0x41b808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B80Cu;
        goto label_41b80c;
    }
    ctx->pc = 0x41B804u;
    {
        const bool branch_taken_0x41b804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B804u;
            // 0x41b808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b804) {
            ctx->pc = 0x41B938u;
            goto label_41b938;
        }
    }
    ctx->pc = 0x41B80Cu;
label_41b80c:
    // 0x41b80c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41b810:
    // 0x41b810: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41b814:
    // 0x41b814: 0x2463b850  addiu       $v1, $v1, -0x47B0
    ctx->pc = 0x41b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948944));
label_41b818:
    // 0x41b818: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41b818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_41b81c:
    // 0x41b81c: 0x2442b888  addiu       $v0, $v0, -0x4778
    ctx->pc = 0x41b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949000));
label_41b820:
    // 0x41b820: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41b820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41b824:
    // 0x41b824: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x41b824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_41b828:
    // 0x41b828: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x41b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_41b82c:
    // 0x41b82c: 0xc0407c0  jal         func_101F00
label_41b830:
    if (ctx->pc == 0x41B830u) {
        ctx->pc = 0x41B830u;
            // 0x41b830: 0x24a5b950  addiu       $a1, $a1, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
        ctx->pc = 0x41B834u;
        goto label_41b834;
    }
    ctx->pc = 0x41B82Cu;
    SET_GPR_U32(ctx, 31, 0x41B834u);
    ctx->pc = 0x41B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B82Cu;
            // 0x41b830: 0x24a5b950  addiu       $a1, $a1, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B834u; }
        if (ctx->pc != 0x41B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B834u; }
        if (ctx->pc != 0x41B834u) { return; }
    }
    ctx->pc = 0x41B834u;
label_41b834:
    // 0x41b834: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x41b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_41b838:
    // 0x41b838: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_41b83c:
    if (ctx->pc == 0x41B83Cu) {
        ctx->pc = 0x41B83Cu;
            // 0x41b83c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x41B840u;
        goto label_41b840;
    }
    ctx->pc = 0x41B838u;
    {
        const bool branch_taken_0x41b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b838) {
            ctx->pc = 0x41B83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B838u;
            // 0x41b83c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B84Cu;
            goto label_41b84c;
        }
    }
    ctx->pc = 0x41B840u;
label_41b840:
    // 0x41b840: 0xc07507c  jal         func_1D41F0
label_41b844:
    if (ctx->pc == 0x41B844u) {
        ctx->pc = 0x41B844u;
            // 0x41b844: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x41B848u;
        goto label_41b848;
    }
    ctx->pc = 0x41B840u;
    SET_GPR_U32(ctx, 31, 0x41B848u);
    ctx->pc = 0x41B844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B840u;
            // 0x41b844: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B848u; }
        if (ctx->pc != 0x41B848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B848u; }
        if (ctx->pc != 0x41B848u) { return; }
    }
    ctx->pc = 0x41B848u;
label_41b848:
    // 0x41b848: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x41b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_41b84c:
    // 0x41b84c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_41b850:
    if (ctx->pc == 0x41B850u) {
        ctx->pc = 0x41B850u;
            // 0x41b850: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x41B854u;
        goto label_41b854;
    }
    ctx->pc = 0x41B84Cu;
    {
        const bool branch_taken_0x41b84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b84c) {
            ctx->pc = 0x41B850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B84Cu;
            // 0x41b850: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B87Cu;
            goto label_41b87c;
        }
    }
    ctx->pc = 0x41B854u;
label_41b854:
    // 0x41b854: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41b858:
    if (ctx->pc == 0x41B858u) {
        ctx->pc = 0x41B85Cu;
        goto label_41b85c;
    }
    ctx->pc = 0x41B854u;
    {
        const bool branch_taken_0x41b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b854) {
            ctx->pc = 0x41B878u;
            goto label_41b878;
        }
    }
    ctx->pc = 0x41B85Cu;
label_41b85c:
    // 0x41b85c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41b860:
    if (ctx->pc == 0x41B860u) {
        ctx->pc = 0x41B864u;
        goto label_41b864;
    }
    ctx->pc = 0x41B85Cu;
    {
        const bool branch_taken_0x41b85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b85c) {
            ctx->pc = 0x41B878u;
            goto label_41b878;
        }
    }
    ctx->pc = 0x41B864u;
label_41b864:
    // 0x41b864: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x41b864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_41b868:
    // 0x41b868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41b86c:
    if (ctx->pc == 0x41B86Cu) {
        ctx->pc = 0x41B870u;
        goto label_41b870;
    }
    ctx->pc = 0x41B868u;
    {
        const bool branch_taken_0x41b868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b868) {
            ctx->pc = 0x41B878u;
            goto label_41b878;
        }
    }
    ctx->pc = 0x41B870u;
label_41b870:
    // 0x41b870: 0xc0400a8  jal         func_1002A0
label_41b874:
    if (ctx->pc == 0x41B874u) {
        ctx->pc = 0x41B878u;
        goto label_41b878;
    }
    ctx->pc = 0x41B870u;
    SET_GPR_U32(ctx, 31, 0x41B878u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B878u; }
        if (ctx->pc != 0x41B878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B878u; }
        if (ctx->pc != 0x41B878u) { return; }
    }
    ctx->pc = 0x41B878u;
label_41b878:
    // 0x41b878: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x41b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_41b87c:
    // 0x41b87c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_41b880:
    if (ctx->pc == 0x41B880u) {
        ctx->pc = 0x41B880u;
            // 0x41b880: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x41B884u;
        goto label_41b884;
    }
    ctx->pc = 0x41B87Cu;
    {
        const bool branch_taken_0x41b87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b87c) {
            ctx->pc = 0x41B880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B87Cu;
            // 0x41b880: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B8ACu;
            goto label_41b8ac;
        }
    }
    ctx->pc = 0x41B884u;
label_41b884:
    // 0x41b884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41b888:
    if (ctx->pc == 0x41B888u) {
        ctx->pc = 0x41B88Cu;
        goto label_41b88c;
    }
    ctx->pc = 0x41B884u;
    {
        const bool branch_taken_0x41b884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b884) {
            ctx->pc = 0x41B8A8u;
            goto label_41b8a8;
        }
    }
    ctx->pc = 0x41B88Cu;
label_41b88c:
    // 0x41b88c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41b890:
    if (ctx->pc == 0x41B890u) {
        ctx->pc = 0x41B894u;
        goto label_41b894;
    }
    ctx->pc = 0x41B88Cu;
    {
        const bool branch_taken_0x41b88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b88c) {
            ctx->pc = 0x41B8A8u;
            goto label_41b8a8;
        }
    }
    ctx->pc = 0x41B894u;
label_41b894:
    // 0x41b894: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x41b894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_41b898:
    // 0x41b898: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41b89c:
    if (ctx->pc == 0x41B89Cu) {
        ctx->pc = 0x41B8A0u;
        goto label_41b8a0;
    }
    ctx->pc = 0x41B898u;
    {
        const bool branch_taken_0x41b898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b898) {
            ctx->pc = 0x41B8A8u;
            goto label_41b8a8;
        }
    }
    ctx->pc = 0x41B8A0u;
label_41b8a0:
    // 0x41b8a0: 0xc0400a8  jal         func_1002A0
label_41b8a4:
    if (ctx->pc == 0x41B8A4u) {
        ctx->pc = 0x41B8A8u;
        goto label_41b8a8;
    }
    ctx->pc = 0x41B8A0u;
    SET_GPR_U32(ctx, 31, 0x41B8A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B8A8u; }
        if (ctx->pc != 0x41B8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B8A8u; }
        if (ctx->pc != 0x41B8A8u) { return; }
    }
    ctx->pc = 0x41B8A8u;
label_41b8a8:
    // 0x41b8a8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x41b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_41b8ac:
    // 0x41b8ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41b8b0:
    if (ctx->pc == 0x41B8B0u) {
        ctx->pc = 0x41B8B4u;
        goto label_41b8b4;
    }
    ctx->pc = 0x41B8ACu;
    {
        const bool branch_taken_0x41b8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b8ac) {
            ctx->pc = 0x41B8C8u;
            goto label_41b8c8;
        }
    }
    ctx->pc = 0x41B8B4u;
label_41b8b4:
    // 0x41b8b4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41b8b8:
    // 0x41b8b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41b8bc:
    // 0x41b8bc: 0x2463b838  addiu       $v1, $v1, -0x47C8
    ctx->pc = 0x41b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948920));
label_41b8c0:
    // 0x41b8c0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x41b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_41b8c4:
    // 0x41b8c4: 0xac407330  sw          $zero, 0x7330($v0)
    ctx->pc = 0x41b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29488), GPR_U32(ctx, 0));
label_41b8c8:
    // 0x41b8c8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_41b8cc:
    if (ctx->pc == 0x41B8CCu) {
        ctx->pc = 0x41B8CCu;
            // 0x41b8cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x41B8D0u;
        goto label_41b8d0;
    }
    ctx->pc = 0x41B8C8u;
    {
        const bool branch_taken_0x41b8c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b8c8) {
            ctx->pc = 0x41B8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B8C8u;
            // 0x41b8cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B924u;
            goto label_41b924;
        }
    }
    ctx->pc = 0x41B8D0u;
label_41b8d0:
    // 0x41b8d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41b8d4:
    // 0x41b8d4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x41b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_41b8d8:
    // 0x41b8d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x41b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_41b8dc:
    // 0x41b8dc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x41b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_41b8e0:
    // 0x41b8e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41b8e4:
    if (ctx->pc == 0x41B8E4u) {
        ctx->pc = 0x41B8E4u;
            // 0x41b8e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x41B8E8u;
        goto label_41b8e8;
    }
    ctx->pc = 0x41B8E0u;
    {
        const bool branch_taken_0x41b8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b8e0) {
            ctx->pc = 0x41B8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B8E0u;
            // 0x41b8e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B8FCu;
            goto label_41b8fc;
        }
    }
    ctx->pc = 0x41B8E8u;
label_41b8e8:
    // 0x41b8e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41b8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b8ec:
    // 0x41b8ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41b8ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41b8f0:
    // 0x41b8f0: 0x320f809  jalr        $t9
label_41b8f4:
    if (ctx->pc == 0x41B8F4u) {
        ctx->pc = 0x41B8F4u;
            // 0x41b8f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41B8F8u;
        goto label_41b8f8;
    }
    ctx->pc = 0x41B8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B8F8u);
        ctx->pc = 0x41B8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B8F0u;
            // 0x41b8f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B8F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B8F8u; }
            if (ctx->pc != 0x41B8F8u) { return; }
        }
        }
    }
    ctx->pc = 0x41B8F8u;
label_41b8f8:
    // 0x41b8f8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x41b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_41b8fc:
    // 0x41b8fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41b900:
    if (ctx->pc == 0x41B900u) {
        ctx->pc = 0x41B900u;
            // 0x41b900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B904u;
        goto label_41b904;
    }
    ctx->pc = 0x41B8FCu;
    {
        const bool branch_taken_0x41b8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b8fc) {
            ctx->pc = 0x41B900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B8FCu;
            // 0x41b900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B918u;
            goto label_41b918;
        }
    }
    ctx->pc = 0x41B904u;
label_41b904:
    // 0x41b904: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41b904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b908:
    // 0x41b908: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41b908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41b90c:
    // 0x41b90c: 0x320f809  jalr        $t9
label_41b910:
    if (ctx->pc == 0x41B910u) {
        ctx->pc = 0x41B910u;
            // 0x41b910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41B914u;
        goto label_41b914;
    }
    ctx->pc = 0x41B90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B914u);
        ctx->pc = 0x41B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B90Cu;
            // 0x41b910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B914u; }
            if (ctx->pc != 0x41B914u) { return; }
        }
        }
    }
    ctx->pc = 0x41B914u;
label_41b914:
    // 0x41b914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b918:
    // 0x41b918: 0xc075bf8  jal         func_1D6FE0
label_41b91c:
    if (ctx->pc == 0x41B91Cu) {
        ctx->pc = 0x41B91Cu;
            // 0x41b91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B920u;
        goto label_41b920;
    }
    ctx->pc = 0x41B918u;
    SET_GPR_U32(ctx, 31, 0x41B920u);
    ctx->pc = 0x41B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B918u;
            // 0x41b91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B920u; }
        if (ctx->pc != 0x41B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B920u; }
        if (ctx->pc != 0x41B920u) { return; }
    }
    ctx->pc = 0x41B920u;
label_41b920:
    // 0x41b920: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41b920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41b924:
    // 0x41b924: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41b924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41b928:
    // 0x41b928: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41b92c:
    if (ctx->pc == 0x41B92Cu) {
        ctx->pc = 0x41B92Cu;
            // 0x41b92c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B930u;
        goto label_41b930;
    }
    ctx->pc = 0x41B928u;
    {
        const bool branch_taken_0x41b928 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41b928) {
            ctx->pc = 0x41B92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B928u;
            // 0x41b92c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41B93Cu;
            goto label_41b93c;
        }
    }
    ctx->pc = 0x41B930u;
label_41b930:
    // 0x41b930: 0xc0400a8  jal         func_1002A0
label_41b934:
    if (ctx->pc == 0x41B934u) {
        ctx->pc = 0x41B934u;
            // 0x41b934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B938u;
        goto label_41b938;
    }
    ctx->pc = 0x41B930u;
    SET_GPR_U32(ctx, 31, 0x41B938u);
    ctx->pc = 0x41B934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B930u;
            // 0x41b934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B938u; }
        if (ctx->pc != 0x41B938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B938u; }
        if (ctx->pc != 0x41B938u) { return; }
    }
    ctx->pc = 0x41B938u;
label_41b938:
    // 0x41b938: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41b938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b93c:
    // 0x41b93c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41b93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41b940:
    // 0x41b940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41b940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b944:
    // 0x41b944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41b944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41b948:
    // 0x41b948: 0x3e00008  jr          $ra
label_41b94c:
    if (ctx->pc == 0x41B94Cu) {
        ctx->pc = 0x41B94Cu;
            // 0x41b94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41B950u;
        goto label_41b950;
    }
    ctx->pc = 0x41B948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B948u;
            // 0x41b94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41B950u;
label_41b950:
    // 0x41b950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41b954:
    // 0x41b954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41b958:
    // 0x41b958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41b95c:
    // 0x41b95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41b960:
    // 0x41b960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b964:
    // 0x41b964: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_41b968:
    if (ctx->pc == 0x41B968u) {
        ctx->pc = 0x41B968u;
            // 0x41b968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41B96Cu;
        goto label_41b96c;
    }
    ctx->pc = 0x41B964u;
    {
        const bool branch_taken_0x41b964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B964u;
            // 0x41b968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b964) {
            ctx->pc = 0x41BA80u;
            goto label_41ba80;
        }
    }
    ctx->pc = 0x41B96Cu;
label_41b96c:
    // 0x41b96c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41b970:
    // 0x41b970: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41b970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41b974:
    // 0x41b974: 0x2463b8f0  addiu       $v1, $v1, -0x4710
    ctx->pc = 0x41b974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949104));
label_41b978:
    // 0x41b978: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x41b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
label_41b97c:
    // 0x41b97c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41b980:
    // 0x41b980: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x41b980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_41b984:
    // 0x41b984: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41b984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41b988:
    // 0x41b988: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x41b988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_41b98c:
    // 0x41b98c: 0x320f809  jalr        $t9
label_41b990:
    if (ctx->pc == 0x41B990u) {
        ctx->pc = 0x41B994u;
        goto label_41b994;
    }
    ctx->pc = 0x41B98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41B994u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41B994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41B994u; }
            if (ctx->pc != 0x41B994u) { return; }
        }
        }
    }
    ctx->pc = 0x41B994u;
label_41b994:
    // 0x41b994: 0x262400d8  addiu       $a0, $s1, 0xD8
    ctx->pc = 0x41b994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_41b998:
    // 0x41b998: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_41b99c:
    if (ctx->pc == 0x41B99Cu) {
        ctx->pc = 0x41B9A0u;
        goto label_41b9a0;
    }
    ctx->pc = 0x41B998u;
    {
        const bool branch_taken_0x41b998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b998) {
            ctx->pc = 0x41B9E8u;
            goto label_41b9e8;
        }
    }
    ctx->pc = 0x41B9A0u;
label_41b9a0:
    // 0x41b9a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41b9a4:
    // 0x41b9a4: 0x2442b800  addiu       $v0, $v0, -0x4800
    ctx->pc = 0x41b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
label_41b9a8:
    // 0x41b9a8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_41b9ac:
    if (ctx->pc == 0x41B9ACu) {
        ctx->pc = 0x41B9ACu;
            // 0x41b9ac: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x41B9B0u;
        goto label_41b9b0;
    }
    ctx->pc = 0x41B9A8u;
    {
        const bool branch_taken_0x41b9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B9A8u;
            // 0x41b9ac: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b9a8) {
            ctx->pc = 0x41B9E8u;
            goto label_41b9e8;
        }
    }
    ctx->pc = 0x41B9B0u;
label_41b9b0:
    // 0x41b9b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41b9b4:
    // 0x41b9b4: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x41b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_41b9b8:
    // 0x41b9b8: 0xc0d37dc  jal         func_34DF70
label_41b9bc:
    if (ctx->pc == 0x41B9BCu) {
        ctx->pc = 0x41B9BCu;
            // 0x41b9bc: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x41B9C0u;
        goto label_41b9c0;
    }
    ctx->pc = 0x41B9B8u;
    SET_GPR_U32(ctx, 31, 0x41B9C0u);
    ctx->pc = 0x41B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41B9B8u;
            // 0x41b9bc: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B9C0u; }
        if (ctx->pc != 0x41B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41B9C0u; }
        if (ctx->pc != 0x41B9C0u) { return; }
    }
    ctx->pc = 0x41B9C0u;
label_41b9c0:
    // 0x41b9c0: 0x262300d8  addiu       $v1, $s1, 0xD8
    ctx->pc = 0x41b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_41b9c4:
    // 0x41b9c4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_41b9c8:
    if (ctx->pc == 0x41B9C8u) {
        ctx->pc = 0x41B9CCu;
        goto label_41b9cc;
    }
    ctx->pc = 0x41B9C4u;
    {
        const bool branch_taken_0x41b9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b9c4) {
            ctx->pc = 0x41B9E8u;
            goto label_41b9e8;
        }
    }
    ctx->pc = 0x41B9CCu;
label_41b9cc:
    // 0x41b9cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41b9d0:
    // 0x41b9d0: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x41b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_41b9d4:
    // 0x41b9d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_41b9d8:
    if (ctx->pc == 0x41B9D8u) {
        ctx->pc = 0x41B9D8u;
            // 0x41b9d8: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x41B9DCu;
        goto label_41b9dc;
    }
    ctx->pc = 0x41B9D4u;
    {
        const bool branch_taken_0x41b9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41B9D4u;
            // 0x41b9d8: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b9d4) {
            ctx->pc = 0x41B9E8u;
            goto label_41b9e8;
        }
    }
    ctx->pc = 0x41B9DCu;
label_41b9dc:
    // 0x41b9dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41b9e0:
    // 0x41b9e0: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x41b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_41b9e4:
    // 0x41b9e4: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x41b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_41b9e8:
    // 0x41b9e8: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_41b9ec:
    if (ctx->pc == 0x41B9ECu) {
        ctx->pc = 0x41B9ECu;
            // 0x41b9ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x41B9F0u;
        goto label_41b9f0;
    }
    ctx->pc = 0x41B9E8u;
    {
        const bool branch_taken_0x41b9e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b9e8) {
            ctx->pc = 0x41B9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41B9E8u;
            // 0x41b9ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41BA6Cu;
            goto label_41ba6c;
        }
    }
    ctx->pc = 0x41B9F0u;
label_41b9f0:
    // 0x41b9f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41b9f4:
    // 0x41b9f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41b9f8:
    // 0x41b9f8: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x41b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_41b9fc:
    // 0x41b9fc: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x41b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_41ba00:
    // 0x41ba00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41ba04:
    // 0x41ba04: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x41ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_41ba08:
    // 0x41ba08: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x41ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41ba0c:
    // 0x41ba0c: 0xc0aecc4  jal         func_2BB310
label_41ba10:
    if (ctx->pc == 0x41BA10u) {
        ctx->pc = 0x41BA10u;
            // 0x41ba10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41BA14u;
        goto label_41ba14;
    }
    ctx->pc = 0x41BA0Cu;
    SET_GPR_U32(ctx, 31, 0x41BA14u);
    ctx->pc = 0x41BA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA0Cu;
            // 0x41ba10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA14u; }
        if (ctx->pc != 0x41BA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA14u; }
        if (ctx->pc != 0x41BA14u) { return; }
    }
    ctx->pc = 0x41BA14u;
label_41ba14:
    // 0x41ba14: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x41ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_41ba18:
    // 0x41ba18: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x41ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_41ba1c:
    // 0x41ba1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41ba20:
    if (ctx->pc == 0x41BA20u) {
        ctx->pc = 0x41BA20u;
            // 0x41ba20: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x41BA24u;
        goto label_41ba24;
    }
    ctx->pc = 0x41BA1Cu;
    {
        const bool branch_taken_0x41ba1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ba1c) {
            ctx->pc = 0x41BA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA1Cu;
            // 0x41ba20: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41BA38u;
            goto label_41ba38;
        }
    }
    ctx->pc = 0x41BA24u;
label_41ba24:
    // 0x41ba24: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x41ba24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_41ba28:
    // 0x41ba28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41ba28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41ba2c:
    // 0x41ba2c: 0x320f809  jalr        $t9
label_41ba30:
    if (ctx->pc == 0x41BA30u) {
        ctx->pc = 0x41BA30u;
            // 0x41ba30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41BA34u;
        goto label_41ba34;
    }
    ctx->pc = 0x41BA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41BA34u);
        ctx->pc = 0x41BA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA2Cu;
            // 0x41ba30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41BA34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41BA34u; }
            if (ctx->pc != 0x41BA34u) { return; }
        }
        }
    }
    ctx->pc = 0x41BA34u;
label_41ba34:
    // 0x41ba34: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x41ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_41ba38:
    // 0x41ba38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x41ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41ba3c:
    // 0x41ba3c: 0xc0aec9c  jal         func_2BB270
label_41ba40:
    if (ctx->pc == 0x41BA40u) {
        ctx->pc = 0x41BA40u;
            // 0x41ba40: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x41BA44u;
        goto label_41ba44;
    }
    ctx->pc = 0x41BA3Cu;
    SET_GPR_U32(ctx, 31, 0x41BA44u);
    ctx->pc = 0x41BA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA3Cu;
            // 0x41ba40: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA44u; }
        if (ctx->pc != 0x41BA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA44u; }
        if (ctx->pc != 0x41BA44u) { return; }
    }
    ctx->pc = 0x41BA44u;
label_41ba44:
    // 0x41ba44: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x41ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_41ba48:
    // 0x41ba48: 0xc0aec88  jal         func_2BB220
label_41ba4c:
    if (ctx->pc == 0x41BA4Cu) {
        ctx->pc = 0x41BA4Cu;
            // 0x41ba4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41BA50u;
        goto label_41ba50;
    }
    ctx->pc = 0x41BA48u;
    SET_GPR_U32(ctx, 31, 0x41BA50u);
    ctx->pc = 0x41BA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA48u;
            // 0x41ba4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA50u; }
        if (ctx->pc != 0x41BA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA50u; }
        if (ctx->pc != 0x41BA50u) { return; }
    }
    ctx->pc = 0x41BA50u;
label_41ba50:
    // 0x41ba50: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x41ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_41ba54:
    // 0x41ba54: 0xc0aec0c  jal         func_2BB030
label_41ba58:
    if (ctx->pc == 0x41BA58u) {
        ctx->pc = 0x41BA58u;
            // 0x41ba58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BA5Cu;
        goto label_41ba5c;
    }
    ctx->pc = 0x41BA54u;
    SET_GPR_U32(ctx, 31, 0x41BA5Cu);
    ctx->pc = 0x41BA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA54u;
            // 0x41ba58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA5Cu; }
        if (ctx->pc != 0x41BA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA5Cu; }
        if (ctx->pc != 0x41BA5Cu) { return; }
    }
    ctx->pc = 0x41BA5Cu;
label_41ba5c:
    // 0x41ba5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ba60:
    // 0x41ba60: 0xc0aeaa8  jal         func_2BAAA0
label_41ba64:
    if (ctx->pc == 0x41BA64u) {
        ctx->pc = 0x41BA64u;
            // 0x41ba64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BA68u;
        goto label_41ba68;
    }
    ctx->pc = 0x41BA60u;
    SET_GPR_U32(ctx, 31, 0x41BA68u);
    ctx->pc = 0x41BA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA60u;
            // 0x41ba64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA68u; }
        if (ctx->pc != 0x41BA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA68u; }
        if (ctx->pc != 0x41BA68u) { return; }
    }
    ctx->pc = 0x41BA68u;
label_41ba68:
    // 0x41ba68: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41ba68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41ba6c:
    // 0x41ba6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41ba6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41ba70:
    // 0x41ba70: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41ba74:
    if (ctx->pc == 0x41BA74u) {
        ctx->pc = 0x41BA74u;
            // 0x41ba74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BA78u;
        goto label_41ba78;
    }
    ctx->pc = 0x41BA70u;
    {
        const bool branch_taken_0x41ba70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41ba70) {
            ctx->pc = 0x41BA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA70u;
            // 0x41ba74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41BA84u;
            goto label_41ba84;
        }
    }
    ctx->pc = 0x41BA78u;
label_41ba78:
    // 0x41ba78: 0xc0400a8  jal         func_1002A0
label_41ba7c:
    if (ctx->pc == 0x41BA7Cu) {
        ctx->pc = 0x41BA7Cu;
            // 0x41ba7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BA80u;
        goto label_41ba80;
    }
    ctx->pc = 0x41BA78u;
    SET_GPR_U32(ctx, 31, 0x41BA80u);
    ctx->pc = 0x41BA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA78u;
            // 0x41ba7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA80u; }
        if (ctx->pc != 0x41BA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BA80u; }
        if (ctx->pc != 0x41BA80u) { return; }
    }
    ctx->pc = 0x41BA80u;
label_41ba80:
    // 0x41ba80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41ba80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ba84:
    // 0x41ba84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41ba84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41ba88:
    // 0x41ba88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41ba88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41ba8c:
    // 0x41ba8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41ba8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41ba90:
    // 0x41ba90: 0x3e00008  jr          $ra
label_41ba94:
    if (ctx->pc == 0x41BA94u) {
        ctx->pc = 0x41BA94u;
            // 0x41ba94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41BA98u;
        goto label_41ba98;
    }
    ctx->pc = 0x41BA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BA90u;
            // 0x41ba94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41BA98u;
label_41ba98:
    // 0x41ba98: 0x0  nop
    ctx->pc = 0x41ba98u;
    // NOP
label_41ba9c:
    // 0x41ba9c: 0x0  nop
    ctx->pc = 0x41ba9cu;
    // NOP
label_41baa0:
    // 0x41baa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x41baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_41baa4:
    // 0x41baa4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41baa8:
    // 0x41baa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x41baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_41baac:
    // 0x41baac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x41baacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_41bab0:
    // 0x41bab0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x41bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_41bab4:
    // 0x41bab4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x41bab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_41bab8:
    // 0x41bab8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x41bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_41babc:
    // 0x41babc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41bac0:
    // 0x41bac0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41bac4:
    // 0x41bac4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41bac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41bac8:
    // 0x41bac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41bacc:
    // 0x41bacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41bad0:
    // 0x41bad0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x41bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_41bad4:
    // 0x41bad4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x41bad4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_41bad8:
    // 0x41bad8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41badc:
    // 0x41badc: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_41bae0:
    if (ctx->pc == 0x41BAE0u) {
        ctx->pc = 0x41BAE0u;
            // 0x41bae0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BAE4u;
        goto label_41bae4;
    }
    ctx->pc = 0x41BADCu;
    {
        const bool branch_taken_0x41badc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x41BAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BADCu;
            // 0x41bae0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41badc) {
            ctx->pc = 0x41BB20u;
            goto label_41bb20;
        }
    }
    ctx->pc = 0x41BAE4u;
label_41bae4:
    // 0x41bae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x41bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41bae8:
    // 0x41bae8: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
label_41baec:
    if (ctx->pc == 0x41BAECu) {
        ctx->pc = 0x41BAF0u;
        goto label_41baf0;
    }
    ctx->pc = 0x41BAE8u;
    {
        const bool branch_taken_0x41bae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41bae8) {
            ctx->pc = 0x41BBC8u;
            goto label_41bbc8;
        }
    }
    ctx->pc = 0x41BAF0u;
label_41baf0:
    // 0x41baf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41baf4:
    // 0x41baf4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_41baf8:
    if (ctx->pc == 0x41BAF8u) {
        ctx->pc = 0x41BAF8u;
            // 0x41baf8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x41BAFCu;
        goto label_41bafc;
    }
    ctx->pc = 0x41BAF4u;
    {
        const bool branch_taken_0x41baf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41baf4) {
            ctx->pc = 0x41BAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41BAF4u;
            // 0x41baf8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41BB04u;
            goto label_41bb04;
        }
    }
    ctx->pc = 0x41BAFCu;
label_41bafc:
    // 0x41bafc: 0x10000032  b           . + 4 + (0x32 << 2)
label_41bb00:
    if (ctx->pc == 0x41BB00u) {
        ctx->pc = 0x41BB04u;
        goto label_41bb04;
    }
    ctx->pc = 0x41BAFCu;
    {
        const bool branch_taken_0x41bafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41bafc) {
            ctx->pc = 0x41BBC8u;
            goto label_41bbc8;
        }
    }
    ctx->pc = 0x41BB04u;
label_41bb04:
    // 0x41bb04: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x41bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_41bb08:
    // 0x41bb08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x41bb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_41bb0c:
    // 0x41bb0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_41bb10:
    // 0x41bb10: 0x320f809  jalr        $t9
label_41bb14:
    if (ctx->pc == 0x41BB14u) {
        ctx->pc = 0x41BB14u;
            // 0x41bb14: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x41BB18u;
        goto label_41bb18;
    }
    ctx->pc = 0x41BB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41BB18u);
        ctx->pc = 0x41BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BB10u;
            // 0x41bb14: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41BB18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41BB18u; }
            if (ctx->pc != 0x41BB18u) { return; }
        }
        }
    }
    ctx->pc = 0x41BB18u;
label_41bb18:
    // 0x41bb18: 0x1000002b  b           . + 4 + (0x2B << 2)
label_41bb1c:
    if (ctx->pc == 0x41BB1Cu) {
        ctx->pc = 0x41BB20u;
        goto label_41bb20;
    }
    ctx->pc = 0x41BB18u;
    {
        const bool branch_taken_0x41bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41bb18) {
            ctx->pc = 0x41BBC8u;
            goto label_41bbc8;
        }
    }
    ctx->pc = 0x41BB20u;
label_41bb20:
    // 0x41bb20: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x41bb20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_41bb24:
    // 0x41bb24: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
label_41bb28:
    if (ctx->pc == 0x41BB28u) {
        ctx->pc = 0x41BB2Cu;
        goto label_41bb2c;
    }
    ctx->pc = 0x41BB24u;
    {
        const bool branch_taken_0x41bb24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x41bb24) {
            ctx->pc = 0x41BBC8u;
            goto label_41bbc8;
        }
    }
    ctx->pc = 0x41BB2Cu;
label_41bb2c:
    // 0x41bb2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41bb30:
    // 0x41bb30: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x41bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_41bb34:
    // 0x41bb34: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x41bb34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_41bb38:
    // 0x41bb38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41bb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bb3c:
    // 0x41bb3c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x41bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_41bb40:
    // 0x41bb40: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x41bb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_41bb44:
    // 0x41bb44: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x41bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_41bb48:
    // 0x41bb48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41bb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41bb4c:
    // 0x41bb4c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x41bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_41bb50:
    // 0x41bb50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41bb54:
    // 0x41bb54: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x41bb54u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_41bb58:
    // 0x41bb58: 0x8cb10130  lw          $s1, 0x130($a1)
    ctx->pc = 0x41bb58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_41bb5c:
    // 0x41bb5c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x41bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_41bb60:
    // 0x41bb60: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x41bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_41bb64:
    // 0x41bb64: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x41bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_41bb68:
    // 0x41bb68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x41bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_41bb6c:
    // 0x41bb6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x41bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41bb70:
    // 0x41bb70: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x41bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_41bb74:
    // 0x41bb74: 0xc04e4a4  jal         func_139290
label_41bb78:
    if (ctx->pc == 0x41BB78u) {
        ctx->pc = 0x41BB78u;
            // 0x41bb78: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x41BB7Cu;
        goto label_41bb7c;
    }
    ctx->pc = 0x41BB74u;
    SET_GPR_U32(ctx, 31, 0x41BB7Cu);
    ctx->pc = 0x41BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BB74u;
            // 0x41bb78: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BB7Cu; }
        if (ctx->pc != 0x41BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BB7Cu; }
        if (ctx->pc != 0x41BB7Cu) { return; }
    }
    ctx->pc = 0x41BB7Cu;
label_41bb7c:
    // 0x41bb7c: 0xc04e738  jal         func_139CE0
label_41bb80:
    if (ctx->pc == 0x41BB80u) {
        ctx->pc = 0x41BB80u;
            // 0x41bb80: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x41BB84u;
        goto label_41bb84;
    }
    ctx->pc = 0x41BB7Cu;
    SET_GPR_U32(ctx, 31, 0x41BB84u);
    ctx->pc = 0x41BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BB7Cu;
            // 0x41bb80: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BB84u; }
        if (ctx->pc != 0x41BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BB84u; }
        if (ctx->pc != 0x41BB84u) { return; }
    }
    ctx->pc = 0x41BB84u;
label_41bb84:
    // 0x41bb84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x41bb84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bb88:
    // 0x41bb88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x41bb88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bb8c:
    // 0x41bb8c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x41bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_41bb90:
    // 0x41bb90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41bb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41bb94:
    // 0x41bb94: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x41bb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_41bb98:
    // 0x41bb98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x41bb98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41bb9c:
    // 0x41bb9c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x41bb9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_41bba0:
    // 0x41bba0: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x41bba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_41bba4:
    // 0x41bba4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x41bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_41bba8:
    // 0x41bba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41bbac:
    // 0x41bbac: 0xc107298  jal         func_41CA60
label_41bbb0:
    if (ctx->pc == 0x41BBB0u) {
        ctx->pc = 0x41BBB0u;
            // 0x41bbb0: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BBB4u;
        goto label_41bbb4;
    }
    ctx->pc = 0x41BBACu;
    SET_GPR_U32(ctx, 31, 0x41BBB4u);
    ctx->pc = 0x41BBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BBACu;
            // 0x41bbb0: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41CA60u;
    if (runtime->hasFunction(0x41CA60u)) {
        auto targetFn = runtime->lookupFunction(0x41CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BBB4u; }
        if (ctx->pc != 0x41BBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041CA60_0x41ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BBB4u; }
        if (ctx->pc != 0x41BBB4u) { return; }
    }
    ctx->pc = 0x41BBB4u;
label_41bbb4:
    // 0x41bbb4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x41bbb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_41bbb8:
    // 0x41bbb8: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x41bbb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_41bbbc:
    // 0x41bbbc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_41bbc0:
    if (ctx->pc == 0x41BBC0u) {
        ctx->pc = 0x41BBC0u;
            // 0x41bbc0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x41BBC4u;
        goto label_41bbc4;
    }
    ctx->pc = 0x41BBBCu;
    {
        const bool branch_taken_0x41bbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BBBCu;
            // 0x41bbc0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bbbc) {
            ctx->pc = 0x41BB8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41bb8c;
        }
    }
    ctx->pc = 0x41BBC4u;
label_41bbc4:
    // 0x41bbc4: 0x0  nop
    ctx->pc = 0x41bbc4u;
    // NOP
label_41bbc8:
    // 0x41bbc8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x41bbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_41bbcc:
    // 0x41bbcc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x41bbccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41bbd0:
    // 0x41bbd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x41bbd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41bbd4:
    // 0x41bbd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41bbd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41bbd8:
    // 0x41bbd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x41bbd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41bbdc:
    // 0x41bbdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41bbdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41bbe0:
    // 0x41bbe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41bbe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41bbe4:
    // 0x41bbe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41bbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41bbe8:
    // 0x41bbe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41bbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41bbec:
    // 0x41bbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41bbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41bbf0:
    // 0x41bbf0: 0x3e00008  jr          $ra
label_41bbf4:
    if (ctx->pc == 0x41BBF4u) {
        ctx->pc = 0x41BBF4u;
            // 0x41bbf4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x41BBF8u;
        goto label_41bbf8;
    }
    ctx->pc = 0x41BBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BBF0u;
            // 0x41bbf4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41BBF8u;
label_41bbf8:
    // 0x41bbf8: 0x0  nop
    ctx->pc = 0x41bbf8u;
    // NOP
label_41bbfc:
    // 0x41bbfc: 0x0  nop
    ctx->pc = 0x41bbfcu;
    // NOP
label_41bc00:
    // 0x41bc00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41bc04:
    // 0x41bc04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41bc08:
    // 0x41bc08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41bc0c:
    // 0x41bc0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41bc10:
    // 0x41bc10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41bc14:
    // 0x41bc14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41bc18:
    // 0x41bc18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41bc1c:
    // 0x41bc1c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x41bc1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_41bc20:
    // 0x41bc20: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_41bc24:
    if (ctx->pc == 0x41BC24u) {
        ctx->pc = 0x41BC24u;
            // 0x41bc24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BC28u;
        goto label_41bc28;
    }
    ctx->pc = 0x41BC20u;
    {
        const bool branch_taken_0x41bc20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x41BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BC20u;
            // 0x41bc24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bc20) {
            ctx->pc = 0x41BC54u;
            goto label_41bc54;
        }
    }
    ctx->pc = 0x41BC28u;
label_41bc28:
    // 0x41bc28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x41bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41bc2c:
    // 0x41bc2c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_41bc30:
    if (ctx->pc == 0x41BC30u) {
        ctx->pc = 0x41BC30u;
            // 0x41bc30: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x41BC34u;
        goto label_41bc34;
    }
    ctx->pc = 0x41BC2Cu;
    {
        const bool branch_taken_0x41bc2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41bc2c) {
            ctx->pc = 0x41BC30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41BC2Cu;
            // 0x41bc30: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41BC48u;
            goto label_41bc48;
        }
    }
    ctx->pc = 0x41BC34u;
label_41bc34:
    // 0x41bc34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41bc38:
    // 0x41bc38: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_41bc3c:
    if (ctx->pc == 0x41BC3Cu) {
        ctx->pc = 0x41BC40u;
        goto label_41bc40;
    }
    ctx->pc = 0x41BC38u;
    {
        const bool branch_taken_0x41bc38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41bc38) {
            ctx->pc = 0x41BD08u;
            goto label_41bd08;
        }
    }
    ctx->pc = 0x41BC40u;
label_41bc40:
    // 0x41bc40: 0x10000031  b           . + 4 + (0x31 << 2)
label_41bc44:
    if (ctx->pc == 0x41BC44u) {
        ctx->pc = 0x41BC48u;
        goto label_41bc48;
    }
    ctx->pc = 0x41BC40u;
    {
        const bool branch_taken_0x41bc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41bc40) {
            ctx->pc = 0x41BD08u;
            goto label_41bd08;
        }
    }
    ctx->pc = 0x41BC48u;
label_41bc48:
    // 0x41bc48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x41bc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_41bc4c:
    // 0x41bc4c: 0x320f809  jalr        $t9
label_41bc50:
    if (ctx->pc == 0x41BC50u) {
        ctx->pc = 0x41BC54u;
        goto label_41bc54;
    }
    ctx->pc = 0x41BC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41BC54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41BC54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41BC54u; }
            if (ctx->pc != 0x41BC54u) { return; }
        }
        }
    }
    ctx->pc = 0x41BC54u;
label_41bc54:
    // 0x41bc54: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x41bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_41bc58:
    // 0x41bc58: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x41bc58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_41bc5c:
    // 0x41bc5c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_41bc60:
    if (ctx->pc == 0x41BC60u) {
        ctx->pc = 0x41BC60u;
            // 0x41bc60: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x41BC64u;
        goto label_41bc64;
    }
    ctx->pc = 0x41BC5Cu;
    {
        const bool branch_taken_0x41bc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BC5Cu;
            // 0x41bc60: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bc5c) {
            ctx->pc = 0x41BCD4u;
            goto label_41bcd4;
        }
    }
    ctx->pc = 0x41BC64u;
label_41bc64:
    // 0x41bc64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41bc68:
    // 0x41bc68: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x41bc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_41bc6c:
    // 0x41bc6c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41bc70:
    // 0x41bc70: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x41bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41bc74:
    // 0x41bc74: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x41bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41bc78:
    // 0x41bc78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x41bc78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41bc7c:
    // 0x41bc7c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x41bc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_41bc80:
    // 0x41bc80: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x41bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_41bc84:
    // 0x41bc84: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x41bc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41bc88:
    // 0x41bc88: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x41bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41bc8c:
    // 0x41bc8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41bc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41bc90:
    // 0x41bc90: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_41bc94:
    if (ctx->pc == 0x41BC94u) {
        ctx->pc = 0x41BC94u;
            // 0x41bc94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41BC98u;
        goto label_41bc98;
    }
    ctx->pc = 0x41BC90u;
    {
        const bool branch_taken_0x41bc90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41BC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BC90u;
            // 0x41bc94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bc90) {
            ctx->pc = 0x41BC9Cu;
            goto label_41bc9c;
        }
    }
    ctx->pc = 0x41BC98u;
label_41bc98:
    // 0x41bc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bc9c:
    // 0x41bc9c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_41bca0:
    if (ctx->pc == 0x41BCA0u) {
        ctx->pc = 0x41BCA0u;
            // 0x41bca0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x41BCA4u;
        goto label_41bca4;
    }
    ctx->pc = 0x41BC9Cu;
    {
        const bool branch_taken_0x41bc9c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x41bc9c) {
            ctx->pc = 0x41BCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41BC9Cu;
            // 0x41bca0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41BCB0u;
            goto label_41bcb0;
        }
    }
    ctx->pc = 0x41BCA4u;
label_41bca4:
    // 0x41bca4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x41bca4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41bca8:
    // 0x41bca8: 0x10000007  b           . + 4 + (0x7 << 2)
label_41bcac:
    if (ctx->pc == 0x41BCACu) {
        ctx->pc = 0x41BCACu;
            // 0x41bcac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41BCB0u;
        goto label_41bcb0;
    }
    ctx->pc = 0x41BCA8u;
    {
        const bool branch_taken_0x41bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BCA8u;
            // 0x41bcac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bca8) {
            ctx->pc = 0x41BCC8u;
            goto label_41bcc8;
        }
    }
    ctx->pc = 0x41BCB0u;
label_41bcb0:
    // 0x41bcb0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x41bcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_41bcb4:
    // 0x41bcb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x41bcb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_41bcb8:
    // 0x41bcb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41bcb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41bcbc:
    // 0x41bcbc: 0x0  nop
    ctx->pc = 0x41bcbcu;
    // NOP
label_41bcc0:
    // 0x41bcc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x41bcc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_41bcc4:
    // 0x41bcc4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x41bcc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_41bcc8:
    // 0x41bcc8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x41bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41bccc:
    // 0x41bccc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41bcccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41bcd0:
    // 0x41bcd0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x41bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_41bcd4:
    // 0x41bcd4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_41bcd8:
    if (ctx->pc == 0x41BCD8u) {
        ctx->pc = 0x41BCDCu;
        goto label_41bcdc;
    }
    ctx->pc = 0x41BCD4u;
    {
        const bool branch_taken_0x41bcd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41bcd4) {
            ctx->pc = 0x41BD08u;
            goto label_41bd08;
        }
    }
    ctx->pc = 0x41BCDCu;
label_41bcdc:
    // 0x41bcdc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41bcdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bce0:
    // 0x41bce0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41bce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bce4:
    // 0x41bce4: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x41bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_41bce8:
    // 0x41bce8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41bcec:
    // 0x41bcec: 0xc0e3658  jal         func_38D960
label_41bcf0:
    if (ctx->pc == 0x41BCF0u) {
        ctx->pc = 0x41BCF0u;
            // 0x41bcf0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x41BCF4u;
        goto label_41bcf4;
    }
    ctx->pc = 0x41BCECu;
    SET_GPR_U32(ctx, 31, 0x41BCF4u);
    ctx->pc = 0x41BCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BCECu;
            // 0x41bcf0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BCF4u; }
        if (ctx->pc != 0x41BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BCF4u; }
        if (ctx->pc != 0x41BCF4u) { return; }
    }
    ctx->pc = 0x41BCF4u;
label_41bcf4:
    // 0x41bcf4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41bcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41bcf8:
    // 0x41bcf8: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x41bcf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41bcfc:
    // 0x41bcfc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_41bd00:
    if (ctx->pc == 0x41BD00u) {
        ctx->pc = 0x41BD00u;
            // 0x41bd00: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x41BD04u;
        goto label_41bd04;
    }
    ctx->pc = 0x41BCFCu;
    {
        const bool branch_taken_0x41bcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BCFCu;
            // 0x41bd00: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bcfc) {
            ctx->pc = 0x41BCE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41bce4;
        }
    }
    ctx->pc = 0x41BD04u;
label_41bd04:
    // 0x41bd04: 0x0  nop
    ctx->pc = 0x41bd04u;
    // NOP
label_41bd08:
    // 0x41bd08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41bd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41bd0c:
    // 0x41bd0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41bd0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41bd10:
    // 0x41bd10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41bd10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41bd14:
    // 0x41bd14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41bd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41bd18:
    // 0x41bd18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41bd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41bd1c:
    // 0x41bd1c: 0x3e00008  jr          $ra
label_41bd20:
    if (ctx->pc == 0x41BD20u) {
        ctx->pc = 0x41BD20u;
            // 0x41bd20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41BD24u;
        goto label_41bd24;
    }
    ctx->pc = 0x41BD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BD1Cu;
            // 0x41bd20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41BD24u;
label_41bd24:
    // 0x41bd24: 0x0  nop
    ctx->pc = 0x41bd24u;
    // NOP
label_41bd28:
    // 0x41bd28: 0x0  nop
    ctx->pc = 0x41bd28u;
    // NOP
label_41bd2c:
    // 0x41bd2c: 0x0  nop
    ctx->pc = 0x41bd2cu;
    // NOP
label_41bd30:
    // 0x41bd30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41bd34:
    // 0x41bd34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41bd38:
    // 0x41bd38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41bd3c:
    // 0x41bd3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41bd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41bd40:
    // 0x41bd40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41bd44:
    // 0x41bd44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41bd48:
    // 0x41bd48: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x41bd48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41bd4c:
    // 0x41bd4c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_41bd50:
    if (ctx->pc == 0x41BD50u) {
        ctx->pc = 0x41BD50u;
            // 0x41bd50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41BD54u;
        goto label_41bd54;
    }
    ctx->pc = 0x41BD4Cu;
    {
        const bool branch_taken_0x41bd4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BD4Cu;
            // 0x41bd50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd4c) {
            ctx->pc = 0x41BD88u;
            goto label_41bd88;
        }
    }
    ctx->pc = 0x41BD54u;
label_41bd54:
    // 0x41bd54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41bd54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bd58:
    // 0x41bd58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41bd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bd5c:
    // 0x41bd5c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x41bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_41bd60:
    // 0x41bd60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x41bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41bd64:
    // 0x41bd64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41bd68:
    // 0x41bd68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41bd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41bd6c:
    // 0x41bd6c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x41bd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_41bd70:
    // 0x41bd70: 0x320f809  jalr        $t9
label_41bd74:
    if (ctx->pc == 0x41BD74u) {
        ctx->pc = 0x41BD78u;
        goto label_41bd78;
    }
    ctx->pc = 0x41BD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41BD78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41BD78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41BD78u; }
            if (ctx->pc != 0x41BD78u) { return; }
        }
        }
    }
    ctx->pc = 0x41BD78u;
label_41bd78:
    // 0x41bd78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41bd78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41bd7c:
    // 0x41bd7c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x41bd7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_41bd80:
    // 0x41bd80: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_41bd84:
    if (ctx->pc == 0x41BD84u) {
        ctx->pc = 0x41BD84u;
            // 0x41bd84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x41BD88u;
        goto label_41bd88;
    }
    ctx->pc = 0x41BD80u;
    {
        const bool branch_taken_0x41bd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BD80u;
            // 0x41bd84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd80) {
            ctx->pc = 0x41BD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41bd5c;
        }
    }
    ctx->pc = 0x41BD88u;
label_41bd88:
    // 0x41bd88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41bd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41bd8c:
    // 0x41bd8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41bd8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41bd90:
    // 0x41bd90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41bd90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41bd94:
    // 0x41bd94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41bd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41bd98:
    // 0x41bd98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41bd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41bd9c:
    // 0x41bd9c: 0x3e00008  jr          $ra
label_41bda0:
    if (ctx->pc == 0x41BDA0u) {
        ctx->pc = 0x41BDA0u;
            // 0x41bda0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x41BDA4u;
        goto label_41bda4;
    }
    ctx->pc = 0x41BD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BD9Cu;
            // 0x41bda0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41BDA4u;
label_41bda4:
    // 0x41bda4: 0x0  nop
    ctx->pc = 0x41bda4u;
    // NOP
label_41bda8:
    // 0x41bda8: 0x0  nop
    ctx->pc = 0x41bda8u;
    // NOP
label_41bdac:
    // 0x41bdac: 0x0  nop
    ctx->pc = 0x41bdacu;
    // NOP
}
