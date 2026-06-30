#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038E6D0
// Address: 0x38e6d0 - 0x38ebf0
void sub_0038E6D0_0x38e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E6D0_0x38e6d0");
#endif

    switch (ctx->pc) {
        case 0x38e6d0u: goto label_38e6d0;
        case 0x38e6d4u: goto label_38e6d4;
        case 0x38e6d8u: goto label_38e6d8;
        case 0x38e6dcu: goto label_38e6dc;
        case 0x38e6e0u: goto label_38e6e0;
        case 0x38e6e4u: goto label_38e6e4;
        case 0x38e6e8u: goto label_38e6e8;
        case 0x38e6ecu: goto label_38e6ec;
        case 0x38e6f0u: goto label_38e6f0;
        case 0x38e6f4u: goto label_38e6f4;
        case 0x38e6f8u: goto label_38e6f8;
        case 0x38e6fcu: goto label_38e6fc;
        case 0x38e700u: goto label_38e700;
        case 0x38e704u: goto label_38e704;
        case 0x38e708u: goto label_38e708;
        case 0x38e70cu: goto label_38e70c;
        case 0x38e710u: goto label_38e710;
        case 0x38e714u: goto label_38e714;
        case 0x38e718u: goto label_38e718;
        case 0x38e71cu: goto label_38e71c;
        case 0x38e720u: goto label_38e720;
        case 0x38e724u: goto label_38e724;
        case 0x38e728u: goto label_38e728;
        case 0x38e72cu: goto label_38e72c;
        case 0x38e730u: goto label_38e730;
        case 0x38e734u: goto label_38e734;
        case 0x38e738u: goto label_38e738;
        case 0x38e73cu: goto label_38e73c;
        case 0x38e740u: goto label_38e740;
        case 0x38e744u: goto label_38e744;
        case 0x38e748u: goto label_38e748;
        case 0x38e74cu: goto label_38e74c;
        case 0x38e750u: goto label_38e750;
        case 0x38e754u: goto label_38e754;
        case 0x38e758u: goto label_38e758;
        case 0x38e75cu: goto label_38e75c;
        case 0x38e760u: goto label_38e760;
        case 0x38e764u: goto label_38e764;
        case 0x38e768u: goto label_38e768;
        case 0x38e76cu: goto label_38e76c;
        case 0x38e770u: goto label_38e770;
        case 0x38e774u: goto label_38e774;
        case 0x38e778u: goto label_38e778;
        case 0x38e77cu: goto label_38e77c;
        case 0x38e780u: goto label_38e780;
        case 0x38e784u: goto label_38e784;
        case 0x38e788u: goto label_38e788;
        case 0x38e78cu: goto label_38e78c;
        case 0x38e790u: goto label_38e790;
        case 0x38e794u: goto label_38e794;
        case 0x38e798u: goto label_38e798;
        case 0x38e79cu: goto label_38e79c;
        case 0x38e7a0u: goto label_38e7a0;
        case 0x38e7a4u: goto label_38e7a4;
        case 0x38e7a8u: goto label_38e7a8;
        case 0x38e7acu: goto label_38e7ac;
        case 0x38e7b0u: goto label_38e7b0;
        case 0x38e7b4u: goto label_38e7b4;
        case 0x38e7b8u: goto label_38e7b8;
        case 0x38e7bcu: goto label_38e7bc;
        case 0x38e7c0u: goto label_38e7c0;
        case 0x38e7c4u: goto label_38e7c4;
        case 0x38e7c8u: goto label_38e7c8;
        case 0x38e7ccu: goto label_38e7cc;
        case 0x38e7d0u: goto label_38e7d0;
        case 0x38e7d4u: goto label_38e7d4;
        case 0x38e7d8u: goto label_38e7d8;
        case 0x38e7dcu: goto label_38e7dc;
        case 0x38e7e0u: goto label_38e7e0;
        case 0x38e7e4u: goto label_38e7e4;
        case 0x38e7e8u: goto label_38e7e8;
        case 0x38e7ecu: goto label_38e7ec;
        case 0x38e7f0u: goto label_38e7f0;
        case 0x38e7f4u: goto label_38e7f4;
        case 0x38e7f8u: goto label_38e7f8;
        case 0x38e7fcu: goto label_38e7fc;
        case 0x38e800u: goto label_38e800;
        case 0x38e804u: goto label_38e804;
        case 0x38e808u: goto label_38e808;
        case 0x38e80cu: goto label_38e80c;
        case 0x38e810u: goto label_38e810;
        case 0x38e814u: goto label_38e814;
        case 0x38e818u: goto label_38e818;
        case 0x38e81cu: goto label_38e81c;
        case 0x38e820u: goto label_38e820;
        case 0x38e824u: goto label_38e824;
        case 0x38e828u: goto label_38e828;
        case 0x38e82cu: goto label_38e82c;
        case 0x38e830u: goto label_38e830;
        case 0x38e834u: goto label_38e834;
        case 0x38e838u: goto label_38e838;
        case 0x38e83cu: goto label_38e83c;
        case 0x38e840u: goto label_38e840;
        case 0x38e844u: goto label_38e844;
        case 0x38e848u: goto label_38e848;
        case 0x38e84cu: goto label_38e84c;
        case 0x38e850u: goto label_38e850;
        case 0x38e854u: goto label_38e854;
        case 0x38e858u: goto label_38e858;
        case 0x38e85cu: goto label_38e85c;
        case 0x38e860u: goto label_38e860;
        case 0x38e864u: goto label_38e864;
        case 0x38e868u: goto label_38e868;
        case 0x38e86cu: goto label_38e86c;
        case 0x38e870u: goto label_38e870;
        case 0x38e874u: goto label_38e874;
        case 0x38e878u: goto label_38e878;
        case 0x38e87cu: goto label_38e87c;
        case 0x38e880u: goto label_38e880;
        case 0x38e884u: goto label_38e884;
        case 0x38e888u: goto label_38e888;
        case 0x38e88cu: goto label_38e88c;
        case 0x38e890u: goto label_38e890;
        case 0x38e894u: goto label_38e894;
        case 0x38e898u: goto label_38e898;
        case 0x38e89cu: goto label_38e89c;
        case 0x38e8a0u: goto label_38e8a0;
        case 0x38e8a4u: goto label_38e8a4;
        case 0x38e8a8u: goto label_38e8a8;
        case 0x38e8acu: goto label_38e8ac;
        case 0x38e8b0u: goto label_38e8b0;
        case 0x38e8b4u: goto label_38e8b4;
        case 0x38e8b8u: goto label_38e8b8;
        case 0x38e8bcu: goto label_38e8bc;
        case 0x38e8c0u: goto label_38e8c0;
        case 0x38e8c4u: goto label_38e8c4;
        case 0x38e8c8u: goto label_38e8c8;
        case 0x38e8ccu: goto label_38e8cc;
        case 0x38e8d0u: goto label_38e8d0;
        case 0x38e8d4u: goto label_38e8d4;
        case 0x38e8d8u: goto label_38e8d8;
        case 0x38e8dcu: goto label_38e8dc;
        case 0x38e8e0u: goto label_38e8e0;
        case 0x38e8e4u: goto label_38e8e4;
        case 0x38e8e8u: goto label_38e8e8;
        case 0x38e8ecu: goto label_38e8ec;
        case 0x38e8f0u: goto label_38e8f0;
        case 0x38e8f4u: goto label_38e8f4;
        case 0x38e8f8u: goto label_38e8f8;
        case 0x38e8fcu: goto label_38e8fc;
        case 0x38e900u: goto label_38e900;
        case 0x38e904u: goto label_38e904;
        case 0x38e908u: goto label_38e908;
        case 0x38e90cu: goto label_38e90c;
        case 0x38e910u: goto label_38e910;
        case 0x38e914u: goto label_38e914;
        case 0x38e918u: goto label_38e918;
        case 0x38e91cu: goto label_38e91c;
        case 0x38e920u: goto label_38e920;
        case 0x38e924u: goto label_38e924;
        case 0x38e928u: goto label_38e928;
        case 0x38e92cu: goto label_38e92c;
        case 0x38e930u: goto label_38e930;
        case 0x38e934u: goto label_38e934;
        case 0x38e938u: goto label_38e938;
        case 0x38e93cu: goto label_38e93c;
        case 0x38e940u: goto label_38e940;
        case 0x38e944u: goto label_38e944;
        case 0x38e948u: goto label_38e948;
        case 0x38e94cu: goto label_38e94c;
        case 0x38e950u: goto label_38e950;
        case 0x38e954u: goto label_38e954;
        case 0x38e958u: goto label_38e958;
        case 0x38e95cu: goto label_38e95c;
        case 0x38e960u: goto label_38e960;
        case 0x38e964u: goto label_38e964;
        case 0x38e968u: goto label_38e968;
        case 0x38e96cu: goto label_38e96c;
        case 0x38e970u: goto label_38e970;
        case 0x38e974u: goto label_38e974;
        case 0x38e978u: goto label_38e978;
        case 0x38e97cu: goto label_38e97c;
        case 0x38e980u: goto label_38e980;
        case 0x38e984u: goto label_38e984;
        case 0x38e988u: goto label_38e988;
        case 0x38e98cu: goto label_38e98c;
        case 0x38e990u: goto label_38e990;
        case 0x38e994u: goto label_38e994;
        case 0x38e998u: goto label_38e998;
        case 0x38e99cu: goto label_38e99c;
        case 0x38e9a0u: goto label_38e9a0;
        case 0x38e9a4u: goto label_38e9a4;
        case 0x38e9a8u: goto label_38e9a8;
        case 0x38e9acu: goto label_38e9ac;
        case 0x38e9b0u: goto label_38e9b0;
        case 0x38e9b4u: goto label_38e9b4;
        case 0x38e9b8u: goto label_38e9b8;
        case 0x38e9bcu: goto label_38e9bc;
        case 0x38e9c0u: goto label_38e9c0;
        case 0x38e9c4u: goto label_38e9c4;
        case 0x38e9c8u: goto label_38e9c8;
        case 0x38e9ccu: goto label_38e9cc;
        case 0x38e9d0u: goto label_38e9d0;
        case 0x38e9d4u: goto label_38e9d4;
        case 0x38e9d8u: goto label_38e9d8;
        case 0x38e9dcu: goto label_38e9dc;
        case 0x38e9e0u: goto label_38e9e0;
        case 0x38e9e4u: goto label_38e9e4;
        case 0x38e9e8u: goto label_38e9e8;
        case 0x38e9ecu: goto label_38e9ec;
        case 0x38e9f0u: goto label_38e9f0;
        case 0x38e9f4u: goto label_38e9f4;
        case 0x38e9f8u: goto label_38e9f8;
        case 0x38e9fcu: goto label_38e9fc;
        case 0x38ea00u: goto label_38ea00;
        case 0x38ea04u: goto label_38ea04;
        case 0x38ea08u: goto label_38ea08;
        case 0x38ea0cu: goto label_38ea0c;
        case 0x38ea10u: goto label_38ea10;
        case 0x38ea14u: goto label_38ea14;
        case 0x38ea18u: goto label_38ea18;
        case 0x38ea1cu: goto label_38ea1c;
        case 0x38ea20u: goto label_38ea20;
        case 0x38ea24u: goto label_38ea24;
        case 0x38ea28u: goto label_38ea28;
        case 0x38ea2cu: goto label_38ea2c;
        case 0x38ea30u: goto label_38ea30;
        case 0x38ea34u: goto label_38ea34;
        case 0x38ea38u: goto label_38ea38;
        case 0x38ea3cu: goto label_38ea3c;
        case 0x38ea40u: goto label_38ea40;
        case 0x38ea44u: goto label_38ea44;
        case 0x38ea48u: goto label_38ea48;
        case 0x38ea4cu: goto label_38ea4c;
        case 0x38ea50u: goto label_38ea50;
        case 0x38ea54u: goto label_38ea54;
        case 0x38ea58u: goto label_38ea58;
        case 0x38ea5cu: goto label_38ea5c;
        case 0x38ea60u: goto label_38ea60;
        case 0x38ea64u: goto label_38ea64;
        case 0x38ea68u: goto label_38ea68;
        case 0x38ea6cu: goto label_38ea6c;
        case 0x38ea70u: goto label_38ea70;
        case 0x38ea74u: goto label_38ea74;
        case 0x38ea78u: goto label_38ea78;
        case 0x38ea7cu: goto label_38ea7c;
        case 0x38ea80u: goto label_38ea80;
        case 0x38ea84u: goto label_38ea84;
        case 0x38ea88u: goto label_38ea88;
        case 0x38ea8cu: goto label_38ea8c;
        case 0x38ea90u: goto label_38ea90;
        case 0x38ea94u: goto label_38ea94;
        case 0x38ea98u: goto label_38ea98;
        case 0x38ea9cu: goto label_38ea9c;
        case 0x38eaa0u: goto label_38eaa0;
        case 0x38eaa4u: goto label_38eaa4;
        case 0x38eaa8u: goto label_38eaa8;
        case 0x38eaacu: goto label_38eaac;
        case 0x38eab0u: goto label_38eab0;
        case 0x38eab4u: goto label_38eab4;
        case 0x38eab8u: goto label_38eab8;
        case 0x38eabcu: goto label_38eabc;
        case 0x38eac0u: goto label_38eac0;
        case 0x38eac4u: goto label_38eac4;
        case 0x38eac8u: goto label_38eac8;
        case 0x38eaccu: goto label_38eacc;
        case 0x38ead0u: goto label_38ead0;
        case 0x38ead4u: goto label_38ead4;
        case 0x38ead8u: goto label_38ead8;
        case 0x38eadcu: goto label_38eadc;
        case 0x38eae0u: goto label_38eae0;
        case 0x38eae4u: goto label_38eae4;
        case 0x38eae8u: goto label_38eae8;
        case 0x38eaecu: goto label_38eaec;
        case 0x38eaf0u: goto label_38eaf0;
        case 0x38eaf4u: goto label_38eaf4;
        case 0x38eaf8u: goto label_38eaf8;
        case 0x38eafcu: goto label_38eafc;
        case 0x38eb00u: goto label_38eb00;
        case 0x38eb04u: goto label_38eb04;
        case 0x38eb08u: goto label_38eb08;
        case 0x38eb0cu: goto label_38eb0c;
        case 0x38eb10u: goto label_38eb10;
        case 0x38eb14u: goto label_38eb14;
        case 0x38eb18u: goto label_38eb18;
        case 0x38eb1cu: goto label_38eb1c;
        case 0x38eb20u: goto label_38eb20;
        case 0x38eb24u: goto label_38eb24;
        case 0x38eb28u: goto label_38eb28;
        case 0x38eb2cu: goto label_38eb2c;
        case 0x38eb30u: goto label_38eb30;
        case 0x38eb34u: goto label_38eb34;
        case 0x38eb38u: goto label_38eb38;
        case 0x38eb3cu: goto label_38eb3c;
        case 0x38eb40u: goto label_38eb40;
        case 0x38eb44u: goto label_38eb44;
        case 0x38eb48u: goto label_38eb48;
        case 0x38eb4cu: goto label_38eb4c;
        case 0x38eb50u: goto label_38eb50;
        case 0x38eb54u: goto label_38eb54;
        case 0x38eb58u: goto label_38eb58;
        case 0x38eb5cu: goto label_38eb5c;
        case 0x38eb60u: goto label_38eb60;
        case 0x38eb64u: goto label_38eb64;
        case 0x38eb68u: goto label_38eb68;
        case 0x38eb6cu: goto label_38eb6c;
        case 0x38eb70u: goto label_38eb70;
        case 0x38eb74u: goto label_38eb74;
        case 0x38eb78u: goto label_38eb78;
        case 0x38eb7cu: goto label_38eb7c;
        case 0x38eb80u: goto label_38eb80;
        case 0x38eb84u: goto label_38eb84;
        case 0x38eb88u: goto label_38eb88;
        case 0x38eb8cu: goto label_38eb8c;
        case 0x38eb90u: goto label_38eb90;
        case 0x38eb94u: goto label_38eb94;
        case 0x38eb98u: goto label_38eb98;
        case 0x38eb9cu: goto label_38eb9c;
        case 0x38eba0u: goto label_38eba0;
        case 0x38eba4u: goto label_38eba4;
        case 0x38eba8u: goto label_38eba8;
        case 0x38ebacu: goto label_38ebac;
        case 0x38ebb0u: goto label_38ebb0;
        case 0x38ebb4u: goto label_38ebb4;
        case 0x38ebb8u: goto label_38ebb8;
        case 0x38ebbcu: goto label_38ebbc;
        case 0x38ebc0u: goto label_38ebc0;
        case 0x38ebc4u: goto label_38ebc4;
        case 0x38ebc8u: goto label_38ebc8;
        case 0x38ebccu: goto label_38ebcc;
        case 0x38ebd0u: goto label_38ebd0;
        case 0x38ebd4u: goto label_38ebd4;
        case 0x38ebd8u: goto label_38ebd8;
        case 0x38ebdcu: goto label_38ebdc;
        case 0x38ebe0u: goto label_38ebe0;
        case 0x38ebe4u: goto label_38ebe4;
        case 0x38ebe8u: goto label_38ebe8;
        case 0x38ebecu: goto label_38ebec;
        default: break;
    }

    ctx->pc = 0x38e6d0u;

label_38e6d0:
    // 0x38e6d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38e6d4:
    // 0x38e6d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e6d8:
    // 0x38e6d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38e6dc:
    // 0x38e6dc: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x38e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_38e6e0:
    // 0x38e6e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38e6e4:
    // 0x38e6e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38e6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38e6e8:
    // 0x38e6e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38e6e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e6ec:
    // 0x38e6ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e6f0:
    // 0x38e6f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38e6f4:
    // 0x38e6f4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x38e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_38e6f8:
    // 0x38e6f8: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x38e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_38e6fc:
    // 0x38e6fc: 0xa0850090  sb          $a1, 0x90($a0)
    ctx->pc = 0x38e6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 144), (uint8_t)GPR_U32(ctx, 5));
label_38e700:
    // 0x38e700: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x38e700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
label_38e704:
    // 0x38e704: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x38e704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
label_38e708:
    // 0x38e708: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x38e708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_38e70c:
    // 0x38e70c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x38e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
label_38e710:
    // 0x38e710: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x38e710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_38e714:
    // 0x38e714: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x38e714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_38e718:
    // 0x38e718: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x38e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_38e71c:
    // 0x38e71c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38e720:
    if (ctx->pc == 0x38E720u) {
        ctx->pc = 0x38E720u;
            // 0x38e720: 0x8e70009c  lw          $s0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->pc = 0x38E724u;
        goto label_38e724;
    }
    ctx->pc = 0x38E71Cu;
    {
        const bool branch_taken_0x38e71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e71c) {
            ctx->pc = 0x38E720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E71Cu;
            // 0x38e720: 0x8e70009c  lw          $s0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E738u;
            goto label_38e738;
        }
    }
    ctx->pc = 0x38E724u;
label_38e724:
    // 0x38e724: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x38e724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_38e728:
    // 0x38e728: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38e728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38e72c:
    // 0x38e72c: 0x320f809  jalr        $t9
label_38e730:
    if (ctx->pc == 0x38E730u) {
        ctx->pc = 0x38E734u;
        goto label_38e734;
    }
    ctx->pc = 0x38E72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E734u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E734u; }
            if (ctx->pc != 0x38E734u) { return; }
        }
        }
    }
    ctx->pc = 0x38E734u;
label_38e734:
    // 0x38e734: 0x8e70009c  lw          $s0, 0x9C($s3)
    ctx->pc = 0x38e734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_38e738:
    // 0x38e738: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_38e73c:
    if (ctx->pc == 0x38E73Cu) {
        ctx->pc = 0x38E740u;
        goto label_38e740;
    }
    ctx->pc = 0x38E738u;
    {
        const bool branch_taken_0x38e738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e738) {
            ctx->pc = 0x38E788u;
            goto label_38e788;
        }
    }
    ctx->pc = 0x38E740u;
label_38e740:
    // 0x38e740: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x38e740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
label_38e744:
    // 0x38e744: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e748:
    // 0x38e748: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_38e74c:
    if (ctx->pc == 0x38E74Cu) {
        ctx->pc = 0x38E750u;
        goto label_38e750;
    }
    ctx->pc = 0x38E748u;
    {
        const bool branch_taken_0x38e748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e748) {
            ctx->pc = 0x38E788u;
            goto label_38e788;
        }
    }
    ctx->pc = 0x38E750u;
label_38e750:
    // 0x38e750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38e750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e754:
    // 0x38e754: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38e754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e758:
    // 0x38e758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e75c:
    // 0x38e75c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_38e760:
    // 0x38e760: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38e764:
    // 0x38e764: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38e764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38e768:
    // 0x38e768: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38e768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38e76c:
    // 0x38e76c: 0x320f809  jalr        $t9
label_38e770:
    if (ctx->pc == 0x38E770u) {
        ctx->pc = 0x38E774u;
        goto label_38e774;
    }
    ctx->pc = 0x38E76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E774u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E774u; }
            if (ctx->pc != 0x38E774u) { return; }
        }
        }
    }
    ctx->pc = 0x38E774u;
label_38e774:
    // 0x38e774: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x38e774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_38e778:
    // 0x38e778: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38e778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38e77c:
    // 0x38e77c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x38e77cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38e780:
    // 0x38e780: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_38e784:
    if (ctx->pc == 0x38E784u) {
        ctx->pc = 0x38E784u;
            // 0x38e784: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38E788u;
        goto label_38e788;
    }
    ctx->pc = 0x38E780u;
    {
        const bool branch_taken_0x38e780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E780u;
            // 0x38e784: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e780) {
            ctx->pc = 0x38E758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38e758;
        }
    }
    ctx->pc = 0x38E788u;
label_38e788:
    // 0x38e788: 0xae6000b4  sw          $zero, 0xB4($s3)
    ctx->pc = 0x38e788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 0));
label_38e78c:
    // 0x38e78c: 0xae6000ac  sw          $zero, 0xAC($s3)
    ctx->pc = 0x38e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
label_38e790:
    // 0x38e790: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x38e790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_38e794:
    // 0x38e794: 0xae6000a8  sw          $zero, 0xA8($s3)
    ctx->pc = 0x38e794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 0));
label_38e798:
    // 0x38e798: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38e79c:
    // 0x38e79c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38e79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38e7a0:
    // 0x38e7a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e7a4:
    // 0x38e7a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e7a8:
    // 0x38e7a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38e7ac:
    // 0x38e7ac: 0x3e00008  jr          $ra
label_38e7b0:
    if (ctx->pc == 0x38E7B0u) {
        ctx->pc = 0x38E7B0u;
            // 0x38e7b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38E7B4u;
        goto label_38e7b4;
    }
    ctx->pc = 0x38E7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E7ACu;
            // 0x38e7b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38E7B4u;
label_38e7b4:
    // 0x38e7b4: 0x0  nop
    ctx->pc = 0x38e7b4u;
    // NOP
label_38e7b8:
    // 0x38e7b8: 0x0  nop
    ctx->pc = 0x38e7b8u;
    // NOP
label_38e7bc:
    // 0x38e7bc: 0x0  nop
    ctx->pc = 0x38e7bcu;
    // NOP
label_38e7c0:
    // 0x38e7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38e7c4:
    // 0x38e7c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38e7c8:
    // 0x38e7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e7cc:
    // 0x38e7cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38e7d0:
    // 0x38e7d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e7d4:
    // 0x38e7d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_38e7d8:
    if (ctx->pc == 0x38E7D8u) {
        ctx->pc = 0x38E7D8u;
            // 0x38e7d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E7DCu;
        goto label_38e7dc;
    }
    ctx->pc = 0x38E7D4u;
    {
        const bool branch_taken_0x38e7d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E7D4u;
            // 0x38e7d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7d4) {
            ctx->pc = 0x38E818u;
            goto label_38e818;
        }
    }
    ctx->pc = 0x38E7DCu;
label_38e7dc:
    // 0x38e7dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38e7e0:
    // 0x38e7e0: 0x24427bc0  addiu       $v0, $v0, 0x7BC0
    ctx->pc = 0x38e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31680));
label_38e7e4:
    // 0x38e7e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_38e7e8:
    if (ctx->pc == 0x38E7E8u) {
        ctx->pc = 0x38E7E8u;
            // 0x38e7e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x38E7ECu;
        goto label_38e7ec;
    }
    ctx->pc = 0x38E7E4u;
    {
        const bool branch_taken_0x38e7e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E7E4u;
            // 0x38e7e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7e4) {
            ctx->pc = 0x38E800u;
            goto label_38e800;
        }
    }
    ctx->pc = 0x38E7ECu;
label_38e7ec:
    // 0x38e7ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38e7f0:
    // 0x38e7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e7f4:
    // 0x38e7f4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x38e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_38e7f8:
    // 0x38e7f8: 0xc057a68  jal         func_15E9A0
label_38e7fc:
    if (ctx->pc == 0x38E7FCu) {
        ctx->pc = 0x38E7FCu;
            // 0x38e7fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x38E800u;
        goto label_38e800;
    }
    ctx->pc = 0x38E7F8u;
    SET_GPR_U32(ctx, 31, 0x38E800u);
    ctx->pc = 0x38E7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E7F8u;
            // 0x38e7fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E800u; }
        if (ctx->pc != 0x38E800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E800u; }
        if (ctx->pc != 0x38E800u) { return; }
    }
    ctx->pc = 0x38E800u;
label_38e800:
    // 0x38e800: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x38e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_38e804:
    // 0x38e804: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38e804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38e808:
    // 0x38e808: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_38e80c:
    if (ctx->pc == 0x38E80Cu) {
        ctx->pc = 0x38E80Cu;
            // 0x38e80c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E810u;
        goto label_38e810;
    }
    ctx->pc = 0x38E808u;
    {
        const bool branch_taken_0x38e808 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38e808) {
            ctx->pc = 0x38E80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E808u;
            // 0x38e80c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E81Cu;
            goto label_38e81c;
        }
    }
    ctx->pc = 0x38E810u;
label_38e810:
    // 0x38e810: 0xc0400a8  jal         func_1002A0
label_38e814:
    if (ctx->pc == 0x38E814u) {
        ctx->pc = 0x38E814u;
            // 0x38e814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E818u;
        goto label_38e818;
    }
    ctx->pc = 0x38E810u;
    SET_GPR_U32(ctx, 31, 0x38E818u);
    ctx->pc = 0x38E814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E810u;
            // 0x38e814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E818u; }
        if (ctx->pc != 0x38E818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E818u; }
        if (ctx->pc != 0x38E818u) { return; }
    }
    ctx->pc = 0x38E818u;
label_38e818:
    // 0x38e818: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38e818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e81c:
    // 0x38e81c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38e81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38e820:
    // 0x38e820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e824:
    // 0x38e824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38e828:
    // 0x38e828: 0x3e00008  jr          $ra
label_38e82c:
    if (ctx->pc == 0x38E82Cu) {
        ctx->pc = 0x38E82Cu;
            // 0x38e82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38E830u;
        goto label_38e830;
    }
    ctx->pc = 0x38E828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E828u;
            // 0x38e82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38E830u;
label_38e830:
    // 0x38e830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38e834:
    // 0x38e834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38e838:
    // 0x38e838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e83c:
    // 0x38e83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38e840:
    // 0x38e840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e844:
    // 0x38e844: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_38e848:
    if (ctx->pc == 0x38E848u) {
        ctx->pc = 0x38E848u;
            // 0x38e848: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E84Cu;
        goto label_38e84c;
    }
    ctx->pc = 0x38E844u;
    {
        const bool branch_taken_0x38e844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E844u;
            // 0x38e848: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e844) {
            ctx->pc = 0x38E8A0u;
            goto label_38e8a0;
        }
    }
    ctx->pc = 0x38E84Cu;
label_38e84c:
    // 0x38e84c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38e850:
    // 0x38e850: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38e854:
    // 0x38e854: 0x24637bf0  addiu       $v1, $v1, 0x7BF0
    ctx->pc = 0x38e854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31728));
label_38e858:
    // 0x38e858: 0x24427c28  addiu       $v0, $v0, 0x7C28
    ctx->pc = 0x38e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31784));
label_38e85c:
    // 0x38e85c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38e860:
    // 0x38e860: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_38e864:
    if (ctx->pc == 0x38E864u) {
        ctx->pc = 0x38E864u;
            // 0x38e864: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x38E868u;
        goto label_38e868;
    }
    ctx->pc = 0x38E860u;
    {
        const bool branch_taken_0x38e860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E860u;
            // 0x38e864: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e860) {
            ctx->pc = 0x38E888u;
            goto label_38e888;
        }
    }
    ctx->pc = 0x38E868u;
label_38e868:
    // 0x38e868: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38e868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38e86c:
    // 0x38e86c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38e870:
    // 0x38e870: 0x24630560  addiu       $v1, $v1, 0x560
    ctx->pc = 0x38e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1376));
label_38e874:
    // 0x38e874: 0x24420598  addiu       $v0, $v0, 0x598
    ctx->pc = 0x38e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1432));
label_38e878:
    // 0x38e878: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38e878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38e87c:
    // 0x38e87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38e87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e880:
    // 0x38e880: 0xc0b2590  jal         func_2C9640
label_38e884:
    if (ctx->pc == 0x38E884u) {
        ctx->pc = 0x38E884u;
            // 0x38e884: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x38E888u;
        goto label_38e888;
    }
    ctx->pc = 0x38E880u;
    SET_GPR_U32(ctx, 31, 0x38E888u);
    ctx->pc = 0x38E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E880u;
            // 0x38e884: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9640u;
    if (runtime->hasFunction(0x2C9640u)) {
        auto targetFn = runtime->lookupFunction(0x2C9640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E888u; }
        if (ctx->pc != 0x38E888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9640_0x2c9640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E888u; }
        if (ctx->pc != 0x38E888u) { return; }
    }
    ctx->pc = 0x38E888u;
label_38e888:
    // 0x38e888: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x38e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_38e88c:
    // 0x38e88c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38e88cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38e890:
    // 0x38e890: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_38e894:
    if (ctx->pc == 0x38E894u) {
        ctx->pc = 0x38E894u;
            // 0x38e894: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E898u;
        goto label_38e898;
    }
    ctx->pc = 0x38E890u;
    {
        const bool branch_taken_0x38e890 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38e890) {
            ctx->pc = 0x38E894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E890u;
            // 0x38e894: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E8A4u;
            goto label_38e8a4;
        }
    }
    ctx->pc = 0x38E898u;
label_38e898:
    // 0x38e898: 0xc0400a8  jal         func_1002A0
label_38e89c:
    if (ctx->pc == 0x38E89Cu) {
        ctx->pc = 0x38E89Cu;
            // 0x38e89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E8A0u;
        goto label_38e8a0;
    }
    ctx->pc = 0x38E898u;
    SET_GPR_U32(ctx, 31, 0x38E8A0u);
    ctx->pc = 0x38E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E898u;
            // 0x38e89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E8A0u; }
        if (ctx->pc != 0x38E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E8A0u; }
        if (ctx->pc != 0x38E8A0u) { return; }
    }
    ctx->pc = 0x38E8A0u;
label_38e8a0:
    // 0x38e8a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38e8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e8a4:
    // 0x38e8a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38e8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38e8a8:
    // 0x38e8a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e8ac:
    // 0x38e8ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38e8b0:
    // 0x38e8b0: 0x3e00008  jr          $ra
label_38e8b4:
    if (ctx->pc == 0x38E8B4u) {
        ctx->pc = 0x38E8B4u;
            // 0x38e8b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38E8B8u;
        goto label_38e8b8;
    }
    ctx->pc = 0x38E8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E8B0u;
            // 0x38e8b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38E8B8u;
label_38e8b8:
    // 0x38e8b8: 0x0  nop
    ctx->pc = 0x38e8b8u;
    // NOP
label_38e8bc:
    // 0x38e8bc: 0x0  nop
    ctx->pc = 0x38e8bcu;
    // NOP
label_38e8c0:
    // 0x38e8c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x38e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_38e8c4:
    // 0x38e8c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38e8c8:
    // 0x38e8c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_38e8cc:
    // 0x38e8cc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x38e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_38e8d0:
    // 0x38e8d0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x38e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_38e8d4:
    // 0x38e8d4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x38e8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38e8d8:
    // 0x38e8d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_38e8dc:
    // 0x38e8dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38e8e0:
    // 0x38e8e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38e8e4:
    // 0x38e8e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38e8e8:
    // 0x38e8e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38e8ec:
    // 0x38e8ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38e8f0:
    // 0x38e8f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38e8f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38e8f4:
    // 0x38e8f4: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x38e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_38e8f8:
    // 0x38e8f8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x38e8f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_38e8fc:
    // 0x38e8fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38e900:
    // 0x38e900: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_38e904:
    if (ctx->pc == 0x38E904u) {
        ctx->pc = 0x38E904u;
            // 0x38e904: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E908u;
        goto label_38e908;
    }
    ctx->pc = 0x38E900u;
    {
        const bool branch_taken_0x38e900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E900u;
            // 0x38e904: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e900) {
            ctx->pc = 0x38E944u;
            goto label_38e944;
        }
    }
    ctx->pc = 0x38E908u;
label_38e908:
    // 0x38e908: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38e908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38e90c:
    // 0x38e90c: 0x50a300ac  beql        $a1, $v1, . + 4 + (0xAC << 2)
label_38e910:
    if (ctx->pc == 0x38E910u) {
        ctx->pc = 0x38E910u;
            // 0x38e910: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x38E914u;
        goto label_38e914;
    }
    ctx->pc = 0x38E90Cu;
    {
        const bool branch_taken_0x38e90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38e90c) {
            ctx->pc = 0x38E910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E90Cu;
            // 0x38e910: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38EBC0u;
            goto label_38ebc0;
        }
    }
    ctx->pc = 0x38E914u;
label_38e914:
    // 0x38e914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e918:
    // 0x38e918: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_38e91c:
    if (ctx->pc == 0x38E91Cu) {
        ctx->pc = 0x38E91Cu;
            // 0x38e91c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38E920u;
        goto label_38e920;
    }
    ctx->pc = 0x38E918u;
    {
        const bool branch_taken_0x38e918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38e918) {
            ctx->pc = 0x38E91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E918u;
            // 0x38e91c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E928u;
            goto label_38e928;
        }
    }
    ctx->pc = 0x38E920u;
label_38e920:
    // 0x38e920: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_38e924:
    if (ctx->pc == 0x38E924u) {
        ctx->pc = 0x38E928u;
        goto label_38e928;
    }
    ctx->pc = 0x38E920u;
    {
        const bool branch_taken_0x38e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e920) {
            ctx->pc = 0x38EBBCu;
            goto label_38ebbc;
        }
    }
    ctx->pc = 0x38E928u;
label_38e928:
    // 0x38e928: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x38e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_38e92c:
    // 0x38e92c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x38e92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_38e930:
    // 0x38e930: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x38e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_38e934:
    // 0x38e934: 0x320f809  jalr        $t9
label_38e938:
    if (ctx->pc == 0x38E938u) {
        ctx->pc = 0x38E938u;
            // 0x38e938: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x38E93Cu;
        goto label_38e93c;
    }
    ctx->pc = 0x38E934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E93Cu);
        ctx->pc = 0x38E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E934u;
            // 0x38e938: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E93Cu; }
            if (ctx->pc != 0x38E93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38E93Cu;
label_38e93c:
    // 0x38e93c: 0x1000009f  b           . + 4 + (0x9F << 2)
label_38e940:
    if (ctx->pc == 0x38E940u) {
        ctx->pc = 0x38E944u;
        goto label_38e944;
    }
    ctx->pc = 0x38E93Cu;
    {
        const bool branch_taken_0x38e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e93c) {
            ctx->pc = 0x38EBBCu;
            goto label_38ebbc;
        }
    }
    ctx->pc = 0x38E944u;
label_38e944:
    // 0x38e944: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x38e944u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_38e948:
    // 0x38e948: 0x12e0009c  beqz        $s7, . + 4 + (0x9C << 2)
label_38e94c:
    if (ctx->pc == 0x38E94Cu) {
        ctx->pc = 0x38E950u;
        goto label_38e950;
    }
    ctx->pc = 0x38E948u;
    {
        const bool branch_taken_0x38e948 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e948) {
            ctx->pc = 0x38EBBCu;
            goto label_38ebbc;
        }
    }
    ctx->pc = 0x38E950u;
label_38e950:
    // 0x38e950: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38e954:
    // 0x38e954: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x38e954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_38e958:
    // 0x38e958: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x38e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_38e95c:
    // 0x38e95c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x38e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_38e960:
    // 0x38e960: 0x8c84d130  lw          $a0, -0x2ED0($a0)
    ctx->pc = 0x38e960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_38e964:
    // 0x38e964: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x38e964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_38e968:
    // 0x38e968: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x38e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_38e96c:
    // 0x38e96c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x38e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_38e970:
    // 0x38e970: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38e970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38e974:
    // 0x38e974: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x38e974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_38e978:
    // 0x38e978: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x38e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_38e97c:
    // 0x38e97c: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x38e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_38e980:
    // 0x38e980: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x38e980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_38e984:
    // 0x38e984: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x38e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_38e988:
    // 0x38e988: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x38e988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38e98c:
    // 0x38e98c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38e990:
    // 0x38e990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38e994:
    // 0x38e994: 0xc04e738  jal         func_139CE0
label_38e998:
    if (ctx->pc == 0x38E998u) {
        ctx->pc = 0x38E998u;
            // 0x38e998: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x38E99Cu;
        goto label_38e99c;
    }
    ctx->pc = 0x38E994u;
    SET_GPR_U32(ctx, 31, 0x38E99Cu);
    ctx->pc = 0x38E998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E994u;
            // 0x38e998: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E99Cu; }
        if (ctx->pc != 0x38E99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E99Cu; }
        if (ctx->pc != 0x38E99Cu) { return; }
    }
    ctx->pc = 0x38E99Cu;
label_38e99c:
    // 0x38e99c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38e9a0:
    // 0x38e9a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38e9a4:
    // 0x38e9a4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x38e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_38e9a8:
    // 0x38e9a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38e9a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e9ac:
    // 0x38e9ac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_38e9b0:
    // 0x38e9b0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x38e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_38e9b4:
    // 0x38e9b4: 0xc4545fd0  lwc1        $f20, 0x5FD0($v0)
    ctx->pc = 0x38e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38e9b8:
    // 0x38e9b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38e9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e9bc:
    // 0x38e9bc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x38e9bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38e9c0:
    // 0x38e9c0: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x38e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_38e9c4:
    // 0x38e9c4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x38e9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38e9c8:
    // 0x38e9c8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x38e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_38e9cc:
    // 0x38e9cc: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x38e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_38e9d0:
    // 0x38e9d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x38e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_38e9d4:
    // 0x38e9d4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x38e9d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38e9d8:
    // 0x38e9d8: 0xc0e3b50  jal         func_38ED40
label_38e9dc:
    if (ctx->pc == 0x38E9DCu) {
        ctx->pc = 0x38E9DCu;
            // 0x38e9dc: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x38E9E0u;
        goto label_38e9e0;
    }
    ctx->pc = 0x38E9D8u;
    SET_GPR_U32(ctx, 31, 0x38E9E0u);
    ctx->pc = 0x38E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E9D8u;
            // 0x38e9dc: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38ED40u;
    if (runtime->hasFunction(0x38ED40u)) {
        auto targetFn = runtime->lookupFunction(0x38ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E9E0u; }
        if (ctx->pc != 0x38E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038ED40_0x38ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E9E0u; }
        if (ctx->pc != 0x38E9E0u) { return; }
    }
    ctx->pc = 0x38E9E0u;
label_38e9e0:
    // 0x38e9e0: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_38e9e4:
    if (ctx->pc == 0x38E9E4u) {
        ctx->pc = 0x38E9E8u;
        goto label_38e9e8;
    }
    ctx->pc = 0x38E9E0u;
    {
        const bool branch_taken_0x38e9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e9e0) {
            ctx->pc = 0x38EB80u;
            goto label_38eb80;
        }
    }
    ctx->pc = 0x38E9E8u;
label_38e9e8:
    // 0x38e9e8: 0xc0d1c14  jal         func_347050
label_38e9ec:
    if (ctx->pc == 0x38E9ECu) {
        ctx->pc = 0x38E9ECu;
            // 0x38e9ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E9F0u;
        goto label_38e9f0;
    }
    ctx->pc = 0x38E9E8u;
    SET_GPR_U32(ctx, 31, 0x38E9F0u);
    ctx->pc = 0x38E9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E9E8u;
            // 0x38e9ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E9F0u; }
        if (ctx->pc != 0x38E9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E9F0u; }
        if (ctx->pc != 0x38E9F0u) { return; }
    }
    ctx->pc = 0x38E9F0u;
label_38e9f0:
    // 0x38e9f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38e9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e9f4:
    // 0x38e9f4: 0xc04f278  jal         func_13C9E0
label_38e9f8:
    if (ctx->pc == 0x38E9F8u) {
        ctx->pc = 0x38E9F8u;
            // 0x38e9f8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38E9FCu;
        goto label_38e9fc;
    }
    ctx->pc = 0x38E9F4u;
    SET_GPR_U32(ctx, 31, 0x38E9FCu);
    ctx->pc = 0x38E9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E9F4u;
            // 0x38e9f8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E9FCu; }
        if (ctx->pc != 0x38E9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E9FCu; }
        if (ctx->pc != 0x38E9FCu) { return; }
    }
    ctx->pc = 0x38E9FCu;
label_38e9fc:
    // 0x38e9fc: 0xc0d1c10  jal         func_347040
label_38ea00:
    if (ctx->pc == 0x38EA00u) {
        ctx->pc = 0x38EA00u;
            // 0x38ea00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EA04u;
        goto label_38ea04;
    }
    ctx->pc = 0x38E9FCu;
    SET_GPR_U32(ctx, 31, 0x38EA04u);
    ctx->pc = 0x38EA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E9FCu;
            // 0x38ea00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA04u; }
        if (ctx->pc != 0x38EA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA04u; }
        if (ctx->pc != 0x38EA04u) { return; }
    }
    ctx->pc = 0x38EA04u;
label_38ea04:
    // 0x38ea04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38ea04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ea08:
    // 0x38ea08: 0xc04ce80  jal         func_133A00
label_38ea0c:
    if (ctx->pc == 0x38EA0Cu) {
        ctx->pc = 0x38EA0Cu;
            // 0x38ea0c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38EA10u;
        goto label_38ea10;
    }
    ctx->pc = 0x38EA08u;
    SET_GPR_U32(ctx, 31, 0x38EA10u);
    ctx->pc = 0x38EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA08u;
            // 0x38ea0c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA10u; }
        if (ctx->pc != 0x38EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA10u; }
        if (ctx->pc != 0x38EA10u) { return; }
    }
    ctx->pc = 0x38EA10u;
label_38ea10:
    // 0x38ea10: 0xc0d4108  jal         func_350420
label_38ea14:
    if (ctx->pc == 0x38EA14u) {
        ctx->pc = 0x38EA18u;
        goto label_38ea18;
    }
    ctx->pc = 0x38EA10u;
    SET_GPR_U32(ctx, 31, 0x38EA18u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA18u; }
        if (ctx->pc != 0x38EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA18u; }
        if (ctx->pc != 0x38EA18u) { return; }
    }
    ctx->pc = 0x38EA18u;
label_38ea18:
    // 0x38ea18: 0xc0b36b4  jal         func_2CDAD0
label_38ea1c:
    if (ctx->pc == 0x38EA1Cu) {
        ctx->pc = 0x38EA1Cu;
            // 0x38ea1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EA20u;
        goto label_38ea20;
    }
    ctx->pc = 0x38EA18u;
    SET_GPR_U32(ctx, 31, 0x38EA20u);
    ctx->pc = 0x38EA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA18u;
            // 0x38ea1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA20u; }
        if (ctx->pc != 0x38EA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA20u; }
        if (ctx->pc != 0x38EA20u) { return; }
    }
    ctx->pc = 0x38EA20u;
label_38ea20:
    // 0x38ea20: 0xc0b9c64  jal         func_2E7190
label_38ea24:
    if (ctx->pc == 0x38EA24u) {
        ctx->pc = 0x38EA24u;
            // 0x38ea24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EA28u;
        goto label_38ea28;
    }
    ctx->pc = 0x38EA20u;
    SET_GPR_U32(ctx, 31, 0x38EA28u);
    ctx->pc = 0x38EA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA20u;
            // 0x38ea24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA28u; }
        if (ctx->pc != 0x38EA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA28u; }
        if (ctx->pc != 0x38EA28u) { return; }
    }
    ctx->pc = 0x38EA28u;
label_38ea28:
    // 0x38ea28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38ea28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ea2c:
    // 0x38ea2c: 0xc0d4104  jal         func_350410
label_38ea30:
    if (ctx->pc == 0x38EA30u) {
        ctx->pc = 0x38EA30u;
            // 0x38ea30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EA34u;
        goto label_38ea34;
    }
    ctx->pc = 0x38EA2Cu;
    SET_GPR_U32(ctx, 31, 0x38EA34u);
    ctx->pc = 0x38EA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA2Cu;
            // 0x38ea30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA34u; }
        if (ctx->pc != 0x38EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA34u; }
        if (ctx->pc != 0x38EA34u) { return; }
    }
    ctx->pc = 0x38EA34u;
label_38ea34:
    // 0x38ea34: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x38ea34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38ea38:
    // 0x38ea38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ea3c:
    // 0x38ea3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38ea3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ea40:
    // 0x38ea40: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x38ea40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38ea44:
    // 0x38ea44: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38ea44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ea48:
    // 0x38ea48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38ea48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ea4c:
    // 0x38ea4c: 0xc0d40ac  jal         func_3502B0
label_38ea50:
    if (ctx->pc == 0x38EA50u) {
        ctx->pc = 0x38EA50u;
            // 0x38ea50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38EA54u;
        goto label_38ea54;
    }
    ctx->pc = 0x38EA4Cu;
    SET_GPR_U32(ctx, 31, 0x38EA54u);
    ctx->pc = 0x38EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA4Cu;
            // 0x38ea50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA54u; }
        if (ctx->pc != 0x38EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA54u; }
        if (ctx->pc != 0x38EA54u) { return; }
    }
    ctx->pc = 0x38EA54u;
label_38ea54:
    // 0x38ea54: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x38ea54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_38ea58:
    // 0x38ea58: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
label_38ea5c:
    if (ctx->pc == 0x38EA5Cu) {
        ctx->pc = 0x38EA5Cu;
            // 0x38ea5c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x38EA60u;
        goto label_38ea60;
    }
    ctx->pc = 0x38EA58u;
    {
        const bool branch_taken_0x38ea58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA58u;
            // 0x38ea5c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ea58) {
            ctx->pc = 0x38EB80u;
            goto label_38eb80;
        }
    }
    ctx->pc = 0x38EA60u;
label_38ea60:
    // 0x38ea60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38ea64:
    // 0x38ea64: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x38ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38ea68:
    // 0x38ea68: 0xc04cd60  jal         func_133580
label_38ea6c:
    if (ctx->pc == 0x38EA6Cu) {
        ctx->pc = 0x38EA6Cu;
            // 0x38ea6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EA70u;
        goto label_38ea70;
    }
    ctx->pc = 0x38EA68u;
    SET_GPR_U32(ctx, 31, 0x38EA70u);
    ctx->pc = 0x38EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA68u;
            // 0x38ea6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA70u; }
        if (ctx->pc != 0x38EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA70u; }
        if (ctx->pc != 0x38EA70u) { return; }
    }
    ctx->pc = 0x38EA70u;
label_38ea70:
    // 0x38ea70: 0xc0dd4bc  jal         func_3752F0
label_38ea74:
    if (ctx->pc == 0x38EA74u) {
        ctx->pc = 0x38EA74u;
            // 0x38ea74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EA78u;
        goto label_38ea78;
    }
    ctx->pc = 0x38EA70u;
    SET_GPR_U32(ctx, 31, 0x38EA78u);
    ctx->pc = 0x38EA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA70u;
            // 0x38ea74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA78u; }
        if (ctx->pc != 0x38EA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA78u; }
        if (ctx->pc != 0x38EA78u) { return; }
    }
    ctx->pc = 0x38EA78u;
label_38ea78:
    // 0x38ea78: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x38ea78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_38ea7c:
    // 0x38ea7c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_38ea80:
    if (ctx->pc == 0x38EA80u) {
        ctx->pc = 0x38EA84u;
        goto label_38ea84;
    }
    ctx->pc = 0x38EA7Cu;
    {
        const bool branch_taken_0x38ea7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ea7c) {
            ctx->pc = 0x38EAE8u;
            goto label_38eae8;
        }
    }
    ctx->pc = 0x38EA84u;
label_38ea84:
    // 0x38ea84: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38ea88:
    // 0x38ea88: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x38ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_38ea8c:
    // 0x38ea8c: 0xc0e3b28  jal         func_38ECA0
label_38ea90:
    if (ctx->pc == 0x38EA90u) {
        ctx->pc = 0x38EA90u;
            // 0x38ea90: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x38EA94u;
        goto label_38ea94;
    }
    ctx->pc = 0x38EA8Cu;
    SET_GPR_U32(ctx, 31, 0x38EA94u);
    ctx->pc = 0x38EA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EA8Cu;
            // 0x38ea90: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38ECA0u;
    if (runtime->hasFunction(0x38ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x38ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA94u; }
        if (ctx->pc != 0x38EA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038ECA0_0x38eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EA94u; }
        if (ctx->pc != 0x38EA94u) { return; }
    }
    ctx->pc = 0x38EA94u;
label_38ea94:
    // 0x38ea94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38ea98:
    // 0x38ea98: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x38ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38ea9c:
    // 0x38ea9c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x38ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_38eaa0:
    // 0x38eaa0: 0xc04e4a4  jal         func_139290
label_38eaa4:
    if (ctx->pc == 0x38EAA4u) {
        ctx->pc = 0x38EAA4u;
            // 0x38eaa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38EAA8u;
        goto label_38eaa8;
    }
    ctx->pc = 0x38EAA0u;
    SET_GPR_U32(ctx, 31, 0x38EAA8u);
    ctx->pc = 0x38EAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EAA0u;
            // 0x38eaa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EAA8u; }
        if (ctx->pc != 0x38EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EAA8u; }
        if (ctx->pc != 0x38EAA8u) { return; }
    }
    ctx->pc = 0x38EAA8u;
label_38eaa8:
    // 0x38eaa8: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x38eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38eaac:
    // 0x38eaac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_38eab0:
    // 0x38eab0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x38eab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38eab4:
    // 0x38eab4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x38eab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_38eab8:
    // 0x38eab8: 0x320f809  jalr        $t9
label_38eabc:
    if (ctx->pc == 0x38EABCu) {
        ctx->pc = 0x38EABCu;
            // 0x38eabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EAC0u;
        goto label_38eac0;
    }
    ctx->pc = 0x38EAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38EAC0u);
        ctx->pc = 0x38EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EAB8u;
            // 0x38eabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38EAC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38EAC0u; }
            if (ctx->pc != 0x38EAC0u) { return; }
        }
        }
    }
    ctx->pc = 0x38EAC0u;
label_38eac0:
    // 0x38eac0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x38eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_38eac4:
    // 0x38eac4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38eac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38eac8:
    // 0x38eac8: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x38eac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38eacc:
    // 0x38eacc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x38eaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38ead0:
    // 0x38ead0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x38ead0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38ead4:
    // 0x38ead4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x38ead4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_38ead8:
    // 0x38ead8: 0xc04cfcc  jal         func_133F30
label_38eadc:
    if (ctx->pc == 0x38EADCu) {
        ctx->pc = 0x38EADCu;
            // 0x38eadc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EAE0u;
        goto label_38eae0;
    }
    ctx->pc = 0x38EAD8u;
    SET_GPR_U32(ctx, 31, 0x38EAE0u);
    ctx->pc = 0x38EADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EAD8u;
            // 0x38eadc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EAE0u; }
        if (ctx->pc != 0x38EAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EAE0u; }
        if (ctx->pc != 0x38EAE0u) { return; }
    }
    ctx->pc = 0x38EAE0u;
label_38eae0:
    // 0x38eae0: 0x10000027  b           . + 4 + (0x27 << 2)
label_38eae4:
    if (ctx->pc == 0x38EAE4u) {
        ctx->pc = 0x38EAE8u;
        goto label_38eae8;
    }
    ctx->pc = 0x38EAE0u;
    {
        const bool branch_taken_0x38eae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38eae0) {
            ctx->pc = 0x38EB80u;
            goto label_38eb80;
        }
    }
    ctx->pc = 0x38EAE8u;
label_38eae8:
    // 0x38eae8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38eaec:
    // 0x38eaec: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x38eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38eaf0:
    // 0x38eaf0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x38eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_38eaf4:
    // 0x38eaf4: 0xc04e4a4  jal         func_139290
label_38eaf8:
    if (ctx->pc == 0x38EAF8u) {
        ctx->pc = 0x38EAF8u;
            // 0x38eaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EAFCu;
        goto label_38eafc;
    }
    ctx->pc = 0x38EAF4u;
    SET_GPR_U32(ctx, 31, 0x38EAFCu);
    ctx->pc = 0x38EAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EAF4u;
            // 0x38eaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EAFCu; }
        if (ctx->pc != 0x38EAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EAFCu; }
        if (ctx->pc != 0x38EAFCu) { return; }
    }
    ctx->pc = 0x38EAFCu;
label_38eafc:
    // 0x38eafc: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x38eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38eb00:
    // 0x38eb00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38eb04:
    // 0x38eb04: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x38eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_38eb08:
    // 0x38eb08: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x38eb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38eb0c:
    // 0x38eb0c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x38eb0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_38eb10:
    // 0x38eb10: 0x320f809  jalr        $t9
label_38eb14:
    if (ctx->pc == 0x38EB14u) {
        ctx->pc = 0x38EB14u;
            // 0x38eb14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EB18u;
        goto label_38eb18;
    }
    ctx->pc = 0x38EB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38EB18u);
        ctx->pc = 0x38EB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB10u;
            // 0x38eb14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38EB18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38EB18u; }
            if (ctx->pc != 0x38EB18u) { return; }
        }
        }
    }
    ctx->pc = 0x38EB18u;
label_38eb18:
    // 0x38eb18: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x38eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_38eb1c:
    // 0x38eb1c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38eb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38eb20:
    // 0x38eb20: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x38eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38eb24:
    // 0x38eb24: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x38eb24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38eb28:
    // 0x38eb28: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x38eb28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38eb2c:
    // 0x38eb2c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x38eb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38eb30:
    // 0x38eb30: 0xc04cfcc  jal         func_133F30
label_38eb34:
    if (ctx->pc == 0x38EB34u) {
        ctx->pc = 0x38EB34u;
            // 0x38eb34: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x38EB38u;
        goto label_38eb38;
    }
    ctx->pc = 0x38EB30u;
    SET_GPR_U32(ctx, 31, 0x38EB38u);
    ctx->pc = 0x38EB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB30u;
            // 0x38eb34: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB38u; }
        if (ctx->pc != 0x38EB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB38u; }
        if (ctx->pc != 0x38EB38u) { return; }
    }
    ctx->pc = 0x38EB38u;
label_38eb38:
    // 0x38eb38: 0xc0e3b0c  jal         func_38EC30
label_38eb3c:
    if (ctx->pc == 0x38EB3Cu) {
        ctx->pc = 0x38EB3Cu;
            // 0x38eb3c: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x38EB40u;
        goto label_38eb40;
    }
    ctx->pc = 0x38EB38u;
    SET_GPR_U32(ctx, 31, 0x38EB40u);
    ctx->pc = 0x38EB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB38u;
            // 0x38eb3c: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38EC30u;
    if (runtime->hasFunction(0x38EC30u)) {
        auto targetFn = runtime->lookupFunction(0x38EC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB40u; }
        if (ctx->pc != 0x38EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038EC30_0x38ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB40u; }
        if (ctx->pc != 0x38EB40u) { return; }
    }
    ctx->pc = 0x38EB40u;
label_38eb40:
    // 0x38eb40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x38eb40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_38eb44:
    // 0x38eb44: 0xc054c3c  jal         func_1530F0
label_38eb48:
    if (ctx->pc == 0x38EB48u) {
        ctx->pc = 0x38EB48u;
            // 0x38eb48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38EB4Cu;
        goto label_38eb4c;
    }
    ctx->pc = 0x38EB44u;
    SET_GPR_U32(ctx, 31, 0x38EB4Cu);
    ctx->pc = 0x38EB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB44u;
            // 0x38eb48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB4Cu; }
        if (ctx->pc != 0x38EB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB4Cu; }
        if (ctx->pc != 0x38EB4Cu) { return; }
    }
    ctx->pc = 0x38EB4Cu;
label_38eb4c:
    // 0x38eb4c: 0xc054c40  jal         func_153100
label_38eb50:
    if (ctx->pc == 0x38EB50u) {
        ctx->pc = 0x38EB50u;
            // 0x38eb50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38EB54u;
        goto label_38eb54;
    }
    ctx->pc = 0x38EB4Cu;
    SET_GPR_U32(ctx, 31, 0x38EB54u);
    ctx->pc = 0x38EB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB4Cu;
            // 0x38eb50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB54u; }
        if (ctx->pc != 0x38EB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB54u; }
        if (ctx->pc != 0x38EB54u) { return; }
    }
    ctx->pc = 0x38EB54u;
label_38eb54:
    // 0x38eb54: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38eb58:
    // 0x38eb58: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x38eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_38eb5c:
    // 0x38eb5c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x38eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_38eb60:
    // 0x38eb60: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x38eb60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_38eb64:
    // 0x38eb64: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x38eb64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38eb68:
    // 0x38eb68: 0xc0e3afc  jal         func_38EBF0
label_38eb6c:
    if (ctx->pc == 0x38EB6Cu) {
        ctx->pc = 0x38EB6Cu;
            // 0x38eb6c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x38EB70u;
        goto label_38eb70;
    }
    ctx->pc = 0x38EB68u;
    SET_GPR_U32(ctx, 31, 0x38EB70u);
    ctx->pc = 0x38EB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB68u;
            // 0x38eb6c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x38EBF0u;
    if (runtime->hasFunction(0x38EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x38EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB70u; }
        if (ctx->pc != 0x38EB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038EBF0_0x38ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB70u; }
        if (ctx->pc != 0x38EB70u) { return; }
    }
    ctx->pc = 0x38EB70u;
label_38eb70:
    // 0x38eb70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38eb74:
    // 0x38eb74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38eb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38eb78:
    // 0x38eb78: 0xc054c3c  jal         func_1530F0
label_38eb7c:
    if (ctx->pc == 0x38EB7Cu) {
        ctx->pc = 0x38EB7Cu;
            // 0x38eb7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38EB80u;
        goto label_38eb80;
    }
    ctx->pc = 0x38EB78u;
    SET_GPR_U32(ctx, 31, 0x38EB80u);
    ctx->pc = 0x38EB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB78u;
            // 0x38eb7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB80u; }
        if (ctx->pc != 0x38EB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EB80u; }
        if (ctx->pc != 0x38EB80u) { return; }
    }
    ctx->pc = 0x38EB80u;
label_38eb80:
    // 0x38eb80: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x38eb80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_38eb84:
    // 0x38eb84: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x38eb84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_38eb88:
    // 0x38eb88: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
label_38eb8c:
    if (ctx->pc == 0x38EB8Cu) {
        ctx->pc = 0x38EB8Cu;
            // 0x38eb8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x38EB90u;
        goto label_38eb90;
    }
    ctx->pc = 0x38EB88u;
    {
        const bool branch_taken_0x38eb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB88u;
            // 0x38eb8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb88) {
            ctx->pc = 0x38E9BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38e9bc;
        }
    }
    ctx->pc = 0x38EB90u;
label_38eb90:
    // 0x38eb90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38eb94:
    // 0x38eb94: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x38eb94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_38eb98:
    // 0x38eb98: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_38eb9c:
    if (ctx->pc == 0x38EB9Cu) {
        ctx->pc = 0x38EB9Cu;
            // 0x38eb9c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x38EBA0u;
        goto label_38eba0;
    }
    ctx->pc = 0x38EB98u;
    {
        const bool branch_taken_0x38eb98 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x38EB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EB98u;
            // 0x38eb9c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb98) {
            ctx->pc = 0x38EBBCu;
            goto label_38ebbc;
        }
    }
    ctx->pc = 0x38EBA0u;
label_38eba0:
    // 0x38eba0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38eba4:
    // 0x38eba4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38eba8:
    // 0x38eba8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x38eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_38ebac:
    // 0x38ebac: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x38ebacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_38ebb0:
    // 0x38ebb0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x38ebb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_38ebb4:
    // 0x38ebb4: 0xc055754  jal         func_155D50
label_38ebb8:
    if (ctx->pc == 0x38EBB8u) {
        ctx->pc = 0x38EBB8u;
            // 0x38ebb8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x38EBBCu;
        goto label_38ebbc;
    }
    ctx->pc = 0x38EBB4u;
    SET_GPR_U32(ctx, 31, 0x38EBBCu);
    ctx->pc = 0x38EBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EBB4u;
            // 0x38ebb8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EBBCu; }
        if (ctx->pc != 0x38EBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EBBCu; }
        if (ctx->pc != 0x38EBBCu) { return; }
    }
    ctx->pc = 0x38EBBCu;
label_38ebbc:
    // 0x38ebbc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38ebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_38ebc0:
    // 0x38ebc0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38ebc4:
    // 0x38ebc4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x38ebc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38ebc8:
    // 0x38ebc8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x38ebc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38ebcc:
    // 0x38ebcc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x38ebccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38ebd0:
    // 0x38ebd0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x38ebd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38ebd4:
    // 0x38ebd4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38ebd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38ebd8:
    // 0x38ebd8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38ebd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38ebdc:
    // 0x38ebdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38ebdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ebe0:
    // 0x38ebe0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38ebe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ebe4:
    // 0x38ebe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38ebe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38ebe8:
    // 0x38ebe8: 0x3e00008  jr          $ra
label_38ebec:
    if (ctx->pc == 0x38EBECu) {
        ctx->pc = 0x38EBECu;
            // 0x38ebec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x38EBF0u;
        goto label_fallthrough_0x38ebe8;
    }
    ctx->pc = 0x38EBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EBE8u;
            // 0x38ebec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x38ebe8:
    ctx->pc = 0x38EBF0u;
}
