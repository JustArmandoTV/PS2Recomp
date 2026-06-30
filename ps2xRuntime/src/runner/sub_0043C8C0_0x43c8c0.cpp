#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043C8C0
// Address: 0x43c8c0 - 0x43ce70
void sub_0043C8C0_0x43c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C8C0_0x43c8c0");
#endif

    switch (ctx->pc) {
        case 0x43c8c0u: goto label_43c8c0;
        case 0x43c8c4u: goto label_43c8c4;
        case 0x43c8c8u: goto label_43c8c8;
        case 0x43c8ccu: goto label_43c8cc;
        case 0x43c8d0u: goto label_43c8d0;
        case 0x43c8d4u: goto label_43c8d4;
        case 0x43c8d8u: goto label_43c8d8;
        case 0x43c8dcu: goto label_43c8dc;
        case 0x43c8e0u: goto label_43c8e0;
        case 0x43c8e4u: goto label_43c8e4;
        case 0x43c8e8u: goto label_43c8e8;
        case 0x43c8ecu: goto label_43c8ec;
        case 0x43c8f0u: goto label_43c8f0;
        case 0x43c8f4u: goto label_43c8f4;
        case 0x43c8f8u: goto label_43c8f8;
        case 0x43c8fcu: goto label_43c8fc;
        case 0x43c900u: goto label_43c900;
        case 0x43c904u: goto label_43c904;
        case 0x43c908u: goto label_43c908;
        case 0x43c90cu: goto label_43c90c;
        case 0x43c910u: goto label_43c910;
        case 0x43c914u: goto label_43c914;
        case 0x43c918u: goto label_43c918;
        case 0x43c91cu: goto label_43c91c;
        case 0x43c920u: goto label_43c920;
        case 0x43c924u: goto label_43c924;
        case 0x43c928u: goto label_43c928;
        case 0x43c92cu: goto label_43c92c;
        case 0x43c930u: goto label_43c930;
        case 0x43c934u: goto label_43c934;
        case 0x43c938u: goto label_43c938;
        case 0x43c93cu: goto label_43c93c;
        case 0x43c940u: goto label_43c940;
        case 0x43c944u: goto label_43c944;
        case 0x43c948u: goto label_43c948;
        case 0x43c94cu: goto label_43c94c;
        case 0x43c950u: goto label_43c950;
        case 0x43c954u: goto label_43c954;
        case 0x43c958u: goto label_43c958;
        case 0x43c95cu: goto label_43c95c;
        case 0x43c960u: goto label_43c960;
        case 0x43c964u: goto label_43c964;
        case 0x43c968u: goto label_43c968;
        case 0x43c96cu: goto label_43c96c;
        case 0x43c970u: goto label_43c970;
        case 0x43c974u: goto label_43c974;
        case 0x43c978u: goto label_43c978;
        case 0x43c97cu: goto label_43c97c;
        case 0x43c980u: goto label_43c980;
        case 0x43c984u: goto label_43c984;
        case 0x43c988u: goto label_43c988;
        case 0x43c98cu: goto label_43c98c;
        case 0x43c990u: goto label_43c990;
        case 0x43c994u: goto label_43c994;
        case 0x43c998u: goto label_43c998;
        case 0x43c99cu: goto label_43c99c;
        case 0x43c9a0u: goto label_43c9a0;
        case 0x43c9a4u: goto label_43c9a4;
        case 0x43c9a8u: goto label_43c9a8;
        case 0x43c9acu: goto label_43c9ac;
        case 0x43c9b0u: goto label_43c9b0;
        case 0x43c9b4u: goto label_43c9b4;
        case 0x43c9b8u: goto label_43c9b8;
        case 0x43c9bcu: goto label_43c9bc;
        case 0x43c9c0u: goto label_43c9c0;
        case 0x43c9c4u: goto label_43c9c4;
        case 0x43c9c8u: goto label_43c9c8;
        case 0x43c9ccu: goto label_43c9cc;
        case 0x43c9d0u: goto label_43c9d0;
        case 0x43c9d4u: goto label_43c9d4;
        case 0x43c9d8u: goto label_43c9d8;
        case 0x43c9dcu: goto label_43c9dc;
        case 0x43c9e0u: goto label_43c9e0;
        case 0x43c9e4u: goto label_43c9e4;
        case 0x43c9e8u: goto label_43c9e8;
        case 0x43c9ecu: goto label_43c9ec;
        case 0x43c9f0u: goto label_43c9f0;
        case 0x43c9f4u: goto label_43c9f4;
        case 0x43c9f8u: goto label_43c9f8;
        case 0x43c9fcu: goto label_43c9fc;
        case 0x43ca00u: goto label_43ca00;
        case 0x43ca04u: goto label_43ca04;
        case 0x43ca08u: goto label_43ca08;
        case 0x43ca0cu: goto label_43ca0c;
        case 0x43ca10u: goto label_43ca10;
        case 0x43ca14u: goto label_43ca14;
        case 0x43ca18u: goto label_43ca18;
        case 0x43ca1cu: goto label_43ca1c;
        case 0x43ca20u: goto label_43ca20;
        case 0x43ca24u: goto label_43ca24;
        case 0x43ca28u: goto label_43ca28;
        case 0x43ca2cu: goto label_43ca2c;
        case 0x43ca30u: goto label_43ca30;
        case 0x43ca34u: goto label_43ca34;
        case 0x43ca38u: goto label_43ca38;
        case 0x43ca3cu: goto label_43ca3c;
        case 0x43ca40u: goto label_43ca40;
        case 0x43ca44u: goto label_43ca44;
        case 0x43ca48u: goto label_43ca48;
        case 0x43ca4cu: goto label_43ca4c;
        case 0x43ca50u: goto label_43ca50;
        case 0x43ca54u: goto label_43ca54;
        case 0x43ca58u: goto label_43ca58;
        case 0x43ca5cu: goto label_43ca5c;
        case 0x43ca60u: goto label_43ca60;
        case 0x43ca64u: goto label_43ca64;
        case 0x43ca68u: goto label_43ca68;
        case 0x43ca6cu: goto label_43ca6c;
        case 0x43ca70u: goto label_43ca70;
        case 0x43ca74u: goto label_43ca74;
        case 0x43ca78u: goto label_43ca78;
        case 0x43ca7cu: goto label_43ca7c;
        case 0x43ca80u: goto label_43ca80;
        case 0x43ca84u: goto label_43ca84;
        case 0x43ca88u: goto label_43ca88;
        case 0x43ca8cu: goto label_43ca8c;
        case 0x43ca90u: goto label_43ca90;
        case 0x43ca94u: goto label_43ca94;
        case 0x43ca98u: goto label_43ca98;
        case 0x43ca9cu: goto label_43ca9c;
        case 0x43caa0u: goto label_43caa0;
        case 0x43caa4u: goto label_43caa4;
        case 0x43caa8u: goto label_43caa8;
        case 0x43caacu: goto label_43caac;
        case 0x43cab0u: goto label_43cab0;
        case 0x43cab4u: goto label_43cab4;
        case 0x43cab8u: goto label_43cab8;
        case 0x43cabcu: goto label_43cabc;
        case 0x43cac0u: goto label_43cac0;
        case 0x43cac4u: goto label_43cac4;
        case 0x43cac8u: goto label_43cac8;
        case 0x43caccu: goto label_43cacc;
        case 0x43cad0u: goto label_43cad0;
        case 0x43cad4u: goto label_43cad4;
        case 0x43cad8u: goto label_43cad8;
        case 0x43cadcu: goto label_43cadc;
        case 0x43cae0u: goto label_43cae0;
        case 0x43cae4u: goto label_43cae4;
        case 0x43cae8u: goto label_43cae8;
        case 0x43caecu: goto label_43caec;
        case 0x43caf0u: goto label_43caf0;
        case 0x43caf4u: goto label_43caf4;
        case 0x43caf8u: goto label_43caf8;
        case 0x43cafcu: goto label_43cafc;
        case 0x43cb00u: goto label_43cb00;
        case 0x43cb04u: goto label_43cb04;
        case 0x43cb08u: goto label_43cb08;
        case 0x43cb0cu: goto label_43cb0c;
        case 0x43cb10u: goto label_43cb10;
        case 0x43cb14u: goto label_43cb14;
        case 0x43cb18u: goto label_43cb18;
        case 0x43cb1cu: goto label_43cb1c;
        case 0x43cb20u: goto label_43cb20;
        case 0x43cb24u: goto label_43cb24;
        case 0x43cb28u: goto label_43cb28;
        case 0x43cb2cu: goto label_43cb2c;
        case 0x43cb30u: goto label_43cb30;
        case 0x43cb34u: goto label_43cb34;
        case 0x43cb38u: goto label_43cb38;
        case 0x43cb3cu: goto label_43cb3c;
        case 0x43cb40u: goto label_43cb40;
        case 0x43cb44u: goto label_43cb44;
        case 0x43cb48u: goto label_43cb48;
        case 0x43cb4cu: goto label_43cb4c;
        case 0x43cb50u: goto label_43cb50;
        case 0x43cb54u: goto label_43cb54;
        case 0x43cb58u: goto label_43cb58;
        case 0x43cb5cu: goto label_43cb5c;
        case 0x43cb60u: goto label_43cb60;
        case 0x43cb64u: goto label_43cb64;
        case 0x43cb68u: goto label_43cb68;
        case 0x43cb6cu: goto label_43cb6c;
        case 0x43cb70u: goto label_43cb70;
        case 0x43cb74u: goto label_43cb74;
        case 0x43cb78u: goto label_43cb78;
        case 0x43cb7cu: goto label_43cb7c;
        case 0x43cb80u: goto label_43cb80;
        case 0x43cb84u: goto label_43cb84;
        case 0x43cb88u: goto label_43cb88;
        case 0x43cb8cu: goto label_43cb8c;
        case 0x43cb90u: goto label_43cb90;
        case 0x43cb94u: goto label_43cb94;
        case 0x43cb98u: goto label_43cb98;
        case 0x43cb9cu: goto label_43cb9c;
        case 0x43cba0u: goto label_43cba0;
        case 0x43cba4u: goto label_43cba4;
        case 0x43cba8u: goto label_43cba8;
        case 0x43cbacu: goto label_43cbac;
        case 0x43cbb0u: goto label_43cbb0;
        case 0x43cbb4u: goto label_43cbb4;
        case 0x43cbb8u: goto label_43cbb8;
        case 0x43cbbcu: goto label_43cbbc;
        case 0x43cbc0u: goto label_43cbc0;
        case 0x43cbc4u: goto label_43cbc4;
        case 0x43cbc8u: goto label_43cbc8;
        case 0x43cbccu: goto label_43cbcc;
        case 0x43cbd0u: goto label_43cbd0;
        case 0x43cbd4u: goto label_43cbd4;
        case 0x43cbd8u: goto label_43cbd8;
        case 0x43cbdcu: goto label_43cbdc;
        case 0x43cbe0u: goto label_43cbe0;
        case 0x43cbe4u: goto label_43cbe4;
        case 0x43cbe8u: goto label_43cbe8;
        case 0x43cbecu: goto label_43cbec;
        case 0x43cbf0u: goto label_43cbf0;
        case 0x43cbf4u: goto label_43cbf4;
        case 0x43cbf8u: goto label_43cbf8;
        case 0x43cbfcu: goto label_43cbfc;
        case 0x43cc00u: goto label_43cc00;
        case 0x43cc04u: goto label_43cc04;
        case 0x43cc08u: goto label_43cc08;
        case 0x43cc0cu: goto label_43cc0c;
        case 0x43cc10u: goto label_43cc10;
        case 0x43cc14u: goto label_43cc14;
        case 0x43cc18u: goto label_43cc18;
        case 0x43cc1cu: goto label_43cc1c;
        case 0x43cc20u: goto label_43cc20;
        case 0x43cc24u: goto label_43cc24;
        case 0x43cc28u: goto label_43cc28;
        case 0x43cc2cu: goto label_43cc2c;
        case 0x43cc30u: goto label_43cc30;
        case 0x43cc34u: goto label_43cc34;
        case 0x43cc38u: goto label_43cc38;
        case 0x43cc3cu: goto label_43cc3c;
        case 0x43cc40u: goto label_43cc40;
        case 0x43cc44u: goto label_43cc44;
        case 0x43cc48u: goto label_43cc48;
        case 0x43cc4cu: goto label_43cc4c;
        case 0x43cc50u: goto label_43cc50;
        case 0x43cc54u: goto label_43cc54;
        case 0x43cc58u: goto label_43cc58;
        case 0x43cc5cu: goto label_43cc5c;
        case 0x43cc60u: goto label_43cc60;
        case 0x43cc64u: goto label_43cc64;
        case 0x43cc68u: goto label_43cc68;
        case 0x43cc6cu: goto label_43cc6c;
        case 0x43cc70u: goto label_43cc70;
        case 0x43cc74u: goto label_43cc74;
        case 0x43cc78u: goto label_43cc78;
        case 0x43cc7cu: goto label_43cc7c;
        case 0x43cc80u: goto label_43cc80;
        case 0x43cc84u: goto label_43cc84;
        case 0x43cc88u: goto label_43cc88;
        case 0x43cc8cu: goto label_43cc8c;
        case 0x43cc90u: goto label_43cc90;
        case 0x43cc94u: goto label_43cc94;
        case 0x43cc98u: goto label_43cc98;
        case 0x43cc9cu: goto label_43cc9c;
        case 0x43cca0u: goto label_43cca0;
        case 0x43cca4u: goto label_43cca4;
        case 0x43cca8u: goto label_43cca8;
        case 0x43ccacu: goto label_43ccac;
        case 0x43ccb0u: goto label_43ccb0;
        case 0x43ccb4u: goto label_43ccb4;
        case 0x43ccb8u: goto label_43ccb8;
        case 0x43ccbcu: goto label_43ccbc;
        case 0x43ccc0u: goto label_43ccc0;
        case 0x43ccc4u: goto label_43ccc4;
        case 0x43ccc8u: goto label_43ccc8;
        case 0x43ccccu: goto label_43cccc;
        case 0x43ccd0u: goto label_43ccd0;
        case 0x43ccd4u: goto label_43ccd4;
        case 0x43ccd8u: goto label_43ccd8;
        case 0x43ccdcu: goto label_43ccdc;
        case 0x43cce0u: goto label_43cce0;
        case 0x43cce4u: goto label_43cce4;
        case 0x43cce8u: goto label_43cce8;
        case 0x43ccecu: goto label_43ccec;
        case 0x43ccf0u: goto label_43ccf0;
        case 0x43ccf4u: goto label_43ccf4;
        case 0x43ccf8u: goto label_43ccf8;
        case 0x43ccfcu: goto label_43ccfc;
        case 0x43cd00u: goto label_43cd00;
        case 0x43cd04u: goto label_43cd04;
        case 0x43cd08u: goto label_43cd08;
        case 0x43cd0cu: goto label_43cd0c;
        case 0x43cd10u: goto label_43cd10;
        case 0x43cd14u: goto label_43cd14;
        case 0x43cd18u: goto label_43cd18;
        case 0x43cd1cu: goto label_43cd1c;
        case 0x43cd20u: goto label_43cd20;
        case 0x43cd24u: goto label_43cd24;
        case 0x43cd28u: goto label_43cd28;
        case 0x43cd2cu: goto label_43cd2c;
        case 0x43cd30u: goto label_43cd30;
        case 0x43cd34u: goto label_43cd34;
        case 0x43cd38u: goto label_43cd38;
        case 0x43cd3cu: goto label_43cd3c;
        case 0x43cd40u: goto label_43cd40;
        case 0x43cd44u: goto label_43cd44;
        case 0x43cd48u: goto label_43cd48;
        case 0x43cd4cu: goto label_43cd4c;
        case 0x43cd50u: goto label_43cd50;
        case 0x43cd54u: goto label_43cd54;
        case 0x43cd58u: goto label_43cd58;
        case 0x43cd5cu: goto label_43cd5c;
        case 0x43cd60u: goto label_43cd60;
        case 0x43cd64u: goto label_43cd64;
        case 0x43cd68u: goto label_43cd68;
        case 0x43cd6cu: goto label_43cd6c;
        case 0x43cd70u: goto label_43cd70;
        case 0x43cd74u: goto label_43cd74;
        case 0x43cd78u: goto label_43cd78;
        case 0x43cd7cu: goto label_43cd7c;
        case 0x43cd80u: goto label_43cd80;
        case 0x43cd84u: goto label_43cd84;
        case 0x43cd88u: goto label_43cd88;
        case 0x43cd8cu: goto label_43cd8c;
        case 0x43cd90u: goto label_43cd90;
        case 0x43cd94u: goto label_43cd94;
        case 0x43cd98u: goto label_43cd98;
        case 0x43cd9cu: goto label_43cd9c;
        case 0x43cda0u: goto label_43cda0;
        case 0x43cda4u: goto label_43cda4;
        case 0x43cda8u: goto label_43cda8;
        case 0x43cdacu: goto label_43cdac;
        case 0x43cdb0u: goto label_43cdb0;
        case 0x43cdb4u: goto label_43cdb4;
        case 0x43cdb8u: goto label_43cdb8;
        case 0x43cdbcu: goto label_43cdbc;
        case 0x43cdc0u: goto label_43cdc0;
        case 0x43cdc4u: goto label_43cdc4;
        case 0x43cdc8u: goto label_43cdc8;
        case 0x43cdccu: goto label_43cdcc;
        case 0x43cdd0u: goto label_43cdd0;
        case 0x43cdd4u: goto label_43cdd4;
        case 0x43cdd8u: goto label_43cdd8;
        case 0x43cddcu: goto label_43cddc;
        case 0x43cde0u: goto label_43cde0;
        case 0x43cde4u: goto label_43cde4;
        case 0x43cde8u: goto label_43cde8;
        case 0x43cdecu: goto label_43cdec;
        case 0x43cdf0u: goto label_43cdf0;
        case 0x43cdf4u: goto label_43cdf4;
        case 0x43cdf8u: goto label_43cdf8;
        case 0x43cdfcu: goto label_43cdfc;
        case 0x43ce00u: goto label_43ce00;
        case 0x43ce04u: goto label_43ce04;
        case 0x43ce08u: goto label_43ce08;
        case 0x43ce0cu: goto label_43ce0c;
        case 0x43ce10u: goto label_43ce10;
        case 0x43ce14u: goto label_43ce14;
        case 0x43ce18u: goto label_43ce18;
        case 0x43ce1cu: goto label_43ce1c;
        case 0x43ce20u: goto label_43ce20;
        case 0x43ce24u: goto label_43ce24;
        case 0x43ce28u: goto label_43ce28;
        case 0x43ce2cu: goto label_43ce2c;
        case 0x43ce30u: goto label_43ce30;
        case 0x43ce34u: goto label_43ce34;
        case 0x43ce38u: goto label_43ce38;
        case 0x43ce3cu: goto label_43ce3c;
        case 0x43ce40u: goto label_43ce40;
        case 0x43ce44u: goto label_43ce44;
        case 0x43ce48u: goto label_43ce48;
        case 0x43ce4cu: goto label_43ce4c;
        case 0x43ce50u: goto label_43ce50;
        case 0x43ce54u: goto label_43ce54;
        case 0x43ce58u: goto label_43ce58;
        case 0x43ce5cu: goto label_43ce5c;
        case 0x43ce60u: goto label_43ce60;
        case 0x43ce64u: goto label_43ce64;
        case 0x43ce68u: goto label_43ce68;
        case 0x43ce6cu: goto label_43ce6c;
        default: break;
    }

    ctx->pc = 0x43c8c0u;

label_43c8c0:
    // 0x43c8c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x43c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_43c8c4:
    // 0x43c8c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x43c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_43c8c8:
    // 0x43c8c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43c8cc:
    // 0x43c8cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_43c8d0:
    // 0x43c8d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x43c8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_43c8d4:
    // 0x43c8d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43c8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_43c8d8:
    // 0x43c8d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x43c8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_43c8dc:
    // 0x43c8dc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x43c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_43c8e0:
    // 0x43c8e0: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x43c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43c8e4:
    // 0x43c8e4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x43c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43c8e8:
    // 0x43c8e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x43c8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_43c8ec:
    // 0x43c8ec: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x43c8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_43c8f0:
    // 0x43c8f0: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x43c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_43c8f4:
    // 0x43c8f4: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
label_43c8f8:
    if (ctx->pc == 0x43C8F8u) {
        ctx->pc = 0x43C8F8u;
            // 0x43c8f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43C8FCu;
        goto label_43c8fc;
    }
    ctx->pc = 0x43C8F4u;
    {
        const bool branch_taken_0x43c8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C8F4u;
            // 0x43c8f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c8f4) {
            ctx->pc = 0x43CA60u;
            goto label_43ca60;
        }
    }
    ctx->pc = 0x43C8FCu;
label_43c8fc:
    // 0x43c8fc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x43c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43c900:
    // 0x43c900: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x43c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43c904:
    // 0x43c904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x43c904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43c908:
    // 0x43c908: 0x450300e5  bc1tl       . + 4 + (0xE5 << 2)
label_43c90c:
    if (ctx->pc == 0x43C90Cu) {
        ctx->pc = 0x43C90Cu;
            // 0x43c90c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x43C910u;
        goto label_43c910;
    }
    ctx->pc = 0x43C908u;
    {
        const bool branch_taken_0x43c908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x43c908) {
            ctx->pc = 0x43C90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C908u;
            // 0x43c90c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43CCA0u;
            goto label_43cca0;
        }
    }
    ctx->pc = 0x43C910u;
label_43c910:
    // 0x43c910: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43c910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43c914:
    // 0x43c914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43c914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43c918:
    // 0x43c918: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43c91c:
    // 0x43c91c: 0xc08914c  jal         func_224530
label_43c920:
    if (ctx->pc == 0x43C920u) {
        ctx->pc = 0x43C920u;
            // 0x43c920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43C924u;
        goto label_43c924;
    }
    ctx->pc = 0x43C91Cu;
    SET_GPR_U32(ctx, 31, 0x43C924u);
    ctx->pc = 0x43C920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C91Cu;
            // 0x43c920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C924u; }
        if (ctx->pc != 0x43C924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C924u; }
        if (ctx->pc != 0x43C924u) { return; }
    }
    ctx->pc = 0x43C924u;
label_43c924:
    // 0x43c924: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x43c924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_43c928:
    // 0x43c928: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43c928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43c92c:
    // 0x43c92c: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x43c92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43c930:
    // 0x43c930: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x43c930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_43c934:
    // 0x43c934: 0xc4420164  lwc1        $f2, 0x164($v0)
    ctx->pc = 0x43c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43c938:
    // 0x43c938: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x43c938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_43c93c:
    // 0x43c93c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x43c93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43c940:
    // 0x43c940: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x43c940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_43c944:
    // 0x43c944: 0xc4610168  lwc1        $f1, 0x168($v1)
    ctx->pc = 0x43c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43c948:
    // 0x43c948: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43c94c:
    // 0x43c94c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x43c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_43c950:
    // 0x43c950: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x43c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43c954:
    // 0x43c954: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x43c954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_43c958:
    // 0x43c958: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x43c958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_43c95c:
    // 0x43c95c: 0xc04f278  jal         func_13C9E0
label_43c960:
    if (ctx->pc == 0x43C960u) {
        ctx->pc = 0x43C960u;
            // 0x43c960: 0xe7a0013c  swc1        $f0, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->pc = 0x43C964u;
        goto label_43c964;
    }
    ctx->pc = 0x43C95Cu;
    SET_GPR_U32(ctx, 31, 0x43C964u);
    ctx->pc = 0x43C960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C95Cu;
            // 0x43c960: 0xe7a0013c  swc1        $f0, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C964u; }
        if (ctx->pc != 0x43C964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C964u; }
        if (ctx->pc != 0x43C964u) { return; }
    }
    ctx->pc = 0x43C964u;
label_43c964:
    // 0x43c964: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x43c964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_43c968:
    // 0x43c968: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x43c968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_43c96c:
    // 0x43c96c: 0xc04cca0  jal         func_133280
label_43c970:
    if (ctx->pc == 0x43C970u) {
        ctx->pc = 0x43C970u;
            // 0x43c970: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43C974u;
        goto label_43c974;
    }
    ctx->pc = 0x43C96Cu;
    SET_GPR_U32(ctx, 31, 0x43C974u);
    ctx->pc = 0x43C970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C96Cu;
            // 0x43c970: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C974u; }
        if (ctx->pc != 0x43C974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C974u; }
        if (ctx->pc != 0x43C974u) { return; }
    }
    ctx->pc = 0x43C974u;
label_43c974:
    // 0x43c974: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x43c974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_43c978:
    // 0x43c978: 0xc04cc44  jal         func_133110
label_43c97c:
    if (ctx->pc == 0x43C97Cu) {
        ctx->pc = 0x43C97Cu;
            // 0x43c97c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43C980u;
        goto label_43c980;
    }
    ctx->pc = 0x43C978u;
    SET_GPR_U32(ctx, 31, 0x43C980u);
    ctx->pc = 0x43C97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C978u;
            // 0x43c97c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C980u; }
        if (ctx->pc != 0x43C980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C980u; }
        if (ctx->pc != 0x43C980u) { return; }
    }
    ctx->pc = 0x43C980u;
label_43c980:
    // 0x43c980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43c984:
    // 0x43c984: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x43c984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_43c988:
    // 0x43c988: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43c988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43c98c:
    // 0x43c98c: 0xc04cc70  jal         func_1331C0
label_43c990:
    if (ctx->pc == 0x43C990u) {
        ctx->pc = 0x43C990u;
            // 0x43c990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43C994u;
        goto label_43c994;
    }
    ctx->pc = 0x43C98Cu;
    SET_GPR_U32(ctx, 31, 0x43C994u);
    ctx->pc = 0x43C990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C98Cu;
            // 0x43c990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C994u; }
        if (ctx->pc != 0x43C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C994u; }
        if (ctx->pc != 0x43C994u) { return; }
    }
    ctx->pc = 0x43C994u;
label_43c994:
    // 0x43c994: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x43c994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_43c998:
    // 0x43c998: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43c99c:
    // 0x43c99c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x43c99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43c9a0:
    // 0x43c9a0: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x43c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43c9a4:
    // 0x43c9a4: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x43c9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43c9a8:
    // 0x43c9a8: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x43c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43c9ac:
    // 0x43c9ac: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x43c9acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_43c9b0:
    // 0x43c9b0: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x43c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_43c9b4:
    // 0x43c9b4: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x43c9b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_43c9b8:
    // 0x43c9b8: 0x8c51e3e0  lw          $s1, -0x1C20($v0)
    ctx->pc = 0x43c9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43c9bc:
    // 0x43c9bc: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x43c9bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_43c9c0:
    // 0x43c9c0: 0x8e120050  lw          $s2, 0x50($s0)
    ctx->pc = 0x43c9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43c9c4:
    // 0x43c9c4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x43c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43c9c8:
    // 0x43c9c8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x43c9c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_43c9cc:
    // 0x43c9cc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x43c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_43c9d0:
    // 0x43c9d0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x43c9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_43c9d4:
    // 0x43c9d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x43c9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_43c9d8:
    // 0x43c9d8: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x43c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43c9dc:
    // 0x43c9dc: 0xc089638  jal         func_2258E0
label_43c9e0:
    if (ctx->pc == 0x43C9E0u) {
        ctx->pc = 0x43C9E0u;
            // 0x43c9e0: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x43C9E4u;
        goto label_43c9e4;
    }
    ctx->pc = 0x43C9DCu;
    SET_GPR_U32(ctx, 31, 0x43C9E4u);
    ctx->pc = 0x43C9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C9DCu;
            // 0x43c9e0: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C9E4u; }
        if (ctx->pc != 0x43C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C9E4u; }
        if (ctx->pc != 0x43C9E4u) { return; }
    }
    ctx->pc = 0x43C9E4u;
label_43c9e4:
    // 0x43c9e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43c9e8:
    // 0x43c9e8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x43c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_43c9ec:
    // 0x43c9ec: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x43c9ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_43c9f0:
    // 0x43c9f0: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x43c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_43c9f4:
    // 0x43c9f4: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x43c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43c9f8:
    // 0x43c9f8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x43c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43c9fc:
    // 0x43c9fc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x43c9fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_43ca00:
    // 0x43ca00: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x43ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43ca04:
    // 0x43ca04: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x43ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43ca08:
    // 0x43ca08: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x43ca08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_43ca0c:
    // 0x43ca0c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x43ca0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_43ca10:
    // 0x43ca10: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x43ca10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_43ca14:
    // 0x43ca14: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x43ca14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_43ca18:
    // 0x43ca18: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x43ca18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_43ca1c:
    // 0x43ca1c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x43ca1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_43ca20:
    // 0x43ca20: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x43ca20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_43ca24:
    // 0x43ca24: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x43ca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_43ca28:
    // 0x43ca28: 0xc6340018  lwc1        $f20, 0x18($s1)
    ctx->pc = 0x43ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43ca2c:
    // 0x43ca2c: 0xc088b74  jal         func_222DD0
label_43ca30:
    if (ctx->pc == 0x43CA30u) {
        ctx->pc = 0x43CA30u;
            // 0x43ca30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CA34u;
        goto label_43ca34;
    }
    ctx->pc = 0x43CA2Cu;
    SET_GPR_U32(ctx, 31, 0x43CA34u);
    ctx->pc = 0x43CA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CA2Cu;
            // 0x43ca30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CA34u; }
        if (ctx->pc != 0x43CA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CA34u; }
        if (ctx->pc != 0x43CA34u) { return; }
    }
    ctx->pc = 0x43CA34u;
label_43ca34:
    // 0x43ca34: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x43ca34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_43ca38:
    // 0x43ca38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x43ca38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_43ca3c:
    // 0x43ca3c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x43ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_43ca40:
    // 0x43ca40: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x43ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_43ca44:
    // 0x43ca44: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x43ca44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_43ca48:
    // 0x43ca48: 0x320f809  jalr        $t9
label_43ca4c:
    if (ctx->pc == 0x43CA4Cu) {
        ctx->pc = 0x43CA4Cu;
            // 0x43ca4c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x43CA50u;
        goto label_43ca50;
    }
    ctx->pc = 0x43CA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43CA50u);
        ctx->pc = 0x43CA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CA48u;
            // 0x43ca4c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43CA50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43CA50u; }
            if (ctx->pc != 0x43CA50u) { return; }
        }
        }
    }
    ctx->pc = 0x43CA50u;
label_43ca50:
    // 0x43ca50: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x43ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_43ca54:
    // 0x43ca54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43ca58:
    // 0x43ca58: 0x10000090  b           . + 4 + (0x90 << 2)
label_43ca5c:
    if (ctx->pc == 0x43CA5Cu) {
        ctx->pc = 0x43CA5Cu;
            // 0x43ca5c: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x43CA60u;
        goto label_43ca60;
    }
    ctx->pc = 0x43CA58u;
    {
        const bool branch_taken_0x43ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43CA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CA58u;
            // 0x43ca5c: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ca58) {
            ctx->pc = 0x43CC9Cu;
            goto label_43cc9c;
        }
    }
    ctx->pc = 0x43CA60u;
label_43ca60:
    // 0x43ca60: 0x1860008e  blez        $v1, . + 4 + (0x8E << 2)
label_43ca64:
    if (ctx->pc == 0x43CA64u) {
        ctx->pc = 0x43CA68u;
        goto label_43ca68;
    }
    ctx->pc = 0x43CA60u;
    {
        const bool branch_taken_0x43ca60 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x43ca60) {
            ctx->pc = 0x43CC9Cu;
            goto label_43cc9c;
        }
    }
    ctx->pc = 0x43CA68u;
label_43ca68:
    // 0x43ca68: 0x920300e8  lbu         $v1, 0xE8($s0)
    ctx->pc = 0x43ca68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 232)));
label_43ca6c:
    // 0x43ca6c: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
label_43ca70:
    if (ctx->pc == 0x43CA70u) {
        ctx->pc = 0x43CA70u;
            // 0x43ca70: 0xc60100d4  lwc1        $f1, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x43CA74u;
        goto label_43ca74;
    }
    ctx->pc = 0x43CA6Cu;
    {
        const bool branch_taken_0x43ca6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43ca6c) {
            ctx->pc = 0x43CA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43CA6Cu;
            // 0x43ca70: 0xc60100d4  lwc1        $f1, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x43CAFCu;
            goto label_43cafc;
        }
    }
    ctx->pc = 0x43CA74u;
label_43ca74:
    // 0x43ca74: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x43ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_43ca78:
    // 0x43ca78: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x43ca78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_43ca7c:
    // 0x43ca7c: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_43ca80:
    if (ctx->pc == 0x43CA80u) {
        ctx->pc = 0x43CA84u;
        goto label_43ca84;
    }
    ctx->pc = 0x43CA7Cu;
    {
        const bool branch_taken_0x43ca7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x43ca7c) {
            ctx->pc = 0x43CAF8u;
            goto label_43caf8;
        }
    }
    ctx->pc = 0x43CA84u;
label_43ca84:
    // 0x43ca84: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x43ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_43ca88:
    // 0x43ca88: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x43ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_43ca8c:
    // 0x43ca8c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x43ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_43ca90:
    // 0x43ca90: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x43ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_43ca94:
    // 0x43ca94: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x43ca94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43ca98:
    // 0x43ca98: 0xc088b74  jal         func_222DD0
label_43ca9c:
    if (ctx->pc == 0x43CA9Cu) {
        ctx->pc = 0x43CA9Cu;
            // 0x43ca9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CAA0u;
        goto label_43caa0;
    }
    ctx->pc = 0x43CA98u;
    SET_GPR_U32(ctx, 31, 0x43CAA0u);
    ctx->pc = 0x43CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CA98u;
            // 0x43ca9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CAA0u; }
        if (ctx->pc != 0x43CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CAA0u; }
        if (ctx->pc != 0x43CAA0u) { return; }
    }
    ctx->pc = 0x43CAA0u;
label_43caa0:
    // 0x43caa0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x43caa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_43caa4:
    // 0x43caa4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x43caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_43caa8:
    // 0x43caa8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43caa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_43caac:
    // 0x43caac: 0x320f809  jalr        $t9
label_43cab0:
    if (ctx->pc == 0x43CAB0u) {
        ctx->pc = 0x43CAB0u;
            // 0x43cab0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x43CAB4u;
        goto label_43cab4;
    }
    ctx->pc = 0x43CAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43CAB4u);
        ctx->pc = 0x43CAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CAACu;
            // 0x43cab0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43CAB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43CAB4u; }
            if (ctx->pc != 0x43CAB4u) { return; }
        }
        }
    }
    ctx->pc = 0x43CAB4u;
label_43cab4:
    // 0x43cab4: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x43cab4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43cab8:
    // 0x43cab8: 0xc088b74  jal         func_222DD0
label_43cabc:
    if (ctx->pc == 0x43CABCu) {
        ctx->pc = 0x43CABCu;
            // 0x43cabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CAC0u;
        goto label_43cac0;
    }
    ctx->pc = 0x43CAB8u;
    SET_GPR_U32(ctx, 31, 0x43CAC0u);
    ctx->pc = 0x43CABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CAB8u;
            // 0x43cabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CAC0u; }
        if (ctx->pc != 0x43CAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CAC0u; }
        if (ctx->pc != 0x43CAC0u) { return; }
    }
    ctx->pc = 0x43CAC0u;
label_43cac0:
    // 0x43cac0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x43cac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_43cac4:
    // 0x43cac4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x43cac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_43cac8:
    // 0x43cac8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x43cac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_43cacc:
    // 0x43cacc: 0x320f809  jalr        $t9
label_43cad0:
    if (ctx->pc == 0x43CAD0u) {
        ctx->pc = 0x43CAD0u;
            // 0x43cad0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x43CAD4u;
        goto label_43cad4;
    }
    ctx->pc = 0x43CACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43CAD4u);
        ctx->pc = 0x43CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CACCu;
            // 0x43cad0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43CAD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43CAD4u; }
            if (ctx->pc != 0x43CAD4u) { return; }
        }
        }
    }
    ctx->pc = 0x43CAD4u;
label_43cad4:
    // 0x43cad4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43cad8:
    // 0x43cad8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43cadc:
    // 0x43cadc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43cadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43cae0:
    // 0x43cae0: 0xc08914c  jal         func_224530
label_43cae4:
    if (ctx->pc == 0x43CAE4u) {
        ctx->pc = 0x43CAE4u;
            // 0x43cae4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CAE8u;
        goto label_43cae8;
    }
    ctx->pc = 0x43CAE0u;
    SET_GPR_U32(ctx, 31, 0x43CAE8u);
    ctx->pc = 0x43CAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CAE0u;
            // 0x43cae4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CAE8u; }
        if (ctx->pc != 0x43CAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CAE8u; }
        if (ctx->pc != 0x43CAE8u) { return; }
    }
    ctx->pc = 0x43CAE8u;
label_43cae8:
    // 0x43cae8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x43cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_43caec:
    // 0x43caec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43caecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43caf0:
    // 0x43caf0: 0xa20000e8  sb          $zero, 0xE8($s0)
    ctx->pc = 0x43caf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
label_43caf4:
    // 0x43caf4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x43caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_43caf8:
    // 0x43caf8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x43caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43cafc:
    // 0x43cafc: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x43cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43cb00:
    // 0x43cb00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x43cb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43cb04:
    // 0x43cb04: 0x45010065  bc1t        . + 4 + (0x65 << 2)
label_43cb08:
    if (ctx->pc == 0x43CB08u) {
        ctx->pc = 0x43CB0Cu;
        goto label_43cb0c;
    }
    ctx->pc = 0x43CB04u;
    {
        const bool branch_taken_0x43cb04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x43cb04) {
            ctx->pc = 0x43CC9Cu;
            goto label_43cc9c;
        }
    }
    ctx->pc = 0x43CB0Cu;
label_43cb0c:
    // 0x43cb0c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x43cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43cb10:
    // 0x43cb10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43cb14:
    // 0x43cb14: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x43cb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_43cb18:
    // 0x43cb18: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x43cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_43cb1c:
    // 0x43cb1c: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x43cb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_43cb20:
    // 0x43cb20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x43cb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43cb24:
    // 0x43cb24: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x43cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_43cb28:
    // 0x43cb28: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x43cb28u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_43cb2c:
    // 0x43cb2c: 0xc0bafb8  jal         func_2EBEE0
label_43cb30:
    if (ctx->pc == 0x43CB30u) {
        ctx->pc = 0x43CB30u;
            // 0x43cb30: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x43CB34u;
        goto label_43cb34;
    }
    ctx->pc = 0x43CB2Cu;
    SET_GPR_U32(ctx, 31, 0x43CB34u);
    ctx->pc = 0x43CB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CB2Cu;
            // 0x43cb30: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CB34u; }
        if (ctx->pc != 0x43CB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CB34u; }
        if (ctx->pc != 0x43CB34u) { return; }
    }
    ctx->pc = 0x43CB34u;
label_43cb34:
    // 0x43cb34: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x43cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_43cb38:
    // 0x43cb38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43cb3c:
    // 0x43cb3c: 0xc122d2c  jal         func_48B4B0
label_43cb40:
    if (ctx->pc == 0x43CB40u) {
        ctx->pc = 0x43CB40u;
            // 0x43cb40: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x43CB44u;
        goto label_43cb44;
    }
    ctx->pc = 0x43CB3Cu;
    SET_GPR_U32(ctx, 31, 0x43CB44u);
    ctx->pc = 0x43CB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CB3Cu;
            // 0x43cb40: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CB44u; }
        if (ctx->pc != 0x43CB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CB44u; }
        if (ctx->pc != 0x43CB44u) { return; }
    }
    ctx->pc = 0x43CB44u;
label_43cb44:
    // 0x43cb44: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x43cb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43cb48:
    // 0x43cb48: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x43cb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_43cb4c:
    // 0x43cb4c: 0x320f809  jalr        $t9
label_43cb50:
    if (ctx->pc == 0x43CB50u) {
        ctx->pc = 0x43CB50u;
            // 0x43cb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CB54u;
        goto label_43cb54;
    }
    ctx->pc = 0x43CB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43CB54u);
        ctx->pc = 0x43CB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CB4Cu;
            // 0x43cb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43CB54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43CB54u; }
            if (ctx->pc != 0x43CB54u) { return; }
        }
        }
    }
    ctx->pc = 0x43CB54u;
label_43cb54:
    // 0x43cb54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43cb58:
    // 0x43cb58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43cb5c:
    // 0x43cb5c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x43cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_43cb60:
    // 0x43cb60: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43cb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43cb64:
    // 0x43cb64: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43cb68:
    // 0x43cb68: 0xc08914c  jal         func_224530
label_43cb6c:
    if (ctx->pc == 0x43CB6Cu) {
        ctx->pc = 0x43CB6Cu;
            // 0x43cb6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CB70u;
        goto label_43cb70;
    }
    ctx->pc = 0x43CB68u;
    SET_GPR_U32(ctx, 31, 0x43CB70u);
    ctx->pc = 0x43CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CB68u;
            // 0x43cb6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CB70u; }
        if (ctx->pc != 0x43CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CB70u; }
        if (ctx->pc != 0x43CB70u) { return; }
    }
    ctx->pc = 0x43CB70u;
label_43cb70:
    // 0x43cb70: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x43cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_43cb74:
    // 0x43cb74: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43cb78:
    // 0x43cb78: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x43cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43cb7c:
    // 0x43cb7c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x43cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_43cb80:
    // 0x43cb80: 0xc4420174  lwc1        $f2, 0x174($v0)
    ctx->pc = 0x43cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43cb84:
    // 0x43cb84: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x43cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_43cb88:
    // 0x43cb88: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x43cb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43cb8c:
    // 0x43cb8c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x43cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_43cb90:
    // 0x43cb90: 0xc4610178  lwc1        $f1, 0x178($v1)
    ctx->pc = 0x43cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43cb94:
    // 0x43cb94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43cb98:
    // 0x43cb98: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x43cb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_43cb9c:
    // 0x43cb9c: 0xc440017c  lwc1        $f0, 0x17C($v0)
    ctx->pc = 0x43cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43cba0:
    // 0x43cba0: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x43cba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_43cba4:
    // 0x43cba4: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x43cba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_43cba8:
    // 0x43cba8: 0xc04f278  jal         func_13C9E0
label_43cbac:
    if (ctx->pc == 0x43CBACu) {
        ctx->pc = 0x43CBACu;
            // 0x43cbac: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x43CBB0u;
        goto label_43cbb0;
    }
    ctx->pc = 0x43CBA8u;
    SET_GPR_U32(ctx, 31, 0x43CBB0u);
    ctx->pc = 0x43CBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CBA8u;
            // 0x43cbac: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBB0u; }
        if (ctx->pc != 0x43CBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBB0u; }
        if (ctx->pc != 0x43CBB0u) { return; }
    }
    ctx->pc = 0x43CBB0u;
label_43cbb0:
    // 0x43cbb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_43cbb4:
    // 0x43cbb4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x43cbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_43cbb8:
    // 0x43cbb8: 0xc04cca0  jal         func_133280
label_43cbbc:
    if (ctx->pc == 0x43CBBCu) {
        ctx->pc = 0x43CBBCu;
            // 0x43cbbc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CBC0u;
        goto label_43cbc0;
    }
    ctx->pc = 0x43CBB8u;
    SET_GPR_U32(ctx, 31, 0x43CBC0u);
    ctx->pc = 0x43CBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CBB8u;
            // 0x43cbbc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBC0u; }
        if (ctx->pc != 0x43CBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBC0u; }
        if (ctx->pc != 0x43CBC0u) { return; }
    }
    ctx->pc = 0x43CBC0u;
label_43cbc0:
    // 0x43cbc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_43cbc4:
    // 0x43cbc4: 0xc04cc44  jal         func_133110
label_43cbc8:
    if (ctx->pc == 0x43CBC8u) {
        ctx->pc = 0x43CBC8u;
            // 0x43cbc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CBCCu;
        goto label_43cbcc;
    }
    ctx->pc = 0x43CBC4u;
    SET_GPR_U32(ctx, 31, 0x43CBCCu);
    ctx->pc = 0x43CBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CBC4u;
            // 0x43cbc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBCCu; }
        if (ctx->pc != 0x43CBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBCCu; }
        if (ctx->pc != 0x43CBCCu) { return; }
    }
    ctx->pc = 0x43CBCCu;
label_43cbcc:
    // 0x43cbcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43cbd0:
    // 0x43cbd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x43cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_43cbd4:
    // 0x43cbd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43cbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43cbd8:
    // 0x43cbd8: 0xc04cc70  jal         func_1331C0
label_43cbdc:
    if (ctx->pc == 0x43CBDCu) {
        ctx->pc = 0x43CBDCu;
            // 0x43cbdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CBE0u;
        goto label_43cbe0;
    }
    ctx->pc = 0x43CBD8u;
    SET_GPR_U32(ctx, 31, 0x43CBE0u);
    ctx->pc = 0x43CBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CBD8u;
            // 0x43cbdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBE0u; }
        if (ctx->pc != 0x43CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CBE0u; }
        if (ctx->pc != 0x43CBE0u) { return; }
    }
    ctx->pc = 0x43CBE0u;
label_43cbe0:
    // 0x43cbe0: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x43cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_43cbe4:
    // 0x43cbe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43cbe8:
    // 0x43cbe8: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x43cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_43cbec:
    // 0x43cbec: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x43cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43cbf0:
    // 0x43cbf0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x43cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43cbf4:
    // 0x43cbf4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x43cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43cbf8:
    // 0x43cbf8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x43cbf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_43cbfc:
    // 0x43cbfc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x43cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_43cc00:
    // 0x43cc00: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x43cc00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_43cc04:
    // 0x43cc04: 0x8c51e3e0  lw          $s1, -0x1C20($v0)
    ctx->pc = 0x43cc04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43cc08:
    // 0x43cc08: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x43cc08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_43cc0c:
    // 0x43cc0c: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x43cc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_43cc10:
    // 0x43cc10: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x43cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43cc14:
    // 0x43cc14: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x43cc14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_43cc18:
    // 0x43cc18: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x43cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_43cc1c:
    // 0x43cc1c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x43cc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_43cc20:
    // 0x43cc20: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x43cc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_43cc24:
    // 0x43cc24: 0xc6340020  lwc1        $f20, 0x20($s1)
    ctx->pc = 0x43cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43cc28:
    // 0x43cc28: 0xc089638  jal         func_2258E0
label_43cc2c:
    if (ctx->pc == 0x43CC2Cu) {
        ctx->pc = 0x43CC2Cu;
            // 0x43cc2c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x43CC30u;
        goto label_43cc30;
    }
    ctx->pc = 0x43CC28u;
    SET_GPR_U32(ctx, 31, 0x43CC30u);
    ctx->pc = 0x43CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CC28u;
            // 0x43cc2c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CC30u; }
        if (ctx->pc != 0x43CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CC30u; }
        if (ctx->pc != 0x43CC30u) { return; }
    }
    ctx->pc = 0x43CC30u;
label_43cc30:
    // 0x43cc30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43cc34:
    // 0x43cc34: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x43cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_43cc38:
    // 0x43cc38: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x43cc38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_43cc3c:
    // 0x43cc3c: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x43cc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_43cc40:
    // 0x43cc40: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x43cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_43cc44:
    // 0x43cc44: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x43cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43cc48:
    // 0x43cc48: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x43cc48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_43cc4c:
    // 0x43cc4c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x43cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43cc50:
    // 0x43cc50: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x43cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43cc54:
    // 0x43cc54: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x43cc54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_43cc58:
    // 0x43cc58: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x43cc58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_43cc5c:
    // 0x43cc5c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x43cc5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_43cc60:
    // 0x43cc60: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x43cc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_43cc64:
    // 0x43cc64: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x43cc64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_43cc68:
    // 0x43cc68: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x43cc68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_43cc6c:
    // 0x43cc6c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x43cc6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_43cc70:
    // 0x43cc70: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x43cc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_43cc74:
    // 0x43cc74: 0xc6340018  lwc1        $f20, 0x18($s1)
    ctx->pc = 0x43cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43cc78:
    // 0x43cc78: 0xc088b74  jal         func_222DD0
label_43cc7c:
    if (ctx->pc == 0x43CC7Cu) {
        ctx->pc = 0x43CC7Cu;
            // 0x43cc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CC80u;
        goto label_43cc80;
    }
    ctx->pc = 0x43CC78u;
    SET_GPR_U32(ctx, 31, 0x43CC80u);
    ctx->pc = 0x43CC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CC78u;
            // 0x43cc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CC80u; }
        if (ctx->pc != 0x43CC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CC80u; }
        if (ctx->pc != 0x43CC80u) { return; }
    }
    ctx->pc = 0x43CC80u;
label_43cc80:
    // 0x43cc80: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x43cc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43cc84:
    // 0x43cc84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x43cc84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_43cc88:
    // 0x43cc88: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_43cc8c:
    // 0x43cc8c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x43cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_43cc90:
    // 0x43cc90: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x43cc90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_43cc94:
    // 0x43cc94: 0x320f809  jalr        $t9
label_43cc98:
    if (ctx->pc == 0x43CC98u) {
        ctx->pc = 0x43CC98u;
            // 0x43cc98: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43CC9Cu;
        goto label_43cc9c;
    }
    ctx->pc = 0x43CC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43CC9Cu);
        ctx->pc = 0x43CC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CC94u;
            // 0x43cc98: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43CC9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43CC9Cu; }
            if (ctx->pc != 0x43CC9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43CC9Cu;
label_43cc9c:
    // 0x43cc9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43cc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43cca0:
    // 0x43cca0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x43cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43cca4:
    // 0x43cca4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x43cca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43cca8:
    // 0x43cca8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43cca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43ccac:
    // 0x43ccac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43ccacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43ccb0:
    // 0x43ccb0: 0x3e00008  jr          $ra
label_43ccb4:
    if (ctx->pc == 0x43CCB4u) {
        ctx->pc = 0x43CCB4u;
            // 0x43ccb4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x43CCB8u;
        goto label_43ccb8;
    }
    ctx->pc = 0x43CCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CCB0u;
            // 0x43ccb4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43CCB8u;
label_43ccb8:
    // 0x43ccb8: 0x0  nop
    ctx->pc = 0x43ccb8u;
    // NOP
label_43ccbc:
    // 0x43ccbc: 0x0  nop
    ctx->pc = 0x43ccbcu;
    // NOP
label_43ccc0:
    // 0x43ccc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43ccc4:
    // 0x43ccc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_43ccc8:
    // 0x43ccc8: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x43ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43cccc:
    // 0x43cccc: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x43ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_43ccd0:
    // 0x43ccd0: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x43ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_43ccd4:
    // 0x43ccd4: 0xc04cbd8  jal         func_132F60
label_43ccd8:
    if (ctx->pc == 0x43CCD8u) {
        ctx->pc = 0x43CCD8u;
            // 0x43ccd8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x43CCDCu;
        goto label_43ccdc;
    }
    ctx->pc = 0x43CCD4u;
    SET_GPR_U32(ctx, 31, 0x43CCDCu);
    ctx->pc = 0x43CCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CCD4u;
            // 0x43ccd8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CCDCu; }
        if (ctx->pc != 0x43CCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CCDCu; }
        if (ctx->pc != 0x43CCDCu) { return; }
    }
    ctx->pc = 0x43CCDCu;
label_43ccdc:
    // 0x43ccdc: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x43ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43cce0:
    // 0x43cce0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43cce4:
    // 0x43cce4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x43cce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_43cce8:
    // 0x43cce8: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x43cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_43ccec:
    // 0x43ccec: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x43ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_43ccf0:
    // 0x43ccf0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x43ccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43ccf4:
    // 0x43ccf4: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x43ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_43ccf8:
    // 0x43ccf8: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x43ccf8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_43ccfc:
    // 0x43ccfc: 0xc0bafb8  jal         func_2EBEE0
label_43cd00:
    if (ctx->pc == 0x43CD00u) {
        ctx->pc = 0x43CD00u;
            // 0x43cd00: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x43CD04u;
        goto label_43cd04;
    }
    ctx->pc = 0x43CCFCu;
    SET_GPR_U32(ctx, 31, 0x43CD04u);
    ctx->pc = 0x43CD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CCFCu;
            // 0x43cd00: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CD04u; }
        if (ctx->pc != 0x43CD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CD04u; }
        if (ctx->pc != 0x43CD04u) { return; }
    }
    ctx->pc = 0x43CD04u;
label_43cd04:
    // 0x43cd04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43cd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43cd08:
    // 0x43cd08: 0x3e00008  jr          $ra
label_43cd0c:
    if (ctx->pc == 0x43CD0Cu) {
        ctx->pc = 0x43CD0Cu;
            // 0x43cd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43CD10u;
        goto label_43cd10;
    }
    ctx->pc = 0x43CD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43CD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CD08u;
            // 0x43cd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43CD10u;
label_43cd10:
    // 0x43cd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43cd14:
    // 0x43cd14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43cd18:
    // 0x43cd18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43cd1c:
    // 0x43cd1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43cd20:
    // 0x43cd20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43cd24:
    // 0x43cd24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43cd24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43cd28:
    // 0x43cd28: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x43cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_43cd2c:
    // 0x43cd2c: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_43cd30:
    if (ctx->pc == 0x43CD30u) {
        ctx->pc = 0x43CD30u;
            // 0x43cd30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CD34u;
        goto label_43cd34;
    }
    ctx->pc = 0x43CD2Cu;
    {
        const bool branch_taken_0x43cd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CD2Cu;
            // 0x43cd30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43cd2c) {
            ctx->pc = 0x43CDB4u;
            goto label_43cdb4;
        }
    }
    ctx->pc = 0x43CD34u;
label_43cd34:
    // 0x43cd34: 0x922200e8  lbu         $v0, 0xE8($s1)
    ctx->pc = 0x43cd34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 232)));
label_43cd38:
    // 0x43cd38: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_43cd3c:
    if (ctx->pc == 0x43CD3Cu) {
        ctx->pc = 0x43CD3Cu;
            // 0x43cd3c: 0x8e2400ec  lw          $a0, 0xEC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
        ctx->pc = 0x43CD40u;
        goto label_43cd40;
    }
    ctx->pc = 0x43CD38u;
    {
        const bool branch_taken_0x43cd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cd38) {
            ctx->pc = 0x43CD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43CD38u;
            // 0x43cd3c: 0x8e2400ec  lw          $a0, 0xEC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43CDB8u;
            goto label_43cdb8;
        }
    }
    ctx->pc = 0x43CD40u;
label_43cd40:
    // 0x43cd40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x43cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_43cd44:
    // 0x43cd44: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x43cd44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_43cd48:
    // 0x43cd48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x43cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_43cd4c:
    // 0x43cd4c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_43cd50:
    if (ctx->pc == 0x43CD50u) {
        ctx->pc = 0x43CD50u;
            // 0x43cd50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CD54u;
        goto label_43cd54;
    }
    ctx->pc = 0x43CD4Cu;
    {
        const bool branch_taken_0x43cd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cd4c) {
            ctx->pc = 0x43CD50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43CD4Cu;
            // 0x43cd50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43CD58u;
            goto label_43cd58;
        }
    }
    ctx->pc = 0x43CD54u;
label_43cd54:
    // 0x43cd54: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x43cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43cd58:
    // 0x43cd58: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_43cd5c:
    if (ctx->pc == 0x43CD5Cu) {
        ctx->pc = 0x43CD60u;
        goto label_43cd60;
    }
    ctx->pc = 0x43CD58u;
    {
        const bool branch_taken_0x43cd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43cd58) {
            ctx->pc = 0x43CDB4u;
            goto label_43cdb4;
        }
    }
    ctx->pc = 0x43CD60u;
label_43cd60:
    // 0x43cd60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43cd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43cd64:
    // 0x43cd64: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x43cd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_43cd68:
    // 0x43cd68: 0x320f809  jalr        $t9
label_43cd6c:
    if (ctx->pc == 0x43CD6Cu) {
        ctx->pc = 0x43CD70u;
        goto label_43cd70;
    }
    ctx->pc = 0x43CD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43CD70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43CD70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43CD70u; }
            if (ctx->pc != 0x43CD70u) { return; }
        }
        }
    }
    ctx->pc = 0x43CD70u;
label_43cd70:
    // 0x43cd70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43cd74:
    // 0x43cd74: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_43cd78:
    if (ctx->pc == 0x43CD78u) {
        ctx->pc = 0x43CD7Cu;
        goto label_43cd7c;
    }
    ctx->pc = 0x43CD74u;
    {
        const bool branch_taken_0x43cd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43cd74) {
            ctx->pc = 0x43CDB4u;
            goto label_43cdb4;
        }
    }
    ctx->pc = 0x43CD7Cu;
label_43cd7c:
    // 0x43cd7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x43cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_43cd80:
    // 0x43cd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43cd84:
    // 0x43cd84: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x43cd84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_43cd88:
    // 0x43cd88: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_43cd8c:
    if (ctx->pc == 0x43CD8Cu) {
        ctx->pc = 0x43CD8Cu;
            // 0x43cd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CD90u;
        goto label_43cd90;
    }
    ctx->pc = 0x43CD88u;
    {
        const bool branch_taken_0x43cd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43cd88) {
            ctx->pc = 0x43CD8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43CD88u;
            // 0x43cd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43CD98u;
            goto label_43cd98;
        }
    }
    ctx->pc = 0x43CD90u;
label_43cd90:
    // 0x43cd90: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x43cd90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_43cd94:
    // 0x43cd94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x43cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43cd98:
    // 0x43cd98: 0x8c420200  lw          $v0, 0x200($v0)
    ctx->pc = 0x43cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
label_43cd9c:
    // 0x43cd9c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x43cd9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_43cda0:
    // 0x43cda0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_43cda4:
    if (ctx->pc == 0x43CDA4u) {
        ctx->pc = 0x43CDA8u;
        goto label_43cda8;
    }
    ctx->pc = 0x43CDA0u;
    {
        const bool branch_taken_0x43cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43cda0) {
            ctx->pc = 0x43CDB4u;
            goto label_43cdb4;
        }
    }
    ctx->pc = 0x43CDA8u;
label_43cda8:
    // 0x43cda8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x43cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_43cdac:
    // 0x43cdac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x43cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_43cdb0:
    // 0x43cdb0: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x43cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_43cdb4:
    // 0x43cdb4: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x43cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_43cdb8:
    // 0x43cdb8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x43cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_43cdbc:
    // 0x43cdbc: 0xc122d2c  jal         func_48B4B0
label_43cdc0:
    if (ctx->pc == 0x43CDC0u) {
        ctx->pc = 0x43CDC0u;
            // 0x43cdc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CDC4u;
        goto label_43cdc4;
    }
    ctx->pc = 0x43CDBCu;
    SET_GPR_U32(ctx, 31, 0x43CDC4u);
    ctx->pc = 0x43CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CDBCu;
            // 0x43cdc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CDC4u; }
        if (ctx->pc != 0x43CDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CDC4u; }
        if (ctx->pc != 0x43CDC4u) { return; }
    }
    ctx->pc = 0x43CDC4u;
label_43cdc4:
    // 0x43cdc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43cdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43cdc8:
    // 0x43cdc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43cdc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43cdcc:
    // 0x43cdcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43cdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43cdd0:
    // 0x43cdd0: 0x3e00008  jr          $ra
label_43cdd4:
    if (ctx->pc == 0x43CDD4u) {
        ctx->pc = 0x43CDD4u;
            // 0x43cdd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43CDD8u;
        goto label_43cdd8;
    }
    ctx->pc = 0x43CDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43CDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CDD0u;
            // 0x43cdd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43CDD8u;
label_43cdd8:
    // 0x43cdd8: 0x0  nop
    ctx->pc = 0x43cdd8u;
    // NOP
label_43cddc:
    // 0x43cddc: 0x0  nop
    ctx->pc = 0x43cddcu;
    // NOP
label_43cde0:
    // 0x43cde0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43cde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_43cde4:
    // 0x43cde4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43cde8:
    // 0x43cde8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_43cdec:
    // 0x43cdec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43cdf0:
    // 0x43cdf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43cdf4:
    // 0x43cdf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43cdf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43cdf8:
    // 0x43cdf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43cdfc:
    // 0x43cdfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43cdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43ce00:
    // 0x43ce00: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x43ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_43ce04:
    // 0x43ce04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_43ce08:
    if (ctx->pc == 0x43CE08u) {
        ctx->pc = 0x43CE08u;
            // 0x43ce08: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CE0Cu;
        goto label_43ce0c;
    }
    ctx->pc = 0x43CE04u;
    {
        const bool branch_taken_0x43ce04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x43CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CE04u;
            // 0x43ce08: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ce04) {
            ctx->pc = 0x43CE28u;
            goto label_43ce28;
        }
    }
    ctx->pc = 0x43CE0Cu;
label_43ce0c:
    // 0x43ce0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43ce10:
    // 0x43ce10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43ce10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43ce14:
    // 0x43ce14: 0xa24500e8  sb          $a1, 0xE8($s2)
    ctx->pc = 0x43ce14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 232), (uint8_t)GPR_U32(ctx, 5));
label_43ce18:
    // 0x43ce18: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x43ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_43ce1c:
    // 0x43ce1c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x43ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_43ce20:
    // 0x43ce20: 0xc08914c  jal         func_224530
label_43ce24:
    if (ctx->pc == 0x43CE24u) {
        ctx->pc = 0x43CE24u;
            // 0x43ce24: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CE28u;
        goto label_43ce28;
    }
    ctx->pc = 0x43CE20u;
    SET_GPR_U32(ctx, 31, 0x43CE28u);
    ctx->pc = 0x43CE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CE20u;
            // 0x43ce24: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CE28u; }
        if (ctx->pc != 0x43CE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CE28u; }
        if (ctx->pc != 0x43CE28u) { return; }
    }
    ctx->pc = 0x43CE28u;
label_43ce28:
    // 0x43ce28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43ce2c:
    // 0x43ce2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43ce2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ce30:
    // 0x43ce30: 0xc0e34b0  jal         func_38D2C0
label_43ce34:
    if (ctx->pc == 0x43CE34u) {
        ctx->pc = 0x43CE34u;
            // 0x43ce34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43CE38u;
        goto label_43ce38;
    }
    ctx->pc = 0x43CE30u;
    SET_GPR_U32(ctx, 31, 0x43CE38u);
    ctx->pc = 0x43CE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43CE30u;
            // 0x43ce34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CE38u; }
        if (ctx->pc != 0x43CE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43CE38u; }
        if (ctx->pc != 0x43CE38u) { return; }
    }
    ctx->pc = 0x43CE38u;
label_43ce38:
    // 0x43ce38: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x43ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_43ce3c:
    // 0x43ce3c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x43ce3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_43ce40:
    // 0x43ce40: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x43ce40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_43ce44:
    // 0x43ce44: 0x320f809  jalr        $t9
label_43ce48:
    if (ctx->pc == 0x43CE48u) {
        ctx->pc = 0x43CE48u;
            // 0x43ce48: 0x240513a9  addiu       $a1, $zero, 0x13A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5033));
        ctx->pc = 0x43CE4Cu;
        goto label_43ce4c;
    }
    ctx->pc = 0x43CE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43CE4Cu);
        ctx->pc = 0x43CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CE44u;
            // 0x43ce48: 0x240513a9  addiu       $a1, $zero, 0x13A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5033));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43CE4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43CE4Cu; }
            if (ctx->pc != 0x43CE4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43CE4Cu;
label_43ce4c:
    // 0x43ce4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43ce4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_43ce50:
    // 0x43ce50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43ce50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43ce54:
    // 0x43ce54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43ce54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43ce58:
    // 0x43ce58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43ce58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43ce5c:
    // 0x43ce5c: 0x3e00008  jr          $ra
label_43ce60:
    if (ctx->pc == 0x43CE60u) {
        ctx->pc = 0x43CE60u;
            // 0x43ce60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x43CE64u;
        goto label_43ce64;
    }
    ctx->pc = 0x43CE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43CE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43CE5Cu;
            // 0x43ce60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43CE64u;
label_43ce64:
    // 0x43ce64: 0x0  nop
    ctx->pc = 0x43ce64u;
    // NOP
label_43ce68:
    // 0x43ce68: 0x0  nop
    ctx->pc = 0x43ce68u;
    // NOP
label_43ce6c:
    // 0x43ce6c: 0x0  nop
    ctx->pc = 0x43ce6cu;
    // NOP
}
