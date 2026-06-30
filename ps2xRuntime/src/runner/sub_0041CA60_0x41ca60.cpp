#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041CA60
// Address: 0x41ca60 - 0x41cf60
void sub_0041CA60_0x41ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CA60_0x41ca60");
#endif

    switch (ctx->pc) {
        case 0x41ca60u: goto label_41ca60;
        case 0x41ca64u: goto label_41ca64;
        case 0x41ca68u: goto label_41ca68;
        case 0x41ca6cu: goto label_41ca6c;
        case 0x41ca70u: goto label_41ca70;
        case 0x41ca74u: goto label_41ca74;
        case 0x41ca78u: goto label_41ca78;
        case 0x41ca7cu: goto label_41ca7c;
        case 0x41ca80u: goto label_41ca80;
        case 0x41ca84u: goto label_41ca84;
        case 0x41ca88u: goto label_41ca88;
        case 0x41ca8cu: goto label_41ca8c;
        case 0x41ca90u: goto label_41ca90;
        case 0x41ca94u: goto label_41ca94;
        case 0x41ca98u: goto label_41ca98;
        case 0x41ca9cu: goto label_41ca9c;
        case 0x41caa0u: goto label_41caa0;
        case 0x41caa4u: goto label_41caa4;
        case 0x41caa8u: goto label_41caa8;
        case 0x41caacu: goto label_41caac;
        case 0x41cab0u: goto label_41cab0;
        case 0x41cab4u: goto label_41cab4;
        case 0x41cab8u: goto label_41cab8;
        case 0x41cabcu: goto label_41cabc;
        case 0x41cac0u: goto label_41cac0;
        case 0x41cac4u: goto label_41cac4;
        case 0x41cac8u: goto label_41cac8;
        case 0x41caccu: goto label_41cacc;
        case 0x41cad0u: goto label_41cad0;
        case 0x41cad4u: goto label_41cad4;
        case 0x41cad8u: goto label_41cad8;
        case 0x41cadcu: goto label_41cadc;
        case 0x41cae0u: goto label_41cae0;
        case 0x41cae4u: goto label_41cae4;
        case 0x41cae8u: goto label_41cae8;
        case 0x41caecu: goto label_41caec;
        case 0x41caf0u: goto label_41caf0;
        case 0x41caf4u: goto label_41caf4;
        case 0x41caf8u: goto label_41caf8;
        case 0x41cafcu: goto label_41cafc;
        case 0x41cb00u: goto label_41cb00;
        case 0x41cb04u: goto label_41cb04;
        case 0x41cb08u: goto label_41cb08;
        case 0x41cb0cu: goto label_41cb0c;
        case 0x41cb10u: goto label_41cb10;
        case 0x41cb14u: goto label_41cb14;
        case 0x41cb18u: goto label_41cb18;
        case 0x41cb1cu: goto label_41cb1c;
        case 0x41cb20u: goto label_41cb20;
        case 0x41cb24u: goto label_41cb24;
        case 0x41cb28u: goto label_41cb28;
        case 0x41cb2cu: goto label_41cb2c;
        case 0x41cb30u: goto label_41cb30;
        case 0x41cb34u: goto label_41cb34;
        case 0x41cb38u: goto label_41cb38;
        case 0x41cb3cu: goto label_41cb3c;
        case 0x41cb40u: goto label_41cb40;
        case 0x41cb44u: goto label_41cb44;
        case 0x41cb48u: goto label_41cb48;
        case 0x41cb4cu: goto label_41cb4c;
        case 0x41cb50u: goto label_41cb50;
        case 0x41cb54u: goto label_41cb54;
        case 0x41cb58u: goto label_41cb58;
        case 0x41cb5cu: goto label_41cb5c;
        case 0x41cb60u: goto label_41cb60;
        case 0x41cb64u: goto label_41cb64;
        case 0x41cb68u: goto label_41cb68;
        case 0x41cb6cu: goto label_41cb6c;
        case 0x41cb70u: goto label_41cb70;
        case 0x41cb74u: goto label_41cb74;
        case 0x41cb78u: goto label_41cb78;
        case 0x41cb7cu: goto label_41cb7c;
        case 0x41cb80u: goto label_41cb80;
        case 0x41cb84u: goto label_41cb84;
        case 0x41cb88u: goto label_41cb88;
        case 0x41cb8cu: goto label_41cb8c;
        case 0x41cb90u: goto label_41cb90;
        case 0x41cb94u: goto label_41cb94;
        case 0x41cb98u: goto label_41cb98;
        case 0x41cb9cu: goto label_41cb9c;
        case 0x41cba0u: goto label_41cba0;
        case 0x41cba4u: goto label_41cba4;
        case 0x41cba8u: goto label_41cba8;
        case 0x41cbacu: goto label_41cbac;
        case 0x41cbb0u: goto label_41cbb0;
        case 0x41cbb4u: goto label_41cbb4;
        case 0x41cbb8u: goto label_41cbb8;
        case 0x41cbbcu: goto label_41cbbc;
        case 0x41cbc0u: goto label_41cbc0;
        case 0x41cbc4u: goto label_41cbc4;
        case 0x41cbc8u: goto label_41cbc8;
        case 0x41cbccu: goto label_41cbcc;
        case 0x41cbd0u: goto label_41cbd0;
        case 0x41cbd4u: goto label_41cbd4;
        case 0x41cbd8u: goto label_41cbd8;
        case 0x41cbdcu: goto label_41cbdc;
        case 0x41cbe0u: goto label_41cbe0;
        case 0x41cbe4u: goto label_41cbe4;
        case 0x41cbe8u: goto label_41cbe8;
        case 0x41cbecu: goto label_41cbec;
        case 0x41cbf0u: goto label_41cbf0;
        case 0x41cbf4u: goto label_41cbf4;
        case 0x41cbf8u: goto label_41cbf8;
        case 0x41cbfcu: goto label_41cbfc;
        case 0x41cc00u: goto label_41cc00;
        case 0x41cc04u: goto label_41cc04;
        case 0x41cc08u: goto label_41cc08;
        case 0x41cc0cu: goto label_41cc0c;
        case 0x41cc10u: goto label_41cc10;
        case 0x41cc14u: goto label_41cc14;
        case 0x41cc18u: goto label_41cc18;
        case 0x41cc1cu: goto label_41cc1c;
        case 0x41cc20u: goto label_41cc20;
        case 0x41cc24u: goto label_41cc24;
        case 0x41cc28u: goto label_41cc28;
        case 0x41cc2cu: goto label_41cc2c;
        case 0x41cc30u: goto label_41cc30;
        case 0x41cc34u: goto label_41cc34;
        case 0x41cc38u: goto label_41cc38;
        case 0x41cc3cu: goto label_41cc3c;
        case 0x41cc40u: goto label_41cc40;
        case 0x41cc44u: goto label_41cc44;
        case 0x41cc48u: goto label_41cc48;
        case 0x41cc4cu: goto label_41cc4c;
        case 0x41cc50u: goto label_41cc50;
        case 0x41cc54u: goto label_41cc54;
        case 0x41cc58u: goto label_41cc58;
        case 0x41cc5cu: goto label_41cc5c;
        case 0x41cc60u: goto label_41cc60;
        case 0x41cc64u: goto label_41cc64;
        case 0x41cc68u: goto label_41cc68;
        case 0x41cc6cu: goto label_41cc6c;
        case 0x41cc70u: goto label_41cc70;
        case 0x41cc74u: goto label_41cc74;
        case 0x41cc78u: goto label_41cc78;
        case 0x41cc7cu: goto label_41cc7c;
        case 0x41cc80u: goto label_41cc80;
        case 0x41cc84u: goto label_41cc84;
        case 0x41cc88u: goto label_41cc88;
        case 0x41cc8cu: goto label_41cc8c;
        case 0x41cc90u: goto label_41cc90;
        case 0x41cc94u: goto label_41cc94;
        case 0x41cc98u: goto label_41cc98;
        case 0x41cc9cu: goto label_41cc9c;
        case 0x41cca0u: goto label_41cca0;
        case 0x41cca4u: goto label_41cca4;
        case 0x41cca8u: goto label_41cca8;
        case 0x41ccacu: goto label_41ccac;
        case 0x41ccb0u: goto label_41ccb0;
        case 0x41ccb4u: goto label_41ccb4;
        case 0x41ccb8u: goto label_41ccb8;
        case 0x41ccbcu: goto label_41ccbc;
        case 0x41ccc0u: goto label_41ccc0;
        case 0x41ccc4u: goto label_41ccc4;
        case 0x41ccc8u: goto label_41ccc8;
        case 0x41ccccu: goto label_41cccc;
        case 0x41ccd0u: goto label_41ccd0;
        case 0x41ccd4u: goto label_41ccd4;
        case 0x41ccd8u: goto label_41ccd8;
        case 0x41ccdcu: goto label_41ccdc;
        case 0x41cce0u: goto label_41cce0;
        case 0x41cce4u: goto label_41cce4;
        case 0x41cce8u: goto label_41cce8;
        case 0x41ccecu: goto label_41ccec;
        case 0x41ccf0u: goto label_41ccf0;
        case 0x41ccf4u: goto label_41ccf4;
        case 0x41ccf8u: goto label_41ccf8;
        case 0x41ccfcu: goto label_41ccfc;
        case 0x41cd00u: goto label_41cd00;
        case 0x41cd04u: goto label_41cd04;
        case 0x41cd08u: goto label_41cd08;
        case 0x41cd0cu: goto label_41cd0c;
        case 0x41cd10u: goto label_41cd10;
        case 0x41cd14u: goto label_41cd14;
        case 0x41cd18u: goto label_41cd18;
        case 0x41cd1cu: goto label_41cd1c;
        case 0x41cd20u: goto label_41cd20;
        case 0x41cd24u: goto label_41cd24;
        case 0x41cd28u: goto label_41cd28;
        case 0x41cd2cu: goto label_41cd2c;
        case 0x41cd30u: goto label_41cd30;
        case 0x41cd34u: goto label_41cd34;
        case 0x41cd38u: goto label_41cd38;
        case 0x41cd3cu: goto label_41cd3c;
        case 0x41cd40u: goto label_41cd40;
        case 0x41cd44u: goto label_41cd44;
        case 0x41cd48u: goto label_41cd48;
        case 0x41cd4cu: goto label_41cd4c;
        case 0x41cd50u: goto label_41cd50;
        case 0x41cd54u: goto label_41cd54;
        case 0x41cd58u: goto label_41cd58;
        case 0x41cd5cu: goto label_41cd5c;
        case 0x41cd60u: goto label_41cd60;
        case 0x41cd64u: goto label_41cd64;
        case 0x41cd68u: goto label_41cd68;
        case 0x41cd6cu: goto label_41cd6c;
        case 0x41cd70u: goto label_41cd70;
        case 0x41cd74u: goto label_41cd74;
        case 0x41cd78u: goto label_41cd78;
        case 0x41cd7cu: goto label_41cd7c;
        case 0x41cd80u: goto label_41cd80;
        case 0x41cd84u: goto label_41cd84;
        case 0x41cd88u: goto label_41cd88;
        case 0x41cd8cu: goto label_41cd8c;
        case 0x41cd90u: goto label_41cd90;
        case 0x41cd94u: goto label_41cd94;
        case 0x41cd98u: goto label_41cd98;
        case 0x41cd9cu: goto label_41cd9c;
        case 0x41cda0u: goto label_41cda0;
        case 0x41cda4u: goto label_41cda4;
        case 0x41cda8u: goto label_41cda8;
        case 0x41cdacu: goto label_41cdac;
        case 0x41cdb0u: goto label_41cdb0;
        case 0x41cdb4u: goto label_41cdb4;
        case 0x41cdb8u: goto label_41cdb8;
        case 0x41cdbcu: goto label_41cdbc;
        case 0x41cdc0u: goto label_41cdc0;
        case 0x41cdc4u: goto label_41cdc4;
        case 0x41cdc8u: goto label_41cdc8;
        case 0x41cdccu: goto label_41cdcc;
        case 0x41cdd0u: goto label_41cdd0;
        case 0x41cdd4u: goto label_41cdd4;
        case 0x41cdd8u: goto label_41cdd8;
        case 0x41cddcu: goto label_41cddc;
        case 0x41cde0u: goto label_41cde0;
        case 0x41cde4u: goto label_41cde4;
        case 0x41cde8u: goto label_41cde8;
        case 0x41cdecu: goto label_41cdec;
        case 0x41cdf0u: goto label_41cdf0;
        case 0x41cdf4u: goto label_41cdf4;
        case 0x41cdf8u: goto label_41cdf8;
        case 0x41cdfcu: goto label_41cdfc;
        case 0x41ce00u: goto label_41ce00;
        case 0x41ce04u: goto label_41ce04;
        case 0x41ce08u: goto label_41ce08;
        case 0x41ce0cu: goto label_41ce0c;
        case 0x41ce10u: goto label_41ce10;
        case 0x41ce14u: goto label_41ce14;
        case 0x41ce18u: goto label_41ce18;
        case 0x41ce1cu: goto label_41ce1c;
        case 0x41ce20u: goto label_41ce20;
        case 0x41ce24u: goto label_41ce24;
        case 0x41ce28u: goto label_41ce28;
        case 0x41ce2cu: goto label_41ce2c;
        case 0x41ce30u: goto label_41ce30;
        case 0x41ce34u: goto label_41ce34;
        case 0x41ce38u: goto label_41ce38;
        case 0x41ce3cu: goto label_41ce3c;
        case 0x41ce40u: goto label_41ce40;
        case 0x41ce44u: goto label_41ce44;
        case 0x41ce48u: goto label_41ce48;
        case 0x41ce4cu: goto label_41ce4c;
        case 0x41ce50u: goto label_41ce50;
        case 0x41ce54u: goto label_41ce54;
        case 0x41ce58u: goto label_41ce58;
        case 0x41ce5cu: goto label_41ce5c;
        case 0x41ce60u: goto label_41ce60;
        case 0x41ce64u: goto label_41ce64;
        case 0x41ce68u: goto label_41ce68;
        case 0x41ce6cu: goto label_41ce6c;
        case 0x41ce70u: goto label_41ce70;
        case 0x41ce74u: goto label_41ce74;
        case 0x41ce78u: goto label_41ce78;
        case 0x41ce7cu: goto label_41ce7c;
        case 0x41ce80u: goto label_41ce80;
        case 0x41ce84u: goto label_41ce84;
        case 0x41ce88u: goto label_41ce88;
        case 0x41ce8cu: goto label_41ce8c;
        case 0x41ce90u: goto label_41ce90;
        case 0x41ce94u: goto label_41ce94;
        case 0x41ce98u: goto label_41ce98;
        case 0x41ce9cu: goto label_41ce9c;
        case 0x41cea0u: goto label_41cea0;
        case 0x41cea4u: goto label_41cea4;
        case 0x41cea8u: goto label_41cea8;
        case 0x41ceacu: goto label_41ceac;
        case 0x41ceb0u: goto label_41ceb0;
        case 0x41ceb4u: goto label_41ceb4;
        case 0x41ceb8u: goto label_41ceb8;
        case 0x41cebcu: goto label_41cebc;
        case 0x41cec0u: goto label_41cec0;
        case 0x41cec4u: goto label_41cec4;
        case 0x41cec8u: goto label_41cec8;
        case 0x41ceccu: goto label_41cecc;
        case 0x41ced0u: goto label_41ced0;
        case 0x41ced4u: goto label_41ced4;
        case 0x41ced8u: goto label_41ced8;
        case 0x41cedcu: goto label_41cedc;
        case 0x41cee0u: goto label_41cee0;
        case 0x41cee4u: goto label_41cee4;
        case 0x41cee8u: goto label_41cee8;
        case 0x41ceecu: goto label_41ceec;
        case 0x41cef0u: goto label_41cef0;
        case 0x41cef4u: goto label_41cef4;
        case 0x41cef8u: goto label_41cef8;
        case 0x41cefcu: goto label_41cefc;
        case 0x41cf00u: goto label_41cf00;
        case 0x41cf04u: goto label_41cf04;
        case 0x41cf08u: goto label_41cf08;
        case 0x41cf0cu: goto label_41cf0c;
        case 0x41cf10u: goto label_41cf10;
        case 0x41cf14u: goto label_41cf14;
        case 0x41cf18u: goto label_41cf18;
        case 0x41cf1cu: goto label_41cf1c;
        case 0x41cf20u: goto label_41cf20;
        case 0x41cf24u: goto label_41cf24;
        case 0x41cf28u: goto label_41cf28;
        case 0x41cf2cu: goto label_41cf2c;
        case 0x41cf30u: goto label_41cf30;
        case 0x41cf34u: goto label_41cf34;
        case 0x41cf38u: goto label_41cf38;
        case 0x41cf3cu: goto label_41cf3c;
        case 0x41cf40u: goto label_41cf40;
        case 0x41cf44u: goto label_41cf44;
        case 0x41cf48u: goto label_41cf48;
        case 0x41cf4cu: goto label_41cf4c;
        case 0x41cf50u: goto label_41cf50;
        case 0x41cf54u: goto label_41cf54;
        case 0x41cf58u: goto label_41cf58;
        case 0x41cf5cu: goto label_41cf5c;
        default: break;
    }

    ctx->pc = 0x41ca60u;

label_41ca60:
    // 0x41ca60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x41ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_41ca64:
    // 0x41ca64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41ca68:
    // 0x41ca68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x41ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_41ca6c:
    // 0x41ca6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x41ca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_41ca70:
    // 0x41ca70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x41ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_41ca74:
    // 0x41ca74: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x41ca74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_41ca78:
    // 0x41ca78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x41ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_41ca7c:
    // 0x41ca7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x41ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_41ca80:
    // 0x41ca80: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x41ca80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_41ca84:
    // 0x41ca84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41ca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41ca88:
    // 0x41ca88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x41ca88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ca8c:
    // 0x41ca8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41ca90:
    // 0x41ca90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x41ca90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41ca94:
    // 0x41ca94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41ca98:
    // 0x41ca98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x41ca98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41ca9c:
    // 0x41ca9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41caa0:
    // 0x41caa0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x41caa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41caa4:
    // 0x41caa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41caa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41caa8:
    // 0x41caa8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x41caa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_41caac:
    // 0x41caac: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x41caacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41cab0:
    // 0x41cab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cab4:
    // 0x41cab4: 0x8c570e80  lw          $s7, 0xE80($v0)
    ctx->pc = 0x41cab4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_41cab8:
    // 0x41cab8: 0xc04f278  jal         func_13C9E0
label_41cabc:
    if (ctx->pc == 0x41CABCu) {
        ctx->pc = 0x41CABCu;
            // 0x41cabc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x41CAC0u;
        goto label_41cac0;
    }
    ctx->pc = 0x41CAB8u;
    SET_GPR_U32(ctx, 31, 0x41CAC0u);
    ctx->pc = 0x41CABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CAB8u;
            // 0x41cabc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CAC0u; }
        if (ctx->pc != 0x41CAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CAC0u; }
        if (ctx->pc != 0x41CAC0u) { return; }
    }
    ctx->pc = 0x41CAC0u;
label_41cac0:
    // 0x41cac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cac4:
    // 0x41cac4: 0xc04ce80  jal         func_133A00
label_41cac8:
    if (ctx->pc == 0x41CAC8u) {
        ctx->pc = 0x41CAC8u;
            // 0x41cac8: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x41CACCu;
        goto label_41cacc;
    }
    ctx->pc = 0x41CAC4u;
    SET_GPR_U32(ctx, 31, 0x41CACCu);
    ctx->pc = 0x41CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CAC4u;
            // 0x41cac8: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CACCu; }
        if (ctx->pc != 0x41CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CACCu; }
        if (ctx->pc != 0x41CACCu) { return; }
    }
    ctx->pc = 0x41CACCu;
label_41cacc:
    // 0x41cacc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x41caccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_41cad0:
    // 0x41cad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cad4:
    // 0x41cad4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x41cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_41cad8:
    // 0x41cad8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41cad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cadc:
    // 0x41cadc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41cadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41cae0:
    // 0x41cae0: 0x0  nop
    ctx->pc = 0x41cae0u;
    // NOP
label_41cae4:
    // 0x41cae4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41cae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_41cae8:
    // 0x41cae8: 0xc04ce50  jal         func_133940
label_41caec:
    if (ctx->pc == 0x41CAECu) {
        ctx->pc = 0x41CAECu;
            // 0x41caec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x41CAF0u;
        goto label_41caf0;
    }
    ctx->pc = 0x41CAE8u;
    SET_GPR_U32(ctx, 31, 0x41CAF0u);
    ctx->pc = 0x41CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CAE8u;
            // 0x41caec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CAF0u; }
        if (ctx->pc != 0x41CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CAF0u; }
        if (ctx->pc != 0x41CAF0u) { return; }
    }
    ctx->pc = 0x41CAF0u;
label_41caf0:
    // 0x41caf0: 0x8ee30cd0  lw          $v1, 0xCD0($s7)
    ctx->pc = 0x41caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 3280)));
label_41caf4:
    // 0x41caf4: 0x8ea400e4  lw          $a0, 0xE4($s5)
    ctx->pc = 0x41caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_41caf8:
    // 0x41caf8: 0x5483008e  bnel        $a0, $v1, . + 4 + (0x8E << 2)
label_41cafc:
    if (ctx->pc == 0x41CAFCu) {
        ctx->pc = 0x41CAFCu;
            // 0x41cafc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x41CB00u;
        goto label_41cb00;
    }
    ctx->pc = 0x41CAF8u;
    {
        const bool branch_taken_0x41caf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x41caf8) {
            ctx->pc = 0x41CAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CAF8u;
            // 0x41cafc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CD34u;
            goto label_41cd34;
        }
    }
    ctx->pc = 0x41CB00u;
label_41cb00:
    // 0x41cb00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41cb04:
    // 0x41cb04: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x41cb04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_41cb08:
    // 0x41cb08: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x41cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_41cb0c:
    // 0x41cb0c: 0xc07698c  jal         func_1DA630
label_41cb10:
    if (ctx->pc == 0x41CB10u) {
        ctx->pc = 0x41CB10u;
            // 0x41cb10: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CB14u;
        goto label_41cb14;
    }
    ctx->pc = 0x41CB0Cu;
    SET_GPR_U32(ctx, 31, 0x41CB14u);
    ctx->pc = 0x41CB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CB0Cu;
            // 0x41cb10: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB14u; }
        if (ctx->pc != 0x41CB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB14u; }
        if (ctx->pc != 0x41CB14u) { return; }
    }
    ctx->pc = 0x41CB14u;
label_41cb14:
    // 0x41cb14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41cb18:
    // 0x41cb18: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_41cb1c:
    if (ctx->pc == 0x41CB1Cu) {
        ctx->pc = 0x41CB20u;
        goto label_41cb20;
    }
    ctx->pc = 0x41CB18u;
    {
        const bool branch_taken_0x41cb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41cb18) {
            ctx->pc = 0x41CB28u;
            goto label_41cb28;
        }
    }
    ctx->pc = 0x41CB20u;
label_41cb20:
    // 0x41cb20: 0x10000033  b           . + 4 + (0x33 << 2)
label_41cb24:
    if (ctx->pc == 0x41CB24u) {
        ctx->pc = 0x41CB24u;
            // 0x41cb24: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x41CB28u;
        goto label_41cb28;
    }
    ctx->pc = 0x41CB20u;
    {
        const bool branch_taken_0x41cb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CB20u;
            // 0x41cb24: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cb20) {
            ctx->pc = 0x41CBF0u;
            goto label_41cbf0;
        }
    }
    ctx->pc = 0x41CB28u;
label_41cb28:
    // 0x41cb28: 0xc0576f4  jal         func_15DBD0
label_41cb2c:
    if (ctx->pc == 0x41CB2Cu) {
        ctx->pc = 0x41CB30u;
        goto label_41cb30;
    }
    ctx->pc = 0x41CB28u;
    SET_GPR_U32(ctx, 31, 0x41CB30u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB30u; }
        if (ctx->pc != 0x41CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB30u; }
        if (ctx->pc != 0x41CB30u) { return; }
    }
    ctx->pc = 0x41CB30u;
label_41cb30:
    // 0x41cb30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x41cb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_41cb34:
    // 0x41cb34: 0xc076984  jal         func_1DA610
label_41cb38:
    if (ctx->pc == 0x41CB38u) {
        ctx->pc = 0x41CB38u;
            // 0x41cb38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CB3Cu;
        goto label_41cb3c;
    }
    ctx->pc = 0x41CB34u;
    SET_GPR_U32(ctx, 31, 0x41CB3Cu);
    ctx->pc = 0x41CB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CB34u;
            // 0x41cb38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB3Cu; }
        if (ctx->pc != 0x41CB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB3Cu; }
        if (ctx->pc != 0x41CB3Cu) { return; }
    }
    ctx->pc = 0x41CB3Cu;
label_41cb3c:
    // 0x41cb3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x41cb3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cb40:
    // 0x41cb40: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x41cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_41cb44:
    // 0x41cb44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x41cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_41cb48:
    // 0x41cb48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41cb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cb4c:
    // 0x41cb4c: 0xc442fea0  lwc1        $f2, -0x160($v0)
    ctx->pc = 0x41cb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41cb50:
    // 0x41cb50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x41cb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41cb54:
    // 0x41cb54: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x41cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_41cb58:
    // 0x41cb58: 0xc441fea8  lwc1        $f1, -0x158($v0)
    ctx->pc = 0x41cb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41cb5c:
    // 0x41cb5c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x41cb5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_41cb60:
    // 0x41cb60: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x41cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_41cb64:
    // 0x41cb64: 0xc440feac  lwc1        $f0, -0x154($v0)
    ctx->pc = 0x41cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41cb68:
    // 0x41cb68: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x41cb68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_41cb6c:
    // 0x41cb6c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x41cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_41cb70:
    // 0x41cb70: 0x8c42fea4  lw          $v0, -0x15C($v0)
    ctx->pc = 0x41cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966948)));
label_41cb74:
    // 0x41cb74: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x41cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_41cb78:
    // 0x41cb78: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x41cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_41cb7c:
    // 0x41cb7c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x41cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41cb80:
    // 0x41cb80: 0xc04cca0  jal         func_133280
label_41cb84:
    if (ctx->pc == 0x41CB84u) {
        ctx->pc = 0x41CB84u;
            // 0x41cb84: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x41CB88u;
        goto label_41cb88;
    }
    ctx->pc = 0x41CB80u;
    SET_GPR_U32(ctx, 31, 0x41CB88u);
    ctx->pc = 0x41CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CB80u;
            // 0x41cb84: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB88u; }
        if (ctx->pc != 0x41CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB88u; }
        if (ctx->pc != 0x41CB88u) { return; }
    }
    ctx->pc = 0x41CB88u;
label_41cb88:
    // 0x41cb88: 0xc076980  jal         func_1DA600
label_41cb8c:
    if (ctx->pc == 0x41CB8Cu) {
        ctx->pc = 0x41CB8Cu;
            // 0x41cb8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CB90u;
        goto label_41cb90;
    }
    ctx->pc = 0x41CB88u;
    SET_GPR_U32(ctx, 31, 0x41CB90u);
    ctx->pc = 0x41CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CB88u;
            // 0x41cb8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB90u; }
        if (ctx->pc != 0x41CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB90u; }
        if (ctx->pc != 0x41CB90u) { return; }
    }
    ctx->pc = 0x41CB90u;
label_41cb90:
    // 0x41cb90: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x41cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_41cb94:
    // 0x41cb94: 0xc04cc34  jal         func_1330D0
label_41cb98:
    if (ctx->pc == 0x41CB98u) {
        ctx->pc = 0x41CB98u;
            // 0x41cb98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CB9Cu;
        goto label_41cb9c;
    }
    ctx->pc = 0x41CB94u;
    SET_GPR_U32(ctx, 31, 0x41CB9Cu);
    ctx->pc = 0x41CB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CB94u;
            // 0x41cb98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB9Cu; }
        if (ctx->pc != 0x41CB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CB9Cu; }
        if (ctx->pc != 0x41CB9Cu) { return; }
    }
    ctx->pc = 0x41CB9Cu;
label_41cb9c:
    // 0x41cb9c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x41cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_41cba0:
    // 0x41cba0: 0xc461c6c8  lwc1        $f1, -0x3938($v1)
    ctx->pc = 0x41cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41cba4:
    // 0x41cba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x41cba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41cba8:
    // 0x41cba8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_41cbac:
    if (ctx->pc == 0x41CBACu) {
        ctx->pc = 0x41CBACu;
            // 0x41cbac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CBB0u;
        goto label_41cbb0;
    }
    ctx->pc = 0x41CBA8u;
    {
        const bool branch_taken_0x41cba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41cba8) {
            ctx->pc = 0x41CBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CBA8u;
            // 0x41cbac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CBB8u;
            goto label_41cbb8;
        }
    }
    ctx->pc = 0x41CBB0u;
label_41cbb0:
    // 0x41cbb0: 0x1000000f  b           . + 4 + (0xF << 2)
label_41cbb4:
    if (ctx->pc == 0x41CBB4u) {
        ctx->pc = 0x41CBB4u;
            // 0x41cbb4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x41CBB8u;
        goto label_41cbb8;
    }
    ctx->pc = 0x41CBB0u;
    {
        const bool branch_taken_0x41cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CBB0u;
            // 0x41cbb4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cbb0) {
            ctx->pc = 0x41CBF0u;
            goto label_41cbf0;
        }
    }
    ctx->pc = 0x41CBB8u;
label_41cbb8:
    // 0x41cbb8: 0xc07697c  jal         func_1DA5F0
label_41cbbc:
    if (ctx->pc == 0x41CBBCu) {
        ctx->pc = 0x41CBC0u;
        goto label_41cbc0;
    }
    ctx->pc = 0x41CBB8u;
    SET_GPR_U32(ctx, 31, 0x41CBC0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CBC0u; }
        if (ctx->pc != 0x41CBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CBC0u; }
        if (ctx->pc != 0x41CBC0u) { return; }
    }
    ctx->pc = 0x41CBC0u;
label_41cbc0:
    // 0x41cbc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41cbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cbc4:
    // 0x41cbc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x41cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_41cbc8:
    // 0x41cbc8: 0xc04cd60  jal         func_133580
label_41cbcc:
    if (ctx->pc == 0x41CBCCu) {
        ctx->pc = 0x41CBCCu;
            // 0x41cbcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CBD0u;
        goto label_41cbd0;
    }
    ctx->pc = 0x41CBC8u;
    SET_GPR_U32(ctx, 31, 0x41CBD0u);
    ctx->pc = 0x41CBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CBC8u;
            // 0x41cbcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CBD0u; }
        if (ctx->pc != 0x41CBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CBD0u; }
        if (ctx->pc != 0x41CBD0u) { return; }
    }
    ctx->pc = 0x41CBD0u;
label_41cbd0:
    // 0x41cbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cbd4:
    // 0x41cbd4: 0xc04c650  jal         func_131940
label_41cbd8:
    if (ctx->pc == 0x41CBD8u) {
        ctx->pc = 0x41CBD8u;
            // 0x41cbd8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x41CBDCu;
        goto label_41cbdc;
    }
    ctx->pc = 0x41CBD4u;
    SET_GPR_U32(ctx, 31, 0x41CBDCu);
    ctx->pc = 0x41CBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CBD4u;
            // 0x41cbd8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CBDCu; }
        if (ctx->pc != 0x41CBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CBDCu; }
        if (ctx->pc != 0x41CBDCu) { return; }
    }
    ctx->pc = 0x41CBDCu;
label_41cbdc:
    // 0x41cbdc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x41cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_41cbe0:
    // 0x41cbe0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x41cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_41cbe4:
    // 0x41cbe4: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x41cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_41cbe8:
    // 0x41cbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41cbec:
    // 0x41cbec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x41cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41cbf0:
    // 0x41cbf0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x41cbf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_41cbf4:
    // 0x41cbf4: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_41cbf8:
    if (ctx->pc == 0x41CBF8u) {
        ctx->pc = 0x41CBF8u;
            // 0x41cbf8: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x41CBFCu;
        goto label_41cbfc;
    }
    ctx->pc = 0x41CBF4u;
    {
        const bool branch_taken_0x41cbf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CBF4u;
            // 0x41cbf8: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cbf4) {
            ctx->pc = 0x41CD30u;
            goto label_41cd30;
        }
    }
    ctx->pc = 0x41CBFCu;
label_41cbfc:
    // 0x41cbfc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x41cbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_41cc00:
    // 0x41cc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cc04:
    // 0x41cc04: 0xc04cd60  jal         func_133580
label_41cc08:
    if (ctx->pc == 0x41CC08u) {
        ctx->pc = 0x41CC08u;
            // 0x41cc08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CC0Cu;
        goto label_41cc0c;
    }
    ctx->pc = 0x41CC04u;
    SET_GPR_U32(ctx, 31, 0x41CC0Cu);
    ctx->pc = 0x41CC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC04u;
            // 0x41cc08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CC0Cu; }
        if (ctx->pc != 0x41CC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CC0Cu; }
        if (ctx->pc != 0x41CC0Cu) { return; }
    }
    ctx->pc = 0x41CC0Cu;
label_41cc0c:
    // 0x41cc0c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x41cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_41cc10:
    // 0x41cc10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41cc14:
    // 0x41cc14: 0xc04e4a4  jal         func_139290
label_41cc18:
    if (ctx->pc == 0x41CC18u) {
        ctx->pc = 0x41CC18u;
            // 0x41cc18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41CC1Cu;
        goto label_41cc1c;
    }
    ctx->pc = 0x41CC14u;
    SET_GPR_U32(ctx, 31, 0x41CC1Cu);
    ctx->pc = 0x41CC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC14u;
            // 0x41cc18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CC1Cu; }
        if (ctx->pc != 0x41CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CC1Cu; }
        if (ctx->pc != 0x41CC1Cu) { return; }
    }
    ctx->pc = 0x41CC1Cu;
label_41cc1c:
    // 0x41cc1c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x41cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_41cc20:
    // 0x41cc20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x41cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41cc24:
    // 0x41cc24: 0x8ea300d4  lw          $v1, 0xD4($s5)
    ctx->pc = 0x41cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_41cc28:
    // 0x41cc28: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
label_41cc2c:
    if (ctx->pc == 0x41CC2Cu) {
        ctx->pc = 0x41CC2Cu;
            // 0x41cc2c: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x41CC30u;
        goto label_41cc30;
    }
    ctx->pc = 0x41CC28u;
    {
        const bool branch_taken_0x41cc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x41cc28) {
            ctx->pc = 0x41CC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC28u;
            // 0x41cc2c: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CC8Cu;
            goto label_41cc8c;
        }
    }
    ctx->pc = 0x41CC30u;
label_41cc30:
    // 0x41cc30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41cc34:
    // 0x41cc34: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_41cc38:
    if (ctx->pc == 0x41CC38u) {
        ctx->pc = 0x41CC38u;
            // 0x41cc38: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x41CC3Cu;
        goto label_41cc3c;
    }
    ctx->pc = 0x41CC34u;
    {
        const bool branch_taken_0x41cc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x41cc34) {
            ctx->pc = 0x41CC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC34u;
            // 0x41cc38: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CC6Cu;
            goto label_41cc6c;
        }
    }
    ctx->pc = 0x41CC3Cu;
label_41cc3c:
    // 0x41cc3c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_41cc40:
    if (ctx->pc == 0x41CC40u) {
        ctx->pc = 0x41CC40u;
            // 0x41cc40: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x41CC44u;
        goto label_41cc44;
    }
    ctx->pc = 0x41CC3Cu;
    {
        const bool branch_taken_0x41cc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cc3c) {
            ctx->pc = 0x41CC40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC3Cu;
            // 0x41cc40: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CC4Cu;
            goto label_41cc4c;
        }
    }
    ctx->pc = 0x41CC44u;
label_41cc44:
    // 0x41cc44: 0x10000019  b           . + 4 + (0x19 << 2)
label_41cc48:
    if (ctx->pc == 0x41CC48u) {
        ctx->pc = 0x41CC48u;
            // 0x41cc48: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x41CC4Cu;
        goto label_41cc4c;
    }
    ctx->pc = 0x41CC44u;
    {
        const bool branch_taken_0x41cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC44u;
            // 0x41cc48: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cc44) {
            ctx->pc = 0x41CCACu;
            goto label_41ccac;
        }
    }
    ctx->pc = 0x41CC4Cu;
label_41cc4c:
    // 0x41cc4c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x41cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_41cc50:
    // 0x41cc50: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x41cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_41cc54:
    // 0x41cc54: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_41cc58:
    if (ctx->pc == 0x41CC58u) {
        ctx->pc = 0x41CC5Cu;
        goto label_41cc5c;
    }
    ctx->pc = 0x41CC54u;
    {
        const bool branch_taken_0x41cc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41cc54) {
            ctx->pc = 0x41CCA8u;
            goto label_41cca8;
        }
    }
    ctx->pc = 0x41CC5Cu;
label_41cc5c:
    // 0x41cc5c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x41cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_41cc60:
    // 0x41cc60: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x41cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_41cc64:
    // 0x41cc64: 0x10000010  b           . + 4 + (0x10 << 2)
label_41cc68:
    if (ctx->pc == 0x41CC68u) {
        ctx->pc = 0x41CC68u;
            // 0x41cc68: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x41CC6Cu;
        goto label_41cc6c;
    }
    ctx->pc = 0x41CC64u;
    {
        const bool branch_taken_0x41cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC64u;
            // 0x41cc68: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cc64) {
            ctx->pc = 0x41CCA8u;
            goto label_41cca8;
        }
    }
    ctx->pc = 0x41CC6Cu;
label_41cc6c:
    // 0x41cc6c: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x41cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_41cc70:
    // 0x41cc70: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x41cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_41cc74:
    // 0x41cc74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_41cc78:
    if (ctx->pc == 0x41CC78u) {
        ctx->pc = 0x41CC7Cu;
        goto label_41cc7c;
    }
    ctx->pc = 0x41CC74u;
    {
        const bool branch_taken_0x41cc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41cc74) {
            ctx->pc = 0x41CCA8u;
            goto label_41cca8;
        }
    }
    ctx->pc = 0x41CC7Cu;
label_41cc7c:
    // 0x41cc7c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x41cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_41cc80:
    // 0x41cc80: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x41cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_41cc84:
    // 0x41cc84: 0x10000008  b           . + 4 + (0x8 << 2)
label_41cc88:
    if (ctx->pc == 0x41CC88u) {
        ctx->pc = 0x41CC88u;
            // 0x41cc88: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x41CC8Cu;
        goto label_41cc8c;
    }
    ctx->pc = 0x41CC84u;
    {
        const bool branch_taken_0x41cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CC84u;
            // 0x41cc88: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cc84) {
            ctx->pc = 0x41CCA8u;
            goto label_41cca8;
        }
    }
    ctx->pc = 0x41CC8Cu;
label_41cc8c:
    // 0x41cc8c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x41cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_41cc90:
    // 0x41cc90: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x41cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_41cc94:
    // 0x41cc94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_41cc98:
    if (ctx->pc == 0x41CC98u) {
        ctx->pc = 0x41CC9Cu;
        goto label_41cc9c;
    }
    ctx->pc = 0x41CC94u;
    {
        const bool branch_taken_0x41cc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41cc94) {
            ctx->pc = 0x41CCA8u;
            goto label_41cca8;
        }
    }
    ctx->pc = 0x41CC9Cu;
label_41cc9c:
    // 0x41cc9c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x41cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_41cca0:
    // 0x41cca0: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x41cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_41cca4:
    // 0x41cca4: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x41cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_41cca8:
    // 0x41cca8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x41cca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_41ccac:
    // 0x41ccac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x41ccacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_41ccb0:
    // 0x41ccb0: 0x320f809  jalr        $t9
label_41ccb4:
    if (ctx->pc == 0x41CCB4u) {
        ctx->pc = 0x41CCB4u;
            // 0x41ccb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CCB8u;
        goto label_41ccb8;
    }
    ctx->pc = 0x41CCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41CCB8u);
        ctx->pc = 0x41CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CCB0u;
            // 0x41ccb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41CCB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41CCB8u; }
            if (ctx->pc != 0x41CCB8u) { return; }
        }
        }
    }
    ctx->pc = 0x41CCB8u;
label_41ccb8:
    // 0x41ccb8: 0xc6ac00ec  lwc1        $f12, 0xEC($s5)
    ctx->pc = 0x41ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ccbc:
    // 0x41ccbc: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x41ccbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_41ccc0:
    // 0x41ccc0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x41ccc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_41ccc4:
    // 0x41ccc4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41ccc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ccc8:
    // 0x41ccc8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x41ccc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cccc:
    // 0x41cccc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41ccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ccd0:
    // 0x41ccd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41ccd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ccd4:
    // 0x41ccd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41ccd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ccd8:
    // 0x41ccd8: 0xc04cff4  jal         func_133FD0
label_41ccdc:
    if (ctx->pc == 0x41CCDCu) {
        ctx->pc = 0x41CCDCu;
            // 0x41ccdc: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x41CCE0u;
        goto label_41cce0;
    }
    ctx->pc = 0x41CCD8u;
    SET_GPR_U32(ctx, 31, 0x41CCE0u);
    ctx->pc = 0x41CCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CCD8u;
            // 0x41ccdc: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CCE0u; }
        if (ctx->pc != 0x41CCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CCE0u; }
        if (ctx->pc != 0x41CCE0u) { return; }
    }
    ctx->pc = 0x41CCE0u;
label_41cce0:
    // 0x41cce0: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x41cce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_41cce4:
    // 0x41cce4: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
label_41cce8:
    if (ctx->pc == 0x41CCE8u) {
        ctx->pc = 0x41CCE8u;
            // 0x41cce8: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x41CCECu;
        goto label_41ccec;
    }
    ctx->pc = 0x41CCE4u;
    {
        const bool branch_taken_0x41cce4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cce4) {
            ctx->pc = 0x41CCE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CCE4u;
            // 0x41cce8: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CD1Cu;
            goto label_41cd1c;
        }
    }
    ctx->pc = 0x41CCECu;
label_41ccec:
    // 0x41ccec: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x41ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_41ccf0:
    // 0x41ccf0: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x41ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ccf4:
    // 0x41ccf4: 0xc054bbc  jal         func_152EF0
label_41ccf8:
    if (ctx->pc == 0x41CCF8u) {
        ctx->pc = 0x41CCF8u;
            // 0x41ccf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CCFCu;
        goto label_41ccfc;
    }
    ctx->pc = 0x41CCF4u;
    SET_GPR_U32(ctx, 31, 0x41CCFCu);
    ctx->pc = 0x41CCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CCF4u;
            // 0x41ccf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CCFCu; }
        if (ctx->pc != 0x41CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CCFCu; }
        if (ctx->pc != 0x41CCFCu) { return; }
    }
    ctx->pc = 0x41CCFCu;
label_41ccfc:
    // 0x41ccfc: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x41ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_41cd00:
    // 0x41cd00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41cd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41cd04:
    // 0x41cd04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x41cd04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41cd08:
    // 0x41cd08: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x41cd08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_41cd0c:
    // 0x41cd0c: 0xc054c2c  jal         func_1530B0
label_41cd10:
    if (ctx->pc == 0x41CD10u) {
        ctx->pc = 0x41CD10u;
            // 0x41cd10: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x41CD14u;
        goto label_41cd14;
    }
    ctx->pc = 0x41CD0Cu;
    SET_GPR_U32(ctx, 31, 0x41CD14u);
    ctx->pc = 0x41CD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CD0Cu;
            // 0x41cd10: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CD14u; }
        if (ctx->pc != 0x41CD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CD14u; }
        if (ctx->pc != 0x41CD14u) { return; }
    }
    ctx->pc = 0x41CD14u;
label_41cd14:
    // 0x41cd14: 0x10000006  b           . + 4 + (0x6 << 2)
label_41cd18:
    if (ctx->pc == 0x41CD18u) {
        ctx->pc = 0x41CD1Cu;
        goto label_41cd1c;
    }
    ctx->pc = 0x41CD14u;
    {
        const bool branch_taken_0x41cd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cd14) {
            ctx->pc = 0x41CD30u;
            goto label_41cd30;
        }
    }
    ctx->pc = 0x41CD1Cu;
label_41cd1c:
    // 0x41cd1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41cd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41cd20:
    // 0x41cd20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x41cd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41cd24:
    // 0x41cd24: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x41cd24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_41cd28:
    // 0x41cd28: 0xc050044  jal         func_140110
label_41cd2c:
    if (ctx->pc == 0x41CD2Cu) {
        ctx->pc = 0x41CD2Cu;
            // 0x41cd2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CD30u;
        goto label_41cd30;
    }
    ctx->pc = 0x41CD28u;
    SET_GPR_U32(ctx, 31, 0x41CD30u);
    ctx->pc = 0x41CD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CD28u;
            // 0x41cd2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CD30u; }
        if (ctx->pc != 0x41CD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CD30u; }
        if (ctx->pc != 0x41CD30u) { return; }
    }
    ctx->pc = 0x41CD30u;
label_41cd30:
    // 0x41cd30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x41cd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_41cd34:
    // 0x41cd34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x41cd34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41cd38:
    // 0x41cd38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x41cd38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41cd3c:
    // 0x41cd3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41cd3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41cd40:
    // 0x41cd40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x41cd40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41cd44:
    // 0x41cd44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41cd44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41cd48:
    // 0x41cd48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41cd48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41cd4c:
    // 0x41cd4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41cd4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41cd50:
    // 0x41cd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41cd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41cd54:
    // 0x41cd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41cd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41cd58:
    // 0x41cd58: 0x3e00008  jr          $ra
label_41cd5c:
    if (ctx->pc == 0x41CD5Cu) {
        ctx->pc = 0x41CD5Cu;
            // 0x41cd5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x41CD60u;
        goto label_41cd60;
    }
    ctx->pc = 0x41CD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CD58u;
            // 0x41cd5c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41CD60u;
label_41cd60:
    // 0x41cd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41cd64:
    // 0x41cd64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41cd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41cd68:
    // 0x41cd68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41cd6c:
    // 0x41cd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41cd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41cd70:
    // 0x41cd70: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x41cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_41cd74:
    // 0x41cd74: 0x10660022  beq         $v1, $a2, . + 4 + (0x22 << 2)
label_41cd78:
    if (ctx->pc == 0x41CD78u) {
        ctx->pc = 0x41CD78u;
            // 0x41cd78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41CD7Cu;
        goto label_41cd7c;
    }
    ctx->pc = 0x41CD74u;
    {
        const bool branch_taken_0x41cd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x41CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CD74u;
            // 0x41cd78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cd74) {
            ctx->pc = 0x41CE00u;
            goto label_41ce00;
        }
    }
    ctx->pc = 0x41CD7Cu;
label_41cd7c:
    // 0x41cd7c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_41cd80:
    if (ctx->pc == 0x41CD80u) {
        ctx->pc = 0x41CD84u;
        goto label_41cd84;
    }
    ctx->pc = 0x41CD7Cu;
    {
        const bool branch_taken_0x41cd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cd7c) {
            ctx->pc = 0x41CD8Cu;
            goto label_41cd8c;
        }
    }
    ctx->pc = 0x41CD84u;
label_41cd84:
    // 0x41cd84: 0x10000065  b           . + 4 + (0x65 << 2)
label_41cd88:
    if (ctx->pc == 0x41CD88u) {
        ctx->pc = 0x41CD8Cu;
        goto label_41cd8c;
    }
    ctx->pc = 0x41CD84u;
    {
        const bool branch_taken_0x41cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cd84) {
            ctx->pc = 0x41CF1Cu;
            goto label_41cf1c;
        }
    }
    ctx->pc = 0x41CD8Cu;
label_41cd8c:
    // 0x41cd8c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41cd90:
    // 0x41cd90: 0x260500ec  addiu       $a1, $s0, 0xEC
    ctx->pc = 0x41cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
label_41cd94:
    // 0x41cd94: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x41cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41cd98:
    // 0x41cd98: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x41cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41cd9c:
    // 0x41cd9c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x41cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41cda0:
    // 0x41cda0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x41cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_41cda4:
    // 0x41cda4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41cda4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41cda8:
    // 0x41cda8: 0x0  nop
    ctx->pc = 0x41cda8u;
    // NOP
label_41cdac:
    // 0x41cdac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x41cdacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_41cdb0:
    // 0x41cdb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41cdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41cdb4:
    // 0x41cdb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_41cdb8:
    if (ctx->pc == 0x41CDB8u) {
        ctx->pc = 0x41CDB8u;
            // 0x41cdb8: 0xe60100ec  swc1        $f1, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->pc = 0x41CDBCu;
        goto label_41cdbc;
    }
    ctx->pc = 0x41CDB4u;
    {
        const bool branch_taken_0x41cdb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41CDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CDB4u;
            // 0x41cdb8: 0xe60100ec  swc1        $f1, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cdb4) {
            ctx->pc = 0x41CDC0u;
            goto label_41cdc0;
        }
    }
    ctx->pc = 0x41CDBCu;
label_41cdbc:
    // 0x41cdbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41cdc0:
    // 0x41cdc0: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_41cdc4:
    if (ctx->pc == 0x41CDC4u) {
        ctx->pc = 0x41CDC4u;
            // 0x41cdc4: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x41CDC8u;
        goto label_41cdc8;
    }
    ctx->pc = 0x41CDC0u;
    {
        const bool branch_taken_0x41cdc0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x41cdc0) {
            ctx->pc = 0x41CDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CDC0u;
            // 0x41cdc4: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CDD4u;
            goto label_41cdd4;
        }
    }
    ctx->pc = 0x41CDC8u;
label_41cdc8:
    // 0x41cdc8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x41cdc8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41cdcc:
    // 0x41cdcc: 0x10000007  b           . + 4 + (0x7 << 2)
label_41cdd0:
    if (ctx->pc == 0x41CDD0u) {
        ctx->pc = 0x41CDD0u;
            // 0x41cdd0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41CDD4u;
        goto label_41cdd4;
    }
    ctx->pc = 0x41CDCCu;
    {
        const bool branch_taken_0x41cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CDCCu;
            // 0x41cdd0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cdcc) {
            ctx->pc = 0x41CDECu;
            goto label_41cdec;
        }
    }
    ctx->pc = 0x41CDD4u;
label_41cdd4:
    // 0x41cdd4: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x41cdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_41cdd8:
    // 0x41cdd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x41cdd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_41cddc:
    // 0x41cddc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41cddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41cde0:
    // 0x41cde0: 0x0  nop
    ctx->pc = 0x41cde0u;
    // NOP
label_41cde4:
    // 0x41cde4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x41cde4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_41cde8:
    // 0x41cde8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x41cde8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_41cdec:
    // 0x41cdec: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x41cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41cdf0:
    // 0x41cdf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41cdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41cdf4:
    // 0x41cdf4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x41cdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_41cdf8:
    // 0x41cdf8: 0x10000048  b           . + 4 + (0x48 << 2)
label_41cdfc:
    if (ctx->pc == 0x41CDFCu) {
        ctx->pc = 0x41CDFCu;
            // 0x41cdfc: 0xae0000f0  sw          $zero, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x41CE00u;
        goto label_41ce00;
    }
    ctx->pc = 0x41CDF8u;
    {
        const bool branch_taken_0x41cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CDF8u;
            // 0x41cdfc: 0xae0000f0  sw          $zero, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cdf8) {
            ctx->pc = 0x41CF1Cu;
            goto label_41cf1c;
        }
    }
    ctx->pc = 0x41CE00u;
label_41ce00:
    // 0x41ce00: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41ce04:
    // 0x41ce04: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x41ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_41ce08:
    // 0x41ce08: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41ce0c:
    // 0x41ce0c: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x41ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ce10:
    // 0x41ce10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41ce10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41ce14:
    // 0x41ce14: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x41ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41ce18:
    // 0x41ce18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x41ce18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_41ce1c:
    // 0x41ce1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41ce1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41ce20:
    // 0x41ce20: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
label_41ce24:
    if (ctx->pc == 0x41CE24u) {
        ctx->pc = 0x41CE24u;
            // 0x41ce24: 0xe60100ec  swc1        $f1, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->pc = 0x41CE28u;
        goto label_41ce28;
    }
    ctx->pc = 0x41CE20u;
    {
        const bool branch_taken_0x41ce20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41CE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CE20u;
            // 0x41ce24: 0xe60100ec  swc1        $f1, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce20) {
            ctx->pc = 0x41CF1Cu;
            goto label_41cf1c;
        }
    }
    ctx->pc = 0x41CE28u;
label_41ce28:
    // 0x41ce28: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x41ce28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_41ce2c:
    // 0x41ce2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41ce30:
    // 0x41ce30: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x41ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41ce34:
    // 0x41ce34: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x41ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_41ce38:
    // 0x41ce38: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_41ce3c:
    if (ctx->pc == 0x41CE3Cu) {
        ctx->pc = 0x41CE3Cu;
            // 0x41ce3c: 0xc4810018  lwc1        $f1, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x41CE40u;
        goto label_41ce40;
    }
    ctx->pc = 0x41CE38u;
    {
        const bool branch_taken_0x41ce38 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x41CE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CE38u;
            // 0x41ce3c: 0xc4810018  lwc1        $f1, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce38) {
            ctx->pc = 0x41CE4Cu;
            goto label_41ce4c;
        }
    }
    ctx->pc = 0x41CE40u;
label_41ce40:
    // 0x41ce40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41ce40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41ce44:
    // 0x41ce44: 0x10000008  b           . + 4 + (0x8 << 2)
label_41ce48:
    if (ctx->pc == 0x41CE48u) {
        ctx->pc = 0x41CE48u;
            // 0x41ce48: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41CE4Cu;
        goto label_41ce4c;
    }
    ctx->pc = 0x41CE44u;
    {
        const bool branch_taken_0x41ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CE44u;
            // 0x41ce48: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce44) {
            ctx->pc = 0x41CE68u;
            goto label_41ce68;
        }
    }
    ctx->pc = 0x41CE4Cu;
label_41ce4c:
    // 0x41ce4c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x41ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_41ce50:
    // 0x41ce50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x41ce50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_41ce54:
    // 0x41ce54: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x41ce54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_41ce58:
    // 0x41ce58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41ce58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41ce5c:
    // 0x41ce5c: 0x0  nop
    ctx->pc = 0x41ce5cu;
    // NOP
label_41ce60:
    // 0x41ce60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41ce60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_41ce64:
    // 0x41ce64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x41ce64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_41ce68:
    // 0x41ce68: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x41ce68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41ce6c:
    // 0x41ce6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x41ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_41ce70:
    // 0x41ce70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41ce70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41ce74:
    // 0x41ce74: 0x0  nop
    ctx->pc = 0x41ce74u;
    // NOP
label_41ce78:
    // 0x41ce78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41ce78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41ce7c:
    // 0x41ce7c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_41ce80:
    if (ctx->pc == 0x41CE80u) {
        ctx->pc = 0x41CE80u;
            // 0x41ce80: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x41CE84u;
        goto label_41ce84;
    }
    ctx->pc = 0x41CE7Cu;
    {
        const bool branch_taken_0x41ce7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41ce7c) {
            ctx->pc = 0x41CE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CE7Cu;
            // 0x41ce80: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CE94u;
            goto label_41ce94;
        }
    }
    ctx->pc = 0x41CE84u;
label_41ce84:
    // 0x41ce84: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41ce84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41ce88:
    // 0x41ce88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x41ce88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_41ce8c:
    // 0x41ce8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_41ce90:
    if (ctx->pc == 0x41CE90u) {
        ctx->pc = 0x41CE90u;
            // 0x41ce90: 0x2c83003c  sltiu       $v1, $a0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
        ctx->pc = 0x41CE94u;
        goto label_41ce94;
    }
    ctx->pc = 0x41CE8Cu;
    {
        const bool branch_taken_0x41ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CE8Cu;
            // 0x41ce90: 0x2c83003c  sltiu       $v1, $a0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ce8c) {
            ctx->pc = 0x41CEACu;
            goto label_41ceac;
        }
    }
    ctx->pc = 0x41CE94u;
label_41ce94:
    // 0x41ce94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x41ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_41ce98:
    // 0x41ce98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41ce98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41ce9c:
    // 0x41ce9c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x41ce9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_41cea0:
    // 0x41cea0: 0x0  nop
    ctx->pc = 0x41cea0u;
    // NOP
label_41cea4:
    // 0x41cea4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x41cea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_41cea8:
    // 0x41cea8: 0x2c83003c  sltiu       $v1, $a0, 0x3C
    ctx->pc = 0x41cea8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_41ceac:
    // 0x41ceac: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_41ceb0:
    if (ctx->pc == 0x41CEB0u) {
        ctx->pc = 0x41CEB0u;
            // 0x41ceb0: 0xae0400f0  sw          $a0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 4));
        ctx->pc = 0x41CEB4u;
        goto label_41ceb4;
    }
    ctx->pc = 0x41CEACu;
    {
        const bool branch_taken_0x41ceac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CEACu;
            // 0x41ceb0: 0xae0400f0  sw          $a0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ceac) {
            ctx->pc = 0x41CF1Cu;
            goto label_41cf1c;
        }
    }
    ctx->pc = 0x41CEB4u;
label_41ceb4:
    // 0x41ceb4: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x41ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ceb8:
    // 0x41ceb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x41ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_41cebc:
    // 0x41cebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41cebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41cec0:
    // 0x41cec0: 0x0  nop
    ctx->pc = 0x41cec0u;
    // NOP
label_41cec4:
    // 0x41cec4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41cec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_41cec8:
    // 0x41cec8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x41cec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_41cecc:
    // 0x41cecc: 0x0  nop
    ctx->pc = 0x41ceccu;
    // NOP
label_41ced0:
    // 0x41ced0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x41ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_41ced4:
    // 0x41ced4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x41ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ced8:
    // 0x41ced8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41ced8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41cedc:
    // 0x41cedc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_41cee0:
    if (ctx->pc == 0x41CEE0u) {
        ctx->pc = 0x41CEE0u;
            // 0x41cee0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x41CEE4u;
        goto label_41cee4;
    }
    ctx->pc = 0x41CEDCu;
    {
        const bool branch_taken_0x41cedc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41cedc) {
            ctx->pc = 0x41CEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CEDCu;
            // 0x41cee0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CEF4u;
            goto label_41cef4;
        }
    }
    ctx->pc = 0x41CEE4u;
label_41cee4:
    // 0x41cee4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41cee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41cee8:
    // 0x41cee8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x41cee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_41ceec:
    // 0x41ceec: 0x10000007  b           . + 4 + (0x7 << 2)
label_41cef0:
    if (ctx->pc == 0x41CEF0u) {
        ctx->pc = 0x41CEF0u;
            // 0x41cef0: 0xae0300e4  sw          $v1, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
        ctx->pc = 0x41CEF4u;
        goto label_41cef4;
    }
    ctx->pc = 0x41CEECu;
    {
        const bool branch_taken_0x41ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CEECu;
            // 0x41cef0: 0xae0300e4  sw          $v1, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ceec) {
            ctx->pc = 0x41CF0Cu;
            goto label_41cf0c;
        }
    }
    ctx->pc = 0x41CEF4u;
label_41cef4:
    // 0x41cef4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x41cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_41cef8:
    // 0x41cef8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41cef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41cefc:
    // 0x41cefc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x41cefcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_41cf00:
    // 0x41cf00: 0x0  nop
    ctx->pc = 0x41cf00u;
    // NOP
label_41cf04:
    // 0x41cf04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x41cf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_41cf08:
    // 0x41cf08: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x41cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_41cf0c:
    // 0x41cf0c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x41cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_41cf10:
    // 0x41cf10: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x41cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_41cf14:
    // 0x41cf14: 0xc10c9b4  jal         func_4326D0
label_41cf18:
    if (ctx->pc == 0x41CF18u) {
        ctx->pc = 0x41CF18u;
            // 0x41cf18: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->pc = 0x41CF1Cu;
        goto label_41cf1c;
    }
    ctx->pc = 0x41CF14u;
    SET_GPR_U32(ctx, 31, 0x41CF1Cu);
    ctx->pc = 0x41CF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CF14u;
            // 0x41cf18: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CF1Cu; }
        if (ctx->pc != 0x41CF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CF1Cu; }
        if (ctx->pc != 0x41CF1Cu) { return; }
    }
    ctx->pc = 0x41CF1Cu;
label_41cf1c:
    // 0x41cf1c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41cf20:
    // 0x41cf20: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x41cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_41cf24:
    // 0x41cf24: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x41cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_41cf28:
    // 0x41cf28: 0x8c630cd0  lw          $v1, 0xCD0($v1)
    ctx->pc = 0x41cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3280)));
label_41cf2c:
    // 0x41cf2c: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_41cf30:
    if (ctx->pc == 0x41CF30u) {
        ctx->pc = 0x41CF30u;
            // 0x41cf30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x41CF34u;
        goto label_41cf34;
    }
    ctx->pc = 0x41CF2Cu;
    {
        const bool branch_taken_0x41cf2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x41cf2c) {
            ctx->pc = 0x41CF30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41CF2Cu;
            // 0x41cf30: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41CF40u;
            goto label_41cf40;
        }
    }
    ctx->pc = 0x41CF34u;
label_41cf34:
    // 0x41cf34: 0xc1075ec  jal         func_41D7B0
label_41cf38:
    if (ctx->pc == 0x41CF38u) {
        ctx->pc = 0x41CF38u;
            // 0x41cf38: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->pc = 0x41CF3Cu;
        goto label_41cf3c;
    }
    ctx->pc = 0x41CF34u;
    SET_GPR_U32(ctx, 31, 0x41CF3Cu);
    ctx->pc = 0x41CF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41CF34u;
            // 0x41cf38: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41D7B0u;
    if (runtime->hasFunction(0x41D7B0u)) {
        auto targetFn = runtime->lookupFunction(0x41D7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CF3Cu; }
        if (ctx->pc != 0x41CF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041D7B0_0x41d7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41CF3Cu; }
        if (ctx->pc != 0x41CF3Cu) { return; }
    }
    ctx->pc = 0x41CF3Cu;
label_41cf3c:
    // 0x41cf3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41cf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41cf40:
    // 0x41cf40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41cf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41cf44:
    // 0x41cf44: 0x3e00008  jr          $ra
label_41cf48:
    if (ctx->pc == 0x41CF48u) {
        ctx->pc = 0x41CF48u;
            // 0x41cf48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41CF4Cu;
        goto label_41cf4c;
    }
    ctx->pc = 0x41CF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41CF44u;
            // 0x41cf48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41CF4Cu;
label_41cf4c:
    // 0x41cf4c: 0x0  nop
    ctx->pc = 0x41cf4cu;
    // NOP
label_41cf50:
    // 0x41cf50: 0x3e00008  jr          $ra
label_41cf54:
    if (ctx->pc == 0x41CF54u) {
        ctx->pc = 0x41CF58u;
        goto label_41cf58;
    }
    ctx->pc = 0x41CF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41CF58u;
label_41cf58:
    // 0x41cf58: 0x0  nop
    ctx->pc = 0x41cf58u;
    // NOP
label_41cf5c:
    // 0x41cf5c: 0x0  nop
    ctx->pc = 0x41cf5cu;
    // NOP
}
