#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4FA0
// Address: 0x1f4fa0 - 0x1f53c0
void sub_001F4FA0_0x1f4fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4FA0_0x1f4fa0");
#endif

    switch (ctx->pc) {
        case 0x1f4fa0u: goto label_1f4fa0;
        case 0x1f4fa4u: goto label_1f4fa4;
        case 0x1f4fa8u: goto label_1f4fa8;
        case 0x1f4facu: goto label_1f4fac;
        case 0x1f4fb0u: goto label_1f4fb0;
        case 0x1f4fb4u: goto label_1f4fb4;
        case 0x1f4fb8u: goto label_1f4fb8;
        case 0x1f4fbcu: goto label_1f4fbc;
        case 0x1f4fc0u: goto label_1f4fc0;
        case 0x1f4fc4u: goto label_1f4fc4;
        case 0x1f4fc8u: goto label_1f4fc8;
        case 0x1f4fccu: goto label_1f4fcc;
        case 0x1f4fd0u: goto label_1f4fd0;
        case 0x1f4fd4u: goto label_1f4fd4;
        case 0x1f4fd8u: goto label_1f4fd8;
        case 0x1f4fdcu: goto label_1f4fdc;
        case 0x1f4fe0u: goto label_1f4fe0;
        case 0x1f4fe4u: goto label_1f4fe4;
        case 0x1f4fe8u: goto label_1f4fe8;
        case 0x1f4fecu: goto label_1f4fec;
        case 0x1f4ff0u: goto label_1f4ff0;
        case 0x1f4ff4u: goto label_1f4ff4;
        case 0x1f4ff8u: goto label_1f4ff8;
        case 0x1f4ffcu: goto label_1f4ffc;
        case 0x1f5000u: goto label_1f5000;
        case 0x1f5004u: goto label_1f5004;
        case 0x1f5008u: goto label_1f5008;
        case 0x1f500cu: goto label_1f500c;
        case 0x1f5010u: goto label_1f5010;
        case 0x1f5014u: goto label_1f5014;
        case 0x1f5018u: goto label_1f5018;
        case 0x1f501cu: goto label_1f501c;
        case 0x1f5020u: goto label_1f5020;
        case 0x1f5024u: goto label_1f5024;
        case 0x1f5028u: goto label_1f5028;
        case 0x1f502cu: goto label_1f502c;
        case 0x1f5030u: goto label_1f5030;
        case 0x1f5034u: goto label_1f5034;
        case 0x1f5038u: goto label_1f5038;
        case 0x1f503cu: goto label_1f503c;
        case 0x1f5040u: goto label_1f5040;
        case 0x1f5044u: goto label_1f5044;
        case 0x1f5048u: goto label_1f5048;
        case 0x1f504cu: goto label_1f504c;
        case 0x1f5050u: goto label_1f5050;
        case 0x1f5054u: goto label_1f5054;
        case 0x1f5058u: goto label_1f5058;
        case 0x1f505cu: goto label_1f505c;
        case 0x1f5060u: goto label_1f5060;
        case 0x1f5064u: goto label_1f5064;
        case 0x1f5068u: goto label_1f5068;
        case 0x1f506cu: goto label_1f506c;
        case 0x1f5070u: goto label_1f5070;
        case 0x1f5074u: goto label_1f5074;
        case 0x1f5078u: goto label_1f5078;
        case 0x1f507cu: goto label_1f507c;
        case 0x1f5080u: goto label_1f5080;
        case 0x1f5084u: goto label_1f5084;
        case 0x1f5088u: goto label_1f5088;
        case 0x1f508cu: goto label_1f508c;
        case 0x1f5090u: goto label_1f5090;
        case 0x1f5094u: goto label_1f5094;
        case 0x1f5098u: goto label_1f5098;
        case 0x1f509cu: goto label_1f509c;
        case 0x1f50a0u: goto label_1f50a0;
        case 0x1f50a4u: goto label_1f50a4;
        case 0x1f50a8u: goto label_1f50a8;
        case 0x1f50acu: goto label_1f50ac;
        case 0x1f50b0u: goto label_1f50b0;
        case 0x1f50b4u: goto label_1f50b4;
        case 0x1f50b8u: goto label_1f50b8;
        case 0x1f50bcu: goto label_1f50bc;
        case 0x1f50c0u: goto label_1f50c0;
        case 0x1f50c4u: goto label_1f50c4;
        case 0x1f50c8u: goto label_1f50c8;
        case 0x1f50ccu: goto label_1f50cc;
        case 0x1f50d0u: goto label_1f50d0;
        case 0x1f50d4u: goto label_1f50d4;
        case 0x1f50d8u: goto label_1f50d8;
        case 0x1f50dcu: goto label_1f50dc;
        case 0x1f50e0u: goto label_1f50e0;
        case 0x1f50e4u: goto label_1f50e4;
        case 0x1f50e8u: goto label_1f50e8;
        case 0x1f50ecu: goto label_1f50ec;
        case 0x1f50f0u: goto label_1f50f0;
        case 0x1f50f4u: goto label_1f50f4;
        case 0x1f50f8u: goto label_1f50f8;
        case 0x1f50fcu: goto label_1f50fc;
        case 0x1f5100u: goto label_1f5100;
        case 0x1f5104u: goto label_1f5104;
        case 0x1f5108u: goto label_1f5108;
        case 0x1f510cu: goto label_1f510c;
        case 0x1f5110u: goto label_1f5110;
        case 0x1f5114u: goto label_1f5114;
        case 0x1f5118u: goto label_1f5118;
        case 0x1f511cu: goto label_1f511c;
        case 0x1f5120u: goto label_1f5120;
        case 0x1f5124u: goto label_1f5124;
        case 0x1f5128u: goto label_1f5128;
        case 0x1f512cu: goto label_1f512c;
        case 0x1f5130u: goto label_1f5130;
        case 0x1f5134u: goto label_1f5134;
        case 0x1f5138u: goto label_1f5138;
        case 0x1f513cu: goto label_1f513c;
        case 0x1f5140u: goto label_1f5140;
        case 0x1f5144u: goto label_1f5144;
        case 0x1f5148u: goto label_1f5148;
        case 0x1f514cu: goto label_1f514c;
        case 0x1f5150u: goto label_1f5150;
        case 0x1f5154u: goto label_1f5154;
        case 0x1f5158u: goto label_1f5158;
        case 0x1f515cu: goto label_1f515c;
        case 0x1f5160u: goto label_1f5160;
        case 0x1f5164u: goto label_1f5164;
        case 0x1f5168u: goto label_1f5168;
        case 0x1f516cu: goto label_1f516c;
        case 0x1f5170u: goto label_1f5170;
        case 0x1f5174u: goto label_1f5174;
        case 0x1f5178u: goto label_1f5178;
        case 0x1f517cu: goto label_1f517c;
        case 0x1f5180u: goto label_1f5180;
        case 0x1f5184u: goto label_1f5184;
        case 0x1f5188u: goto label_1f5188;
        case 0x1f518cu: goto label_1f518c;
        case 0x1f5190u: goto label_1f5190;
        case 0x1f5194u: goto label_1f5194;
        case 0x1f5198u: goto label_1f5198;
        case 0x1f519cu: goto label_1f519c;
        case 0x1f51a0u: goto label_1f51a0;
        case 0x1f51a4u: goto label_1f51a4;
        case 0x1f51a8u: goto label_1f51a8;
        case 0x1f51acu: goto label_1f51ac;
        case 0x1f51b0u: goto label_1f51b0;
        case 0x1f51b4u: goto label_1f51b4;
        case 0x1f51b8u: goto label_1f51b8;
        case 0x1f51bcu: goto label_1f51bc;
        case 0x1f51c0u: goto label_1f51c0;
        case 0x1f51c4u: goto label_1f51c4;
        case 0x1f51c8u: goto label_1f51c8;
        case 0x1f51ccu: goto label_1f51cc;
        case 0x1f51d0u: goto label_1f51d0;
        case 0x1f51d4u: goto label_1f51d4;
        case 0x1f51d8u: goto label_1f51d8;
        case 0x1f51dcu: goto label_1f51dc;
        case 0x1f51e0u: goto label_1f51e0;
        case 0x1f51e4u: goto label_1f51e4;
        case 0x1f51e8u: goto label_1f51e8;
        case 0x1f51ecu: goto label_1f51ec;
        case 0x1f51f0u: goto label_1f51f0;
        case 0x1f51f4u: goto label_1f51f4;
        case 0x1f51f8u: goto label_1f51f8;
        case 0x1f51fcu: goto label_1f51fc;
        case 0x1f5200u: goto label_1f5200;
        case 0x1f5204u: goto label_1f5204;
        case 0x1f5208u: goto label_1f5208;
        case 0x1f520cu: goto label_1f520c;
        case 0x1f5210u: goto label_1f5210;
        case 0x1f5214u: goto label_1f5214;
        case 0x1f5218u: goto label_1f5218;
        case 0x1f521cu: goto label_1f521c;
        case 0x1f5220u: goto label_1f5220;
        case 0x1f5224u: goto label_1f5224;
        case 0x1f5228u: goto label_1f5228;
        case 0x1f522cu: goto label_1f522c;
        case 0x1f5230u: goto label_1f5230;
        case 0x1f5234u: goto label_1f5234;
        case 0x1f5238u: goto label_1f5238;
        case 0x1f523cu: goto label_1f523c;
        case 0x1f5240u: goto label_1f5240;
        case 0x1f5244u: goto label_1f5244;
        case 0x1f5248u: goto label_1f5248;
        case 0x1f524cu: goto label_1f524c;
        case 0x1f5250u: goto label_1f5250;
        case 0x1f5254u: goto label_1f5254;
        case 0x1f5258u: goto label_1f5258;
        case 0x1f525cu: goto label_1f525c;
        case 0x1f5260u: goto label_1f5260;
        case 0x1f5264u: goto label_1f5264;
        case 0x1f5268u: goto label_1f5268;
        case 0x1f526cu: goto label_1f526c;
        case 0x1f5270u: goto label_1f5270;
        case 0x1f5274u: goto label_1f5274;
        case 0x1f5278u: goto label_1f5278;
        case 0x1f527cu: goto label_1f527c;
        case 0x1f5280u: goto label_1f5280;
        case 0x1f5284u: goto label_1f5284;
        case 0x1f5288u: goto label_1f5288;
        case 0x1f528cu: goto label_1f528c;
        case 0x1f5290u: goto label_1f5290;
        case 0x1f5294u: goto label_1f5294;
        case 0x1f5298u: goto label_1f5298;
        case 0x1f529cu: goto label_1f529c;
        case 0x1f52a0u: goto label_1f52a0;
        case 0x1f52a4u: goto label_1f52a4;
        case 0x1f52a8u: goto label_1f52a8;
        case 0x1f52acu: goto label_1f52ac;
        case 0x1f52b0u: goto label_1f52b0;
        case 0x1f52b4u: goto label_1f52b4;
        case 0x1f52b8u: goto label_1f52b8;
        case 0x1f52bcu: goto label_1f52bc;
        case 0x1f52c0u: goto label_1f52c0;
        case 0x1f52c4u: goto label_1f52c4;
        case 0x1f52c8u: goto label_1f52c8;
        case 0x1f52ccu: goto label_1f52cc;
        case 0x1f52d0u: goto label_1f52d0;
        case 0x1f52d4u: goto label_1f52d4;
        case 0x1f52d8u: goto label_1f52d8;
        case 0x1f52dcu: goto label_1f52dc;
        case 0x1f52e0u: goto label_1f52e0;
        case 0x1f52e4u: goto label_1f52e4;
        case 0x1f52e8u: goto label_1f52e8;
        case 0x1f52ecu: goto label_1f52ec;
        case 0x1f52f0u: goto label_1f52f0;
        case 0x1f52f4u: goto label_1f52f4;
        case 0x1f52f8u: goto label_1f52f8;
        case 0x1f52fcu: goto label_1f52fc;
        case 0x1f5300u: goto label_1f5300;
        case 0x1f5304u: goto label_1f5304;
        case 0x1f5308u: goto label_1f5308;
        case 0x1f530cu: goto label_1f530c;
        case 0x1f5310u: goto label_1f5310;
        case 0x1f5314u: goto label_1f5314;
        case 0x1f5318u: goto label_1f5318;
        case 0x1f531cu: goto label_1f531c;
        case 0x1f5320u: goto label_1f5320;
        case 0x1f5324u: goto label_1f5324;
        case 0x1f5328u: goto label_1f5328;
        case 0x1f532cu: goto label_1f532c;
        case 0x1f5330u: goto label_1f5330;
        case 0x1f5334u: goto label_1f5334;
        case 0x1f5338u: goto label_1f5338;
        case 0x1f533cu: goto label_1f533c;
        case 0x1f5340u: goto label_1f5340;
        case 0x1f5344u: goto label_1f5344;
        case 0x1f5348u: goto label_1f5348;
        case 0x1f534cu: goto label_1f534c;
        case 0x1f5350u: goto label_1f5350;
        case 0x1f5354u: goto label_1f5354;
        case 0x1f5358u: goto label_1f5358;
        case 0x1f535cu: goto label_1f535c;
        case 0x1f5360u: goto label_1f5360;
        case 0x1f5364u: goto label_1f5364;
        case 0x1f5368u: goto label_1f5368;
        case 0x1f536cu: goto label_1f536c;
        case 0x1f5370u: goto label_1f5370;
        case 0x1f5374u: goto label_1f5374;
        case 0x1f5378u: goto label_1f5378;
        case 0x1f537cu: goto label_1f537c;
        case 0x1f5380u: goto label_1f5380;
        case 0x1f5384u: goto label_1f5384;
        case 0x1f5388u: goto label_1f5388;
        case 0x1f538cu: goto label_1f538c;
        case 0x1f5390u: goto label_1f5390;
        case 0x1f5394u: goto label_1f5394;
        case 0x1f5398u: goto label_1f5398;
        case 0x1f539cu: goto label_1f539c;
        case 0x1f53a0u: goto label_1f53a0;
        case 0x1f53a4u: goto label_1f53a4;
        case 0x1f53a8u: goto label_1f53a8;
        case 0x1f53acu: goto label_1f53ac;
        case 0x1f53b0u: goto label_1f53b0;
        case 0x1f53b4u: goto label_1f53b4;
        case 0x1f53b8u: goto label_1f53b8;
        case 0x1f53bcu: goto label_1f53bc;
        default: break;
    }

    ctx->pc = 0x1f4fa0u;

label_1f4fa0:
    // 0x1f4fa0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x1f4fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_1f4fa4:
    // 0x1f4fa4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f4fa8:
    // 0x1f4fa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f4fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f4fac:
    // 0x1f4fac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4fb0:
    // 0x1f4fb0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f4fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f4fb4:
    // 0x1f4fb4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f4fb8:
    // 0x1f4fb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f4fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f4fbc:
    // 0x1f4fbc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f4fc0:
    // 0x1f4fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f4fc4:
    // 0x1f4fc4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1f4fc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4fc8:
    // 0x1f4fc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f4fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f4fcc:
    // 0x1f4fcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f4fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f4fd0:
    // 0x1f4fd0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f4fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4fd4:
    // 0x1f4fd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f4fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f4fd8:
    // 0x1f4fd8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f4fd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4fdc:
    // 0x1f4fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f4fe0:
    // 0x1f4fe0: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1f4fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_1f4fe4:
    // 0x1f4fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f4fe8:
    // 0x1f4fe8: 0x24c6dc90  addiu       $a2, $a2, -0x2370
    ctx->pc = 0x1f4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958224));
label_1f4fec:
    // 0x1f4fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f4ff0:
    // 0x1f4ff0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f4ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ff4:
    // 0x1f4ff4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f4ff8:
    // 0x1f4ff8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f4ffc:
    // 0x1f4ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5000:
    // 0x1f5000: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f5000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f5004:
    // 0x1f5004: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1f5004u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f5008:
    // 0x1f5008: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f5008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f500c:
    // 0x1f500c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f500cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f5010:
    // 0x1f5010: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x1f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_1f5014:
    // 0x1f5014: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x1f5014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1f5018:
    // 0x1f5018: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1f5018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f501c:
    // 0x1f501c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1f501cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1f5020:
    // 0x1f5020: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1f5020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1f5024:
    // 0x1f5024: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f5024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1f5028:
    // 0x1f5028: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1f5028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1f502c:
    // 0x1f502c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1f502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1f5030:
    // 0x1f5030: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f5030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1f5034:
    // 0x1f5034: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1f5034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1f5038:
    // 0x1f5038: 0xafbe02bc  sw          $fp, 0x2BC($sp)
    ctx->pc = 0x1f5038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 30));
label_1f503c:
    // 0x1f503c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1f503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f5040:
    // 0x1f5040: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x1f5040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
label_1f5044:
    // 0x1f5044: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f5044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5048:
    // 0x1f5048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f504c:
    // 0x1f504c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f504cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f5050:
    // 0x1f5050: 0x320f809  jalr        $t9
label_1f5054:
    if (ctx->pc == 0x1F5054u) {
        ctx->pc = 0x1F5054u;
            // 0x1f5054: 0xafa800ac  sw          $t0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
        ctx->pc = 0x1F5058u;
        goto label_1f5058;
    }
    ctx->pc = 0x1F5050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5058u);
        ctx->pc = 0x1F5054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5050u;
            // 0x1f5054: 0xafa800ac  sw          $t0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5058u; }
            if (ctx->pc != 0x1F5058u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5058u;
label_1f5058:
    // 0x1f5058: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1f5058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f505c:
    // 0x1f505c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f505cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5060:
    // 0x1f5060: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f5060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f5064:
    // 0x1f5064: 0x320f809  jalr        $t9
label_1f5068:
    if (ctx->pc == 0x1F5068u) {
        ctx->pc = 0x1F5068u;
            // 0x1f5068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F506Cu;
        goto label_1f506c;
    }
    ctx->pc = 0x1F5064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F506Cu);
        ctx->pc = 0x1F5068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5064u;
            // 0x1f5068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F506Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F506Cu; }
            if (ctx->pc != 0x1F506Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F506Cu;
label_1f506c:
    // 0x1f506c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f506cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5070:
    // 0x1f5070: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1f5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1f5074:
    // 0x1f5074: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1f5074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1f5078:
    // 0x1f5078: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f5078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1f507c:
    // 0x1f507c: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x1f507cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1f5080:
    // 0x1f5080: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_1f5084:
    if (ctx->pc == 0x1F5084u) {
        ctx->pc = 0x1F5084u;
            // 0x1f5084: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1F5088u;
        goto label_1f5088;
    }
    ctx->pc = 0x1F5080u;
    {
        const bool branch_taken_0x1f5080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5080) {
            ctx->pc = 0x1F5084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5080u;
            // 0x1f5084: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F50A8u;
            goto label_1f50a8;
        }
    }
    ctx->pc = 0x1F5088u;
label_1f5088:
    // 0x1f5088: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1f5088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1f508c:
    // 0x1f508c: 0x2e5082a  slt         $at, $s7, $a1
    ctx->pc = 0x1f508cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1f5090:
    // 0x1f5090: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_1f5094:
    if (ctx->pc == 0x1F5094u) {
        ctx->pc = 0x1F5094u;
            // 0x1f5094: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5098u;
        goto label_1f5098;
    }
    ctx->pc = 0x1F5090u;
    {
        const bool branch_taken_0x1f5090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5090) {
            ctx->pc = 0x1F5094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5090u;
            // 0x1f5094: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5098u;
            goto label_1f5098;
        }
    }
    ctx->pc = 0x1F5098u;
label_1f5098:
    // 0x1f5098: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x1f5098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_1f509c:
    // 0x1f509c: 0xc0a725c  jal         func_29C970
label_1f50a0:
    if (ctx->pc == 0x1F50A0u) {
        ctx->pc = 0x1F50A0u;
            // 0x1f50a0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1F50A4u;
        goto label_1f50a4;
    }
    ctx->pc = 0x1F509Cu;
    SET_GPR_U32(ctx, 31, 0x1F50A4u);
    ctx->pc = 0x1F50A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F509Cu;
            // 0x1f50a0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F50A4u; }
        if (ctx->pc != 0x1F50A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F50A4u; }
        if (ctx->pc != 0x1F50A4u) { return; }
    }
    ctx->pc = 0x1F50A4u;
label_1f50a4:
    // 0x1f50a4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f50a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f50a8:
    // 0x1f50a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f50a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f50ac:
    // 0x1f50ac: 0x320f809  jalr        $t9
label_1f50b0:
    if (ctx->pc == 0x1F50B0u) {
        ctx->pc = 0x1F50B0u;
            // 0x1f50b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F50B4u;
        goto label_1f50b4;
    }
    ctx->pc = 0x1F50ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F50B4u);
        ctx->pc = 0x1F50B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F50ACu;
            // 0x1f50b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F50B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F50B4u; }
            if (ctx->pc != 0x1F50B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F50B4u;
label_1f50b4:
    // 0x1f50b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f50b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f50b8:
    // 0x1f50b8: 0x1ae00043  blez        $s7, . + 4 + (0x43 << 2)
label_1f50bc:
    if (ctx->pc == 0x1F50BCu) {
        ctx->pc = 0x1F50BCu;
            // 0x1f50bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F50C0u;
        goto label_1f50c0;
    }
    ctx->pc = 0x1F50B8u;
    {
        const bool branch_taken_0x1f50b8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1F50BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F50B8u;
            // 0x1f50bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50b8) {
            ctx->pc = 0x1F51C8u;
            goto label_1f51c8;
        }
    }
    ctx->pc = 0x1F50C0u;
label_1f50c0:
    // 0x1f50c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f50c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f50c4:
    // 0x1f50c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f50c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f50c8:
    // 0x1f50c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f50c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f50cc:
    // 0x1f50cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f50ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f50d0:
    // 0x1f50d0: 0x320f809  jalr        $t9
label_1f50d4:
    if (ctx->pc == 0x1F50D4u) {
        ctx->pc = 0x1F50D4u;
            // 0x1f50d4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F50D8u;
        goto label_1f50d8;
    }
    ctx->pc = 0x1F50D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F50D8u);
        ctx->pc = 0x1F50D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F50D0u;
            // 0x1f50d4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F50D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F50D8u; }
            if (ctx->pc != 0x1F50D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F50D8u;
label_1f50d8:
    // 0x1f50d8: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x1f50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
label_1f50dc:
    // 0x1f50dc: 0x27a402cc  addiu       $a0, $sp, 0x2CC
    ctx->pc = 0x1f50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_1f50e0:
    // 0x1f50e0: 0xafb102b4  sw          $s1, 0x2B4($sp)
    ctx->pc = 0x1f50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 17));
label_1f50e4:
    // 0x1f50e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f50e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f50e8:
    // 0x1f50e8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f50ec:
    // 0x1f50ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f50ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f50f0:
    // 0x1f50f0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1f50f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f50f4:
    // 0x1f50f4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1f50f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f50f8:
    // 0x1f50f8: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1f50f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f50fc:
    // 0x1f50fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f50fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f5100:
    // 0x1f5100: 0x320f809  jalr        $t9
label_1f5104:
    if (ctx->pc == 0x1F5104u) {
        ctx->pc = 0x1F5104u;
            // 0x1f5104: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5108u;
        goto label_1f5108;
    }
    ctx->pc = 0x1F5100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5108u);
        ctx->pc = 0x1F5104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5100u;
            // 0x1f5104: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5108u; }
            if (ctx->pc != 0x1F5108u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5108u;
label_1f5108:
    // 0x1f5108: 0x27a202cc  addiu       $v0, $sp, 0x2CC
    ctx->pc = 0x1f5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_1f510c:
    // 0x1f510c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f510cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5110:
    // 0x1f5110: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1f5114:
    if (ctx->pc == 0x1F5114u) {
        ctx->pc = 0x1F5118u;
        goto label_1f5118;
    }
    ctx->pc = 0x1F5110u;
    {
        const bool branch_taken_0x1f5110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5110) {
            ctx->pc = 0x1F51A0u;
            goto label_1f51a0;
        }
    }
    ctx->pc = 0x1F5118u;
label_1f5118:
    // 0x1f5118: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1f5118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1f511c:
    // 0x1f511c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1f511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1f5120:
    // 0x1f5120: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x1f5120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1f5124:
    // 0x1f5124: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f5124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f5128:
    // 0x1f5128: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f5128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f512c:
    // 0x1f512c: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1f512cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f5130:
    // 0x1f5130: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1f5130u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_1f5134:
    // 0x1f5134: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1f5134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1f5138:
    // 0x1f5138: 0x8fa902b0  lw          $t1, 0x2B0($sp)
    ctx->pc = 0x1f5138u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_1f513c:
    // 0x1f513c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5140:
    // 0x1f5140: 0x68b021  addu        $s6, $v1, $t0
    ctx->pc = 0x1f5140u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f5144:
    // 0x1f5144: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x1f5144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f5148:
    // 0x1f5148: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1f5148u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1f514c:
    // 0x1f514c: 0x82630010  lb          $v1, 0x10($s3)
    ctx->pc = 0x1f514cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_1f5150:
    // 0x1f5150: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1f5154:
    // 0x1f5154: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f5154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f5158:
    // 0x1f5158: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f515c:
    if (ctx->pc == 0x1F515Cu) {
        ctx->pc = 0x1F515Cu;
            // 0x1f515c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5160u;
        goto label_1f5160;
    }
    ctx->pc = 0x1F5158u;
    {
        const bool branch_taken_0x1f5158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5158u;
            // 0x1f515c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5158) {
            ctx->pc = 0x1F5168u;
            goto label_1f5168;
        }
    }
    ctx->pc = 0x1F5160u;
label_1f5160:
    // 0x1f5160: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f5164:
    if (ctx->pc == 0x1F5164u) {
        ctx->pc = 0x1F5164u;
            // 0x1f5164: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1F5168u;
        goto label_1f5168;
    }
    ctx->pc = 0x1F5160u;
    {
        const bool branch_taken_0x1f5160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5160u;
            // 0x1f5164: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5160) {
            ctx->pc = 0x1F516Cu;
            goto label_1f516c;
        }
    }
    ctx->pc = 0x1F5168u;
label_1f5168:
    // 0x1f5168: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1f5168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1f516c:
    // 0x1f516c: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1f516cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1f5170:
    // 0x1f5170: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1f5170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f5174:
    // 0x1f5174: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f5174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f5178:
    // 0x1f5178: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f5178u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f517c:
    // 0x1f517c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f517cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f5180:
    // 0x1f5180: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f5184:
    // 0x1f5184: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f5188:
    // 0x1f5188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f518c:
    // 0x1f518c: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1f518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1f5190:
    // 0x1f5190: 0x40f809  jalr        $v0
label_1f5194:
    if (ctx->pc == 0x1F5194u) {
        ctx->pc = 0x1F5198u;
        goto label_1f5198;
    }
    ctx->pc = 0x1F5190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5198u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5198u; }
            if (ctx->pc != 0x1F5198u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5198u;
label_1f5198:
    // 0x1f5198: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x1f5198u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_1f519c:
    // 0x1f519c: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x1f519cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
label_1f51a0:
    // 0x1f51a0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f51a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f51a4:
    // 0x1f51a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f51a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f51a8:
    // 0x1f51a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f51a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f51ac:
    // 0x1f51ac: 0x320f809  jalr        $t9
label_1f51b0:
    if (ctx->pc == 0x1F51B0u) {
        ctx->pc = 0x1F51B0u;
            // 0x1f51b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F51B4u;
        goto label_1f51b4;
    }
    ctx->pc = 0x1F51ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F51B4u);
        ctx->pc = 0x1F51B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51ACu;
            // 0x1f51b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F51B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F51B4u; }
            if (ctx->pc != 0x1F51B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F51B4u;
label_1f51b4:
    // 0x1f51b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f51b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f51b8:
    // 0x1f51b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f51b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f51bc:
    // 0x1f51bc: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x1f51bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1f51c0:
    // 0x1f51c0: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
label_1f51c4:
    if (ctx->pc == 0x1F51C4u) {
        ctx->pc = 0x1F51C4u;
            // 0x1f51c4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1F51C8u;
        goto label_1f51c8;
    }
    ctx->pc = 0x1F51C0u;
    {
        const bool branch_taken_0x1f51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f51c0) {
            ctx->pc = 0x1F51C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51C0u;
            // 0x1f51c4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F50C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f50c4;
        }
    }
    ctx->pc = 0x1F51C8u;
label_1f51c8:
    // 0x1f51c8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1f51c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f51cc:
    // 0x1f51cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f51ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f51d0:
    // 0x1f51d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f51d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f51d4:
    // 0x1f51d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f51d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f51d8:
    // 0x1f51d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f51d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f51dc:
    // 0x1f51dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f51dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f51e0:
    // 0x1f51e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f51e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f51e4:
    // 0x1f51e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f51e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f51e8:
    // 0x1f51e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f51e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f51ec:
    // 0x1f51ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f51ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f51f0:
    // 0x1f51f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f51f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f51f4:
    // 0x1f51f4: 0x3e00008  jr          $ra
label_1f51f8:
    if (ctx->pc == 0x1F51F8u) {
        ctx->pc = 0x1F51F8u;
            // 0x1f51f8: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x1F51FCu;
        goto label_1f51fc;
    }
    ctx->pc = 0x1F51F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F51F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51F4u;
            // 0x1f51f8: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F51FCu;
label_1f51fc:
    // 0x1f51fc: 0x0  nop
    ctx->pc = 0x1f51fcu;
    // NOP
label_1f5200:
    // 0x1f5200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f5204:
    // 0x1f5204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f5208:
    // 0x1f5208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f520c:
    // 0x1f520c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5210:
    // 0x1f5210: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f5210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5214:
    // 0x1f5214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5218:
    // 0x1f5218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f5218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f521c:
    // 0x1f521c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5220:
    // 0x1f5220: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1f5220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1f5224:
    // 0x1f5224: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_1f5228:
    if (ctx->pc == 0x1F5228u) {
        ctx->pc = 0x1F5228u;
            // 0x1f5228: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F522Cu;
        goto label_1f522c;
    }
    ctx->pc = 0x1F5224u;
    {
        const bool branch_taken_0x1f5224 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F5228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5224u;
            // 0x1f5228: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5224) {
            ctx->pc = 0x1F5260u;
            goto label_1f5260;
        }
    }
    ctx->pc = 0x1F522Cu;
label_1f522c:
    // 0x1f522c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5230:
    // 0x1f5230: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f5230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1f5234:
    // 0x1f5234: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f5238:
    // 0x1f5238: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f5238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f523c:
    // 0x1f523c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f523cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5240:
    // 0x1f5240: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1f5240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1f5244:
    // 0x1f5244: 0x320f809  jalr        $t9
label_1f5248:
    if (ctx->pc == 0x1F5248u) {
        ctx->pc = 0x1F5248u;
            // 0x1f5248: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F524Cu;
        goto label_1f524c;
    }
    ctx->pc = 0x1F5244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F524Cu);
        ctx->pc = 0x1F5248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5244u;
            // 0x1f5248: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F524Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F524Cu; }
            if (ctx->pc != 0x1F524Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F524Cu;
label_1f524c:
    // 0x1f524c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1f524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1f5250:
    // 0x1f5250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f5250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f5254:
    // 0x1f5254: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1f5254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f5258:
    // 0x1f5258: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1f525c:
    if (ctx->pc == 0x1F525Cu) {
        ctx->pc = 0x1F525Cu;
            // 0x1f525c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1F5260u;
        goto label_1f5260;
    }
    ctx->pc = 0x1F5258u;
    {
        const bool branch_taken_0x1f5258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5258u;
            // 0x1f525c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5258) {
            ctx->pc = 0x1F5230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5230;
        }
    }
    ctx->pc = 0x1F5260u;
label_1f5260:
    // 0x1f5260: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
label_1f5264:
    if (ctx->pc == 0x1F5264u) {
        ctx->pc = 0x1F5264u;
            // 0x1f5264: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1F5268u;
        goto label_1f5268;
    }
    ctx->pc = 0x1F5260u;
    {
        const bool branch_taken_0x1f5260 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5260) {
            ctx->pc = 0x1F5264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5260u;
            // 0x1f5264: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5280u;
            goto label_1f5280;
        }
    }
    ctx->pc = 0x1F5268u;
label_1f5268:
    // 0x1f5268: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f5268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f526c:
    // 0x1f526c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f526cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5270:
    // 0x1f5270: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f5274:
    // 0x1f5274: 0x320f809  jalr        $t9
label_1f5278:
    if (ctx->pc == 0x1F5278u) {
        ctx->pc = 0x1F5278u;
            // 0x1f5278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F527Cu;
        goto label_1f527c;
    }
    ctx->pc = 0x1F5274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F527Cu);
        ctx->pc = 0x1F5278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5274u;
            // 0x1f5278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F527Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F527Cu; }
            if (ctx->pc != 0x1F527Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F527Cu;
label_1f527c:
    // 0x1f527c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5280:
    // 0x1f5280: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5284:
    // 0x1f5284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5288:
    // 0x1f5288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f528c:
    // 0x1f528c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f528cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5290:
    // 0x1f5290: 0x3e00008  jr          $ra
label_1f5294:
    if (ctx->pc == 0x1F5294u) {
        ctx->pc = 0x1F5294u;
            // 0x1f5294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1F5298u;
        goto label_1f5298;
    }
    ctx->pc = 0x1F5290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5290u;
            // 0x1f5294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5298u;
label_1f5298:
    // 0x1f5298: 0x0  nop
    ctx->pc = 0x1f5298u;
    // NOP
label_1f529c:
    // 0x1f529c: 0x0  nop
    ctx->pc = 0x1f529cu;
    // NOP
label_1f52a0:
    // 0x1f52a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f52a4:
    // 0x1f52a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f52a8:
    // 0x1f52a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f52a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f52ac:
    // 0x1f52ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f52acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f52b0:
    // 0x1f52b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f52b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f52b4:
    // 0x1f52b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f52b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f52b8:
    // 0x1f52b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f52b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f52bc:
    // 0x1f52bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f52bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f52c0:
    // 0x1f52c0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1f52c4:
    // 0x1f52c4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_1f52c8:
    if (ctx->pc == 0x1F52C8u) {
        ctx->pc = 0x1F52C8u;
            // 0x1f52c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F52CCu;
        goto label_1f52cc;
    }
    ctx->pc = 0x1F52C4u;
    {
        const bool branch_taken_0x1f52c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F52C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52C4u;
            // 0x1f52c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52c4) {
            ctx->pc = 0x1F5300u;
            goto label_1f5300;
        }
    }
    ctx->pc = 0x1F52CCu;
label_1f52cc:
    // 0x1f52cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f52ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f52d0:
    // 0x1f52d0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1f52d4:
    // 0x1f52d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f52d8:
    // 0x1f52d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f52d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f52dc:
    // 0x1f52dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f52dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f52e0:
    // 0x1f52e0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1f52e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1f52e4:
    // 0x1f52e4: 0x320f809  jalr        $t9
label_1f52e8:
    if (ctx->pc == 0x1F52E8u) {
        ctx->pc = 0x1F52E8u;
            // 0x1f52e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F52ECu;
        goto label_1f52ec;
    }
    ctx->pc = 0x1F52E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F52ECu);
        ctx->pc = 0x1F52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52E4u;
            // 0x1f52e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F52ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F52ECu; }
            if (ctx->pc != 0x1F52ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1F52ECu;
label_1f52ec:
    // 0x1f52ec: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1f52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1f52f0:
    // 0x1f52f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f52f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f52f4:
    // 0x1f52f4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1f52f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f52f8:
    // 0x1f52f8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1f52fc:
    if (ctx->pc == 0x1F52FCu) {
        ctx->pc = 0x1F52FCu;
            // 0x1f52fc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1F5300u;
        goto label_1f5300;
    }
    ctx->pc = 0x1F52F8u;
    {
        const bool branch_taken_0x1f52f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F52FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52F8u;
            // 0x1f52fc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52f8) {
            ctx->pc = 0x1F52D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F5300u;
label_1f5300:
    // 0x1f5300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5304:
    // 0x1f5304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5308:
    // 0x1f5308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f530c:
    // 0x1f530c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f530cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5310:
    // 0x1f5310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5314:
    // 0x1f5314: 0x3e00008  jr          $ra
label_1f5318:
    if (ctx->pc == 0x1F5318u) {
        ctx->pc = 0x1F5318u;
            // 0x1f5318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1F531Cu;
        goto label_1f531c;
    }
    ctx->pc = 0x1F5314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5314u;
            // 0x1f5318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F531Cu;
label_1f531c:
    // 0x1f531c: 0x0  nop
    ctx->pc = 0x1f531cu;
    // NOP
label_1f5320:
    // 0x1f5320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f5324:
    // 0x1f5324: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f5324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f5328:
    // 0x1f5328: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f5328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f532c:
    // 0x1f532c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f5330:
    // 0x1f5330: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f5330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5334:
    // 0x1f5334: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f5334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f5338:
    // 0x1f5338: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f5338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f533c:
    // 0x1f533c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f5340:
    // 0x1f5340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f5340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5344:
    // 0x1f5344: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1f5344u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1f5348:
    // 0x1f5348: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f5348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f534c:
    // 0x1f534c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1f534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1f5350:
    // 0x1f5350: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1f5350u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1f5354:
    // 0x1f5354: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_1f5358:
    if (ctx->pc == 0x1F5358u) {
        ctx->pc = 0x1F5358u;
            // 0x1f5358: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1F535Cu;
        goto label_1f535c;
    }
    ctx->pc = 0x1F5354u;
    {
        const bool branch_taken_0x1f5354 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F5358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5354u;
            // 0x1f5358: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5354) {
            ctx->pc = 0x1F5398u;
            goto label_1f5398;
        }
    }
    ctx->pc = 0x1F535Cu;
label_1f535c:
    // 0x1f535c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5360:
    // 0x1f5360: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1f5364:
    // 0x1f5364: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f5364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1f5368:
    // 0x1f5368: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f5368u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1f536c:
    // 0x1f536c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f5370:
    // 0x1f5370: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f5370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f5374:
    // 0x1f5374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5378:
    // 0x1f5378: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1f5378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1f537c:
    // 0x1f537c: 0x320f809  jalr        $t9
label_1f5380:
    if (ctx->pc == 0x1F5380u) {
        ctx->pc = 0x1F5380u;
            // 0x1f5380: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5384u;
        goto label_1f5384;
    }
    ctx->pc = 0x1F537Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5384u);
        ctx->pc = 0x1F5380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F537Cu;
            // 0x1f5380: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5384u; }
            if (ctx->pc != 0x1F5384u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5384u;
label_1f5384:
    // 0x1f5384: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1f5384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1f5388:
    // 0x1f5388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f5388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f538c:
    // 0x1f538c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1f538cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f5390:
    // 0x1f5390: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1f5394:
    if (ctx->pc == 0x1F5394u) {
        ctx->pc = 0x1F5394u;
            // 0x1f5394: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1F5398u;
        goto label_1f5398;
    }
    ctx->pc = 0x1F5390u;
    {
        const bool branch_taken_0x1f5390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5390u;
            // 0x1f5394: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5390) {
            ctx->pc = 0x1F5360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5360;
        }
    }
    ctx->pc = 0x1F5398u;
label_1f5398:
    // 0x1f5398: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f5398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f539c:
    // 0x1f539c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f539cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f53a0:
    // 0x1f53a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1f53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f53a4:
    // 0x1f53a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f53a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f53a8:
    // 0x1f53a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f53a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f53ac:
    // 0x1f53ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f53acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f53b0:
    // 0x1f53b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f53b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f53b4:
    // 0x1f53b4: 0x3e00008  jr          $ra
label_1f53b8:
    if (ctx->pc == 0x1F53B8u) {
        ctx->pc = 0x1F53B8u;
            // 0x1f53b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F53BCu;
        goto label_1f53bc;
    }
    ctx->pc = 0x1F53B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F53B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F53B4u;
            // 0x1f53b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F53BCu;
label_1f53bc:
    // 0x1f53bc: 0x0  nop
    ctx->pc = 0x1f53bcu;
    // NOP
}
