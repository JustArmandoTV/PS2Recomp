#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052E6B0
// Address: 0x52e6b0 - 0x52ec20
void sub_0052E6B0_0x52e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052E6B0_0x52e6b0");
#endif

    switch (ctx->pc) {
        case 0x52e6b0u: goto label_52e6b0;
        case 0x52e6b4u: goto label_52e6b4;
        case 0x52e6b8u: goto label_52e6b8;
        case 0x52e6bcu: goto label_52e6bc;
        case 0x52e6c0u: goto label_52e6c0;
        case 0x52e6c4u: goto label_52e6c4;
        case 0x52e6c8u: goto label_52e6c8;
        case 0x52e6ccu: goto label_52e6cc;
        case 0x52e6d0u: goto label_52e6d0;
        case 0x52e6d4u: goto label_52e6d4;
        case 0x52e6d8u: goto label_52e6d8;
        case 0x52e6dcu: goto label_52e6dc;
        case 0x52e6e0u: goto label_52e6e0;
        case 0x52e6e4u: goto label_52e6e4;
        case 0x52e6e8u: goto label_52e6e8;
        case 0x52e6ecu: goto label_52e6ec;
        case 0x52e6f0u: goto label_52e6f0;
        case 0x52e6f4u: goto label_52e6f4;
        case 0x52e6f8u: goto label_52e6f8;
        case 0x52e6fcu: goto label_52e6fc;
        case 0x52e700u: goto label_52e700;
        case 0x52e704u: goto label_52e704;
        case 0x52e708u: goto label_52e708;
        case 0x52e70cu: goto label_52e70c;
        case 0x52e710u: goto label_52e710;
        case 0x52e714u: goto label_52e714;
        case 0x52e718u: goto label_52e718;
        case 0x52e71cu: goto label_52e71c;
        case 0x52e720u: goto label_52e720;
        case 0x52e724u: goto label_52e724;
        case 0x52e728u: goto label_52e728;
        case 0x52e72cu: goto label_52e72c;
        case 0x52e730u: goto label_52e730;
        case 0x52e734u: goto label_52e734;
        case 0x52e738u: goto label_52e738;
        case 0x52e73cu: goto label_52e73c;
        case 0x52e740u: goto label_52e740;
        case 0x52e744u: goto label_52e744;
        case 0x52e748u: goto label_52e748;
        case 0x52e74cu: goto label_52e74c;
        case 0x52e750u: goto label_52e750;
        case 0x52e754u: goto label_52e754;
        case 0x52e758u: goto label_52e758;
        case 0x52e75cu: goto label_52e75c;
        case 0x52e760u: goto label_52e760;
        case 0x52e764u: goto label_52e764;
        case 0x52e768u: goto label_52e768;
        case 0x52e76cu: goto label_52e76c;
        case 0x52e770u: goto label_52e770;
        case 0x52e774u: goto label_52e774;
        case 0x52e778u: goto label_52e778;
        case 0x52e77cu: goto label_52e77c;
        case 0x52e780u: goto label_52e780;
        case 0x52e784u: goto label_52e784;
        case 0x52e788u: goto label_52e788;
        case 0x52e78cu: goto label_52e78c;
        case 0x52e790u: goto label_52e790;
        case 0x52e794u: goto label_52e794;
        case 0x52e798u: goto label_52e798;
        case 0x52e79cu: goto label_52e79c;
        case 0x52e7a0u: goto label_52e7a0;
        case 0x52e7a4u: goto label_52e7a4;
        case 0x52e7a8u: goto label_52e7a8;
        case 0x52e7acu: goto label_52e7ac;
        case 0x52e7b0u: goto label_52e7b0;
        case 0x52e7b4u: goto label_52e7b4;
        case 0x52e7b8u: goto label_52e7b8;
        case 0x52e7bcu: goto label_52e7bc;
        case 0x52e7c0u: goto label_52e7c0;
        case 0x52e7c4u: goto label_52e7c4;
        case 0x52e7c8u: goto label_52e7c8;
        case 0x52e7ccu: goto label_52e7cc;
        case 0x52e7d0u: goto label_52e7d0;
        case 0x52e7d4u: goto label_52e7d4;
        case 0x52e7d8u: goto label_52e7d8;
        case 0x52e7dcu: goto label_52e7dc;
        case 0x52e7e0u: goto label_52e7e0;
        case 0x52e7e4u: goto label_52e7e4;
        case 0x52e7e8u: goto label_52e7e8;
        case 0x52e7ecu: goto label_52e7ec;
        case 0x52e7f0u: goto label_52e7f0;
        case 0x52e7f4u: goto label_52e7f4;
        case 0x52e7f8u: goto label_52e7f8;
        case 0x52e7fcu: goto label_52e7fc;
        case 0x52e800u: goto label_52e800;
        case 0x52e804u: goto label_52e804;
        case 0x52e808u: goto label_52e808;
        case 0x52e80cu: goto label_52e80c;
        case 0x52e810u: goto label_52e810;
        case 0x52e814u: goto label_52e814;
        case 0x52e818u: goto label_52e818;
        case 0x52e81cu: goto label_52e81c;
        case 0x52e820u: goto label_52e820;
        case 0x52e824u: goto label_52e824;
        case 0x52e828u: goto label_52e828;
        case 0x52e82cu: goto label_52e82c;
        case 0x52e830u: goto label_52e830;
        case 0x52e834u: goto label_52e834;
        case 0x52e838u: goto label_52e838;
        case 0x52e83cu: goto label_52e83c;
        case 0x52e840u: goto label_52e840;
        case 0x52e844u: goto label_52e844;
        case 0x52e848u: goto label_52e848;
        case 0x52e84cu: goto label_52e84c;
        case 0x52e850u: goto label_52e850;
        case 0x52e854u: goto label_52e854;
        case 0x52e858u: goto label_52e858;
        case 0x52e85cu: goto label_52e85c;
        case 0x52e860u: goto label_52e860;
        case 0x52e864u: goto label_52e864;
        case 0x52e868u: goto label_52e868;
        case 0x52e86cu: goto label_52e86c;
        case 0x52e870u: goto label_52e870;
        case 0x52e874u: goto label_52e874;
        case 0x52e878u: goto label_52e878;
        case 0x52e87cu: goto label_52e87c;
        case 0x52e880u: goto label_52e880;
        case 0x52e884u: goto label_52e884;
        case 0x52e888u: goto label_52e888;
        case 0x52e88cu: goto label_52e88c;
        case 0x52e890u: goto label_52e890;
        case 0x52e894u: goto label_52e894;
        case 0x52e898u: goto label_52e898;
        case 0x52e89cu: goto label_52e89c;
        case 0x52e8a0u: goto label_52e8a0;
        case 0x52e8a4u: goto label_52e8a4;
        case 0x52e8a8u: goto label_52e8a8;
        case 0x52e8acu: goto label_52e8ac;
        case 0x52e8b0u: goto label_52e8b0;
        case 0x52e8b4u: goto label_52e8b4;
        case 0x52e8b8u: goto label_52e8b8;
        case 0x52e8bcu: goto label_52e8bc;
        case 0x52e8c0u: goto label_52e8c0;
        case 0x52e8c4u: goto label_52e8c4;
        case 0x52e8c8u: goto label_52e8c8;
        case 0x52e8ccu: goto label_52e8cc;
        case 0x52e8d0u: goto label_52e8d0;
        case 0x52e8d4u: goto label_52e8d4;
        case 0x52e8d8u: goto label_52e8d8;
        case 0x52e8dcu: goto label_52e8dc;
        case 0x52e8e0u: goto label_52e8e0;
        case 0x52e8e4u: goto label_52e8e4;
        case 0x52e8e8u: goto label_52e8e8;
        case 0x52e8ecu: goto label_52e8ec;
        case 0x52e8f0u: goto label_52e8f0;
        case 0x52e8f4u: goto label_52e8f4;
        case 0x52e8f8u: goto label_52e8f8;
        case 0x52e8fcu: goto label_52e8fc;
        case 0x52e900u: goto label_52e900;
        case 0x52e904u: goto label_52e904;
        case 0x52e908u: goto label_52e908;
        case 0x52e90cu: goto label_52e90c;
        case 0x52e910u: goto label_52e910;
        case 0x52e914u: goto label_52e914;
        case 0x52e918u: goto label_52e918;
        case 0x52e91cu: goto label_52e91c;
        case 0x52e920u: goto label_52e920;
        case 0x52e924u: goto label_52e924;
        case 0x52e928u: goto label_52e928;
        case 0x52e92cu: goto label_52e92c;
        case 0x52e930u: goto label_52e930;
        case 0x52e934u: goto label_52e934;
        case 0x52e938u: goto label_52e938;
        case 0x52e93cu: goto label_52e93c;
        case 0x52e940u: goto label_52e940;
        case 0x52e944u: goto label_52e944;
        case 0x52e948u: goto label_52e948;
        case 0x52e94cu: goto label_52e94c;
        case 0x52e950u: goto label_52e950;
        case 0x52e954u: goto label_52e954;
        case 0x52e958u: goto label_52e958;
        case 0x52e95cu: goto label_52e95c;
        case 0x52e960u: goto label_52e960;
        case 0x52e964u: goto label_52e964;
        case 0x52e968u: goto label_52e968;
        case 0x52e96cu: goto label_52e96c;
        case 0x52e970u: goto label_52e970;
        case 0x52e974u: goto label_52e974;
        case 0x52e978u: goto label_52e978;
        case 0x52e97cu: goto label_52e97c;
        case 0x52e980u: goto label_52e980;
        case 0x52e984u: goto label_52e984;
        case 0x52e988u: goto label_52e988;
        case 0x52e98cu: goto label_52e98c;
        case 0x52e990u: goto label_52e990;
        case 0x52e994u: goto label_52e994;
        case 0x52e998u: goto label_52e998;
        case 0x52e99cu: goto label_52e99c;
        case 0x52e9a0u: goto label_52e9a0;
        case 0x52e9a4u: goto label_52e9a4;
        case 0x52e9a8u: goto label_52e9a8;
        case 0x52e9acu: goto label_52e9ac;
        case 0x52e9b0u: goto label_52e9b0;
        case 0x52e9b4u: goto label_52e9b4;
        case 0x52e9b8u: goto label_52e9b8;
        case 0x52e9bcu: goto label_52e9bc;
        case 0x52e9c0u: goto label_52e9c0;
        case 0x52e9c4u: goto label_52e9c4;
        case 0x52e9c8u: goto label_52e9c8;
        case 0x52e9ccu: goto label_52e9cc;
        case 0x52e9d0u: goto label_52e9d0;
        case 0x52e9d4u: goto label_52e9d4;
        case 0x52e9d8u: goto label_52e9d8;
        case 0x52e9dcu: goto label_52e9dc;
        case 0x52e9e0u: goto label_52e9e0;
        case 0x52e9e4u: goto label_52e9e4;
        case 0x52e9e8u: goto label_52e9e8;
        case 0x52e9ecu: goto label_52e9ec;
        case 0x52e9f0u: goto label_52e9f0;
        case 0x52e9f4u: goto label_52e9f4;
        case 0x52e9f8u: goto label_52e9f8;
        case 0x52e9fcu: goto label_52e9fc;
        case 0x52ea00u: goto label_52ea00;
        case 0x52ea04u: goto label_52ea04;
        case 0x52ea08u: goto label_52ea08;
        case 0x52ea0cu: goto label_52ea0c;
        case 0x52ea10u: goto label_52ea10;
        case 0x52ea14u: goto label_52ea14;
        case 0x52ea18u: goto label_52ea18;
        case 0x52ea1cu: goto label_52ea1c;
        case 0x52ea20u: goto label_52ea20;
        case 0x52ea24u: goto label_52ea24;
        case 0x52ea28u: goto label_52ea28;
        case 0x52ea2cu: goto label_52ea2c;
        case 0x52ea30u: goto label_52ea30;
        case 0x52ea34u: goto label_52ea34;
        case 0x52ea38u: goto label_52ea38;
        case 0x52ea3cu: goto label_52ea3c;
        case 0x52ea40u: goto label_52ea40;
        case 0x52ea44u: goto label_52ea44;
        case 0x52ea48u: goto label_52ea48;
        case 0x52ea4cu: goto label_52ea4c;
        case 0x52ea50u: goto label_52ea50;
        case 0x52ea54u: goto label_52ea54;
        case 0x52ea58u: goto label_52ea58;
        case 0x52ea5cu: goto label_52ea5c;
        case 0x52ea60u: goto label_52ea60;
        case 0x52ea64u: goto label_52ea64;
        case 0x52ea68u: goto label_52ea68;
        case 0x52ea6cu: goto label_52ea6c;
        case 0x52ea70u: goto label_52ea70;
        case 0x52ea74u: goto label_52ea74;
        case 0x52ea78u: goto label_52ea78;
        case 0x52ea7cu: goto label_52ea7c;
        case 0x52ea80u: goto label_52ea80;
        case 0x52ea84u: goto label_52ea84;
        case 0x52ea88u: goto label_52ea88;
        case 0x52ea8cu: goto label_52ea8c;
        case 0x52ea90u: goto label_52ea90;
        case 0x52ea94u: goto label_52ea94;
        case 0x52ea98u: goto label_52ea98;
        case 0x52ea9cu: goto label_52ea9c;
        case 0x52eaa0u: goto label_52eaa0;
        case 0x52eaa4u: goto label_52eaa4;
        case 0x52eaa8u: goto label_52eaa8;
        case 0x52eaacu: goto label_52eaac;
        case 0x52eab0u: goto label_52eab0;
        case 0x52eab4u: goto label_52eab4;
        case 0x52eab8u: goto label_52eab8;
        case 0x52eabcu: goto label_52eabc;
        case 0x52eac0u: goto label_52eac0;
        case 0x52eac4u: goto label_52eac4;
        case 0x52eac8u: goto label_52eac8;
        case 0x52eaccu: goto label_52eacc;
        case 0x52ead0u: goto label_52ead0;
        case 0x52ead4u: goto label_52ead4;
        case 0x52ead8u: goto label_52ead8;
        case 0x52eadcu: goto label_52eadc;
        case 0x52eae0u: goto label_52eae0;
        case 0x52eae4u: goto label_52eae4;
        case 0x52eae8u: goto label_52eae8;
        case 0x52eaecu: goto label_52eaec;
        case 0x52eaf0u: goto label_52eaf0;
        case 0x52eaf4u: goto label_52eaf4;
        case 0x52eaf8u: goto label_52eaf8;
        case 0x52eafcu: goto label_52eafc;
        case 0x52eb00u: goto label_52eb00;
        case 0x52eb04u: goto label_52eb04;
        case 0x52eb08u: goto label_52eb08;
        case 0x52eb0cu: goto label_52eb0c;
        case 0x52eb10u: goto label_52eb10;
        case 0x52eb14u: goto label_52eb14;
        case 0x52eb18u: goto label_52eb18;
        case 0x52eb1cu: goto label_52eb1c;
        case 0x52eb20u: goto label_52eb20;
        case 0x52eb24u: goto label_52eb24;
        case 0x52eb28u: goto label_52eb28;
        case 0x52eb2cu: goto label_52eb2c;
        case 0x52eb30u: goto label_52eb30;
        case 0x52eb34u: goto label_52eb34;
        case 0x52eb38u: goto label_52eb38;
        case 0x52eb3cu: goto label_52eb3c;
        case 0x52eb40u: goto label_52eb40;
        case 0x52eb44u: goto label_52eb44;
        case 0x52eb48u: goto label_52eb48;
        case 0x52eb4cu: goto label_52eb4c;
        case 0x52eb50u: goto label_52eb50;
        case 0x52eb54u: goto label_52eb54;
        case 0x52eb58u: goto label_52eb58;
        case 0x52eb5cu: goto label_52eb5c;
        case 0x52eb60u: goto label_52eb60;
        case 0x52eb64u: goto label_52eb64;
        case 0x52eb68u: goto label_52eb68;
        case 0x52eb6cu: goto label_52eb6c;
        case 0x52eb70u: goto label_52eb70;
        case 0x52eb74u: goto label_52eb74;
        case 0x52eb78u: goto label_52eb78;
        case 0x52eb7cu: goto label_52eb7c;
        case 0x52eb80u: goto label_52eb80;
        case 0x52eb84u: goto label_52eb84;
        case 0x52eb88u: goto label_52eb88;
        case 0x52eb8cu: goto label_52eb8c;
        case 0x52eb90u: goto label_52eb90;
        case 0x52eb94u: goto label_52eb94;
        case 0x52eb98u: goto label_52eb98;
        case 0x52eb9cu: goto label_52eb9c;
        case 0x52eba0u: goto label_52eba0;
        case 0x52eba4u: goto label_52eba4;
        case 0x52eba8u: goto label_52eba8;
        case 0x52ebacu: goto label_52ebac;
        case 0x52ebb0u: goto label_52ebb0;
        case 0x52ebb4u: goto label_52ebb4;
        case 0x52ebb8u: goto label_52ebb8;
        case 0x52ebbcu: goto label_52ebbc;
        case 0x52ebc0u: goto label_52ebc0;
        case 0x52ebc4u: goto label_52ebc4;
        case 0x52ebc8u: goto label_52ebc8;
        case 0x52ebccu: goto label_52ebcc;
        case 0x52ebd0u: goto label_52ebd0;
        case 0x52ebd4u: goto label_52ebd4;
        case 0x52ebd8u: goto label_52ebd8;
        case 0x52ebdcu: goto label_52ebdc;
        case 0x52ebe0u: goto label_52ebe0;
        case 0x52ebe4u: goto label_52ebe4;
        case 0x52ebe8u: goto label_52ebe8;
        case 0x52ebecu: goto label_52ebec;
        case 0x52ebf0u: goto label_52ebf0;
        case 0x52ebf4u: goto label_52ebf4;
        case 0x52ebf8u: goto label_52ebf8;
        case 0x52ebfcu: goto label_52ebfc;
        case 0x52ec00u: goto label_52ec00;
        case 0x52ec04u: goto label_52ec04;
        case 0x52ec08u: goto label_52ec08;
        case 0x52ec0cu: goto label_52ec0c;
        case 0x52ec10u: goto label_52ec10;
        case 0x52ec14u: goto label_52ec14;
        case 0x52ec18u: goto label_52ec18;
        case 0x52ec1cu: goto label_52ec1c;
        default: break;
    }

    ctx->pc = 0x52e6b0u;

label_52e6b0:
    // 0x52e6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52e6b4:
    // 0x52e6b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x52e6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_52e6b8:
    // 0x52e6b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52e6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52e6bc:
    // 0x52e6bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52e6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52e6c0:
    // 0x52e6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52e6c4:
    // 0x52e6c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x52e6c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52e6c8:
    // 0x52e6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52e6cc:
    // 0x52e6cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52e6d0:
    // 0x52e6d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52e6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52e6d4:
    // 0x52e6d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x52e6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_52e6d8:
    // 0x52e6d8: 0xc10ca68  jal         func_4329A0
label_52e6dc:
    if (ctx->pc == 0x52E6DCu) {
        ctx->pc = 0x52E6DCu;
            // 0x52e6dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x52E6E0u;
        goto label_52e6e0;
    }
    ctx->pc = 0x52E6D8u;
    SET_GPR_U32(ctx, 31, 0x52E6E0u);
    ctx->pc = 0x52E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E6D8u;
            // 0x52e6dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E6E0u; }
        if (ctx->pc != 0x52E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E6E0u; }
        if (ctx->pc != 0x52E6E0u) { return; }
    }
    ctx->pc = 0x52E6E0u;
label_52e6e0:
    // 0x52e6e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52e6e4:
    // 0x52e6e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52e6e8:
    // 0x52e6e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x52e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_52e6ec:
    // 0x52e6ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_52e6f0:
    // 0x52e6f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x52e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_52e6f4:
    // 0x52e6f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x52e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_52e6f8:
    // 0x52e6f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x52e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_52e6fc:
    // 0x52e6fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x52e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_52e700:
    // 0x52e700: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x52e700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_52e704:
    // 0x52e704: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52e704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52e708:
    // 0x52e708: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x52e708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_52e70c:
    // 0x52e70c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x52e70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_52e710:
    // 0x52e710: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x52e710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_52e714:
    // 0x52e714: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x52e714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_52e718:
    // 0x52e718: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x52e718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_52e71c:
    // 0x52e71c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x52e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_52e720:
    // 0x52e720: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x52e720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_52e724:
    // 0x52e724: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x52e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_52e728:
    // 0x52e728: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x52e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_52e72c:
    // 0x52e72c: 0xc0582cc  jal         func_160B30
label_52e730:
    if (ctx->pc == 0x52E730u) {
        ctx->pc = 0x52E730u;
            // 0x52e730: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x52E734u;
        goto label_52e734;
    }
    ctx->pc = 0x52E72Cu;
    SET_GPR_U32(ctx, 31, 0x52E734u);
    ctx->pc = 0x52E730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E72Cu;
            // 0x52e730: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E734u; }
        if (ctx->pc != 0x52E734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E734u; }
        if (ctx->pc != 0x52E734u) { return; }
    }
    ctx->pc = 0x52E734u;
label_52e734:
    // 0x52e734: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52e734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52e738:
    // 0x52e738: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x52e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_52e73c:
    // 0x52e73c: 0x24636b30  addiu       $v1, $v1, 0x6B30
    ctx->pc = 0x52e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27440));
label_52e740:
    // 0x52e740: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x52e740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_52e744:
    // 0x52e744: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x52e744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_52e748:
    // 0x52e748: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52e74c:
    // 0x52e74c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52e750:
    // 0x52e750: 0xac443fe8  sw          $a0, 0x3FE8($v0)
    ctx->pc = 0x52e750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16360), GPR_U32(ctx, 4));
label_52e754:
    // 0x52e754: 0x24636b40  addiu       $v1, $v1, 0x6B40
    ctx->pc = 0x52e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27456));
label_52e758:
    // 0x52e758: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52e758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52e75c:
    // 0x52e75c: 0x24426b78  addiu       $v0, $v0, 0x6B78
    ctx->pc = 0x52e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27512));
label_52e760:
    // 0x52e760: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x52e760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_52e764:
    // 0x52e764: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x52e764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_52e768:
    // 0x52e768: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x52e768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_52e76c:
    // 0x52e76c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x52e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_52e770:
    // 0x52e770: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x52e770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_52e774:
    // 0x52e774: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x52e774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_52e778:
    // 0x52e778: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x52e778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_52e77c:
    // 0x52e77c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x52e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_52e780:
    // 0x52e780: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x52e780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_52e784:
    // 0x52e784: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x52e784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_52e788:
    // 0x52e788: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x52e788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_52e78c:
    // 0x52e78c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x52e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_52e790:
    // 0x52e790: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x52e790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_52e794:
    // 0x52e794: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x52e794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_52e798:
    // 0x52e798: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x52e798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_52e79c:
    // 0x52e79c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x52e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_52e7a0:
    // 0x52e7a0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x52e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_52e7a4:
    // 0x52e7a4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x52e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_52e7a8:
    // 0x52e7a8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x52e7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_52e7ac:
    // 0x52e7ac: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_52e7b0:
    if (ctx->pc == 0x52E7B0u) {
        ctx->pc = 0x52E7B4u;
        goto label_52e7b4;
    }
    ctx->pc = 0x52E7ACu;
    {
        const bool branch_taken_0x52e7ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e7ac) {
            ctx->pc = 0x52E840u;
            goto label_52e840;
        }
    }
    ctx->pc = 0x52E7B4u;
label_52e7b4:
    // 0x52e7b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x52e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_52e7b8:
    // 0x52e7b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x52e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_52e7bc:
    // 0x52e7bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x52e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_52e7c0:
    // 0x52e7c0: 0xc040138  jal         func_1004E0
label_52e7c4:
    if (ctx->pc == 0x52E7C4u) {
        ctx->pc = 0x52E7C4u;
            // 0x52e7c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x52E7C8u;
        goto label_52e7c8;
    }
    ctx->pc = 0x52E7C0u;
    SET_GPR_U32(ctx, 31, 0x52E7C8u);
    ctx->pc = 0x52E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E7C0u;
            // 0x52e7c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E7C8u; }
        if (ctx->pc != 0x52E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E7C8u; }
        if (ctx->pc != 0x52E7C8u) { return; }
    }
    ctx->pc = 0x52E7C8u;
label_52e7c8:
    // 0x52e7c8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52e7cc:
    // 0x52e7cc: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x52e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_52e7d0:
    // 0x52e7d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52e7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52e7d4:
    // 0x52e7d4: 0x24a5e860  addiu       $a1, $a1, -0x17A0
    ctx->pc = 0x52e7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961248));
label_52e7d8:
    // 0x52e7d8: 0x24c6dee0  addiu       $a2, $a2, -0x2120
    ctx->pc = 0x52e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958816));
label_52e7dc:
    // 0x52e7dc: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x52e7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_52e7e0:
    // 0x52e7e0: 0xc040840  jal         func_102100
label_52e7e4:
    if (ctx->pc == 0x52E7E4u) {
        ctx->pc = 0x52E7E4u;
            // 0x52e7e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E7E8u;
        goto label_52e7e8;
    }
    ctx->pc = 0x52E7E0u;
    SET_GPR_U32(ctx, 31, 0x52E7E8u);
    ctx->pc = 0x52E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E7E0u;
            // 0x52e7e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E7E8u; }
        if (ctx->pc != 0x52E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E7E8u; }
        if (ctx->pc != 0x52E7E8u) { return; }
    }
    ctx->pc = 0x52E7E8u;
label_52e7e8:
    // 0x52e7e8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x52e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_52e7ec:
    // 0x52e7ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x52e7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52e7f0:
    // 0x52e7f0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x52e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_52e7f4:
    // 0x52e7f4: 0xc0788fc  jal         func_1E23F0
label_52e7f8:
    if (ctx->pc == 0x52E7F8u) {
        ctx->pc = 0x52E7F8u;
            // 0x52e7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E7FCu;
        goto label_52e7fc;
    }
    ctx->pc = 0x52E7F4u;
    SET_GPR_U32(ctx, 31, 0x52E7FCu);
    ctx->pc = 0x52E7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E7F4u;
            // 0x52e7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E7FCu; }
        if (ctx->pc != 0x52E7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E7FCu; }
        if (ctx->pc != 0x52E7FCu) { return; }
    }
    ctx->pc = 0x52E7FCu;
label_52e7fc:
    // 0x52e7fc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x52e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_52e800:
    // 0x52e800: 0xc0788fc  jal         func_1E23F0
label_52e804:
    if (ctx->pc == 0x52E804u) {
        ctx->pc = 0x52E804u;
            // 0x52e804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E808u;
        goto label_52e808;
    }
    ctx->pc = 0x52E800u;
    SET_GPR_U32(ctx, 31, 0x52E808u);
    ctx->pc = 0x52E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E800u;
            // 0x52e804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E808u; }
        if (ctx->pc != 0x52E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E808u; }
        if (ctx->pc != 0x52E808u) { return; }
    }
    ctx->pc = 0x52E808u;
label_52e808:
    // 0x52e808: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52e808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e80c:
    // 0x52e80c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x52e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_52e810:
    // 0x52e810: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x52e810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_52e814:
    // 0x52e814: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x52e814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_52e818:
    // 0x52e818: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52e818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52e81c:
    // 0x52e81c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x52e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_52e820:
    // 0x52e820: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x52e820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_52e824:
    // 0x52e824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52e824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52e828:
    // 0x52e828: 0xc0a997c  jal         func_2A65F0
label_52e82c:
    if (ctx->pc == 0x52E82Cu) {
        ctx->pc = 0x52E82Cu;
            // 0x52e82c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x52E830u;
        goto label_52e830;
    }
    ctx->pc = 0x52E828u;
    SET_GPR_U32(ctx, 31, 0x52E830u);
    ctx->pc = 0x52E82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E828u;
            // 0x52e82c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E830u; }
        if (ctx->pc != 0x52E830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E830u; }
        if (ctx->pc != 0x52E830u) { return; }
    }
    ctx->pc = 0x52E830u;
label_52e830:
    // 0x52e830: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x52e830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_52e834:
    // 0x52e834: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x52e834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52e838:
    // 0x52e838: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_52e83c:
    if (ctx->pc == 0x52E83Cu) {
        ctx->pc = 0x52E83Cu;
            // 0x52e83c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x52E840u;
        goto label_52e840;
    }
    ctx->pc = 0x52E838u;
    {
        const bool branch_taken_0x52e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E838u;
            // 0x52e83c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e838) {
            ctx->pc = 0x52E80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52e80c;
        }
    }
    ctx->pc = 0x52E840u;
label_52e840:
    // 0x52e840: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x52e840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52e844:
    // 0x52e844: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52e844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52e848:
    // 0x52e848: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52e848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52e84c:
    // 0x52e84c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52e84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52e850:
    // 0x52e850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52e850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52e854:
    // 0x52e854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52e858:
    // 0x52e858: 0x3e00008  jr          $ra
label_52e85c:
    if (ctx->pc == 0x52E85Cu) {
        ctx->pc = 0x52E85Cu;
            // 0x52e85c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52E860u;
        goto label_52e860;
    }
    ctx->pc = 0x52E858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E858u;
            // 0x52e85c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E860u;
label_52e860:
    // 0x52e860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52e864:
    // 0x52e864: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52e868:
    // 0x52e868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52e86c:
    // 0x52e86c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52e86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52e870:
    // 0x52e870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52e874:
    // 0x52e874: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x52e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_52e878:
    // 0x52e878: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52e878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_52e87c:
    // 0x52e87c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x52e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_52e880:
    // 0x52e880: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x52e880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_52e884:
    // 0x52e884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x52e884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52e888:
    // 0x52e888: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x52e888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_52e88c:
    // 0x52e88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52e88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52e890:
    // 0x52e890: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x52e890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_52e894:
    // 0x52e894: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52e894u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52e898:
    // 0x52e898: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x52e898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_52e89c:
    // 0x52e89c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x52e89cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_52e8a0:
    // 0x52e8a0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x52e8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_52e8a4:
    // 0x52e8a4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x52e8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_52e8a8:
    // 0x52e8a8: 0xc04cbd8  jal         func_132F60
label_52e8ac:
    if (ctx->pc == 0x52E8ACu) {
        ctx->pc = 0x52E8ACu;
            // 0x52e8ac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x52E8B0u;
        goto label_52e8b0;
    }
    ctx->pc = 0x52E8A8u;
    SET_GPR_U32(ctx, 31, 0x52E8B0u);
    ctx->pc = 0x52E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E8A8u;
            // 0x52e8ac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E8B0u; }
        if (ctx->pc != 0x52E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E8B0u; }
        if (ctx->pc != 0x52E8B0u) { return; }
    }
    ctx->pc = 0x52E8B0u;
label_52e8b0:
    // 0x52e8b0: 0xc04c968  jal         func_1325A0
label_52e8b4:
    if (ctx->pc == 0x52E8B4u) {
        ctx->pc = 0x52E8B4u;
            // 0x52e8b4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x52E8B8u;
        goto label_52e8b8;
    }
    ctx->pc = 0x52E8B0u;
    SET_GPR_U32(ctx, 31, 0x52E8B8u);
    ctx->pc = 0x52E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E8B0u;
            // 0x52e8b4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E8B8u; }
        if (ctx->pc != 0x52E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E8B8u; }
        if (ctx->pc != 0x52E8B8u) { return; }
    }
    ctx->pc = 0x52E8B8u;
label_52e8b8:
    // 0x52e8b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52e8bc:
    // 0x52e8bc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x52e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_52e8c0:
    // 0x52e8c0: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x52e8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52e8c4:
    // 0x52e8c4: 0xc460cd40  lwc1        $f0, -0x32C0($v1)
    ctx->pc = 0x52e8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52e8c8:
    // 0x52e8c8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x52e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_52e8cc:
    // 0x52e8cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x52e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_52e8d0:
    // 0x52e8d0: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x52e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
label_52e8d4:
    // 0x52e8d4: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x52e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
label_52e8d8:
    // 0x52e8d8: 0x8cc30788  lw          $v1, 0x788($a2)
    ctx->pc = 0x52e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
label_52e8dc:
    // 0x52e8dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52e8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52e8e0:
    // 0x52e8e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x52e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_52e8e4:
    // 0x52e8e4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x52e8e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_52e8e8:
    // 0x52e8e8: 0xa203004d  sb          $v1, 0x4D($s0)
    ctx->pc = 0x52e8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 3));
label_52e8ec:
    // 0x52e8ec: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x52e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_52e8f0:
    // 0x52e8f0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x52e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_52e8f4:
    // 0x52e8f4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x52e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_52e8f8:
    // 0x52e8f8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x52e8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_52e8fc:
    // 0x52e8fc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x52e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_52e900:
    // 0x52e900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52e904:
    // 0x52e904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52e908:
    // 0x52e908: 0x3e00008  jr          $ra
label_52e90c:
    if (ctx->pc == 0x52E90Cu) {
        ctx->pc = 0x52E90Cu;
            // 0x52e90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52E910u;
        goto label_52e910;
    }
    ctx->pc = 0x52E908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E908u;
            // 0x52e90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E910u;
label_52e910:
    // 0x52e910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x52e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_52e914:
    // 0x52e914: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x52e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52e918:
    // 0x52e918: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52e91c:
    // 0x52e91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52e920:
    // 0x52e920: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x52e920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52e924:
    // 0x52e924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52e928:
    // 0x52e928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52e92c:
    // 0x52e92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52e930:
    // 0x52e930: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x52e930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52e934:
    // 0x52e934: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_52e938:
    if (ctx->pc == 0x52E938u) {
        ctx->pc = 0x52E938u;
            // 0x52e938: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E93Cu;
        goto label_52e93c;
    }
    ctx->pc = 0x52E934u;
    {
        const bool branch_taken_0x52e934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E934u;
            // 0x52e938: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e934) {
            ctx->pc = 0x52E978u;
            goto label_52e978;
        }
    }
    ctx->pc = 0x52E93Cu;
label_52e93c:
    // 0x52e93c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52e93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e940:
    // 0x52e940: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52e940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e944:
    // 0x52e944: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x52e944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52e948:
    // 0x52e948: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x52e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_52e94c:
    // 0x52e94c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x52e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_52e950:
    // 0x52e950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x52e950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52e954:
    // 0x52e954: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52e954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52e958:
    // 0x52e958: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x52e958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_52e95c:
    // 0x52e95c: 0x320f809  jalr        $t9
label_52e960:
    if (ctx->pc == 0x52E960u) {
        ctx->pc = 0x52E964u;
        goto label_52e964;
    }
    ctx->pc = 0x52E95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52E964u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x52E964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52E964u; }
            if (ctx->pc != 0x52E964u) { return; }
        }
        }
    }
    ctx->pc = 0x52E964u;
label_52e964:
    // 0x52e964: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x52e964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_52e968:
    // 0x52e968: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52e968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52e96c:
    // 0x52e96c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x52e96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_52e970:
    // 0x52e970: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_52e974:
    if (ctx->pc == 0x52E974u) {
        ctx->pc = 0x52E974u;
            // 0x52e974: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x52E978u;
        goto label_52e978;
    }
    ctx->pc = 0x52E970u;
    {
        const bool branch_taken_0x52e970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x52E974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E970u;
            // 0x52e974: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e970) {
            ctx->pc = 0x52E948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52e948;
        }
    }
    ctx->pc = 0x52E978u;
label_52e978:
    // 0x52e978: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x52e978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52e97c:
    // 0x52e97c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x52e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_52e980:
    // 0x52e980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52e980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_52e984:
    // 0x52e984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52e984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52e988:
    // 0x52e988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52e988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52e98c:
    // 0x52e98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52e98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52e990:
    // 0x52e990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52e994:
    // 0x52e994: 0x3e00008  jr          $ra
label_52e998:
    if (ctx->pc == 0x52E998u) {
        ctx->pc = 0x52E998u;
            // 0x52e998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x52E99Cu;
        goto label_52e99c;
    }
    ctx->pc = 0x52E994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E994u;
            // 0x52e998: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E99Cu;
label_52e99c:
    // 0x52e99c: 0x0  nop
    ctx->pc = 0x52e99cu;
    // NOP
label_52e9a0:
    // 0x52e9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52e9a4:
    // 0x52e9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52e9a8:
    // 0x52e9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52e9ac:
    // 0x52e9ac: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x52e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_52e9b0:
    // 0x52e9b0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_52e9b4:
    if (ctx->pc == 0x52E9B4u) {
        ctx->pc = 0x52E9B4u;
            // 0x52e9b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52E9B8u;
        goto label_52e9b8;
    }
    ctx->pc = 0x52E9B0u;
    {
        const bool branch_taken_0x52e9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E9B0u;
            // 0x52e9b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e9b0) {
            ctx->pc = 0x52EAD0u;
            goto label_52ead0;
        }
    }
    ctx->pc = 0x52E9B8u;
label_52e9b8:
    // 0x52e9b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x52e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52e9bc:
    // 0x52e9bc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_52e9c0:
    // 0x52e9c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x52e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_52e9c4:
    // 0x52e9c4: 0xc075128  jal         func_1D44A0
label_52e9c8:
    if (ctx->pc == 0x52E9C8u) {
        ctx->pc = 0x52E9C8u;
            // 0x52e9c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x52E9CCu;
        goto label_52e9cc;
    }
    ctx->pc = 0x52E9C4u;
    SET_GPR_U32(ctx, 31, 0x52E9CCu);
    ctx->pc = 0x52E9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E9C4u;
            // 0x52e9c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E9CCu; }
        if (ctx->pc != 0x52E9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E9CCu; }
        if (ctx->pc != 0x52E9CCu) { return; }
    }
    ctx->pc = 0x52E9CCu;
label_52e9cc:
    // 0x52e9cc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x52e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52e9d0:
    // 0x52e9d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52e9d4:
    // 0x52e9d4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x52e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_52e9d8:
    // 0x52e9d8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x52e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_52e9dc:
    // 0x52e9dc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52e9dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52e9e0:
    // 0x52e9e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52e9e4:
    if (ctx->pc == 0x52E9E4u) {
        ctx->pc = 0x52E9E4u;
            // 0x52e9e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x52E9E8u;
        goto label_52e9e8;
    }
    ctx->pc = 0x52E9E0u;
    {
        const bool branch_taken_0x52e9e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E9E0u;
            // 0x52e9e4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e9e0) {
            ctx->pc = 0x52E9F0u;
            goto label_52e9f0;
        }
    }
    ctx->pc = 0x52E9E8u;
label_52e9e8:
    // 0x52e9e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52e9ec:
    // 0x52e9ec: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x52e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_52e9f0:
    // 0x52e9f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52e9f4:
    // 0x52e9f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52e9f8:
    // 0x52e9f8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x52e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_52e9fc:
    // 0x52e9fc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52ea00:
    // 0x52ea00: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52ea00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52ea04:
    // 0x52ea04: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52ea08:
    if (ctx->pc == 0x52EA08u) {
        ctx->pc = 0x52EA08u;
            // 0x52ea08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52EA0Cu;
        goto label_52ea0c;
    }
    ctx->pc = 0x52EA04u;
    {
        const bool branch_taken_0x52ea04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ea04) {
            ctx->pc = 0x52EA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EA04u;
            // 0x52ea08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EA18u;
            goto label_52ea18;
        }
    }
    ctx->pc = 0x52EA0Cu;
label_52ea0c:
    // 0x52ea0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52ea10:
    // 0x52ea10: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x52ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_52ea14:
    // 0x52ea14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x52ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52ea18:
    // 0x52ea18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52ea1c:
    // 0x52ea1c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x52ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_52ea20:
    // 0x52ea20: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_52ea24:
    // 0x52ea24: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52ea24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_52ea28:
    // 0x52ea28: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52ea2c:
    if (ctx->pc == 0x52EA2Cu) {
        ctx->pc = 0x52EA2Cu;
            // 0x52ea2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x52EA30u;
        goto label_52ea30;
    }
    ctx->pc = 0x52EA28u;
    {
        const bool branch_taken_0x52ea28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ea28) {
            ctx->pc = 0x52EA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EA28u;
            // 0x52ea2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EA3Cu;
            goto label_52ea3c;
        }
    }
    ctx->pc = 0x52EA30u;
label_52ea30:
    // 0x52ea30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52ea34:
    // 0x52ea34: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x52ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_52ea38:
    // 0x52ea38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x52ea38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52ea3c:
    // 0x52ea3c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x52ea3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_52ea40:
    // 0x52ea40: 0x320f809  jalr        $t9
label_52ea44:
    if (ctx->pc == 0x52EA44u) {
        ctx->pc = 0x52EA44u;
            // 0x52ea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EA48u;
        goto label_52ea48;
    }
    ctx->pc = 0x52EA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52EA48u);
        ctx->pc = 0x52EA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EA40u;
            // 0x52ea44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52EA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52EA48u; }
            if (ctx->pc != 0x52EA48u) { return; }
        }
        }
    }
    ctx->pc = 0x52EA48u;
label_52ea48:
    // 0x52ea48: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52ea4c:
    // 0x52ea4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ea50:
    // 0x52ea50: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x52ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_52ea54:
    // 0x52ea54: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52ea58:
    // 0x52ea58: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52ea58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52ea5c:
    // 0x52ea5c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52ea5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52ea60:
    // 0x52ea60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52ea64:
    if (ctx->pc == 0x52EA64u) {
        ctx->pc = 0x52EA64u;
            // 0x52ea64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x52EA68u;
        goto label_52ea68;
    }
    ctx->pc = 0x52EA60u;
    {
        const bool branch_taken_0x52ea60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ea60) {
            ctx->pc = 0x52EA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EA60u;
            // 0x52ea64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EA74u;
            goto label_52ea74;
        }
    }
    ctx->pc = 0x52EA68u;
label_52ea68:
    // 0x52ea68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ea6c:
    // 0x52ea6c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_52ea70:
    // 0x52ea70: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x52ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_52ea74:
    // 0x52ea74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ea78:
    // 0x52ea78: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x52ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52ea7c:
    // 0x52ea7c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_52ea80:
    // 0x52ea80: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x52ea80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_52ea84:
    // 0x52ea84: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x52ea84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_52ea88:
    // 0x52ea88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52ea8c:
    if (ctx->pc == 0x52EA8Cu) {
        ctx->pc = 0x52EA90u;
        goto label_52ea90;
    }
    ctx->pc = 0x52EA88u;
    {
        const bool branch_taken_0x52ea88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ea88) {
            ctx->pc = 0x52EA98u;
            goto label_52ea98;
        }
    }
    ctx->pc = 0x52EA90u;
label_52ea90:
    // 0x52ea90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ea94:
    // 0x52ea94: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x52ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_52ea98:
    // 0x52ea98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52ea9c:
    // 0x52ea9c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x52ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_52eaa0:
    // 0x52eaa0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52eaa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52eaa4:
    // 0x52eaa4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52eaa8:
    if (ctx->pc == 0x52EAA8u) {
        ctx->pc = 0x52EAACu;
        goto label_52eaac;
    }
    ctx->pc = 0x52EAA4u;
    {
        const bool branch_taken_0x52eaa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52eaa4) {
            ctx->pc = 0x52EAB4u;
            goto label_52eab4;
        }
    }
    ctx->pc = 0x52EAACu;
label_52eaac:
    // 0x52eaac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52eab0:
    // 0x52eab0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x52eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_52eab4:
    // 0x52eab4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52eab8:
    // 0x52eab8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x52eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_52eabc:
    // 0x52eabc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52eabcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_52eac0:
    // 0x52eac0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_52eac4:
    if (ctx->pc == 0x52EAC4u) {
        ctx->pc = 0x52EAC4u;
            // 0x52eac4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x52EAC8u;
        goto label_52eac8;
    }
    ctx->pc = 0x52EAC0u;
    {
        const bool branch_taken_0x52eac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x52eac0) {
            ctx->pc = 0x52EAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EAC0u;
            // 0x52eac4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EAD4u;
            goto label_52ead4;
        }
    }
    ctx->pc = 0x52EAC8u;
label_52eac8:
    // 0x52eac8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52eacc:
    // 0x52eacc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x52eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_52ead0:
    // 0x52ead0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52ead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52ead4:
    // 0x52ead4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ead4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ead8:
    // 0x52ead8: 0x3e00008  jr          $ra
label_52eadc:
    if (ctx->pc == 0x52EADCu) {
        ctx->pc = 0x52EADCu;
            // 0x52eadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52EAE0u;
        goto label_52eae0;
    }
    ctx->pc = 0x52EAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52EADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EAD8u;
            // 0x52eadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52EAE0u;
label_52eae0:
    // 0x52eae0: 0x814b940  j           func_52E500
label_52eae4:
    if (ctx->pc == 0x52EAE4u) {
        ctx->pc = 0x52EAE4u;
            // 0x52eae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52EAE8u;
        goto label_52eae8;
    }
    ctx->pc = 0x52EAE0u;
    ctx->pc = 0x52EAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EAE0u;
            // 0x52eae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52E500u;
    {
        auto targetFn = runtime->lookupFunction(0x52E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52EAE8u;
label_52eae8:
    // 0x52eae8: 0x0  nop
    ctx->pc = 0x52eae8u;
    // NOP
label_52eaec:
    // 0x52eaec: 0x0  nop
    ctx->pc = 0x52eaecu;
    // NOP
label_52eaf0:
    // 0x52eaf0: 0x814b760  j           func_52DD80
label_52eaf4:
    if (ctx->pc == 0x52EAF4u) {
        ctx->pc = 0x52EAF4u;
            // 0x52eaf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52EAF8u;
        goto label_52eaf8;
    }
    ctx->pc = 0x52EAF0u;
    ctx->pc = 0x52EAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EAF0u;
            // 0x52eaf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DD80u;
    if (runtime->hasFunction(0x52DD80u)) {
        auto targetFn = runtime->lookupFunction(0x52DD80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0052DD80_0x52dd80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x52EAF8u;
label_52eaf8:
    // 0x52eaf8: 0x0  nop
    ctx->pc = 0x52eaf8u;
    // NOP
label_52eafc:
    // 0x52eafc: 0x0  nop
    ctx->pc = 0x52eafcu;
    // NOP
label_52eb00:
    // 0x52eb00: 0x814b73c  j           func_52DCF0
label_52eb04:
    if (ctx->pc == 0x52EB04u) {
        ctx->pc = 0x52EB04u;
            // 0x52eb04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x52EB08u;
        goto label_52eb08;
    }
    ctx->pc = 0x52EB00u;
    ctx->pc = 0x52EB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EB00u;
            // 0x52eb04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DCF0u;
    {
        auto targetFn = runtime->lookupFunction(0x52DCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x52EB08u;
label_52eb08:
    // 0x52eb08: 0x0  nop
    ctx->pc = 0x52eb08u;
    // NOP
label_52eb0c:
    // 0x52eb0c: 0x0  nop
    ctx->pc = 0x52eb0cu;
    // NOP
label_52eb10:
    // 0x52eb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52eb14:
    // 0x52eb14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52eb18:
    // 0x52eb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52eb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52eb1c:
    // 0x52eb1c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x52eb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_52eb20:
    // 0x52eb20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52eb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52eb24:
    // 0x52eb24: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x52eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52eb28:
    // 0x52eb28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52eb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52eb2c:
    // 0x52eb2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x52eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_52eb30:
    // 0x52eb30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52eb34:
    // 0x52eb34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52eb38:
    // 0x52eb38: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x52eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_52eb3c:
    // 0x52eb3c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x52eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_52eb40:
    // 0x52eb40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x52eb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_52eb44:
    // 0x52eb44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x52eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_52eb48:
    // 0x52eb48: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x52eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_52eb4c:
    // 0x52eb4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x52eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_52eb50:
    // 0x52eb50: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x52eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_52eb54:
    // 0x52eb54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x52eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_52eb58:
    // 0x52eb58: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x52eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_52eb5c:
    // 0x52eb5c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x52eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52eb60:
    // 0x52eb60: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x52eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_52eb64:
    // 0x52eb64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_52eb68:
    // 0x52eb68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x52eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52eb6c:
    // 0x52eb6c: 0xc0a997c  jal         func_2A65F0
label_52eb70:
    if (ctx->pc == 0x52EB70u) {
        ctx->pc = 0x52EB70u;
            // 0x52eb70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x52EB74u;
        goto label_52eb74;
    }
    ctx->pc = 0x52EB6Cu;
    SET_GPR_U32(ctx, 31, 0x52EB74u);
    ctx->pc = 0x52EB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EB6Cu;
            // 0x52eb70: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EB74u; }
        if (ctx->pc != 0x52EB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EB74u; }
        if (ctx->pc != 0x52EB74u) { return; }
    }
    ctx->pc = 0x52EB74u;
label_52eb74:
    // 0x52eb74: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x52eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_52eb78:
    // 0x52eb78: 0xc0d879c  jal         func_361E70
label_52eb7c:
    if (ctx->pc == 0x52EB7Cu) {
        ctx->pc = 0x52EB7Cu;
            // 0x52eb7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EB80u;
        goto label_52eb80;
    }
    ctx->pc = 0x52EB78u;
    SET_GPR_U32(ctx, 31, 0x52EB80u);
    ctx->pc = 0x52EB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EB78u;
            // 0x52eb7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EB80u; }
        if (ctx->pc != 0x52EB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EB80u; }
        if (ctx->pc != 0x52EB80u) { return; }
    }
    ctx->pc = 0x52EB80u;
label_52eb80:
    // 0x52eb80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52eb84:
    // 0x52eb84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52eb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52eb88:
    // 0x52eb88: 0x3e00008  jr          $ra
label_52eb8c:
    if (ctx->pc == 0x52EB8Cu) {
        ctx->pc = 0x52EB8Cu;
            // 0x52eb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52EB90u;
        goto label_52eb90;
    }
    ctx->pc = 0x52EB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EB88u;
            // 0x52eb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52EB90u;
label_52eb90:
    // 0x52eb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52eb94:
    // 0x52eb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52eb98:
    // 0x52eb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52eb9c:
    // 0x52eb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52eba0:
    // 0x52eba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52eba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52eba4:
    // 0x52eba4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_52eba8:
    if (ctx->pc == 0x52EBA8u) {
        ctx->pc = 0x52EBA8u;
            // 0x52eba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EBACu;
        goto label_52ebac;
    }
    ctx->pc = 0x52EBA4u;
    {
        const bool branch_taken_0x52eba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52EBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EBA4u;
            // 0x52eba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52eba4) {
            ctx->pc = 0x52EC00u;
            goto label_52ec00;
        }
    }
    ctx->pc = 0x52EBACu;
label_52ebac:
    // 0x52ebac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52ebb0:
    // 0x52ebb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52ebb4:
    // 0x52ebb4: 0x24636be0  addiu       $v1, $v1, 0x6BE0
    ctx->pc = 0x52ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27616));
label_52ebb8:
    // 0x52ebb8: 0x24426c18  addiu       $v0, $v0, 0x6C18
    ctx->pc = 0x52ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27672));
label_52ebbc:
    // 0x52ebbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52ebc0:
    // 0x52ebc0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_52ebc4:
    if (ctx->pc == 0x52EBC4u) {
        ctx->pc = 0x52EBC4u;
            // 0x52ebc4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x52EBC8u;
        goto label_52ebc8;
    }
    ctx->pc = 0x52EBC0u;
    {
        const bool branch_taken_0x52ebc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52EBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EBC0u;
            // 0x52ebc4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52ebc0) {
            ctx->pc = 0x52EBE8u;
            goto label_52ebe8;
        }
    }
    ctx->pc = 0x52EBC8u;
label_52ebc8:
    // 0x52ebc8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52ebcc:
    // 0x52ebcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52ebd0:
    // 0x52ebd0: 0x24636cd0  addiu       $v1, $v1, 0x6CD0
    ctx->pc = 0x52ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27856));
label_52ebd4:
    // 0x52ebd4: 0x24426d08  addiu       $v0, $v0, 0x6D08
    ctx->pc = 0x52ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27912));
label_52ebd8:
    // 0x52ebd8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52ebdc:
    // 0x52ebdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52ebdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52ebe0:
    // 0x52ebe0: 0xc14bb08  jal         func_52EC20
label_52ebe4:
    if (ctx->pc == 0x52EBE4u) {
        ctx->pc = 0x52EBE4u;
            // 0x52ebe4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x52EBE8u;
        goto label_52ebe8;
    }
    ctx->pc = 0x52EBE0u;
    SET_GPR_U32(ctx, 31, 0x52EBE8u);
    ctx->pc = 0x52EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EBE0u;
            // 0x52ebe4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52EC20u;
    if (runtime->hasFunction(0x52EC20u)) {
        auto targetFn = runtime->lookupFunction(0x52EC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EBE8u; }
        if (ctx->pc != 0x52EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052EC20_0x52ec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EBE8u; }
        if (ctx->pc != 0x52EBE8u) { return; }
    }
    ctx->pc = 0x52EBE8u;
label_52ebe8:
    // 0x52ebe8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_52ebec:
    // 0x52ebec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52ebecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52ebf0:
    // 0x52ebf0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52ebf4:
    if (ctx->pc == 0x52EBF4u) {
        ctx->pc = 0x52EBF4u;
            // 0x52ebf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EBF8u;
        goto label_52ebf8;
    }
    ctx->pc = 0x52EBF0u;
    {
        const bool branch_taken_0x52ebf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52ebf0) {
            ctx->pc = 0x52EBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52EBF0u;
            // 0x52ebf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52EC04u;
            goto label_52ec04;
        }
    }
    ctx->pc = 0x52EBF8u;
label_52ebf8:
    // 0x52ebf8: 0xc0400a8  jal         func_1002A0
label_52ebfc:
    if (ctx->pc == 0x52EBFCu) {
        ctx->pc = 0x52EBFCu;
            // 0x52ebfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52EC00u;
        goto label_52ec00;
    }
    ctx->pc = 0x52EBF8u;
    SET_GPR_U32(ctx, 31, 0x52EC00u);
    ctx->pc = 0x52EBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52EBF8u;
            // 0x52ebfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EC00u; }
        if (ctx->pc != 0x52EC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52EC00u; }
        if (ctx->pc != 0x52EC00u) { return; }
    }
    ctx->pc = 0x52EC00u;
label_52ec00:
    // 0x52ec00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52ec00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52ec04:
    // 0x52ec04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52ec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52ec08:
    // 0x52ec08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52ec08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52ec0c:
    // 0x52ec0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ec0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ec10:
    // 0x52ec10: 0x3e00008  jr          $ra
label_52ec14:
    if (ctx->pc == 0x52EC14u) {
        ctx->pc = 0x52EC14u;
            // 0x52ec14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52EC18u;
        goto label_52ec18;
    }
    ctx->pc = 0x52EC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52EC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52EC10u;
            // 0x52ec14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52EC18u;
label_52ec18:
    // 0x52ec18: 0x0  nop
    ctx->pc = 0x52ec18u;
    // NOP
label_52ec1c:
    // 0x52ec1c: 0x0  nop
    ctx->pc = 0x52ec1cu;
    // NOP
}
