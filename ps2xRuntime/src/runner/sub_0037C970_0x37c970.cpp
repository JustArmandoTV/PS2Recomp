#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037C970
// Address: 0x37c970 - 0x37ce90
void sub_0037C970_0x37c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C970_0x37c970");
#endif

    switch (ctx->pc) {
        case 0x37c970u: goto label_37c970;
        case 0x37c974u: goto label_37c974;
        case 0x37c978u: goto label_37c978;
        case 0x37c97cu: goto label_37c97c;
        case 0x37c980u: goto label_37c980;
        case 0x37c984u: goto label_37c984;
        case 0x37c988u: goto label_37c988;
        case 0x37c98cu: goto label_37c98c;
        case 0x37c990u: goto label_37c990;
        case 0x37c994u: goto label_37c994;
        case 0x37c998u: goto label_37c998;
        case 0x37c99cu: goto label_37c99c;
        case 0x37c9a0u: goto label_37c9a0;
        case 0x37c9a4u: goto label_37c9a4;
        case 0x37c9a8u: goto label_37c9a8;
        case 0x37c9acu: goto label_37c9ac;
        case 0x37c9b0u: goto label_37c9b0;
        case 0x37c9b4u: goto label_37c9b4;
        case 0x37c9b8u: goto label_37c9b8;
        case 0x37c9bcu: goto label_37c9bc;
        case 0x37c9c0u: goto label_37c9c0;
        case 0x37c9c4u: goto label_37c9c4;
        case 0x37c9c8u: goto label_37c9c8;
        case 0x37c9ccu: goto label_37c9cc;
        case 0x37c9d0u: goto label_37c9d0;
        case 0x37c9d4u: goto label_37c9d4;
        case 0x37c9d8u: goto label_37c9d8;
        case 0x37c9dcu: goto label_37c9dc;
        case 0x37c9e0u: goto label_37c9e0;
        case 0x37c9e4u: goto label_37c9e4;
        case 0x37c9e8u: goto label_37c9e8;
        case 0x37c9ecu: goto label_37c9ec;
        case 0x37c9f0u: goto label_37c9f0;
        case 0x37c9f4u: goto label_37c9f4;
        case 0x37c9f8u: goto label_37c9f8;
        case 0x37c9fcu: goto label_37c9fc;
        case 0x37ca00u: goto label_37ca00;
        case 0x37ca04u: goto label_37ca04;
        case 0x37ca08u: goto label_37ca08;
        case 0x37ca0cu: goto label_37ca0c;
        case 0x37ca10u: goto label_37ca10;
        case 0x37ca14u: goto label_37ca14;
        case 0x37ca18u: goto label_37ca18;
        case 0x37ca1cu: goto label_37ca1c;
        case 0x37ca20u: goto label_37ca20;
        case 0x37ca24u: goto label_37ca24;
        case 0x37ca28u: goto label_37ca28;
        case 0x37ca2cu: goto label_37ca2c;
        case 0x37ca30u: goto label_37ca30;
        case 0x37ca34u: goto label_37ca34;
        case 0x37ca38u: goto label_37ca38;
        case 0x37ca3cu: goto label_37ca3c;
        case 0x37ca40u: goto label_37ca40;
        case 0x37ca44u: goto label_37ca44;
        case 0x37ca48u: goto label_37ca48;
        case 0x37ca4cu: goto label_37ca4c;
        case 0x37ca50u: goto label_37ca50;
        case 0x37ca54u: goto label_37ca54;
        case 0x37ca58u: goto label_37ca58;
        case 0x37ca5cu: goto label_37ca5c;
        case 0x37ca60u: goto label_37ca60;
        case 0x37ca64u: goto label_37ca64;
        case 0x37ca68u: goto label_37ca68;
        case 0x37ca6cu: goto label_37ca6c;
        case 0x37ca70u: goto label_37ca70;
        case 0x37ca74u: goto label_37ca74;
        case 0x37ca78u: goto label_37ca78;
        case 0x37ca7cu: goto label_37ca7c;
        case 0x37ca80u: goto label_37ca80;
        case 0x37ca84u: goto label_37ca84;
        case 0x37ca88u: goto label_37ca88;
        case 0x37ca8cu: goto label_37ca8c;
        case 0x37ca90u: goto label_37ca90;
        case 0x37ca94u: goto label_37ca94;
        case 0x37ca98u: goto label_37ca98;
        case 0x37ca9cu: goto label_37ca9c;
        case 0x37caa0u: goto label_37caa0;
        case 0x37caa4u: goto label_37caa4;
        case 0x37caa8u: goto label_37caa8;
        case 0x37caacu: goto label_37caac;
        case 0x37cab0u: goto label_37cab0;
        case 0x37cab4u: goto label_37cab4;
        case 0x37cab8u: goto label_37cab8;
        case 0x37cabcu: goto label_37cabc;
        case 0x37cac0u: goto label_37cac0;
        case 0x37cac4u: goto label_37cac4;
        case 0x37cac8u: goto label_37cac8;
        case 0x37caccu: goto label_37cacc;
        case 0x37cad0u: goto label_37cad0;
        case 0x37cad4u: goto label_37cad4;
        case 0x37cad8u: goto label_37cad8;
        case 0x37cadcu: goto label_37cadc;
        case 0x37cae0u: goto label_37cae0;
        case 0x37cae4u: goto label_37cae4;
        case 0x37cae8u: goto label_37cae8;
        case 0x37caecu: goto label_37caec;
        case 0x37caf0u: goto label_37caf0;
        case 0x37caf4u: goto label_37caf4;
        case 0x37caf8u: goto label_37caf8;
        case 0x37cafcu: goto label_37cafc;
        case 0x37cb00u: goto label_37cb00;
        case 0x37cb04u: goto label_37cb04;
        case 0x37cb08u: goto label_37cb08;
        case 0x37cb0cu: goto label_37cb0c;
        case 0x37cb10u: goto label_37cb10;
        case 0x37cb14u: goto label_37cb14;
        case 0x37cb18u: goto label_37cb18;
        case 0x37cb1cu: goto label_37cb1c;
        case 0x37cb20u: goto label_37cb20;
        case 0x37cb24u: goto label_37cb24;
        case 0x37cb28u: goto label_37cb28;
        case 0x37cb2cu: goto label_37cb2c;
        case 0x37cb30u: goto label_37cb30;
        case 0x37cb34u: goto label_37cb34;
        case 0x37cb38u: goto label_37cb38;
        case 0x37cb3cu: goto label_37cb3c;
        case 0x37cb40u: goto label_37cb40;
        case 0x37cb44u: goto label_37cb44;
        case 0x37cb48u: goto label_37cb48;
        case 0x37cb4cu: goto label_37cb4c;
        case 0x37cb50u: goto label_37cb50;
        case 0x37cb54u: goto label_37cb54;
        case 0x37cb58u: goto label_37cb58;
        case 0x37cb5cu: goto label_37cb5c;
        case 0x37cb60u: goto label_37cb60;
        case 0x37cb64u: goto label_37cb64;
        case 0x37cb68u: goto label_37cb68;
        case 0x37cb6cu: goto label_37cb6c;
        case 0x37cb70u: goto label_37cb70;
        case 0x37cb74u: goto label_37cb74;
        case 0x37cb78u: goto label_37cb78;
        case 0x37cb7cu: goto label_37cb7c;
        case 0x37cb80u: goto label_37cb80;
        case 0x37cb84u: goto label_37cb84;
        case 0x37cb88u: goto label_37cb88;
        case 0x37cb8cu: goto label_37cb8c;
        case 0x37cb90u: goto label_37cb90;
        case 0x37cb94u: goto label_37cb94;
        case 0x37cb98u: goto label_37cb98;
        case 0x37cb9cu: goto label_37cb9c;
        case 0x37cba0u: goto label_37cba0;
        case 0x37cba4u: goto label_37cba4;
        case 0x37cba8u: goto label_37cba8;
        case 0x37cbacu: goto label_37cbac;
        case 0x37cbb0u: goto label_37cbb0;
        case 0x37cbb4u: goto label_37cbb4;
        case 0x37cbb8u: goto label_37cbb8;
        case 0x37cbbcu: goto label_37cbbc;
        case 0x37cbc0u: goto label_37cbc0;
        case 0x37cbc4u: goto label_37cbc4;
        case 0x37cbc8u: goto label_37cbc8;
        case 0x37cbccu: goto label_37cbcc;
        case 0x37cbd0u: goto label_37cbd0;
        case 0x37cbd4u: goto label_37cbd4;
        case 0x37cbd8u: goto label_37cbd8;
        case 0x37cbdcu: goto label_37cbdc;
        case 0x37cbe0u: goto label_37cbe0;
        case 0x37cbe4u: goto label_37cbe4;
        case 0x37cbe8u: goto label_37cbe8;
        case 0x37cbecu: goto label_37cbec;
        case 0x37cbf0u: goto label_37cbf0;
        case 0x37cbf4u: goto label_37cbf4;
        case 0x37cbf8u: goto label_37cbf8;
        case 0x37cbfcu: goto label_37cbfc;
        case 0x37cc00u: goto label_37cc00;
        case 0x37cc04u: goto label_37cc04;
        case 0x37cc08u: goto label_37cc08;
        case 0x37cc0cu: goto label_37cc0c;
        case 0x37cc10u: goto label_37cc10;
        case 0x37cc14u: goto label_37cc14;
        case 0x37cc18u: goto label_37cc18;
        case 0x37cc1cu: goto label_37cc1c;
        case 0x37cc20u: goto label_37cc20;
        case 0x37cc24u: goto label_37cc24;
        case 0x37cc28u: goto label_37cc28;
        case 0x37cc2cu: goto label_37cc2c;
        case 0x37cc30u: goto label_37cc30;
        case 0x37cc34u: goto label_37cc34;
        case 0x37cc38u: goto label_37cc38;
        case 0x37cc3cu: goto label_37cc3c;
        case 0x37cc40u: goto label_37cc40;
        case 0x37cc44u: goto label_37cc44;
        case 0x37cc48u: goto label_37cc48;
        case 0x37cc4cu: goto label_37cc4c;
        case 0x37cc50u: goto label_37cc50;
        case 0x37cc54u: goto label_37cc54;
        case 0x37cc58u: goto label_37cc58;
        case 0x37cc5cu: goto label_37cc5c;
        case 0x37cc60u: goto label_37cc60;
        case 0x37cc64u: goto label_37cc64;
        case 0x37cc68u: goto label_37cc68;
        case 0x37cc6cu: goto label_37cc6c;
        case 0x37cc70u: goto label_37cc70;
        case 0x37cc74u: goto label_37cc74;
        case 0x37cc78u: goto label_37cc78;
        case 0x37cc7cu: goto label_37cc7c;
        case 0x37cc80u: goto label_37cc80;
        case 0x37cc84u: goto label_37cc84;
        case 0x37cc88u: goto label_37cc88;
        case 0x37cc8cu: goto label_37cc8c;
        case 0x37cc90u: goto label_37cc90;
        case 0x37cc94u: goto label_37cc94;
        case 0x37cc98u: goto label_37cc98;
        case 0x37cc9cu: goto label_37cc9c;
        case 0x37cca0u: goto label_37cca0;
        case 0x37cca4u: goto label_37cca4;
        case 0x37cca8u: goto label_37cca8;
        case 0x37ccacu: goto label_37ccac;
        case 0x37ccb0u: goto label_37ccb0;
        case 0x37ccb4u: goto label_37ccb4;
        case 0x37ccb8u: goto label_37ccb8;
        case 0x37ccbcu: goto label_37ccbc;
        case 0x37ccc0u: goto label_37ccc0;
        case 0x37ccc4u: goto label_37ccc4;
        case 0x37ccc8u: goto label_37ccc8;
        case 0x37ccccu: goto label_37cccc;
        case 0x37ccd0u: goto label_37ccd0;
        case 0x37ccd4u: goto label_37ccd4;
        case 0x37ccd8u: goto label_37ccd8;
        case 0x37ccdcu: goto label_37ccdc;
        case 0x37cce0u: goto label_37cce0;
        case 0x37cce4u: goto label_37cce4;
        case 0x37cce8u: goto label_37cce8;
        case 0x37ccecu: goto label_37ccec;
        case 0x37ccf0u: goto label_37ccf0;
        case 0x37ccf4u: goto label_37ccf4;
        case 0x37ccf8u: goto label_37ccf8;
        case 0x37ccfcu: goto label_37ccfc;
        case 0x37cd00u: goto label_37cd00;
        case 0x37cd04u: goto label_37cd04;
        case 0x37cd08u: goto label_37cd08;
        case 0x37cd0cu: goto label_37cd0c;
        case 0x37cd10u: goto label_37cd10;
        case 0x37cd14u: goto label_37cd14;
        case 0x37cd18u: goto label_37cd18;
        case 0x37cd1cu: goto label_37cd1c;
        case 0x37cd20u: goto label_37cd20;
        case 0x37cd24u: goto label_37cd24;
        case 0x37cd28u: goto label_37cd28;
        case 0x37cd2cu: goto label_37cd2c;
        case 0x37cd30u: goto label_37cd30;
        case 0x37cd34u: goto label_37cd34;
        case 0x37cd38u: goto label_37cd38;
        case 0x37cd3cu: goto label_37cd3c;
        case 0x37cd40u: goto label_37cd40;
        case 0x37cd44u: goto label_37cd44;
        case 0x37cd48u: goto label_37cd48;
        case 0x37cd4cu: goto label_37cd4c;
        case 0x37cd50u: goto label_37cd50;
        case 0x37cd54u: goto label_37cd54;
        case 0x37cd58u: goto label_37cd58;
        case 0x37cd5cu: goto label_37cd5c;
        case 0x37cd60u: goto label_37cd60;
        case 0x37cd64u: goto label_37cd64;
        case 0x37cd68u: goto label_37cd68;
        case 0x37cd6cu: goto label_37cd6c;
        case 0x37cd70u: goto label_37cd70;
        case 0x37cd74u: goto label_37cd74;
        case 0x37cd78u: goto label_37cd78;
        case 0x37cd7cu: goto label_37cd7c;
        case 0x37cd80u: goto label_37cd80;
        case 0x37cd84u: goto label_37cd84;
        case 0x37cd88u: goto label_37cd88;
        case 0x37cd8cu: goto label_37cd8c;
        case 0x37cd90u: goto label_37cd90;
        case 0x37cd94u: goto label_37cd94;
        case 0x37cd98u: goto label_37cd98;
        case 0x37cd9cu: goto label_37cd9c;
        case 0x37cda0u: goto label_37cda0;
        case 0x37cda4u: goto label_37cda4;
        case 0x37cda8u: goto label_37cda8;
        case 0x37cdacu: goto label_37cdac;
        case 0x37cdb0u: goto label_37cdb0;
        case 0x37cdb4u: goto label_37cdb4;
        case 0x37cdb8u: goto label_37cdb8;
        case 0x37cdbcu: goto label_37cdbc;
        case 0x37cdc0u: goto label_37cdc0;
        case 0x37cdc4u: goto label_37cdc4;
        case 0x37cdc8u: goto label_37cdc8;
        case 0x37cdccu: goto label_37cdcc;
        case 0x37cdd0u: goto label_37cdd0;
        case 0x37cdd4u: goto label_37cdd4;
        case 0x37cdd8u: goto label_37cdd8;
        case 0x37cddcu: goto label_37cddc;
        case 0x37cde0u: goto label_37cde0;
        case 0x37cde4u: goto label_37cde4;
        case 0x37cde8u: goto label_37cde8;
        case 0x37cdecu: goto label_37cdec;
        case 0x37cdf0u: goto label_37cdf0;
        case 0x37cdf4u: goto label_37cdf4;
        case 0x37cdf8u: goto label_37cdf8;
        case 0x37cdfcu: goto label_37cdfc;
        case 0x37ce00u: goto label_37ce00;
        case 0x37ce04u: goto label_37ce04;
        case 0x37ce08u: goto label_37ce08;
        case 0x37ce0cu: goto label_37ce0c;
        case 0x37ce10u: goto label_37ce10;
        case 0x37ce14u: goto label_37ce14;
        case 0x37ce18u: goto label_37ce18;
        case 0x37ce1cu: goto label_37ce1c;
        case 0x37ce20u: goto label_37ce20;
        case 0x37ce24u: goto label_37ce24;
        case 0x37ce28u: goto label_37ce28;
        case 0x37ce2cu: goto label_37ce2c;
        case 0x37ce30u: goto label_37ce30;
        case 0x37ce34u: goto label_37ce34;
        case 0x37ce38u: goto label_37ce38;
        case 0x37ce3cu: goto label_37ce3c;
        case 0x37ce40u: goto label_37ce40;
        case 0x37ce44u: goto label_37ce44;
        case 0x37ce48u: goto label_37ce48;
        case 0x37ce4cu: goto label_37ce4c;
        case 0x37ce50u: goto label_37ce50;
        case 0x37ce54u: goto label_37ce54;
        case 0x37ce58u: goto label_37ce58;
        case 0x37ce5cu: goto label_37ce5c;
        case 0x37ce60u: goto label_37ce60;
        case 0x37ce64u: goto label_37ce64;
        case 0x37ce68u: goto label_37ce68;
        case 0x37ce6cu: goto label_37ce6c;
        case 0x37ce70u: goto label_37ce70;
        case 0x37ce74u: goto label_37ce74;
        case 0x37ce78u: goto label_37ce78;
        case 0x37ce7cu: goto label_37ce7c;
        case 0x37ce80u: goto label_37ce80;
        case 0x37ce84u: goto label_37ce84;
        case 0x37ce88u: goto label_37ce88;
        case 0x37ce8cu: goto label_37ce8c;
        default: break;
    }

    ctx->pc = 0x37c970u;

label_37c970:
    // 0x37c970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37c974:
    // 0x37c974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37c978:
    // 0x37c978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37c97c:
    // 0x37c97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c980:
    // 0x37c980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37c984:
    // 0x37c984: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_37c988:
    if (ctx->pc == 0x37C988u) {
        ctx->pc = 0x37C988u;
            // 0x37c988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C98Cu;
        goto label_37c98c;
    }
    ctx->pc = 0x37C984u;
    {
        const bool branch_taken_0x37c984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C984u;
            // 0x37c988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c984) {
            ctx->pc = 0x37CAB8u;
            goto label_37cab8;
        }
    }
    ctx->pc = 0x37C98Cu;
label_37c98c:
    // 0x37c98c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37c990:
    // 0x37c990: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37c994:
    // 0x37c994: 0x246375b0  addiu       $v1, $v1, 0x75B0
    ctx->pc = 0x37c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30128));
label_37c998:
    // 0x37c998: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37c998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_37c99c:
    // 0x37c99c: 0x244275e8  addiu       $v0, $v0, 0x75E8
    ctx->pc = 0x37c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30184));
label_37c9a0:
    // 0x37c9a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37c9a4:
    // 0x37c9a4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x37c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_37c9a8:
    // 0x37c9a8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x37c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_37c9ac:
    // 0x37c9ac: 0xc0407c0  jal         func_101F00
label_37c9b0:
    if (ctx->pc == 0x37C9B0u) {
        ctx->pc = 0x37C9B0u;
            // 0x37c9b0: 0x24a5cad0  addiu       $a1, $a1, -0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
        ctx->pc = 0x37C9B4u;
        goto label_37c9b4;
    }
    ctx->pc = 0x37C9ACu;
    SET_GPR_U32(ctx, 31, 0x37C9B4u);
    ctx->pc = 0x37C9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C9ACu;
            // 0x37c9b0: 0x24a5cad0  addiu       $a1, $a1, -0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C9B4u; }
        if (ctx->pc != 0x37C9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C9B4u; }
        if (ctx->pc != 0x37C9B4u) { return; }
    }
    ctx->pc = 0x37C9B4u;
label_37c9b4:
    // 0x37c9b4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x37c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_37c9b8:
    // 0x37c9b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_37c9bc:
    if (ctx->pc == 0x37C9BCu) {
        ctx->pc = 0x37C9BCu;
            // 0x37c9bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x37C9C0u;
        goto label_37c9c0;
    }
    ctx->pc = 0x37C9B8u;
    {
        const bool branch_taken_0x37c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9b8) {
            ctx->pc = 0x37C9BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C9B8u;
            // 0x37c9bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C9CCu;
            goto label_37c9cc;
        }
    }
    ctx->pc = 0x37C9C0u;
label_37c9c0:
    // 0x37c9c0: 0xc07507c  jal         func_1D41F0
label_37c9c4:
    if (ctx->pc == 0x37C9C4u) {
        ctx->pc = 0x37C9C4u;
            // 0x37c9c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x37C9C8u;
        goto label_37c9c8;
    }
    ctx->pc = 0x37C9C0u;
    SET_GPR_U32(ctx, 31, 0x37C9C8u);
    ctx->pc = 0x37C9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C9C0u;
            // 0x37c9c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C9C8u; }
        if (ctx->pc != 0x37C9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C9C8u; }
        if (ctx->pc != 0x37C9C8u) { return; }
    }
    ctx->pc = 0x37C9C8u;
label_37c9c8:
    // 0x37c9c8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x37c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_37c9cc:
    // 0x37c9cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_37c9d0:
    if (ctx->pc == 0x37C9D0u) {
        ctx->pc = 0x37C9D0u;
            // 0x37c9d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x37C9D4u;
        goto label_37c9d4;
    }
    ctx->pc = 0x37C9CCu;
    {
        const bool branch_taken_0x37c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9cc) {
            ctx->pc = 0x37C9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C9CCu;
            // 0x37c9d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C9FCu;
            goto label_37c9fc;
        }
    }
    ctx->pc = 0x37C9D4u;
label_37c9d4:
    // 0x37c9d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_37c9d8:
    if (ctx->pc == 0x37C9D8u) {
        ctx->pc = 0x37C9DCu;
        goto label_37c9dc;
    }
    ctx->pc = 0x37C9D4u;
    {
        const bool branch_taken_0x37c9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9d4) {
            ctx->pc = 0x37C9F8u;
            goto label_37c9f8;
        }
    }
    ctx->pc = 0x37C9DCu;
label_37c9dc:
    // 0x37c9dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_37c9e0:
    if (ctx->pc == 0x37C9E0u) {
        ctx->pc = 0x37C9E4u;
        goto label_37c9e4;
    }
    ctx->pc = 0x37C9DCu;
    {
        const bool branch_taken_0x37c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9dc) {
            ctx->pc = 0x37C9F8u;
            goto label_37c9f8;
        }
    }
    ctx->pc = 0x37C9E4u;
label_37c9e4:
    // 0x37c9e4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x37c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_37c9e8:
    // 0x37c9e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_37c9ec:
    if (ctx->pc == 0x37C9ECu) {
        ctx->pc = 0x37C9F0u;
        goto label_37c9f0;
    }
    ctx->pc = 0x37C9E8u;
    {
        const bool branch_taken_0x37c9e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9e8) {
            ctx->pc = 0x37C9F8u;
            goto label_37c9f8;
        }
    }
    ctx->pc = 0x37C9F0u;
label_37c9f0:
    // 0x37c9f0: 0xc0400a8  jal         func_1002A0
label_37c9f4:
    if (ctx->pc == 0x37C9F4u) {
        ctx->pc = 0x37C9F8u;
        goto label_37c9f8;
    }
    ctx->pc = 0x37C9F0u;
    SET_GPR_U32(ctx, 31, 0x37C9F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C9F8u; }
        if (ctx->pc != 0x37C9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C9F8u; }
        if (ctx->pc != 0x37C9F8u) { return; }
    }
    ctx->pc = 0x37C9F8u;
label_37c9f8:
    // 0x37c9f8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x37c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_37c9fc:
    // 0x37c9fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_37ca00:
    if (ctx->pc == 0x37CA00u) {
        ctx->pc = 0x37CA00u;
            // 0x37ca00: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x37CA04u;
        goto label_37ca04;
    }
    ctx->pc = 0x37C9FCu;
    {
        const bool branch_taken_0x37c9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c9fc) {
            ctx->pc = 0x37CA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C9FCu;
            // 0x37ca00: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CA2Cu;
            goto label_37ca2c;
        }
    }
    ctx->pc = 0x37CA04u;
label_37ca04:
    // 0x37ca04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_37ca08:
    if (ctx->pc == 0x37CA08u) {
        ctx->pc = 0x37CA0Cu;
        goto label_37ca0c;
    }
    ctx->pc = 0x37CA04u;
    {
        const bool branch_taken_0x37ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca04) {
            ctx->pc = 0x37CA28u;
            goto label_37ca28;
        }
    }
    ctx->pc = 0x37CA0Cu;
label_37ca0c:
    // 0x37ca0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_37ca10:
    if (ctx->pc == 0x37CA10u) {
        ctx->pc = 0x37CA14u;
        goto label_37ca14;
    }
    ctx->pc = 0x37CA0Cu;
    {
        const bool branch_taken_0x37ca0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca0c) {
            ctx->pc = 0x37CA28u;
            goto label_37ca28;
        }
    }
    ctx->pc = 0x37CA14u;
label_37ca14:
    // 0x37ca14: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x37ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_37ca18:
    // 0x37ca18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_37ca1c:
    if (ctx->pc == 0x37CA1Cu) {
        ctx->pc = 0x37CA20u;
        goto label_37ca20;
    }
    ctx->pc = 0x37CA18u;
    {
        const bool branch_taken_0x37ca18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca18) {
            ctx->pc = 0x37CA28u;
            goto label_37ca28;
        }
    }
    ctx->pc = 0x37CA20u;
label_37ca20:
    // 0x37ca20: 0xc0400a8  jal         func_1002A0
label_37ca24:
    if (ctx->pc == 0x37CA24u) {
        ctx->pc = 0x37CA28u;
        goto label_37ca28;
    }
    ctx->pc = 0x37CA20u;
    SET_GPR_U32(ctx, 31, 0x37CA28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CA28u; }
        if (ctx->pc != 0x37CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CA28u; }
        if (ctx->pc != 0x37CA28u) { return; }
    }
    ctx->pc = 0x37CA28u;
label_37ca28:
    // 0x37ca28: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x37ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_37ca2c:
    // 0x37ca2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_37ca30:
    if (ctx->pc == 0x37CA30u) {
        ctx->pc = 0x37CA34u;
        goto label_37ca34;
    }
    ctx->pc = 0x37CA2Cu;
    {
        const bool branch_taken_0x37ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca2c) {
            ctx->pc = 0x37CA48u;
            goto label_37ca48;
        }
    }
    ctx->pc = 0x37CA34u;
label_37ca34:
    // 0x37ca34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37ca38:
    // 0x37ca38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ca3c:
    // 0x37ca3c: 0x246375a0  addiu       $v1, $v1, 0x75A0
    ctx->pc = 0x37ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30112));
label_37ca40:
    // 0x37ca40: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x37ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_37ca44:
    // 0x37ca44: 0xac4060a0  sw          $zero, 0x60A0($v0)
    ctx->pc = 0x37ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24736), GPR_U32(ctx, 0));
label_37ca48:
    // 0x37ca48: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_37ca4c:
    if (ctx->pc == 0x37CA4Cu) {
        ctx->pc = 0x37CA4Cu;
            // 0x37ca4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x37CA50u;
        goto label_37ca50;
    }
    ctx->pc = 0x37CA48u;
    {
        const bool branch_taken_0x37ca48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca48) {
            ctx->pc = 0x37CA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CA48u;
            // 0x37ca4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CAA4u;
            goto label_37caa4;
        }
    }
    ctx->pc = 0x37CA50u;
label_37ca50:
    // 0x37ca50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37ca54:
    // 0x37ca54: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x37ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_37ca58:
    // 0x37ca58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x37ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_37ca5c:
    // 0x37ca5c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x37ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_37ca60:
    // 0x37ca60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37ca64:
    if (ctx->pc == 0x37CA64u) {
        ctx->pc = 0x37CA64u;
            // 0x37ca64: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x37CA68u;
        goto label_37ca68;
    }
    ctx->pc = 0x37CA60u;
    {
        const bool branch_taken_0x37ca60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca60) {
            ctx->pc = 0x37CA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CA60u;
            // 0x37ca64: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CA7Cu;
            goto label_37ca7c;
        }
    }
    ctx->pc = 0x37CA68u;
label_37ca68:
    // 0x37ca68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37ca68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37ca6c:
    // 0x37ca6c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37ca6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37ca70:
    // 0x37ca70: 0x320f809  jalr        $t9
label_37ca74:
    if (ctx->pc == 0x37CA74u) {
        ctx->pc = 0x37CA74u;
            // 0x37ca74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37CA78u;
        goto label_37ca78;
    }
    ctx->pc = 0x37CA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37CA78u);
        ctx->pc = 0x37CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CA70u;
            // 0x37ca74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37CA78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37CA78u; }
            if (ctx->pc != 0x37CA78u) { return; }
        }
        }
    }
    ctx->pc = 0x37CA78u;
label_37ca78:
    // 0x37ca78: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x37ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_37ca7c:
    // 0x37ca7c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37ca80:
    if (ctx->pc == 0x37CA80u) {
        ctx->pc = 0x37CA80u;
            // 0x37ca80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CA84u;
        goto label_37ca84;
    }
    ctx->pc = 0x37CA7Cu;
    {
        const bool branch_taken_0x37ca7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca7c) {
            ctx->pc = 0x37CA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CA7Cu;
            // 0x37ca80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CA98u;
            goto label_37ca98;
        }
    }
    ctx->pc = 0x37CA84u;
label_37ca84:
    // 0x37ca84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37ca84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37ca88:
    // 0x37ca88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37ca88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37ca8c:
    // 0x37ca8c: 0x320f809  jalr        $t9
label_37ca90:
    if (ctx->pc == 0x37CA90u) {
        ctx->pc = 0x37CA90u;
            // 0x37ca90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37CA94u;
        goto label_37ca94;
    }
    ctx->pc = 0x37CA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37CA94u);
        ctx->pc = 0x37CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CA8Cu;
            // 0x37ca90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37CA94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37CA94u; }
            if (ctx->pc != 0x37CA94u) { return; }
        }
        }
    }
    ctx->pc = 0x37CA94u;
label_37ca94:
    // 0x37ca94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37ca98:
    // 0x37ca98: 0xc075bf8  jal         func_1D6FE0
label_37ca9c:
    if (ctx->pc == 0x37CA9Cu) {
        ctx->pc = 0x37CA9Cu;
            // 0x37ca9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CAA0u;
        goto label_37caa0;
    }
    ctx->pc = 0x37CA98u;
    SET_GPR_U32(ctx, 31, 0x37CAA0u);
    ctx->pc = 0x37CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CA98u;
            // 0x37ca9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CAA0u; }
        if (ctx->pc != 0x37CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CAA0u; }
        if (ctx->pc != 0x37CAA0u) { return; }
    }
    ctx->pc = 0x37CAA0u;
label_37caa0:
    // 0x37caa0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_37caa4:
    // 0x37caa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37caa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37caa8:
    // 0x37caa8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37caac:
    if (ctx->pc == 0x37CAACu) {
        ctx->pc = 0x37CAACu;
            // 0x37caac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CAB0u;
        goto label_37cab0;
    }
    ctx->pc = 0x37CAA8u;
    {
        const bool branch_taken_0x37caa8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37caa8) {
            ctx->pc = 0x37CAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CAA8u;
            // 0x37caac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CABCu;
            goto label_37cabc;
        }
    }
    ctx->pc = 0x37CAB0u;
label_37cab0:
    // 0x37cab0: 0xc0400a8  jal         func_1002A0
label_37cab4:
    if (ctx->pc == 0x37CAB4u) {
        ctx->pc = 0x37CAB4u;
            // 0x37cab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CAB8u;
        goto label_37cab8;
    }
    ctx->pc = 0x37CAB0u;
    SET_GPR_U32(ctx, 31, 0x37CAB8u);
    ctx->pc = 0x37CAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CAB0u;
            // 0x37cab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CAB8u; }
        if (ctx->pc != 0x37CAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CAB8u; }
        if (ctx->pc != 0x37CAB8u) { return; }
    }
    ctx->pc = 0x37CAB8u;
label_37cab8:
    // 0x37cab8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37cab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37cabc:
    // 0x37cabc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37cabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37cac0:
    // 0x37cac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37cac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37cac4:
    // 0x37cac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37cac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37cac8:
    // 0x37cac8: 0x3e00008  jr          $ra
label_37cacc:
    if (ctx->pc == 0x37CACCu) {
        ctx->pc = 0x37CACCu;
            // 0x37cacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37CAD0u;
        goto label_37cad0;
    }
    ctx->pc = 0x37CAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CAC8u;
            // 0x37cacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37CAD0u;
label_37cad0:
    // 0x37cad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37cad4:
    // 0x37cad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37cad8:
    // 0x37cad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37cadc:
    // 0x37cadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37cadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37cae0:
    // 0x37cae0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_37cae4:
    if (ctx->pc == 0x37CAE4u) {
        ctx->pc = 0x37CAE4u;
            // 0x37cae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CAE8u;
        goto label_37cae8;
    }
    ctx->pc = 0x37CAE0u;
    {
        const bool branch_taken_0x37cae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cae0) {
            ctx->pc = 0x37CAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CAE0u;
            // 0x37cae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CB30u;
            goto label_37cb30;
        }
    }
    ctx->pc = 0x37CAE8u;
label_37cae8:
    // 0x37cae8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37caec:
    // 0x37caec: 0x24427560  addiu       $v0, $v0, 0x7560
    ctx->pc = 0x37caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
label_37caf0:
    // 0x37caf0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_37caf4:
    if (ctx->pc == 0x37CAF4u) {
        ctx->pc = 0x37CAF4u;
            // 0x37caf4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x37CAF8u;
        goto label_37caf8;
    }
    ctx->pc = 0x37CAF0u;
    {
        const bool branch_taken_0x37caf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CAF0u;
            // 0x37caf4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37caf0) {
            ctx->pc = 0x37CB14u;
            goto label_37cb14;
        }
    }
    ctx->pc = 0x37CAF8u;
label_37caf8:
    // 0x37caf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37cafc:
    // 0x37cafc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x37cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_37cb00:
    // 0x37cb00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_37cb04:
    if (ctx->pc == 0x37CB04u) {
        ctx->pc = 0x37CB04u;
            // 0x37cb04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x37CB08u;
        goto label_37cb08;
    }
    ctx->pc = 0x37CB00u;
    {
        const bool branch_taken_0x37cb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CB00u;
            // 0x37cb04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cb00) {
            ctx->pc = 0x37CB14u;
            goto label_37cb14;
        }
    }
    ctx->pc = 0x37CB08u;
label_37cb08:
    // 0x37cb08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37cb0c:
    // 0x37cb0c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x37cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_37cb10:
    // 0x37cb10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_37cb14:
    // 0x37cb14: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x37cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_37cb18:
    // 0x37cb18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37cb18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37cb1c:
    // 0x37cb1c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_37cb20:
    if (ctx->pc == 0x37CB20u) {
        ctx->pc = 0x37CB24u;
        goto label_37cb24;
    }
    ctx->pc = 0x37CB1Cu;
    {
        const bool branch_taken_0x37cb1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37cb1c) {
            ctx->pc = 0x37CB2Cu;
            goto label_37cb2c;
        }
    }
    ctx->pc = 0x37CB24u;
label_37cb24:
    // 0x37cb24: 0xc0400a8  jal         func_1002A0
label_37cb28:
    if (ctx->pc == 0x37CB28u) {
        ctx->pc = 0x37CB28u;
            // 0x37cb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CB2Cu;
        goto label_37cb2c;
    }
    ctx->pc = 0x37CB24u;
    SET_GPR_U32(ctx, 31, 0x37CB2Cu);
    ctx->pc = 0x37CB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CB24u;
            // 0x37cb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CB2Cu; }
        if (ctx->pc != 0x37CB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CB2Cu; }
        if (ctx->pc != 0x37CB2Cu) { return; }
    }
    ctx->pc = 0x37CB2Cu;
label_37cb2c:
    // 0x37cb2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37cb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37cb30:
    // 0x37cb30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37cb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37cb34:
    // 0x37cb34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37cb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37cb38:
    // 0x37cb38: 0x3e00008  jr          $ra
label_37cb3c:
    if (ctx->pc == 0x37CB3Cu) {
        ctx->pc = 0x37CB3Cu;
            // 0x37cb3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37CB40u;
        goto label_37cb40;
    }
    ctx->pc = 0x37CB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CB38u;
            // 0x37cb3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37CB40u;
label_37cb40:
    // 0x37cb40: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x37cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_37cb44:
    // 0x37cb44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37cb48:
    // 0x37cb48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x37cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_37cb4c:
    // 0x37cb4c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x37cb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_37cb50:
    // 0x37cb50: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x37cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_37cb54:
    // 0x37cb54: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x37cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_37cb58:
    // 0x37cb58: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x37cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_37cb5c:
    // 0x37cb5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37cb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_37cb60:
    // 0x37cb60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37cb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37cb64:
    // 0x37cb64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37cb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37cb68:
    // 0x37cb68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37cb6c:
    // 0x37cb6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37cb70:
    // 0x37cb70: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37cb70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37cb74:
    // 0x37cb74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37cb74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37cb78:
    // 0x37cb78: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x37cb78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_37cb7c:
    // 0x37cb7c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_37cb80:
    if (ctx->pc == 0x37CB80u) {
        ctx->pc = 0x37CB80u;
            // 0x37cb80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CB84u;
        goto label_37cb84;
    }
    ctx->pc = 0x37CB7Cu;
    {
        const bool branch_taken_0x37cb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37CB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CB7Cu;
            // 0x37cb80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cb7c) {
            ctx->pc = 0x37CBCCu;
            goto label_37cbcc;
        }
    }
    ctx->pc = 0x37CB84u;
label_37cb84:
    // 0x37cb84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37cb88:
    // 0x37cb88: 0x50a300b1  beql        $a1, $v1, . + 4 + (0xB1 << 2)
label_37cb8c:
    if (ctx->pc == 0x37CB8Cu) {
        ctx->pc = 0x37CB8Cu;
            // 0x37cb8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x37CB90u;
        goto label_37cb90;
    }
    ctx->pc = 0x37CB88u;
    {
        const bool branch_taken_0x37cb88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cb88) {
            ctx->pc = 0x37CB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CB88u;
            // 0x37cb8c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CE50u;
            goto label_37ce50;
        }
    }
    ctx->pc = 0x37CB90u;
label_37cb90:
    // 0x37cb90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37cb94:
    // 0x37cb94: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_37cb98:
    if (ctx->pc == 0x37CB98u) {
        ctx->pc = 0x37CB9Cu;
        goto label_37cb9c;
    }
    ctx->pc = 0x37CB94u;
    {
        const bool branch_taken_0x37cb94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cb94) {
            ctx->pc = 0x37CBA4u;
            goto label_37cba4;
        }
    }
    ctx->pc = 0x37CB9Cu;
label_37cb9c:
    // 0x37cb9c: 0x100000ab  b           . + 4 + (0xAB << 2)
label_37cba0:
    if (ctx->pc == 0x37CBA0u) {
        ctx->pc = 0x37CBA4u;
        goto label_37cba4;
    }
    ctx->pc = 0x37CB9Cu;
    {
        const bool branch_taken_0x37cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb9c) {
            ctx->pc = 0x37CE4Cu;
            goto label_37ce4c;
        }
    }
    ctx->pc = 0x37CBA4u;
label_37cba4:
    // 0x37cba4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37cba8:
    // 0x37cba8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37cba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37cbac:
    // 0x37cbac: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x37cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_37cbb0:
    // 0x37cbb0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x37cbb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_37cbb4:
    // 0x37cbb4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x37cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_37cbb8:
    // 0x37cbb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_37cbbc:
    // 0x37cbbc: 0x320f809  jalr        $t9
label_37cbc0:
    if (ctx->pc == 0x37CBC0u) {
        ctx->pc = 0x37CBC0u;
            // 0x37cbc0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x37CBC4u;
        goto label_37cbc4;
    }
    ctx->pc = 0x37CBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37CBC4u);
        ctx->pc = 0x37CBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CBBCu;
            // 0x37cbc0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37CBC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37CBC4u; }
            if (ctx->pc != 0x37CBC4u) { return; }
        }
        }
    }
    ctx->pc = 0x37CBC4u;
label_37cbc4:
    // 0x37cbc4: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_37cbc8:
    if (ctx->pc == 0x37CBC8u) {
        ctx->pc = 0x37CBCCu;
        goto label_37cbcc;
    }
    ctx->pc = 0x37CBC4u;
    {
        const bool branch_taken_0x37cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cbc4) {
            ctx->pc = 0x37CE4Cu;
            goto label_37ce4c;
        }
    }
    ctx->pc = 0x37CBCCu;
label_37cbcc:
    // 0x37cbcc: 0x8e570070  lw          $s7, 0x70($s2)
    ctx->pc = 0x37cbccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_37cbd0:
    // 0x37cbd0: 0x12e0009e  beqz        $s7, . + 4 + (0x9E << 2)
label_37cbd4:
    if (ctx->pc == 0x37CBD4u) {
        ctx->pc = 0x37CBD8u;
        goto label_37cbd8;
    }
    ctx->pc = 0x37CBD0u;
    {
        const bool branch_taken_0x37cbd0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cbd0) {
            ctx->pc = 0x37CE4Cu;
            goto label_37ce4c;
        }
    }
    ctx->pc = 0x37CBD8u;
label_37cbd8:
    // 0x37cbd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37cbdc:
    // 0x37cbdc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x37cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_37cbe0:
    // 0x37cbe0: 0x8c7ee378  lw          $fp, -0x1C88($v1)
    ctx->pc = 0x37cbe0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_37cbe4:
    // 0x37cbe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37cbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cbe8:
    // 0x37cbe8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x37cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_37cbec:
    // 0x37cbec: 0x26510084  addiu       $s1, $s2, 0x84
    ctx->pc = 0x37cbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_37cbf0:
    // 0x37cbf0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x37cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_37cbf4:
    // 0x37cbf4: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x37cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_37cbf8:
    // 0x37cbf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37cbfc:
    // 0x37cbfc: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x37cbfcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_37cc00:
    // 0x37cc00: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x37cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_37cc04:
    // 0x37cc04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37cc08:
    // 0x37cc08: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x37cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_37cc0c:
    // 0x37cc0c: 0x163880  sll         $a3, $s6, 2
    ctx->pc = 0x37cc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_37cc10:
    // 0x37cc10: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x37cc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_37cc14:
    // 0x37cc14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37cc18:
    // 0x37cc18: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x37cc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_37cc1c:
    // 0x37cc1c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x37cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_37cc20:
    // 0x37cc20: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x37cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_37cc24:
    // 0x37cc24: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x37cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_37cc28:
    // 0x37cc28: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x37cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_37cc2c:
    // 0x37cc2c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x37cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_37cc30:
    // 0x37cc30: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x37cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_37cc34:
    // 0x37cc34: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x37cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_37cc38:
    // 0x37cc38: 0xc04e4a4  jal         func_139290
label_37cc3c:
    if (ctx->pc == 0x37CC3Cu) {
        ctx->pc = 0x37CC3Cu;
            // 0x37cc3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CC40u;
        goto label_37cc40;
    }
    ctx->pc = 0x37CC38u;
    SET_GPR_U32(ctx, 31, 0x37CC40u);
    ctx->pc = 0x37CC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CC38u;
            // 0x37cc3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC40u; }
        if (ctx->pc != 0x37CC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC40u; }
        if (ctx->pc != 0x37CC40u) { return; }
    }
    ctx->pc = 0x37CC40u;
label_37cc40:
    // 0x37cc40: 0xc04e738  jal         func_139CE0
label_37cc44:
    if (ctx->pc == 0x37CC44u) {
        ctx->pc = 0x37CC44u;
            // 0x37cc44: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x37CC48u;
        goto label_37cc48;
    }
    ctx->pc = 0x37CC40u;
    SET_GPR_U32(ctx, 31, 0x37CC48u);
    ctx->pc = 0x37CC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CC40u;
            // 0x37cc44: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC48u; }
        if (ctx->pc != 0x37CC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC48u; }
        if (ctx->pc != 0x37CC48u) { return; }
    }
    ctx->pc = 0x37CC48u;
label_37cc48:
    // 0x37cc48: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37cc4c:
    // 0x37cc4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37cc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cc50:
    // 0x37cc50: 0xc45456f0  lwc1        $f20, 0x56F0($v0)
    ctx->pc = 0x37cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37cc54:
    // 0x37cc54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x37cc54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cc58:
    // 0x37cc58: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x37cc58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_37cc5c:
    // 0x37cc5c: 0xafbe012c  sw          $fp, 0x12C($sp)
    ctx->pc = 0x37cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 30));
label_37cc60:
    // 0x37cc60: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x37cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_37cc64:
    // 0x37cc64: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x37cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_37cc68:
    // 0x37cc68: 0xc635000c  lwc1        $f21, 0xC($s1)
    ctx->pc = 0x37cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37cc6c:
    // 0x37cc6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x37cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_37cc70:
    // 0x37cc70: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x37cc70u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37cc74:
    // 0x37cc74: 0xc0d1c14  jal         func_347050
label_37cc78:
    if (ctx->pc == 0x37CC78u) {
        ctx->pc = 0x37CC78u;
            // 0x37cc78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CC7Cu;
        goto label_37cc7c;
    }
    ctx->pc = 0x37CC74u;
    SET_GPR_U32(ctx, 31, 0x37CC7Cu);
    ctx->pc = 0x37CC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CC74u;
            // 0x37cc78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC7Cu; }
        if (ctx->pc != 0x37CC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC7Cu; }
        if (ctx->pc != 0x37CC7Cu) { return; }
    }
    ctx->pc = 0x37CC7Cu;
label_37cc7c:
    // 0x37cc7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37cc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37cc80:
    // 0x37cc80: 0xc04f278  jal         func_13C9E0
label_37cc84:
    if (ctx->pc == 0x37CC84u) {
        ctx->pc = 0x37CC84u;
            // 0x37cc84: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x37CC88u;
        goto label_37cc88;
    }
    ctx->pc = 0x37CC80u;
    SET_GPR_U32(ctx, 31, 0x37CC88u);
    ctx->pc = 0x37CC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CC80u;
            // 0x37cc84: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC88u; }
        if (ctx->pc != 0x37CC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC88u; }
        if (ctx->pc != 0x37CC88u) { return; }
    }
    ctx->pc = 0x37CC88u;
label_37cc88:
    // 0x37cc88: 0xc0d1c10  jal         func_347040
label_37cc8c:
    if (ctx->pc == 0x37CC8Cu) {
        ctx->pc = 0x37CC8Cu;
            // 0x37cc8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CC90u;
        goto label_37cc90;
    }
    ctx->pc = 0x37CC88u;
    SET_GPR_U32(ctx, 31, 0x37CC90u);
    ctx->pc = 0x37CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CC88u;
            // 0x37cc8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC90u; }
        if (ctx->pc != 0x37CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC90u; }
        if (ctx->pc != 0x37CC90u) { return; }
    }
    ctx->pc = 0x37CC90u;
label_37cc90:
    // 0x37cc90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37cc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37cc94:
    // 0x37cc94: 0xc04ce80  jal         func_133A00
label_37cc98:
    if (ctx->pc == 0x37CC98u) {
        ctx->pc = 0x37CC98u;
            // 0x37cc98: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x37CC9Cu;
        goto label_37cc9c;
    }
    ctx->pc = 0x37CC94u;
    SET_GPR_U32(ctx, 31, 0x37CC9Cu);
    ctx->pc = 0x37CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CC94u;
            // 0x37cc98: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC9Cu; }
        if (ctx->pc != 0x37CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CC9Cu; }
        if (ctx->pc != 0x37CC9Cu) { return; }
    }
    ctx->pc = 0x37CC9Cu;
label_37cc9c:
    // 0x37cc9c: 0xc0d4108  jal         func_350420
label_37cca0:
    if (ctx->pc == 0x37CCA0u) {
        ctx->pc = 0x37CCA4u;
        goto label_37cca4;
    }
    ctx->pc = 0x37CC9Cu;
    SET_GPR_U32(ctx, 31, 0x37CCA4u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCA4u; }
        if (ctx->pc != 0x37CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCA4u; }
        if (ctx->pc != 0x37CCA4u) { return; }
    }
    ctx->pc = 0x37CCA4u;
label_37cca4:
    // 0x37cca4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37cca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37cca8:
    // 0x37cca8: 0xc0d4104  jal         func_350410
label_37ccac:
    if (ctx->pc == 0x37CCACu) {
        ctx->pc = 0x37CCACu;
            // 0x37ccac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CCB0u;
        goto label_37ccb0;
    }
    ctx->pc = 0x37CCA8u;
    SET_GPR_U32(ctx, 31, 0x37CCB0u);
    ctx->pc = 0x37CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CCA8u;
            // 0x37ccac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCB0u; }
        if (ctx->pc != 0x37CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCB0u; }
        if (ctx->pc != 0x37CCB0u) { return; }
    }
    ctx->pc = 0x37CCB0u;
label_37ccb0:
    // 0x37ccb0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x37ccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37ccb4:
    // 0x37ccb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37ccb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37ccb8:
    // 0x37ccb8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37ccb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37ccbc:
    // 0x37ccbc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x37ccbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_37ccc0:
    // 0x37ccc0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37ccc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ccc4:
    // 0x37ccc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37ccc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ccc8:
    // 0x37ccc8: 0xc0d40ac  jal         func_3502B0
label_37cccc:
    if (ctx->pc == 0x37CCCCu) {
        ctx->pc = 0x37CCCCu;
            // 0x37cccc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37CCD0u;
        goto label_37ccd0;
    }
    ctx->pc = 0x37CCC8u;
    SET_GPR_U32(ctx, 31, 0x37CCD0u);
    ctx->pc = 0x37CCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CCC8u;
            // 0x37cccc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCD0u; }
        if (ctx->pc != 0x37CCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCD0u; }
        if (ctx->pc != 0x37CCD0u) { return; }
    }
    ctx->pc = 0x37CCD0u;
label_37ccd0:
    // 0x37ccd0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x37ccd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_37ccd4:
    // 0x37ccd4: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_37ccd8:
    if (ctx->pc == 0x37CCD8u) {
        ctx->pc = 0x37CCD8u;
            // 0x37ccd8: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x37CCDCu;
        goto label_37ccdc;
    }
    ctx->pc = 0x37CCD4u;
    {
        const bool branch_taken_0x37ccd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CCD4u;
            // 0x37ccd8: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ccd4) {
            ctx->pc = 0x37CE10u;
            goto label_37ce10;
        }
    }
    ctx->pc = 0x37CCDCu;
label_37ccdc:
    // 0x37ccdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37cce0:
    // 0x37cce0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x37cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_37cce4:
    // 0x37cce4: 0xa2a20083  sb          $v0, 0x83($s5)
    ctx->pc = 0x37cce4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 2));
label_37cce8:
    // 0x37cce8: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x37cce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_37ccec:
    // 0x37ccec: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x37ccecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_37ccf0:
    // 0x37ccf0: 0xc0df3a4  jal         func_37CE90
label_37ccf4:
    if (ctx->pc == 0x37CCF4u) {
        ctx->pc = 0x37CCF4u;
            // 0x37ccf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CCF8u;
        goto label_37ccf8;
    }
    ctx->pc = 0x37CCF0u;
    SET_GPR_U32(ctx, 31, 0x37CCF8u);
    ctx->pc = 0x37CCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CCF0u;
            // 0x37ccf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37CE90u;
    if (runtime->hasFunction(0x37CE90u)) {
        auto targetFn = runtime->lookupFunction(0x37CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCF8u; }
        if (ctx->pc != 0x37CCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037CE90_0x37ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CCF8u; }
        if (ctx->pc != 0x37CCF8u) { return; }
    }
    ctx->pc = 0x37CCF8u;
label_37ccf8:
    // 0x37ccf8: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_37ccfc:
    if (ctx->pc == 0x37CCFCu) {
        ctx->pc = 0x37CCFCu;
            // 0x37ccfc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x37CD00u;
        goto label_37cd00;
    }
    ctx->pc = 0x37CCF8u;
    {
        const bool branch_taken_0x37ccf8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x37ccf8) {
            ctx->pc = 0x37CCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CCF8u;
            // 0x37ccfc: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CD0Cu;
            goto label_37cd0c;
        }
    }
    ctx->pc = 0x37CD00u;
label_37cd00:
    // 0x37cd00: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37cd00u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cd04:
    // 0x37cd04: 0x10000007  b           . + 4 + (0x7 << 2)
label_37cd08:
    if (ctx->pc == 0x37CD08u) {
        ctx->pc = 0x37CD08u;
            // 0x37cd08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37CD0Cu;
        goto label_37cd0c;
    }
    ctx->pc = 0x37CD04u;
    {
        const bool branch_taken_0x37cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CD04u;
            // 0x37cd08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd04) {
            ctx->pc = 0x37CD24u;
            goto label_37cd24;
        }
    }
    ctx->pc = 0x37CD0Cu;
label_37cd0c:
    // 0x37cd0c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x37cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_37cd10:
    // 0x37cd10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37cd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37cd14:
    // 0x37cd14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cd14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cd18:
    // 0x37cd18: 0x0  nop
    ctx->pc = 0x37cd18u;
    // NOP
label_37cd1c:
    // 0x37cd1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37cd1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37cd20:
    // 0x37cd20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x37cd20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37cd24:
    // 0x37cd24: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37cd28:
    // 0x37cd28: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x37cd28u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37cd2c:
    // 0x37cd2c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x37cd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cd30:
    // 0x37cd30: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x37cd30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37cd34:
    // 0x37cd34: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_37cd38:
    if (ctx->pc == 0x37CD38u) {
        ctx->pc = 0x37CD38u;
            // 0x37cd38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37CD3Cu;
        goto label_37cd3c;
    }
    ctx->pc = 0x37CD34u;
    {
        const bool branch_taken_0x37cd34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CD34u;
            // 0x37cd38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd34) {
            ctx->pc = 0x37CD40u;
            goto label_37cd40;
        }
    }
    ctx->pc = 0x37CD3Cu;
label_37cd3c:
    // 0x37cd3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37cd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cd40:
    // 0x37cd40: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_37cd44:
    if (ctx->pc == 0x37CD44u) {
        ctx->pc = 0x37CD44u;
            // 0x37cd44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x37CD48u;
        goto label_37cd48;
    }
    ctx->pc = 0x37CD40u;
    {
        const bool branch_taken_0x37cd40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x37cd40) {
            ctx->pc = 0x37CD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CD40u;
            // 0x37cd44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CD54u;
            goto label_37cd54;
        }
    }
    ctx->pc = 0x37CD48u;
label_37cd48:
    // 0x37cd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37cd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cd4c:
    // 0x37cd4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_37cd50:
    if (ctx->pc == 0x37CD50u) {
        ctx->pc = 0x37CD50u;
            // 0x37cd50: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37CD54u;
        goto label_37cd54;
    }
    ctx->pc = 0x37CD4Cu;
    {
        const bool branch_taken_0x37cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CD4Cu;
            // 0x37cd50: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd4c) {
            ctx->pc = 0x37CD6Cu;
            goto label_37cd6c;
        }
    }
    ctx->pc = 0x37CD54u;
label_37cd54:
    // 0x37cd54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37cd58:
    // 0x37cd58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37cd5c:
    // 0x37cd5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cd5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cd60:
    // 0x37cd60: 0x0  nop
    ctx->pc = 0x37cd60u;
    // NOP
label_37cd64:
    // 0x37cd64: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37cd64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_37cd68:
    // 0x37cd68: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x37cd68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_37cd6c:
    // 0x37cd6c: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x37cd6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37cd70:
    // 0x37cd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37cd74:
    // 0x37cd74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_37cd78:
    if (ctx->pc == 0x37CD78u) {
        ctx->pc = 0x37CD78u;
            // 0x37cd78: 0x4601a841  sub.s       $f1, $f21, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->pc = 0x37CD7Cu;
        goto label_37cd7c;
    }
    ctx->pc = 0x37CD74u;
    {
        const bool branch_taken_0x37cd74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CD74u;
            // 0x37cd78: 0x4601a841  sub.s       $f1, $f21, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd74) {
            ctx->pc = 0x37CD80u;
            goto label_37cd80;
        }
    }
    ctx->pc = 0x37CD7Cu;
label_37cd7c:
    // 0x37cd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37cd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cd80:
    // 0x37cd80: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_37cd84:
    if (ctx->pc == 0x37CD84u) {
        ctx->pc = 0x37CD84u;
            // 0x37cd84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x37CD88u;
        goto label_37cd88;
    }
    ctx->pc = 0x37CD80u;
    {
        const bool branch_taken_0x37cd80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x37cd80) {
            ctx->pc = 0x37CD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CD80u;
            // 0x37cd84: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CD94u;
            goto label_37cd94;
        }
    }
    ctx->pc = 0x37CD88u;
label_37cd88:
    // 0x37cd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37cd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cd8c:
    // 0x37cd8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_37cd90:
    if (ctx->pc == 0x37CD90u) {
        ctx->pc = 0x37CD90u;
            // 0x37cd90: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37CD94u;
        goto label_37cd94;
    }
    ctx->pc = 0x37CD8Cu;
    {
        const bool branch_taken_0x37cd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CD8Cu;
            // 0x37cd90: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd8c) {
            ctx->pc = 0x37CDACu;
            goto label_37cdac;
        }
    }
    ctx->pc = 0x37CD94u;
label_37cd94:
    // 0x37cd94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37cd98:
    // 0x37cd98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37cd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37cd9c:
    // 0x37cd9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cd9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cda0:
    // 0x37cda0: 0x0  nop
    ctx->pc = 0x37cda0u;
    // NOP
label_37cda4:
    // 0x37cda4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37cda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37cda8:
    // 0x37cda8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x37cda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37cdac:
    // 0x37cdac: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x37cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_37cdb0:
    // 0x37cdb0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x37cdb0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37cdb4:
    // 0x37cdb4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x37cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_37cdb8:
    // 0x37cdb8: 0x4602ad5c  madd.s      $f21, $f21, $f2
    ctx->pc = 0x37cdb8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[2]));
label_37cdbc:
    // 0x37cdbc: 0xc04cd60  jal         func_133580
label_37cdc0:
    if (ctx->pc == 0x37CDC0u) {
        ctx->pc = 0x37CDC0u;
            // 0x37cdc0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CDC4u;
        goto label_37cdc4;
    }
    ctx->pc = 0x37CDBCu;
    SET_GPR_U32(ctx, 31, 0x37CDC4u);
    ctx->pc = 0x37CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CDBCu;
            // 0x37cdc0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CDC4u; }
        if (ctx->pc != 0x37CDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CDC4u; }
        if (ctx->pc != 0x37CDC4u) { return; }
    }
    ctx->pc = 0x37CDC4u;
label_37cdc4:
    // 0x37cdc4: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x37cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_37cdc8:
    // 0x37cdc8: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x37cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_37cdcc:
    // 0x37cdcc: 0xc04e4a4  jal         func_139290
label_37cdd0:
    if (ctx->pc == 0x37CDD0u) {
        ctx->pc = 0x37CDD0u;
            // 0x37cdd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CDD4u;
        goto label_37cdd4;
    }
    ctx->pc = 0x37CDCCu;
    SET_GPR_U32(ctx, 31, 0x37CDD4u);
    ctx->pc = 0x37CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CDCCu;
            // 0x37cdd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CDD4u; }
        if (ctx->pc != 0x37CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CDD4u; }
        if (ctx->pc != 0x37CDD4u) { return; }
    }
    ctx->pc = 0x37CDD4u;
label_37cdd4:
    // 0x37cdd4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x37cdd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_37cdd8:
    // 0x37cdd8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x37cdd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_37cddc:
    // 0x37cddc: 0x320f809  jalr        $t9
label_37cde0:
    if (ctx->pc == 0x37CDE0u) {
        ctx->pc = 0x37CDE0u;
            // 0x37cde0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CDE4u;
        goto label_37cde4;
    }
    ctx->pc = 0x37CDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37CDE4u);
        ctx->pc = 0x37CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CDDCu;
            // 0x37cde0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37CDE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37CDE4u; }
            if (ctx->pc != 0x37CDE4u) { return; }
        }
        }
    }
    ctx->pc = 0x37CDE4u;
label_37cde4:
    // 0x37cde4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x37cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_37cde8:
    // 0x37cde8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x37cde8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_37cdec:
    // 0x37cdec: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x37cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_37cdf0:
    // 0x37cdf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x37cdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37cdf4:
    // 0x37cdf4: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x37cdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_37cdf8:
    // 0x37cdf8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37cdf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37cdfc:
    // 0x37cdfc: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x37cdfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_37ce00:
    // 0x37ce00: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x37ce00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_37ce04:
    // 0x37ce04: 0xc04cff4  jal         func_133FD0
label_37ce08:
    if (ctx->pc == 0x37CE08u) {
        ctx->pc = 0x37CE08u;
            // 0x37ce08: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CE0Cu;
        goto label_37ce0c;
    }
    ctx->pc = 0x37CE04u;
    SET_GPR_U32(ctx, 31, 0x37CE0Cu);
    ctx->pc = 0x37CE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CE04u;
            // 0x37ce08: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CE0Cu; }
        if (ctx->pc != 0x37CE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CE0Cu; }
        if (ctx->pc != 0x37CE0Cu) { return; }
    }
    ctx->pc = 0x37CE0Cu;
label_37ce0c:
    // 0x37ce0c: 0x0  nop
    ctx->pc = 0x37ce0cu;
    // NOP
label_37ce10:
    // 0x37ce10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37ce10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_37ce14:
    // 0x37ce14: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x37ce14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_37ce18:
    // 0x37ce18: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
label_37ce1c:
    if (ctx->pc == 0x37CE1Cu) {
        ctx->pc = 0x37CE1Cu;
            // 0x37ce1c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x37CE20u;
        goto label_37ce20;
    }
    ctx->pc = 0x37CE18u;
    {
        const bool branch_taken_0x37ce18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CE18u;
            // 0x37ce1c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ce18) {
            ctx->pc = 0x37CC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37cc58;
        }
    }
    ctx->pc = 0x37CE20u;
label_37ce20:
    // 0x37ce20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37ce24:
    // 0x37ce24: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x37ce24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_37ce28:
    // 0x37ce28: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_37ce2c:
    if (ctx->pc == 0x37CE2Cu) {
        ctx->pc = 0x37CE2Cu;
            // 0x37ce2c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x37CE30u;
        goto label_37ce30;
    }
    ctx->pc = 0x37CE28u;
    {
        const bool branch_taken_0x37ce28 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x37CE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CE28u;
            // 0x37ce2c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ce28) {
            ctx->pc = 0x37CE4Cu;
            goto label_37ce4c;
        }
    }
    ctx->pc = 0x37CE30u;
label_37ce30:
    // 0x37ce30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37ce34:
    // 0x37ce34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37ce38:
    // 0x37ce38: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x37ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_37ce3c:
    // 0x37ce3c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x37ce3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_37ce40:
    // 0x37ce40: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x37ce40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_37ce44:
    // 0x37ce44: 0xc055754  jal         func_155D50
label_37ce48:
    if (ctx->pc == 0x37CE48u) {
        ctx->pc = 0x37CE48u;
            // 0x37ce48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x37CE4Cu;
        goto label_37ce4c;
    }
    ctx->pc = 0x37CE44u;
    SET_GPR_U32(ctx, 31, 0x37CE4Cu);
    ctx->pc = 0x37CE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37CE44u;
            // 0x37ce48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CE4Cu; }
        if (ctx->pc != 0x37CE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37CE4Cu; }
        if (ctx->pc != 0x37CE4Cu) { return; }
    }
    ctx->pc = 0x37CE4Cu;
label_37ce4c:
    // 0x37ce4c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x37ce4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_37ce50:
    // 0x37ce50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37ce54:
    // 0x37ce54: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x37ce54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37ce58:
    // 0x37ce58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37ce5c:
    // 0x37ce5c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x37ce5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37ce60:
    // 0x37ce60: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x37ce60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37ce64:
    // 0x37ce64: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x37ce64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37ce68:
    // 0x37ce68: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37ce68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37ce6c:
    // 0x37ce6c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37ce6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37ce70:
    // 0x37ce70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37ce70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37ce74:
    // 0x37ce74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37ce74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37ce78:
    // 0x37ce78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ce78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37ce7c:
    // 0x37ce7c: 0x3e00008  jr          $ra
label_37ce80:
    if (ctx->pc == 0x37CE80u) {
        ctx->pc = 0x37CE80u;
            // 0x37ce80: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x37CE84u;
        goto label_37ce84;
    }
    ctx->pc = 0x37CE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CE7Cu;
            // 0x37ce80: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37CE84u;
label_37ce84:
    // 0x37ce84: 0x0  nop
    ctx->pc = 0x37ce84u;
    // NOP
label_37ce88:
    // 0x37ce88: 0x0  nop
    ctx->pc = 0x37ce88u;
    // NOP
label_37ce8c:
    // 0x37ce8c: 0x0  nop
    ctx->pc = 0x37ce8cu;
    // NOP
}
